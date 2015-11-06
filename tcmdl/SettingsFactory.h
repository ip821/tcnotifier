// SettingsProvider.h : Declaration of the CSettingsProvider

#pragma once
#include "resource.h"       // main symbols
#include "tcmdl_i.h"

using namespace ATL;


// CSettingsProvider

class ATL_NO_VTABLE CSettingsFactory :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CSettingsFactory, &CLSID_SettingsFactoryImpl>,
	public ISettingsFactory
{
public:
	CSettingsFactory()
	{
	}

	DECLARE_NO_REGISTRY()

	BEGIN_COM_MAP(CSettingsFactory)
		COM_INTERFACE_ENTRY(ISettingsFactory)
	END_COM_MAP()

public:
	STDMETHOD(CreateSettings)(ISettings** ppSettings);
};

OBJECT_ENTRY_AUTO(__uuidof(SettingsFactoryImpl), CSettingsFactory)
