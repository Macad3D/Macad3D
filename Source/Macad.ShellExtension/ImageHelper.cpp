#include "ShellExtensionPCH.h"
#include "ImageHelper.h"

//--------------------------------------------------------------------------------------------------

HRESULT ImageHelper::WICCreate32bppHBITMAP(IStream *pstm, HBITMAP *phbmp, WTS_ALPHATYPE *pdwAlpha) 
{ 
    *phbmp = NULL; 
 
    // Create the COM imaging factory. 
    IWICImagingFactory *pImagingFactory; 
    HRESULT hr = CoCreateInstance(CLSID_WICImagingFactory, NULL,  
        CLSCTX_INPROC_SERVER, IID_PPV_ARGS(&pImagingFactory)); 
    if (SUCCEEDED(hr)) 
    { 
        // Create an appropriate decoder. 
        IWICBitmapDecoder *pDecoder; 
        hr = pImagingFactory->CreateDecoderFromStream(pstm,  
            &GUID_VendorMicrosoft, WICDecodeMetadataCacheOnDemand, &pDecoder); 
        if (SUCCEEDED(hr)) 
        { 
            IWICBitmapFrameDecode *pBitmapFrameDecode; 
            hr = pDecoder->GetFrame(0, &pBitmapFrameDecode); 
            if (SUCCEEDED(hr)) 
            { 
                hr = ConvertBitmapSourceTo32bppHBITMAP(pBitmapFrameDecode, pImagingFactory, phbmp); 
                if (SUCCEEDED(hr)) 
                { 
                    *pdwAlpha = WTSAT_ARGB; 
                } 
                pBitmapFrameDecode->Release(); 
            } 
            pDecoder->Release(); 
        } 
        pImagingFactory->Release(); 
    } 
    return hr; 
}

//--------------------------------------------------------------------------------------------------

HRESULT ImageHelper::WICCreate32bppHBITMAP(const BYTE* buffer, int len, HBITMAP* phbmp, WTS_ALPHATYPE* pdwAlpha)
{
	IStream *pImageStream = SHCreateMemStream(buffer, len); 
    if (pImageStream == NULL) 
    { 
        return ERROR_GEN_FAILURE;
    }
	HRESULT hr = WICCreate32bppHBITMAP(pImageStream, phbmp, pdwAlpha);
	pImageStream->Release();
	return hr;
}

//--------------------------------------------------------------------------------------------------

HRESULT ImageHelper::ConvertBitmapSourceTo32bppHBITMAP( 
    IWICBitmapSource *pBitmapSource, IWICImagingFactory *pImagingFactory, HBITMAP *phbmp) 
{ 
    *phbmp = NULL; 
 
    IWICBitmapSource *pBitmapSourceConverted = NULL; 
    WICPixelFormatGUID guidPixelFormatSource; 
    HRESULT hr = pBitmapSource->GetPixelFormat(&guidPixelFormatSource); 
 
    if (SUCCEEDED(hr) && (guidPixelFormatSource != GUID_WICPixelFormat32bppBGRA)) 
    { 
        IWICFormatConverter *pFormatConverter; 
        hr = pImagingFactory->CreateFormatConverter(&pFormatConverter); 
        if (SUCCEEDED(hr)) 
        { 
            // Create the appropriate pixel format converter. 
            hr = pFormatConverter->Initialize(pBitmapSource,  
                GUID_WICPixelFormat32bppBGRA, WICBitmapDitherTypeNone, NULL,  
                0, WICBitmapPaletteTypeCustom); 
            if (SUCCEEDED(hr)) 
            { 
                hr = pFormatConverter->QueryInterface(&pBitmapSourceConverted); 
            } 
            pFormatConverter->Release(); 
        } 
    } 
    else 
    { 
        // No conversion is necessary. 
        hr = pBitmapSource->QueryInterface(&pBitmapSourceConverted); 
    } 
 
    if (SUCCEEDED(hr)) 
    { 
        UINT nWidth, nHeight; 
        hr = pBitmapSourceConverted->GetSize(&nWidth, &nHeight); 
        if (SUCCEEDED(hr)) 
        { 
            BITMAPINFO bmi = { sizeof(bmi.bmiHeader) }; 
            bmi.bmiHeader.biWidth = nWidth; 
            bmi.bmiHeader.biHeight = -static_cast<LONG>(nHeight); 
            bmi.bmiHeader.biPlanes = 1; 
            bmi.bmiHeader.biBitCount = 32; 
            bmi.bmiHeader.biCompression = BI_RGB; 
 
            BYTE *pBits; 
            HBITMAP hbmp = CreateDIBSection(NULL, &bmi, DIB_RGB_COLORS,  
                reinterpret_cast<void **>(&pBits), NULL, 0); 
            hr = hbmp ? S_OK : E_OUTOFMEMORY; 
            if (SUCCEEDED(hr)) 
            { 
                WICRect rect = {0, 0, (int)nWidth, (int)nHeight}; 
 
                // Convert the pixels and store them in the HBITMAP.   
                // Note: the name of the function is a little misleading -  
                // we're not doing any extraneous copying here.  CopyPixels  
                // is actually converting the image into the given buffer. 
                hr = pBitmapSourceConverted->CopyPixels(&rect, nWidth * 4,  
                    nWidth * nHeight * 4, pBits); 
                if (SUCCEEDED(hr)) 
                { 
                    *phbmp = hbmp; 
                } 
                else 
                { 
                    DeleteObject(hbmp); 
                } 
            } 
        } 
        pBitmapSourceConverted->Release(); 
    } 
    return hr; 
}

//--------------------------------------------------------------------------------------------------
