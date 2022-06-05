// Generated wrapper code for package ShapeCustom

#pragma once

#include "BRepTools.h"
#include "ShapeCustom.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ShapeCustom_RestrictionParameters
//---------------------------------------------------------------------
/// <summary>
/// This class is axuluary tool which contains parameters for
/// BSplineRestriction class.
/// </summary>
public ref class ShapeCustom_RestrictionParameters sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeCustom_RestrictionParameters_h
public:
	Include_ShapeCustom_RestrictionParameters_h
#endif

public:
	ShapeCustom_RestrictionParameters(::ShapeCustom_RestrictionParameters* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeCustom_RestrictionParameters(::ShapeCustom_RestrictionParameters& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeCustom_RestrictionParameters* NativeInstance
	{
		::ShapeCustom_RestrictionParameters* get()
		{
			return static_cast<::ShapeCustom_RestrictionParameters*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeCustom_RestrictionParameters^ CreateDowncasted(::ShapeCustom_RestrictionParameters* instance);

public:
	/// <summary>
	/// Sets default parameters.
	/// </summary>
	ShapeCustom_RestrictionParameters();
	ShapeCustom_RestrictionParameters(Macad::Occt::ShapeCustom_RestrictionParameters^ parameter1);
	/// <summary>
	/// Returns (modifiable) maximal degree of approximation.
	/// </summary>
	int GMaxDegree();
	/// <summary>
	/// Returns (modifiable) maximal number of spans of
	/// approximation.
	/// </summary>
	int GMaxSeg();
	/// <summary>
	/// Sets flag for define if Plane converted to BSpline surface.
	/// </summary>
	bool ConvertPlane();
	/// <summary>
	/// Sets flag for define if Bezier surface converted to BSpline
	/// surface.
	/// </summary>
	bool ConvertBezierSurf();
	/// <summary>
	/// Sets flag for define if surface of Revolution converted to
	/// BSpline surface.
	/// </summary>
	bool ConvertRevolutionSurf();
	/// <summary>
	/// Sets flag for define if surface of LinearExtrusion converted
	/// to BSpline surface.
	/// </summary>
	bool ConvertExtrusionSurf();
	/// <summary>
	/// Sets flag for define if Offset surface converted to BSpline
	/// surface.
	/// </summary>
	bool ConvertOffsetSurf();
	/// <summary>
	/// Sets flag for define if cylindrical surface converted to BSpline
	/// surface.
	/// </summary>
	bool ConvertCylindricalSurf();
	/// <summary>
	/// Sets flag for define if conical surface converted to BSpline
	/// surface.
	/// </summary>
	bool ConvertConicalSurf();
	/// <summary>
	/// Sets flag for define if toroidal surface converted to BSpline
	/// surface.
	/// </summary>
	bool ConvertToroidalSurf();
	/// <summary>
	/// Sets flag for define if spherical surface converted to BSpline
	/// surface.
	/// </summary>
	bool ConvertSphericalSurf();
	/// <summary>
	/// Sets Segment mode for surface. If Segment is True surface is
	/// approximated in the bondaries of face lying on this surface.
	/// </summary>
	bool SegmentSurfaceMode();
	/// <summary>
	/// Sets flag for define if 3d curve converted to BSpline curve.
	/// </summary>
	bool ConvertCurve3d();
	/// <summary>
	/// Sets flag for define if Offset curve3d converted to BSpline
	/// surface.
	/// </summary>
	bool ConvertOffsetCurv3d();
	/// <summary>
	/// Returns (modifiable) flag for define if 2d curve converted
	/// to BSpline curve.
	/// </summary>
	bool ConvertCurve2d();
	/// <summary>
	/// Returns (modifiable) flag for define if Offset curve2d
	/// converted to BSpline surface.
	/// </summary>
	bool ConvertOffsetCurv2d();
}; // class ShapeCustom_RestrictionParameters

//---------------------------------------------------------------------
//  Class  ShapeCustom_Surface
//---------------------------------------------------------------------
/// <summary>
/// Converts a surface to the analytical form with given
/// precision. Conversion is done only the surface is bspline
/// of bezier and this can be approximated by some analytical
/// surface with that precision.
/// </summary>
public ref class ShapeCustom_Surface sealed : public BaseClass<::ShapeCustom_Surface>
{

#ifdef Include_ShapeCustom_Surface_h
public:
	Include_ShapeCustom_Surface_h
#endif

public:
	ShapeCustom_Surface(::ShapeCustom_Surface* nativeInstance)
		: BaseClass<::ShapeCustom_Surface>( nativeInstance, true )
	{}

	ShapeCustom_Surface(::ShapeCustom_Surface& nativeInstance)
		: BaseClass<::ShapeCustom_Surface>( &nativeInstance, false )
	{}

	property ::ShapeCustom_Surface* NativeInstance
	{
		::ShapeCustom_Surface* get()
		{
			return static_cast<::ShapeCustom_Surface*>(_NativeInstance);
		}
	}

public:
	ShapeCustom_Surface();
	ShapeCustom_Surface(Macad::Occt::Geom_Surface^ S);
	ShapeCustom_Surface(Macad::Occt::ShapeCustom_Surface^ parameter1);
	void Init(Macad::Occt::Geom_Surface^ S);
	/// <summary>
	/// Returns maximal deviation of converted surface from the original
	/// one computed by last call to ConvertToAnalytical
	/// </summary>
	double Gap();
	/// <summary>
	/// Tries to convert the Surface to an Analytic form
	/// Returns the result
	/// Works only if the Surface is BSpline or Bezier.
	/// Else, or in case of failure, returns a Null Handle
	/// 
	/// If <substitute> is True, the new surface replaces the actual
	/// one in <me>
	/// 
	/// It works by analysing the case which can apply, creating the
	/// corresponding analytic surface, then checking coincidence
	/// Warning: Parameter laws are not kept, hence PCurves should be redone
	/// </summary>
	Macad::Occt::Geom_Surface^ ConvertToAnalytical(double tol, bool substitute);
	/// <summary>
	/// Tries to convert the Surface to the Periodic form
	/// Returns the resulting surface
	/// Works only if the Surface is BSpline and is closed with
	/// Precision::Confusion()
	/// Else, or in case of failure, returns a Null Handle
	/// </summary>
	Macad::Occt::Geom_Surface^ ConvertToPeriodic(bool substitute, double preci);
	/// <summary>
	/// Tries to convert the Surface to the Periodic form
	/// Returns the resulting surface
	/// Works only if the Surface is BSpline and is closed with
	/// Precision::Confusion()
	/// Else, or in case of failure, returns a Null Handle
	/// </summary>
	Macad::Occt::Geom_Surface^ ConvertToPeriodic(bool substitute);
}; // class ShapeCustom_Surface

//---------------------------------------------------------------------
//  Class  ShapeCustom_Curve
//---------------------------------------------------------------------
/// <summary>
/// Converts BSpline curve to periodic
/// </summary>
public ref class ShapeCustom_Curve sealed : public BaseClass<::ShapeCustom_Curve>
{

#ifdef Include_ShapeCustom_Curve_h
public:
	Include_ShapeCustom_Curve_h
#endif

public:
	ShapeCustom_Curve(::ShapeCustom_Curve* nativeInstance)
		: BaseClass<::ShapeCustom_Curve>( nativeInstance, true )
	{}

	ShapeCustom_Curve(::ShapeCustom_Curve& nativeInstance)
		: BaseClass<::ShapeCustom_Curve>( &nativeInstance, false )
	{}

	property ::ShapeCustom_Curve* NativeInstance
	{
		::ShapeCustom_Curve* get()
		{
			return static_cast<::ShapeCustom_Curve*>(_NativeInstance);
		}
	}

public:
	ShapeCustom_Curve();
	ShapeCustom_Curve(Macad::Occt::Geom_Curve^ C);
	ShapeCustom_Curve(Macad::Occt::ShapeCustom_Curve^ parameter1);
	void Init(Macad::Occt::Geom_Curve^ C);
	/// <summary>
	/// Tries to convert the Curve to the Periodic form
	/// Returns the resulting curve
	/// Works only if the Curve is BSpline and is closed with
	/// Precision::Confusion()
	/// Else, or in case of failure, returns a Null Handle
	/// </summary>
	Macad::Occt::Geom_Curve^ ConvertToPeriodic(bool substitute, double preci);
	/// <summary>
	/// Tries to convert the Curve to the Periodic form
	/// Returns the resulting curve
	/// Works only if the Curve is BSpline and is closed with
	/// Precision::Confusion()
	/// Else, or in case of failure, returns a Null Handle
	/// </summary>
	Macad::Occt::Geom_Curve^ ConvertToPeriodic(bool substitute);
}; // class ShapeCustom_Curve

//---------------------------------------------------------------------
//  Class  ShapeCustom_Curve2d
//---------------------------------------------------------------------
/// <summary>
/// Converts curve2d to analytical form with given
/// precision or simpify curve2d.
/// </summary>
public ref class ShapeCustom_Curve2d sealed : public BaseClass<::ShapeCustom_Curve2d>
{

#ifdef Include_ShapeCustom_Curve2d_h
public:
	Include_ShapeCustom_Curve2d_h
#endif

public:
	ShapeCustom_Curve2d(::ShapeCustom_Curve2d* nativeInstance)
		: BaseClass<::ShapeCustom_Curve2d>( nativeInstance, true )
	{}

	ShapeCustom_Curve2d(::ShapeCustom_Curve2d& nativeInstance)
		: BaseClass<::ShapeCustom_Curve2d>( &nativeInstance, false )
	{}

	property ::ShapeCustom_Curve2d* NativeInstance
	{
		::ShapeCustom_Curve2d* get()
		{
			return static_cast<::ShapeCustom_Curve2d*>(_NativeInstance);
		}
	}

public:
	ShapeCustom_Curve2d();
	ShapeCustom_Curve2d(Macad::Occt::ShapeCustom_Curve2d^ parameter1);
	/// <summary>
	/// Check if poleses is in the plane with given precision
	/// Returns false if no.
	/// </summary>
	static bool IsLinear(Macad::Occt::TColgp_Array1OfPnt2d^ thePoles, double theTolerance, double% theDeviation);
	/// <summary>
	/// Try to convert BSpline2d or Bezier2d to line 2d
	/// only if it is linear. Recalculate first and last parameters.
	/// Returns line2d or null curve2d.
	/// </summary>
	static Macad::Occt::Geom2d_Line^ ConvertToLine2d(Macad::Occt::Geom2d_Curve^ theCurve, double theFirstIn, double theLastIn, double theTolerance, double% theNewFirst, double% theNewLast, double% theDeviation);
	/// <summary>
	/// Try to remove knots from bspline where local derivatives are the same.
	/// Remove knots with given precision.
	/// Returns false if Bsplien was not modified
	/// </summary>
	static bool SimplifyBSpline2d(Macad::Occt::Geom2d_BSplineCurve^ theBSpline2d, double theTolerance);
}; // class ShapeCustom_Curve2d

//---------------------------------------------------------------------
//  Class  ShapeCustom_Modification
//---------------------------------------------------------------------
/// <summary>
/// A base class of Modification's from ShapeCustom.
/// Implements message sending mechanism.
/// </summary>
public ref class ShapeCustom_Modification : public Macad::Occt::BRepTools_Modification
{

#ifdef Include_ShapeCustom_Modification_h
public:
	Include_ShapeCustom_Modification_h
#endif

protected:
	ShapeCustom_Modification(InitMode init)
		: Macad::Occt::BRepTools_Modification( init )
	{}

public:
	ShapeCustom_Modification(::ShapeCustom_Modification* nativeInstance)
		: Macad::Occt::BRepTools_Modification( nativeInstance )
	{}

	ShapeCustom_Modification(::ShapeCustom_Modification& nativeInstance)
		: Macad::Occt::BRepTools_Modification( nativeInstance )
	{}

	property ::ShapeCustom_Modification* NativeInstance
	{
		::ShapeCustom_Modification* get()
		{
			return static_cast<::ShapeCustom_Modification*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeCustom_Modification^ CreateDowncasted(::ShapeCustom_Modification* instance);

public:
	ShapeCustom_Modification(Macad::Occt::ShapeCustom_Modification^ parameter1);
	ShapeCustom_Modification();
	/// <summary>
	/// Sets message registrator
	/// </summary>
	void SetMsgRegistrator(Macad::Occt::ShapeExtend_BasicMsgRegistrator^ msgreg);
	/// <summary>
	/// Returns message registrator
	/// </summary>
	Macad::Occt::ShapeExtend_BasicMsgRegistrator^ MsgRegistrator();
	/// <summary>
	/// Sends a message to be attached to the shape.
	/// Calls corresponding message of message registrator.
	/// </summary>
	void SendMsg(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity);
	/// <summary>
	/// Sends a message to be attached to the shape.
	/// Calls corresponding message of message registrator.
	/// </summary>
	void SendMsg(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message);
}; // class ShapeCustom_Modification

//---------------------------------------------------------------------
//  Class  ShapeCustom_DirectModification
//---------------------------------------------------------------------
/// <summary>
/// implements a modification for the BRepTools
/// Modifier algorithm. Will redress indirect
/// surfaces.
/// </summary>
public ref class ShapeCustom_DirectModification sealed : public Macad::Occt::ShapeCustom_Modification
{

#ifdef Include_ShapeCustom_DirectModification_h
public:
	Include_ShapeCustom_DirectModification_h
#endif

public:
	ShapeCustom_DirectModification(::ShapeCustom_DirectModification* nativeInstance)
		: Macad::Occt::ShapeCustom_Modification( nativeInstance )
	{}

	ShapeCustom_DirectModification(::ShapeCustom_DirectModification& nativeInstance)
		: Macad::Occt::ShapeCustom_Modification( nativeInstance )
	{}

	property ::ShapeCustom_DirectModification* NativeInstance
	{
		::ShapeCustom_DirectModification* get()
		{
			return static_cast<::ShapeCustom_DirectModification*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeCustom_DirectModification^ CreateDowncasted(::ShapeCustom_DirectModification* instance);

public:
	ShapeCustom_DirectModification();
	ShapeCustom_DirectModification(Macad::Occt::ShapeCustom_DirectModification^ parameter1);
	/// <summary>
	/// Returns Standard_True if the face <F> has  been
	/// modified. In this case, <S> is the new geometric
	/// support of the face, <L> the new location,  <Tol>
	/// the new tolerance.  Otherwise, returns
	/// Standard_False, and <S>, <L>, <Tol> are  not
	/// significant.
	/// </summary>
	bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
	/// <summary>
	/// Returns Standard_True  if  the edge  <E> has  been
	/// modified.  In this case,  <C> is the new geometric
	/// support of the  edge, <L> the  new location, <Tol>
	/// the         new    tolerance.   Otherwise, returns
	/// Standard_False,    and  <C>,  <L>,   <Tol> are not
	/// significant.
	/// </summary>
	bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
	/// <summary>
	/// Returns  Standard_True if the  vertex <V> has been
	/// modified.  In this  case, <P> is the new geometric
	/// support of the vertex,   <Tol> the new  tolerance.
	/// Otherwise, returns Standard_False, and <P>,  <Tol>
	/// are not significant.
	/// </summary>
	bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
	/// <summary>
	/// Returns Standard_True if  the edge  <E> has a  new
	/// curve on surface on the face <F>.In this case, <C>
	/// is the new geometric support of  the edge, <L> the
	/// new location, <Tol> the new tolerance.
	/// 
	/// Otherwise, returns  Standard_False, and <C>,  <L>,
	/// <Tol> are not significant.
	/// 
	/// <NewE> is the new  edge created from  <E>.  <NewF>
	/// is the new face created from <F>. They may be useful.
	/// </summary>
	bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
	/// <summary>
	/// Returns Standard_True if the Vertex  <V> has a new
	/// parameter on the  edge <E>. In  this case,  <P> is
	/// the parameter,    <Tol>  the     new    tolerance.
	/// Otherwise, returns Standard_False, and <P>,  <Tol>
	/// are not significant.
	/// </summary>
	bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
	/// <summary>
	/// Returns the  continuity of  <NewE> between <NewF1>
	/// and <NewF2>.
	/// 
	/// <NewE> is the new  edge created from <E>.  <NewF1>
	/// (resp. <NewF2>) is the new  face created from <F1>
	/// (resp. <F2>).
	/// </summary>
	Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2);
}; // class ShapeCustom_DirectModification

//---------------------------------------------------------------------
//  Class  ShapeCustom_TrsfModification
//---------------------------------------------------------------------
/// <summary>
/// Complements BRepTools_TrsfModification to provide reversible
/// scaling regarding tolerances.
/// Uses actual tolerances (attached to the shapes) not ones
/// returned by BRep_Tool::Tolerance to work with tolerances
/// lower than Precision::Confusion.
/// </summary>
public ref class ShapeCustom_TrsfModification sealed : public Macad::Occt::BRepTools_TrsfModification
{

#ifdef Include_ShapeCustom_TrsfModification_h
public:
	Include_ShapeCustom_TrsfModification_h
#endif

public:
	ShapeCustom_TrsfModification(::ShapeCustom_TrsfModification* nativeInstance)
		: Macad::Occt::BRepTools_TrsfModification( nativeInstance )
	{}

	ShapeCustom_TrsfModification(::ShapeCustom_TrsfModification& nativeInstance)
		: Macad::Occt::BRepTools_TrsfModification( nativeInstance )
	{}

	property ::ShapeCustom_TrsfModification* NativeInstance
	{
		::ShapeCustom_TrsfModification* get()
		{
			return static_cast<::ShapeCustom_TrsfModification*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeCustom_TrsfModification^ CreateDowncasted(::ShapeCustom_TrsfModification* instance);

public:
	/// <summary>
	/// Empty constructor
	/// </summary>
	ShapeCustom_TrsfModification(Macad::Occt::Trsf T);
	ShapeCustom_TrsfModification(Macad::Occt::ShapeCustom_TrsfModification^ parameter1);
	/// <summary>
	/// Calls inherited method.
	/// Sets <Tol> as actual tolerance of <F> multiplied with scale
	/// factor.
	/// </summary>
	bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
	/// <summary>
	/// Calls inherited method.
	/// Sets <Tol> as actual tolerance of <E> multiplied with scale
	/// factor.
	/// </summary>
	bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
	/// <summary>
	/// Calls inherited method.
	/// Sets <Tol> as actual tolerance of <V> multiplied with scale
	/// factor.
	/// </summary>
	bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
	/// <summary>
	/// Calls inherited method.
	/// Sets <Tol> as actual tolerance of <E> multiplied with scale
	/// factor.
	/// </summary>
	bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
	/// <summary>
	/// Calls inherited method.
	/// Sets <Tol> as actual tolerance of <V> multiplied with scale
	/// factor.
	/// </summary>
	bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
}; // class ShapeCustom_TrsfModification

//---------------------------------------------------------------------
//  Class  ShapeCustom_BSplineRestriction
//---------------------------------------------------------------------
/// <summary>
/// this tool intended for approximation surfaces, curves and pcurves with
/// specified degree , max number of segments, tolerance 2d, tolerance 3d. Specified
/// continuity can be reduced if approximation with specified continuity was not done.
/// </summary>
public ref class ShapeCustom_BSplineRestriction sealed : public Macad::Occt::ShapeCustom_Modification
{

#ifdef Include_ShapeCustom_BSplineRestriction_h
public:
	Include_ShapeCustom_BSplineRestriction_h
#endif

public:
	ShapeCustom_BSplineRestriction(::ShapeCustom_BSplineRestriction* nativeInstance)
		: Macad::Occt::ShapeCustom_Modification( nativeInstance )
	{}

	ShapeCustom_BSplineRestriction(::ShapeCustom_BSplineRestriction& nativeInstance)
		: Macad::Occt::ShapeCustom_Modification( nativeInstance )
	{}

	property ::ShapeCustom_BSplineRestriction* NativeInstance
	{
		::ShapeCustom_BSplineRestriction* get()
		{
			return static_cast<::ShapeCustom_BSplineRestriction*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeCustom_BSplineRestriction^ CreateDowncasted(::ShapeCustom_BSplineRestriction* instance);

public:
	/// <summary>
	/// Empty constructor.
	/// </summary>
	ShapeCustom_BSplineRestriction();
	/// <summary>
	/// Initializes with specified parameters of approximation.
	/// </summary>
	ShapeCustom_BSplineRestriction(bool anApproxSurfaceFlag, bool anApproxCurve3dFlag, bool anApproxCurve2dFlag, double aTol3d, double aTol2d, Macad::Occt::GeomAbs_Shape aContinuity3d, Macad::Occt::GeomAbs_Shape aContinuity2d, int aMaxDegree, int aNbMaxSeg, bool Degree, bool Rational);
	/// <summary>
	/// Initializes with specified parameters of approximation.
	/// </summary>
	ShapeCustom_BSplineRestriction(bool anApproxSurfaceFlag, bool anApproxCurve3dFlag, bool anApproxCurve2dFlag, double aTol3d, double aTol2d, Macad::Occt::GeomAbs_Shape aContinuity3d, Macad::Occt::GeomAbs_Shape aContinuity2d, int aMaxDegree, int aNbMaxSeg, bool Degree, bool Rational, Macad::Occt::ShapeCustom_RestrictionParameters^ aModes);
	ShapeCustom_BSplineRestriction(Macad::Occt::ShapeCustom_BSplineRestriction^ parameter1);
	/// <summary>
	/// Returns Standard_True if  the  face <F> has   been
	/// modified.  In this  case, <S> is the new geometric
	/// support of  the  face, <L> the new  location,<Tol>
	/// the new   tolerance.<RevWires>  has to be   set to
	/// Standard_True when  the modification reverses  the
	/// normal of  the   surface.(the wires  have   to  be
	/// reversed).  <RevFace>    has   to   be   set    to
	/// Standard_True if  the  orientation of the modified
	/// face changes in the shells which contain it.
	/// 
	/// Otherwise, returns Standard_False, and <S>,   <L>,
	/// <Tol> , <RevWires> ,<RevFace> are not  significant.
	/// </summary>
	bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
	/// <summary>
	/// Returns Standard_True  if  curve from the edge <E> has  been
	/// modified.  In this case,  <C> is the new geometric
	/// support of the  edge, <L> the  new location, <Tol>
	/// the         new    tolerance.
	/// Otherwise, returns Standard_True if Surface is modified or
	/// one of pcurves of edge is modified. In this case C is copy of
	/// geometric support of the edge.
	/// In other cases returns Standard_False, and  <C>,  <L>,  <Tol> are not
	/// significant.
	/// </summary>
	bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
	/// <summary>
	/// Returns Standard_True if  the edge  <E> has been modified.
	/// In this case,if curve on the surface is modified, <C>
	/// is the new geometric support of  the edge, <L> the
	/// new location, <Tol> the new tolerance. If curve on the surface
	/// is not modified C is copy curve on surface from the edge <E>.
	/// 
	/// Otherwise, returns  Standard_False, and <C>,  <L>,
	/// <Tol> are not significant.
	/// 
	/// <NewE> is the new  edge created from  <E>.  <NewF>
	/// is the new face created from <F>. They may be useful.
	/// </summary>
	bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
	/// <summary>
	/// Returns Standard_True if  the surface has been modified.
	/// if flag IsOf equals Standard_True Offset surfaces are approximated to Offset
	/// if Standard_False to BSpline
	/// </summary>
	bool ConvertSurface(Macad::Occt::Geom_Surface^ aSurface, Macad::Occt::Geom_Surface^ S, double UF, double UL, double VF, double VL, bool IsOf);
	/// <summary>
	/// Returns Standard_True if  the surface has been modified.
	/// if flag IsOf equals Standard_True Offset surfaces are approximated to Offset
	/// if Standard_False to BSpline
	/// </summary>
	bool ConvertSurface(Macad::Occt::Geom_Surface^ aSurface, Macad::Occt::Geom_Surface^ S, double UF, double UL, double VF, double VL);
	/// <summary>
	/// Returns Standard_True if  the curve has been modified.
	/// if flag IsOf equals Standard_True Offset curves are approximated to Offset
	/// if Standard_False to BSpline
	/// </summary>
	bool ConvertCurve(Macad::Occt::Geom_Curve^ aCurve, Macad::Occt::Geom_Curve^ C, bool IsConvert, double First, double Last, double% TolCur, bool IsOf);
	/// <summary>
	/// Returns Standard_True if  the curve has been modified.
	/// if flag IsOf equals Standard_True Offset curves are approximated to Offset
	/// if Standard_False to BSpline
	/// </summary>
	bool ConvertCurve(Macad::Occt::Geom_Curve^ aCurve, Macad::Occt::Geom_Curve^ C, bool IsConvert, double First, double Last, double% TolCur);
	/// <summary>
	/// Returns Standard_True if the pcurve has been modified.
	/// if flag IsOf equals Standard_True Offset pcurves are approximated to Offset
	/// if Standard_False to BSpline
	/// </summary>
	bool ConvertCurve2d(Macad::Occt::Geom2d_Curve^ aCurve, Macad::Occt::Geom2d_Curve^ C, bool IsConvert, double First, double Last, double% TolCur, bool IsOf);
	/// <summary>
	/// Returns Standard_True if the pcurve has been modified.
	/// if flag IsOf equals Standard_True Offset pcurves are approximated to Offset
	/// if Standard_False to BSpline
	/// </summary>
	bool ConvertCurve2d(Macad::Occt::Geom2d_Curve^ aCurve, Macad::Occt::Geom2d_Curve^ C, bool IsConvert, double First, double Last, double% TolCur);
	/// <summary>
	/// Sets tolerance of approximation for curve3d and surface
	/// </summary>
	void SetTol3d(double Tol3d);
	/// <summary>
	/// Sets tolerance of approximation for curve2d
	/// </summary>
	void SetTol2d(double Tol2d);
	/// <summary>
	/// Returns (modifiable) the flag which defines whether the
	/// surface is approximated.
	/// </summary>
	bool ModifyApproxSurfaceFlag();
	/// <summary>
	/// Returns (modifiable) the flag which defines whether the
	/// curve3d is approximated.
	/// </summary>
	bool ModifyApproxCurve3dFlag();
	/// <summary>
	/// Returns (modifiable) the flag which defines whether the curve2d is approximated.
	/// </summary>
	bool ModifyApproxCurve2dFlag();
	/// <summary>
	/// Sets continuity3d for approximation curve3d and surface.
	/// </summary>
	void SetContinuity3d(Macad::Occt::GeomAbs_Shape Continuity3d);
	/// <summary>
	/// Sets continuity3d for approximation curve2d.
	/// </summary>
	void SetContinuity2d(Macad::Occt::GeomAbs_Shape Continuity2d);
	/// <summary>
	/// Sets max degree for approximation.
	/// </summary>
	void SetMaxDegree(int MaxDegree);
	/// <summary>
	/// Sets max number of segments for approximation.
	/// </summary>
	void SetMaxNbSegments(int MaxNbSegments);
	/// <summary>
	/// Sets priority  for approximation curves and surface.
	/// If Degree is True approximation is made with degree less
	/// then specified MaxDegree at the expense of number of spanes.
	/// If Degree is False approximation is made with number of
	/// spans less then specified MaxNbSegment at the expense of
	/// specified MaxDegree.
	/// </summary>
	void SetPriority(bool Degree);
	/// <summary>
	/// Sets flag for define if rational BSpline or Bezier is
	/// converted to polynomial. If Rational is True approximation
	/// for rational BSpline and Bezier is made to polynomial even
	/// if degree is less then MaxDegree and number of spans is less
	/// then specified MaxNbSegment.
	/// </summary>
	void SetConvRational(bool Rational);
	/// <summary>
	/// Returns the container of modes which defines
	/// what geometry should be converted to BSplines.
	/// </summary>
	Macad::Occt::ShapeCustom_RestrictionParameters^ GetRestrictionParameters();
	/// <summary>
	/// Sets the container of modes which defines
	/// what geometry should be converted to BSplines.
	/// </summary>
	void SetRestrictionParameters(Macad::Occt::ShapeCustom_RestrictionParameters^ aModes);
	/// <summary>
	/// Returns error for approximation curve3d.
	/// </summary>
	double Curve3dError();
	/// <summary>
	/// Returns error for approximation curve2d.
	/// </summary>
	double Curve2dError();
	/// <summary>
	/// Returns error for approximation surface.
	/// </summary>
	double SurfaceError();
	bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
	bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
	Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2);
	/// <summary>
	/// Returns error for approximation surface, curve3d and curve2d.
	/// </summary>
	double MaxErrors(double% aCurve3dErr, double% aCurve2dErr);
	/// <summary>
	/// Returns number for approximation surface, curve3d and curve2d.
	/// </summary>
	int NbOfSpan();
}; // class ShapeCustom_BSplineRestriction

//---------------------------------------------------------------------
//  Class  ShapeCustom_ConvertToRevolution
//---------------------------------------------------------------------
/// <summary>
/// implements a modification for the BRepTools
/// Modifier algorithm. Converts all elementary
/// surfaces into surfaces of revolution.
/// </summary>
public ref class ShapeCustom_ConvertToRevolution sealed : public Macad::Occt::ShapeCustom_Modification
{

#ifdef Include_ShapeCustom_ConvertToRevolution_h
public:
	Include_ShapeCustom_ConvertToRevolution_h
#endif

public:
	ShapeCustom_ConvertToRevolution(::ShapeCustom_ConvertToRevolution* nativeInstance)
		: Macad::Occt::ShapeCustom_Modification( nativeInstance )
	{}

	ShapeCustom_ConvertToRevolution(::ShapeCustom_ConvertToRevolution& nativeInstance)
		: Macad::Occt::ShapeCustom_Modification( nativeInstance )
	{}

	property ::ShapeCustom_ConvertToRevolution* NativeInstance
	{
		::ShapeCustom_ConvertToRevolution* get()
		{
			return static_cast<::ShapeCustom_ConvertToRevolution*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeCustom_ConvertToRevolution^ CreateDowncasted(::ShapeCustom_ConvertToRevolution* instance);

public:
	ShapeCustom_ConvertToRevolution();
	ShapeCustom_ConvertToRevolution(Macad::Occt::ShapeCustom_ConvertToRevolution^ parameter1);
	/// <summary>
	/// Returns Standard_True if the face <F> has  been
	/// modified. In this case, <S> is the new geometric
	/// support of the face, <L> the new location,  <Tol>
	/// the new tolerance.  Otherwise, returns
	/// Standard_False, and <S>, <L>, <Tol> are  not
	/// significant.
	/// </summary>
	bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
	/// <summary>
	/// Returns Standard_True  if  the edge  <E> has  been
	/// modified.  In this case,  <C> is the new geometric
	/// support of the  edge, <L> the  new location, <Tol>
	/// the         new    tolerance.   Otherwise, returns
	/// Standard_False,    and  <C>,  <L>,   <Tol> are not
	/// significant.
	/// </summary>
	bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
	/// <summary>
	/// Returns  Standard_True if the  vertex <V> has been
	/// modified.  In this  case, <P> is the new geometric
	/// support of the vertex,   <Tol> the new  tolerance.
	/// Otherwise, returns Standard_False, and <P>,  <Tol>
	/// are not significant.
	/// </summary>
	bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
	/// <summary>
	/// Returns Standard_True if  the edge  <E> has a  new
	/// curve on surface on the face <F>.In this case, <C>
	/// is the new geometric support of  the edge, <L> the
	/// new location, <Tol> the new tolerance.
	/// 
	/// Otherwise, returns  Standard_False, and <C>,  <L>,
	/// <Tol> are not significant.
	/// 
	/// <NewE> is the new  edge created from  <E>.  <NewF>
	/// is the new face created from <F>. They may be useful.
	/// </summary>
	bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
	/// <summary>
	/// Returns Standard_True if the Vertex  <V> has a new
	/// parameter on the  edge <E>. In  this case,  <P> is
	/// the parameter,    <Tol>  the     new    tolerance.
	/// Otherwise, returns Standard_False, and <P>,  <Tol>
	/// are not significant.
	/// </summary>
	bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
	/// <summary>
	/// Returns the  continuity of  <NewE> between <NewF1>
	/// and <NewF2>.
	/// 
	/// <NewE> is the new  edge created from <E>.  <NewF1>
	/// (resp. <NewF2>) is the new  face created from <F1>
	/// (resp. <F2>).
	/// </summary>
	Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2);
}; // class ShapeCustom_ConvertToRevolution

//---------------------------------------------------------------------
//  Class  ShapeCustom_SweptToElementary
//---------------------------------------------------------------------
/// <summary>
/// implements a modification for the BRepTools
/// Modifier algorithm. Converts all elementary
/// surfaces into surfaces of revolution.
/// </summary>
public ref class ShapeCustom_SweptToElementary sealed : public Macad::Occt::ShapeCustom_Modification
{

#ifdef Include_ShapeCustom_SweptToElementary_h
public:
	Include_ShapeCustom_SweptToElementary_h
#endif

public:
	ShapeCustom_SweptToElementary(::ShapeCustom_SweptToElementary* nativeInstance)
		: Macad::Occt::ShapeCustom_Modification( nativeInstance )
	{}

	ShapeCustom_SweptToElementary(::ShapeCustom_SweptToElementary& nativeInstance)
		: Macad::Occt::ShapeCustom_Modification( nativeInstance )
	{}

	property ::ShapeCustom_SweptToElementary* NativeInstance
	{
		::ShapeCustom_SweptToElementary* get()
		{
			return static_cast<::ShapeCustom_SweptToElementary*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeCustom_SweptToElementary^ CreateDowncasted(::ShapeCustom_SweptToElementary* instance);

public:
	ShapeCustom_SweptToElementary();
	ShapeCustom_SweptToElementary(Macad::Occt::ShapeCustom_SweptToElementary^ parameter1);
	/// <summary>
	/// Returns Standard_True if the face <F> has  been
	/// modified. In this case, <S> is the new geometric
	/// support of the face, <L> the new location,  <Tol>
	/// the new tolerance.  Otherwise, returns
	/// Standard_False, and <S>, <L>, <Tol> are  not
	/// significant.
	/// </summary>
	bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
	/// <summary>
	/// Returns Standard_True  if  the edge  <E> has  been
	/// modified.  In this case,  <C> is the new geometric
	/// support of the  edge, <L> the  new location, <Tol>
	/// the         new    tolerance.   Otherwise, returns
	/// Standard_False,    and  <C>,  <L>,   <Tol> are not
	/// significant.
	/// </summary>
	bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
	/// <summary>
	/// Returns  Standard_True if the  vertex <V> has been
	/// modified.  In this  case, <P> is the new geometric
	/// support of the vertex,   <Tol> the new  tolerance.
	/// Otherwise, returns Standard_False, and <P>,  <Tol>
	/// are not significant.
	/// </summary>
	bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
	/// <summary>
	/// Returns Standard_True if  the edge  <E> has a  new
	/// curve on surface on the face <F>.In this case, <C>
	/// is the new geometric support of  the edge, <L> the
	/// new location, <Tol> the new tolerance.
	/// 
	/// Otherwise, returns  Standard_False, and <C>,  <L>,
	/// <Tol> are not significant.
	/// 
	/// <NewE> is the new  edge created from  <E>.  <NewF>
	/// is the new face created from <F>. They may be useful.
	/// </summary>
	bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
	/// <summary>
	/// Returns Standard_True if the Vertex  <V> has a new
	/// parameter on the  edge <E>. In  this case,  <P> is
	/// the parameter,    <Tol>  the     new    tolerance.
	/// Otherwise, returns Standard_False, and <P>,  <Tol>
	/// are not significant.
	/// </summary>
	bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
	/// <summary>
	/// Returns the  continuity of  <NewE> between <NewF1>
	/// and <NewF2>.
	/// 
	/// <NewE> is the new  edge created from <E>.  <NewF1>
	/// (resp. <NewF2>) is the new  face created from <F1>
	/// (resp. <F2>).
	/// </summary>
	Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2);
}; // class ShapeCustom_SweptToElementary

//---------------------------------------------------------------------
//  Class  ShapeCustom_ConvertToBSpline
//---------------------------------------------------------------------
/// <summary>
/// implement a modification for BRepTools
/// Modifier algorithm. Converts Surface of
/// Linear Exctrusion, Revolution and Offset
/// surfaces into BSpline Surface according to
/// flags.
/// </summary>
public ref class ShapeCustom_ConvertToBSpline sealed : public Macad::Occt::ShapeCustom_Modification
{

#ifdef Include_ShapeCustom_ConvertToBSpline_h
public:
	Include_ShapeCustom_ConvertToBSpline_h
#endif

public:
	ShapeCustom_ConvertToBSpline(::ShapeCustom_ConvertToBSpline* nativeInstance)
		: Macad::Occt::ShapeCustom_Modification( nativeInstance )
	{}

	ShapeCustom_ConvertToBSpline(::ShapeCustom_ConvertToBSpline& nativeInstance)
		: Macad::Occt::ShapeCustom_Modification( nativeInstance )
	{}

	property ::ShapeCustom_ConvertToBSpline* NativeInstance
	{
		::ShapeCustom_ConvertToBSpline* get()
		{
			return static_cast<::ShapeCustom_ConvertToBSpline*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeCustom_ConvertToBSpline^ CreateDowncasted(::ShapeCustom_ConvertToBSpline* instance);

public:
	ShapeCustom_ConvertToBSpline();
	ShapeCustom_ConvertToBSpline(Macad::Occt::ShapeCustom_ConvertToBSpline^ parameter1);
	/// <summary>
	/// Sets mode for conversion of Surfaces of Linear
	/// extrusion.
	/// </summary>
	void SetExtrusionMode(bool extrMode);
	/// <summary>
	/// Sets mode for conversion of Surfaces of Revolution.
	/// </summary>
	void SetRevolutionMode(bool revolMode);
	/// <summary>
	/// Sets mode for conversion of Offset surfaces.
	/// </summary>
	void SetOffsetMode(bool offsetMode);
	/// <summary>
	/// Sets mode for conversion of Plane surfaces.
	/// </summary>
	void SetPlaneMode(bool planeMode);
	/// <summary>
	/// Returns Standard_True if the face <F> has  been
	/// modified. In this case, <S> is the new geometric
	/// support of the face, <L> the new location,  <Tol>
	/// the new tolerance.  Otherwise, returns
	/// Standard_False, and <S>, <L>, <Tol> are  not
	/// significant.
	/// </summary>
	bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
	/// <summary>
	/// Returns Standard_True  if  the edge  <E> has  been
	/// modified.  In this case,  <C> is the new geometric
	/// support of the  edge, <L> the  new location, <Tol>
	/// the         new    tolerance.   Otherwise, returns
	/// Standard_False,    and  <C>,  <L>,   <Tol> are not
	/// significant.
	/// </summary>
	bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
	/// <summary>
	/// Returns  Standard_True if the  vertex <V> has been
	/// modified.  In this  case, <P> is the new geometric
	/// support of the vertex,   <Tol> the new  tolerance.
	/// Otherwise, returns Standard_False, and <P>,  <Tol>
	/// are not significant.
	/// </summary>
	bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
	/// <summary>
	/// Returns Standard_True if  the edge  <E> has a  new
	/// curve on surface on the face <F>.In this case, <C>
	/// is the new geometric support of  the edge, <L> the
	/// new location, <Tol> the new tolerance.
	/// 
	/// Otherwise, returns  Standard_False, and <C>,  <L>,
	/// <Tol> are not significant.
	/// 
	/// <NewE> is the new  edge created from  <E>.  <NewF>
	/// is the new face created from <F>. They may be useful.
	/// </summary>
	bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
	/// <summary>
	/// Returns Standard_True if the Vertex  <V> has a new
	/// parameter on the  edge <E>. In  this case,  <P> is
	/// the parameter,    <Tol>  the     new    tolerance.
	/// Otherwise, returns Standard_False, and <P>,  <Tol>
	/// are not significant.
	/// </summary>
	bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
	/// <summary>
	/// Returns the  continuity of  <NewE> between <NewF1>
	/// and <NewF2>.
	/// 
	/// <NewE> is the new  edge created from <E>.  <NewF1>
	/// (resp. <NewF2>) is the new  face created from <F1>
	/// (resp. <F2>).
	/// </summary>
	Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2);
}; // class ShapeCustom_ConvertToBSpline

//---------------------------------------------------------------------
//  Class  ShapeCustom
//---------------------------------------------------------------------
/// <summary>
/// This package is intended to
/// convert geometrical objects and topological. The
/// modifications of one geometrical object to another
/// (one) geometrical object are provided. The supported
/// modifications are the following:
/// conversion of BSpline and Bezier surfaces to analytical form,
/// conversion of indirect elementary surfaces (with left-handed
/// coordinate systems) into  direct ones,
/// conversion of elementary surfaces to surfaces of revolution,
/// conversion of surface of linear extrusion, revolution, offset
/// surface to bspline,
/// modification of parameterization, degree, number of segments of bspline
/// surfaces,  scale the shape.
/// </summary>
public ref class ShapeCustom sealed : public BaseClass<::ShapeCustom>
{

#ifdef Include_ShapeCustom_h
public:
	Include_ShapeCustom_h
#endif

public:
	ShapeCustom(::ShapeCustom* nativeInstance)
		: BaseClass<::ShapeCustom>( nativeInstance, true )
	{}

	ShapeCustom(::ShapeCustom& nativeInstance)
		: BaseClass<::ShapeCustom>( &nativeInstance, false )
	{}

	property ::ShapeCustom* NativeInstance
	{
		::ShapeCustom* get()
		{
			return static_cast<::ShapeCustom*>(_NativeInstance);
		}
	}

public:
	ShapeCustom();
	ShapeCustom(Macad::Occt::ShapeCustom^ parameter1);
	/// <summary>
	/// Applies modifier to shape and checks sharing in the case assemblies.
	/// </summary>
	static Macad::Occt::TopoDS_Shape^ ApplyModifier(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_Modification^ M, Macad::Occt::TopTools_DataMapOfShapeShape^ context, Macad::Occt::BRepTools_Modifier^ MD, Macad::Occt::Message_ProgressRange^ theProgress, Macad::Occt::ShapeBuild_ReShape^ aReShape);
	/// <summary>
	/// Applies modifier to shape and checks sharing in the case assemblies.
	/// </summary>
	static Macad::Occt::TopoDS_Shape^ ApplyModifier(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_Modification^ M, Macad::Occt::TopTools_DataMapOfShapeShape^ context, Macad::Occt::BRepTools_Modifier^ MD, Macad::Occt::Message_ProgressRange^ theProgress);
	/// <summary>
	/// Applies modifier to shape and checks sharing in the case assemblies.
	/// </summary>
	static Macad::Occt::TopoDS_Shape^ ApplyModifier(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_Modification^ M, Macad::Occt::TopTools_DataMapOfShapeShape^ context, Macad::Occt::BRepTools_Modifier^ MD);
	/// <summary>
	/// Returns a new shape without indirect surfaces.
	/// </summary>
	static Macad::Occt::TopoDS_Shape^ DirectFaces(Macad::Occt::TopoDS_Shape^ S);
	/// <summary>
	/// Returns a new shape which is scaled original
	/// </summary>
	static Macad::Occt::TopoDS_Shape^ ScaleShape(Macad::Occt::TopoDS_Shape^ S, double scale);
	/// <summary>
	/// Returns a new shape with all surfaces, curves and pcurves
	/// which type is BSpline/Bezier or based on them converted
	/// having Degree less than <MaxDegree> or number of spans less
	/// than <NbMaxSegment> in dependence on parameter priority <Degree>.
	/// <GmaxDegree> and <GMaxSegments> are maximum possible degree
	/// and number of spans correspondingly.
	/// These values will be used in those cases when approximation with
	/// specified parameters is impossible and one of GmaxDegree or
	/// GMaxSegments is selected in dependence on priority.
	/// Note that even if approximation is impossible with <GMaxDegree>
	/// then number of spans can exceed specified <GMaxSegment>
	/// <Rational> specifies if to convert Rational BSpline/Bezier into
	/// polynomial B-Spline.
	/// If flags ConvOffSurf,ConvOffCurve3d,ConvOffCurve2d are Standard_True there are means
	/// that Offset surfaces , Offset curves 3d and Offset curves 2d are converted to BSPline
	/// correspondingly.
	/// </summary>
	static Macad::Occt::TopoDS_Shape^ BSplineRestriction(Macad::Occt::TopoDS_Shape^ S, double Tol3d, double Tol2d, int MaxDegree, int MaxNbSegment, Macad::Occt::GeomAbs_Shape Continuity3d, Macad::Occt::GeomAbs_Shape Continuity2d, bool Degree, bool Rational, Macad::Occt::ShapeCustom_RestrictionParameters^ aParameters);
	/// <summary>
	/// Returns a new shape with all elementary periodic surfaces converted
	/// to Geom_SurfaceOfRevolution
	/// </summary>
	static Macad::Occt::TopoDS_Shape^ ConvertToRevolution(Macad::Occt::TopoDS_Shape^ S);
	/// <summary>
	/// Returns a new shape with all surfaces of revolution and linear extrusion
	/// convert to elementary periodic surfaces
	/// </summary>
	static Macad::Occt::TopoDS_Shape^ SweptToElementary(Macad::Occt::TopoDS_Shape^ S);
	/// <summary>
	/// Returns a new shape with all surfaces of linear extrusion, revolution,
	/// offset, and planar surfaces converted according to flags to
	/// Geom_BSplineSurface (with same parameterisation).
	/// </summary>
	static Macad::Occt::TopoDS_Shape^ ConvertToBSpline(Macad::Occt::TopoDS_Shape^ S, bool extrMode, bool revolMode, bool offsetMode, bool planeMode);
	/// <summary>
	/// Returns a new shape with all surfaces of linear extrusion, revolution,
	/// offset, and planar surfaces converted according to flags to
	/// Geom_BSplineSurface (with same parameterisation).
	/// </summary>
	static Macad::Occt::TopoDS_Shape^ ConvertToBSpline(Macad::Occt::TopoDS_Shape^ S, bool extrMode, bool revolMode, bool offsetMode);
}; // class ShapeCustom

}; // namespace Occt
}; // namespace Macad
