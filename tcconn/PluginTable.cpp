#include "stdafx.h"
#include "PluginTable.h"
#include "Plugins.h"

CPluginTable::CPluginTable(void)
{
    ASSERT_IF_FAILED(AddObject(CLSID_TeamCityConnection, L"TeamCity connection"));
}

HRESULT CPluginTable::FinalConstruct()
{
	return S_OK;
}
