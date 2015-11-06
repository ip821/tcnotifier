// UpdateIssueService.cpp : Implementation of CUpdateIssueService

#include "stdafx.h"
#include "UpdateIssueService.h"
#include "..\JiraConnection\Plugins.h"
#include "..\JiraConnection\JiraFields.h"

// CUpdateIssueService

STDMETHODIMP CUpdateIssueService::Load(ISettings *pSettings)
{
	CHECK_E_POINTER(pSettings);
	{
		boost::lock_guard<boost::mutex> lock(m_mutex);
		m_pSettings = pSettings;
	}
	return S_OK;
}

STDMETHODIMP CUpdateIssueService::OnInitialized(IServiceProvider *pServiceProvider)
{
	CHECK_E_POINTER(pServiceProvider);
	CComPtr<IUnknown> pUnk;
	RETURN_IF_FAILED(QueryInterface(__uuidof(IUnknown), (LPVOID*)&pUnk));
	RETURN_IF_FAILED(pServiceProvider->QueryService(CLSID_ThreadService, &m_pThreadService));
	RETURN_IF_FAILED(AtlAdvise(m_pThreadService, pUnk, __uuidof(IThreadServiceEventSink), &m_dwAdvice));
	RETURN_IF_FAILED(pServiceProvider->QueryService(CLSID_TimerService, &m_pTimerService));
	return S_OK;
}

STDMETHODIMP CUpdateIssueService::OnShutdown()
{
	RETURN_IF_FAILED(AtlUnadvise(m_pThreadService, __uuidof(IThreadServiceEventSink), m_dwAdvice));
	m_pSettings.Release();
	m_pThreadService.Release();
	m_pTimerService.Release();
	return S_OK;
}

STDMETHODIMP CUpdateIssueService::OnStart(IVariantObject* pResult)
{
	CHECK_E_POINTER(pResult);
	RETURN_IF_FAILED(m_pTimerService->StopTimer());
	return S_OK;
}

STDMETHODIMP CUpdateIssueService::OnRun(IVariantObject* pResult)
{
	CHECK_E_POINTER(pResult);
	CComPtr<ISettings> pSettings;
	{
		boost::lock_guard<boost::mutex> lock(m_mutex);
		pSettings = m_pSettings;
	}
	CComBSTR bstrServer;
	RETURN_IF_FAILED(HrSettingsGetBSTR(pSettings, KEY_SERVER, &bstrServer));

	CComPtr<IJiraConnection> pJiraXmlRpcConnection;
	RETURN_IF_FAILED(HrCoCreateInstance(CLSID_JiraConnection, &pJiraXmlRpcConnection));

	RETURN_IF_FAILED(pJiraXmlRpcConnection->OpenConnection(bstrServer));

	CComBSTR bstrUser;
	RETURN_IF_FAILED(HrSettingsGetBSTR(pSettings, KEY_USER, &bstrUser));

	CComBSTR bstrPwd;
	RETURN_IF_FAILED(HrSettingsGetBSTR(pSettings, KEY_PASSWORD, &bstrPwd));

	HRESULT hr = pJiraXmlRpcConnection->Login(bstrUser, bstrPwd);
	if (FAILED(hr))
	{
		HandleJiraError(pJiraXmlRpcConnection, pResult);
		return hr;
	}

	return S_OK;
}

STDMETHODIMP CUpdateIssueService::OnFinish(IVariantObject* pResult)
{
	CHECK_E_POINTER(pResult);
	RETURN_IF_FAILED(m_pTimerService->ResumeTimer());
	return S_OK;
}

//void CUpdateIssueService::HandleJiraError(IJiraConnection *pJiraXmlRpcConnection, IVariantObject* pResultObject)
//{
//	CComPtr<IJiraConnection> pJiraXmlRpcConnectionSafe = pJiraXmlRpcConnection;
//	CComQIPtr<IErrorInfo> pErrorInfo = pJiraXmlRpcConnectionSafe;
//	if (!pErrorInfo)
//		return;
//
//	CComBSTR bstr;
//	pErrorInfo->GetDescription(&bstr);
//	pResultObject->SetVariantValue(KEY_HAS_MESSAGE, &CComVariant(bstr));
//}
