// Generated wrapper code for package TopExp

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  TopExp_Explorer
//---------------------------------------------------------------------
public ref class TopExp_Explorer sealed : public BaseClass<::TopExp_Explorer>
{

#ifdef Include_TopExp_Explorer_h
public:
	Include_TopExp_Explorer_h
#endif

public:
	TopExp_Explorer(::TopExp_Explorer* nativeInstance)
		: BaseClass<::TopExp_Explorer>( nativeInstance, true )
	{}

	TopExp_Explorer(::TopExp_Explorer& nativeInstance)
		: BaseClass<::TopExp_Explorer>( &nativeInstance, false )
	{}

	property ::TopExp_Explorer* NativeInstance
	{
		::TopExp_Explorer* get()
		{
			return static_cast<::TopExp_Explorer*>(_NativeInstance);
		}
	}

public:
	TopExp_Explorer();
	TopExp_Explorer(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum ToFind, Macad::Occt::TopAbs_ShapeEnum ToAvoid);
	TopExp_Explorer(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum ToFind);
	TopExp_Explorer(Macad::Occt::TopExp_Explorer^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum ToFind, Macad::Occt::TopAbs_ShapeEnum ToAvoid);
	void Init(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum ToFind);
	bool More();
	void Next();
	Macad::Occt::TopoDS_Shape^ Value();
	Macad::Occt::TopoDS_Shape^ Current();
	void ReInit();
	int Depth();
	void Clear();
	void Destroy();
}; // class TopExp_Explorer

//---------------------------------------------------------------------
//  Class  TopExp
//---------------------------------------------------------------------
public ref class TopExp sealed : public BaseClass<::TopExp>
{

#ifdef Include_TopExp_h
public:
	Include_TopExp_h
#endif

public:
	TopExp(::TopExp* nativeInstance)
		: BaseClass<::TopExp>( nativeInstance, true )
	{}

	TopExp(::TopExp& nativeInstance)
		: BaseClass<::TopExp>( &nativeInstance, false )
	{}

	property ::TopExp* NativeInstance
	{
		::TopExp* get()
		{
			return static_cast<::TopExp*>(_NativeInstance);
		}
	}

public:
	TopExp();
	TopExp(Macad::Occt::TopExp^ parameter1);
	static void MapShapes(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum T, Macad::Occt::TopTools_IndexedMapOfShape^ M);
	static void MapShapes(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_IndexedMapOfShape^ M);
	static void MapShapes(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_MapOfShape^ M);
	static void MapShapesAndAncestors(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum TS, Macad::Occt::TopAbs_ShapeEnum TA, Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ M);
	static void MapShapesAndUniqueAncestors(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum TS, Macad::Occt::TopAbs_ShapeEnum TA, Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ M, bool useOrientation);
	static void MapShapesAndUniqueAncestors(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum TS, Macad::Occt::TopAbs_ShapeEnum TA, Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ M);
	static Macad::Occt::TopoDS_Vertex^ FirstVertex(Macad::Occt::TopoDS_Edge^ E, bool CumOri);
	static Macad::Occt::TopoDS_Vertex^ FirstVertex(Macad::Occt::TopoDS_Edge^ E);
	static Macad::Occt::TopoDS_Vertex^ LastVertex(Macad::Occt::TopoDS_Edge^ E, bool CumOri);
	static Macad::Occt::TopoDS_Vertex^ LastVertex(Macad::Occt::TopoDS_Edge^ E);
	static void Vertices(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Vertex^ Vfirst, Macad::Occt::TopoDS_Vertex^ Vlast, bool CumOri);
	static void Vertices(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Vertex^ Vfirst, Macad::Occt::TopoDS_Vertex^ Vlast);
	static void Vertices(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Vertex^ Vfirst, Macad::Occt::TopoDS_Vertex^ Vlast);
	static bool CommonVertex(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopoDS_Vertex^ V);
}; // class TopExp

}; // namespace Occt
}; // namespace Macad
