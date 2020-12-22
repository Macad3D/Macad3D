// Generated wrapper code for package Prs3d

#pragma once

#include "Prs3d.h"
#include "Graphic3d.h"
#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  Prs3d_VertexDrawMode
//---------------------------------------------------------------------
public enum class Prs3d_VertexDrawMode
{
	Prs3d_VDM_Isolated = 0,
	Prs3d_VDM_All = 1,
	Prs3d_VDM_Inherited = 2
}; // enum  class Prs3d_VertexDrawMode

//---------------------------------------------------------------------
//  Enum  Prs3d_TypeOfHLR
//---------------------------------------------------------------------
public enum class Prs3d_TypeOfHLR
{
	Prs3d_TOH_NotSet = 0,
	Prs3d_TOH_PolyAlgo = 1,
	Prs3d_TOH_Algo = 2
}; // enum  class Prs3d_TypeOfHLR

//---------------------------------------------------------------------
//  Enum  Prs3d_DatumAttribute
//---------------------------------------------------------------------
public enum class Prs3d_DatumAttribute
{
	Prs3d_DA_XAxisLength = 0,
	Prs3d_DA_YAxisLength = 1,
	Prs3d_DA_ZAxisLength = 2,
	Prs3d_DP_ShadingTubeRadiusPercent = 3,
	Prs3d_DP_ShadingConeRadiusPercent = 4,
	Prs3d_DP_ShadingConeLengthPercent = 5,
	Prs3d_DP_ShadingOriginRadiusPercent = 6,
	Prs3d_DP_ShadingNumberOfFacettes = 7
}; // enum  class Prs3d_DatumAttribute

//---------------------------------------------------------------------
//  Enum  Prs3d_DatumAxes
//---------------------------------------------------------------------
public enum class Prs3d_DatumAxes
{
	Prs3d_DA_XAxis = 1,
	Prs3d_DA_YAxis = 2,
	Prs3d_DA_ZAxis = 4,
	Prs3d_DA_XYAxis = 3,
	Prs3d_DA_YZAxis = 6,
	Prs3d_DA_XZAxis = 5,
	Prs3d_DA_XYZAxis = 7
}; // enum  class Prs3d_DatumAxes

//---------------------------------------------------------------------
//  Enum  Prs3d_DatumMode
//---------------------------------------------------------------------
public enum class Prs3d_DatumMode
{
	Prs3d_DM_WireFrame = 0,
	Prs3d_DM_Shaded = 1
}; // enum  class Prs3d_DatumMode

//---------------------------------------------------------------------
//  Enum  Prs3d_DatumParts
//---------------------------------------------------------------------
public enum class Prs3d_DatumParts
{
	Prs3d_DP_Origin = 0,
	Prs3d_DP_XAxis = 1,
	Prs3d_DP_YAxis = 2,
	Prs3d_DP_ZAxis = 3,
	Prs3d_DP_XArrow = 4,
	Prs3d_DP_YArrow = 5,
	Prs3d_DP_ZArrow = 6,
	Prs3d_DP_XOYAxis = 7,
	Prs3d_DP_YOZAxis = 8,
	Prs3d_DP_XOZAxis = 9,
	Prs3d_DP_None = 10
}; // enum  class Prs3d_DatumParts

//---------------------------------------------------------------------
//  Enum  Prs3d_DimensionArrowOrientation
//---------------------------------------------------------------------
public enum class Prs3d_DimensionArrowOrientation
{
	Prs3d_DAO_Internal = 0,
	Prs3d_DAO_External = 1,
	Prs3d_DAO_Fit = 2
}; // enum  class Prs3d_DimensionArrowOrientation

//---------------------------------------------------------------------
//  Enum  Prs3d_DimensionTextHorizontalPosition
//---------------------------------------------------------------------
public enum class Prs3d_DimensionTextHorizontalPosition
{
	Prs3d_DTHP_Left = 0,
	Prs3d_DTHP_Right = 1,
	Prs3d_DTHP_Center = 2,
	Prs3d_DTHP_Fit = 3
}; // enum  class Prs3d_DimensionTextHorizontalPosition

//---------------------------------------------------------------------
//  Enum  Prs3d_DimensionTextVerticalPosition
//---------------------------------------------------------------------
public enum class Prs3d_DimensionTextVerticalPosition
{
	Prs3d_DTVP_Above = 0,
	Prs3d_DTVP_Below = 1,
	Prs3d_DTVP_Center = 2
}; // enum  class Prs3d_DimensionTextVerticalPosition

//---------------------------------------------------------------------
//  Enum  Prs3d_TypeOfHighlight
//---------------------------------------------------------------------
public enum class Prs3d_TypeOfHighlight
{
	Prs3d_TypeOfHighlight_None = 0,
	Prs3d_TypeOfHighlight_Selected = 1,
	Prs3d_TypeOfHighlight_Dynamic = 2,
	Prs3d_TypeOfHighlight_LocalSelected = 3,
	Prs3d_TypeOfHighlight_LocalDynamic = 4,
	Prs3d_TypeOfHighlight_SubIntensity = 5,
	Prs3d_TypeOfHighlight_NB = 6
}; // enum  class Prs3d_TypeOfHighlight

//---------------------------------------------------------------------
//  Enum  Prs3d_TypeOfLinePicking
//---------------------------------------------------------------------
public enum class Prs3d_TypeOfLinePicking
{
	Prs3d_TOLP_Point = 0,
	Prs3d_TOLP_Segment = 1
}; // enum  class Prs3d_TypeOfLinePicking

//---------------------------------------------------------------------
//  Class  Prs3d_NListOfSequenceOfPnt
//---------------------------------------------------------------------
public ref class Prs3d_NListOfSequenceOfPnt sealed : public BaseClass<::Prs3d_NListOfSequenceOfPnt>
{

#ifdef Include_Prs3d_NListOfSequenceOfPnt_h
public:
	Include_Prs3d_NListOfSequenceOfPnt_h
#endif

public:
	Prs3d_NListOfSequenceOfPnt(::Prs3d_NListOfSequenceOfPnt* nativeInstance)
		: BaseClass<::Prs3d_NListOfSequenceOfPnt>( nativeInstance, true )
	{}

	Prs3d_NListOfSequenceOfPnt(::Prs3d_NListOfSequenceOfPnt& nativeInstance)
		: BaseClass<::Prs3d_NListOfSequenceOfPnt>( &nativeInstance, false )
	{}

	property ::Prs3d_NListOfSequenceOfPnt* NativeInstance
	{
		::Prs3d_NListOfSequenceOfPnt* get()
		{
			return static_cast<::Prs3d_NListOfSequenceOfPnt*>(_NativeInstance);
		}
	}

public:
	Prs3d_NListOfSequenceOfPnt();
	Prs3d_NListOfSequenceOfPnt(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Prs3d_NListOfSequenceOfPnt(Macad::Occt::Prs3d_NListOfSequenceOfPnt^ theOther);
	int Size();
	Macad::Occt::Prs3d_NListOfSequenceOfPnt^ Assign(Macad::Occt::Prs3d_NListOfSequenceOfPnt^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::TColgp_HSequenceOfPnt^ First();
	Macad::Occt::TColgp_HSequenceOfPnt^ Last();
	Macad::Occt::TColgp_HSequenceOfPnt^ Append(Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
	/* Method skipped due to unknown mapping: void Append(TColgp_HSequenceOfPnt theItem, Iterator theIter, ) */
	void Append(Macad::Occt::Prs3d_NListOfSequenceOfPnt^ theOther);
	Macad::Occt::TColgp_HSequenceOfPnt^ Prepend(Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
	void Prepend(Macad::Occt::Prs3d_NListOfSequenceOfPnt^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: TColgp_HSequenceOfPnt InsertBefore(TColgp_HSequenceOfPnt theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(Prs3d_NListOfSequenceOfPnt theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: TColgp_HSequenceOfPnt InsertAfter(TColgp_HSequenceOfPnt theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Prs3d_NListOfSequenceOfPnt theOther, Iterator theIter, ) */
	void Reverse();
}; // class Prs3d_NListOfSequenceOfPnt

//---------------------------------------------------------------------
//  Class  Prs3d_DimensionUnits
//---------------------------------------------------------------------
public ref class Prs3d_DimensionUnits sealed : public BaseClass<::Prs3d_DimensionUnits>
{

#ifdef Include_Prs3d_DimensionUnits_h
public:
	Include_Prs3d_DimensionUnits_h
#endif

public:
	Prs3d_DimensionUnits(::Prs3d_DimensionUnits* nativeInstance)
		: BaseClass<::Prs3d_DimensionUnits>( nativeInstance, true )
	{}

	Prs3d_DimensionUnits(::Prs3d_DimensionUnits& nativeInstance)
		: BaseClass<::Prs3d_DimensionUnits>( &nativeInstance, false )
	{}

	property ::Prs3d_DimensionUnits* NativeInstance
	{
		::Prs3d_DimensionUnits* get()
		{
			return static_cast<::Prs3d_DimensionUnits*>(_NativeInstance);
		}
	}

public:
	Prs3d_DimensionUnits();
	Prs3d_DimensionUnits(Macad::Occt::Prs3d_DimensionUnits^ theUnits);
	void SetAngleUnits(Macad::Occt::TCollection_AsciiString^ theUnits);
	Macad::Occt::TCollection_AsciiString^ GetAngleUnits();
	void SetLengthUnits(Macad::Occt::TCollection_AsciiString^ theUnits);
	Macad::Occt::TCollection_AsciiString^ GetLengthUnits();
}; // class Prs3d_DimensionUnits

//---------------------------------------------------------------------
//  Class  Prs3d_BasicAspect
//---------------------------------------------------------------------
public ref class Prs3d_BasicAspect : public Macad::Occt::Standard_Transient
{

#ifdef Include_Prs3d_BasicAspect_h
public:
	Include_Prs3d_BasicAspect_h
#endif

protected:
	Prs3d_BasicAspect(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Prs3d_BasicAspect(::Prs3d_BasicAspect* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Prs3d_BasicAspect(::Prs3d_BasicAspect& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Prs3d_BasicAspect* NativeInstance
	{
		::Prs3d_BasicAspect* get()
		{
			return static_cast<::Prs3d_BasicAspect*>(_NativeInstance);
		}
	}

	static Macad::Occt::Prs3d_BasicAspect^ CreateDowncasted(::Prs3d_BasicAspect* instance);

public:
	Prs3d_BasicAspect(Macad::Occt::Prs3d_BasicAspect^ parameter1);
	Prs3d_BasicAspect();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Prs3d_BasicAspect

//---------------------------------------------------------------------
//  Class  Prs3d_LineAspect
//---------------------------------------------------------------------
public ref class Prs3d_LineAspect : public Macad::Occt::Prs3d_BasicAspect
{

#ifdef Include_Prs3d_LineAspect_h
public:
	Include_Prs3d_LineAspect_h
#endif

protected:
	Prs3d_LineAspect(InitMode init)
		: Macad::Occt::Prs3d_BasicAspect( init )
	{}

public:
	Prs3d_LineAspect(::Prs3d_LineAspect* nativeInstance)
		: Macad::Occt::Prs3d_BasicAspect( nativeInstance )
	{}

	Prs3d_LineAspect(::Prs3d_LineAspect& nativeInstance)
		: Macad::Occt::Prs3d_BasicAspect( nativeInstance )
	{}

	property ::Prs3d_LineAspect* NativeInstance
	{
		::Prs3d_LineAspect* get()
		{
			return static_cast<::Prs3d_LineAspect*>(_NativeInstance);
		}
	}

	static Macad::Occt::Prs3d_LineAspect^ CreateDowncasted(::Prs3d_LineAspect* instance);

public:
	Prs3d_LineAspect(Macad::Occt::Quantity_Color^ theColor, Macad::Occt::Aspect_TypeOfLine theType, double theWidth);
	Prs3d_LineAspect(Macad::Occt::Graphic3d_AspectLine3d^ theAspect);
	Prs3d_LineAspect(Macad::Occt::Prs3d_LineAspect^ parameter1);
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	void SetTypeOfLine(Macad::Occt::Aspect_TypeOfLine theType);
	void SetWidth(double theWidth);
	Macad::Occt::Graphic3d_AspectLine3d^ Aspect();
	void SetAspect(Macad::Occt::Graphic3d_AspectLine3d^ theAspect);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Prs3d_LineAspect

//---------------------------------------------------------------------
//  Class  Prs3d_TextAspect
//---------------------------------------------------------------------
public ref class Prs3d_TextAspect sealed : public Macad::Occt::Prs3d_BasicAspect
{

#ifdef Include_Prs3d_TextAspect_h
public:
	Include_Prs3d_TextAspect_h
#endif

public:
	Prs3d_TextAspect(::Prs3d_TextAspect* nativeInstance)
		: Macad::Occt::Prs3d_BasicAspect( nativeInstance )
	{}

	Prs3d_TextAspect(::Prs3d_TextAspect& nativeInstance)
		: Macad::Occt::Prs3d_BasicAspect( nativeInstance )
	{}

	property ::Prs3d_TextAspect* NativeInstance
	{
		::Prs3d_TextAspect* get()
		{
			return static_cast<::Prs3d_TextAspect*>(_NativeInstance);
		}
	}

	static Macad::Occt::Prs3d_TextAspect^ CreateDowncasted(::Prs3d_TextAspect* instance);

public:
	Prs3d_TextAspect();
	Prs3d_TextAspect(Macad::Occt::Graphic3d_AspectText3d^ theAspect);
	Prs3d_TextAspect(Macad::Occt::Prs3d_TextAspect^ parameter1);
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	void SetFont(System::String^ theFont);
	void SetHeight(double theHeight);
	void SetAngle(double theAngle);
	double Height();
	double Angle();
	void SetHorizontalJustification(Macad::Occt::Graphic3d_HorizontalTextAlignment theJustification);
	void SetVerticalJustification(Macad::Occt::Graphic3d_VerticalTextAlignment theJustification);
	void SetOrientation(Macad::Occt::Graphic3d_TextPath theOrientation);
	Macad::Occt::Graphic3d_HorizontalTextAlignment HorizontalJustification();
	Macad::Occt::Graphic3d_VerticalTextAlignment VerticalJustification();
	Macad::Occt::Graphic3d_TextPath Orientation();
	Macad::Occt::Graphic3d_AspectText3d^ Aspect();
	void SetAspect(Macad::Occt::Graphic3d_AspectText3d^ theAspect);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Prs3d_TextAspect

//---------------------------------------------------------------------
//  Class  Prs3d_ShadingAspect
//---------------------------------------------------------------------
public ref class Prs3d_ShadingAspect sealed : public Macad::Occt::Prs3d_BasicAspect
{

#ifdef Include_Prs3d_ShadingAspect_h
public:
	Include_Prs3d_ShadingAspect_h
#endif

public:
	Prs3d_ShadingAspect(::Prs3d_ShadingAspect* nativeInstance)
		: Macad::Occt::Prs3d_BasicAspect( nativeInstance )
	{}

	Prs3d_ShadingAspect(::Prs3d_ShadingAspect& nativeInstance)
		: Macad::Occt::Prs3d_BasicAspect( nativeInstance )
	{}

	property ::Prs3d_ShadingAspect* NativeInstance
	{
		::Prs3d_ShadingAspect* get()
		{
			return static_cast<::Prs3d_ShadingAspect*>(_NativeInstance);
		}
	}

	static Macad::Occt::Prs3d_ShadingAspect^ CreateDowncasted(::Prs3d_ShadingAspect* instance);

public:
	Prs3d_ShadingAspect();
	Prs3d_ShadingAspect(Macad::Occt::Graphic3d_AspectFillArea3d^ theAspect);
	Prs3d_ShadingAspect(Macad::Occt::Prs3d_ShadingAspect^ parameter1);
	void SetColor(Macad::Occt::Quantity_Color^ aColor, Macad::Occt::Aspect_TypeOfFacingModel aModel);
	void SetColor(Macad::Occt::Quantity_Color^ aColor);
	void SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ aMaterial, Macad::Occt::Aspect_TypeOfFacingModel aModel);
	void SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ aMaterial);
	void SetTransparency(double aValue, Macad::Occt::Aspect_TypeOfFacingModel aModel);
	void SetTransparency(double aValue);
	Macad::Occt::Quantity_Color^ Color(Macad::Occt::Aspect_TypeOfFacingModel aModel);
	Macad::Occt::Quantity_Color^ Color();
	Macad::Occt::Graphic3d_MaterialAspect^ Material(Macad::Occt::Aspect_TypeOfFacingModel aModel);
	Macad::Occt::Graphic3d_MaterialAspect^ Material();
	double Transparency(Macad::Occt::Aspect_TypeOfFacingModel aModel);
	double Transparency();
	Macad::Occt::Graphic3d_AspectFillArea3d^ Aspect();
	void SetAspect(Macad::Occt::Graphic3d_AspectFillArea3d^ theAspect);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Prs3d_ShadingAspect

//---------------------------------------------------------------------
//  Class  Prs3d_PointAspect
//---------------------------------------------------------------------
public ref class Prs3d_PointAspect sealed : public Macad::Occt::Prs3d_BasicAspect
{

#ifdef Include_Prs3d_PointAspect_h
public:
	Include_Prs3d_PointAspect_h
#endif

public:
	Prs3d_PointAspect(::Prs3d_PointAspect* nativeInstance)
		: Macad::Occt::Prs3d_BasicAspect( nativeInstance )
	{}

	Prs3d_PointAspect(::Prs3d_PointAspect& nativeInstance)
		: Macad::Occt::Prs3d_BasicAspect( nativeInstance )
	{}

	property ::Prs3d_PointAspect* NativeInstance
	{
		::Prs3d_PointAspect* get()
		{
			return static_cast<::Prs3d_PointAspect*>(_NativeInstance);
		}
	}

	static Macad::Occt::Prs3d_PointAspect^ CreateDowncasted(::Prs3d_PointAspect* instance);

public:
	Prs3d_PointAspect(Macad::Occt::Aspect_TypeOfMarker theType, Macad::Occt::Quantity_Color^ theColor, double theScale);
	Prs3d_PointAspect(Macad::Occt::Quantity_Color^ theColor, int theWidth, int theHeight, Macad::Occt::TColStd_HArray1OfByte^ theTexture);
	Prs3d_PointAspect(Macad::Occt::Graphic3d_AspectMarker3d^ theAspect);
	Prs3d_PointAspect(Macad::Occt::Prs3d_PointAspect^ parameter1);
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	void SetTypeOfMarker(Macad::Occt::Aspect_TypeOfMarker theType);
	void SetScale(double theScale);
	Macad::Occt::Graphic3d_AspectMarker3d^ Aspect();
	void SetAspect(Macad::Occt::Graphic3d_AspectMarker3d^ theAspect);
	void GetTextureSize(int% theWidth, int% theHeight);
	Macad::Occt::Graphic3d_MarkerImage^ GetTexture();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Prs3d_PointAspect

//---------------------------------------------------------------------
//  Class  Prs3d_PlaneAspect
//---------------------------------------------------------------------
public ref class Prs3d_PlaneAspect sealed : public Macad::Occt::Prs3d_BasicAspect
{

#ifdef Include_Prs3d_PlaneAspect_h
public:
	Include_Prs3d_PlaneAspect_h
#endif

public:
	Prs3d_PlaneAspect(::Prs3d_PlaneAspect* nativeInstance)
		: Macad::Occt::Prs3d_BasicAspect( nativeInstance )
	{}

	Prs3d_PlaneAspect(::Prs3d_PlaneAspect& nativeInstance)
		: Macad::Occt::Prs3d_BasicAspect( nativeInstance )
	{}

	property ::Prs3d_PlaneAspect* NativeInstance
	{
		::Prs3d_PlaneAspect* get()
		{
			return static_cast<::Prs3d_PlaneAspect*>(_NativeInstance);
		}
	}

	static Macad::Occt::Prs3d_PlaneAspect^ CreateDowncasted(::Prs3d_PlaneAspect* instance);

public:
	Prs3d_PlaneAspect();
	Prs3d_PlaneAspect(Macad::Occt::Prs3d_PlaneAspect^ parameter1);
	Macad::Occt::Prs3d_LineAspect^ EdgesAspect();
	Macad::Occt::Prs3d_LineAspect^ IsoAspect();
	Macad::Occt::Prs3d_LineAspect^ ArrowAspect();
	void SetArrowsLength(double theLength);
	double ArrowsLength();
	void SetArrowsSize(double theSize);
	double ArrowsSize();
	void SetArrowsAngle(double theAngle);
	double ArrowsAngle();
	void SetDisplayCenterArrow(bool theToDraw);
	bool DisplayCenterArrow();
	void SetDisplayEdgesArrows(bool theToDraw);
	bool DisplayEdgesArrows();
	void SetDisplayEdges(bool theToDraw);
	bool DisplayEdges();
	void SetDisplayIso(bool theToDraw);
	bool DisplayIso();
	void SetPlaneLength(double theLX, double theLY);
	double PlaneXLength();
	double PlaneYLength();
	void SetIsoDistance(double theL);
	double IsoDistance();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Prs3d_PlaneAspect

//---------------------------------------------------------------------
//  Class  Prs3d_ArrowAspect
//---------------------------------------------------------------------
public ref class Prs3d_ArrowAspect sealed : public Macad::Occt::Prs3d_BasicAspect
{

#ifdef Include_Prs3d_ArrowAspect_h
public:
	Include_Prs3d_ArrowAspect_h
#endif

public:
	Prs3d_ArrowAspect(::Prs3d_ArrowAspect* nativeInstance)
		: Macad::Occt::Prs3d_BasicAspect( nativeInstance )
	{}

	Prs3d_ArrowAspect(::Prs3d_ArrowAspect& nativeInstance)
		: Macad::Occt::Prs3d_BasicAspect( nativeInstance )
	{}

	property ::Prs3d_ArrowAspect* NativeInstance
	{
		::Prs3d_ArrowAspect* get()
		{
			return static_cast<::Prs3d_ArrowAspect*>(_NativeInstance);
		}
	}

	static Macad::Occt::Prs3d_ArrowAspect^ CreateDowncasted(::Prs3d_ArrowAspect* instance);

public:
	Prs3d_ArrowAspect();
	Prs3d_ArrowAspect(double anAngle, double aLength);
	Prs3d_ArrowAspect(Macad::Occt::Graphic3d_AspectLine3d^ theAspect);
	Prs3d_ArrowAspect(Macad::Occt::Prs3d_ArrowAspect^ parameter1);
	void SetAngle(double anAngle);
	double Angle();
	void SetLength(double theLength);
	double Length();
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	Macad::Occt::Graphic3d_AspectLine3d^ Aspect();
	void SetAspect(Macad::Occt::Graphic3d_AspectLine3d^ theAspect);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Prs3d_ArrowAspect

//---------------------------------------------------------------------
//  Class  Prs3d_DatumAspect
//---------------------------------------------------------------------
public ref class Prs3d_DatumAspect sealed : public Macad::Occt::Prs3d_BasicAspect
{

#ifdef Include_Prs3d_DatumAspect_h
public:
	Include_Prs3d_DatumAspect_h
#endif

public:
	Prs3d_DatumAspect(::Prs3d_DatumAspect* nativeInstance)
		: Macad::Occt::Prs3d_BasicAspect( nativeInstance )
	{}

	Prs3d_DatumAspect(::Prs3d_DatumAspect& nativeInstance)
		: Macad::Occt::Prs3d_BasicAspect( nativeInstance )
	{}

	property ::Prs3d_DatumAspect* NativeInstance
	{
		::Prs3d_DatumAspect* get()
		{
			return static_cast<::Prs3d_DatumAspect*>(_NativeInstance);
		}
	}

	static Macad::Occt::Prs3d_DatumAspect^ CreateDowncasted(::Prs3d_DatumAspect* instance);

public:
	Prs3d_DatumAspect();
	Prs3d_DatumAspect(Macad::Occt::Prs3d_DatumAspect^ parameter1);
	Macad::Occt::Prs3d_LineAspect^ LineAspect(Macad::Occt::Prs3d_DatumParts thePart);
	Macad::Occt::Prs3d_ShadingAspect^ ShadingAspect(Macad::Occt::Prs3d_DatumParts thePart);
	Macad::Occt::Prs3d_TextAspect^ TextAspect();
	void SetTextAspect(Macad::Occt::Prs3d_TextAspect^ theTextAspect);
	Macad::Occt::Prs3d_PointAspect^ PointAspect();
	void SetPointAspect(Macad::Occt::Prs3d_PointAspect^ theAspect);
	Macad::Occt::Prs3d_ArrowAspect^ ArrowAspect();
	void SetArrowAspect(Macad::Occt::Prs3d_ArrowAspect^ theAspect);
	Macad::Occt::Prs3d_LineAspect^ FirstAxisAspect();
	Macad::Occt::Prs3d_LineAspect^ SecondAxisAspect();
	Macad::Occt::Prs3d_LineAspect^ ThirdAxisAspect();
	void SetDrawFirstAndSecondAxis(bool theToDraw);
	bool DrawFirstAndSecondAxis();
	void SetDrawThirdAxis(bool theToDraw);
	bool DrawThirdAxis();
	bool DrawDatumPart(Macad::Occt::Prs3d_DatumParts thePart);
	void SetDrawDatumAxes(Macad::Occt::Prs3d_DatumAxes theType);
	Macad::Occt::Prs3d_DatumAxes DatumAxes();
	void SetAttribute(Macad::Occt::Prs3d_DatumAttribute theType, double theValue);
	double Attribute(Macad::Occt::Prs3d_DatumAttribute theType);
	void SetAxisLength(double theL1, double theL2, double theL3);
	double AxisLength(Macad::Occt::Prs3d_DatumParts thePart);
	double FirstAxisLength();
	double SecondAxisLength();
	double ThirdAxisLength();
	bool ToDrawLabels();
	void SetDrawLabels(bool theToDraw);
	void SetToDrawLabels(bool theToDraw);
	bool ToDrawArrows();
	void SetDrawArrows(bool theToDraw);
	Macad::Occt::Prs3d_DatumParts ArrowPartForAxis(Macad::Occt::Prs3d_DatumParts thePart);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Prs3d_DatumAspect

//---------------------------------------------------------------------
//  Class  Prs3d_DimensionAspect
//---------------------------------------------------------------------
public ref class Prs3d_DimensionAspect sealed : public Macad::Occt::Prs3d_BasicAspect
{

#ifdef Include_Prs3d_DimensionAspect_h
public:
	Include_Prs3d_DimensionAspect_h
#endif

public:
	Prs3d_DimensionAspect(::Prs3d_DimensionAspect* nativeInstance)
		: Macad::Occt::Prs3d_BasicAspect( nativeInstance )
	{}

	Prs3d_DimensionAspect(::Prs3d_DimensionAspect& nativeInstance)
		: Macad::Occt::Prs3d_BasicAspect( nativeInstance )
	{}

	property ::Prs3d_DimensionAspect* NativeInstance
	{
		::Prs3d_DimensionAspect* get()
		{
			return static_cast<::Prs3d_DimensionAspect*>(_NativeInstance);
		}
	}

	static Macad::Occt::Prs3d_DimensionAspect^ CreateDowncasted(::Prs3d_DimensionAspect* instance);

public:
	Prs3d_DimensionAspect();
	Prs3d_DimensionAspect(Macad::Occt::Prs3d_DimensionAspect^ parameter1);
	Macad::Occt::Prs3d_LineAspect^ LineAspect();
	void SetLineAspect(Macad::Occt::Prs3d_LineAspect^ theAspect);
	Macad::Occt::Prs3d_TextAspect^ TextAspect();
	void SetTextAspect(Macad::Occt::Prs3d_TextAspect^ theAspect);
	bool IsText3d();
	void MakeText3d(bool isText3d);
	bool IsTextShaded();
	void MakeTextShaded(bool theIsTextShaded);
	bool IsArrows3d();
	void MakeArrows3d(bool theIsArrows3d);
	bool IsUnitsDisplayed();
	void MakeUnitsDisplayed(bool theIsDisplayed);
	void SetArrowOrientation(Macad::Occt::Prs3d_DimensionArrowOrientation theArrowOrient);
	Macad::Occt::Prs3d_DimensionArrowOrientation ArrowOrientation();
	void SetTextVerticalPosition(Macad::Occt::Prs3d_DimensionTextVerticalPosition thePosition);
	Macad::Occt::Prs3d_DimensionTextVerticalPosition TextVerticalPosition();
	void SetTextHorizontalPosition(Macad::Occt::Prs3d_DimensionTextHorizontalPosition thePosition);
	Macad::Occt::Prs3d_DimensionTextHorizontalPosition TextHorizontalPosition();
	Macad::Occt::Prs3d_ArrowAspect^ ArrowAspect();
	void SetArrowAspect(Macad::Occt::Prs3d_ArrowAspect^ theAspect);
	void SetCommonColor(Macad::Occt::Quantity_Color^ theColor);
	void SetExtensionSize(double theSize);
	double ExtensionSize();
	void SetArrowTailSize(double theSize);
	double ArrowTailSize();
	void SetValueStringFormat(Macad::Occt::TCollection_AsciiString^ theFormat);
	Macad::Occt::TCollection_AsciiString^ ValueStringFormat();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Prs3d_DimensionAspect

//---------------------------------------------------------------------
//  Class  Prs3d_Drawer
//---------------------------------------------------------------------
public ref class Prs3d_Drawer : public Macad::Occt::Graphic3d_PresentationAttributes
{

#ifdef Include_Prs3d_Drawer_h
public:
	Include_Prs3d_Drawer_h
#endif

protected:
	Prs3d_Drawer(InitMode init)
		: Macad::Occt::Graphic3d_PresentationAttributes( init )
	{}

public:
	Prs3d_Drawer(::Prs3d_Drawer* nativeInstance)
		: Macad::Occt::Graphic3d_PresentationAttributes( nativeInstance )
	{}

	Prs3d_Drawer(::Prs3d_Drawer& nativeInstance)
		: Macad::Occt::Graphic3d_PresentationAttributes( nativeInstance )
	{}

	property ::Prs3d_Drawer* NativeInstance
	{
		::Prs3d_Drawer* get()
		{
			return static_cast<::Prs3d_Drawer*>(_NativeInstance);
		}
	}

	static Macad::Occt::Prs3d_Drawer^ CreateDowncasted(::Prs3d_Drawer* instance);

public:
	Prs3d_Drawer();
	Prs3d_Drawer(Macad::Occt::Prs3d_Drawer^ parameter1);
	void SetTypeOfDeflection(Macad::Occt::Aspect_TypeOfDeflection theTypeOfDeflection);
	Macad::Occt::Aspect_TypeOfDeflection TypeOfDeflection();
	bool HasOwnTypeOfDeflection();
	void SetMaximalChordialDeviation(double theChordialDeviation);
	double MaximalChordialDeviation();
	bool HasOwnMaximalChordialDeviation();
	void SetTypeOfHLR(Macad::Occt::Prs3d_TypeOfHLR theTypeOfHLR);
	Macad::Occt::Prs3d_TypeOfHLR TypeOfHLR();
	bool HasOwnTypeOfHLR();
	void SetMaximalParameterValue(double theValue);
	double MaximalParameterValue();
	bool HasOwnMaximalParameterValue();
	void SetIsoOnPlane(bool theIsEnabled);
	bool IsoOnPlane();
	bool HasOwnIsoOnPlane();
	bool IsoOnTriangulation();
	bool HasOwnIsoOnTriangulation();
	void SetIsoOnTriangulation(bool theToEnable);
	void SetDiscretisation(int theValue);
	int Discretisation();
	bool HasOwnDiscretisation();
	void SetDeviationCoefficient(double theCoefficient);
	double DeviationCoefficient();
	void SetDeviationCoefficient();
	bool HasOwnDeviationCoefficient();
	double PreviousDeviationCoefficient();
	void UpdatePreviousDeviationCoefficient();
	void SetHLRDeviationCoefficient(double theCoefficient);
	double HLRDeviationCoefficient();
	void SetHLRDeviationCoefficient();
	bool HasOwnHLRDeviationCoefficient();
	double PreviousHLRDeviationCoefficient();
	void SetDeviationAngle(double theAngle);
	double DeviationAngle();
	void SetDeviationAngle();
	bool HasOwnDeviationAngle();
	double PreviousDeviationAngle();
	void UpdatePreviousDeviationAngle();
	void SetHLRAngle(double theAngle);
	double HLRAngle();
	void SetHLRAngle();
	bool HasOwnHLRDeviationAngle();
	double PreviousHLRDeviationAngle();
	void SetAutoTriangulation(bool theIsEnabled);
	bool IsAutoTriangulation();
	bool HasOwnIsAutoTriangulation();
	Macad::Occt::Prs3d_IsoAspect^ UIsoAspect();
	void SetUIsoAspect(Macad::Occt::Prs3d_IsoAspect^ theAspect);
	bool HasOwnUIsoAspect();
	Macad::Occt::Prs3d_IsoAspect^ VIsoAspect();
	void SetVIsoAspect(Macad::Occt::Prs3d_IsoAspect^ theAspect);
	bool HasOwnVIsoAspect();
	Macad::Occt::Prs3d_LineAspect^ WireAspect();
	void SetWireAspect(Macad::Occt::Prs3d_LineAspect^ theAspect);
	bool HasOwnWireAspect();
	void SetWireDraw(bool theIsEnabled);
	bool WireDraw();
	bool HasOwnWireDraw();
	Macad::Occt::Prs3d_PointAspect^ PointAspect();
	void SetPointAspect(Macad::Occt::Prs3d_PointAspect^ theAspect);
	bool HasOwnPointAspect();
	bool SetupOwnPointAspect(Macad::Occt::Prs3d_Drawer^ theDefaults);
	bool SetupOwnPointAspect();
	Macad::Occt::Prs3d_LineAspect^ LineAspect();
	void SetLineAspect(Macad::Occt::Prs3d_LineAspect^ theAspect);
	bool HasOwnLineAspect();
	bool SetOwnLineAspects(Macad::Occt::Prs3d_Drawer^ theDefaults);
	bool SetOwnLineAspects();
	bool SetOwnDatumAspects(Macad::Occt::Prs3d_Drawer^ theDefaults);
	bool SetOwnDatumAspects();
	Macad::Occt::Prs3d_TextAspect^ TextAspect();
	void SetTextAspect(Macad::Occt::Prs3d_TextAspect^ theAspect);
	bool HasOwnTextAspect();
	Macad::Occt::Prs3d_ShadingAspect^ ShadingAspect();
	void SetShadingAspect(Macad::Occt::Prs3d_ShadingAspect^ theAspect);
	bool HasOwnShadingAspect();
	bool SetupOwnShadingAspect(Macad::Occt::Prs3d_Drawer^ theDefaults);
	bool SetupOwnShadingAspect();
	Macad::Occt::Prs3d_LineAspect^ SeenLineAspect();
	void SetSeenLineAspect(Macad::Occt::Prs3d_LineAspect^ theAspect);
	bool HasOwnSeenLineAspect();
	Macad::Occt::Prs3d_PlaneAspect^ PlaneAspect();
	void SetPlaneAspect(Macad::Occt::Prs3d_PlaneAspect^ theAspect);
	bool HasOwnPlaneAspect();
	Macad::Occt::Prs3d_ArrowAspect^ ArrowAspect();
	void SetArrowAspect(Macad::Occt::Prs3d_ArrowAspect^ theAspect);
	bool HasOwnArrowAspect();
	void SetLineArrowDraw(bool theIsEnabled);
	bool LineArrowDraw();
	bool HasOwnLineArrowDraw();
	Macad::Occt::Prs3d_LineAspect^ HiddenLineAspect();
	void SetHiddenLineAspect(Macad::Occt::Prs3d_LineAspect^ theAspect);
	bool HasOwnHiddenLineAspect();
	bool DrawHiddenLine();
	void EnableDrawHiddenLine();
	void DisableDrawHiddenLine();
	bool HasOwnDrawHiddenLine();
	Macad::Occt::Prs3d_LineAspect^ VectorAspect();
	void SetVectorAspect(Macad::Occt::Prs3d_LineAspect^ theAspect);
	bool HasOwnVectorAspect();
	void SetVertexDrawMode(Macad::Occt::Prs3d_VertexDrawMode theMode);
	Macad::Occt::Prs3d_VertexDrawMode VertexDrawMode();
	bool HasOwnVertexDrawMode();
	Macad::Occt::Prs3d_DatumAspect^ DatumAspect();
	void SetDatumAspect(Macad::Occt::Prs3d_DatumAspect^ theAspect);
	bool HasOwnDatumAspect();
	Macad::Occt::Prs3d_LineAspect^ SectionAspect();
	void SetSectionAspect(Macad::Occt::Prs3d_LineAspect^ theAspect);
	bool HasOwnSectionAspect();
	void SetFreeBoundaryAspect(Macad::Occt::Prs3d_LineAspect^ theAspect);
	Macad::Occt::Prs3d_LineAspect^ FreeBoundaryAspect();
	bool HasOwnFreeBoundaryAspect();
	void SetFreeBoundaryDraw(bool theIsEnabled);
	bool FreeBoundaryDraw();
	bool HasOwnFreeBoundaryDraw();
	void SetUnFreeBoundaryAspect(Macad::Occt::Prs3d_LineAspect^ theAspect);
	Macad::Occt::Prs3d_LineAspect^ UnFreeBoundaryAspect();
	bool HasOwnUnFreeBoundaryAspect();
	void SetUnFreeBoundaryDraw(bool theIsEnabled);
	bool UnFreeBoundaryDraw();
	bool HasOwnUnFreeBoundaryDraw();
	void SetFaceBoundaryAspect(Macad::Occt::Prs3d_LineAspect^ theAspect);
	Macad::Occt::Prs3d_LineAspect^ FaceBoundaryAspect();
	bool HasOwnFaceBoundaryAspect();
	bool SetupOwnFaceBoundaryAspect(Macad::Occt::Prs3d_Drawer^ theDefaults);
	bool SetupOwnFaceBoundaryAspect();
	void SetFaceBoundaryDraw(bool theIsEnabled);
	bool FaceBoundaryDraw();
	bool HasOwnFaceBoundaryDraw();
	bool HasOwnFaceBoundaryUpperContinuity();
	Macad::Occt::GeomAbs_Shape FaceBoundaryUpperContinuity();
	void SetFaceBoundaryUpperContinuity(Macad::Occt::GeomAbs_Shape theMostAllowedEdgeClass);
	void UnsetFaceBoundaryUpperContinuity();
	Macad::Occt::Prs3d_DimensionAspect^ DimensionAspect();
	void SetDimensionAspect(Macad::Occt::Prs3d_DimensionAspect^ theAspect);
	bool HasOwnDimensionAspect();
	void SetDimLengthModelUnits(Macad::Occt::TCollection_AsciiString^ theUnits);
	void SetDimAngleModelUnits(Macad::Occt::TCollection_AsciiString^ theUnits);
	Macad::Occt::TCollection_AsciiString^ DimLengthModelUnits();
	Macad::Occt::TCollection_AsciiString^ DimAngleModelUnits();
	bool HasOwnDimLengthModelUnits();
	bool HasOwnDimAngleModelUnits();
	void SetDimLengthDisplayUnits(Macad::Occt::TCollection_AsciiString^ theUnits);
	void SetDimAngleDisplayUnits(Macad::Occt::TCollection_AsciiString^ theUnits);
	Macad::Occt::TCollection_AsciiString^ DimLengthDisplayUnits();
	Macad::Occt::TCollection_AsciiString^ DimAngleDisplayUnits();
	bool HasOwnDimLengthDisplayUnits();
	bool HasOwnDimAngleDisplayUnits();
	Macad::Occt::Prs3d_Drawer^ Link();
	bool HasLink();
	void Link(Macad::Occt::Prs3d_Drawer^ theDrawer);
	void SetLink(Macad::Occt::Prs3d_Drawer^ theDrawer);
	void ClearLocalAttributes();
	/* Method skipped due to unknown mapping: bool SetShaderProgram(Graphic3d_ShaderProgram theProgram, Graphic3d_GroupAspect theAspect, bool theToOverrideDefaults, ) */
	/* Method skipped due to unknown mapping: bool SetShaderProgram(Graphic3d_ShaderProgram theProgram, Graphic3d_GroupAspect theAspect, bool theToOverrideDefaults, ) */
	bool SetShadingModel(Macad::Occt::Graphic3d_TypeOfShadingModel theModel, bool theToOverrideDefaults);
	bool SetShadingModel(Macad::Occt::Graphic3d_TypeOfShadingModel theModel);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Prs3d_Drawer

//---------------------------------------------------------------------
//  Class  Prs3d
//---------------------------------------------------------------------
public ref class Prs3d sealed : public BaseClass<::Prs3d>
{

#ifdef Include_Prs3d_h
public:
	Include_Prs3d_h
#endif

public:
	Prs3d(::Prs3d* nativeInstance)
		: BaseClass<::Prs3d>( nativeInstance, true )
	{}

	Prs3d(::Prs3d& nativeInstance)
		: BaseClass<::Prs3d>( &nativeInstance, false )
	{}

	property ::Prs3d* NativeInstance
	{
		::Prs3d* get()
		{
			return static_cast<::Prs3d*>(_NativeInstance);
		}
	}

public:
	Prs3d();
	Prs3d(Macad::Occt::Prs3d^ parameter1);
	static bool MatchSegment(double X, double Y, double Z, double aDistance, Macad::Occt::Pnt p1, Macad::Occt::Pnt p2, double% dist);
	static double GetDeflection(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::Prs3d_Drawer^ theDrawer);
	static Macad::Occt::Graphic3d_ArrayOfPrimitives^ PrimitivesFromPolylines(Macad::Occt::Prs3d_NListOfSequenceOfPnt^ thePoints);
	static void AddPrimitivesGroup(Macad::Occt::Graphic3d_Structure^ thePrs, Macad::Occt::Prs3d_LineAspect^ theAspect, Macad::Occt::Prs3d_NListOfSequenceOfPnt^ thePolylines);
}; // class Prs3d

//---------------------------------------------------------------------
//  Class  Prs3d_Root
//---------------------------------------------------------------------
public ref class Prs3d_Root : public BaseClass<::Prs3d_Root>
{

#ifdef Include_Prs3d_Root_h
public:
	Include_Prs3d_Root_h
#endif

protected:
	Prs3d_Root(InitMode init)
		: BaseClass<::Prs3d_Root>( init )
	{}

public:
	Prs3d_Root(::Prs3d_Root* nativeInstance)
		: BaseClass<::Prs3d_Root>( nativeInstance, true )
	{}

	Prs3d_Root(::Prs3d_Root& nativeInstance)
		: BaseClass<::Prs3d_Root>( &nativeInstance, false )
	{}

	property ::Prs3d_Root* NativeInstance
	{
		::Prs3d_Root* get()
		{
			return static_cast<::Prs3d_Root*>(_NativeInstance);
		}
	}

public:
	Prs3d_Root();
	Prs3d_Root(Macad::Occt::Prs3d_Root^ parameter1);
	static Macad::Occt::Graphic3d_Group^ CurrentGroup(Macad::Occt::Graphic3d_Structure^ thePrs3d);
	static Macad::Occt::Graphic3d_Group^ NewGroup(Macad::Occt::Graphic3d_Structure^ thePrs3d);
}; // class Prs3d_Root

//---------------------------------------------------------------------
//  Class  Prs3d_Arrow
//---------------------------------------------------------------------
public ref class Prs3d_Arrow sealed : public Macad::Occt::Prs3d_Root
{

#ifdef Include_Prs3d_Arrow_h
public:
	Include_Prs3d_Arrow_h
#endif

public:
	Prs3d_Arrow(::Prs3d_Arrow* nativeInstance)
		: Macad::Occt::Prs3d_Root( nativeInstance )
	{}

	Prs3d_Arrow(::Prs3d_Arrow& nativeInstance)
		: Macad::Occt::Prs3d_Root( nativeInstance )
	{}

	property ::Prs3d_Arrow* NativeInstance
	{
		::Prs3d_Arrow* get()
		{
			return static_cast<::Prs3d_Arrow*>(_NativeInstance);
		}
	}

public:
	Prs3d_Arrow();
	Prs3d_Arrow(Macad::Occt::Prs3d_Arrow^ parameter1);
	static Macad::Occt::Graphic3d_ArrayOfTriangles^ DrawShaded(Macad::Occt::Ax1 theAxis, double theTubeRadius, double theAxisLength, double theConeRadius, double theConeLength, int theNbFacettes);
	static Macad::Occt::Graphic3d_ArrayOfSegments^ DrawSegments(Macad::Occt::Pnt theLocation, Macad::Occt::Dir theDir, double theAngle, double theLength, int theNbSegments);
	static void Draw(Macad::Occt::Graphic3d_Group^ theGroup, Macad::Occt::Pnt theLocation, Macad::Occt::Dir theDirection, double theAngle, double theLength);
	static void Draw(Macad::Occt::Graphic3d_Structure^ thePrs, Macad::Occt::Pnt theLocation, Macad::Occt::Dir theDirection, double theAngle, double theLength);
}; // class Prs3d_Arrow

//---------------------------------------------------------------------
//  Class  Prs3d_IsoAspect
//---------------------------------------------------------------------
public ref class Prs3d_IsoAspect sealed : public Macad::Occt::Prs3d_LineAspect
{

#ifdef Include_Prs3d_IsoAspect_h
public:
	Include_Prs3d_IsoAspect_h
#endif

public:
	Prs3d_IsoAspect(::Prs3d_IsoAspect* nativeInstance)
		: Macad::Occt::Prs3d_LineAspect( nativeInstance )
	{}

	Prs3d_IsoAspect(::Prs3d_IsoAspect& nativeInstance)
		: Macad::Occt::Prs3d_LineAspect( nativeInstance )
	{}

	property ::Prs3d_IsoAspect* NativeInstance
	{
		::Prs3d_IsoAspect* get()
		{
			return static_cast<::Prs3d_IsoAspect*>(_NativeInstance);
		}
	}

	static Macad::Occt::Prs3d_IsoAspect^ CreateDowncasted(::Prs3d_IsoAspect* instance);

public:
	Prs3d_IsoAspect(Macad::Occt::Quantity_Color^ theColor, Macad::Occt::Aspect_TypeOfLine theType, double theWidth, int theNumber);
	Prs3d_IsoAspect(Macad::Occt::Prs3d_IsoAspect^ parameter1);
	void SetNumber(int theNumber);
	int Number();
}; // class Prs3d_IsoAspect

//---------------------------------------------------------------------
//  Class  Prs3d_InvalidAngle
//---------------------------------------------------------------------
public ref class Prs3d_InvalidAngle sealed : public Macad::Occt::Standard_RangeError
{

#ifdef Include_Prs3d_InvalidAngle_h
public:
	Include_Prs3d_InvalidAngle_h
#endif

public:
	Prs3d_InvalidAngle(::Prs3d_InvalidAngle* nativeInstance)
		: Macad::Occt::Standard_RangeError( nativeInstance )
	{}

	Prs3d_InvalidAngle(::Prs3d_InvalidAngle& nativeInstance)
		: Macad::Occt::Standard_RangeError( nativeInstance )
	{}

	property ::Prs3d_InvalidAngle* NativeInstance
	{
		::Prs3d_InvalidAngle* get()
		{
			return static_cast<::Prs3d_InvalidAngle*>(_NativeInstance);
		}
	}

	static Macad::Occt::Prs3d_InvalidAngle^ CreateDowncasted(::Prs3d_InvalidAngle* instance);

public:
	Prs3d_InvalidAngle();
	Prs3d_InvalidAngle(System::String^ theMessage);
	Prs3d_InvalidAngle(Macad::Occt::Prs3d_InvalidAngle^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Prs3d_InvalidAngle^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Prs3d_InvalidAngle^ NewInstance();
}; // class Prs3d_InvalidAngle

//---------------------------------------------------------------------
//  Class  Prs3d_PresentationShadow
//---------------------------------------------------------------------
public ref class Prs3d_PresentationShadow sealed : public Macad::Occt::Graphic3d_Structure
{

#ifdef Include_Prs3d_PresentationShadow_h
public:
	Include_Prs3d_PresentationShadow_h
#endif

public:
	Prs3d_PresentationShadow(::Prs3d_PresentationShadow* nativeInstance)
		: Macad::Occt::Graphic3d_Structure( nativeInstance )
	{}

	Prs3d_PresentationShadow(::Prs3d_PresentationShadow& nativeInstance)
		: Macad::Occt::Graphic3d_Structure( nativeInstance )
	{}

	property ::Prs3d_PresentationShadow* NativeInstance
	{
		::Prs3d_PresentationShadow* get()
		{
			return static_cast<::Prs3d_PresentationShadow*>(_NativeInstance);
		}
	}

	static Macad::Occt::Prs3d_PresentationShadow^ CreateDowncasted(::Prs3d_PresentationShadow* instance);

public:
	Prs3d_PresentationShadow(Macad::Occt::Graphic3d_StructureManager^ theViewer, Macad::Occt::Graphic3d_Structure^ thePrs);
	Prs3d_PresentationShadow(Macad::Occt::Prs3d_PresentationShadow^ parameter1);
	int ParentId();
	Macad::Occt::Graphic3d_ViewAffinity^ ParentAffinity();
	void CalculateBoundBox();
}; // class Prs3d_PresentationShadow

//---------------------------------------------------------------------
//  Class  Prs3d_Projector
//---------------------------------------------------------------------
public ref class Prs3d_Projector sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Prs3d_Projector_h
public:
	Include_Prs3d_Projector_h
#endif

public:
	Prs3d_Projector(::Prs3d_Projector* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Prs3d_Projector(::Prs3d_Projector& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Prs3d_Projector* NativeInstance
	{
		::Prs3d_Projector* get()
		{
			return static_cast<::Prs3d_Projector*>(_NativeInstance);
		}
	}

	static Macad::Occt::Prs3d_Projector^ CreateDowncasted(::Prs3d_Projector* instance);

public:
	/* Method skipped due to unknown mapping: void Prs3d_Projector(HLRAlgo_Projector Pr, ) */
	Prs3d_Projector(bool Pers, double Focus, double DX, double DY, double DZ, double XAt, double YAt, double ZAt, double XUp, double YUp, double ZUp);
	Prs3d_Projector(Macad::Occt::Prs3d_Projector^ parameter1);
	/* Method skipped due to unknown mapping: HLRAlgo_Projector Projector() */
}; // class Prs3d_Projector

//---------------------------------------------------------------------
//  Class  Prs3d_ShapeTool
//---------------------------------------------------------------------
public ref class Prs3d_ShapeTool sealed : public BaseClass<::Prs3d_ShapeTool>
{

#ifdef Include_Prs3d_ShapeTool_h
public:
	Include_Prs3d_ShapeTool_h
#endif

public:
	Prs3d_ShapeTool(::Prs3d_ShapeTool* nativeInstance)
		: BaseClass<::Prs3d_ShapeTool>( nativeInstance, true )
	{}

	Prs3d_ShapeTool(::Prs3d_ShapeTool& nativeInstance)
		: BaseClass<::Prs3d_ShapeTool>( &nativeInstance, false )
	{}

	property ::Prs3d_ShapeTool* NativeInstance
	{
		::Prs3d_ShapeTool* get()
		{
			return static_cast<::Prs3d_ShapeTool*>(_NativeInstance);
		}
	}

public:
	Prs3d_ShapeTool(Macad::Occt::TopoDS_Shape^ theShape, bool theAllVertices);
	Prs3d_ShapeTool(Macad::Occt::TopoDS_Shape^ theShape);
	Prs3d_ShapeTool(Macad::Occt::Prs3d_ShapeTool^ parameter1);
	void InitFace();
	bool MoreFace();
	void NextFace();
	Macad::Occt::TopoDS_Face^ GetFace();
	Macad::Occt::Bnd_Box^ FaceBound();
	bool IsPlanarFace();
	void InitCurve();
	bool MoreCurve();
	void NextCurve();
	Macad::Occt::TopoDS_Edge^ GetCurve();
	Macad::Occt::Bnd_Box^ CurveBound();
	int Neighbours();
	Macad::Occt::TopTools_HSequenceOfShape^ FacesOfEdge();
	void InitVertex();
	bool MoreVertex();
	void NextVertex();
	Macad::Occt::TopoDS_Vertex^ GetVertex();
	bool HasSurface();
	/* Method skipped due to unknown mapping: Poly_Triangulation CurrentTriangulation(TopLoc_Location l, ) */
	bool HasCurve();
	/* Method skipped due to unknown mapping: void PolygonOnTriangulation(Poly_PolygonOnTriangulation Indices, Poly_Triangulation T, TopLoc_Location l, ) */
	/* Method skipped due to unknown mapping: Poly_Polygon3D Polygon3D(TopLoc_Location l, ) */
	static bool IsPlanarFace(Macad::Occt::TopoDS_Face^ theFace);
}; // class Prs3d_ShapeTool

//---------------------------------------------------------------------
//  Class  Prs3d_Text
//---------------------------------------------------------------------
public ref class Prs3d_Text sealed : public Macad::Occt::Prs3d_Root
{

#ifdef Include_Prs3d_Text_h
public:
	Include_Prs3d_Text_h
#endif

public:
	Prs3d_Text(::Prs3d_Text* nativeInstance)
		: Macad::Occt::Prs3d_Root( nativeInstance )
	{}

	Prs3d_Text(::Prs3d_Text& nativeInstance)
		: Macad::Occt::Prs3d_Root( nativeInstance )
	{}

	property ::Prs3d_Text* NativeInstance
	{
		::Prs3d_Text* get()
		{
			return static_cast<::Prs3d_Text*>(_NativeInstance);
		}
	}

public:
	Prs3d_Text();
	Prs3d_Text(Macad::Occt::Prs3d_Text^ parameter1);
	static void Draw(Macad::Occt::Graphic3d_Group^ theGroup, Macad::Occt::Prs3d_TextAspect^ theAspect, Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Pnt theAttachmentPoint);
	static void Draw(Macad::Occt::Graphic3d_Group^ theGroup, Macad::Occt::Prs3d_TextAspect^ theAspect, Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Ax2 theOrientation, bool theHasOwnAnchor);
	static void Draw(Macad::Occt::Graphic3d_Group^ theGroup, Macad::Occt::Prs3d_TextAspect^ theAspect, Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Ax2 theOrientation);
	static void Draw(Macad::Occt::Graphic3d_Structure^ thePrs, Macad::Occt::Prs3d_Drawer^ theDrawer, Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Pnt theAttachmentPoint);
	static void Draw(Macad::Occt::Graphic3d_Structure^ thePrs, Macad::Occt::Prs3d_TextAspect^ theAspect, Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Ax2 theOrientation, bool theHasOwnAnchor);
	static void Draw(Macad::Occt::Graphic3d_Structure^ thePrs, Macad::Occt::Prs3d_TextAspect^ theAspect, Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Ax2 theOrientation);
	static void Draw(Macad::Occt::Graphic3d_Structure^ thePrs, Macad::Occt::Prs3d_TextAspect^ theAspect, Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Pnt theAttachmentPoint);
}; // class Prs3d_Text

//---------------------------------------------------------------------
//  Class  Prs3d_ToolQuadric
//---------------------------------------------------------------------
public ref class Prs3d_ToolQuadric : public BaseClass<::Prs3d_ToolQuadric>
{

#ifdef Include_Prs3d_ToolQuadric_h
public:
	Include_Prs3d_ToolQuadric_h
#endif

protected:
	Prs3d_ToolQuadric(InitMode init)
		: BaseClass<::Prs3d_ToolQuadric>( init )
	{}

public:
	Prs3d_ToolQuadric(::Prs3d_ToolQuadric* nativeInstance)
		: BaseClass<::Prs3d_ToolQuadric>( nativeInstance, true )
	{}

	Prs3d_ToolQuadric(::Prs3d_ToolQuadric& nativeInstance)
		: BaseClass<::Prs3d_ToolQuadric>( &nativeInstance, false )
	{}

	property ::Prs3d_ToolQuadric* NativeInstance
	{
		::Prs3d_ToolQuadric* get()
		{
			return static_cast<::Prs3d_ToolQuadric*>(_NativeInstance);
		}
	}

public:
	Prs3d_ToolQuadric();
	Prs3d_ToolQuadric(Macad::Occt::Prs3d_ToolQuadric^ parameter1);
	void FillArray(Macad::Occt::Graphic3d_ArrayOfTriangles^ theArray, Macad::Occt::Trsf theTrsf);
	/* Method skipped due to unknown mapping: void FillArray(Graphic3d_ArrayOfTriangles theArray, Poly_Triangulation theTriangulation, gp_Trsf theTrsf, ) */
	static int TrianglesNb(int theSlicesNb, int theStacksNb);
}; // class Prs3d_ToolQuadric

//---------------------------------------------------------------------
//  Class  Prs3d_ToolCylinder
//---------------------------------------------------------------------
public ref class Prs3d_ToolCylinder sealed : public Macad::Occt::Prs3d_ToolQuadric
{

#ifdef Include_Prs3d_ToolCylinder_h
public:
	Include_Prs3d_ToolCylinder_h
#endif

public:
	Prs3d_ToolCylinder(::Prs3d_ToolCylinder* nativeInstance)
		: Macad::Occt::Prs3d_ToolQuadric( nativeInstance )
	{}

	Prs3d_ToolCylinder(::Prs3d_ToolCylinder& nativeInstance)
		: Macad::Occt::Prs3d_ToolQuadric( nativeInstance )
	{}

	property ::Prs3d_ToolCylinder* NativeInstance
	{
		::Prs3d_ToolCylinder* get()
		{
			return static_cast<::Prs3d_ToolCylinder*>(_NativeInstance);
		}
	}

public:
	Prs3d_ToolCylinder(double theBottomRad, double theTopRad, double theHeight, int theNbSlices, int theNbStacks);
	Prs3d_ToolCylinder(Macad::Occt::Prs3d_ToolCylinder^ parameter1);
	static Macad::Occt::Graphic3d_ArrayOfTriangles^ Create(double theBottomRad, double theTopRad, double theHeight, int theNbSlices, int theNbStacks, Macad::Occt::Trsf theTrsf);
}; // class Prs3d_ToolCylinder

//---------------------------------------------------------------------
//  Class  Prs3d_ToolDisk
//---------------------------------------------------------------------
public ref class Prs3d_ToolDisk sealed : public Macad::Occt::Prs3d_ToolQuadric
{

#ifdef Include_Prs3d_ToolDisk_h
public:
	Include_Prs3d_ToolDisk_h
#endif

public:
	Prs3d_ToolDisk(::Prs3d_ToolDisk* nativeInstance)
		: Macad::Occt::Prs3d_ToolQuadric( nativeInstance )
	{}

	Prs3d_ToolDisk(::Prs3d_ToolDisk& nativeInstance)
		: Macad::Occt::Prs3d_ToolQuadric( nativeInstance )
	{}

	property ::Prs3d_ToolDisk* NativeInstance
	{
		::Prs3d_ToolDisk* get()
		{
			return static_cast<::Prs3d_ToolDisk*>(_NativeInstance);
		}
	}

public:
	Prs3d_ToolDisk(double theInnerRadius, double theOuterRadius, int theNbSlices, int theNbStacks);
	Prs3d_ToolDisk(Macad::Occt::Prs3d_ToolDisk^ parameter1);
	static Macad::Occt::Graphic3d_ArrayOfTriangles^ Create(double theInnerRadius, double theOuterRadius, int theNbSlices, int theNbStacks, Macad::Occt::Trsf theTrsf);
	void SetAngleRange(double theStartAngle, double theEndAngle);
}; // class Prs3d_ToolDisk

//---------------------------------------------------------------------
//  Class  Prs3d_ToolSector
//---------------------------------------------------------------------
public ref class Prs3d_ToolSector sealed : public Macad::Occt::Prs3d_ToolQuadric
{

#ifdef Include_Prs3d_ToolSector_h
public:
	Include_Prs3d_ToolSector_h
#endif

public:
	Prs3d_ToolSector(::Prs3d_ToolSector* nativeInstance)
		: Macad::Occt::Prs3d_ToolQuadric( nativeInstance )
	{}

	Prs3d_ToolSector(::Prs3d_ToolSector& nativeInstance)
		: Macad::Occt::Prs3d_ToolQuadric( nativeInstance )
	{}

	property ::Prs3d_ToolSector* NativeInstance
	{
		::Prs3d_ToolSector* get()
		{
			return static_cast<::Prs3d_ToolSector*>(_NativeInstance);
		}
	}

public:
	Prs3d_ToolSector(double theRadius, int theNbSlices, int theNbStacks);
	Prs3d_ToolSector(Macad::Occt::Prs3d_ToolSector^ parameter1);
	static Macad::Occt::Graphic3d_ArrayOfTriangles^ Create(double theRadius, int theNbSlices, int theNbStacks, Macad::Occt::Trsf theTrsf);
}; // class Prs3d_ToolSector

//---------------------------------------------------------------------
//  Class  Prs3d_ToolSphere
//---------------------------------------------------------------------
public ref class Prs3d_ToolSphere sealed : public Macad::Occt::Prs3d_ToolQuadric
{

#ifdef Include_Prs3d_ToolSphere_h
public:
	Include_Prs3d_ToolSphere_h
#endif

public:
	Prs3d_ToolSphere(::Prs3d_ToolSphere* nativeInstance)
		: Macad::Occt::Prs3d_ToolQuadric( nativeInstance )
	{}

	Prs3d_ToolSphere(::Prs3d_ToolSphere& nativeInstance)
		: Macad::Occt::Prs3d_ToolQuadric( nativeInstance )
	{}

	property ::Prs3d_ToolSphere* NativeInstance
	{
		::Prs3d_ToolSphere* get()
		{
			return static_cast<::Prs3d_ToolSphere*>(_NativeInstance);
		}
	}

public:
	Prs3d_ToolSphere(double theRadius, int theNbSlices, int theNbStacks);
	Prs3d_ToolSphere(Macad::Occt::Prs3d_ToolSphere^ parameter1);
	static Macad::Occt::Graphic3d_ArrayOfTriangles^ Create(double theRadius, int theNbSlices, int theNbStacks, Macad::Occt::Trsf theTrsf);
}; // class Prs3d_ToolSphere

}; // namespace Occt
}; // namespace Macad
