

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Nov 06 09:37:48 2015
 */
/* Compiler settings for tcconn.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __tcconn_i_h__
#define __tcconn_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __PluginTable_FWD_DEFINED__
#define __PluginTable_FWD_DEFINED__

#ifdef __cplusplus
typedef class PluginTable PluginTable;
#else
typedef struct PluginTable PluginTable;
#endif /* __cplusplus */

#endif 	/* __PluginTable_FWD_DEFINED__ */


#ifndef __TeamCityConnection_FWD_DEFINED__
#define __TeamCityConnection_FWD_DEFINED__

#ifdef __cplusplus
typedef class TeamCityConnection TeamCityConnection;
#else
typedef struct TeamCityConnection TeamCityConnection;
#endif /* __cplusplus */

#endif 	/* __TeamCityConnection_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "tcconn_contract_i.h"
#include "netmdl_contract_i.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __tcconnLib_LIBRARY_DEFINED__
#define __tcconnLib_LIBRARY_DEFINED__

/* library tcconnLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_tcconnLib;

EXTERN_C const CLSID CLSID_PluginTable;

#ifdef __cplusplus

class DECLSPEC_UUID("6EA78630-DC6D-4D2B-91F0-686B260F29D6")
PluginTable;
#endif

EXTERN_C const CLSID CLSID_TeamCityConnection;

#ifdef __cplusplus

class DECLSPEC_UUID("7727F197-99D3-4713-A26B-2A8196C6EB5C")
TeamCityConnection;
#endif
#endif /* __tcconnLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


