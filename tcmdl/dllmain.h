// dllmain.h : Declaration of module class.

class CtcmdlModule : public ATL::CAtlDllModuleT< CtcmdlModule >
{
public :
	DECLARE_LIBID(LIBID_tcmdlLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_TCMDL, "{8FA0E32A-D76B-41C7-BF7D-6F8D68835162}")
};

extern class CtcmdlModule _AtlModule;
