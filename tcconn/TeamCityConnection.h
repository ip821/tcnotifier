#pragma once

#include "tcconn_i.h"

using namespace ATL;
using namespace std;

// CTeamCityConnection

class ATL_NO_VTABLE CTeamCityConnection :
    public CComObjectRootEx<CComSingleThreadModel>,
    public CComCoClass<CTeamCityConnection, &CLSID_TeamCityConnection>,
    public ITeamCityConnection
{
public:
    CTeamCityConnection()
    {
    }

    DECLARE_NO_REGISTRY()

    BEGIN_COM_MAP(CTeamCityConnection)
        COM_INTERFACE_ENTRY(ITeamCityConnection)
    END_COM_MAP()

private:

public:

    STDMETHOD(Sample)();
};

OBJECT_ENTRY_AUTO(__uuidof(TeamCityConnection), CTeamCityConnection)
