#include "ShellExtensionPCH.h"
#include "ModelInfoProvider.h"
#include "Unzip.h" 
#include "ImageHelper.h"

extern HINSTANCE g_hInst; 
extern long g_cDllRef;

ModelInfoProvider::ModelInfoProvider() 
	: m_cRef(1)
	, m_pStream(nullptr) 
{ 
    InterlockedIncrement(&g_cDllRef); 
} 
 
 ModelInfoProvider::~ModelInfoProvider() 
{ 
    InterlockedDecrement(&g_cDllRef);

	if(m_pStream != nullptr)
	{
		m_pStream->Release();
		m_pStream = nullptr;
	}
} 
 
#pragma region IUnknown 
 
#pragma warning(disable : 4838) // macros in shlwapi.h generate warning C4838: conversion from 'DWORD' to 'int' requires a narrowing conversion
// Query to the interface the component supported. 
IFACEMETHODIMP ModelInfoProvider::QueryInterface(REFIID riid, void **ppv) 
{ 
    static const QITAB qit[] =  
    { 
        QITABENT(ModelInfoProvider, IThumbnailProvider), 
        QITABENT(ModelInfoProvider, IInitializeWithStream),  
        { nullptr }, 
    }; 
    return QISearch(this, qit, riid, ppv); 
} 
 #pragma warning(default : 4838)

// Increase the reference count for an interface on an object. 
IFACEMETHODIMP_(ULONG) ModelInfoProvider::AddRef() 
{ 
    return InterlockedIncrement(&m_cRef); 
} 
 
// Decrease the reference count for an interface on an object. 
IFACEMETHODIMP_(ULONG) ModelInfoProvider::Release() 
{ 
    ULONG cRef = InterlockedDecrement(&m_cRef); 
    if (0 == cRef) 
    { 
        delete this; 
    } 
 
    return cRef; 
} 
 
#pragma endregion 

#pragma region IInitializeWithStream 
 
// Initializes the thumbnail handler with a stream. 
IFACEMETHODIMP ModelInfoProvider::Initialize(IStream *pStream, DWORD grfMode) 
{ 
    // A handler instance should be initialized only once in its lifetime.  
    HRESULT hr = HRESULT_FROM_WIN32(ERROR_ALREADY_INITIALIZED); 
    if (m_pStream == nullptr) 
    { 
        // Take a reference to the stream if it has not been initialized yet. 
        hr = pStream->QueryInterface(&m_pStream); 
    } 
    return hr; 
} 
 
#pragma endregion 

#pragma region IThumbnailProvider 
 
// Gets a thumbnail image and alpha type. The GetThumbnail is called with the  
// largest desired size of the image, in pixels. Although the parameter is  
// called cx, this is used as the maximum size of both the x and y dimensions.  
// If the retrieved thumbnail is not square, then the longer axis is limited  
// by cx and the aspect ratio of the original image respected. On exit,  
// GetThumbnail provides a handle to the retrieved image. It also provides a  
// value that indicates the color format of the image and whether it has  
// valid alpha information. 
IFACEMETHODIMP ModelInfoProvider::GetThumbnail(UINT cx, HBITMAP *phbmp, WTS_ALPHATYPE *pdwAlpha) 
{ 
	*phbmp = nullptr;

    if (m_pStream == nullptr)
    {
	    return HRESULT_FROM_WIN32(ERROR_BAD_ARGUMENTS);
    }
		
	HZIP hZip = OpenZipIStream(m_pStream, nullptr);
	if(hZip == 0)
	{
	    return HRESULT_FROM_WIN32(ERROR_INTERNAL_ERROR);
    }

	ZIPENTRY zipEntry;
	int zipIndex = 0;
	if(FindZipItem(hZip, L"thumbnail.png", true, &zipIndex, &zipEntry) != 0)
	{
		return HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND);
	}

	long imageSize = zipEntry.unc_size;
	BYTE* imageBuffer = new BYTE[imageSize];
	if(UnzipItem(hZip, zipIndex, imageBuffer, zipEntry.unc_size) != 0)
	{
		delete imageBuffer;
		return HRESULT_FROM_WIN32(ERROR_READ_FAULT);
	}

	CloseZipU(hZip);

	HRESULT hr = ImageHelper::WICCreate32bppHBITMAP(imageBuffer, imageSize, phbmp, pdwAlpha);
	delete imageBuffer;

	return hr;
}

//--------------------------------------------------------------------------------------------------

#pragma endregion 
 