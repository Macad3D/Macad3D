// Generated wrapper code for package BRepTools

#pragma once

#include "BRepTools.h"
#include "TopTools.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRepTools_MapOfVertexPnt2d
//---------------------------------------------------------------------
public ref class BRepTools_MapOfVertexPnt2d sealed : public BaseClass<::BRepTools_MapOfVertexPnt2d>
{

#ifdef Include_BRepTools_MapOfVertexPnt2d_h
public:
	Include_BRepTools_MapOfVertexPnt2d_h
#endif

public:
	BRepTools_MapOfVertexPnt2d(::BRepTools_MapOfVertexPnt2d* nativeInstance)
		: BaseClass<::BRepTools_MapOfVertexPnt2d>( nativeInstance, true )
	{}

	BRepTools_MapOfVertexPnt2d(::BRepTools_MapOfVertexPnt2d& nativeInstance)
		: BaseClass<::BRepTools_MapOfVertexPnt2d>( &nativeInstance, false )
	{}

	property ::BRepTools_MapOfVertexPnt2d* NativeInstance
	{
		::BRepTools_MapOfVertexPnt2d* get()
		{
			return static_cast<::BRepTools_MapOfVertexPnt2d*>(_NativeInstance);
		}
	}

public:
	BRepTools_MapOfVertexPnt2d();
	BRepTools_MapOfVertexPnt2d(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	BRepTools_MapOfVertexPnt2d(int theNbBuckets);
	BRepTools_MapOfVertexPnt2d(Macad::Occt::BRepTools_MapOfVertexPnt2d^ theOther);
	void Exchange(Macad::Occt::BRepTools_MapOfVertexPnt2d^ theOther);
	Macad::Occt::BRepTools_MapOfVertexPnt2d^ Assign(Macad::Occt::BRepTools_MapOfVertexPnt2d^ theOther);
	/* Method skipped due to unknown mapping: NCollection_Sequence<gp_Pnt2d> Bound(TopoDS_Shape theKey, NCollection_Sequence<gp_Pnt2d> theItem, ) */
	bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
	bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
	/* Method skipped due to unknown mapping: NCollection_Sequence<gp_Pnt2d> Seek(TopoDS_Shape theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_Sequence<gp_Pnt2d> Find(TopoDS_Shape theKey, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Find(TopoDS_Shape theKey, NCollection_Sequence<gp_Pnt2d> theValue, ) */
	/* Method skipped due to unknown mapping: NCollection_Sequence<gp_Pnt2d> ChangeSeek(TopoDS_Shape theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_Sequence<gp_Pnt2d> ChangeFind(TopoDS_Shape theKey, ) */
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class BRepTools_MapOfVertexPnt2d

//---------------------------------------------------------------------
//  Class  BRepTools_WireExplorer
//---------------------------------------------------------------------
public ref class BRepTools_WireExplorer sealed : public BaseClass<::BRepTools_WireExplorer>
{

#ifdef Include_BRepTools_WireExplorer_h
public:
	Include_BRepTools_WireExplorer_h
#endif

public:
	BRepTools_WireExplorer(::BRepTools_WireExplorer* nativeInstance)
		: BaseClass<::BRepTools_WireExplorer>( nativeInstance, true )
	{}

	BRepTools_WireExplorer(::BRepTools_WireExplorer& nativeInstance)
		: BaseClass<::BRepTools_WireExplorer>( &nativeInstance, false )
	{}

	property ::BRepTools_WireExplorer* NativeInstance
	{
		::BRepTools_WireExplorer* get()
		{
			return static_cast<::BRepTools_WireExplorer*>(_NativeInstance);
		}
	}

public:
	BRepTools_WireExplorer();
	BRepTools_WireExplorer(Macad::Occt::TopoDS_Wire^ W);
	BRepTools_WireExplorer(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F);
	BRepTools_WireExplorer(Macad::Occt::BRepTools_WireExplorer^ parameter1);
	void Init(Macad::Occt::TopoDS_Wire^ W);
	void Init(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F);
	void Init(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F, double UMin, double UMax, double VMin, double VMax);
	bool More();
	void Next();
	Macad::Occt::TopoDS_Edge^ Current();
	Macad::Occt::TopAbs_Orientation Orientation();
	Macad::Occt::TopoDS_Vertex^ CurrentVertex();
	void Clear();
}; // class BRepTools_WireExplorer

//---------------------------------------------------------------------
//  Class  BRepTools_Modification
//---------------------------------------------------------------------
public ref class BRepTools_Modification : public Macad::Occt::Standard_Transient
{

#ifdef Include_BRepTools_Modification_h
public:
	Include_BRepTools_Modification_h
#endif

protected:
	BRepTools_Modification(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	BRepTools_Modification(::BRepTools_Modification* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	BRepTools_Modification(::BRepTools_Modification& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::BRepTools_Modification* NativeInstance
	{
		::BRepTools_Modification* get()
		{
			return static_cast<::BRepTools_Modification*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRepTools_Modification^ CreateDowncasted(::BRepTools_Modification* instance);

public:
	BRepTools_Modification(Macad::Occt::BRepTools_Modification^ parameter1);
	BRepTools_Modification();
	bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
	/* Method skipped due to unknown mapping: Standard_Boolean NewTriangulation(TopoDS_Face F, Poly_Triangulation T, ) */
	bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
	/* Method skipped due to unknown mapping: Standard_Boolean NewPolygon(TopoDS_Edge E, Poly_Polygon3D P, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean NewPolygonOnTriangulation(TopoDS_Edge E, TopoDS_Face F, Poly_PolygonOnTriangulation P, ) */
	bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
	bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
	bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
	Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2);
}; // class BRepTools_Modification

//---------------------------------------------------------------------
//  Class  BRepTools_Modifier
//---------------------------------------------------------------------
public ref class BRepTools_Modifier sealed : public BaseClass<::BRepTools_Modifier>
{

#ifdef Include_BRepTools_Modifier_h
public:
	Include_BRepTools_Modifier_h
#endif

public:
	BRepTools_Modifier(::BRepTools_Modifier* nativeInstance)
		: BaseClass<::BRepTools_Modifier>( nativeInstance, true )
	{}

	BRepTools_Modifier(::BRepTools_Modifier& nativeInstance)
		: BaseClass<::BRepTools_Modifier>( &nativeInstance, false )
	{}

	property ::BRepTools_Modifier* NativeInstance
	{
		::BRepTools_Modifier* get()
		{
			return static_cast<::BRepTools_Modifier*>(_NativeInstance);
		}
	}

public:
	BRepTools_Modifier(bool theMutableInput);
	BRepTools_Modifier(Macad::Occt::TopoDS_Shape^ S);
	BRepTools_Modifier(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_Modification^ M);
	BRepTools_Modifier(Macad::Occt::BRepTools_Modifier^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ S);
	/* Method skipped due to unknown mapping: void Perform(BRepTools_Modification M, Message_ProgressIndicator aProgress, ) */
	void Perform(Macad::Occt::BRepTools_Modification^ M);
	bool IsDone();
	bool IsMutableInput();
	void SetMutableInput(bool theMutableInput);
	Macad::Occt::TopoDS_Shape^ ModifiedShape(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepTools_Modifier

//---------------------------------------------------------------------
//  Class  BRepTools_TrsfModification
//---------------------------------------------------------------------
public ref class BRepTools_TrsfModification : public Macad::Occt::BRepTools_Modification
{

#ifdef Include_BRepTools_TrsfModification_h
public:
	Include_BRepTools_TrsfModification_h
#endif

protected:
	BRepTools_TrsfModification(InitMode init)
		: Macad::Occt::BRepTools_Modification( init )
	{}

public:
	BRepTools_TrsfModification(::BRepTools_TrsfModification* nativeInstance)
		: Macad::Occt::BRepTools_Modification( nativeInstance )
	{}

	BRepTools_TrsfModification(::BRepTools_TrsfModification& nativeInstance)
		: Macad::Occt::BRepTools_Modification( nativeInstance )
	{}

	property ::BRepTools_TrsfModification* NativeInstance
	{
		::BRepTools_TrsfModification* get()
		{
			return static_cast<::BRepTools_TrsfModification*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRepTools_TrsfModification^ CreateDowncasted(::BRepTools_TrsfModification* instance);

public:
	BRepTools_TrsfModification(Macad::Occt::Trsf T);
	BRepTools_TrsfModification(Macad::Occt::BRepTools_TrsfModification^ parameter1);
	Macad::Occt::Trsf Trsf();
	bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
	bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
	bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
	bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
	bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
	Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2);
}; // class BRepTools_TrsfModification

//---------------------------------------------------------------------
//  Class  BRepTools_NurbsConvertModification
//---------------------------------------------------------------------
public ref class BRepTools_NurbsConvertModification sealed : public Macad::Occt::BRepTools_Modification
{

#ifdef Include_BRepTools_NurbsConvertModification_h
public:
	Include_BRepTools_NurbsConvertModification_h
#endif

public:
	BRepTools_NurbsConvertModification(::BRepTools_NurbsConvertModification* nativeInstance)
		: Macad::Occt::BRepTools_Modification( nativeInstance )
	{}

	BRepTools_NurbsConvertModification(::BRepTools_NurbsConvertModification& nativeInstance)
		: Macad::Occt::BRepTools_Modification( nativeInstance )
	{}

	property ::BRepTools_NurbsConvertModification* NativeInstance
	{
		::BRepTools_NurbsConvertModification* get()
		{
			return static_cast<::BRepTools_NurbsConvertModification*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRepTools_NurbsConvertModification^ CreateDowncasted(::BRepTools_NurbsConvertModification* instance);

public:
	BRepTools_NurbsConvertModification();
	BRepTools_NurbsConvertModification(Macad::Occt::BRepTools_NurbsConvertModification^ parameter1);
	bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
	bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
	bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
	bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
	bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
	Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2);
	Macad::Occt::TopTools_ListOfShape^ GetUpdatedEdges();
}; // class BRepTools_NurbsConvertModification

//---------------------------------------------------------------------
//  Class  BRepTools_GTrsfModification
//---------------------------------------------------------------------
public ref class BRepTools_GTrsfModification sealed : public Macad::Occt::BRepTools_Modification
{

#ifdef Include_BRepTools_GTrsfModification_h
public:
	Include_BRepTools_GTrsfModification_h
#endif

public:
	BRepTools_GTrsfModification(::BRepTools_GTrsfModification* nativeInstance)
		: Macad::Occt::BRepTools_Modification( nativeInstance )
	{}

	BRepTools_GTrsfModification(::BRepTools_GTrsfModification& nativeInstance)
		: Macad::Occt::BRepTools_Modification( nativeInstance )
	{}

	property ::BRepTools_GTrsfModification* NativeInstance
	{
		::BRepTools_GTrsfModification* get()
		{
			return static_cast<::BRepTools_GTrsfModification*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRepTools_GTrsfModification^ CreateDowncasted(::BRepTools_GTrsfModification* instance);

public:
	BRepTools_GTrsfModification(Macad::Occt::gp_GTrsf^ T);
	BRepTools_GTrsfModification(Macad::Occt::BRepTools_GTrsfModification^ parameter1);
	Macad::Occt::gp_GTrsf^ GTrsf();
	bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
	bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
	bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
	bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
	bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
	Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2);
}; // class BRepTools_GTrsfModification

//---------------------------------------------------------------------
//  Class  BRepTools_Substitution
//---------------------------------------------------------------------
public ref class BRepTools_Substitution sealed : public BaseClass<::BRepTools_Substitution>
{

#ifdef Include_BRepTools_Substitution_h
public:
	Include_BRepTools_Substitution_h
#endif

public:
	BRepTools_Substitution(::BRepTools_Substitution* nativeInstance)
		: BaseClass<::BRepTools_Substitution>( nativeInstance, true )
	{}

	BRepTools_Substitution(::BRepTools_Substitution& nativeInstance)
		: BaseClass<::BRepTools_Substitution>( &nativeInstance, false )
	{}

	property ::BRepTools_Substitution* NativeInstance
	{
		::BRepTools_Substitution* get()
		{
			return static_cast<::BRepTools_Substitution*>(_NativeInstance);
		}
	}

public:
	BRepTools_Substitution();
	BRepTools_Substitution(Macad::Occt::BRepTools_Substitution^ parameter1);
	void Clear();
	void Substitute(Macad::Occt::TopoDS_Shape^ OldShape, Macad::Occt::TopTools_ListOfShape^ NewShapes);
	void Build(Macad::Occt::TopoDS_Shape^ S);
	bool IsCopied(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopTools_ListOfShape^ Copy(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepTools_Substitution

//---------------------------------------------------------------------
//  Class  BRepTools_Quilt
//---------------------------------------------------------------------
public ref class BRepTools_Quilt sealed : public BaseClass<::BRepTools_Quilt>
{

#ifdef Include_BRepTools_Quilt_h
public:
	Include_BRepTools_Quilt_h
#endif

public:
	BRepTools_Quilt(::BRepTools_Quilt* nativeInstance)
		: BaseClass<::BRepTools_Quilt>( nativeInstance, true )
	{}

	BRepTools_Quilt(::BRepTools_Quilt& nativeInstance)
		: BaseClass<::BRepTools_Quilt>( &nativeInstance, false )
	{}

	property ::BRepTools_Quilt* NativeInstance
	{
		::BRepTools_Quilt* get()
		{
			return static_cast<::BRepTools_Quilt*>(_NativeInstance);
		}
	}

public:
	BRepTools_Quilt();
	BRepTools_Quilt(Macad::Occt::BRepTools_Quilt^ parameter1);
	void Bind(Macad::Occt::TopoDS_Edge^ Eold, Macad::Occt::TopoDS_Edge^ Enew);
	void Bind(Macad::Occt::TopoDS_Vertex^ Vold, Macad::Occt::TopoDS_Vertex^ Vnew);
	void Add(Macad::Occt::TopoDS_Shape^ S);
	bool IsCopied(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopoDS_Shape^ Copy(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopoDS_Shape^ Shells();
}; // class BRepTools_Quilt

//---------------------------------------------------------------------
//  Class  BRepTools_ShapeSet
//---------------------------------------------------------------------
public ref class BRepTools_ShapeSet sealed : public Macad::Occt::TopTools_ShapeSet
{

#ifdef Include_BRepTools_ShapeSet_h
public:
	Include_BRepTools_ShapeSet_h
#endif

public:
	BRepTools_ShapeSet(::BRepTools_ShapeSet* nativeInstance)
		: Macad::Occt::TopTools_ShapeSet( nativeInstance )
	{}

	BRepTools_ShapeSet(::BRepTools_ShapeSet& nativeInstance)
		: Macad::Occt::TopTools_ShapeSet( nativeInstance )
	{}

	property ::BRepTools_ShapeSet* NativeInstance
	{
		::BRepTools_ShapeSet* get()
		{
			return static_cast<::BRepTools_ShapeSet*>(_NativeInstance);
		}
	}

public:
	BRepTools_ShapeSet(bool isWithTriangles);
	BRepTools_ShapeSet(Macad::Occt::BRep_Builder^ B, bool isWithTriangles);
	BRepTools_ShapeSet(Macad::Occt::BRep_Builder^ B);
	BRepTools_ShapeSet(Macad::Occt::BRepTools_ShapeSet^ parameter1);
	void Clear();
	void AddGeometry(Macad::Occt::TopoDS_Shape^ S);
	/* Method skipped due to unknown mapping: void DumpGeometry(ostream OS, ) */
	/* Method skipped due to unknown mapping: void WriteGeometry(ostream OS, ) */
	/* Method skipped due to unknown mapping: void ReadGeometry(istream IS, ) */
	/* Method skipped due to unknown mapping: void DumpGeometry(TopoDS_Shape S, ostream OS, ) */
	/* Method skipped due to unknown mapping: void WriteGeometry(TopoDS_Shape S, ostream OS, ) */
	/* Method skipped due to unknown mapping: void ReadGeometry(TopAbs_ShapeEnum T, istream IS, TopoDS_Shape S, ) */
	void AddShapes(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2);
	void Check(Macad::Occt::TopAbs_ShapeEnum T, Macad::Occt::TopoDS_Shape^ S);
	/* Method skipped due to unknown mapping: void ReadPolygon3D(istream IS, ) */
	/* Method skipped due to unknown mapping: void WritePolygon3D(ostream OS, Standard_Boolean Compact, ) */
	/* Method skipped due to unknown mapping: void WritePolygon3D(ostream OS, Standard_Boolean Compact, ) */
	/* Method skipped due to unknown mapping: void DumpPolygon3D(ostream OS, ) */
	/* Method skipped due to unknown mapping: void ReadTriangulation(istream IS, ) */
	/* Method skipped due to unknown mapping: void WriteTriangulation(ostream OS, Standard_Boolean Compact, ) */
	/* Method skipped due to unknown mapping: void WriteTriangulation(ostream OS, Standard_Boolean Compact, ) */
	/* Method skipped due to unknown mapping: void DumpTriangulation(ostream OS, ) */
	/* Method skipped due to unknown mapping: void ReadPolygonOnTriangulation(istream IS, ) */
	/* Method skipped due to unknown mapping: void WritePolygonOnTriangulation(ostream OS, Standard_Boolean Compact, ) */
	/* Method skipped due to unknown mapping: void WritePolygonOnTriangulation(ostream OS, Standard_Boolean Compact, ) */
	/* Method skipped due to unknown mapping: void DumpPolygonOnTriangulation(ostream OS, ) */
}; // class BRepTools_ShapeSet

//---------------------------------------------------------------------
//  Class  BRepTools_ReShape
//---------------------------------------------------------------------
public ref class BRepTools_ReShape : public Macad::Occt::Standard_Transient
{

#ifdef Include_BRepTools_ReShape_h
public:
	Include_BRepTools_ReShape_h
#endif

protected:
	BRepTools_ReShape(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	BRepTools_ReShape(::BRepTools_ReShape* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	BRepTools_ReShape(::BRepTools_ReShape& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::BRepTools_ReShape* NativeInstance
	{
		::BRepTools_ReShape* get()
		{
			return static_cast<::BRepTools_ReShape*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRepTools_ReShape^ CreateDowncasted(::BRepTools_ReShape* instance);

public:
	//---------------------------------------------------------------------
	//  Enum  TReplacementKind
	//---------------------------------------------------------------------
	enum class TReplacementKind
	{
		TReplacementKind_Remove = 1,
		TReplacementKind_Modify = 2,
		TReplacementKind_Merge_Main = 4,
		TReplacementKind_Merge_Ordinary = 8
	}; // enum  class TReplacementKind

	BRepTools_ReShape();
	BRepTools_ReShape(Macad::Occt::BRepTools_ReShape^ parameter1);
	void Clear();
	void Remove(Macad::Occt::TopoDS_Shape^ shape);
	void Replace(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopoDS_Shape^ newshape);
	bool IsRecorded(Macad::Occt::TopoDS_Shape^ shape);
	Macad::Occt::TopoDS_Shape^ Value(Macad::Occt::TopoDS_Shape^ shape);
	int Status(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopoDS_Shape^ newsh, bool last);
	int Status(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopoDS_Shape^ newsh);
	Macad::Occt::TopoDS_Shape^ Apply(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopAbs_ShapeEnum until);
	Macad::Occt::TopoDS_Shape^ Apply(Macad::Occt::TopoDS_Shape^ shape);
	bool ModeConsiderLocation();
	Macad::Occt::TopoDS_Vertex^ CopyVertex(Macad::Occt::TopoDS_Vertex^ theV, double theTol);
	Macad::Occt::TopoDS_Vertex^ CopyVertex(Macad::Occt::TopoDS_Vertex^ theV);
	Macad::Occt::TopoDS_Vertex^ CopyVertex(Macad::Occt::TopoDS_Vertex^ theV, Macad::Occt::Pnt theNewPos, double aTol);
	bool IsNewShape(Macad::Occt::TopoDS_Shape^ theShape);
	Macad::Occt::BRepTools_History^ History();
}; // class BRepTools_ReShape

//---------------------------------------------------------------------
//  Class  BRepTools
//---------------------------------------------------------------------
public ref class BRepTools sealed : public BaseClass<::BRepTools>
{

#ifdef Include_BRepTools_h
public:
	Include_BRepTools_h
#endif

public:
	BRepTools(::BRepTools* nativeInstance)
		: BaseClass<::BRepTools>( nativeInstance, true )
	{}

	BRepTools(::BRepTools& nativeInstance)
		: BaseClass<::BRepTools>( &nativeInstance, false )
	{}

	property ::BRepTools* NativeInstance
	{
		::BRepTools* get()
		{
			return static_cast<::BRepTools*>(_NativeInstance);
		}
	}

public:
	BRepTools();
	BRepTools(Macad::Occt::BRepTools^ parameter1);
	static void UVBounds(Macad::Occt::TopoDS_Face^ F, double% UMin, double% UMax, double% VMin, double% VMax);
	static void UVBounds(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Wire^ W, double% UMin, double% UMax, double% VMin, double% VMax);
	static void UVBounds(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E, double% UMin, double% UMax, double% VMin, double% VMax);
	static void AddUVBounds(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Bnd_Box2d^ B);
	static void AddUVBounds(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Wire^ W, Macad::Occt::Bnd_Box2d^ B);
	static void AddUVBounds(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Bnd_Box2d^ B);
	static void Update(Macad::Occt::TopoDS_Vertex^ V);
	static void Update(Macad::Occt::TopoDS_Edge^ E);
	static void Update(Macad::Occt::TopoDS_Wire^ W);
	static void Update(Macad::Occt::TopoDS_Face^ F);
	static void Update(Macad::Occt::TopoDS_Shell^ S);
	static void Update(Macad::Occt::TopoDS_Solid^ S);
	static void Update(Macad::Occt::TopoDS_CompSolid^ C);
	static void Update(Macad::Occt::TopoDS_Compound^ C);
	static void Update(Macad::Occt::TopoDS_Shape^ S);
	static void UpdateFaceUVPoints(Macad::Occt::TopoDS_Face^ theF);
	static void Clean(Macad::Occt::TopoDS_Shape^ S);
	static void CleanGeometry(Macad::Occt::TopoDS_Shape^ theShape);
	static void RemoveUnusedPCurves(Macad::Occt::TopoDS_Shape^ S);
	static bool Triangulation(Macad::Occt::TopoDS_Shape^ S, double deflec);
	static bool Compare(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	static bool Compare(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2);
	static Macad::Occt::TopoDS_Wire^ OuterWire(Macad::Occt::TopoDS_Face^ F);
	static void Map3DEdges(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_IndexedMapOfShape^ M);
	static bool IsReallyClosed(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
	static void DetectClosedness(Macad::Occt::TopoDS_Face^ theFace, bool% theUclosed, bool% theVclosed);
	/* Method skipped due to unknown mapping: void Dump(TopoDS_Shape Sh, ostream S, ) */
	/* Method skipped due to unknown mapping: void Write(TopoDS_Shape Sh, ostream S, Message_ProgressIndicator PR, ) */
	/* Method skipped due to unknown mapping: void Write(TopoDS_Shape Sh, ostream S, Message_ProgressIndicator PR, ) */
	/* Method skipped due to unknown mapping: void Read(TopoDS_Shape Sh, istream S, BRep_Builder B, Message_ProgressIndicator PR, ) */
	/* Method skipped due to unknown mapping: void Read(TopoDS_Shape Sh, istream S, BRep_Builder B, Message_ProgressIndicator PR, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Write(TopoDS_Shape Sh, Standard_CString File, Message_ProgressIndicator PR, ) */
	static bool Write(Macad::Occt::TopoDS_Shape^ Sh, System::String^ File);
	/* Method skipped due to unknown mapping: Standard_Boolean Read(TopoDS_Shape Sh, Standard_CString File, BRep_Builder B, Message_ProgressIndicator PR, ) */
	static bool Read(Macad::Occt::TopoDS_Shape^ Sh, System::String^ File, Macad::Occt::BRep_Builder^ B);
	static double EvalAndUpdateTol(Macad::Occt::TopoDS_Edge^ theE, Macad::Occt::Geom_Curve^ theC3d, Macad::Occt::Geom2d_Curve^ theC2d, Macad::Occt::Geom_Surface^ theS, double theF, double theL);
}; // class BRepTools

//---------------------------------------------------------------------
//  Class  BRepTools_History
//---------------------------------------------------------------------
public ref class BRepTools_History sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_BRepTools_History_h
public:
	Include_BRepTools_History_h
#endif

public:
	BRepTools_History(::BRepTools_History* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	BRepTools_History(::BRepTools_History& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::BRepTools_History* NativeInstance
	{
		::BRepTools_History* get()
		{
			return static_cast<::BRepTools_History*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRepTools_History^ CreateDowncasted(::BRepTools_History* instance);

public:
	//---------------------------------------------------------------------
	//  Enum  TRelationType
	//---------------------------------------------------------------------
	enum class TRelationType
	{
		TRelationType_Removed = 0,
		TRelationType_Generated = 1,
		TRelationType_Modified = 2
	}; // enum  class TRelationType

	BRepTools_History();
	BRepTools_History(Macad::Occt::BRepTools_History^ parameter1);
	static bool IsSupportedType(Macad::Occt::TopoDS_Shape^ theShape);
	void AddGenerated(Macad::Occt::TopoDS_Shape^ theInitial, Macad::Occt::TopoDS_Shape^ theGenerated);
	void AddModified(Macad::Occt::TopoDS_Shape^ theInitial, Macad::Occt::TopoDS_Shape^ theModified);
	void Remove(Macad::Occt::TopoDS_Shape^ theRemoved);
	void ReplaceGenerated(Macad::Occt::TopoDS_Shape^ theInitial, Macad::Occt::TopoDS_Shape^ theGenerated);
	void ReplaceModified(Macad::Occt::TopoDS_Shape^ theInitial, Macad::Occt::TopoDS_Shape^ theModified);
	void Clear();
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ theInitial);
	Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ theInitial);
	bool IsRemoved(Macad::Occt::TopoDS_Shape^ theInitial);
	bool HasGenerated();
	bool HasModified();
	bool HasRemoved();
	void Merge(Macad::Occt::BRepTools_History^ theHistory23);
	/* Method skipped due to unknown mapping: void Dump(ostream theS, ) */
}; // class BRepTools_History

}; // namespace Occt
}; // namespace Macad
