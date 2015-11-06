

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Nov 06 09:55:47 2015
 */
/* Compiler settings for tcmdl.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IUpdateIssueService,0xC0109BFA,0xA495,0x421A,0xA6,0x17,0x27,0x92,0xEB,0xE1,0x92,0x31);


MIDL_DEFINE_GUID(IID, IID_ITrayNotifyManager,0x9F72F815,0x1CC9,0x43FD,0x85,0x80,0x33,0x6B,0x9B,0xDF,0x0E,0x13);


MIDL_DEFINE_GUID(IID, IID_IUpdateViewService,0x52CC2321,0x28EA,0x42D8,0xAC,0x81,0x55,0x24,0x23,0x27,0x35,0xC5);


MIDL_DEFINE_GUID(IID, LIBID_tcmdlLib,0x10D7F6FA,0xC476,0x4494,0xB3,0x0E,0x5C,0xA6,0xEA,0x74,0xD1,0xB4);


MIDL_DEFINE_GUID(CLSID, CLSID_PluginTable,0x6EA78630,0xDC6D,0x4D2B,0x91,0xF0,0x68,0x6B,0x26,0x0F,0x29,0xD6);


MIDL_DEFINE_GUID(CLSID, CLSID_SettingsFactoryImpl,0xCA6C6762,0x02B5,0x4305,0x83,0x69,0x01,0x7E,0x66,0x9E,0x81,0xD0);


MIDL_DEFINE_GUID(CLSID, CLSID_UpdateIssueService,0x919DE6D7,0xEC71,0x4913,0xA2,0xCA,0x65,0x04,0xC5,0x90,0x4C,0xFE);


MIDL_DEFINE_GUID(CLSID, CLSID_UpdateViewService,0x2108A036,0x76B6,0x407D,0xBA,0x5F,0xEE,0x6D,0xA5,0x30,0x1A,0x2E);


MIDL_DEFINE_GUID(CLSID, CLSID_OpenJiraCommand,0xE422C3C7,0x491D,0x4715,0xA6,0x14,0x9A,0xCB,0xFD,0x9E,0x1B,0x5C);


MIDL_DEFINE_GUID(CLSID, CLSID_TrayNotifyManager,0xAB07F1CA,0x589D,0x4F9E,0x85,0xE1,0x0D,0x6B,0xB5,0xE4,0x39,0xB6);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



