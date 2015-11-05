// dllmain.h : Declaration of module class.

class CtcconnModule : public ATL::CAtlDllModuleT< CtcconnModule >
{
public :
	DECLARE_LIBID(LIBID_tcconnLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_TCCONN, "{B9101866-4086-44C3-8F8C-B4B6AFD618AD}")
};

extern class CtcconnModule _AtlModule;
