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
/// <summary>
/// This enumeration defines packed image plane formats
/// </summary>
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
	Image_Format_RGF = 11,
	Image_Format_RGBF = 12,
	Image_Format_BGRF = 13,
	Image_Format_RGBAF = 14,
	Image_Format_BGRAF = 15,
	Image_Format_RGF_half = 16,
	Image_Format_RGBAF_half = 17
}; // enum  class Image_Format

//---------------------------------------------------------------------
//  Enum  Image_CompressedFormat
//---------------------------------------------------------------------
/// <summary>
/// List of compressed pixel formats natively supported by various graphics hardware (e.g. for efficient decoding on-the-fly).
/// It is defined as extension of Image_Format.
/// </summary>
public enum class Image_CompressedFormat
{
	Image_CompressedFormat_UNKNOWN = 0,
	Image_CompressedFormat_RGB_S3TC_DXT1 = 18,
	Image_CompressedFormat_RGBA_S3TC_DXT1 = 19,
	Image_CompressedFormat_RGBA_S3TC_DXT3 = 20,
	Image_CompressedFormat_RGBA_S3TC_DXT5 = 21
}; // enum  class Image_CompressedFormat

//---------------------------------------------------------------------
//  Class  Image_ColorRGB
//---------------------------------------------------------------------
/// <summary>
/// POD structure for packed RGB color value (3 bytes)
/// </summary>
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
	/// <summary>
	/// Returns the number of components.
	/// </summary>
	static int Length();
	/// <summary>
	/// Alias to 1st component (red intensity).
	/// </summary>
	unsigned char r();
	/// <summary>
	/// Alias to 2nd component (green intensity).
	/// </summary>
	unsigned char g();
	/// <summary>
	/// Alias to 3rd component (blue intensity).
	/// </summary>
	unsigned char b();
}; // class Image_ColorRGB

//---------------------------------------------------------------------
//  Class  Image_ColorRGB32
//---------------------------------------------------------------------
/// <summary>
/// POD structure for packed RGB color value (4 bytes with extra byte for alignment)
/// </summary>
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
	/// <summary>
	/// Returns the number of components.
	/// </summary>
	static int Length();
	/// <summary>
	/// Alias to 1st component (red intensity).
	/// </summary>
	unsigned char r();
	/// <summary>
	/// Alias to 2nd component (green intensity).
	/// </summary>
	unsigned char g();
	/// <summary>
	/// Alias to 3rd component (blue intensity).
	/// </summary>
	unsigned char b();
	/// <summary>
	/// Alias to 4th component (dummy).
	/// </summary>
	unsigned char a_();
}; // class Image_ColorRGB32

//---------------------------------------------------------------------
//  Class  Image_ColorRGBA
//---------------------------------------------------------------------
/// <summary>
/// POD structure for packed RGBA color value (4 bytes)
/// </summary>
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
	/// <summary>
	/// Returns the number of components.
	/// </summary>
	static int Length();
	/// <summary>
	/// Alias to 1st component (red intensity).
	/// </summary>
	unsigned char r();
	/// <summary>
	/// Alias to 2nd component (green intensity).
	/// </summary>
	unsigned char g();
	/// <summary>
	/// Alias to 3rd component (blue intensity).
	/// </summary>
	unsigned char b();
	/// <summary>
	/// Alias to 4th component (alpha value).
	/// </summary>
	unsigned char a();
}; // class Image_ColorRGBA

//---------------------------------------------------------------------
//  Class  Image_ColorBGR
//---------------------------------------------------------------------
/// <summary>
/// POD structure for packed BGR color value (3 bytes)
/// </summary>
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
	/// <summary>
	/// Returns the number of components.
	/// </summary>
	static int Length();
	/// <summary>
	/// Alias to 3rd component (red intensity).
	/// </summary>
	unsigned char r();
	/// <summary>
	/// Alias to 2nd component (green intensity).
	/// </summary>
	unsigned char g();
	/// <summary>
	/// Alias to 1st component (blue intensity).
	/// </summary>
	unsigned char b();
}; // class Image_ColorBGR

//---------------------------------------------------------------------
//  Class  Image_ColorBGR32
//---------------------------------------------------------------------
/// <summary>
/// POD structure for packed BGR color value (4 bytes with extra byte for alignment)
/// </summary>
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
	/// <summary>
	/// Returns the number of components.
	/// </summary>
	static int Length();
	/// <summary>
	/// Alias to 3rd component (red intensity).
	/// </summary>
	unsigned char r();
	/// <summary>
	/// Alias to 2nd component (green intensity).
	/// </summary>
	unsigned char g();
	/// <summary>
	/// Alias to 1st component (blue intensity).
	/// </summary>
	unsigned char b();
	/// <summary>
	/// Alias to 4th component (dummy).
	/// </summary>
	unsigned char a_();
}; // class Image_ColorBGR32

//---------------------------------------------------------------------
//  Class  Image_ColorBGRA
//---------------------------------------------------------------------
/// <summary>
/// POD structure for packed BGRA color value (4 bytes)
/// </summary>
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
	/// <summary>
	/// Returns the number of components.
	/// </summary>
	static int Length();
	/// <summary>
	/// Alias to 3rd component (red intensity).
	/// </summary>
	unsigned char r();
	/// <summary>
	/// Alias to 2nd component (green intensity).
	/// </summary>
	unsigned char g();
	/// <summary>
	/// Alias to 1st component (blue intensity).
	/// </summary>
	unsigned char b();
	/// <summary>
	/// Alias to 4th component (alpha value).
	/// </summary>
	unsigned char a();
}; // class Image_ColorBGRA

//---------------------------------------------------------------------
//  Class  Image_ColorRGF
//---------------------------------------------------------------------
/// <summary>
/// POD structure for packed float RG color value (2 floats)
/// </summary>
public ref class Image_ColorRGF sealed : public BaseClass<::Image_ColorRGF>
{

#ifdef Include_Image_ColorRGF_h
public:
	Include_Image_ColorRGF_h
#endif

public:
	Image_ColorRGF(::Image_ColorRGF* nativeInstance)
		: BaseClass<::Image_ColorRGF>( nativeInstance, true )
	{}

	Image_ColorRGF(::Image_ColorRGF& nativeInstance)
		: BaseClass<::Image_ColorRGF>( &nativeInstance, false )
	{}

	property ::Image_ColorRGF* NativeInstance
	{
		::Image_ColorRGF* get()
		{
			return static_cast<::Image_ColorRGF*>(_NativeInstance);
		}
	}

public:
	Image_ColorRGF();
	Image_ColorRGF(Macad::Occt::Image_ColorRGF^ parameter1);
	/// <summary>
	/// Returns the number of components.
	/// </summary>
	static int Length();
	/// <summary>
	/// Alias to 1st component (red intensity).
	/// </summary>
	float r();
	/// <summary>
	/// Alias to 2nd component (green intensity).
	/// </summary>
	float g();
}; // class Image_ColorRGF

//---------------------------------------------------------------------
//  Class  Image_ColorRGBF
//---------------------------------------------------------------------
/// <summary>
/// POD structure for packed float RGB color value (3 floats)
/// </summary>
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
	/// <summary>
	/// Returns the number of components.
	/// </summary>
	static int Length();
	/// <summary>
	/// Alias to 1st component (red intensity).
	/// </summary>
	float r();
	/// <summary>
	/// Alias to 2nd component (green intensity).
	/// </summary>
	float g();
	/// <summary>
	/// Alias to 3rd component (blue intensity).
	/// </summary>
	float b();
}; // class Image_ColorRGBF

//---------------------------------------------------------------------
//  Class  Image_ColorBGRF
//---------------------------------------------------------------------
/// <summary>
/// POD structure for packed BGR float color value (3 floats)
/// </summary>
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
	/// <summary>
	/// Returns the number of components.
	/// </summary>
	static int Length();
	/// <summary>
	/// Alias to 3rd component (red intensity).
	/// </summary>
	float r();
	/// <summary>
	/// Alias to 2nd component (green intensity).
	/// </summary>
	float g();
	/// <summary>
	/// Alias to 1st component (blue intensity).
	/// </summary>
	float b();
}; // class Image_ColorBGRF

//---------------------------------------------------------------------
//  Class  Image_ColorRGBAF
//---------------------------------------------------------------------
/// <summary>
/// POD structure for packed RGBA color value (4 floats)
/// </summary>
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
	/// <summary>
	/// Returns the number of components.
	/// </summary>
	static int Length();
	/// <summary>
	/// Alias to 1st component (red intensity).
	/// </summary>
	float r();
	/// <summary>
	/// Alias to 2nd component (green intensity).
	/// </summary>
	float g();
	/// <summary>
	/// Alias to 3rd component (blue intensity).
	/// </summary>
	float b();
	/// <summary>
	/// Alias to 4th component (alpha value).
	/// </summary>
	float a();
}; // class Image_ColorRGBAF

//---------------------------------------------------------------------
//  Class  Image_ColorBGRAF
//---------------------------------------------------------------------
/// <summary>
/// POD structure for packed float BGRA color value (4 floats)
/// </summary>
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
	/// <summary>
	/// Returns the number of components.
	/// </summary>
	static int Length();
	/// <summary>
	/// Alias to 3rd component (red intensity).
	/// </summary>
	float r();
	/// <summary>
	/// Alias to 2nd component (green intensity).
	/// </summary>
	float g();
	/// <summary>
	/// Alias to 1st component (blue intensity).
	/// </summary>
	float b();
	/// <summary>
	/// Alias to 4th component (alpha value).
	/// </summary>
	float a();
}; // class Image_ColorBGRAF

//---------------------------------------------------------------------
//  Class  Image_VideoParams
//---------------------------------------------------------------------
/// <summary>
/// Auxiliary structure defining video parameters.
/// Please refer to FFmpeg documentation for defining text values.
/// </summary>
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
	/// <summary>
	/// Empty constructor.
	/// </summary>
	Image_VideoParams();
	Image_VideoParams(Macad::Occt::Image_VideoParams^ parameter1);
	/// <summary>
	/// Setup playback FPS.
	/// </summary>
	void SetFramerate(int theNumerator, int theDenominator);
	/// <summary>
	/// Setup playback FPS.
	/// For fixed-fps content, timebase should be 1/framerate and timestamp increments should be identical to 1.
	/// </summary>
	void SetFramerate(int theValue);
}; // class Image_VideoParams

//---------------------------------------------------------------------
//  Class  Image_PixMap
//---------------------------------------------------------------------
/// <summary>
/// Class represents packed image plane.
/// </summary>
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
	/// <summary>
	/// Empty constructor. Initialize the NULL image plane.
	/// </summary>
	Image_PixMap();
	/// <summary>
	/// Determine Big-Endian at runtime
	/// </summary>
	static bool IsBigEndianHost();
	/// <summary>
	/// Auxiliary method for swapping bytes between RGB and BGR formats.
	/// This method modifies the image data but does not change pixel format!
	/// Method will fail if pixel format is not one of the following:
	/// - Image_Format_RGB32 / Image_Format_BGR32
	/// - Image_Format_RGBA  / Image_Format_BGRA
	/// - Image_Format_RGB   / Image_Format_BGR
	/// - Image_Format_RGBF  / Image_Format_BGRF
	/// - Image_Format_RGBAF / Image_Format_BGRAF
	/// </summary>
	static bool SwapRgbaBgra(Macad::Occt::Image_PixMap^ theImage);
	/// <summary>
	/// Convert image to Black/White.
	/// </summary>
	static void ToBlackWhite(Macad::Occt::Image_PixMap^ theImage);
	/// <summary>
	/// Reverse line order as it draws it from bottom to top.
	/// </summary>
	static bool FlipY(Macad::Occt::Image_PixMap^ theImage);
	/// <summary>
	/// Return default image data allocator.
	/// </summary>
	static Macad::Occt::NCollection_BaseAllocator^ DefaultAllocator();
	/// <summary>
	/// Return string representation of pixel format.
	/// </summary>
	static System::String^ ImageFormatToString(Macad::Occt::Image_Format theFormat);
	/// <summary>
	/// Return string representation of compressed pixel format.
	/// </summary>
	static System::String^ ImageFormatToString(Macad::Occt::Image_CompressedFormat theFormat);
	Macad::Occt::Image_Format Format();
	/// <summary>
	/// Override pixel format specified by InitXXX() methods.
	/// Will throw exception if pixel size of new format is not equal to currently initialized format.
	/// Intended to switch formats indicating different interpretation of the same data
	/// (e.g. ImgGray and ImgAlpha).
	/// </summary>
	void SetFormat(Macad::Occt::Image_Format thePixelFormat);
	/// <summary>
	/// </summary>
	/// <returns>
	/// image width in pixels
	/// </returns>
	size_t Width();
	/// <summary>
	/// </summary>
	/// <returns>
	/// image height in pixels
	/// </returns>
	size_t Height();
	/// <summary>
	/// </summary>
	/// <returns>
	/// image width in pixels
	/// </returns>
	size_t SizeX();
	/// <summary>
	/// </summary>
	/// <returns>
	/// image height in pixels
	/// </returns>
	size_t SizeY();
	/// <summary>
	/// </summary>
	/// <returns>
	/// width / height.
	/// </returns>
	double Ratio();
	/// <summary>
	/// </summary>
	/// <returns>
	/// true if data is NULL.
	/// </returns>
	bool IsEmpty();
	/// <summary>
	/// Returns the pixel color. This function is relatively slow.
	/// Beware that this method takes coordinates in opposite order in contrast to ::Value() and ::ChangeValue().
	/// </summary>
	/// <param name="theX">
	/// [in] column index from left
	/// </param>
	/// <param name="theY">
	/// [in] row    index from top
	/// </param>
	/// <param name="theToLinearize">
	/// [in] when TRUE, the color stored in non-linear color space (e.g. Image_Format_RGB) will be linearized
	/// </param>
	/// <returns>
	/// the pixel color
	/// </returns>
	Macad::Occt::Quantity_ColorRGBA^ PixelColor(int theX, int theY, bool theToLinearize);
	/// <summary>
	/// Returns the pixel color. This function is relatively slow.
	/// Beware that this method takes coordinates in opposite order in contrast to ::Value() and ::ChangeValue().
	/// </summary>
	/// <param name="theX">
	/// [in] column index from left
	/// </param>
	/// <param name="theY">
	/// [in] row    index from top
	/// </param>
	/// <param name="theToLinearize">
	/// [in] when TRUE, the color stored in non-linear color space (e.g. Image_Format_RGB) will be linearized
	/// </param>
	/// <returns>
	/// the pixel color
	/// </returns>
	Macad::Occt::Quantity_ColorRGBA^ PixelColor(int theX, int theY);
	/// <summary>
	/// Sets the pixel color. This function is relatively slow.
	/// Beware that this method takes coordinates in opposite order in contrast to ::Value() and ::ChangeValue().
	/// </summary>
	/// <param name="theX">
	/// [in] column index from left
	/// </param>
	/// <param name="theY">
	/// [in] row    index from top
	/// </param>
	/// <param name="theColor">
	/// [in] color to store
	/// </param>
	/// <param name="theToDeLinearize">
	/// [in] when TRUE, the gamma correction will be applied for storing in non-linear color space (e.g. Image_Format_RGB)
	/// </param>
	void SetPixelColor(int theX, int theY, Macad::Occt::Quantity_Color^ theColor, bool theToDeLinearize);
	/// <summary>
	/// Sets the pixel color. This function is relatively slow.
	/// Beware that this method takes coordinates in opposite order in contrast to ::Value() and ::ChangeValue().
	/// </summary>
	/// <param name="theX">
	/// [in] column index from left
	/// </param>
	/// <param name="theY">
	/// [in] row    index from top
	/// </param>
	/// <param name="theColor">
	/// [in] color to store
	/// </param>
	/// <param name="theToDeLinearize">
	/// [in] when TRUE, the gamma correction will be applied for storing in non-linear color space (e.g. Image_Format_RGB)
	/// </param>
	void SetPixelColor(int theX, int theY, Macad::Occt::Quantity_Color^ theColor);
	/// <summary>
	/// Sets the pixel color. This function is relatively slow.
	/// Beware that this method takes coordinates in opposite order in contrast to ::Value() and ::ChangeValue().
	/// </summary>
	/// <param name="theX">
	/// [in] column index from left
	/// </param>
	/// <param name="theY">
	/// [in] row    index from top
	/// </param>
	/// <param name="theColor">
	/// [in] color to store
	/// </param>
	/// <param name="theToDeLinearize">
	/// [in] when TRUE, the gamma correction will be applied for storing in non-linear color space (e.g. Image_Format_RGB)
	/// </param>
	void SetPixelColor(int theX, int theY, Macad::Occt::Quantity_ColorRGBA^ theColor, bool theToDeLinearize);
	/// <summary>
	/// Sets the pixel color. This function is relatively slow.
	/// Beware that this method takes coordinates in opposite order in contrast to ::Value() and ::ChangeValue().
	/// </summary>
	/// <param name="theX">
	/// [in] column index from left
	/// </param>
	/// <param name="theY">
	/// [in] row    index from top
	/// </param>
	/// <param name="theColor">
	/// [in] color to store
	/// </param>
	/// <param name="theToDeLinearize">
	/// [in] when TRUE, the gamma correction will be applied for storing in non-linear color space (e.g. Image_Format_RGB)
	/// </param>
	void SetPixelColor(int theX, int theY, Macad::Occt::Quantity_ColorRGBA^ theColor);
	/// <summary>
	/// Initialize image plane as wrapper over alien data.
	/// Data will not be copied! Notice that caller should ensure
	/// that data pointer will not be released during this wrapper lifetime.
	/// You may call InitCopy() to perform data copying.
	/// </summary>
	bool InitWrapper(Macad::Occt::Image_Format thePixelFormat, unsigned char% theDataPtr, size_t theSizeX, size_t theSizeY, size_t theSizeRowBytes);
	/// <summary>
	/// Initialize image plane as wrapper over alien data.
	/// Data will not be copied! Notice that caller should ensure
	/// that data pointer will not be released during this wrapper lifetime.
	/// You may call InitCopy() to perform data copying.
	/// </summary>
	bool InitWrapper(Macad::Occt::Image_Format thePixelFormat, unsigned char% theDataPtr, size_t theSizeX, size_t theSizeY);
	/// <summary>
	/// Initialize image plane with required dimensions.
	/// Memory will be left uninitialized (performance trick).
	/// </summary>
	bool InitTrash(Macad::Occt::Image_Format thePixelFormat, size_t theSizeX, size_t theSizeY, size_t theSizeRowBytes);
	/// <summary>
	/// Initialize image plane with required dimensions.
	/// Memory will be left uninitialized (performance trick).
	/// </summary>
	bool InitTrash(Macad::Occt::Image_Format thePixelFormat, size_t theSizeX, size_t theSizeY);
	/// <summary>
	/// Initialize by copying data.
	/// If you want to copy alien data you should create wrapper using InitWrapper() before.
	/// </summary>
	bool InitCopy(Macad::Occt::Image_PixMap^ theCopy);
	/// <summary>
	/// Initialize image plane with required dimensions.
	/// Buffer will be zeroed (black color for most formats).
	/// </summary>
	bool InitZero(Macad::Occt::Image_Format thePixelFormat, size_t theSizeX, size_t theSizeY, size_t theSizeRowBytes, unsigned char theValue);
	/// <summary>
	/// Initialize image plane with required dimensions.
	/// Buffer will be zeroed (black color for most formats).
	/// </summary>
	bool InitZero(Macad::Occt::Image_Format thePixelFormat, size_t theSizeX, size_t theSizeY, size_t theSizeRowBytes);
	/// <summary>
	/// Initialize image plane with required dimensions.
	/// Buffer will be zeroed (black color for most formats).
	/// </summary>
	bool InitZero(Macad::Occt::Image_Format thePixelFormat, size_t theSizeX, size_t theSizeY);
	/// <summary>
	/// Method correctly deallocate internal buffer.
	/// </summary>
	void Clear();
	/// <summary>
	/// Returns TRUE if image data is stored from Top to the Down.
	/// By default Bottom Up order is used instead
	/// (topmost scanlines starts from the bottom in memory).
	/// which is most image frameworks naturally support.
	/// 
	/// Notice that access methods within this class automatically
	/// convert input row-index to apply this flag!
	/// You should use this flag only if interconnect with alien APIs and buffers.
	/// </summary>
	/// <returns>
	/// true if image data is top-down
	/// </returns>
	bool IsTopDown();
	/// <summary>
	/// Setup scanlines order in memory - top-down or bottom-up.
	/// Drawers should explicitly specify this value if current state IsTopDown() was ignored!
	/// </summary>
	/// <param name="theIsTopDown">
	/// top-down flag
	/// </param>
	void SetTopDown(bool theIsTopDown);
	/// <summary>
	/// Returns +1 if scanlines ordered in Top->Down order in memory and -1 otherwise.
	/// </summary>
	/// <returns>
	/// scanline increment for Top->Down iteration
	/// </returns>
	size_t TopDownInc();
	/// <summary>
	/// </summary>
	/// <returns>
	/// bytes reserved for one pixel (may include extra bytes for alignment).
	/// </returns>
	size_t SizePixelBytes();
	/// <summary>
	/// </summary>
	/// <returns>
	/// bytes reserved for one pixel (may include extra bytes for alignment).
	/// </returns>
	static size_t SizePixelBytes(Macad::Occt::Image_Format thePixelFormat);
	/// <summary>
	/// </summary>
	/// <returns>
	/// bytes reserved per row.
	/// Could be larger than needed to store packed row (extra bytes for alignment etc.).
	/// </returns>
	size_t SizeRowBytes();
	/// <summary>
	/// </summary>
	/// <returns>
	/// the extra bytes in the row.
	/// </returns>
	size_t RowExtraBytes();
	/// <summary>
	/// Compute the maximal row alignment for current row size.
	/// </summary>
	/// <returns>
	/// maximal row alignment in bytes (up to 16 bytes).
	/// </returns>
	size_t MaxRowAligmentBytes();
	/// <summary>
	/// </summary>
	/// <returns>
	/// buffer size
	/// </returns>
	size_t SizeBytes();
	/// <summary>
	/// Access image pixel as raw data pointer.
	/// This method does not perform any type checks - use on own risk (check Format() before)!
	/// </summary>
	unsigned char RawValue(size_t theRow, size_t theCol);
	/// <summary>
	/// Access image pixel as raw data pointer.
	/// This method does not perform any type checks - use on own risk (check Format() before)!
	/// </summary>
	unsigned char ChangeRawValue(size_t theRow, size_t theCol);
	/// <summary>
	/// Convert 16-bit half-float value into 32-bit float (simple conversion).
	/// </summary>
	static float ConvertFromHalfFloat(unsigned short theHalf);
	/// <summary>
	/// Convert 32-bit float value into IEEE-754 16-bit floating-point format without infinity:
	/// 1-5-10, exp-15, +-131008.0, +-6.1035156E-5, +-5.9604645E-8, 3.311 digits.
	/// </summary>
	static unsigned short ConvertToHalfFloat(float theFloat);
}; // class Image_PixMap

//---------------------------------------------------------------------
//  Class  Image_AlienPixMap
//---------------------------------------------------------------------
/// <summary>
/// Image class that support file reading/writing operations using auxiliary image library.
/// Supported image formats:
/// - *.bmp - bitmap image, lossless format without compression.
/// - *.ppm - PPM (Portable Pixmap Format), lossless format without compression.
/// - *.png - PNG (Portable Network Graphics) lossless format with compression.
/// - *.jpg, *.jpe, *.jpeg - JPEG/JIFF (Joint Photographic Experts Group) lossy format (compressed with quality losses). YUV color space used (automatically converted from/to RGB).
/// - *.tif, *.tiff - TIFF (Tagged Image File Format).
/// - *.tga - TGA (Truevision Targa Graphic), lossless format.
/// - *.gif - GIF (Graphical Interchange Format), lossy format. Color stored using palette (up to 256 distinct colors).
/// - *.exr - OpenEXR high dynamic-range format (supports float pixel formats).
/// </summary>
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
	/// <summary>
	/// Empty constructor.
	/// </summary>
	Image_AlienPixMap();
	/// <summary>
	/// Return default rows order used by underlying image library.
	/// </summary>
	static bool IsTopDownDefault();
	/// <summary>
	/// Read image data from file.
	/// </summary>
	bool Load(Macad::Occt::TCollection_AsciiString^ theFileName);
	/// <summary>
	/// Read image data from stream.
	/// </summary>
	/* Method skipped due to unknown mapping: bool Load(istream theStream, TCollection_AsciiString theFileName, ) */
	/// <summary>
	/// Read image data from memory buffer.
	/// </summary>
	/// <param name="theData">
	///     memory pointer to read from;
	/// when NULL, function will attempt to open theFileName file
	/// </param>
	/// <param name="theLength">
	///   memory buffer length
	/// </param>
	/// <param name="theFileName">
	/// optional file name
	/// </param>
	bool Load(unsigned char theData, size_t theLength, Macad::Occt::TCollection_AsciiString^ theFileName);
	/// <summary>
	/// Write image data to file using file extension to determine compression format.
	/// </summary>
	bool Save(Macad::Occt::TCollection_AsciiString^ theFileName);
	/// <summary>
	/// Initialize image plane with required dimensions.
	/// thePixelFormat - if specified pixel format doesn't supported by image library
	/// than nearest supported will be used instead!
	/// theSizeRowBytes - may be ignored by this class and required alignment will be used instead!
	/// </summary>
	bool InitTrash(Macad::Occt::Image_Format thePixelFormat, size_t theSizeX, size_t theSizeY, size_t theSizeRowBytes);
	/// <summary>
	/// Initialize image plane with required dimensions.
	/// thePixelFormat - if specified pixel format doesn't supported by image library
	/// than nearest supported will be used instead!
	/// theSizeRowBytes - may be ignored by this class and required alignment will be used instead!
	/// </summary>
	bool InitTrash(Macad::Occt::Image_Format thePixelFormat, size_t theSizeX, size_t theSizeY);
	/// <summary>
	/// Initialize by copying data.
	/// </summary>
	bool InitCopy(Macad::Occt::Image_PixMap^ theCopy);
	/// <summary>
	/// Method correctly deallocate internal buffer.
	/// </summary>
	void Clear();
	/// <summary>
	/// Performs gamma correction on image.
	/// theGamma - gamma value to use; a value of 1.0 leaves the image alone
	/// </summary>
	bool AdjustGamma(double theGammaCorr);
}; // class Image_AlienPixMap

//---------------------------------------------------------------------
//  Class  Image_CompressedPixMap
//---------------------------------------------------------------------
/// <summary>
/// Compressed pixmap data definition.
/// It is defined independently from Image_PixMap, which defines only uncompressed formats.
/// </summary>
public ref class Image_CompressedPixMap sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Image_CompressedPixMap_h
public:
	Include_Image_CompressedPixMap_h
#endif

public:
	Image_CompressedPixMap(::Image_CompressedPixMap* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Image_CompressedPixMap(::Image_CompressedPixMap& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Image_CompressedPixMap* NativeInstance
	{
		::Image_CompressedPixMap* get()
		{
			return static_cast<::Image_CompressedPixMap*>(_NativeInstance);
		}
	}

	static Macad::Occt::Image_CompressedPixMap^ CreateDowncasted(::Image_CompressedPixMap* instance);

public:
	/// <summary>
	/// Empty constructor.
	/// </summary>
	Image_CompressedPixMap();
	Image_CompressedPixMap(Macad::Occt::Image_CompressedPixMap^ parameter1);
	/// <summary>
	/// Return base (uncompressed) pixel format.
	/// </summary>
	Macad::Occt::Image_Format BaseFormat();
	/// <summary>
	/// Set base (uncompressed) pixel format.
	/// </summary>
	void SetBaseFormat(Macad::Occt::Image_Format theFormat);
	/// <summary>
	/// Return compressed format.
	/// </summary>
	Macad::Occt::Image_CompressedFormat CompressedFormat();
	/// <summary>
	/// Set compressed format.
	/// </summary>
	void SetCompressedFormat(Macad::Occt::Image_CompressedFormat theFormat);
	/// <summary>
	/// Return raw (compressed) data.
	/// </summary>
	Macad::Occt::NCollection_Buffer^ FaceData();
	/// <summary>
	/// Set raw (compressed) data.
	/// </summary>
	void SetFaceData(Macad::Occt::NCollection_Buffer^ theBuffer);
	/// <summary>
	/// Return Array of mipmap sizes, including base level.
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Array1<int> MipMaps() */
	/// <summary>
	/// Return Array of mipmap sizes, including base level.
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Array1<int> ChangeMipMaps() */
	/// <summary>
	/// Return TRUE if complete mip map level set (up to 1x1 resolution).
	/// </summary>
	bool IsCompleteMipMapSet();
	/// <summary>
	/// Set if complete mip map level set (up to 1x1 resolution).
	/// </summary>
	void SetCompleteMipMapSet(bool theIsComplete);
	/// <summary>
	/// Return surface length in bytes.
	/// </summary>
	size_t FaceBytes();
	/// <summary>
	/// Set surface length in bytes.
	/// </summary>
	void SetFaceBytes(size_t theSize);
	/// <summary>
	/// Return surface width.
	/// </summary>
	int SizeX();
	/// <summary>
	/// Return surface height.
	/// </summary>
	int SizeY();
	/// <summary>
	/// Set surface width x height.
	/// </summary>
	void SetSize(int theSizeX, int theSizeY);
	/// <summary>
	/// Return TRUE if image layout is top-down (always true).
	/// </summary>
	bool IsTopDown();
	/// <summary>
	/// Return number of faces in the file; should be 6 for cubemap.
	/// </summary>
	int NbFaces();
	/// <summary>
	/// Set number of faces in the file.
	/// </summary>
	void SetNbFaces(int theSize);
}; // class Image_CompressedPixMap

//---------------------------------------------------------------------
//  Class  Image_SupportedFormats
//---------------------------------------------------------------------
/// <summary>
/// Structure holding information about supported texture formats.
/// </summary>
public ref class Image_SupportedFormats sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Image_SupportedFormats_h
public:
	Include_Image_SupportedFormats_h
#endif

public:
	Image_SupportedFormats(::Image_SupportedFormats* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Image_SupportedFormats(::Image_SupportedFormats& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Image_SupportedFormats* NativeInstance
	{
		::Image_SupportedFormats* get()
		{
			return static_cast<::Image_SupportedFormats*>(_NativeInstance);
		}
	}

	static Macad::Occt::Image_SupportedFormats^ CreateDowncasted(::Image_SupportedFormats* instance);

public:
	/// <summary>
	/// Empty constructor.
	/// </summary>
	Image_SupportedFormats();
	Image_SupportedFormats(Macad::Occt::Image_SupportedFormats^ parameter1);
	/// <summary>
	/// Return TRUE if image format is supported.
	/// </summary>
	bool IsSupported(Macad::Occt::Image_Format theFormat);
	/// <summary>
	/// Set if image format is supported or not.
	/// </summary>
	void Add(Macad::Occt::Image_Format theFormat);
	/// <summary>
	/// Return TRUE if there are compressed image formats supported.
	/// </summary>
	bool HasCompressed();
	/// <summary>
	/// Return TRUE if compressed image format is supported.
	/// </summary>
	bool IsSupported(Macad::Occt::Image_CompressedFormat theFormat);
	/// <summary>
	/// Set if compressed image format is supported or not.
	/// </summary>
	void Add(Macad::Occt::Image_CompressedFormat theFormat);
	/// <summary>
	/// Reset flags.
	/// </summary>
	void Clear();
}; // class Image_SupportedFormats

//---------------------------------------------------------------------
//  Class  Image_DDSParser
//---------------------------------------------------------------------
/// <summary>
/// Auxiliary tool for parsing DDS file structure (without decoding).
/// </summary>
public ref class Image_DDSParser sealed : public BaseClass<::Image_DDSParser>
{

#ifdef Include_Image_DDSParser_h
public:
	Include_Image_DDSParser_h
#endif

public:
	Image_DDSParser(::Image_DDSParser* nativeInstance)
		: BaseClass<::Image_DDSParser>( nativeInstance, true )
	{}

	Image_DDSParser(::Image_DDSParser& nativeInstance)
		: BaseClass<::Image_DDSParser>( &nativeInstance, false )
	{}

	property ::Image_DDSParser* NativeInstance
	{
		::Image_DDSParser* get()
		{
			return static_cast<::Image_DDSParser*>(_NativeInstance);
		}
	}

public:
	Image_DDSParser();
	Image_DDSParser(Macad::Occt::Image_DDSParser^ parameter1);
	/// <summary>
	/// Load the face from DDS file.
	/// </summary>
	/// <param name="theSupported">
	/// [in] list of supported image formats
	/// </param>
	/// <param name="theFile">
	///      [in] file path
	/// </param>
	/// <param name="theFaceIndex">
	/// [in] face index, within [0, Image_CompressedPixMap::NbFaces()) range;
	/// use -1 to skip reading the face data
	/// </param>
	/// <param name="theFileOffset">
	/// [in] offset to the DDS data
	/// </param>
	/// <returns>
	/// loaded face or NULL if file cannot be read or not valid DDS file
	/// </returns>
	/* Method skipped due to unknown mapping: Image_CompressedPixMap Load(Image_SupportedFormats theSupported, TCollection_AsciiString theFile, Standard_Integer theFaceIndex, long long int theFileOffset, ) */
	/// <summary>
	/// Load the face from DDS file.
	/// </summary>
	/// <param name="theSupported">
	/// [in] list of supported image formats
	/// </param>
	/// <param name="theFile">
	///      [in] file path
	/// </param>
	/// <param name="theFaceIndex">
	/// [in] face index, within [0, Image_CompressedPixMap::NbFaces()) range;
	/// use -1 to skip reading the face data
	/// </param>
	/// <param name="theFileOffset">
	/// [in] offset to the DDS data
	/// </param>
	/// <returns>
	/// loaded face or NULL if file cannot be read or not valid DDS file
	/// </returns>
	static Macad::Occt::Image_CompressedPixMap^ Load(Macad::Occt::Image_SupportedFormats^ theSupported, Macad::Occt::TCollection_AsciiString^ theFile, int theFaceIndex);
	/// <summary>
	/// Load the face from DDS file.
	/// </summary>
	/// <param name="theSupported">
	/// [in] list of supported image formats
	/// </param>
	/// <param name="theBuffer">
	///    [in] pre-loaded file data, should be at least of 128 bytes long defining DDS header.
	/// </param>
	/// <param name="theFaceIndex">
	/// [in] face index, within [0, Image_CompressedPixMap::NbFaces()) range;
	/// use -1 to skip reading the face data
	/// </param>
	/// <returns>
	/// loaded face or NULL if file cannot be read or not valid DDS file
	/// </returns>
	static Macad::Occt::Image_CompressedPixMap^ Load(Macad::Occt::Image_SupportedFormats^ theSupported, Macad::Occt::NCollection_Buffer^ theBuffer, int theFaceIndex);
}; // class Image_DDSParser

//---------------------------------------------------------------------
//  Class  Image_Diff
//---------------------------------------------------------------------
/// <summary>
/// This class compares two images pixel-by-pixel.
/// It uses the following methods to ignore the difference between images:
/// - Black/White comparison. It makes the images 2-colored before the comparison.
/// - Equality with tolerance. Colors of two pixels are considered the same if the
/// difference of their color is less than a tolerance.
/// - Border filter. The algorithm ignores alone independent pixels,
/// which are different on both images, ignores the "border effect" -
/// the difference caused by triangles located at angle about 0 or 90 degrees to the user.
/// 
/// Border filter ignores a difference in implementation of
/// anti-aliasing and other effects on boundary of a shape.
/// The triangles of a boundary zone are usually located so that their normals point aside the user
/// (about 90 degree between the normal and the direction to the user's eye).
/// Deflection of the light for such a triangle depends on implementation of the video driver.
/// In order to skip this difference the following algorithm is used:
/// a) "Different" pixels are groupped and checked on "one-pixel width line".
/// indeed, the pixels may represent not a line, but any curve.
/// But the width of this curve should be not more than a pixel.
/// This group of pixels become a candidate to be ignored because of boundary effect.
/// b) The group of pixels is checked on belonging to a "shape".
/// Neighbour pixels are checked from the reference image.
/// This test confirms a fact that the group of pixels belongs to a shape and
/// represent a boundary of the shape.
/// In this case the whole group of pixels is ignored (considered as same).
/// Otherwise, the group of pixels may represent a geometrical curve in the viewer 3D
/// and should be considered as "different".
/// 
/// References:
/// 1. http://pdiff.sourceforge.net/ypg01.pdf
/// 2. http://pdiff.sourceforge.net/metric.html
/// 3. http://www.cs.ucf.edu/~sumant/publications/sig99.pdf
/// 4. http://www.worldscientific.com/worldscibooks/10.1142/2641#t=toc (there is a list of articles and books in PDF format)
/// </summary>
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
	/// <summary>
	/// An empty constructor. Init() should be called for initialization.
	/// </summary>
	Image_Diff();
	Image_Diff(Macad::Occt::Image_Diff^ parameter1);
	/// <summary>
	/// Initialize algorithm by two images.
	/// </summary>
	/// <returns>
	/// false if images has different or unsupported pixel format.
	/// </returns>
	bool Init(Macad::Occt::Image_PixMap^ theImageRef, Macad::Occt::Image_PixMap^ theImageNew, bool theToBlackWhite);
	/// <summary>
	/// Initialize algorithm by two images.
	/// </summary>
	/// <returns>
	/// false if images has different or unsupported pixel format.
	/// </returns>
	bool Init(Macad::Occt::Image_PixMap^ theImageRef, Macad::Occt::Image_PixMap^ theImageNew);
	/// <summary>
	/// Initialize algorithm by two images (will be loaded from files).
	/// </summary>
	/// <returns>
	/// false if images couldn't be opened or their format is unsupported.
	/// </returns>
	bool Init(Macad::Occt::TCollection_AsciiString^ theImgPathRef, Macad::Occt::TCollection_AsciiString^ theImgPathNew, bool theToBlackWhite);
	/// <summary>
	/// Initialize algorithm by two images (will be loaded from files).
	/// </summary>
	/// <returns>
	/// false if images couldn't be opened or their format is unsupported.
	/// </returns>
	bool Init(Macad::Occt::TCollection_AsciiString^ theImgPathRef, Macad::Occt::TCollection_AsciiString^ theImgPathNew);
	/// <summary>
	/// Color tolerance for equality check. Should be within range 0..1:
	/// Corresponds to a difference between white and black colors (maximum difference).
	/// By default, the tolerance is equal to 0 thus equality check will return false for any different colors.
	/// </summary>
	void SetColorTolerance(double theTolerance);
	/// <summary>
	/// Color tolerance for equality check.
	/// </summary>
	double ColorTolerance();
	/// <summary>
	/// Sets taking into account (ignoring) a "border effect" on comparison of images.
	/// The border effect is caused by a border of shaded shapes in the viewer 3d.
	/// Triangles of this area are located at about 0 or 90 degrees to the user.
	/// Therefore, they deflect light differently according to implementation of a video card driver.
	/// This flag allows to detect such a "border" area and skip it from comparison of images.
	/// Filter turned OFF by default.
	/// </summary>
	void SetBorderFilterOn(bool theToIgnore);
	/// <summary>
	/// Returns a flag of taking into account (ignoring) a border effect in comparison of images.
	/// </summary>
	bool IsBorderFilterOn();
	/// <summary>
	/// Compares two images. It returns a number of different pixels (or groups of pixels).
	/// It returns -1 if algorithm not initialized before.
	/// </summary>
	int Compare();
	/// <summary>
	/// Saves a difference between two images as white pixels on black background.
	/// </summary>
	bool SaveDiffImage(Macad::Occt::Image_PixMap^ theDiffImage);
	/// <summary>
	/// Saves a difference between two images as white pixels on black background.
	/// </summary>
	bool SaveDiffImage(Macad::Occt::TCollection_AsciiString^ theDiffPath);
}; // class Image_Diff

//---------------------------------------------------------------------
//  Class  Image_Texture
//---------------------------------------------------------------------
/// <summary>
/// Texture image definition.
/// The image can be stored as path to image file, as file path with the given offset and as a data buffer of encoded image.
/// </summary>
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
	/// <summary>
	/// Constructor pointing to file location.
	/// </summary>
	Image_Texture(Macad::Occt::TCollection_AsciiString^ theFileName);
	/// <summary>
	/// Constructor pointing to file part.
	/// </summary>
	/* Method skipped due to unknown mapping: void Image_Texture(TCollection_AsciiString theFileName, long long int theOffset, long long int theLength, ) */
	/// <summary>
	/// Constructor pointing to buffer.
	/// </summary>
	Image_Texture(Macad::Occt::NCollection_Buffer^ theBuffer, Macad::Occt::TCollection_AsciiString^ theId);
	Image_Texture(Macad::Occt::Image_Texture^ parameter1);
	/// <summary>
	/// Return generated texture id.
	/// </summary>
	Macad::Occt::TCollection_AsciiString^ TextureId();
	/// <summary>
	/// Return image file path.
	/// </summary>
	Macad::Occt::TCollection_AsciiString^ FilePath();
	/// <summary>
	/// Return offset within file.
	/// </summary>
	/* Method skipped due to unknown mapping: long long int FileOffset() */
	/// <summary>
	/// Return length of image data within the file after offset.
	/// </summary>
	/* Method skipped due to unknown mapping: long long int FileLength() */
	/// <summary>
	/// Return buffer holding encoded image content.
	/// </summary>
	Macad::Occt::NCollection_Buffer^ DataBuffer();
	/// <summary>
	/// Return mime-type of image file based on ProbeImageFileFormat().
	/// </summary>
	Macad::Occt::TCollection_AsciiString^ MimeType();
	/// <summary>
	/// Return image file format.
	/// </summary>
	Macad::Occt::TCollection_AsciiString^ ProbeImageFileFormat();
	/// <summary>
	/// Image reader without decoding data for formats supported natively by GPUs.
	/// </summary>
	Macad::Occt::Image_CompressedPixMap^ ReadCompressedImage(Macad::Occt::Image_SupportedFormats^ theSupported);
	/// <summary>
	/// Image reader.
	/// </summary>
	Macad::Occt::Image_PixMap^ ReadImage(Macad::Occt::Image_SupportedFormats^ theSupported);
	/// <summary>
	/// Write image to specified file without decoding data.
	/// </summary>
	bool WriteImage(Macad::Occt::TCollection_AsciiString^ theFile);
	/// <summary>
	/// Write image to specified stream without decoding data.
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean WriteImage(ostream theStream, TCollection_AsciiString theFile, ) */
	/// <summary>
	/// Hash value, for Map interface.
	/// </summary>
	static int HashCode(Macad::Occt::Image_Texture^ theTexture, int theUpper);
	/// <summary>
	/// Matching two instances, for Map interface.
	/// </summary>
	static bool IsEqual(Macad::Occt::Image_Texture^ theTex1, Macad::Occt::Image_Texture^ theTex2);
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Image_Texture

}; // namespace Occt
}; // namespace Macad
