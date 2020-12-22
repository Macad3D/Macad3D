// Generated wrapper code for package ShapeAnalysis

#pragma once

#include "ShapeAnalysis.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ShapeAnalysis_DataMapOfShapeListOfReal
//---------------------------------------------------------------------
public ref class ShapeAnalysis_DataMapOfShapeListOfReal sealed : public BaseClass<::ShapeAnalysis_DataMapOfShapeListOfReal>
{

#ifdef Include_ShapeAnalysis_DataMapOfShapeListOfReal_h
public:
	Include_ShapeAnalysis_DataMapOfShapeListOfReal_h
#endif

public:
	ShapeAnalysis_DataMapOfShapeListOfReal(::ShapeAnalysis_DataMapOfShapeListOfReal* nativeInstance)
		: BaseClass<::ShapeAnalysis_DataMapOfShapeListOfReal>( nativeInstance, true )
	{}

	ShapeAnalysis_DataMapOfShapeListOfReal(::ShapeAnalysis_DataMapOfShapeListOfReal& nativeInstance)
		: BaseClass<::ShapeAnalysis_DataMapOfShapeListOfReal>( &nativeInstance, false )
	{}

	property ::ShapeAnalysis_DataMapOfShapeListOfReal* NativeInstance
	{
		::ShapeAnalysis_DataMapOfShapeListOfReal* get()
		{
			return static_cast<::ShapeAnalysis_DataMapOfShapeListOfReal*>(_NativeInstance);
		}
	}

public:
	ShapeAnalysis_DataMapOfShapeListOfReal();
	ShapeAnalysis_DataMapOfShapeListOfReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	ShapeAnalysis_DataMapOfShapeListOfReal(int theNbBuckets);
	ShapeAnalysis_DataMapOfShapeListOfReal(Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal^ theOther);
	void Exchange(Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal^ theOther);
	Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal^ Assign(Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal^ theOther);
	/* Method skipped due to unknown mapping: NCollection_List<double> Bound(TopoDS_Shape theKey, NCollection_List<double> theItem, ) */
	bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
	bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
	/* Method skipped due to unknown mapping: NCollection_List<double> Seek(TopoDS_Shape theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_List<double> Find(TopoDS_Shape theKey, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Find(TopoDS_Shape theKey, NCollection_List<double> theValue, ) */
	/* Method skipped due to unknown mapping: NCollection_List<double> ChangeSeek(TopoDS_Shape theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_List<double> ChangeFind(TopoDS_Shape theKey, ) */
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class ShapeAnalysis_DataMapOfShapeListOfReal

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_SequenceOfFreeBounds
//---------------------------------------------------------------------
public ref class ShapeAnalysis_SequenceOfFreeBounds sealed : public BaseClass<::ShapeAnalysis_SequenceOfFreeBounds>
{

#ifdef Include_ShapeAnalysis_SequenceOfFreeBounds_h
public:
	Include_ShapeAnalysis_SequenceOfFreeBounds_h
#endif

public:
	ShapeAnalysis_SequenceOfFreeBounds(::ShapeAnalysis_SequenceOfFreeBounds* nativeInstance)
		: BaseClass<::ShapeAnalysis_SequenceOfFreeBounds>( nativeInstance, true )
	{}

	ShapeAnalysis_SequenceOfFreeBounds(::ShapeAnalysis_SequenceOfFreeBounds& nativeInstance)
		: BaseClass<::ShapeAnalysis_SequenceOfFreeBounds>( &nativeInstance, false )
	{}

	property ::ShapeAnalysis_SequenceOfFreeBounds* NativeInstance
	{
		::ShapeAnalysis_SequenceOfFreeBounds* get()
		{
			return static_cast<::ShapeAnalysis_SequenceOfFreeBounds*>(_NativeInstance);
		}
	}

public:
	ShapeAnalysis_SequenceOfFreeBounds();
	ShapeAnalysis_SequenceOfFreeBounds(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	ShapeAnalysis_SequenceOfFreeBounds(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theOther);
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ Assign(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem);
	void Append(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theSeq);
	void Prepend(Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem);
	void Prepend(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, ShapeAnalysis_FreeBoundData theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem);
	void Split(int theIndex, Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theSeq);
	Macad::Occt::ShapeAnalysis_FreeBoundData^ First();
	Macad::Occt::ShapeAnalysis_FreeBoundData^ ChangeFirst();
	Macad::Occt::ShapeAnalysis_FreeBoundData^ Last();
	Macad::Occt::ShapeAnalysis_FreeBoundData^ ChangeLast();
	Macad::Occt::ShapeAnalysis_FreeBoundData^ Value(int theIndex);
	Macad::Occt::ShapeAnalysis_FreeBoundData^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem);
}; // class ShapeAnalysis_SequenceOfFreeBounds

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Geom
//---------------------------------------------------------------------
public ref class ShapeAnalysis_Geom sealed : public BaseClass<::ShapeAnalysis_Geom>
{

#ifdef Include_ShapeAnalysis_Geom_h
public:
	Include_ShapeAnalysis_Geom_h
#endif

public:
	ShapeAnalysis_Geom(::ShapeAnalysis_Geom* nativeInstance)
		: BaseClass<::ShapeAnalysis_Geom>( nativeInstance, true )
	{}

	ShapeAnalysis_Geom(::ShapeAnalysis_Geom& nativeInstance)
		: BaseClass<::ShapeAnalysis_Geom>( &nativeInstance, false )
	{}

	property ::ShapeAnalysis_Geom* NativeInstance
	{
		::ShapeAnalysis_Geom* get()
		{
			return static_cast<::ShapeAnalysis_Geom*>(_NativeInstance);
		}
	}

public:
	ShapeAnalysis_Geom();
	ShapeAnalysis_Geom(Macad::Occt::ShapeAnalysis_Geom^ parameter1);
	static bool NearestPlane(Macad::Occt::TColgp_Array1OfPnt^ Pnts, Macad::Occt::Pln% aPln, double% Dmax);
	static bool PositionTrsf(Macad::Occt::TColStd_HArray2OfReal^ coefs, Macad::Occt::Trsf% trsf, double unit, double prec);
}; // class ShapeAnalysis_Geom

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Curve
//---------------------------------------------------------------------
public ref class ShapeAnalysis_Curve sealed : public BaseClass<::ShapeAnalysis_Curve>
{

#ifdef Include_ShapeAnalysis_Curve_h
public:
	Include_ShapeAnalysis_Curve_h
#endif

public:
	ShapeAnalysis_Curve(::ShapeAnalysis_Curve* nativeInstance)
		: BaseClass<::ShapeAnalysis_Curve>( nativeInstance, true )
	{}

	ShapeAnalysis_Curve(::ShapeAnalysis_Curve& nativeInstance)
		: BaseClass<::ShapeAnalysis_Curve>( &nativeInstance, false )
	{}

	property ::ShapeAnalysis_Curve* NativeInstance
	{
		::ShapeAnalysis_Curve* get()
		{
			return static_cast<::ShapeAnalysis_Curve*>(_NativeInstance);
		}
	}

public:
	ShapeAnalysis_Curve();
	ShapeAnalysis_Curve(Macad::Occt::ShapeAnalysis_Curve^ parameter1);
	double Project(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, bool AdjustToEnds);
	double Project(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param);
	double Project(Macad::Occt::Adaptor3d_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, bool AdjustToEnds);
	double Project(Macad::Occt::Adaptor3d_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param);
	double Project(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, double cf, double cl, bool AdjustToEnds);
	double Project(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, double cf, double cl);
	double ProjectAct(Macad::Occt::Adaptor3d_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param);
	double NextProject(double paramPrev, Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, double cf, double cl, bool AdjustToEnds);
	double NextProject(double paramPrev, Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, double cf, double cl);
	double NextProject(double paramPrev, Macad::Occt::Adaptor3d_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param);
	bool ValidateRange(Macad::Occt::Geom_Curve^ Crv, double% First, double% Last, double prec);
	void FillBndBox(Macad::Occt::Geom2d_Curve^ C2d, double First, double Last, int NPoints, bool Exact, Macad::Occt::Bnd_Box2d^ Box);
	int SelectForwardSeam(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2);
	static bool IsPlanar(Macad::Occt::TColgp_Array1OfPnt^ pnts, Macad::Occt::XYZ% Normal, double preci);
	static bool IsPlanar(Macad::Occt::TColgp_Array1OfPnt^ pnts, Macad::Occt::XYZ% Normal);
	static bool IsPlanar(Macad::Occt::Geom_Curve^ curve, Macad::Occt::XYZ% Normal, double preci);
	static bool IsPlanar(Macad::Occt::Geom_Curve^ curve, Macad::Occt::XYZ% Normal);
	static bool GetSamplePoints(Macad::Occt::Geom2d_Curve^ curve, double first, double last, Macad::Occt::TColgp_SequenceOfPnt2d^ seq);
	static bool GetSamplePoints(Macad::Occt::Geom_Curve^ curve, double first, double last, Macad::Occt::TColgp_SequenceOfPnt^ seq);
	static bool IsClosed(Macad::Occt::Geom_Curve^ curve, double preci);
	static bool IsClosed(Macad::Occt::Geom_Curve^ curve);
	static bool IsPeriodic(Macad::Occt::Geom_Curve^ curve);
	static bool IsPeriodic(Macad::Occt::Geom2d_Curve^ curve);
}; // class ShapeAnalysis_Curve

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Surface
//---------------------------------------------------------------------
public ref class ShapeAnalysis_Surface sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeAnalysis_Surface_h
public:
	Include_ShapeAnalysis_Surface_h
#endif

public:
	ShapeAnalysis_Surface(::ShapeAnalysis_Surface* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeAnalysis_Surface(::ShapeAnalysis_Surface& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeAnalysis_Surface* NativeInstance
	{
		::ShapeAnalysis_Surface* get()
		{
			return static_cast<::ShapeAnalysis_Surface*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeAnalysis_Surface^ CreateDowncasted(::ShapeAnalysis_Surface* instance);

public:
	ShapeAnalysis_Surface(Macad::Occt::Geom_Surface^ S);
	ShapeAnalysis_Surface(Macad::Occt::ShapeAnalysis_Surface^ parameter1);
	void Init(Macad::Occt::Geom_Surface^ S);
	void Init(Macad::Occt::ShapeAnalysis_Surface^ other);
	void SetDomain(double U1, double U2, double V1, double V2);
	Macad::Occt::Geom_Surface^ Surface();
	Macad::Occt::GeomAdaptor_HSurface^ Adaptor3d();
	Macad::Occt::GeomAdaptor_HSurface^ TrueAdaptor3d();
	double Gap();
	Macad::Occt::Pnt Value(double u, double v);
	Macad::Occt::Pnt Value(Macad::Occt::Pnt2d p2d);
	bool HasSingularities(double preci);
	int NbSingularities(double preci);
	bool Singularity(int num, double% preci, Macad::Occt::Pnt% P3d, Macad::Occt::Pnt2d% firstP2d, Macad::Occt::Pnt2d% lastP2d, double% firstpar, double% lastpar, bool% uisodeg);
	bool IsDegenerated(Macad::Occt::Pnt P3d, double preci);
	bool DegeneratedValues(Macad::Occt::Pnt P3d, double preci, Macad::Occt::Pnt2d% firstP2d, Macad::Occt::Pnt2d% lastP2d, double% firstpar, double% lastpar, bool forward);
	bool DegeneratedValues(Macad::Occt::Pnt P3d, double preci, Macad::Occt::Pnt2d% firstP2d, Macad::Occt::Pnt2d% lastP2d, double% firstpar, double% lastpar);
	bool ProjectDegenerated(Macad::Occt::Pnt P3d, double preci, Macad::Occt::Pnt2d neighbour, Macad::Occt::Pnt2d% result);
	bool ProjectDegenerated(int nbrPnt, Macad::Occt::TColgp_SequenceOfPnt^ points, Macad::Occt::TColgp_SequenceOfPnt2d^ pnt2d, double preci, bool direct);
	bool IsDegenerated(Macad::Occt::Pnt2d p2d1, Macad::Occt::Pnt2d p2d2, double tol, double ratio);
	void Bounds(double% ufirst, double% ulast, double% vfirst, double% vlast);
	void ComputeBoundIsos();
	Macad::Occt::Geom_Curve^ UIso(double U);
	Macad::Occt::Geom_Curve^ VIso(double V);
	bool IsUClosed(double preci);
	bool IsUClosed();
	bool IsVClosed(double preci);
	bool IsVClosed();
	Macad::Occt::Pnt2d ValueOfUV(Macad::Occt::Pnt P3D, double preci);
	Macad::Occt::Pnt2d NextValueOfUV(Macad::Occt::Pnt2d p2dPrev, Macad::Occt::Pnt P3D, double preci, double maxpreci);
	Macad::Occt::Pnt2d NextValueOfUV(Macad::Occt::Pnt2d p2dPrev, Macad::Occt::Pnt P3D, double preci);
	double UVFromIso(Macad::Occt::Pnt P3D, double preci, double% U, double% V);
	double UCloseVal();
	double VCloseVal();
	Macad::Occt::Bnd_Box^ GetBoxUF();
	Macad::Occt::Bnd_Box^ GetBoxUL();
	Macad::Occt::Bnd_Box^ GetBoxVF();
	Macad::Occt::Bnd_Box^ GetBoxVL();
}; // class ShapeAnalysis_Surface

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Edge
//---------------------------------------------------------------------
public ref class ShapeAnalysis_Edge sealed : public BaseClass<::ShapeAnalysis_Edge>
{

#ifdef Include_ShapeAnalysis_Edge_h
public:
	Include_ShapeAnalysis_Edge_h
#endif

public:
	ShapeAnalysis_Edge(::ShapeAnalysis_Edge* nativeInstance)
		: BaseClass<::ShapeAnalysis_Edge>( nativeInstance, true )
	{}

	ShapeAnalysis_Edge(::ShapeAnalysis_Edge& nativeInstance)
		: BaseClass<::ShapeAnalysis_Edge>( &nativeInstance, false )
	{}

	property ::ShapeAnalysis_Edge* NativeInstance
	{
		::ShapeAnalysis_Edge* get()
		{
			return static_cast<::ShapeAnalysis_Edge*>(_NativeInstance);
		}
	}

public:
	ShapeAnalysis_Edge();
	ShapeAnalysis_Edge(Macad::Occt::ShapeAnalysis_Edge^ parameter1);
	bool HasCurve3d(Macad::Occt::TopoDS_Edge^ edge);
	bool Curve3d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Curve^ C3d, double% cf, double% cl, bool orient);
	bool Curve3d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Curve^ C3d, double% cf, double% cl);
	bool IsClosed3d(Macad::Occt::TopoDS_Edge^ edge);
	bool HasPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face);
	bool HasPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location);
	bool PCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, Macad::Occt::Geom2d_Curve^ C2d, double% cf, double% cl, bool orient);
	bool PCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, Macad::Occt::Geom2d_Curve^ C2d, double% cf, double% cl);
	bool PCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, Macad::Occt::Geom2d_Curve^ C2d, double% cf, double% cl, bool orient);
	bool PCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, Macad::Occt::Geom2d_Curve^ C2d, double% cf, double% cl);
	bool BoundUV(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, Macad::Occt::Pnt2d% first, Macad::Occt::Pnt2d% last);
	bool BoundUV(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, Macad::Occt::Pnt2d% first, Macad::Occt::Pnt2d% last);
	bool IsSeam(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face);
	bool IsSeam(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location);
	Macad::Occt::TopoDS_Vertex^ FirstVertex(Macad::Occt::TopoDS_Edge^ edge);
	Macad::Occt::TopoDS_Vertex^ LastVertex(Macad::Occt::TopoDS_Edge^ edge);
	bool GetEndTangent2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, bool atEnd, Macad::Occt::Pnt2d% pos, Macad::Occt::Vec2d% tang, double dparam);
	bool GetEndTangent2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, bool atEnd, Macad::Occt::Pnt2d% pos, Macad::Occt::Vec2d% tang);
	bool GetEndTangent2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, bool atEnd, Macad::Occt::Pnt2d% pos, Macad::Occt::Vec2d% tang, double dparam);
	bool GetEndTangent2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, bool atEnd, Macad::Occt::Pnt2d% pos, Macad::Occt::Vec2d% tang);
	bool CheckVerticesWithCurve3d(Macad::Occt::TopoDS_Edge^ edge, double preci, int vtx);
	bool CheckVerticesWithCurve3d(Macad::Occt::TopoDS_Edge^ edge, double preci);
	bool CheckVerticesWithCurve3d(Macad::Occt::TopoDS_Edge^ edge);
	bool CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, double preci, int vtx);
	bool CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, double preci);
	bool CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face);
	bool CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, double preci, int vtx);
	bool CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, double preci);
	bool CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location);
	bool CheckVertexTolerance(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, double% toler1, double% toler2);
	bool CheckVertexTolerance(Macad::Occt::TopoDS_Edge^ edge, double% toler1, double% toler2);
	bool CheckCurve3dWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face);
	bool CheckCurve3dWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location);
	bool Status(Macad::Occt::ShapeExtend_Status status);
	bool CheckSameParameter(Macad::Occt::TopoDS_Edge^ edge, double% maxdev, int NbControl);
	bool CheckSameParameter(Macad::Occt::TopoDS_Edge^ edge, double% maxdev);
	bool CheckSameParameter(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace, double% theMaxdev, int theNbControl);
	bool CheckSameParameter(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace, double% theMaxdev);
	bool CheckPCurveRange(double theFirst, double theLast, Macad::Occt::Geom2d_Curve^ thePC);
	static bool ComputeDeviation(Macad::Occt::Adaptor3d_Curve^ CRef, Macad::Occt::Adaptor3d_Curve^ Other, bool SameParameter, double% dev, int NCONTROL);
	bool CheckOverlapping(Macad::Occt::TopoDS_Edge^ theEdge1, Macad::Occt::TopoDS_Edge^ theEdge2, double% theTolOverlap, double theDomainDist);
	bool CheckOverlapping(Macad::Occt::TopoDS_Edge^ theEdge1, Macad::Occt::TopoDS_Edge^ theEdge2, double% theTolOverlap);
}; // class ShapeAnalysis_Edge

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Wire
//---------------------------------------------------------------------
public ref class ShapeAnalysis_Wire sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeAnalysis_Wire_h
public:
	Include_ShapeAnalysis_Wire_h
#endif

public:
	ShapeAnalysis_Wire(::ShapeAnalysis_Wire* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeAnalysis_Wire(::ShapeAnalysis_Wire& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeAnalysis_Wire* NativeInstance
	{
		::ShapeAnalysis_Wire* get()
		{
			return static_cast<::ShapeAnalysis_Wire*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeAnalysis_Wire^ CreateDowncasted(::ShapeAnalysis_Wire* instance);

public:
	ShapeAnalysis_Wire();
	ShapeAnalysis_Wire(Macad::Occt::TopoDS_Wire^ wire, Macad::Occt::TopoDS_Face^ face, double precision);
	ShapeAnalysis_Wire(Macad::Occt::ShapeExtend_WireData^ sbwd, Macad::Occt::TopoDS_Face^ face, double precision);
	ShapeAnalysis_Wire(Macad::Occt::ShapeAnalysis_Wire^ parameter1);
	void Init(Macad::Occt::TopoDS_Wire^ wire, Macad::Occt::TopoDS_Face^ face, double precision);
	void Init(Macad::Occt::ShapeExtend_WireData^ sbwd, Macad::Occt::TopoDS_Face^ face, double precision);
	void Load(Macad::Occt::TopoDS_Wire^ wire);
	void Load(Macad::Occt::ShapeExtend_WireData^ sbwd);
	void SetFace(Macad::Occt::TopoDS_Face^ face);
	void SetSurface(Macad::Occt::Geom_Surface^ surface);
	void SetSurface(Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location);
	void SetPrecision(double precision);
	void ClearStatuses();
	bool IsLoaded();
	bool IsReady();
	double Precision();
	Macad::Occt::ShapeExtend_WireData^ WireData();
	int NbEdges();
	Macad::Occt::TopoDS_Face^ Face();
	Macad::Occt::ShapeAnalysis_Surface^ Surface();
	bool Perform();
	bool CheckOrder(bool isClosed, bool mode3d);
	bool CheckOrder(bool isClosed);
	bool CheckOrder();
	bool CheckConnected(double prec);
	bool CheckConnected();
	bool CheckSmall(double precsmall);
	bool CheckSmall();
	bool CheckEdgeCurves();
	bool CheckDegenerated();
	bool CheckClosed(double prec);
	bool CheckClosed();
	bool CheckSelfIntersection();
	bool CheckLacking();
	bool CheckGaps3d();
	bool CheckGaps2d();
	bool CheckCurveGaps();
	bool CheckOrder(Macad::Occt::ShapeAnalysis_WireOrder^ sawo, bool isClosed, bool mode3d);
	bool CheckOrder(Macad::Occt::ShapeAnalysis_WireOrder^ sawo, bool isClosed);
	bool CheckOrder(Macad::Occt::ShapeAnalysis_WireOrder^ sawo);
	bool CheckConnected(int num, double prec);
	bool CheckConnected(int num);
	bool CheckSmall(int num, double precsmall);
	bool CheckSmall(int num);
	bool CheckSeam(int num, Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, double% cf, double% cl);
	bool CheckSeam(int num);
	bool CheckDegenerated(int num, Macad::Occt::Pnt2d% dgnr1, Macad::Occt::Pnt2d% dgnr2);
	bool CheckDegenerated(int num);
	bool CheckGap3d(int num);
	bool CheckGap3d();
	bool CheckGap2d(int num);
	bool CheckGap2d();
	bool CheckCurveGap(int num);
	bool CheckCurveGap();
	/* Method skipped due to unknown mapping: Standard_Boolean CheckSelfIntersectingEdge(Standard_Integer num, IntRes2d_SequenceOfIntersectionPoint points2d, TColgp_SequenceOfPnt points3d, ) */
	bool CheckSelfIntersectingEdge(int num);
	/* Method skipped due to unknown mapping: Standard_Boolean CheckIntersectingEdges(Standard_Integer num, IntRes2d_SequenceOfIntersectionPoint points2d, TColgp_SequenceOfPnt points3d, TColStd_SequenceOfReal errors, ) */
	bool CheckIntersectingEdges(int num);
	/* Method skipped due to unknown mapping: Standard_Boolean CheckIntersectingEdges(Standard_Integer num1, Standard_Integer num2, IntRes2d_SequenceOfIntersectionPoint points2d, TColgp_SequenceOfPnt points3d, TColStd_SequenceOfReal errors, ) */
	bool CheckIntersectingEdges(int num1, int num2);
	bool CheckLacking(int num, double Tolerance, Macad::Occt::Pnt2d% p2d1, Macad::Occt::Pnt2d% p2d2);
	bool CheckLacking(int num, double Tolerance);
	bool CheckLacking(int num);
	bool CheckOuterBound(bool APIMake);
	bool CheckOuterBound();
	bool CheckNotchedEdges(int num, int% shortNum, double% param, double Tolerance);
	bool CheckNotchedEdges(int num, int% shortNum, double% param);
	bool CheckSmallArea(Macad::Occt::TopoDS_Wire^ theWire);
	bool CheckShapeConnect(Macad::Occt::TopoDS_Shape^ shape, double prec);
	bool CheckShapeConnect(Macad::Occt::TopoDS_Shape^ shape);
	bool CheckShapeConnect(double% tailhead, double% tailtail, double% headtail, double% headhead, Macad::Occt::TopoDS_Shape^ shape, double prec);
	bool CheckShapeConnect(double% tailhead, double% tailtail, double% headtail, double% headhead, Macad::Occt::TopoDS_Shape^ shape);
	bool CheckLoop(Macad::Occt::TopTools_IndexedMapOfShape^ aMapLoopVertices, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ aMapVertexEdges, Macad::Occt::TopTools_MapOfShape^ aMapSmallEdges, Macad::Occt::TopTools_MapOfShape^ aMapSeemEdges);
	bool CheckTail(Macad::Occt::TopoDS_Edge^ theEdge1, Macad::Occt::TopoDS_Edge^ theEdge2, double theMaxSine, double theMaxWidth, double theMaxTolerance, Macad::Occt::TopoDS_Edge^ theEdge11, Macad::Occt::TopoDS_Edge^ theEdge12, Macad::Occt::TopoDS_Edge^ theEdge21, Macad::Occt::TopoDS_Edge^ theEdge22);
	bool StatusOrder(Macad::Occt::ShapeExtend_Status Status);
	bool StatusConnected(Macad::Occt::ShapeExtend_Status Status);
	bool StatusEdgeCurves(Macad::Occt::ShapeExtend_Status Status);
	bool StatusDegenerated(Macad::Occt::ShapeExtend_Status Status);
	bool StatusClosed(Macad::Occt::ShapeExtend_Status Status);
	bool StatusSmall(Macad::Occt::ShapeExtend_Status Status);
	bool StatusSelfIntersection(Macad::Occt::ShapeExtend_Status Status);
	bool StatusLacking(Macad::Occt::ShapeExtend_Status Status);
	bool StatusGaps3d(Macad::Occt::ShapeExtend_Status Status);
	bool StatusGaps2d(Macad::Occt::ShapeExtend_Status Status);
	bool StatusCurveGaps(Macad::Occt::ShapeExtend_Status Status);
	bool StatusLoop(Macad::Occt::ShapeExtend_Status Status);
	bool LastCheckStatus(Macad::Occt::ShapeExtend_Status Status);
	double MinDistance3d();
	double MinDistance2d();
	double MaxDistance3d();
	double MaxDistance2d();
}; // class ShapeAnalysis_Wire

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_WireOrder
//---------------------------------------------------------------------
public ref class ShapeAnalysis_WireOrder sealed : public BaseClass<::ShapeAnalysis_WireOrder>
{

#ifdef Include_ShapeAnalysis_WireOrder_h
public:
	Include_ShapeAnalysis_WireOrder_h
#endif

public:
	ShapeAnalysis_WireOrder(::ShapeAnalysis_WireOrder* nativeInstance)
		: BaseClass<::ShapeAnalysis_WireOrder>( nativeInstance, true )
	{}

	ShapeAnalysis_WireOrder(::ShapeAnalysis_WireOrder& nativeInstance)
		: BaseClass<::ShapeAnalysis_WireOrder>( &nativeInstance, false )
	{}

	property ::ShapeAnalysis_WireOrder* NativeInstance
	{
		::ShapeAnalysis_WireOrder* get()
		{
			return static_cast<::ShapeAnalysis_WireOrder*>(_NativeInstance);
		}
	}

public:
	ShapeAnalysis_WireOrder();
	ShapeAnalysis_WireOrder(bool mode3d, double tol);
	ShapeAnalysis_WireOrder(Macad::Occt::ShapeAnalysis_WireOrder^ parameter1);
	void SetMode(bool mode3d, double tol);
	double Tolerance();
	void Clear();
	void Add(Macad::Occt::XYZ start3d, Macad::Occt::XYZ end3d);
	void Add(Macad::Occt::XY start2d, Macad::Occt::XY end2d);
	int NbEdges();
	bool KeepLoopsMode();
	void Perform(bool closed);
	void Perform();
	bool IsDone();
	int Status();
	int Ordered(int n);
	void XYZ(int num, Macad::Occt::XYZ% start3d, Macad::Occt::XYZ% end3d);
	void XY(int num, Macad::Occt::XY% start2d, Macad::Occt::XY% end2d);
	double Gap(int num);
	double Gap();
	void SetChains(double gap);
	int NbChains();
	void Chain(int num, int% n1, int% n2);
	void SetCouples(double gap);
	int NbCouples();
	void Couple(int num, int% n1, int% n2);
}; // class ShapeAnalysis_WireOrder

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_WireVertex
//---------------------------------------------------------------------
public ref class ShapeAnalysis_WireVertex sealed : public BaseClass<::ShapeAnalysis_WireVertex>
{

#ifdef Include_ShapeAnalysis_WireVertex_h
public:
	Include_ShapeAnalysis_WireVertex_h
#endif

public:
	ShapeAnalysis_WireVertex(::ShapeAnalysis_WireVertex* nativeInstance)
		: BaseClass<::ShapeAnalysis_WireVertex>( nativeInstance, true )
	{}

	ShapeAnalysis_WireVertex(::ShapeAnalysis_WireVertex& nativeInstance)
		: BaseClass<::ShapeAnalysis_WireVertex>( &nativeInstance, false )
	{}

	property ::ShapeAnalysis_WireVertex* NativeInstance
	{
		::ShapeAnalysis_WireVertex* get()
		{
			return static_cast<::ShapeAnalysis_WireVertex*>(_NativeInstance);
		}
	}

public:
	ShapeAnalysis_WireVertex();
	ShapeAnalysis_WireVertex(Macad::Occt::ShapeAnalysis_WireVertex^ parameter1);
	void Init(Macad::Occt::TopoDS_Wire^ wire, double preci);
	void Init(Macad::Occt::ShapeExtend_WireData^ swbd, double preci);
	void Load(Macad::Occt::TopoDS_Wire^ wire);
	void Load(Macad::Occt::ShapeExtend_WireData^ sbwd);
	void SetPrecision(double preci);
	void Analyze();
	void SetSameVertex(int num);
	void SetSameCoords(int num);
	void SetClose(int num);
	void SetEnd(int num, Macad::Occt::XYZ pos, double ufol);
	void SetStart(int num, Macad::Occt::XYZ pos, double upre);
	void SetInters(int num, Macad::Occt::XYZ pos, double upre, double ufol);
	void SetDisjoined(int num);
	bool IsDone();
	double Precision();
	int NbEdges();
	Macad::Occt::ShapeExtend_WireData^ WireData();
	int Status(int num);
	Macad::Occt::XYZ Position(int num);
	double UPrevious(int num);
	double UFollowing(int num);
	int Data(int num, Macad::Occt::XYZ% pos, double% upre, double% ufol);
	int NextStatus(int stat, int num);
	int NextStatus(int stat);
	int NextCriter(int crit, int num);
	int NextCriter(int crit);
}; // class ShapeAnalysis_WireVertex

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_CheckSmallFace
//---------------------------------------------------------------------
public ref class ShapeAnalysis_CheckSmallFace sealed : public BaseClass<::ShapeAnalysis_CheckSmallFace>
{

#ifdef Include_ShapeAnalysis_CheckSmallFace_h
public:
	Include_ShapeAnalysis_CheckSmallFace_h
#endif

public:
	ShapeAnalysis_CheckSmallFace(::ShapeAnalysis_CheckSmallFace* nativeInstance)
		: BaseClass<::ShapeAnalysis_CheckSmallFace>( nativeInstance, true )
	{}

	ShapeAnalysis_CheckSmallFace(::ShapeAnalysis_CheckSmallFace& nativeInstance)
		: BaseClass<::ShapeAnalysis_CheckSmallFace>( &nativeInstance, false )
	{}

	property ::ShapeAnalysis_CheckSmallFace* NativeInstance
	{
		::ShapeAnalysis_CheckSmallFace* get()
		{
			return static_cast<::ShapeAnalysis_CheckSmallFace*>(_NativeInstance);
		}
	}

public:
	ShapeAnalysis_CheckSmallFace();
	ShapeAnalysis_CheckSmallFace(Macad::Occt::ShapeAnalysis_CheckSmallFace^ parameter1);
	int IsSpotFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% spot, double% spotol, double tol);
	int IsSpotFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% spot, double% spotol);
	bool CheckSpotFace(Macad::Occt::TopoDS_Face^ F, double tol);
	bool CheckSpotFace(Macad::Occt::TopoDS_Face^ F);
	bool IsStripSupport(Macad::Occt::TopoDS_Face^ F, double tol);
	bool IsStripSupport(Macad::Occt::TopoDS_Face^ F);
	bool CheckStripEdges(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double tol, double% dmax);
	bool FindStripEdges(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double tol, double% dmax);
	bool CheckSingleStrip(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double tol);
	bool CheckSingleStrip(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2);
	bool CheckStripFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double tol);
	bool CheckStripFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2);
	int CheckSplittingVertices(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ MapEdges, Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal^ MapParam, Macad::Occt::TopoDS_Compound^ theAllVert);
	bool CheckPin(Macad::Occt::TopoDS_Face^ F, int% whatrow, int% sence);
	bool CheckTwisted(Macad::Occt::TopoDS_Face^ F, double% paramu, double% paramv);
	bool CheckPinFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopTools_DataMapOfShapeShape^ mapEdges, double toler);
	bool CheckPinFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopTools_DataMapOfShapeShape^ mapEdges);
	bool CheckPinEdges(Macad::Occt::TopoDS_Edge^ theFirstEdge, Macad::Occt::TopoDS_Edge^ theSecondEdge, double coef1, double coef2, double toler);
	bool Status(Macad::Occt::ShapeExtend_Status status);
	void SetTolerance(double tol);
	double Tolerance();
	bool StatusSpot(Macad::Occt::ShapeExtend_Status status);
	bool StatusStrip(Macad::Occt::ShapeExtend_Status status);
	bool StatusPin(Macad::Occt::ShapeExtend_Status status);
	bool StatusTwisted(Macad::Occt::ShapeExtend_Status status);
	bool StatusSplitVert(Macad::Occt::ShapeExtend_Status status);
	bool StatusPinFace(Macad::Occt::ShapeExtend_Status status);
	bool StatusPinEdges(Macad::Occt::ShapeExtend_Status status);
}; // class ShapeAnalysis_CheckSmallFace

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Shell
//---------------------------------------------------------------------
public ref class ShapeAnalysis_Shell sealed : public BaseClass<::ShapeAnalysis_Shell>
{

#ifdef Include_ShapeAnalysis_Shell_h
public:
	Include_ShapeAnalysis_Shell_h
#endif

public:
	ShapeAnalysis_Shell(::ShapeAnalysis_Shell* nativeInstance)
		: BaseClass<::ShapeAnalysis_Shell>( nativeInstance, true )
	{}

	ShapeAnalysis_Shell(::ShapeAnalysis_Shell& nativeInstance)
		: BaseClass<::ShapeAnalysis_Shell>( &nativeInstance, false )
	{}

	property ::ShapeAnalysis_Shell* NativeInstance
	{
		::ShapeAnalysis_Shell* get()
		{
			return static_cast<::ShapeAnalysis_Shell*>(_NativeInstance);
		}
	}

public:
	ShapeAnalysis_Shell(Macad::Occt::ShapeAnalysis_Shell^ parameter1);
	ShapeAnalysis_Shell();
	void Clear();
	void LoadShells(Macad::Occt::TopoDS_Shape^ shape);
	bool CheckOrientedShells(Macad::Occt::TopoDS_Shape^ shape, bool alsofree, bool checkinternaledges);
	bool CheckOrientedShells(Macad::Occt::TopoDS_Shape^ shape, bool alsofree);
	bool CheckOrientedShells(Macad::Occt::TopoDS_Shape^ shape);
	bool IsLoaded(Macad::Occt::TopoDS_Shape^ shape);
	int NbLoaded();
	Macad::Occt::TopoDS_Shape^ Loaded(int num);
	bool HasBadEdges();
	Macad::Occt::TopoDS_Compound^ BadEdges();
	bool HasFreeEdges();
	Macad::Occt::TopoDS_Compound^ FreeEdges();
	bool HasConnectedEdges();
}; // class ShapeAnalysis_Shell

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_ShapeTolerance
//---------------------------------------------------------------------
public ref class ShapeAnalysis_ShapeTolerance sealed : public BaseClass<::ShapeAnalysis_ShapeTolerance>
{

#ifdef Include_ShapeAnalysis_ShapeTolerance_h
public:
	Include_ShapeAnalysis_ShapeTolerance_h
#endif

public:
	ShapeAnalysis_ShapeTolerance(::ShapeAnalysis_ShapeTolerance* nativeInstance)
		: BaseClass<::ShapeAnalysis_ShapeTolerance>( nativeInstance, true )
	{}

	ShapeAnalysis_ShapeTolerance(::ShapeAnalysis_ShapeTolerance& nativeInstance)
		: BaseClass<::ShapeAnalysis_ShapeTolerance>( &nativeInstance, false )
	{}

	property ::ShapeAnalysis_ShapeTolerance* NativeInstance
	{
		::ShapeAnalysis_ShapeTolerance* get()
		{
			return static_cast<::ShapeAnalysis_ShapeTolerance*>(_NativeInstance);
		}
	}

public:
	ShapeAnalysis_ShapeTolerance();
	ShapeAnalysis_ShapeTolerance(Macad::Occt::ShapeAnalysis_ShapeTolerance^ parameter1);
	double Tolerance(Macad::Occt::TopoDS_Shape^ shape, int mode, Macad::Occt::TopAbs_ShapeEnum type);
	double Tolerance(Macad::Occt::TopoDS_Shape^ shape, int mode);
	Macad::Occt::TopTools_HSequenceOfShape^ OverTolerance(Macad::Occt::TopoDS_Shape^ shape, double value, Macad::Occt::TopAbs_ShapeEnum type);
	Macad::Occt::TopTools_HSequenceOfShape^ OverTolerance(Macad::Occt::TopoDS_Shape^ shape, double value);
	Macad::Occt::TopTools_HSequenceOfShape^ InTolerance(Macad::Occt::TopoDS_Shape^ shape, double valmin, double valmax, Macad::Occt::TopAbs_ShapeEnum type);
	Macad::Occt::TopTools_HSequenceOfShape^ InTolerance(Macad::Occt::TopoDS_Shape^ shape, double valmin, double valmax);
	void InitTolerance();
	void AddTolerance(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopAbs_ShapeEnum type);
	void AddTolerance(Macad::Occt::TopoDS_Shape^ shape);
	double GlobalTolerance(int mode);
}; // class ShapeAnalysis_ShapeTolerance

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_ShapeContents
//---------------------------------------------------------------------
public ref class ShapeAnalysis_ShapeContents sealed : public BaseClass<::ShapeAnalysis_ShapeContents>
{

#ifdef Include_ShapeAnalysis_ShapeContents_h
public:
	Include_ShapeAnalysis_ShapeContents_h
#endif

public:
	ShapeAnalysis_ShapeContents(::ShapeAnalysis_ShapeContents* nativeInstance)
		: BaseClass<::ShapeAnalysis_ShapeContents>( nativeInstance, true )
	{}

	ShapeAnalysis_ShapeContents(::ShapeAnalysis_ShapeContents& nativeInstance)
		: BaseClass<::ShapeAnalysis_ShapeContents>( &nativeInstance, false )
	{}

	property ::ShapeAnalysis_ShapeContents* NativeInstance
	{
		::ShapeAnalysis_ShapeContents* get()
		{
			return static_cast<::ShapeAnalysis_ShapeContents*>(_NativeInstance);
		}
	}

public:
	ShapeAnalysis_ShapeContents();
	ShapeAnalysis_ShapeContents(Macad::Occt::ShapeAnalysis_ShapeContents^ parameter1);
	void Clear();
	void ClearFlags();
	void Perform(Macad::Occt::TopoDS_Shape^ shape);
	bool ModifyBigSplineMode();
	bool ModifyIndirectMode();
	bool ModifyOffestSurfaceMode();
	bool ModifyTrimmed3dMode();
	bool ModifyOffsetCurveMode();
	bool ModifyTrimmed2dMode();
	int NbSolids();
	int NbShells();
	int NbFaces();
	int NbWires();
	int NbEdges();
	int NbVertices();
	int NbSolidsWithVoids();
	int NbBigSplines();
	int NbC0Surfaces();
	int NbC0Curves();
	int NbOffsetSurf();
	int NbIndirectSurf();
	int NbOffsetCurves();
	int NbTrimmedCurve2d();
	int NbTrimmedCurve3d();
	int NbBSplibeSurf();
	int NbBezierSurf();
	int NbTrimSurf();
	int NbWireWitnSeam();
	int NbWireWithSevSeams();
	int NbFaceWithSevWires();
	int NbNoPCurve();
	int NbFreeFaces();
	int NbFreeWires();
	int NbFreeEdges();
	int NbSharedSolids();
	int NbSharedShells();
	int NbSharedFaces();
	int NbSharedWires();
	int NbSharedFreeWires();
	int NbSharedFreeEdges();
	int NbSharedEdges();
	int NbSharedVertices();
	Macad::Occt::TopTools_HSequenceOfShape^ BigSplineSec();
	Macad::Occt::TopTools_HSequenceOfShape^ IndirectSec();
	Macad::Occt::TopTools_HSequenceOfShape^ OffsetSurfaceSec();
	Macad::Occt::TopTools_HSequenceOfShape^ Trimmed3dSec();
	Macad::Occt::TopTools_HSequenceOfShape^ OffsetCurveSec();
	Macad::Occt::TopTools_HSequenceOfShape^ Trimmed2dSec();
}; // class ShapeAnalysis_ShapeContents

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_FreeBounds
//---------------------------------------------------------------------
public ref class ShapeAnalysis_FreeBounds sealed : public BaseClass<::ShapeAnalysis_FreeBounds>
{

#ifdef Include_ShapeAnalysis_FreeBounds_h
public:
	Include_ShapeAnalysis_FreeBounds_h
#endif

public:
	ShapeAnalysis_FreeBounds(::ShapeAnalysis_FreeBounds* nativeInstance)
		: BaseClass<::ShapeAnalysis_FreeBounds>( nativeInstance, true )
	{}

	ShapeAnalysis_FreeBounds(::ShapeAnalysis_FreeBounds& nativeInstance)
		: BaseClass<::ShapeAnalysis_FreeBounds>( &nativeInstance, false )
	{}

	property ::ShapeAnalysis_FreeBounds* NativeInstance
	{
		::ShapeAnalysis_FreeBounds* get()
		{
			return static_cast<::ShapeAnalysis_FreeBounds*>(_NativeInstance);
		}
	}

public:
	ShapeAnalysis_FreeBounds();
	ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, double toler, bool splitclosed, bool splitopen);
	ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, double toler, bool splitclosed);
	ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, double toler);
	ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed, bool splitopen, bool checkinternaledges);
	ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed, bool splitopen);
	ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed);
	ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape);
	ShapeAnalysis_FreeBounds(Macad::Occt::ShapeAnalysis_FreeBounds^ parameter1);
	Macad::Occt::TopoDS_Compound^ GetClosedWires();
	Macad::Occt::TopoDS_Compound^ GetOpenWires();
	static void ConnectEdgesToWires(Macad::Occt::TopTools_HSequenceOfShape^ edges, double toler, bool shared, Macad::Occt::TopTools_HSequenceOfShape^ wires);
	static void ConnectWiresToWires(Macad::Occt::TopTools_HSequenceOfShape^ iwires, double toler, bool shared, Macad::Occt::TopTools_HSequenceOfShape^ owires);
	static void ConnectWiresToWires(Macad::Occt::TopTools_HSequenceOfShape^ iwires, double toler, bool shared, Macad::Occt::TopTools_HSequenceOfShape^ owires, Macad::Occt::TopTools_DataMapOfShapeShape^ vertices);
	static void SplitWires(Macad::Occt::TopTools_HSequenceOfShape^ wires, double toler, bool shared, Macad::Occt::TopTools_HSequenceOfShape^ closed, Macad::Occt::TopTools_HSequenceOfShape^ open);
	static void DispatchWires(Macad::Occt::TopTools_HSequenceOfShape^ wires, Macad::Occt::TopoDS_Compound^ closed, Macad::Occt::TopoDS_Compound^ open);
}; // class ShapeAnalysis_FreeBounds

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_FreeBoundData
//---------------------------------------------------------------------
public ref class ShapeAnalysis_FreeBoundData sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeAnalysis_FreeBoundData_h
public:
	Include_ShapeAnalysis_FreeBoundData_h
#endif

public:
	ShapeAnalysis_FreeBoundData(::ShapeAnalysis_FreeBoundData* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeAnalysis_FreeBoundData(::ShapeAnalysis_FreeBoundData& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeAnalysis_FreeBoundData* NativeInstance
	{
		::ShapeAnalysis_FreeBoundData* get()
		{
			return static_cast<::ShapeAnalysis_FreeBoundData*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeAnalysis_FreeBoundData^ CreateDowncasted(::ShapeAnalysis_FreeBoundData* instance);

public:
	ShapeAnalysis_FreeBoundData();
	ShapeAnalysis_FreeBoundData(Macad::Occt::TopoDS_Wire^ freebound);
	ShapeAnalysis_FreeBoundData(Macad::Occt::ShapeAnalysis_FreeBoundData^ parameter1);
	void Clear();
	void SetFreeBound(Macad::Occt::TopoDS_Wire^ freebound);
	void SetArea(double area);
	void SetPerimeter(double perimeter);
	void SetRatio(double ratio);
	void SetWidth(double width);
	void AddNotch(Macad::Occt::TopoDS_Wire^ notch, double width);
	Macad::Occt::TopoDS_Wire^ FreeBound();
	double Area();
	double Perimeter();
	double Ratio();
	double Width();
	int NbNotches();
	Macad::Occt::TopTools_HSequenceOfShape^ Notches();
	Macad::Occt::TopoDS_Wire^ Notch(int index);
	double NotchWidth(int index);
	double NotchWidth(Macad::Occt::TopoDS_Wire^ notch);
}; // class ShapeAnalysis_FreeBoundData

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_FreeBoundsProperties
//---------------------------------------------------------------------
public ref class ShapeAnalysis_FreeBoundsProperties sealed : public BaseClass<::ShapeAnalysis_FreeBoundsProperties>
{

#ifdef Include_ShapeAnalysis_FreeBoundsProperties_h
public:
	Include_ShapeAnalysis_FreeBoundsProperties_h
#endif

public:
	ShapeAnalysis_FreeBoundsProperties(::ShapeAnalysis_FreeBoundsProperties* nativeInstance)
		: BaseClass<::ShapeAnalysis_FreeBoundsProperties>( nativeInstance, true )
	{}

	ShapeAnalysis_FreeBoundsProperties(::ShapeAnalysis_FreeBoundsProperties& nativeInstance)
		: BaseClass<::ShapeAnalysis_FreeBoundsProperties>( &nativeInstance, false )
	{}

	property ::ShapeAnalysis_FreeBoundsProperties* NativeInstance
	{
		::ShapeAnalysis_FreeBoundsProperties* get()
		{
			return static_cast<::ShapeAnalysis_FreeBoundsProperties*>(_NativeInstance);
		}
	}

public:
	ShapeAnalysis_FreeBoundsProperties();
	ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape, double tolerance, bool splitclosed, bool splitopen);
	ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape, double tolerance, bool splitclosed);
	ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape, double tolerance);
	ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed, bool splitopen);
	ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed);
	ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape);
	ShapeAnalysis_FreeBoundsProperties(Macad::Occt::ShapeAnalysis_FreeBoundsProperties^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ shape, double tolerance, bool splitclosed, bool splitopen);
	void Init(Macad::Occt::TopoDS_Shape^ shape, double tolerance, bool splitclosed);
	void Init(Macad::Occt::TopoDS_Shape^ shape, double tolerance);
	void Init(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed, bool splitopen);
	void Init(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed);
	void Init(Macad::Occt::TopoDS_Shape^ shape);
	bool Perform();
	bool IsLoaded();
	Macad::Occt::TopoDS_Shape^ Shape();
	double Tolerance();
	int NbFreeBounds();
	int NbClosedFreeBounds();
	int NbOpenFreeBounds();
	Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds^ ClosedFreeBounds();
	Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds^ OpenFreeBounds();
	Macad::Occt::ShapeAnalysis_FreeBoundData^ ClosedFreeBound(int index);
	Macad::Occt::ShapeAnalysis_FreeBoundData^ OpenFreeBound(int index);
	bool DispatchBounds();
	bool CheckContours(double prec);
	bool CheckContours();
	bool CheckNotches(double prec);
	bool CheckNotches();
	bool CheckNotches(Macad::Occt::ShapeAnalysis_FreeBoundData^ fbData, double prec);
	bool CheckNotches(Macad::Occt::ShapeAnalysis_FreeBoundData^ fbData);
	bool CheckNotches(Macad::Occt::TopoDS_Wire^ freebound, int num, Macad::Occt::TopoDS_Wire^ notch, double% distMax, double prec);
	bool CheckNotches(Macad::Occt::TopoDS_Wire^ freebound, int num, Macad::Occt::TopoDS_Wire^ notch, double% distMax);
	bool FillProperties(Macad::Occt::ShapeAnalysis_FreeBoundData^ fbData, double prec);
	bool FillProperties(Macad::Occt::ShapeAnalysis_FreeBoundData^ fbData);
}; // class ShapeAnalysis_FreeBoundsProperties

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_TransferParameters
//---------------------------------------------------------------------
public ref class ShapeAnalysis_TransferParameters : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeAnalysis_TransferParameters_h
public:
	Include_ShapeAnalysis_TransferParameters_h
#endif

protected:
	ShapeAnalysis_TransferParameters(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	ShapeAnalysis_TransferParameters(::ShapeAnalysis_TransferParameters* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeAnalysis_TransferParameters(::ShapeAnalysis_TransferParameters& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeAnalysis_TransferParameters* NativeInstance
	{
		::ShapeAnalysis_TransferParameters* get()
		{
			return static_cast<::ShapeAnalysis_TransferParameters*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeAnalysis_TransferParameters^ CreateDowncasted(::ShapeAnalysis_TransferParameters* instance);

public:
	ShapeAnalysis_TransferParameters();
	ShapeAnalysis_TransferParameters(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
	ShapeAnalysis_TransferParameters(Macad::Occt::ShapeAnalysis_TransferParameters^ parameter1);
	void Init(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
	void SetMaxTolerance(double maxtol);
	Macad::Occt::TColStd_HSequenceOfReal^ Perform(Macad::Occt::TColStd_HSequenceOfReal^ Params, bool To2d);
	double Perform(double Param, bool To2d);
	void TransferRange(Macad::Occt::TopoDS_Edge^ newEdge, double prevPar, double currPar, bool To2d);
	bool IsSameRange();
}; // class ShapeAnalysis_TransferParameters

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_TransferParametersProj
//---------------------------------------------------------------------
public ref class ShapeAnalysis_TransferParametersProj sealed : public Macad::Occt::ShapeAnalysis_TransferParameters
{

#ifdef Include_ShapeAnalysis_TransferParametersProj_h
public:
	Include_ShapeAnalysis_TransferParametersProj_h
#endif

public:
	ShapeAnalysis_TransferParametersProj(::ShapeAnalysis_TransferParametersProj* nativeInstance)
		: Macad::Occt::ShapeAnalysis_TransferParameters( nativeInstance )
	{}

	ShapeAnalysis_TransferParametersProj(::ShapeAnalysis_TransferParametersProj& nativeInstance)
		: Macad::Occt::ShapeAnalysis_TransferParameters( nativeInstance )
	{}

	property ::ShapeAnalysis_TransferParametersProj* NativeInstance
	{
		::ShapeAnalysis_TransferParametersProj* get()
		{
			return static_cast<::ShapeAnalysis_TransferParametersProj*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeAnalysis_TransferParametersProj^ CreateDowncasted(::ShapeAnalysis_TransferParametersProj* instance);

public:
	ShapeAnalysis_TransferParametersProj();
	ShapeAnalysis_TransferParametersProj(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
	ShapeAnalysis_TransferParametersProj(Macad::Occt::ShapeAnalysis_TransferParametersProj^ parameter1);
	void Init(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
	Macad::Occt::TColStd_HSequenceOfReal^ Perform(Macad::Occt::TColStd_HSequenceOfReal^ Papams, bool To2d);
	double Perform(double Param, bool To2d);
	bool ForceProjection();
	void TransferRange(Macad::Occt::TopoDS_Edge^ newEdge, double prevPar, double currPar, bool Is2d);
	bool IsSameRange();
	static Macad::Occt::TopoDS_Vertex^ CopyNMVertex(Macad::Occt::TopoDS_Vertex^ theVert, Macad::Occt::TopoDS_Edge^ toedge, Macad::Occt::TopoDS_Edge^ fromedge);
	static Macad::Occt::TopoDS_Vertex^ CopyNMVertex(Macad::Occt::TopoDS_Vertex^ theVert, Macad::Occt::TopoDS_Face^ toFace, Macad::Occt::TopoDS_Face^ fromFace);
}; // class ShapeAnalysis_TransferParametersProj

//---------------------------------------------------------------------
//  Class  ShapeAnalysis
//---------------------------------------------------------------------
public ref class ShapeAnalysis sealed : public BaseClass<::ShapeAnalysis>
{

#ifdef Include_ShapeAnalysis_h
public:
	Include_ShapeAnalysis_h
#endif

public:
	ShapeAnalysis(::ShapeAnalysis* nativeInstance)
		: BaseClass<::ShapeAnalysis>( nativeInstance, true )
	{}

	ShapeAnalysis(::ShapeAnalysis& nativeInstance)
		: BaseClass<::ShapeAnalysis>( &nativeInstance, false )
	{}

	property ::ShapeAnalysis* NativeInstance
	{
		::ShapeAnalysis* get()
		{
			return static_cast<::ShapeAnalysis*>(_NativeInstance);
		}
	}

public:
	ShapeAnalysis();
	ShapeAnalysis(Macad::Occt::ShapeAnalysis^ parameter1);
	static Macad::Occt::TopoDS_Wire^ OuterWire(Macad::Occt::TopoDS_Face^ face);
	static double TotCross2D(Macad::Occt::ShapeExtend_WireData^ sewd, Macad::Occt::TopoDS_Face^ aFace);
	static double ContourArea(Macad::Occt::TopoDS_Wire^ theWire);
	static bool IsOuterBound(Macad::Occt::TopoDS_Face^ face);
	static double AdjustByPeriod(double Val, double ToVal, double Period);
	static double AdjustToPeriod(double Val, double ValMin, double ValMax);
	static void FindBounds(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	static void GetFaceUVBounds(Macad::Occt::TopoDS_Face^ F, double% Umin, double% Umax, double% Vmin, double% Vmax);
}; // class ShapeAnalysis

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_HSequenceOfFreeBounds
//---------------------------------------------------------------------
public ref class ShapeAnalysis_HSequenceOfFreeBounds sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeAnalysis_HSequenceOfFreeBounds_h
public:
	Include_ShapeAnalysis_HSequenceOfFreeBounds_h
#endif

public:
	ShapeAnalysis_HSequenceOfFreeBounds(::ShapeAnalysis_HSequenceOfFreeBounds* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeAnalysis_HSequenceOfFreeBounds(::ShapeAnalysis_HSequenceOfFreeBounds& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeAnalysis_HSequenceOfFreeBounds* NativeInstance
	{
		::ShapeAnalysis_HSequenceOfFreeBounds* get()
		{
			return static_cast<::ShapeAnalysis_HSequenceOfFreeBounds*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds^ CreateDowncasted(::ShapeAnalysis_HSequenceOfFreeBounds* instance);

public:
	ShapeAnalysis_HSequenceOfFreeBounds();
	ShapeAnalysis_HSequenceOfFreeBounds(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theOther);
	ShapeAnalysis_HSequenceOfFreeBounds(Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds^ parameter1);
	Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ Sequence();
	void Append(Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem);
	void Append(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theSequence);
	Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ ChangeSequence();
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	/* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<ShapeAnalysis_FreeBoundData> > Assign(NCollection_Sequence<opencascade::handle<ShapeAnalysis_FreeBoundData> > theOther, ) */
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<opencascade::handle<ShapeAnalysis_FreeBoundData> > theSeq, ) */
	void Prepend(Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<opencascade::handle<ShapeAnalysis_FreeBoundData> > theSeq, ) */
	void InsertBefore(int theIndex, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<ShapeAnalysis_FreeBoundData> > theSeq, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, ShapeAnalysis_FreeBoundData theItem, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<ShapeAnalysis_FreeBoundData> > theSeq, ) */
	void InsertAfter(int theIndex, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem);
	/* Method skipped due to unknown mapping: void Split(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<ShapeAnalysis_FreeBoundData> > theSeq, ) */
	Macad::Occt::ShapeAnalysis_FreeBoundData^ First();
	Macad::Occt::ShapeAnalysis_FreeBoundData^ ChangeFirst();
	Macad::Occt::ShapeAnalysis_FreeBoundData^ Last();
	Macad::Occt::ShapeAnalysis_FreeBoundData^ ChangeLast();
	Macad::Occt::ShapeAnalysis_FreeBoundData^ Value(int theIndex);
	Macad::Occt::ShapeAnalysis_FreeBoundData^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem);
}; // class ShapeAnalysis_HSequenceOfFreeBounds

}; // namespace Occt
}; // namespace Macad
