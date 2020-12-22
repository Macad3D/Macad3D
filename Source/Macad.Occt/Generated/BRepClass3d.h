// Generated wrapper code for package BRepClass3d

#pragma once

#include "BRepClass3d.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRepClass3d_Intersector3d
//---------------------------------------------------------------------
public ref class BRepClass3d_Intersector3d sealed : public BaseClass<::BRepClass3d_Intersector3d>
{

#ifdef Include_BRepClass3d_Intersector3d_h
public:
	Include_BRepClass3d_Intersector3d_h
#endif

public:
	BRepClass3d_Intersector3d(::BRepClass3d_Intersector3d* nativeInstance)
		: BaseClass<::BRepClass3d_Intersector3d>( nativeInstance, true )
	{}

	BRepClass3d_Intersector3d(::BRepClass3d_Intersector3d& nativeInstance)
		: BaseClass<::BRepClass3d_Intersector3d>( &nativeInstance, false )
	{}

	property ::BRepClass3d_Intersector3d* NativeInstance
	{
		::BRepClass3d_Intersector3d* get()
		{
			return static_cast<::BRepClass3d_Intersector3d*>(_NativeInstance);
		}
	}

public:
	BRepClass3d_Intersector3d();
	BRepClass3d_Intersector3d(Macad::Occt::BRepClass3d_Intersector3d^ parameter1);
	void Perform(Macad::Occt::gp_Lin^ L, double Prm, double Tol, Macad::Occt::TopoDS_Face^ F);
	bool IsDone();
	bool HasAPoint();
	double UParameter();
	double VParameter();
	double WParameter();
	Macad::Occt::Pnt Pnt();
	/* Method skipped due to unknown mapping: IntCurveSurface_TransitionOnCurve Transition() */
	Macad::Occt::TopAbs_State State();
	Macad::Occt::TopoDS_Face^ Face();
}; // class BRepClass3d_Intersector3d

//---------------------------------------------------------------------
//  Class  BRepClass3d_SolidExplorer
//---------------------------------------------------------------------
public ref class BRepClass3d_SolidExplorer sealed : public BaseClass<::BRepClass3d_SolidExplorer>
{

#ifdef Include_BRepClass3d_SolidExplorer_h
public:
	Include_BRepClass3d_SolidExplorer_h
#endif

public:
	BRepClass3d_SolidExplorer(::BRepClass3d_SolidExplorer* nativeInstance)
		: BaseClass<::BRepClass3d_SolidExplorer>( nativeInstance, true )
	{}

	BRepClass3d_SolidExplorer(::BRepClass3d_SolidExplorer& nativeInstance)
		: BaseClass<::BRepClass3d_SolidExplorer>( &nativeInstance, false )
	{}

	property ::BRepClass3d_SolidExplorer* NativeInstance
	{
		::BRepClass3d_SolidExplorer* get()
		{
			return static_cast<::BRepClass3d_SolidExplorer*>(_NativeInstance);
		}
	}

public:
	BRepClass3d_SolidExplorer();
	BRepClass3d_SolidExplorer(Macad::Occt::TopoDS_Shape^ S);
	void InitShape(Macad::Occt::TopoDS_Shape^ S);
	bool Reject(Macad::Occt::Pnt P);
	static bool FindAPointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P, double% Param);
	static bool FindAPointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P, double% u, double% v, double% Param);
	static bool FindAPointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P, double% u, double% v, double% Param, Macad::Occt::Vec% theVecD1U, Macad::Occt::Vec% theVecD1V);
	static bool FindAPointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P, double% u, double% v);
	static bool FindAPointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P);
	static bool FindAPointInTheFace(Macad::Occt::TopoDS_Face^ F, double% u, double% v);
	bool PointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P, double% u, double% v, double% Param, int% Index);
	bool PointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P, double% u, double% v, double% Param, int% Index, Macad::Occt::BRepAdaptor_HSurface^ surf, double u1, double v1, double u2, double v2);
	bool PointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P, double% u, double% v, double% Param, int% Index, Macad::Occt::BRepAdaptor_HSurface^ surf, double u1, double v1, double u2, double v2, Macad::Occt::Vec% theVecD1U, Macad::Occt::Vec% theVecD1V);
	void InitShell();
	bool MoreShell();
	void NextShell();
	Macad::Occt::TopoDS_Shell^ CurrentShell();
	bool RejectShell(Macad::Occt::gp_Lin^ L);
	void InitFace();
	bool MoreFace();
	void NextFace();
	Macad::Occt::TopoDS_Face^ CurrentFace();
	bool RejectFace(Macad::Occt::gp_Lin^ L);
	int Segment(Macad::Occt::Pnt P, Macad::Occt::gp_Lin^ L, double% Par);
	int OtherSegment(Macad::Occt::Pnt P, Macad::Occt::gp_Lin^ L, double% Par);
	int GetFaceSegmentIndex();
	void DumpSegment(Macad::Occt::Pnt P, Macad::Occt::gp_Lin^ L, double Par, Macad::Occt::TopAbs_State S);
	Macad::Occt::Bnd_Box^ Box();
	Macad::Occt::TopoDS_Shape^ GetShape();
	Macad::Occt::IntCurvesFace_Intersector^ Intersector(Macad::Occt::TopoDS_Face^ F);
	/* Method skipped due to unknown mapping: BRepClass3d_BndBoxTree GetTree() */
	Macad::Occt::TopTools_IndexedMapOfShape^ GetMapEV();
	void Destroy();
}; // class BRepClass3d_SolidExplorer

//---------------------------------------------------------------------
//  Class  BRepClass3d_SolidPassiveClassifier
//---------------------------------------------------------------------
public ref class BRepClass3d_SolidPassiveClassifier sealed : public BaseClass<::BRepClass3d_SolidPassiveClassifier>
{

#ifdef Include_BRepClass3d_SolidPassiveClassifier_h
public:
	Include_BRepClass3d_SolidPassiveClassifier_h
#endif

public:
	BRepClass3d_SolidPassiveClassifier(::BRepClass3d_SolidPassiveClassifier* nativeInstance)
		: BaseClass<::BRepClass3d_SolidPassiveClassifier>( nativeInstance, true )
	{}

	BRepClass3d_SolidPassiveClassifier(::BRepClass3d_SolidPassiveClassifier& nativeInstance)
		: BaseClass<::BRepClass3d_SolidPassiveClassifier>( &nativeInstance, false )
	{}

	property ::BRepClass3d_SolidPassiveClassifier* NativeInstance
	{
		::BRepClass3d_SolidPassiveClassifier* get()
		{
			return static_cast<::BRepClass3d_SolidPassiveClassifier*>(_NativeInstance);
		}
	}

public:
	BRepClass3d_SolidPassiveClassifier();
	BRepClass3d_SolidPassiveClassifier(Macad::Occt::BRepClass3d_SolidPassiveClassifier^ parameter1);
	void Reset(Macad::Occt::gp_Lin^ L, double P, double Tol);
	void Compare(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopAbs_Orientation Or);
	double Parameter();
	bool HasIntersection();
	Macad::Occt::BRepClass3d_Intersector3d^ Intersector();
	Macad::Occt::TopAbs_State State();
}; // class BRepClass3d_SolidPassiveClassifier

//---------------------------------------------------------------------
//  Class  BRepClass3d_SClassifier
//---------------------------------------------------------------------
public ref class BRepClass3d_SClassifier : public BaseClass<::BRepClass3d_SClassifier>
{

#ifdef Include_BRepClass3d_SClassifier_h
public:
	Include_BRepClass3d_SClassifier_h
#endif

protected:
	BRepClass3d_SClassifier(InitMode init)
		: BaseClass<::BRepClass3d_SClassifier>( init )
	{}

public:
	BRepClass3d_SClassifier(::BRepClass3d_SClassifier* nativeInstance)
		: BaseClass<::BRepClass3d_SClassifier>( nativeInstance, true )
	{}

	BRepClass3d_SClassifier(::BRepClass3d_SClassifier& nativeInstance)
		: BaseClass<::BRepClass3d_SClassifier>( &nativeInstance, false )
	{}

	property ::BRepClass3d_SClassifier* NativeInstance
	{
		::BRepClass3d_SClassifier* get()
		{
			return static_cast<::BRepClass3d_SClassifier*>(_NativeInstance);
		}
	}

public:
	BRepClass3d_SClassifier();
	BRepClass3d_SClassifier(Macad::Occt::BRepClass3d_SolidExplorer^ S, Macad::Occt::Pnt P, double Tol);
	BRepClass3d_SClassifier(Macad::Occt::BRepClass3d_SClassifier^ parameter1);
	void Perform(Macad::Occt::BRepClass3d_SolidExplorer^ S, Macad::Occt::Pnt P, double Tol);
	void PerformInfinitePoint(Macad::Occt::BRepClass3d_SolidExplorer^ S, double Tol);
	bool Rejected();
	Macad::Occt::TopAbs_State State();
	bool IsOnAFace();
	Macad::Occt::TopoDS_Face^ Face();
}; // class BRepClass3d_SClassifier

//---------------------------------------------------------------------
//  Class  BRepClass3d_SolidClassifier
//---------------------------------------------------------------------
public ref class BRepClass3d_SolidClassifier sealed : public Macad::Occt::BRepClass3d_SClassifier
{

#ifdef Include_BRepClass3d_SolidClassifier_h
public:
	Include_BRepClass3d_SolidClassifier_h
#endif

public:
	BRepClass3d_SolidClassifier(::BRepClass3d_SolidClassifier* nativeInstance)
		: Macad::Occt::BRepClass3d_SClassifier( nativeInstance )
	{}

	BRepClass3d_SolidClassifier(::BRepClass3d_SolidClassifier& nativeInstance)
		: Macad::Occt::BRepClass3d_SClassifier( nativeInstance )
	{}

	property ::BRepClass3d_SolidClassifier* NativeInstance
	{
		::BRepClass3d_SolidClassifier* get()
		{
			return static_cast<::BRepClass3d_SolidClassifier*>(_NativeInstance);
		}
	}

public:
	BRepClass3d_SolidClassifier();
	BRepClass3d_SolidClassifier(Macad::Occt::TopoDS_Shape^ S);
	BRepClass3d_SolidClassifier(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Pnt P, double Tol);
	void Load(Macad::Occt::TopoDS_Shape^ S);
	void Perform(Macad::Occt::Pnt P, double Tol);
	void PerformInfinitePoint(double Tol);
	void Destroy();
}; // class BRepClass3d_SolidClassifier

//---------------------------------------------------------------------
//  Class  BRepClass3d
//---------------------------------------------------------------------
public ref class BRepClass3d sealed : public BaseClass<::BRepClass3d>
{

#ifdef Include_BRepClass3d_h
public:
	Include_BRepClass3d_h
#endif

public:
	BRepClass3d(::BRepClass3d* nativeInstance)
		: BaseClass<::BRepClass3d>( nativeInstance, true )
	{}

	BRepClass3d(::BRepClass3d& nativeInstance)
		: BaseClass<::BRepClass3d>( &nativeInstance, false )
	{}

	property ::BRepClass3d* NativeInstance
	{
		::BRepClass3d* get()
		{
			return static_cast<::BRepClass3d*>(_NativeInstance);
		}
	}

public:
	BRepClass3d();
	BRepClass3d(Macad::Occt::BRepClass3d^ parameter1);
	static Macad::Occt::TopoDS_Shell^ OuterShell(Macad::Occt::TopoDS_Solid^ S);
}; // class BRepClass3d

}; // namespace Occt
}; // namespace Macad
