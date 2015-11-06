

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __tcmdl_i_h__
#define __tcmdl_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IUpdateIssueService_FWD_DEFINED__
#define __IUpdateIssueService_FWD_DEFINED__
typedef interface IUpdateIssueService IUpdateIssueService;

#endif 	/* __IUpdateIssueService_FWD_DEFINED__ */


#ifndef __ITrayNotifyManager_FWD_DEFINED__
#define __ITrayNotifyManager_FWD_DEFINED__
typedef interface ITrayNotifyManager ITrayNotifyManager;

#endif 	/* __ITrayNotifyManager_FWD_DEFINED__ */


#ifndef __IUpdateViewService_FWD_DEFINED__
#define __IUpdateViewService_FWD_DEFINED__
typedef interface IUpdateViewService IUpdateViewService;

#endif 	/* __IUpdateViewService_FWD_DEFINED__ */


#ifndef __PluginTable_FWD_DEFINED__
#define __PluginTable_FWD_DEFINED__

#ifdef __cplusplus
typedef class PluginTable PluginTable;
#else
typedef struct PluginTable PluginTable;
#endif /* __cplusplus */

#endif 	/* __PluginTable_FWD_DEFINED__ */


#ifndef __SettingsFactoryImpl_FWD_DEFINED__
#define __SettingsFactoryImpl_FWD_DEFINED__

#ifdef __cplusplus
typedef class SettingsFactoryImpl SettingsFactoryImpl;
#else
typedef struct SettingsFactoryImpl SettingsFactoryImpl;
#endif /* __cplusplus */

#endif 	/* __SettingsFactoryImpl_FWD_DEFINED__ */


#ifndef __UpdateIssueService_FWD_DEFINED__
#define __UpdateIssueService_FWD_DEFINED__

#ifdef __cplusplus
typedef class UpdateIssueService UpdateIssueService;
#else
typedef struct UpdateIssueService UpdateIssueService;
#endif /* __cplusplus */

#endif 	/* __UpdateIssueService_FWD_DEFINED__ */


#ifndef __UpdateViewService_FWD_DEFINED__
#define __UpdateViewService_FWD_DEFINED__

#ifdef __cplusplus
typedef class UpdateViewService UpdateViewService;
#else
typedef struct UpdateViewService UpdateViewService;
#endif /* __cplusplus */

#endif 	/* __UpdateViewService_FWD_DEFINED__ */


#ifndef __OpenJiraCommand_FWD_DEFINED__
#define __OpenJiraCommand_FWD_DEFINED__

#ifdef __cplusplus
typedef class OpenJiraCommand OpenJiraCommand;
#else
typedef struct OpenJiraCommand OpenJiraCommand;
#endif /* __cplusplus */

#endif 	/* __OpenJiraCommand_FWD_DEFINED__ */


#ifndef __TrayNotifyManager_FWD_DEFINED__
#define __TrayNotifyManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class TrayNotifyManager TrayNotifyManager;
#else
typedef struct TrayNotifyManager TrayNotifyManager;
#endif /* __cplusplus */

#endif 	/* __TrayNotifyManager_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "tcconn_contract_i.h"
#include "viewmdl_contract_i.h"
#include "asyncmdl_contract_i.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IUpdateIssueService_INTERFACE_DEFINED__
#define __IUpdateIssueService_INTERFACE_DEFINED__

/* interface IUpdateIssueService */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUpdateIssueService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C0109BFA-A495-421A-A617-2792EBE19231")
    IUpdateIssueService : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IUpdateIssueServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateIssueService * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateIssueService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateIssueService * This);
        
        END_INTERFACE
    } IUpdateIssueServiceVtbl;

    interface IUpdateIssueService
    {
        CONST_VTBL struct IUpdateIssueServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateIssueService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateIssueService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateIssueService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateIssueService_INTERFACE_DEFINED__ */


#ifndef __ITrayNotifyManager_INTERFACE_DEFINED__
#define __ITrayNotifyManager_INTERFACE_DEFINED__

/* interface ITrayNotifyManager */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITrayNotifyManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9F72F815-1CC9-43FD-8580-336B9BDF0E13")
    ITrayNotifyManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            ISystrayWindow *pSystrayWindow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Shutdown( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetIconToNormalIfPossible( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowBaloon( 
            LPCTSTR lpszText,
            LPCTSTR lpszCaption,
            SystrayBalloonStyle style,
            UINT uTimeout) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowErrorIcon( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowNewItemsIcon( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowNormalIcon( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowUpdateIcon( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITrayNotifyManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITrayNotifyManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITrayNotifyManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITrayNotifyManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            ITrayNotifyManager * This,
            ISystrayWindow *pSystrayWindow);
        
        HRESULT ( STDMETHODCALLTYPE *Shutdown )( 
            ITrayNotifyManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetIconToNormalIfPossible )( 
            ITrayNotifyManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *ShowBaloon )( 
            ITrayNotifyManager * This,
            LPCTSTR lpszText,
            LPCTSTR lpszCaption,
            SystrayBalloonStyle style,
            UINT uTimeout);
        
        HRESULT ( STDMETHODCALLTYPE *ShowErrorIcon )( 
            ITrayNotifyManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *ShowNewItemsIcon )( 
            ITrayNotifyManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *ShowNormalIcon )( 
            ITrayNotifyManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *ShowUpdateIcon )( 
            ITrayNotifyManager * This);
        
        END_INTERFACE
    } ITrayNotifyManagerVtbl;

    interface ITrayNotifyManager
    {
        CONST_VTBL struct ITrayNotifyManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITrayNotifyManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITrayNotifyManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITrayNotifyManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITrayNotifyManager_Initialize(This,pSystrayWindow)	\
    ( (This)->lpVtbl -> Initialize(This,pSystrayWindow) ) 

#define ITrayNotifyManager_Shutdown(This)	\
    ( (This)->lpVtbl -> Shutdown(This) ) 

#define ITrayNotifyManager_ResetIconToNormalIfPossible(This)	\
    ( (This)->lpVtbl -> ResetIconToNormalIfPossible(This) ) 

#define ITrayNotifyManager_ShowBaloon(This,lpszText,lpszCaption,style,uTimeout)	\
    ( (This)->lpVtbl -> ShowBaloon(This,lpszText,lpszCaption,style,uTimeout) ) 

#define ITrayNotifyManager_ShowErrorIcon(This)	\
    ( (This)->lpVtbl -> ShowErrorIcon(This) ) 

#define ITrayNotifyManager_ShowNewItemsIcon(This)	\
    ( (This)->lpVtbl -> ShowNewItemsIcon(This) ) 

#define ITrayNotifyManager_ShowNormalIcon(This)	\
    ( (This)->lpVtbl -> ShowNormalIcon(This) ) 

#define ITrayNotifyManager_ShowUpdateIcon(This)	\
    ( (This)->lpVtbl -> ShowUpdateIcon(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITrayNotifyManager_INTERFACE_DEFINED__ */


#ifndef __IUpdateViewService_INTERFACE_DEFINED__
#define __IUpdateViewService_INTERFACE_DEFINED__

/* interface IUpdateViewService */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUpdateViewService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("52CC2321-28EA-42D8-AC81-5524232735C5")
    IUpdateViewService : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTrayNotifyManager( 
            ITrayNotifyManager **ppTrayNotifyManager) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetIcon( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUpdateViewServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateViewService * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateViewService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateViewService * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrayNotifyManager )( 
            IUpdateViewService * This,
            ITrayNotifyManager **ppTrayNotifyManager);
        
        HRESULT ( STDMETHODCALLTYPE *ResetIcon )( 
            IUpdateViewService * This);
        
        END_INTERFACE
    } IUpdateViewServiceVtbl;

    interface IUpdateViewService
    {
        CONST_VTBL struct IUpdateViewServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateViewService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateViewService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateViewService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateViewService_GetTrayNotifyManager(This,ppTrayNotifyManager)	\
    ( (This)->lpVtbl -> GetTrayNotifyManager(This,ppTrayNotifyManager) ) 

#define IUpdateViewService_ResetIcon(This)	\
    ( (This)->lpVtbl -> ResetIcon(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateViewService_INTERFACE_DEFINED__ */



#ifndef __tcmdlLib_LIBRARY_DEFINED__
#define __tcmdlLib_LIBRARY_DEFINED__

/* library tcmdlLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_tcmdlLib;

EXTERN_C const CLSID CLSID_PluginTable;

#ifdef __cplusplus

class DECLSPEC_UUID("6EA78630-DC6D-4D2B-91F0-686B260F29D6")
PluginTable;
#endif

EXTERN_C const CLSID CLSID_SettingsFactoryImpl;

#ifdef __cplusplus

class DECLSPEC_UUID("CA6C6762-02B5-4305-8369-017E669E81D0")
SettingsFactoryImpl;
#endif

EXTERN_C const CLSID CLSID_UpdateIssueService;

#ifdef __cplusplus

class DECLSPEC_UUID("919DE6D7-EC71-4913-A2CA-6504C5904CFE")
UpdateIssueService;
#endif

EXTERN_C const CLSID CLSID_UpdateViewService;

#ifdef __cplusplus

class DECLSPEC_UUID("2108A036-76B6-407D-BA5F-EE6DA5301A2E")
UpdateViewService;
#endif

EXTERN_C const CLSID CLSID_OpenJiraCommand;

#ifdef __cplusplus

class DECLSPEC_UUID("E422C3C7-491D-4715-A614-9ACBFD9E1B5C")
OpenJiraCommand;
#endif

EXTERN_C const CLSID CLSID_TrayNotifyManager;

#ifdef __cplusplus

class DECLSPEC_UUID("AB07F1CA-589D-4F9E-85E1-0D6BB5E439B6")
TrayNotifyManager;
#endif
#endif /* __tcmdlLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


