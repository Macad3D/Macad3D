// Generated wrapper code for package Image

#pragma once

#include "Image.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  Image_Format
//---------------------------------------------------------------------
public enum class Image_Format
{
	Image_Format_UNKNOWN = 0,
	Image_Format_Gray = 1,
	Image_Format_Alpha = 2,
	Image_Format_RGB = 3,
	Image_Format_BGR = 4,
	Image_Format_RGB32 = 5,
	Image_Format_BGR32 = 6,
	Image_Format_RGBA = 7,
	Image_Format_BGRA = 8,
	Image_Format_GrayF = 9,
	Image_Format_AlphaF = 10,
	Image_Format_RGBF = 11,
	Image_Format_BGRF = 12,
	Image_Format_RGBAF = 13,
	Image_Format_BGRAF = 14
}; // enum  class Image_Format

//---------------------------------------------------------------------
//  Class  Image_ColorRGB
//---------------------------------------------------------------------
public ref class Image_ColorRGB sealed : public BaseClass<::Image_ColorRGB>
{

#ifdef Include_Image_ColorRGB_h
public:
	Include_Image_ColorRGB_h
#endif

public:
	Image_ColorRGB(::Image_ColorRGB* nativeInstance)
		: BaseClass<::Image_ColorRGB>( nativeInstance, true )
	{}

	Image_ColorRGB(::Image_ColorRGB& nativeInstance)
		: BaseClass<::Image_ColorRGB>( &nativeInstance, false )
	{}

	property ::Image_ColorRGB* NativeInstance
	{
		::Image_ColorRGB* get()
		{
			return static_cast<::Image_ColorRGB*>(_NativeInstance);
		}
	}

public:
	Image_ColorRGB();
	Image_ColorRGB(Macad::Occt::Image_ColorRGB^ parameter1);
	static int Length();
	unsigned char r();
	unsigned char g();
	unsigned char b();
}; // class Image_ColorRGB

//---------------------------------------------------------------------
//  Class  Image_ColorRGB32
//---------------------------------------------------------------------
public ref class Image_ColorRGB32 sealed : public BaseClass<::Image_ColorRGB32>
{

#ifdef Include_Image_ColorRGB32_h
public:
	Include_Image_ColorRGB32_h
#endif

public:
	Image_ColorRGB32(::Image_ColorRGB32* nativeInstance)
		: BaseClass<::Image_ColorRGB32>( nativeInstance, true )
	{}

	Image_ColorRGB32(::Image_ColorRGB32& nativeInstance)
		: BaseClass<::Image_ColorRGB32>( &nativeInstance, false )
	{}

	property ::Image_ColorRGB32* NativeInstance
	{
		::Image_ColorRGB32* get()
		{
			return static_cast<::Image_ColorRGB32*>(_NativeInstance);
		}
	}

public:
	Image_ColorRGB32();
	Image_ColorRGB32(Macad::Occt::Image_ColorRGB32^ parameter1);
	static int Length();
	unsigned char r();
	unsigned char g();
	unsigned char b();
	unsigned char a_();
}; // class Image_ColorRGB32

//---------------------------------------------------------------------
//  Class  Image_ColorRGBA
//---------------------------------------------------------------------
public ref class Image_ColorRGBA sealed : public BaseClass<::Image_ColorRGBA>
{

#ifdef Include_Image_ColorRGBA_h
public:
	Include_Image_ColorRGBA_h
#endif

public:
	Image_ColorRGBA(::Image_ColorRGBA* nativeInstance)
		: BaseClass<::Image_ColorRGBA>( nativeInstance, true )
	{}

	Image_ColorRGBA(::Image_ColorRGBA& nativeInstance)
		: BaseClass<::Image_ColorRGBA>( &nativeInstance, false )
	{}

	property ::Image_ColorRGBA* NativeInstance
	{
		::Image_ColorRGBA* get()
		{
			return static_cast<::Image_ColorRGBA*>(_NativeInstance);
		}
	}

public:
	Image_ColorRGBA();
	Image_ColorRGBA(Macad::Occt::Image_ColorRGBA^ parameter1);
	static int Length();
	unsigned char r();
	unsigned char g();
	unsigned char b();
	unsigned char a();
}; // class Image_ColorRGBA

//---------------------------------------------------------------------
//  Class  Image_ColorBGR
//---------------------------------------------------------------------
public ref class Image_ColorBGR sealed : public BaseClass<::Image_ColorBGR>
{

#ifdef Include_Image_ColorBGR_h
public:
	Include_Image_ColorBGR_h
#endif

public:
	Image_ColorBGR(::Image_ColorBGR* nativeInstance)
		: BaseClass<::Image_ColorBGR>( nativeInstance, true )
	{}

	Image_ColorBGR(::Image_ColorBGR& nativeInstance)
		: BaseClass<::Image_ColorBGR>( &nativeInstance, false )
	{}

	property ::Image_ColorBGR* NativeInstance
	{
		::Image_ColorBGR* get()
		{
			return static_cast<::Image_ColorBGR*>(_NativeInstance);
		}
	}

public:
	Image_ColorBGR();
	Image_ColorBGR(Macad::Occt::Image_ColorBGR^ parameter1);
	static int Length();
	unsigned char r();
	unsigned char g();
	unsigned char b();
}; // class Image_ColorBGR

//---------------------------------------------------------------------
//  Class  Image_ColorBGR32
//---------------------------------------------------------------------
public ref class Image_ColorBGR32 sealed : public BaseClass<::Image_ColorBGR32>
{

#ifdef Include_Image_ColorBGR32_h
public:
	Include_Image_ColorBGR32_h
#endif

public:
	Image_ColorBGR32(::Image_ColorBGR32* nativeInstance)
		: BaseClass<::Image_ColorBGR32>( nativeInstance, true )
	{}

	Image_ColorBGR32(::Image_ColorBGR32& nativeInstance)
		: BaseClass<::Image_ColorBGR32>( &nativeInstance, false )
	{}

	property ::Image_ColorBGR32* NativeInstance
	{
		::Image_ColorBGR32* get()
		{
			return static_cast<::Image_ColorBGR32*>(_NativeInstance);
		}
	}

public:
	Image_ColorBGR32();
	Image_ColorBGR32(Macad::Occt::Image_ColorBGR32^ parameter1);
	static int Length();
	unsigned char r();
	unsigned char g();
	unsigned char b();
	unsigned char a_();
}; // class Image_ColorBGR32

//---------------------------------------------------------------------
//  Class  Image_ColorBGRA
//---------------------------------------------------------------------
public ref class Image_ColorBGRA sealed : public BaseClass<::Image_ColorBGRA>
{

#ifdef Include_Image_ColorBGRA_h
public:
	Include_Image_ColorBGRA_h
#endif

public:
	Image_ColorBGRA(::Image_ColorBGRA* nativeInstance)
		: BaseClass<::Image_ColorBGRA>( nativeInstance, true )
	{}

	Image_ColorBGRA(::Image_ColorBGRA& nativeInstance)
		: BaseClass<::Image_ColorBGRA>( &nativeInstance, false )
	{}

	property ::Image_ColorBGRA* NativeInstance
	{
		::Image_ColorBGRA* get()
		{
			return static_cast<::Image_ColorBGRA*>(_NativeInstance);
		}
	}

public:
	Image_ColorBGRA();
	Image_ColorBGRA(Macad::Occt::Image_ColorBGRA^ parameter1);
	static int Length();
	unsigned char r();
	unsigned char g();
	unsigned char b();
	unsigned char a();
}; // class Image_ColorBGRA

//---------------------------------------------------------------------
//  Class  Image_ColorRGBF
//---------------------------------------------------------------------
public ref class Image_ColorRGBF sealed : public BaseClass<::Image_ColorRGBF>
{

#ifdef Include_Image_ColorRGBF_h
public:
	Include_Image_ColorRGBF_h
#endif

public:
	Image_ColorRGBF(::Image_ColorRGBF* nativeInstance)
		: BaseClass<::Image_ColorRGBF>( nativeInstance, true )
	{}

	Image_ColorRGBF(::Image_ColorRGBF& nativeInstance)
		: BaseClass<::Image_ColorRGBF>( &nativeInstance, false )
	{}

	property ::Image_ColorRGBF* NativeInstance
	{
		::Image_ColorRGBF* get()
		{
			return static_cast<::Image_ColorRGBF*>(_NativeInstance);
		}
	}

public:
	Image_ColorRGBF();
	Image_ColorRGBF(Macad::Occt::Image_ColorRGBF^ parameter1);
	static int Length();
	float r();
	float g();
	float b();
}; // class Image_ColorRGBF

//---------------------------------------------------------------------
//  Class  Image_ColorBGRF
//---------------------------------------------------------------------
public ref class Image_ColorBGRF sealed : public BaseClass<::Image_ColorBGRF>
{

#ifdef Include_Image_ColorBGRF_h
public:
	Include_Image_ColorBGRF_h
#endif

public:
	Image_ColorBGRF(::Image_ColorBGRF* nativeInstance)
		: BaseClass<::Image_ColorBGRF>( nativeInstance, true )
	{}

	Image_ColorBGRF(::Image_ColorBGRF& nativeInstance)
		: BaseClass<::Image_ColorBGRF>( &nativeInstance, false )
	{}

	property ::Image_ColorBGRF* NativeInstance
	{
		::Image_ColorBGRF* get()
		{
			return static_cast<::Image_ColorBGRF*>(_NativeInstance);
		}
	}

public:
	Image_ColorBGRF();
	Image_ColorBGRF(Macad::Occt::Image_ColorBGRF^ parameter1);
	static int Length();
	float r();
	float g();
	float b();
}; // class Image_ColorBGRF

//---------------------------------------------------------------------
//  Class  Image_ColorRGBAF
//---------------------------------------------------------------------
public ref class Image_ColorRGBAF sealed : public BaseClass<::Image_ColorRGBAF>
{

#ifdef Include_Image_ColorRGBAF_h
public:
	Include_Image_ColorRGBAF_h
#endif

public:
	Image_ColorRGBAF(::Image_ColorRGBAF* nativeInstance)
		: BaseClass<::Image_ColorRGBAF>( nativeInstance, true )
	{}

	Image_ColorRGBAF(::Image_ColorRGBAF& nativeInstance)
		: BaseClass<::Image_ColorRGBAF>( &nativeInstance, false )
	{}

	property ::Image_ColorRGBAF* NativeInstance
	{
		::Image_ColorRGBAF* get()
		{
			return static_cast<::Image_ColorRGBAF*>(_NativeInstance);
		}
	}

public:
	Image_ColorRGBAF();
	Image_ColorRGBAF(Macad::Occt::Image_ColorRGBAF^ parameter1);
	static int Length();
	float r();
	float g();
	float b();
	float a();
}; // class Image_ColorRGBAF

//---------------------------------------------------------------------
//  Class  Image_ColorBGRAF
//---------------------------------------------------------------------
public ref class Image_ColorBGRAF sealed : public BaseClass<::Image_ColorBGRAF>
{

#ifdef Include_Image_ColorBGRAF_h
public:
	Include_Image_ColorBGRAF_h
#endif

public:
	Image_ColorBGRAF(::Image_ColorBGRAF* nativeInstance)
		: BaseClass<::Image_ColorBGRAF>( nativeInstance, true )
	{}

	Image_ColorBGRAF(::Image_ColorBGRAF& nativeInstance)
		: BaseClass<::Image_ColorBGRAF>( &nativeInstance, false )
	{}

	property ::Image_ColorBGRAF* NativeInstance
	{
		::Image_ColorBGRAF* get()
		{
			return static_cast<::Image_ColorBGRAF*>(_NativeInstance);
		}
	}

public:
	Image_ColorBGRAF();
	Image_ColorBGRAF(Macad::Occt::Image_ColorBGRAF^ parameter1);
	static int Length();
	float r();
	float g();
	float b();
	float a();
}; // class Image_ColorBGRAF

//---------------------------------------------------------------------
//  Class  Image_VideoParams
//---------------------------------------------------------------------
public ref class Image_VideoParams sealed : public BaseClass<::Image_VideoParams>
{

#ifdef Include_Image_VideoParams_h
public:
	Include_Image_VideoParams_h
#endif

public:
	Image_VideoParams(::Image_VideoParams* nativeInstance)
		: BaseClass<::Image_VideoParams>( nativeInstance, true )
	{}

	Image_VideoParams(::Image_VideoParams& nativeInstance)
		: BaseClass<::Image_VideoParams>( &nativeInstance, false )
	{}

	property ::Image_VideoParams* NativeInstance
	{
		::Image_VideoParams* get()
		{
			return static_cast<::Image_VideoParams*>(_NativeInstance);
		}
	}

public:
	Image_VideoParams();
	Image_VideoParams(Macad::Occt::Image_VideoParams^ parameter1);
	void SetFramerate(int theNumerator, int theDenominator);
	void SetFramerate(int theValue);
}; // class Image_VideoParams

//---------------------------------------------------------------------
//  Class  Image_PixMap
//---------------------------------------------------------------------
public ref class Image_PixMap : public Macad::Occt::Standard_Transient
{

#ifdef Include_Image_PixMap_h
public:
	Include_Image_PixMap_h
#endif

protected:
	Image_PixMap(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Image_PixMap(::Image_PixMap* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Image_PixMap(::Image_PixMap& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Image_PixMap* NativeInstance
	{
		::Image_PixMap* get()
		{
			return static_cast<::Image_PixMap*>(_NativeInstance);
		}
	}

	static Macad::Occt::Image_PixMap^ CreateDowncasted(::Image_PixMap* instance);

public:
	Image_PixMap();
	static bool IsBigEndianHost();
	static bool SwapRgbaBgra(Macad::Occt::Image_PixMap^ theImage);
	static void ToBlackWhite(Macad::Occt::Image_PixMap^ theImage);
	Macad::Occt::Image_Format Format();
	void SetFormat(Macad::Occt::Image_Format thePixelFormat);
	size_t Width();
	size_t Height();
	size_t SizeX();
	size_t SizeY();
	double Ratio();
	bool IsEmpty();
	Macad::Occt::Quantity_ColorRGBA^ PixelColor(int theX, int theY);
	void SetPixelColor(int theX, int theY, Macad::Occt::Quantity_Color^ theColor);
	void SetPixelColor(int theX, int theY, Macad::Occt::Quantity_ColorRGBA^ theColor);
	bool InitWrapper(Macad::Occt::Image_Format thePixelFormat, unsigned char% theDataPtr, size_t theSizeX, size_t theSizeY, size_t theSizeRowBytes);
	bool InitWrapper(Macad::Occt::Image_Format thePixelFormat, unsigned char% theDataPtr, size_t theSizeX, size_t theSizeY);
	bool InitTrash(Macad::Occt::Image_Format thePixelFormat, size_t theSizeX, size_t theSizeY, size_t theSizeRowBytes);
	bool InitTrash(Macad::Occt::Image_Format thePixelFormat, size_t theSizeX, size_t theSizeY);
	bool InitCopy(Macad::Occt::Image_PixMap^ theCopy);
	bool InitZero(Macad::Occt::Image_Format thePixelFormat, size_t theSizeX, size_t theSizeY, size_t theSizeRowBytes, unsigned char theValue);
	bool InitZero(Macad::Occt::Image_Format thePixelFormat, size_t theSizeX, size_t theSizeY, size_t theSizeRowBytes);
	bool InitZero(Macad::Occt::Image_Format thePixelFormat, size_t theSizeX, size_t theSizeY);
	void Clear();
	bool IsTopDown();
	void SetTopDown(bool theIsTopDown);
	size_t TopDownInc();
	size_t SizePixelBytes();
	static size_t SizePixelBytes(Macad::Occt::Image_Format thePixelFormat);
	size_t SizeRowBytes();
	size_t RowExtraBytes();
	size_t MaxRowAligmentBytes();
	size_t SizeBytes();
	unsigned char RawValue(size_t theRow, size_t theCol);
	unsigned char ChangeRawValue(size_t theRow, size_t theCol);
}; // class Image_PixMap

//---------------------------------------------------------------------
//  Class  Image_AlienPixMap
//---------------------------------------------------------------------
public ref class Image_AlienPixMap sealed : public Macad::Occt::Image_PixMap
{

#ifdef Include_Image_AlienPixMap_h
public:
	Include_Image_AlienPixMap_h
#endif

public:
	Image_AlienPixMap(::Image_AlienPixMap* nativeInstance)
		: Macad::Occt::Image_PixMap( nativeInstance )
	{}

	Image_AlienPixMap(::Image_AlienPixMap& nativeInstance)
		: Macad::Occt::Image_PixMap( nativeInstance )
	{}

	property ::Image_AlienPixMap* NativeInstance
	{
		::Image_AlienPixMap* get()
		{
			return static_cast<::Image_AlienPixMap*>(_NativeInstance);
		}
	}

	static Macad::Occt::Image_AlienPixMap^ CreateDowncasted(::Image_AlienPixMap* instance);

public:
	Image_AlienPixMap();
	static bool IsTopDownDefault();
	bool Load(Macad::Occt::TCollection_AsciiString^ theFileName);
	/* Method skipped due to unknown mapping: bool Load(istream theStream, TCollection_AsciiString theFileName, ) */
	bool Load(unsigned char theData, size_t theLength, Macad::Occt::TCollection_AsciiString^ theFileName);
	bool Save(Macad::Occt::TCollection_AsciiString^ theFileName);
	bool InitTrash(Macad::Occt::Image_Format thePixelFormat, size_t theSizeX, size_t theSizeY, size_t theSizeRowBytes);
	bool InitTrash(Macad::Occt::Image_Format thePixelFormat, size_t theSizeX, size_t theSizeY);
	bool InitCopy(Macad::Occt::Image_PixMap^ theCopy);
	void Clear();
	bool AdjustGamma(double theGammaCorr);
}; // class Image_AlienPixMap

//---------------------------------------------------------------------
//  Class  Image_Diff
//---------------------------------------------------------------------
public ref class Image_Diff sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Image_Diff_h
public:
	Include_Image_Diff_h
#endif

public:
	Image_Diff(::Image_Diff* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Image_Diff(::Image_Diff& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Image_Diff* NativeInstance
	{
		::Image_Diff* get()
		{
			return static_cast<::Image_Diff*>(_NativeInstance);
		}
	}

	static Macad::Occt::Image_Diff^ CreateDowncasted(::Image_Diff* instance);

public:
	Image_Diff();
	Image_Diff(Macad::Occt::Image_Diff^ parameter1);
	bool Init(Macad::Occt::Image_PixMap^ theImageRef, Macad::Occt::Image_PixMap^ theImageNew, bool theToBlackWhite);
	bool Init(Macad::Occt::Image_PixMap^ theImageRef, Macad::Occt::Image_PixMap^ theImageNew);
	bool Init(Macad::Occt::TCollection_AsciiString^ theImgPathRef, Macad::Occt::TCollection_AsciiString^ theImgPathNew, bool theToBlackWhite);
	bool Init(Macad::Occt::TCollection_AsciiString^ theImgPathRef, Macad::Occt::TCollection_AsciiString^ theImgPathNew);
	void SetColorTolerance(double theTolerance);
	double ColorTolerance();
	void SetBorderFilterOn(bool theToIgnore);
	bool IsBorderFilterOn();
	int Compare();
	bool SaveDiffImage(Macad::Occt::Image_PixMap^ theDiffImage);
	bool SaveDiffImage(Macad::Occt::TCollection_AsciiString^ theDiffPath);
}; // class Image_Diff

//---------------------------------------------------------------------
//  Class  Image_Texture
//---------------------------------------------------------------------
public ref class Image_Texture sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Image_Texture_h
public:
	Include_Image_Texture_h
#endif

public:
	Image_Texture(::Image_Texture* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Image_Texture(::Image_Texture& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Image_Texture* NativeInstance
	{
		::Image_Texture* get()
		{
			return static_cast<::Image_Texture*>(_NativeInstance);
		}
	}

	static Macad::Occt::Image_Texture^ CreateDowncasted(::Image_Texture* instance);

public:
	Image_Texture(Macad::Occt::TCollection_AsciiString^ theFileName);
	/* Method skipped due to unknown mapping: void Image_Texture(TCollection_AsciiString theFileName, long long int theOffset, long long int theLength, ) */
	Image_Texture(Macad::Occt::NCollection_Buffer^ theBuffer, Macad::Occt::TCollection_AsciiString^ theId);
	Image_Texture(Macad::Occt::Image_Texture^ parameter1);
	Macad::Occt::TCollection_AsciiString^ TextureId();
	Macad::Occt::TCollection_AsciiString^ FilePath();
	/* Method skipped due to unknown mapping: long long int FileOffset() */
	/* Method skipped due to unknown mapping: long long int FileLength() */
	Macad::Occt::NCollection_Buffer^ DataBuffer();
	Macad::Occt::TCollection_AsciiString^ ProbeImageFileFormat();
	Macad::Occt::Image_PixMap^ ReadImage();
	bool WriteImage(Macad::Occt::TCollection_AsciiString^ theFile);
	static int HashCode(Macad::Occt::Image_Texture^ theTexture, int theUpper);
	static bool IsEqual(Macad::Occt::Image_Texture^ theTex1, Macad::Occt::Image_Texture^ theTex2);
}; // class Image_Texture

}; // namespace Occt
}; // namespace Macad
