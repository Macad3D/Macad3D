// Generated wrapper code for package ShapeAlgo

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ShapeAlgo_AlgoContainer
//---------------------------------------------------------------------
public ref class ShapeAlgo_AlgoContainer sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeAlgo_AlgoContainer_h
public:
	Include_ShapeAlgo_AlgoContainer_h
#endif

public:
	ShapeAlgo_AlgoContainer(::ShapeAlgo_AlgoContainer* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeAlgo_AlgoContainer(::ShapeAlgo_AlgoContainer& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeAlgo_AlgoContainer* NativeInstance
	{
		::ShapeAlgo_AlgoContainer* get()
		{
			return static_cast<::ShapeAlgo_AlgoContainer*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeAlgo_AlgoContainer^ CreateDowncasted(::ShapeAlgo_AlgoContainer* instance);

public:
	/// <summary>
	/// Empty constructor
	/// </summary>
	ShapeAlgo_AlgoContainer();
	ShapeAlgo_AlgoContainer(Macad::Occt::ShapeAlgo_AlgoContainer^ parameter1);
	/// <summary>
	/// Sets ToolContainer
	/// </summary>
	void SetToolContainer(Macad::Occt::ShapeAlgo_ToolContainer^ TC);
	/// <summary>
	/// Returns ToolContainer
	/// </summary>
	Macad::Occt::ShapeAlgo_ToolContainer^ ToolContainer();
	/// <summary>
	/// Finds the best way to connect and connects <nextsewd> to already
	/// built <sewd> (in <saw>).
	/// Returns False if <nextsewd> cannot be connected, otherwise - True.
	/// <maxtol> specifies the maximum tolerance with which <nextsewd> can
	/// be added.
	/// <distmin> is used to receive the minimum distance between <nextsewd>
	/// and <sewd>.
	/// <revsewd>   is True if <sewd>     has been reversed before connecting.
	/// <revnextwd> is True if <nextsewd> has been reversed before connecting.
	/// Uses functionality of ShapeAnalysis_Wire.
	/// </summary>
	bool ConnectNextWire(Macad::Occt::ShapeAnalysis_Wire^ saw, Macad::Occt::ShapeExtend_WireData^ nextsewd, double maxtol, double% distmin, bool% revsewd, bool% revnextsewd);
	/* Method skipped due to unknown mapping: void ApproxBSplineCurve(Geom_BSplineCurve bspline, TColGeom_SequenceOfCurve seq, ) */
	/* Method skipped due to unknown mapping: void ApproxBSplineCurve(Geom2d_BSplineCurve bspline, TColGeom2d_SequenceOfCurve seq, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean C0BSplineToSequenceOfC1BSplineCurve(Geom_BSplineCurve BS, TColGeom_HSequenceOfBoundedCurve seqBS, ) */
	/// <summary>
	/// Converts C0 B-Spline curve into sequence of C1 B-Spline curves.
	/// Calls ShapeUpgrade::C0BSplineToSequenceOfC1BSplineCurve.
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean C0BSplineToSequenceOfC1BSplineCurve(Geom2d_BSplineCurve BS, TColGeom2d_HSequenceOfBoundedCurve seqBS, ) */
	/// <summary>
	/// Converts a shape on C0 geometry into the shape on C1 geometry.
	/// </summary>
	Macad::Occt::TopoDS_Shape^ C0ShapeToC1Shape(Macad::Occt::TopoDS_Shape^ shape, double tol);
	/// <summary>
	/// Converts a surface to B-Spline.
	/// Uses ShapeConstruct.
	/// </summary>
	Macad::Occt::Geom_BSplineSurface^ ConvertSurfaceToBSpline(Macad::Occt::Geom_Surface^ surf, double UF, double UL, double VF, double VL);
	/// <summary>
	/// Return 2 wires with the same number of edges. The both Edges
	/// number i of these wires have got the same ratio between
	/// theirs parameter lengths and their wire parameter lengths.
	/// </summary>
	bool HomoWires(Macad::Occt::TopoDS_Wire^ wireIn1, Macad::Occt::TopoDS_Wire^ wireIn2, Macad::Occt::TopoDS_Wire^ wireOut1, Macad::Occt::TopoDS_Wire^ wireOut2, bool byParam);
	/// <summary>
	/// Returns the outer wire on the face <Face>.
	/// </summary>
	Macad::Occt::TopoDS_Wire^ OuterWire(Macad::Occt::TopoDS_Face^ face);
	/// <summary>
	/// Converts surface to periodic form.
	/// Calls ShapeCustom_Surface.
	/// </summary>
	Macad::Occt::Geom_Surface^ ConvertToPeriodic(Macad::Occt::Geom_Surface^ surf);
	/// <summary>
	/// Computes exact UV bounds of all wires on the face
	/// </summary>
	void GetFaceUVBounds(Macad::Occt::TopoDS_Face^ F, double% Umin, double% Umax, double% Vmin, double% Vmax);
	/// <summary>
	/// Convert Geom_Curve to Geom_BSplineCurve
	/// </summary>
	Macad::Occt::Geom_BSplineCurve^ ConvertCurveToBSpline(Macad::Occt::Geom_Curve^ C3D, double First, double Last, double Tol3d, Macad::Occt::GeomAbs_Shape Continuity, int MaxSegments, int MaxDegree);
}; // class ShapeAlgo_AlgoContainer

//---------------------------------------------------------------------
//  Class  ShapeAlgo_ToolContainer
//---------------------------------------------------------------------
/// <summary>
/// Returns tools used by AlgoContainer
/// </summary>
public ref class ShapeAlgo_ToolContainer sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeAlgo_ToolContainer_h
public:
	Include_ShapeAlgo_ToolContainer_h
#endif

public:
	ShapeAlgo_ToolContainer(::ShapeAlgo_ToolContainer* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeAlgo_ToolContainer(::ShapeAlgo_ToolContainer& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeAlgo_ToolContainer* NativeInstance
	{
		::ShapeAlgo_ToolContainer* get()
		{
			return static_cast<::ShapeAlgo_ToolContainer*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeAlgo_ToolContainer^ CreateDowncasted(::ShapeAlgo_ToolContainer* instance);

public:
	/// <summary>
	/// Empty constructor
	/// </summary>
	ShapeAlgo_ToolContainer();
	ShapeAlgo_ToolContainer(Macad::Occt::ShapeAlgo_ToolContainer^ parameter1);
	/// <summary>
	/// Returns ShapeFix_Shape
	/// </summary>
	Macad::Occt::ShapeFix_Shape^ FixShape();
	/// <summary>
	/// Returns ShapeFix_EdgeProjAux
	/// </summary>
	Macad::Occt::ShapeFix_EdgeProjAux^ EdgeProjAux();
}; // class ShapeAlgo_ToolContainer

//---------------------------------------------------------------------
//  Class  ShapeAlgo
//---------------------------------------------------------------------
public ref class ShapeAlgo sealed : public BaseClass<::ShapeAlgo>
{

#ifdef Include_ShapeAlgo_h
public:
	Include_ShapeAlgo_h
#endif

public:
	ShapeAlgo(::ShapeAlgo* nativeInstance)
		: BaseClass<::ShapeAlgo>( nativeInstance, true )
	{}

	ShapeAlgo(::ShapeAlgo& nativeInstance)
		: BaseClass<::ShapeAlgo>( &nativeInstance, false )
	{}

	property ::ShapeAlgo* NativeInstance
	{
		::ShapeAlgo* get()
		{
			return static_cast<::ShapeAlgo*>(_NativeInstance);
		}
	}

public:
	ShapeAlgo();
	ShapeAlgo(Macad::Occt::ShapeAlgo^ parameter1);
	/// <summary>
	/// Provides initerface to the algorithms from Shape Healing.
	/// Creates and initializes default AlgoContainer.
	/// </summary>
	static void Init();
	/// <summary>
	/// Sets default AlgoContainer
	/// </summary>
	static void SetAlgoContainer(Macad::Occt::ShapeAlgo_AlgoContainer^ aContainer);
	/// <summary>
	/// Returns default AlgoContainer
	/// </summary>
	static Macad::Occt::ShapeAlgo_AlgoContainer^ AlgoContainer();
}; // class ShapeAlgo

}; // namespace Occt
}; // namespace Macad
