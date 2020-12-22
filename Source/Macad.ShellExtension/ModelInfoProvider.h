#pragma once

class ModelInfoProvider : public IInitializeWithStream,  public IThumbnailProvider 
{
public: 
    // IUnknown 
    IFACEMETHODIMP QueryInterface(REFIID riid, void **ppv); 
    IFACEMETHODIMP_(ULONG) AddRef(); 
    IFACEMETHODIMP_(ULONG) Release(); 
 
    // IInitializeWithStream 
    IFACEMETHODIMP Initialize(IStream *pStream, DWORD grfMode); 
 
    // IThumbnailProvider 
    IFACEMETHODIMP GetThumbnail(UINT cx, HBITMAP *phbmp, WTS_ALPHATYPE *pdwAlpha); 
 
    ModelInfoProvider();
	 
protected: 
    ~ModelInfoProvider();
	 
private: 
    // Reference count of component. 
    long m_cRef; 
 
    // Provided during initialization. 
    IStream *m_pStream;

};
