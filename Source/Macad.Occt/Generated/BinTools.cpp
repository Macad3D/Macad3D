// Generated wrapper code for package BinTools

#include "OcctPCH.h"
#include "BinTools.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "BinTools.h"
#include "TopoDS.h"
#include "TopAbs.h"
#include "Geom2d.h"
#include "Geom.h"
#include "TopLoc.h"


//---------------------------------------------------------------------
//  Class  BinTools_ShapeSet
//---------------------------------------------------------------------

Macad::Occt::BinTools_ShapeSet::BinTools_ShapeSet(bool isWithTriangles)
	: BaseClass<::BinTools_ShapeSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_ShapeSet(isWithTriangles);
}

Macad::Occt::BinTools_ShapeSet::BinTools_ShapeSet(Macad::Occt::BinTools_ShapeSet^ parameter1)
	: BaseClass<::BinTools_ShapeSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_ShapeSet(*(::BinTools_ShapeSet*)parameter1->NativeInstance);
}

bool Macad::Occt::BinTools_ShapeSet::IsWithTriangles()
{
	return ((::BinTools_ShapeSet*)_NativeInstance)->IsWithTriangles();
}

void Macad::Occt::BinTools_ShapeSet::SetWithTriangles(bool isWithTriangles)
{
	((::BinTools_ShapeSet*)_NativeInstance)->SetWithTriangles(isWithTriangles);
}

void Macad::Occt::BinTools_ShapeSet::SetFormatNb(int theFormatNb)
{
	((::BinTools_ShapeSet*)_NativeInstance)->SetFormatNb(theFormatNb);
}

int Macad::Occt::BinTools_ShapeSet::FormatNb()
{
	return ((::BinTools_ShapeSet*)_NativeInstance)->FormatNb();
}

void Macad::Occt::BinTools_ShapeSet::Clear()
{
	((::BinTools_ShapeSet*)_NativeInstance)->Clear();
}

int Macad::Occt::BinTools_ShapeSet::Add(Macad::Occt::TopoDS_Shape^ S)
{
	return ((::BinTools_ShapeSet*)_NativeInstance)->Add(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BinTools_ShapeSet::Shape(int I)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BinTools_ShapeSet*)_NativeInstance)->Shape(I);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

int Macad::Occt::BinTools_ShapeSet::Index(Macad::Occt::TopoDS_Shape^ S)
{
	return ((::BinTools_ShapeSet*)_NativeInstance)->Index(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::BinTools_LocationSet^ Macad::Occt::BinTools_ShapeSet::Locations()
{
	::BinTools_LocationSet* _result = new ::BinTools_LocationSet();
	*_result =  (::BinTools_LocationSet)((::BinTools_ShapeSet*)_NativeInstance)->Locations();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BinTools_LocationSet(_result);
}

Macad::Occt::BinTools_LocationSet^ Macad::Occt::BinTools_ShapeSet::ChangeLocations()
{
	::BinTools_LocationSet* _result = new ::BinTools_LocationSet();
	*_result = ((::BinTools_ShapeSet*)_NativeInstance)->ChangeLocations();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BinTools_LocationSet(_result);
}

int Macad::Occt::BinTools_ShapeSet::NbShapes()
{
	return ((::BinTools_ShapeSet*)_NativeInstance)->NbShapes();
}

void Macad::Occt::BinTools_ShapeSet::AddGeometry(Macad::Occt::TopoDS_Shape^ S)
{
	((::BinTools_ShapeSet*)_NativeInstance)->AddGeometry(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::BinTools_ShapeSet::AddShapes(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2)
{
	((::BinTools_ShapeSet*)_NativeInstance)->AddShapes(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  BinTools_Curve2dSet
//---------------------------------------------------------------------

Macad::Occt::BinTools_Curve2dSet::BinTools_Curve2dSet()
	: BaseClass<::BinTools_Curve2dSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_Curve2dSet();
}

Macad::Occt::BinTools_Curve2dSet::BinTools_Curve2dSet(Macad::Occt::BinTools_Curve2dSet^ parameter1)
	: BaseClass<::BinTools_Curve2dSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_Curve2dSet(*(::BinTools_Curve2dSet*)parameter1->NativeInstance);
}

void Macad::Occt::BinTools_Curve2dSet::Clear()
{
	((::BinTools_Curve2dSet*)_NativeInstance)->Clear();
}

int Macad::Occt::BinTools_Curve2dSet::Add(Macad::Occt::Geom2d_Curve^ C)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	return ((::BinTools_Curve2dSet*)_NativeInstance)->Add(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BinTools_Curve2dSet::Curve2d(int I)
{
	Handle(::Geom2d_Curve) _result;
	_result = ((::BinTools_Curve2dSet*)_NativeInstance)->Curve2d(I);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

int Macad::Occt::BinTools_Curve2dSet::Index(Macad::Occt::Geom2d_Curve^ C)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	return ((::BinTools_Curve2dSet*)_NativeInstance)->Index(h_C);
	C->NativeInstance = h_C.get();
}




//---------------------------------------------------------------------
//  Class  BinTools_CurveSet
//---------------------------------------------------------------------

Macad::Occt::BinTools_CurveSet::BinTools_CurveSet()
	: BaseClass<::BinTools_CurveSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_CurveSet();
}

Macad::Occt::BinTools_CurveSet::BinTools_CurveSet(Macad::Occt::BinTools_CurveSet^ parameter1)
	: BaseClass<::BinTools_CurveSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_CurveSet(*(::BinTools_CurveSet*)parameter1->NativeInstance);
}

void Macad::Occt::BinTools_CurveSet::Clear()
{
	((::BinTools_CurveSet*)_NativeInstance)->Clear();
}

int Macad::Occt::BinTools_CurveSet::Add(Macad::Occt::Geom_Curve^ C)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	return ((::BinTools_CurveSet*)_NativeInstance)->Add(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Geom_Curve^ Macad::Occt::BinTools_CurveSet::Curve(int I)
{
	Handle(::Geom_Curve) _result;
	_result = ((::BinTools_CurveSet*)_NativeInstance)->Curve(I);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}

int Macad::Occt::BinTools_CurveSet::Index(Macad::Occt::Geom_Curve^ C)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	return ((::BinTools_CurveSet*)_NativeInstance)->Index(h_C);
	C->NativeInstance = h_C.get();
}




//---------------------------------------------------------------------
//  Class  BinTools_SurfaceSet
//---------------------------------------------------------------------

Macad::Occt::BinTools_SurfaceSet::BinTools_SurfaceSet()
	: BaseClass<::BinTools_SurfaceSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_SurfaceSet();
}

Macad::Occt::BinTools_SurfaceSet::BinTools_SurfaceSet(Macad::Occt::BinTools_SurfaceSet^ parameter1)
	: BaseClass<::BinTools_SurfaceSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_SurfaceSet(*(::BinTools_SurfaceSet*)parameter1->NativeInstance);
}

void Macad::Occt::BinTools_SurfaceSet::Clear()
{
	((::BinTools_SurfaceSet*)_NativeInstance)->Clear();
}

int Macad::Occt::BinTools_SurfaceSet::Add(Macad::Occt::Geom_Surface^ S)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	return ((::BinTools_SurfaceSet*)_NativeInstance)->Add(h_S);
	S->NativeInstance = h_S.get();
}

Macad::Occt::Geom_Surface^ Macad::Occt::BinTools_SurfaceSet::Surface(int I)
{
	Handle(::Geom_Surface) _result;
	_result = ((::BinTools_SurfaceSet*)_NativeInstance)->Surface(I);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

int Macad::Occt::BinTools_SurfaceSet::Index(Macad::Occt::Geom_Surface^ S)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	return ((::BinTools_SurfaceSet*)_NativeInstance)->Index(h_S);
	S->NativeInstance = h_S.get();
}




//---------------------------------------------------------------------
//  Class  BinTools_LocationSet
//---------------------------------------------------------------------

Macad::Occt::BinTools_LocationSet::BinTools_LocationSet()
	: BaseClass<::BinTools_LocationSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_LocationSet();
}

Macad::Occt::BinTools_LocationSet::BinTools_LocationSet(Macad::Occt::BinTools_LocationSet^ parameter1)
	: BaseClass<::BinTools_LocationSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_LocationSet(*(::BinTools_LocationSet*)parameter1->NativeInstance);
}

void Macad::Occt::BinTools_LocationSet::Clear()
{
	((::BinTools_LocationSet*)_NativeInstance)->Clear();
}

int Macad::Occt::BinTools_LocationSet::Add(Macad::Occt::TopLoc_Location^ L)
{
	return ((::BinTools_LocationSet*)_NativeInstance)->Add(*(::TopLoc_Location*)L->NativeInstance);
}

Macad::Occt::TopLoc_Location^ Macad::Occt::BinTools_LocationSet::Location(int I)
{
	::TopLoc_Location* _result = new ::TopLoc_Location();
	*_result =  (::TopLoc_Location)((::BinTools_LocationSet*)_NativeInstance)->Location(I);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

int Macad::Occt::BinTools_LocationSet::Index(Macad::Occt::TopLoc_Location^ L)
{
	return ((::BinTools_LocationSet*)_NativeInstance)->Index(*(::TopLoc_Location*)L->NativeInstance);
}

int Macad::Occt::BinTools_LocationSet::NbLocations()
{
	return ((::BinTools_LocationSet*)_NativeInstance)->NbLocations();
}




//---------------------------------------------------------------------
//  Class  BinTools
//---------------------------------------------------------------------

Macad::Occt::BinTools::BinTools()
	: BaseClass<::BinTools>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools();
}

Macad::Occt::BinTools::BinTools(Macad::Occt::BinTools^ parameter1)
	: BaseClass<::BinTools>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools(*(::BinTools*)parameter1->NativeInstance);
}

bool Macad::Occt::BinTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile)
{
	const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
	return ::BinTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
}

bool Macad::Occt::BinTools::Read(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile)
{
	const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
	return ::BinTools::Read(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
}



