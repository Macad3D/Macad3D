// Generated wrapper code for package TopoDS

#pragma once

#include "TopoDS.h"
#include "Message.h"
#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  TopoDS_ListOfShape
//---------------------------------------------------------------------
public ref class TopoDS_ListOfShape sealed : public BaseClass<::TopoDS_ListOfShape>
{

#ifdef Include_TopoDS_ListOfShape_h
public:
	Include_TopoDS_ListOfShape_h
#endif

public:
	TopoDS_ListOfShape(::TopoDS_ListOfShape* nativeInstance)
		: BaseClass<::TopoDS_ListOfShape>( nativeInstance, true )
	{}

	TopoDS_ListOfShape(::TopoDS_ListOfShape& nativeInstance)
		: BaseClass<::TopoDS_ListOfShape>( &nativeInstance, false )
	{}

	property ::TopoDS_ListOfShape* NativeInstance
	{
		::TopoDS_ListOfShape* get()
		{
			return static_cast<::TopoDS_ListOfShape*>(_NativeInstance);
		}
	}

public:
	TopoDS_ListOfShape();
	TopoDS_ListOfShape(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopoDS_ListOfShape(Macad::Occt::TopoDS_ListOfShape^ theOther);
	int Size();
	Macad::Occt::TopoDS_ListOfShape^ Assign(Macad::Occt::TopoDS_ListOfShape^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::TopoDS_Shape^ First();
	Macad::Occt::TopoDS_Shape^ Last();
	Macad::Occt::TopoDS_Shape^ Append(Macad::Occt::TopoDS_Shape^ theItem);
	/* Method skipped due to unknown mapping: void Append(TopoDS_Shape theItem, Iterator theIter, ) */
	void Append(Macad::Occt::TopoDS_ListOfShape^ theOther);
	Macad::Occt::TopoDS_Shape^ Prepend(Macad::Occt::TopoDS_Shape^ theItem);
	void Prepend(Macad::Occt::TopoDS_ListOfShape^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: TopoDS_Shape InsertBefore(TopoDS_Shape theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(TopoDS_ListOfShape theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: TopoDS_Shape InsertAfter(TopoDS_Shape theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(TopoDS_ListOfShape theOther, Iterator theIter, ) */
	void Reverse();
}; // class TopoDS_ListOfShape

//---------------------------------------------------------------------
//  Class  TopoDS_Shape
//---------------------------------------------------------------------
public ref class TopoDS_Shape : public BaseClass<::TopoDS_Shape>
{

#ifdef Include_TopoDS_Shape_h
public:
	Include_TopoDS_Shape_h
#endif

protected:
	TopoDS_Shape(InitMode init)
		: BaseClass<::TopoDS_Shape>( init )
	{}

public:
	TopoDS_Shape(::TopoDS_Shape* nativeInstance)
		: BaseClass<::TopoDS_Shape>( nativeInstance, true )
	{}

	TopoDS_Shape(::TopoDS_Shape& nativeInstance)
		: BaseClass<::TopoDS_Shape>( &nativeInstance, false )
	{}

	property ::TopoDS_Shape* NativeInstance
	{
		::TopoDS_Shape* get()
		{
			return static_cast<::TopoDS_Shape*>(_NativeInstance);
		}
	}

public:
	TopoDS_Shape();
	TopoDS_Shape(Macad::Occt::TopoDS_Shape^ parameter1);
	bool IsNull();
	void Nullify();
	Macad::Occt::TopLoc_Location^ Location();
	void Location(Macad::Occt::TopLoc_Location^ theLoc, bool theRaiseExc);
	void Location(Macad::Occt::TopLoc_Location^ theLoc);
	Macad::Occt::TopoDS_Shape^ Located(Macad::Occt::TopLoc_Location^ theLoc, bool theRaiseExc);
	Macad::Occt::TopoDS_Shape^ Located(Macad::Occt::TopLoc_Location^ theLoc);
	Macad::Occt::TopAbs_Orientation Orientation();
	void Orientation(Macad::Occt::TopAbs_Orientation theOrient);
	Macad::Occt::TopoDS_Shape^ Oriented(Macad::Occt::TopAbs_Orientation theOrient);
	Macad::Occt::TopoDS_TShape^ TShape();
	Macad::Occt::TopAbs_ShapeEnum ShapeType();
	bool Free();
	void Free(bool theIsFree);
	bool Locked();
	void Locked(bool theIsLocked);
	bool Modified();
	void Modified(bool theIsModified);
	bool Checked();
	void Checked(bool theIsChecked);
	bool Orientable();
	void Orientable(bool theIsOrientable);
	bool Closed();
	void Closed(bool theIsClosed);
	bool Infinite();
	void Infinite(bool theIsInfinite);
	bool Convex();
	void Convex(bool theIsConvex);
	void Move(Macad::Occt::TopLoc_Location^ thePosition, bool theRaiseExc);
	void Move(Macad::Occt::TopLoc_Location^ thePosition);
	Macad::Occt::TopoDS_Shape^ Moved(Macad::Occt::TopLoc_Location^ thePosition, bool theRaiseExc);
	Macad::Occt::TopoDS_Shape^ Moved(Macad::Occt::TopLoc_Location^ thePosition);
	void Reverse();
	Macad::Occt::TopoDS_Shape^ Reversed();
	void Complement();
	Macad::Occt::TopoDS_Shape^ Complemented();
	void Compose(Macad::Occt::TopAbs_Orientation theOrient);
	Macad::Occt::TopoDS_Shape^ Composed(Macad::Occt::TopAbs_Orientation theOrient);
	int NbChildren();
	bool IsPartner(Macad::Occt::TopoDS_Shape^ theOther);
	bool IsSame(Macad::Occt::TopoDS_Shape^ theOther);
	bool IsEqual(Macad::Occt::TopoDS_Shape^ theOther);
	bool IsNotEqual(Macad::Occt::TopoDS_Shape^ theOther);
	int HashCode(int theUpperBound);
	void EmptyCopy();
	Macad::Occt::TopoDS_Shape^ EmptyCopied();
	void TShape(Macad::Occt::TopoDS_TShape^ theTShape);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class TopoDS_Shape

//---------------------------------------------------------------------
//  Class  TopoDS_Vertex
//---------------------------------------------------------------------
public ref class TopoDS_Vertex sealed : public Macad::Occt::TopoDS_Shape
{

#ifdef Include_TopoDS_Vertex_h
public:
	Include_TopoDS_Vertex_h
#endif

public:
	TopoDS_Vertex(::TopoDS_Vertex* nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	TopoDS_Vertex(::TopoDS_Vertex& nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	property ::TopoDS_Vertex* NativeInstance
	{
		::TopoDS_Vertex* get()
		{
			return static_cast<::TopoDS_Vertex*>(_NativeInstance);
		}
	}

public:
	TopoDS_Vertex();
	TopoDS_Vertex(Macad::Occt::TopoDS_Vertex^ parameter1);
}; // class TopoDS_Vertex

//---------------------------------------------------------------------
//  Class  TopoDS_Edge
//---------------------------------------------------------------------
public ref class TopoDS_Edge sealed : public Macad::Occt::TopoDS_Shape
{

#ifdef Include_TopoDS_Edge_h
public:
	Include_TopoDS_Edge_h
#endif

public:
	TopoDS_Edge(::TopoDS_Edge* nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	TopoDS_Edge(::TopoDS_Edge& nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	property ::TopoDS_Edge* NativeInstance
	{
		::TopoDS_Edge* get()
		{
			return static_cast<::TopoDS_Edge*>(_NativeInstance);
		}
	}

public:
	TopoDS_Edge();
	TopoDS_Edge(Macad::Occt::TopoDS_Edge^ parameter1);
}; // class TopoDS_Edge

//---------------------------------------------------------------------
//  Class  TopoDS_Wire
//---------------------------------------------------------------------
public ref class TopoDS_Wire sealed : public Macad::Occt::TopoDS_Shape
{

#ifdef Include_TopoDS_Wire_h
public:
	Include_TopoDS_Wire_h
#endif

public:
	TopoDS_Wire(::TopoDS_Wire* nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	TopoDS_Wire(::TopoDS_Wire& nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	property ::TopoDS_Wire* NativeInstance
	{
		::TopoDS_Wire* get()
		{
			return static_cast<::TopoDS_Wire*>(_NativeInstance);
		}
	}

public:
	TopoDS_Wire();
	TopoDS_Wire(Macad::Occt::TopoDS_Wire^ parameter1);
}; // class TopoDS_Wire

//---------------------------------------------------------------------
//  Class  TopoDS_Face
//---------------------------------------------------------------------
public ref class TopoDS_Face sealed : public Macad::Occt::TopoDS_Shape
{

#ifdef Include_TopoDS_Face_h
public:
	Include_TopoDS_Face_h
#endif

public:
	TopoDS_Face(::TopoDS_Face* nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	TopoDS_Face(::TopoDS_Face& nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	property ::TopoDS_Face* NativeInstance
	{
		::TopoDS_Face* get()
		{
			return static_cast<::TopoDS_Face*>(_NativeInstance);
		}
	}

public:
	TopoDS_Face();
	TopoDS_Face(Macad::Occt::TopoDS_Face^ parameter1);
}; // class TopoDS_Face

//---------------------------------------------------------------------
//  Class  TopoDS_Shell
//---------------------------------------------------------------------
public ref class TopoDS_Shell sealed : public Macad::Occt::TopoDS_Shape
{

#ifdef Include_TopoDS_Shell_h
public:
	Include_TopoDS_Shell_h
#endif

public:
	TopoDS_Shell(::TopoDS_Shell* nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	TopoDS_Shell(::TopoDS_Shell& nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	property ::TopoDS_Shell* NativeInstance
	{
		::TopoDS_Shell* get()
		{
			return static_cast<::TopoDS_Shell*>(_NativeInstance);
		}
	}

public:
	TopoDS_Shell();
	TopoDS_Shell(Macad::Occt::TopoDS_Shell^ parameter1);
}; // class TopoDS_Shell

//---------------------------------------------------------------------
//  Class  TopoDS_Solid
//---------------------------------------------------------------------
public ref class TopoDS_Solid sealed : public Macad::Occt::TopoDS_Shape
{

#ifdef Include_TopoDS_Solid_h
public:
	Include_TopoDS_Solid_h
#endif

public:
	TopoDS_Solid(::TopoDS_Solid* nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	TopoDS_Solid(::TopoDS_Solid& nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	property ::TopoDS_Solid* NativeInstance
	{
		::TopoDS_Solid* get()
		{
			return static_cast<::TopoDS_Solid*>(_NativeInstance);
		}
	}

public:
	TopoDS_Solid();
	TopoDS_Solid(Macad::Occt::TopoDS_Solid^ parameter1);
}; // class TopoDS_Solid

//---------------------------------------------------------------------
//  Class  TopoDS_CompSolid
//---------------------------------------------------------------------
public ref class TopoDS_CompSolid sealed : public Macad::Occt::TopoDS_Shape
{

#ifdef Include_TopoDS_CompSolid_h
public:
	Include_TopoDS_CompSolid_h
#endif

public:
	TopoDS_CompSolid(::TopoDS_CompSolid* nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	TopoDS_CompSolid(::TopoDS_CompSolid& nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	property ::TopoDS_CompSolid* NativeInstance
	{
		::TopoDS_CompSolid* get()
		{
			return static_cast<::TopoDS_CompSolid*>(_NativeInstance);
		}
	}

public:
	TopoDS_CompSolid();
	TopoDS_CompSolid(Macad::Occt::TopoDS_CompSolid^ parameter1);
}; // class TopoDS_CompSolid

//---------------------------------------------------------------------
//  Class  TopoDS_Compound
//---------------------------------------------------------------------
public ref class TopoDS_Compound sealed : public Macad::Occt::TopoDS_Shape
{

#ifdef Include_TopoDS_Compound_h
public:
	Include_TopoDS_Compound_h
#endif

public:
	TopoDS_Compound(::TopoDS_Compound* nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	TopoDS_Compound(::TopoDS_Compound& nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	property ::TopoDS_Compound* NativeInstance
	{
		::TopoDS_Compound* get()
		{
			return static_cast<::TopoDS_Compound*>(_NativeInstance);
		}
	}

public:
	TopoDS_Compound();
	TopoDS_Compound(Macad::Occt::TopoDS_Compound^ parameter1);
}; // class TopoDS_Compound

//---------------------------------------------------------------------
//  Class  TopoDS_HShape
//---------------------------------------------------------------------
public ref class TopoDS_HShape sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TopoDS_HShape_h
public:
	Include_TopoDS_HShape_h
#endif

public:
	TopoDS_HShape(::TopoDS_HShape* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TopoDS_HShape(::TopoDS_HShape& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TopoDS_HShape* NativeInstance
	{
		::TopoDS_HShape* get()
		{
			return static_cast<::TopoDS_HShape*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_HShape^ CreateDowncasted(::TopoDS_HShape* instance);

public:
	TopoDS_HShape();
	TopoDS_HShape(Macad::Occt::TopoDS_Shape^ aShape);
	TopoDS_HShape(Macad::Occt::TopoDS_HShape^ parameter1);
	void Shape(Macad::Occt::TopoDS_Shape^ aShape);
	Macad::Occt::TopoDS_Shape^ Shape();
	Macad::Occt::TopoDS_Shape^ ChangeShape();
}; // class TopoDS_HShape

//---------------------------------------------------------------------
//  Class  TopoDS_TShape
//---------------------------------------------------------------------
public ref class TopoDS_TShape : public Macad::Occt::Standard_Transient
{

#ifdef Include_TopoDS_TShape_h
public:
	Include_TopoDS_TShape_h
#endif

protected:
	TopoDS_TShape(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	TopoDS_TShape(::TopoDS_TShape* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TopoDS_TShape(::TopoDS_TShape& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TopoDS_TShape* NativeInstance
	{
		::TopoDS_TShape* get()
		{
			return static_cast<::TopoDS_TShape*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_TShape^ CreateDowncasted(::TopoDS_TShape* instance);

public:
	//---------------------------------------------------------------------
	//  Enum  TopoDS_TShape_Flags
	//---------------------------------------------------------------------
	enum class TopoDS_TShape_Flags
	{
		TopoDS_TShape_Flags_Free = 1,
		TopoDS_TShape_Flags_Modified = 2,
		TopoDS_TShape_Flags_Checked = 4,
		TopoDS_TShape_Flags_Orientable = 8,
		TopoDS_TShape_Flags_Closed = 16,
		TopoDS_TShape_Flags_Infinite = 32,
		TopoDS_TShape_Flags_Convex = 64,
		TopoDS_TShape_Flags_Locked = 128
	}; // enum  class TopoDS_TShape_Flags

	TopoDS_TShape(Macad::Occt::TopoDS_TShape^ parameter1);
	bool Free();
	void Free(bool theIsFree);
	bool Locked();
	void Locked(bool theIsLocked);
	bool Modified();
	void Modified(bool theIsModified);
	bool Checked();
	void Checked(bool theIsChecked);
	bool Orientable();
	void Orientable(bool theIsOrientable);
	bool Closed();
	void Closed(bool theIsClosed);
	bool Infinite();
	void Infinite(bool theIsInfinite);
	bool Convex();
	void Convex(bool theIsConvex);
	Macad::Occt::TopAbs_ShapeEnum ShapeType();
	Macad::Occt::TopoDS_TShape^ EmptyCopy();
	int NbChildren();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class TopoDS_TShape

//---------------------------------------------------------------------
//  Class  TopoDS_TVertex
//---------------------------------------------------------------------
public ref class TopoDS_TVertex : public Macad::Occt::TopoDS_TShape
{

#ifdef Include_TopoDS_TVertex_h
public:
	Include_TopoDS_TVertex_h
#endif

protected:
	TopoDS_TVertex(InitMode init)
		: Macad::Occt::TopoDS_TShape( init )
	{}

public:
	TopoDS_TVertex(::TopoDS_TVertex* nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	TopoDS_TVertex(::TopoDS_TVertex& nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	property ::TopoDS_TVertex* NativeInstance
	{
		::TopoDS_TVertex* get()
		{
			return static_cast<::TopoDS_TVertex*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_TVertex^ CreateDowncasted(::TopoDS_TVertex* instance);

public:
	TopoDS_TVertex(Macad::Occt::TopoDS_TVertex^ parameter1);
	Macad::Occt::TopAbs_ShapeEnum ShapeType();
}; // class TopoDS_TVertex

//---------------------------------------------------------------------
//  Class  TopoDS_TEdge
//---------------------------------------------------------------------
public ref class TopoDS_TEdge : public Macad::Occt::TopoDS_TShape
{

#ifdef Include_TopoDS_TEdge_h
public:
	Include_TopoDS_TEdge_h
#endif

protected:
	TopoDS_TEdge(InitMode init)
		: Macad::Occt::TopoDS_TShape( init )
	{}

public:
	TopoDS_TEdge(::TopoDS_TEdge* nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	TopoDS_TEdge(::TopoDS_TEdge& nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	property ::TopoDS_TEdge* NativeInstance
	{
		::TopoDS_TEdge* get()
		{
			return static_cast<::TopoDS_TEdge*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_TEdge^ CreateDowncasted(::TopoDS_TEdge* instance);

public:
	TopoDS_TEdge(Macad::Occt::TopoDS_TEdge^ parameter1);
	Macad::Occt::TopAbs_ShapeEnum ShapeType();
}; // class TopoDS_TEdge

//---------------------------------------------------------------------
//  Class  TopoDS_TWire
//---------------------------------------------------------------------
public ref class TopoDS_TWire sealed : public Macad::Occt::TopoDS_TShape
{

#ifdef Include_TopoDS_TWire_h
public:
	Include_TopoDS_TWire_h
#endif

public:
	TopoDS_TWire(::TopoDS_TWire* nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	TopoDS_TWire(::TopoDS_TWire& nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	property ::TopoDS_TWire* NativeInstance
	{
		::TopoDS_TWire* get()
		{
			return static_cast<::TopoDS_TWire*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_TWire^ CreateDowncasted(::TopoDS_TWire* instance);

public:
	TopoDS_TWire();
	TopoDS_TWire(Macad::Occt::TopoDS_TWire^ parameter1);
	Macad::Occt::TopAbs_ShapeEnum ShapeType();
	Macad::Occt::TopoDS_TShape^ EmptyCopy();
}; // class TopoDS_TWire

//---------------------------------------------------------------------
//  Class  TopoDS_TFace
//---------------------------------------------------------------------
public ref class TopoDS_TFace : public Macad::Occt::TopoDS_TShape
{

#ifdef Include_TopoDS_TFace_h
public:
	Include_TopoDS_TFace_h
#endif

protected:
	TopoDS_TFace(InitMode init)
		: Macad::Occt::TopoDS_TShape( init )
	{}

public:
	TopoDS_TFace(::TopoDS_TFace* nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	TopoDS_TFace(::TopoDS_TFace& nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	property ::TopoDS_TFace* NativeInstance
	{
		::TopoDS_TFace* get()
		{
			return static_cast<::TopoDS_TFace*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_TFace^ CreateDowncasted(::TopoDS_TFace* instance);

public:
	TopoDS_TFace();
	TopoDS_TFace(Macad::Occt::TopoDS_TFace^ parameter1);
	Macad::Occt::TopAbs_ShapeEnum ShapeType();
	Macad::Occt::TopoDS_TShape^ EmptyCopy();
}; // class TopoDS_TFace

//---------------------------------------------------------------------
//  Class  TopoDS_TShell
//---------------------------------------------------------------------
public ref class TopoDS_TShell sealed : public Macad::Occt::TopoDS_TShape
{

#ifdef Include_TopoDS_TShell_h
public:
	Include_TopoDS_TShell_h
#endif

public:
	TopoDS_TShell(::TopoDS_TShell* nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	TopoDS_TShell(::TopoDS_TShell& nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	property ::TopoDS_TShell* NativeInstance
	{
		::TopoDS_TShell* get()
		{
			return static_cast<::TopoDS_TShell*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_TShell^ CreateDowncasted(::TopoDS_TShell* instance);

public:
	TopoDS_TShell();
	TopoDS_TShell(Macad::Occt::TopoDS_TShell^ parameter1);
	Macad::Occt::TopAbs_ShapeEnum ShapeType();
	Macad::Occt::TopoDS_TShape^ EmptyCopy();
}; // class TopoDS_TShell

//---------------------------------------------------------------------
//  Class  TopoDS_TSolid
//---------------------------------------------------------------------
public ref class TopoDS_TSolid sealed : public Macad::Occt::TopoDS_TShape
{

#ifdef Include_TopoDS_TSolid_h
public:
	Include_TopoDS_TSolid_h
#endif

public:
	TopoDS_TSolid(::TopoDS_TSolid* nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	TopoDS_TSolid(::TopoDS_TSolid& nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	property ::TopoDS_TSolid* NativeInstance
	{
		::TopoDS_TSolid* get()
		{
			return static_cast<::TopoDS_TSolid*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_TSolid^ CreateDowncasted(::TopoDS_TSolid* instance);

public:
	TopoDS_TSolid();
	TopoDS_TSolid(Macad::Occt::TopoDS_TSolid^ parameter1);
	Macad::Occt::TopAbs_ShapeEnum ShapeType();
	Macad::Occt::TopoDS_TShape^ EmptyCopy();
}; // class TopoDS_TSolid

//---------------------------------------------------------------------
//  Class  TopoDS_TCompSolid
//---------------------------------------------------------------------
public ref class TopoDS_TCompSolid sealed : public Macad::Occt::TopoDS_TShape
{

#ifdef Include_TopoDS_TCompSolid_h
public:
	Include_TopoDS_TCompSolid_h
#endif

public:
	TopoDS_TCompSolid(::TopoDS_TCompSolid* nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	TopoDS_TCompSolid(::TopoDS_TCompSolid& nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	property ::TopoDS_TCompSolid* NativeInstance
	{
		::TopoDS_TCompSolid* get()
		{
			return static_cast<::TopoDS_TCompSolid*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_TCompSolid^ CreateDowncasted(::TopoDS_TCompSolid* instance);

public:
	TopoDS_TCompSolid();
	TopoDS_TCompSolid(Macad::Occt::TopoDS_TCompSolid^ parameter1);
	Macad::Occt::TopAbs_ShapeEnum ShapeType();
	Macad::Occt::TopoDS_TShape^ EmptyCopy();
}; // class TopoDS_TCompSolid

//---------------------------------------------------------------------
//  Class  TopoDS_TCompound
//---------------------------------------------------------------------
public ref class TopoDS_TCompound sealed : public Macad::Occt::TopoDS_TShape
{

#ifdef Include_TopoDS_TCompound_h
public:
	Include_TopoDS_TCompound_h
#endif

public:
	TopoDS_TCompound(::TopoDS_TCompound* nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	TopoDS_TCompound(::TopoDS_TCompound& nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	property ::TopoDS_TCompound* NativeInstance
	{
		::TopoDS_TCompound* get()
		{
			return static_cast<::TopoDS_TCompound*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_TCompound^ CreateDowncasted(::TopoDS_TCompound* instance);

public:
	TopoDS_TCompound();
	TopoDS_TCompound(Macad::Occt::TopoDS_TCompound^ parameter1);
	Macad::Occt::TopAbs_ShapeEnum ShapeType();
	Macad::Occt::TopoDS_TShape^ EmptyCopy();
}; // class TopoDS_TCompound

//---------------------------------------------------------------------
//  Class  TopoDS_Builder
//---------------------------------------------------------------------
public ref class TopoDS_Builder : public BaseClass<::TopoDS_Builder>
{

#ifdef Include_TopoDS_Builder_h
public:
	Include_TopoDS_Builder_h
#endif

protected:
	TopoDS_Builder(InitMode init)
		: BaseClass<::TopoDS_Builder>( init )
	{}

public:
	TopoDS_Builder(::TopoDS_Builder* nativeInstance)
		: BaseClass<::TopoDS_Builder>( nativeInstance, true )
	{}

	TopoDS_Builder(::TopoDS_Builder& nativeInstance)
		: BaseClass<::TopoDS_Builder>( &nativeInstance, false )
	{}

	property ::TopoDS_Builder* NativeInstance
	{
		::TopoDS_Builder* get()
		{
			return static_cast<::TopoDS_Builder*>(_NativeInstance);
		}
	}

public:
	TopoDS_Builder();
	TopoDS_Builder(Macad::Occt::TopoDS_Builder^ parameter1);
	void MakeWire(Macad::Occt::TopoDS_Wire^ W);
	void MakeShell(Macad::Occt::TopoDS_Shell^ S);
	void MakeSolid(Macad::Occt::TopoDS_Solid^ S);
	void MakeCompSolid(Macad::Occt::TopoDS_CompSolid^ C);
	void MakeCompound(Macad::Occt::TopoDS_Compound^ C);
	void Add(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopoDS_Shape^ C);
	void Remove(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopoDS_Shape^ C);
}; // class TopoDS_Builder

//---------------------------------------------------------------------
//  Class  TopoDS_Iterator
//---------------------------------------------------------------------
public ref class TopoDS_Iterator sealed : public BaseClass<::TopoDS_Iterator>
{

#ifdef Include_TopoDS_Iterator_h
public:
	Include_TopoDS_Iterator_h
#endif

public:
	TopoDS_Iterator(::TopoDS_Iterator* nativeInstance)
		: BaseClass<::TopoDS_Iterator>( nativeInstance, true )
	{}

	TopoDS_Iterator(::TopoDS_Iterator& nativeInstance)
		: BaseClass<::TopoDS_Iterator>( &nativeInstance, false )
	{}

	property ::TopoDS_Iterator* NativeInstance
	{
		::TopoDS_Iterator* get()
		{
			return static_cast<::TopoDS_Iterator*>(_NativeInstance);
		}
	}

public:
	TopoDS_Iterator();
	TopoDS_Iterator(Macad::Occt::TopoDS_Shape^ S, bool cumOri, bool cumLoc);
	TopoDS_Iterator(Macad::Occt::TopoDS_Shape^ S, bool cumOri);
	TopoDS_Iterator(Macad::Occt::TopoDS_Shape^ S);
	TopoDS_Iterator(Macad::Occt::TopoDS_Iterator^ parameter1);
	void Initialize(Macad::Occt::TopoDS_Shape^ S, bool cumOri, bool cumLoc);
	void Initialize(Macad::Occt::TopoDS_Shape^ S, bool cumOri);
	void Initialize(Macad::Occt::TopoDS_Shape^ S);
	bool More();
	void Next();
	Macad::Occt::TopoDS_Shape^ Value();
}; // class TopoDS_Iterator

//---------------------------------------------------------------------
//  Class  TopoDS
//---------------------------------------------------------------------
public ref class TopoDS sealed : public BaseClass<::TopoDS>
{

#ifdef Include_TopoDS_h
public:
	Include_TopoDS_h
#endif

public:
	TopoDS(::TopoDS* nativeInstance)
		: BaseClass<::TopoDS>( nativeInstance, true )
	{}

	TopoDS(::TopoDS& nativeInstance)
		: BaseClass<::TopoDS>( &nativeInstance, false )
	{}

	property ::TopoDS* NativeInstance
	{
		::TopoDS* get()
		{
			return static_cast<::TopoDS*>(_NativeInstance);
		}
	}

public:
	TopoDS();
	TopoDS(Macad::Occt::TopoDS^ parameter1);
	static Macad::Occt::TopoDS_Vertex^ Vertex(Macad::Occt::TopoDS_Shape^ S);
	static Macad::Occt::TopoDS_Edge^ Edge(Macad::Occt::TopoDS_Shape^ S);
	static Macad::Occt::TopoDS_Wire^ Wire(Macad::Occt::TopoDS_Shape^ S);
	static Macad::Occt::TopoDS_Face^ Face(Macad::Occt::TopoDS_Shape^ S);
	static Macad::Occt::TopoDS_Shell^ Shell(Macad::Occt::TopoDS_Shape^ S);
	static Macad::Occt::TopoDS_Solid^ Solid(Macad::Occt::TopoDS_Shape^ S);
	static Macad::Occt::TopoDS_CompSolid^ CompSolid(Macad::Occt::TopoDS_Shape^ S);
	static Macad::Occt::TopoDS_Compound^ Compound(Macad::Occt::TopoDS_Shape^ S);
}; // class TopoDS

//---------------------------------------------------------------------
//  Class  TopoDS_AlertAttribute
//---------------------------------------------------------------------
public ref class TopoDS_AlertAttribute sealed : public Macad::Occt::Message_AttributeStream
{

#ifdef Include_TopoDS_AlertAttribute_h
public:
	Include_TopoDS_AlertAttribute_h
#endif

public:
	TopoDS_AlertAttribute(::TopoDS_AlertAttribute* nativeInstance)
		: Macad::Occt::Message_AttributeStream( nativeInstance )
	{}

	TopoDS_AlertAttribute(::TopoDS_AlertAttribute& nativeInstance)
		: Macad::Occt::Message_AttributeStream( nativeInstance )
	{}

	property ::TopoDS_AlertAttribute* NativeInstance
	{
		::TopoDS_AlertAttribute* get()
		{
			return static_cast<::TopoDS_AlertAttribute*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_AlertAttribute^ CreateDowncasted(::TopoDS_AlertAttribute* instance);

public:
	TopoDS_AlertAttribute(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::TCollection_AsciiString^ theName);
	TopoDS_AlertAttribute(Macad::Occt::TopoDS_Shape^ theShape);
	Macad::Occt::TopoDS_Shape^ GetShape();
	static void Send(Macad::Occt::Message_Messenger^ theMessenger, Macad::Occt::TopoDS_Shape^ theShape);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class TopoDS_AlertAttribute

//---------------------------------------------------------------------
//  Class  TopoDS_AlertWithShape
//---------------------------------------------------------------------
public ref class TopoDS_AlertWithShape sealed : public Macad::Occt::Message_Alert
{

#ifdef Include_TopoDS_AlertWithShape_h
public:
	Include_TopoDS_AlertWithShape_h
#endif

public:
	TopoDS_AlertWithShape(::TopoDS_AlertWithShape* nativeInstance)
		: Macad::Occt::Message_Alert( nativeInstance )
	{}

	TopoDS_AlertWithShape(::TopoDS_AlertWithShape& nativeInstance)
		: Macad::Occt::Message_Alert( nativeInstance )
	{}

	property ::TopoDS_AlertWithShape* NativeInstance
	{
		::TopoDS_AlertWithShape* get()
		{
			return static_cast<::TopoDS_AlertWithShape*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_AlertWithShape^ CreateDowncasted(::TopoDS_AlertWithShape* instance);

public:
	TopoDS_AlertWithShape(Macad::Occt::TopoDS_Shape^ theShape);
	TopoDS_AlertWithShape(Macad::Occt::TopoDS_AlertWithShape^ parameter1);
	Macad::Occt::TopoDS_Shape^ GetShape();
	void SetShape(Macad::Occt::TopoDS_Shape^ theShape);
	bool SupportsMerge();
	bool Merge(Macad::Occt::Message_Alert^ theTarget);
}; // class TopoDS_AlertWithShape

//---------------------------------------------------------------------
//  Class  TopoDS_FrozenShape
//---------------------------------------------------------------------
public ref class TopoDS_FrozenShape sealed : public Macad::Occt::Standard_DomainError
{

#ifdef Include_TopoDS_FrozenShape_h
public:
	Include_TopoDS_FrozenShape_h
#endif

public:
	TopoDS_FrozenShape(::TopoDS_FrozenShape* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	TopoDS_FrozenShape(::TopoDS_FrozenShape& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::TopoDS_FrozenShape* NativeInstance
	{
		::TopoDS_FrozenShape* get()
		{
			return static_cast<::TopoDS_FrozenShape*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_FrozenShape^ CreateDowncasted(::TopoDS_FrozenShape* instance);

public:
	TopoDS_FrozenShape();
	TopoDS_FrozenShape(System::String^ theMessage);
	TopoDS_FrozenShape(System::String^ theMessage, System::String^ theStackTrace);
	TopoDS_FrozenShape(Macad::Occt::TopoDS_FrozenShape^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::TopoDS_FrozenShape^ NewInstance(System::String^ theMessage);
	static Macad::Occt::TopoDS_FrozenShape^ NewInstance();
	static Macad::Occt::TopoDS_FrozenShape^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class TopoDS_FrozenShape

//---------------------------------------------------------------------
//  Class  TopoDS_UnCompatibleShapes
//---------------------------------------------------------------------
public ref class TopoDS_UnCompatibleShapes sealed : public Macad::Occt::Standard_DomainError
{

#ifdef Include_TopoDS_UnCompatibleShapes_h
public:
	Include_TopoDS_UnCompatibleShapes_h
#endif

public:
	TopoDS_UnCompatibleShapes(::TopoDS_UnCompatibleShapes* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	TopoDS_UnCompatibleShapes(::TopoDS_UnCompatibleShapes& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::TopoDS_UnCompatibleShapes* NativeInstance
	{
		::TopoDS_UnCompatibleShapes* get()
		{
			return static_cast<::TopoDS_UnCompatibleShapes*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_UnCompatibleShapes^ CreateDowncasted(::TopoDS_UnCompatibleShapes* instance);

public:
	TopoDS_UnCompatibleShapes();
	TopoDS_UnCompatibleShapes(System::String^ theMessage);
	TopoDS_UnCompatibleShapes(System::String^ theMessage, System::String^ theStackTrace);
	TopoDS_UnCompatibleShapes(Macad::Occt::TopoDS_UnCompatibleShapes^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::TopoDS_UnCompatibleShapes^ NewInstance(System::String^ theMessage);
	static Macad::Occt::TopoDS_UnCompatibleShapes^ NewInstance();
	static Macad::Occt::TopoDS_UnCompatibleShapes^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class TopoDS_UnCompatibleShapes

//---------------------------------------------------------------------
//  Class  TopoDS_LockedShape
//---------------------------------------------------------------------
public ref class TopoDS_LockedShape sealed : public Macad::Occt::Standard_DomainError
{

#ifdef Include_TopoDS_LockedShape_h
public:
	Include_TopoDS_LockedShape_h
#endif

public:
	TopoDS_LockedShape(::TopoDS_LockedShape* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	TopoDS_LockedShape(::TopoDS_LockedShape& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::TopoDS_LockedShape* NativeInstance
	{
		::TopoDS_LockedShape* get()
		{
			return static_cast<::TopoDS_LockedShape*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_LockedShape^ CreateDowncasted(::TopoDS_LockedShape* instance);

public:
	TopoDS_LockedShape();
	TopoDS_LockedShape(System::String^ theMessage);
	TopoDS_LockedShape(System::String^ theMessage, System::String^ theStackTrace);
	TopoDS_LockedShape(Macad::Occt::TopoDS_LockedShape^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::TopoDS_LockedShape^ NewInstance(System::String^ theMessage);
	static Macad::Occt::TopoDS_LockedShape^ NewInstance();
	static Macad::Occt::TopoDS_LockedShape^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class TopoDS_LockedShape

}; // namespace Occt
}; // namespace Macad
