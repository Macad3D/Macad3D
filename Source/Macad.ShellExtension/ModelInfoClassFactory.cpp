#include "ShellExtensionPCH.h"
#include "ModelInfoClassFactory.h"
#include "ModelInfoProvider.h" 
 
 
extern long g_cDllRef; 
 
 
ModelInfoClassFactory::ModelInfoClassFactory() 
	: m_cRef(1) 
{ 
    InterlockedIncrement(&g_cDllRef); 
} 
 
ModelInfoClassFactory::~ModelInfoClassFactory() 
{ 
    InterlockedDecrement(&g_cDllRef); 
} 
 
 
// 
// IUnknown 
// 

#pragma warning(disable : 4838) // macros in shlwapi.h generate warning C4838: conversion from 'DWORD' to 'int' requires a narrowing conversion
IFACEMETHODIMP ModelInfoClassFactory::QueryInterface(REFIID riid, void **ppv) 
{ 
    static const QITAB qit[] =  
    { 
        QITABENT(ModelInfoClassFactory, IClassFactory), 
        { nullptr }, 
    }; 
    return QISearch(this, qit, riid, ppv); 
} 
#pragma warning(default : 4838)

IFACEMETHODIMP_(ULONG) ModelInfoClassFactory::AddRef() 
{ 
    return InterlockedIncrement(&m_cRef); 
} 
 
IFACEMETHODIMP_(ULONG) ModelInfoClassFactory::Release() 
{ 
    ULONG cRef = InterlockedDecrement(&m_cRef); 
    if (0 == cRef) 
    { 
        delete this; 
    } 
    return cRef; 
} 
 
 
//  
// IClassFactory 
// 
 
IFACEMETHODIMP ModelInfoClassFactory::CreateInstance(IUnknown *pUnkOuter, REFIID riid, void **ppv) 
{ 
    HRESULT hr = CLASS_E_NOAGGREGATION; 
 
    // pUnkOuter is used for aggregation. We do not support it in the sample. 
    if (pUnkOuter == nullptr) 
    { 
        hr = E_OUTOFMEMORY; 
 
        // Create the COM component. 
        ModelInfoProvider *pExt = new (std::nothrow) ModelInfoProvider(); 
        if (pExt) 
        { 
            // Query the specified interface. 
            hr = pExt->QueryInterface(riid, ppv); 
            pExt->Release(); 
        } 
    } 
 
    return hr; 
} 
 
IFACEMETHODIMP ModelInfoClassFactory::LockServer(BOOL fLock) 
{ 
    if (fLock) 
    { 
        InterlockedIncrement(&g_cDllRef); 
    } 
    else 
    { 
        InterlockedDecrement(&g_cDllRef); 
    } 
    return S_OK; 
}
