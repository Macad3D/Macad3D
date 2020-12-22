#pragma once

// Source: Microsoft Example RecipeThumbnailHandler
// https://code.msdn.microsoft.com/windowsapps/CppShellExtThumbnailHandler-32399b35/sourcecode?fileId=21962&pathId=477063820

class ImageHelper
{
public:
	static HRESULT ConvertBitmapSourceTo32bppHBITMAP(IWICBitmapSource *pBitmapSource, IWICImagingFactory *pImagingFactory, HBITMAP *phbmp);
	static HRESULT WICCreate32bppHBITMAP(const BYTE *buffer, int len, HBITMAP *phbmp, WTS_ALPHATYPE *pdwAlpha);
	static HRESULT WICCreate32bppHBITMAP(IStream *pstm, HBITMAP *phbmp, WTS_ALPHATYPE *pdwAlpha);
};
