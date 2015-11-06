#include "stdafx.h"
#include "PluginTable.h"
#include "Plugins.h"
#include "tcmdl_i.h"

CPluginTable::CPluginTable(void)
{
    ASSERT_IF_FAILED(AddObject(CLSID_TrayNotifyManager, L"Tray notify manager"));
    ASSERT_IF_FAILED(AddObject(CLSID_SettingsFactory, L"Settings factory"));
    ASSERT_IF_FAILED(AddPluginInfoRemote(PNAMESP_HOSTFORM, PVIEWTYPE_NOTIFIER_SERVICE, CLSID_TimerService, CLSID_TimerService, L"Timer service"));
    ASSERT_IF_FAILED(AddPluginInfoRemote(PNAMESP_HOSTFORM, PVIEWTYPE_NOTIFIER_SERVICE, CLSID_ThreadService, CLSID_ThreadService, L"Thread service"));
    ASSERT_IF_FAILED(AddPluginInfo(PNAMESP_HOSTFORM, PVIEWTYPE_NOTIFIER_SERVICE, CLSID_UpdateIssueService, CLSID_UpdateIssueService, L"Update status service"));
    ASSERT_IF_FAILED(AddPluginInfo(PNAMESP_HOSTFORM, PVIEWTYPE_NOTIFIER_SERVICE, CLSID_UpdateViewService, CLSID_UpdateViewService, L"Update systray service"));
    ASSERT_IF_FAILED(AddPluginInfo(PNAMESP_HOSTFORM, PVIEWTYPE_NOTIFIER_COMMAND, CLSID_OpenJiraCommand, CLSID_OpenJiraCommand, L"Open TeamCity command"));
}

HRESULT CPluginTable::FinalConstruct()
{
	return S_OK;
}
