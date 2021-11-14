// Generated wrapper code for package StdSelect

#pragma once

#include "PrsMgr.h"
#include "SelectMgr.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  StdSelect_TypeOfEdge
//---------------------------------------------------------------------
public enum class StdSelect_TypeOfEdge
{
	StdSelect_AnyEdge = 0,
	StdSelect_Line = 1,
	StdSelect_Circle = 2
}; // enum  class StdSelect_TypeOfEdge

//---------------------------------------------------------------------
//  Enum  StdSelect_TypeOfFace
//---------------------------------------------------------------------
public enum class StdSelect_TypeOfFace
{
	StdSelect_AnyFace = 0,
	StdSelect_Plane = 1,
	StdSelect_Cylinder = 2,
	StdSelect_Sphere = 3,
	StdSelect_Torus = 4,
	StdSelect_Revol = 5,
	StdSelect_Cone = 6
}; // enum  class StdSelect_TypeOfFace

//---------------------------------------------------------------------
//  Enum  StdSelect_TypeOfSelectionImage
//---------------------------------------------------------------------
public enum class StdSelect_TypeOfSelectionImage
{
	StdSelect_TypeOfSelectionImage_NormalizedDepth = 0,
	StdSelect_TypeOfSelectionImage_NormalizedDepthInverted = 1,
	StdSelect_TypeOfSelectionImage_UnnormalizedDepth = 2,
	StdSelect_TypeOfSelectionImage_ColoredDetectedObject = 3,
	StdSelect_TypeOfSelectionImage_ColoredEntity = 4,
	StdSelect_TypeOfSelectionImage_ColoredEntityType = 5,
	StdSelect_TypeOfSelectionImage_ColoredOwner = 6,
	StdSelect_TypeOfSelectionImage_ColoredSelectionMode = 7,
	StdSelect_TypeOfSelectionImage_SurfaceNormal = 8
}; // enum  class StdSelect_TypeOfSelectionImage

//---------------------------------------------------------------------
//  Class  StdSelect
//---------------------------------------------------------------------
public ref class StdSelect sealed : public BaseClass<::StdSelect>
{

#ifdef Include_StdSelect_h
public:
	Include_StdSelect_h
#endif

public:
	StdSelect(::StdSelect* nativeInstance)
		: BaseClass<::StdSelect>( nativeInstance, true )
	{}

	StdSelect(::StdSelect& nativeInstance)
		: BaseClass<::StdSelect>( &nativeInstance, false )
	{}

	property ::StdSelect* NativeInstance
	{
		::StdSelect* get()
		{
			return static_cast<::StdSelect*>(_NativeInstance);
		}
	}

public:
	StdSelect();
	StdSelect(Macad::Occt::StdSelect^ parameter1);
	static void SetDrawerForBRepOwner(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::Prs3d_Drawer^ aDrawer);
}; // class StdSelect

//---------------------------------------------------------------------
//  Class  StdSelect_Shape
//---------------------------------------------------------------------
public ref class StdSelect_Shape sealed : public Macad::Occt::PrsMgr_PresentableObject
{

#ifdef Include_StdSelect_Shape_h
public:
	Include_StdSelect_Shape_h
#endif

public:
	StdSelect_Shape(::StdSelect_Shape* nativeInstance)
		: Macad::Occt::PrsMgr_PresentableObject( nativeInstance )
	{}

	StdSelect_Shape(::StdSelect_Shape& nativeInstance)
		: Macad::Occt::PrsMgr_PresentableObject( nativeInstance )
	{}

	property ::StdSelect_Shape* NativeInstance
	{
		::StdSelect_Shape* get()
		{
			return static_cast<::StdSelect_Shape*>(_NativeInstance);
		}
	}

	static Macad::Occt::StdSelect_Shape^ CreateDowncasted(::StdSelect_Shape* instance);

public:
	StdSelect_Shape(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::Prs3d_Drawer^ theDrawer);
	StdSelect_Shape(Macad::Occt::TopoDS_Shape^ theShape);
	StdSelect_Shape(Macad::Occt::StdSelect_Shape^ parameter1);
	/* Method skipped due to unknown mapping: void Compute(PrsMgr_PresentationManager thePrsMgr, Graphic3d_Structure thePrs, Standard_Integer theMode, ) */
	Macad::Occt::TopoDS_Shape^ Shape();
	void Shape(Macad::Occt::TopoDS_Shape^ theShape);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class StdSelect_Shape

//---------------------------------------------------------------------
//  Class  StdSelect_BRepOwner
//---------------------------------------------------------------------
public ref class StdSelect_BRepOwner sealed : public Macad::Occt::SelectMgr_EntityOwner
{

#ifdef Include_StdSelect_BRepOwner_h
public:
	Include_StdSelect_BRepOwner_h
#endif

public:
	StdSelect_BRepOwner(::StdSelect_BRepOwner* nativeInstance)
		: Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
	{}

	StdSelect_BRepOwner(::StdSelect_BRepOwner& nativeInstance)
		: Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
	{}

	property ::StdSelect_BRepOwner* NativeInstance
	{
		::StdSelect_BRepOwner* get()
		{
			return static_cast<::StdSelect_BRepOwner*>(_NativeInstance);
		}
	}

	static Macad::Occt::StdSelect_BRepOwner^ CreateDowncasted(::StdSelect_BRepOwner* instance);

public:
	StdSelect_BRepOwner(int aPriority);
	StdSelect_BRepOwner(Macad::Occt::TopoDS_Shape^ aShape, int aPriority, bool ComesFromDecomposition);
	StdSelect_BRepOwner(Macad::Occt::TopoDS_Shape^ aShape, int aPriority);
	StdSelect_BRepOwner(Macad::Occt::TopoDS_Shape^ aShape);
	StdSelect_BRepOwner(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::SelectMgr_SelectableObject^ theOrigin, int aPriority, bool FromDecomposition);
	StdSelect_BRepOwner(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::SelectMgr_SelectableObject^ theOrigin, int aPriority);
	StdSelect_BRepOwner(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::SelectMgr_SelectableObject^ theOrigin);
	StdSelect_BRepOwner(Macad::Occt::StdSelect_BRepOwner^ parameter1);
	bool HasShape();
	Macad::Occt::TopoDS_Shape^ Shape();
	bool HasHilightMode();
	void SetHilightMode(int theMode);
	void ResetHilightMode();
	int HilightMode();
	/* Method skipped due to unknown mapping: Standard_Boolean IsHilighted(PrsMgr_PresentationManager aPM, Standard_Integer aMode, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean IsHilighted(PrsMgr_PresentationManager aPM, Standard_Integer aMode, ) */
	/* Method skipped due to unknown mapping: void HilightWithColor(PrsMgr_PresentationManager thePM, Prs3d_Drawer theStyle, Standard_Integer theMode, ) */
	/* Method skipped due to unknown mapping: void Unhilight(PrsMgr_PresentationManager aPM, Standard_Integer aMode, ) */
	/* Method skipped due to unknown mapping: void Unhilight(PrsMgr_PresentationManager aPM, Standard_Integer aMode, ) */
	/* Method skipped due to unknown mapping: void Clear(PrsMgr_PresentationManager aPM, Standard_Integer aMode, ) */
	/* Method skipped due to unknown mapping: void Clear(PrsMgr_PresentationManager aPM, Standard_Integer aMode, ) */
	void SetLocation(Macad::Occt::TopLoc_Location^ aLoc);
	/* Method skipped due to unknown mapping: void UpdateHighlightTrsf(V3d_Viewer theViewer, PrsMgr_PresentationManager theManager, Standard_Integer theDispMode, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class StdSelect_BRepOwner

//---------------------------------------------------------------------
//  Class  StdSelect_BRepSelectionTool
//---------------------------------------------------------------------
public ref class StdSelect_BRepSelectionTool sealed : public BaseClass<::StdSelect_BRepSelectionTool>
{

#ifdef Include_StdSelect_BRepSelectionTool_h
public:
	Include_StdSelect_BRepSelectionTool_h
#endif

public:
	StdSelect_BRepSelectionTool(::StdSelect_BRepSelectionTool* nativeInstance)
		: BaseClass<::StdSelect_BRepSelectionTool>( nativeInstance, true )
	{}

	StdSelect_BRepSelectionTool(::StdSelect_BRepSelectionTool& nativeInstance)
		: BaseClass<::StdSelect_BRepSelectionTool>( &nativeInstance, false )
	{}

	property ::StdSelect_BRepSelectionTool* NativeInstance
	{
		::StdSelect_BRepSelectionTool* get()
		{
			return static_cast<::StdSelect_BRepSelectionTool*>(_NativeInstance);
		}
	}

public:
	StdSelect_BRepSelectionTool();
	StdSelect_BRepSelectionTool(Macad::Occt::StdSelect_BRepSelectionTool^ parameter1);
	static void Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority, int NbPOnEdge, double MaximalParameter);
	static void Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority, int NbPOnEdge);
	static void Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority);
	static void Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation);
	static void Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle);
	static void Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::SelectMgr_SelectableObject^ Origin, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority, int NbPOnEdge, double MaximalParameter);
	static void Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::SelectMgr_SelectableObject^ Origin, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority, int NbPOnEdge);
	static void Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::SelectMgr_SelectableObject^ Origin, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority);
	static void Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::SelectMgr_SelectableObject^ Origin, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation);
	static void Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::SelectMgr_SelectableObject^ Origin, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle);
	static int GetStandardPriority(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::TopAbs_ShapeEnum theType);
	static void ComputeSensitive(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::SelectMgr_EntityOwner^ theOwner, Macad::Occt::SelectMgr_Selection^ theSelection, double theDeflection, double theDeflAngle, int theNbPOnEdge, double theMaxiParam, bool theAutoTriang);
	static void ComputeSensitive(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::SelectMgr_EntityOwner^ theOwner, Macad::Occt::SelectMgr_Selection^ theSelection, double theDeflection, double theDeflAngle, int theNbPOnEdge, double theMaxiParam);
	/* Method skipped due to unknown mapping: Standard_Boolean GetSensitiveForFace(TopoDS_Face theFace, SelectMgr_EntityOwner theOwner, Select3D_EntitySequence theOutList, Standard_Boolean theAutoTriang, Standard_Integer theNbPOnEdge, Standard_Real theMaxiParam, Standard_Boolean theInteriorFlag, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean GetSensitiveForFace(TopoDS_Face theFace, SelectMgr_EntityOwner theOwner, Select3D_EntitySequence theOutList, Standard_Boolean theAutoTriang, Standard_Integer theNbPOnEdge, Standard_Real theMaxiParam, Standard_Boolean theInteriorFlag, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean GetSensitiveForFace(TopoDS_Face theFace, SelectMgr_EntityOwner theOwner, Select3D_EntitySequence theOutList, Standard_Boolean theAutoTriang, Standard_Integer theNbPOnEdge, Standard_Real theMaxiParam, Standard_Boolean theInteriorFlag, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean GetSensitiveForFace(TopoDS_Face theFace, SelectMgr_EntityOwner theOwner, Select3D_EntitySequence theOutList, Standard_Boolean theAutoTriang, Standard_Integer theNbPOnEdge, Standard_Real theMaxiParam, Standard_Boolean theInteriorFlag, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean GetSensitiveForFace(TopoDS_Face theFace, SelectMgr_EntityOwner theOwner, Select3D_EntitySequence theOutList, Standard_Boolean theAutoTriang, Standard_Integer theNbPOnEdge, Standard_Real theMaxiParam, Standard_Boolean theInteriorFlag, ) */
	/* Method skipped due to unknown mapping: void GetEdgeSensitive(TopoDS_Shape theShape, SelectMgr_EntityOwner theOwner, SelectMgr_Selection theSelection, Standard_Real theDeflection, Standard_Real theDeviationAngle, Standard_Integer theNbPOnEdge, Standard_Real theMaxiParam, Select3D_SensitiveEntity theSensitive, ) */
	static void PreBuildBVH(Macad::Occt::SelectMgr_Selection^ theSelection);
}; // class StdSelect_BRepSelectionTool

//---------------------------------------------------------------------
//  Class  StdSelect_EdgeFilter
//---------------------------------------------------------------------
public ref class StdSelect_EdgeFilter sealed : public Macad::Occt::SelectMgr_Filter
{

#ifdef Include_StdSelect_EdgeFilter_h
public:
	Include_StdSelect_EdgeFilter_h
#endif

public:
	StdSelect_EdgeFilter(::StdSelect_EdgeFilter* nativeInstance)
		: Macad::Occt::SelectMgr_Filter( nativeInstance )
	{}

	StdSelect_EdgeFilter(::StdSelect_EdgeFilter& nativeInstance)
		: Macad::Occt::SelectMgr_Filter( nativeInstance )
	{}

	property ::StdSelect_EdgeFilter* NativeInstance
	{
		::StdSelect_EdgeFilter* get()
		{
			return static_cast<::StdSelect_EdgeFilter*>(_NativeInstance);
		}
	}

	static Macad::Occt::StdSelect_EdgeFilter^ CreateDowncasted(::StdSelect_EdgeFilter* instance);

public:
	StdSelect_EdgeFilter(Macad::Occt::StdSelect_TypeOfEdge Edge);
	StdSelect_EdgeFilter(Macad::Occt::StdSelect_EdgeFilter^ parameter1);
	void SetType(Macad::Occt::StdSelect_TypeOfEdge aNewType);
	Macad::Occt::StdSelect_TypeOfEdge Type();
	bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj);
	bool ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode);
}; // class StdSelect_EdgeFilter

//---------------------------------------------------------------------
//  Class  StdSelect_FaceFilter
//---------------------------------------------------------------------
public ref class StdSelect_FaceFilter sealed : public Macad::Occt::SelectMgr_Filter
{

#ifdef Include_StdSelect_FaceFilter_h
public:
	Include_StdSelect_FaceFilter_h
#endif

public:
	StdSelect_FaceFilter(::StdSelect_FaceFilter* nativeInstance)
		: Macad::Occt::SelectMgr_Filter( nativeInstance )
	{}

	StdSelect_FaceFilter(::StdSelect_FaceFilter& nativeInstance)
		: Macad::Occt::SelectMgr_Filter( nativeInstance )
	{}

	property ::StdSelect_FaceFilter* NativeInstance
	{
		::StdSelect_FaceFilter* get()
		{
			return static_cast<::StdSelect_FaceFilter*>(_NativeInstance);
		}
	}

	static Macad::Occt::StdSelect_FaceFilter^ CreateDowncasted(::StdSelect_FaceFilter* instance);

public:
	StdSelect_FaceFilter(Macad::Occt::StdSelect_TypeOfFace aTypeOfFace);
	StdSelect_FaceFilter(Macad::Occt::StdSelect_FaceFilter^ parameter1);
	void SetType(Macad::Occt::StdSelect_TypeOfFace aNewType);
	Macad::Occt::StdSelect_TypeOfFace Type();
	bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj);
	bool ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode);
}; // class StdSelect_FaceFilter

//---------------------------------------------------------------------
//  Class  StdSelect_ShapeTypeFilter
//---------------------------------------------------------------------
public ref class StdSelect_ShapeTypeFilter sealed : public Macad::Occt::SelectMgr_Filter
{

#ifdef Include_StdSelect_ShapeTypeFilter_h
public:
	Include_StdSelect_ShapeTypeFilter_h
#endif

public:
	StdSelect_ShapeTypeFilter(::StdSelect_ShapeTypeFilter* nativeInstance)
		: Macad::Occt::SelectMgr_Filter( nativeInstance )
	{}

	StdSelect_ShapeTypeFilter(::StdSelect_ShapeTypeFilter& nativeInstance)
		: Macad::Occt::SelectMgr_Filter( nativeInstance )
	{}

	property ::StdSelect_ShapeTypeFilter* NativeInstance
	{
		::StdSelect_ShapeTypeFilter* get()
		{
			return static_cast<::StdSelect_ShapeTypeFilter*>(_NativeInstance);
		}
	}

	static Macad::Occt::StdSelect_ShapeTypeFilter^ CreateDowncasted(::StdSelect_ShapeTypeFilter* instance);

public:
	StdSelect_ShapeTypeFilter(Macad::Occt::TopAbs_ShapeEnum aType);
	StdSelect_ShapeTypeFilter(Macad::Occt::StdSelect_ShapeTypeFilter^ parameter1);
	Macad::Occt::TopAbs_ShapeEnum Type();
	bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj);
	bool ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode);
}; // class StdSelect_ShapeTypeFilter

}; // namespace Occt
}; // namespace Macad
