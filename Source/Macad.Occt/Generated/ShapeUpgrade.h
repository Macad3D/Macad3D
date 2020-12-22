// Generated wrapper code for package ShapeUpgrade

#pragma once

#include "ShapeUpgrade.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ShapeUpgrade_Tool
//---------------------------------------------------------------------
public ref class ShapeUpgrade_Tool : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeUpgrade_Tool_h
public:
	Include_ShapeUpgrade_Tool_h
#endif

protected:
	ShapeUpgrade_Tool(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	ShapeUpgrade_Tool(::ShapeUpgrade_Tool* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeUpgrade_Tool(::ShapeUpgrade_Tool& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeUpgrade_Tool* NativeInstance
	{
		::ShapeUpgrade_Tool* get()
		{
			return static_cast<::ShapeUpgrade_Tool*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_Tool^ CreateDowncasted(::ShapeUpgrade_Tool* instance);

public:
	ShapeUpgrade_Tool();
	ShapeUpgrade_Tool(Macad::Occt::ShapeUpgrade_Tool^ parameter1);
	void Set(Macad::Occt::ShapeUpgrade_Tool^ tool);
	void SetContext(Macad::Occt::ShapeBuild_ReShape^ context);
	Macad::Occt::ShapeBuild_ReShape^ Context();
	void SetPrecision(double preci);
	double Precision();
	void SetMinTolerance(double mintol);
	double MinTolerance();
	void SetMaxTolerance(double maxtol);
	double MaxTolerance();
	double LimitTolerance(double toler);
}; // class ShapeUpgrade_Tool

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_EdgeDivide
//---------------------------------------------------------------------
public ref class ShapeUpgrade_EdgeDivide : public Macad::Occt::ShapeUpgrade_Tool
{

#ifdef Include_ShapeUpgrade_EdgeDivide_h
public:
	Include_ShapeUpgrade_EdgeDivide_h
#endif

protected:
	ShapeUpgrade_EdgeDivide(InitMode init)
		: Macad::Occt::ShapeUpgrade_Tool( init )
	{}

public:
	ShapeUpgrade_EdgeDivide(::ShapeUpgrade_EdgeDivide* nativeInstance)
		: Macad::Occt::ShapeUpgrade_Tool( nativeInstance )
	{}

	ShapeUpgrade_EdgeDivide(::ShapeUpgrade_EdgeDivide& nativeInstance)
		: Macad::Occt::ShapeUpgrade_Tool( nativeInstance )
	{}

	property ::ShapeUpgrade_EdgeDivide* NativeInstance
	{
		::ShapeUpgrade_EdgeDivide* get()
		{
			return static_cast<::ShapeUpgrade_EdgeDivide*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_EdgeDivide^ CreateDowncasted(::ShapeUpgrade_EdgeDivide* instance);

public:
	ShapeUpgrade_EdgeDivide();
	ShapeUpgrade_EdgeDivide(Macad::Occt::ShapeUpgrade_EdgeDivide^ parameter1);
	void Clear();
	void SetFace(Macad::Occt::TopoDS_Face^ F);
	bool Compute(Macad::Occt::TopoDS_Edge^ E);
	bool HasCurve2d();
	bool HasCurve3d();
	Macad::Occt::TColStd_HSequenceOfReal^ Knots2d();
	Macad::Occt::TColStd_HSequenceOfReal^ Knots3d();
	void SetSplitCurve2dTool(Macad::Occt::ShapeUpgrade_SplitCurve2d^ splitCurve2dTool);
	void SetSplitCurve3dTool(Macad::Occt::ShapeUpgrade_SplitCurve3d^ splitCurve3dTool);
	Macad::Occt::ShapeUpgrade_SplitCurve2d^ GetSplitCurve2dTool();
	Macad::Occt::ShapeUpgrade_SplitCurve3d^ GetSplitCurve3dTool();
}; // class ShapeUpgrade_EdgeDivide

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ClosedEdgeDivide
//---------------------------------------------------------------------
public ref class ShapeUpgrade_ClosedEdgeDivide sealed : public Macad::Occt::ShapeUpgrade_EdgeDivide
{

#ifdef Include_ShapeUpgrade_ClosedEdgeDivide_h
public:
	Include_ShapeUpgrade_ClosedEdgeDivide_h
#endif

public:
	ShapeUpgrade_ClosedEdgeDivide(::ShapeUpgrade_ClosedEdgeDivide* nativeInstance)
		: Macad::Occt::ShapeUpgrade_EdgeDivide( nativeInstance )
	{}

	ShapeUpgrade_ClosedEdgeDivide(::ShapeUpgrade_ClosedEdgeDivide& nativeInstance)
		: Macad::Occt::ShapeUpgrade_EdgeDivide( nativeInstance )
	{}

	property ::ShapeUpgrade_ClosedEdgeDivide* NativeInstance
	{
		::ShapeUpgrade_ClosedEdgeDivide* get()
		{
			return static_cast<::ShapeUpgrade_ClosedEdgeDivide*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_ClosedEdgeDivide^ CreateDowncasted(::ShapeUpgrade_ClosedEdgeDivide* instance);

public:
	ShapeUpgrade_ClosedEdgeDivide();
	ShapeUpgrade_ClosedEdgeDivide(Macad::Occt::ShapeUpgrade_ClosedEdgeDivide^ parameter1);
	bool Compute(Macad::Occt::TopoDS_Edge^ anEdge);
}; // class ShapeUpgrade_ClosedEdgeDivide

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_WireDivide
//---------------------------------------------------------------------
public ref class ShapeUpgrade_WireDivide sealed : public Macad::Occt::ShapeUpgrade_Tool
{

#ifdef Include_ShapeUpgrade_WireDivide_h
public:
	Include_ShapeUpgrade_WireDivide_h
#endif

public:
	ShapeUpgrade_WireDivide(::ShapeUpgrade_WireDivide* nativeInstance)
		: Macad::Occt::ShapeUpgrade_Tool( nativeInstance )
	{}

	ShapeUpgrade_WireDivide(::ShapeUpgrade_WireDivide& nativeInstance)
		: Macad::Occt::ShapeUpgrade_Tool( nativeInstance )
	{}

	property ::ShapeUpgrade_WireDivide* NativeInstance
	{
		::ShapeUpgrade_WireDivide* get()
		{
			return static_cast<::ShapeUpgrade_WireDivide*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_WireDivide^ CreateDowncasted(::ShapeUpgrade_WireDivide* instance);

public:
	ShapeUpgrade_WireDivide();
	ShapeUpgrade_WireDivide(Macad::Occt::ShapeUpgrade_WireDivide^ parameter1);
	void Init(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F);
	void Init(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::Geom_Surface^ S);
	void Load(Macad::Occt::TopoDS_Wire^ W);
	void Load(Macad::Occt::TopoDS_Edge^ E);
	void SetFace(Macad::Occt::TopoDS_Face^ F);
	void SetSurface(Macad::Occt::Geom_Surface^ S);
	void SetSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
	void Perform();
	Macad::Occt::TopoDS_Wire^ Wire();
	bool Status(Macad::Occt::ShapeExtend_Status status);
	void SetSplitCurve3dTool(Macad::Occt::ShapeUpgrade_SplitCurve3d^ splitCurve3dTool);
	void SetSplitCurve2dTool(Macad::Occt::ShapeUpgrade_SplitCurve2d^ splitCurve2dTool);
	void SetTransferParamTool(Macad::Occt::ShapeAnalysis_TransferParameters^ TransferParam);
	void SetEdgeDivideTool(Macad::Occt::ShapeUpgrade_EdgeDivide^ edgeDivideTool);
	Macad::Occt::ShapeUpgrade_EdgeDivide^ GetEdgeDivideTool();
	Macad::Occt::ShapeAnalysis_TransferParameters^ GetTransferParamTool();
	void SetEdgeMode(int EdgeMode);
	void SetFixSmallCurveTool(Macad::Occt::ShapeUpgrade_FixSmallCurves^ FixSmallCurvesTool);
	Macad::Occt::ShapeUpgrade_FixSmallCurves^ GetFixSmallCurveTool();
}; // class ShapeUpgrade_WireDivide

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_FaceDivide
//---------------------------------------------------------------------
public ref class ShapeUpgrade_FaceDivide : public Macad::Occt::ShapeUpgrade_Tool
{

#ifdef Include_ShapeUpgrade_FaceDivide_h
public:
	Include_ShapeUpgrade_FaceDivide_h
#endif

protected:
	ShapeUpgrade_FaceDivide(InitMode init)
		: Macad::Occt::ShapeUpgrade_Tool( init )
	{}

public:
	ShapeUpgrade_FaceDivide(::ShapeUpgrade_FaceDivide* nativeInstance)
		: Macad::Occt::ShapeUpgrade_Tool( nativeInstance )
	{}

	ShapeUpgrade_FaceDivide(::ShapeUpgrade_FaceDivide& nativeInstance)
		: Macad::Occt::ShapeUpgrade_Tool( nativeInstance )
	{}

	property ::ShapeUpgrade_FaceDivide* NativeInstance
	{
		::ShapeUpgrade_FaceDivide* get()
		{
			return static_cast<::ShapeUpgrade_FaceDivide*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_FaceDivide^ CreateDowncasted(::ShapeUpgrade_FaceDivide* instance);

public:
	ShapeUpgrade_FaceDivide();
	ShapeUpgrade_FaceDivide(Macad::Occt::TopoDS_Face^ F);
	ShapeUpgrade_FaceDivide(Macad::Occt::ShapeUpgrade_FaceDivide^ parameter1);
	void Init(Macad::Occt::TopoDS_Face^ F);
	void SetSurfaceSegmentMode(bool Segment);
	bool Perform();
	bool SplitSurface();
	bool SplitCurves();
	Macad::Occt::TopoDS_Shape^ Result();
	bool Status(Macad::Occt::ShapeExtend_Status status);
	void SetSplitSurfaceTool(Macad::Occt::ShapeUpgrade_SplitSurface^ splitSurfaceTool);
	void SetWireDivideTool(Macad::Occt::ShapeUpgrade_WireDivide^ wireDivideTool);
	Macad::Occt::ShapeUpgrade_SplitSurface^ GetSplitSurfaceTool();
	Macad::Occt::ShapeUpgrade_WireDivide^ GetWireDivideTool();
}; // class ShapeUpgrade_FaceDivide

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ClosedFaceDivide
//---------------------------------------------------------------------
public ref class ShapeUpgrade_ClosedFaceDivide sealed : public Macad::Occt::ShapeUpgrade_FaceDivide
{

#ifdef Include_ShapeUpgrade_ClosedFaceDivide_h
public:
	Include_ShapeUpgrade_ClosedFaceDivide_h
#endif

public:
	ShapeUpgrade_ClosedFaceDivide(::ShapeUpgrade_ClosedFaceDivide* nativeInstance)
		: Macad::Occt::ShapeUpgrade_FaceDivide( nativeInstance )
	{}

	ShapeUpgrade_ClosedFaceDivide(::ShapeUpgrade_ClosedFaceDivide& nativeInstance)
		: Macad::Occt::ShapeUpgrade_FaceDivide( nativeInstance )
	{}

	property ::ShapeUpgrade_ClosedFaceDivide* NativeInstance
	{
		::ShapeUpgrade_ClosedFaceDivide* get()
		{
			return static_cast<::ShapeUpgrade_ClosedFaceDivide*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_ClosedFaceDivide^ CreateDowncasted(::ShapeUpgrade_ClosedFaceDivide* instance);

public:
	ShapeUpgrade_ClosedFaceDivide();
	ShapeUpgrade_ClosedFaceDivide(Macad::Occt::TopoDS_Face^ F);
	ShapeUpgrade_ClosedFaceDivide(Macad::Occt::ShapeUpgrade_ClosedFaceDivide^ parameter1);
	bool SplitSurface();
	void SetNbSplitPoints(int num);
	int GetNbSplitPoints();
}; // class ShapeUpgrade_ClosedFaceDivide

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_FaceDivideArea
//---------------------------------------------------------------------
public ref class ShapeUpgrade_FaceDivideArea sealed : public Macad::Occt::ShapeUpgrade_FaceDivide
{

#ifdef Include_ShapeUpgrade_FaceDivideArea_h
public:
	Include_ShapeUpgrade_FaceDivideArea_h
#endif

public:
	ShapeUpgrade_FaceDivideArea(::ShapeUpgrade_FaceDivideArea* nativeInstance)
		: Macad::Occt::ShapeUpgrade_FaceDivide( nativeInstance )
	{}

	ShapeUpgrade_FaceDivideArea(::ShapeUpgrade_FaceDivideArea& nativeInstance)
		: Macad::Occt::ShapeUpgrade_FaceDivide( nativeInstance )
	{}

	property ::ShapeUpgrade_FaceDivideArea* NativeInstance
	{
		::ShapeUpgrade_FaceDivideArea* get()
		{
			return static_cast<::ShapeUpgrade_FaceDivideArea*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_FaceDivideArea^ CreateDowncasted(::ShapeUpgrade_FaceDivideArea* instance);

public:
	ShapeUpgrade_FaceDivideArea();
	ShapeUpgrade_FaceDivideArea(Macad::Occt::TopoDS_Face^ F);
	ShapeUpgrade_FaceDivideArea(Macad::Occt::ShapeUpgrade_FaceDivideArea^ parameter1);
	bool Perform();
	double MaxArea();
}; // class ShapeUpgrade_FaceDivideArea

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivide
//---------------------------------------------------------------------
public ref class ShapeUpgrade_ShapeDivide : public BaseClass<::ShapeUpgrade_ShapeDivide>
{

#ifdef Include_ShapeUpgrade_ShapeDivide_h
public:
	Include_ShapeUpgrade_ShapeDivide_h
#endif

protected:
	ShapeUpgrade_ShapeDivide(InitMode init)
		: BaseClass<::ShapeUpgrade_ShapeDivide>( init )
	{}

public:
	ShapeUpgrade_ShapeDivide(::ShapeUpgrade_ShapeDivide* nativeInstance)
		: BaseClass<::ShapeUpgrade_ShapeDivide>( nativeInstance, true )
	{}

	ShapeUpgrade_ShapeDivide(::ShapeUpgrade_ShapeDivide& nativeInstance)
		: BaseClass<::ShapeUpgrade_ShapeDivide>( &nativeInstance, false )
	{}

	property ::ShapeUpgrade_ShapeDivide* NativeInstance
	{
		::ShapeUpgrade_ShapeDivide* get()
		{
			return static_cast<::ShapeUpgrade_ShapeDivide*>(_NativeInstance);
		}
	}

public:
	ShapeUpgrade_ShapeDivide();
	ShapeUpgrade_ShapeDivide(Macad::Occt::TopoDS_Shape^ S);
	ShapeUpgrade_ShapeDivide(Macad::Occt::ShapeUpgrade_ShapeDivide^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ S);
	void SetPrecision(double Prec);
	void SetMaxTolerance(double maxtol);
	void SetMinTolerance(double mintol);
	void SetSurfaceSegmentMode(bool Segment);
	bool Perform(bool newContext);
	bool Perform();
	Macad::Occt::TopoDS_Shape^ Result();
	Macad::Occt::ShapeBuild_ReShape^ GetContext();
	void SetContext(Macad::Occt::ShapeBuild_ReShape^ context);
	void SetMsgRegistrator(Macad::Occt::ShapeExtend_BasicMsgRegistrator^ msgreg);
	Macad::Occt::ShapeExtend_BasicMsgRegistrator^ MsgRegistrator();
	void SendMsg(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity);
	void SendMsg(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message);
	bool Status(Macad::Occt::ShapeExtend_Status status);
	void SetSplitFaceTool(Macad::Occt::ShapeUpgrade_FaceDivide^ splitFaceTool);
	void SetEdgeMode(int aEdgeMode);
}; // class ShapeUpgrade_ShapeDivide

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivideArea
//---------------------------------------------------------------------
public ref class ShapeUpgrade_ShapeDivideArea sealed : public Macad::Occt::ShapeUpgrade_ShapeDivide
{

#ifdef Include_ShapeUpgrade_ShapeDivideArea_h
public:
	Include_ShapeUpgrade_ShapeDivideArea_h
#endif

public:
	ShapeUpgrade_ShapeDivideArea(::ShapeUpgrade_ShapeDivideArea* nativeInstance)
		: Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
	{}

	ShapeUpgrade_ShapeDivideArea(::ShapeUpgrade_ShapeDivideArea& nativeInstance)
		: Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
	{}

	property ::ShapeUpgrade_ShapeDivideArea* NativeInstance
	{
		::ShapeUpgrade_ShapeDivideArea* get()
		{
			return static_cast<::ShapeUpgrade_ShapeDivideArea*>(_NativeInstance);
		}
	}

public:
	ShapeUpgrade_ShapeDivideArea();
	ShapeUpgrade_ShapeDivideArea(Macad::Occt::TopoDS_Shape^ S);
	ShapeUpgrade_ShapeDivideArea(Macad::Occt::ShapeUpgrade_ShapeDivideArea^ parameter1);
	double MaxArea();
}; // class ShapeUpgrade_ShapeDivideArea

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivideContinuity
//---------------------------------------------------------------------
public ref class ShapeUpgrade_ShapeDivideContinuity sealed : public Macad::Occt::ShapeUpgrade_ShapeDivide
{

#ifdef Include_ShapeUpgrade_ShapeDivideContinuity_h
public:
	Include_ShapeUpgrade_ShapeDivideContinuity_h
#endif

public:
	ShapeUpgrade_ShapeDivideContinuity(::ShapeUpgrade_ShapeDivideContinuity* nativeInstance)
		: Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
	{}

	ShapeUpgrade_ShapeDivideContinuity(::ShapeUpgrade_ShapeDivideContinuity& nativeInstance)
		: Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
	{}

	property ::ShapeUpgrade_ShapeDivideContinuity* NativeInstance
	{
		::ShapeUpgrade_ShapeDivideContinuity* get()
		{
			return static_cast<::ShapeUpgrade_ShapeDivideContinuity*>(_NativeInstance);
		}
	}

public:
	ShapeUpgrade_ShapeDivideContinuity();
	ShapeUpgrade_ShapeDivideContinuity(Macad::Occt::TopoDS_Shape^ S);
	ShapeUpgrade_ShapeDivideContinuity(Macad::Occt::ShapeUpgrade_ShapeDivideContinuity^ parameter1);
	void SetTolerance(double Tol);
	void SetTolerance2d(double Tol);
	void SetBoundaryCriterion(Macad::Occt::GeomAbs_Shape Criterion);
	void SetBoundaryCriterion();
	void SetPCurveCriterion(Macad::Occt::GeomAbs_Shape Criterion);
	void SetPCurveCriterion();
	void SetSurfaceCriterion(Macad::Occt::GeomAbs_Shape Criterion);
	void SetSurfaceCriterion();
}; // class ShapeUpgrade_ShapeDivideContinuity

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivideAngle
//---------------------------------------------------------------------
public ref class ShapeUpgrade_ShapeDivideAngle sealed : public Macad::Occt::ShapeUpgrade_ShapeDivide
{

#ifdef Include_ShapeUpgrade_ShapeDivideAngle_h
public:
	Include_ShapeUpgrade_ShapeDivideAngle_h
#endif

public:
	ShapeUpgrade_ShapeDivideAngle(::ShapeUpgrade_ShapeDivideAngle* nativeInstance)
		: Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
	{}

	ShapeUpgrade_ShapeDivideAngle(::ShapeUpgrade_ShapeDivideAngle& nativeInstance)
		: Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
	{}

	property ::ShapeUpgrade_ShapeDivideAngle* NativeInstance
	{
		::ShapeUpgrade_ShapeDivideAngle* get()
		{
			return static_cast<::ShapeUpgrade_ShapeDivideAngle*>(_NativeInstance);
		}
	}

public:
	ShapeUpgrade_ShapeDivideAngle(double MaxAngle);
	ShapeUpgrade_ShapeDivideAngle(double MaxAngle, Macad::Occt::TopoDS_Shape^ S);
	ShapeUpgrade_ShapeDivideAngle(Macad::Occt::ShapeUpgrade_ShapeDivideAngle^ parameter1);
	void InitTool(double MaxAngle);
	void SetMaxAngle(double MaxAngle);
	double MaxAngle();
}; // class ShapeUpgrade_ShapeDivideAngle

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeConvertToBezier
//---------------------------------------------------------------------
public ref class ShapeUpgrade_ShapeConvertToBezier sealed : public Macad::Occt::ShapeUpgrade_ShapeDivide
{

#ifdef Include_ShapeUpgrade_ShapeConvertToBezier_h
public:
	Include_ShapeUpgrade_ShapeConvertToBezier_h
#endif

public:
	ShapeUpgrade_ShapeConvertToBezier(::ShapeUpgrade_ShapeConvertToBezier* nativeInstance)
		: Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
	{}

	ShapeUpgrade_ShapeConvertToBezier(::ShapeUpgrade_ShapeConvertToBezier& nativeInstance)
		: Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
	{}

	property ::ShapeUpgrade_ShapeConvertToBezier* NativeInstance
	{
		::ShapeUpgrade_ShapeConvertToBezier* get()
		{
			return static_cast<::ShapeUpgrade_ShapeConvertToBezier*>(_NativeInstance);
		}
	}

public:
	ShapeUpgrade_ShapeConvertToBezier();
	ShapeUpgrade_ShapeConvertToBezier(Macad::Occt::TopoDS_Shape^ S);
	ShapeUpgrade_ShapeConvertToBezier(Macad::Occt::ShapeUpgrade_ShapeConvertToBezier^ parameter1);
	void Set2dConversion(bool mode);
	bool Get2dConversion();
	void Set3dConversion(bool mode);
	bool Get3dConversion();
	void SetSurfaceConversion(bool mode);
	bool GetSurfaceConversion();
	void Set3dLineConversion(bool mode);
	bool Get3dLineConversion();
	void Set3dCircleConversion(bool mode);
	bool Get3dCircleConversion();
	void Set3dConicConversion(bool mode);
	bool Get3dConicConversion();
	void SetPlaneMode(bool mode);
	bool GetPlaneMode();
	void SetRevolutionMode(bool mode);
	bool GetRevolutionMode();
	void SetExtrusionMode(bool mode);
	bool GetExtrusionMode();
	void SetBSplineMode(bool mode);
	bool GetBSplineMode();
	bool Perform(bool newContext);
	bool Perform();
}; // class ShapeUpgrade_ShapeConvertToBezier

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivideClosed
//---------------------------------------------------------------------
public ref class ShapeUpgrade_ShapeDivideClosed sealed : public Macad::Occt::ShapeUpgrade_ShapeDivide
{

#ifdef Include_ShapeUpgrade_ShapeDivideClosed_h
public:
	Include_ShapeUpgrade_ShapeDivideClosed_h
#endif

public:
	ShapeUpgrade_ShapeDivideClosed(::ShapeUpgrade_ShapeDivideClosed* nativeInstance)
		: Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
	{}

	ShapeUpgrade_ShapeDivideClosed(::ShapeUpgrade_ShapeDivideClosed& nativeInstance)
		: Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
	{}

	property ::ShapeUpgrade_ShapeDivideClosed* NativeInstance
	{
		::ShapeUpgrade_ShapeDivideClosed* get()
		{
			return static_cast<::ShapeUpgrade_ShapeDivideClosed*>(_NativeInstance);
		}
	}

public:
	ShapeUpgrade_ShapeDivideClosed(Macad::Occt::TopoDS_Shape^ S);
	ShapeUpgrade_ShapeDivideClosed(Macad::Occt::ShapeUpgrade_ShapeDivideClosed^ parameter1);
	void SetNbSplitPoints(int num);
}; // class ShapeUpgrade_ShapeDivideClosed

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivideClosedEdges
//---------------------------------------------------------------------
public ref class ShapeUpgrade_ShapeDivideClosedEdges sealed : public Macad::Occt::ShapeUpgrade_ShapeDivide
{

#ifdef Include_ShapeUpgrade_ShapeDivideClosedEdges_h
public:
	Include_ShapeUpgrade_ShapeDivideClosedEdges_h
#endif

public:
	ShapeUpgrade_ShapeDivideClosedEdges(::ShapeUpgrade_ShapeDivideClosedEdges* nativeInstance)
		: Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
	{}

	ShapeUpgrade_ShapeDivideClosedEdges(::ShapeUpgrade_ShapeDivideClosedEdges& nativeInstance)
		: Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
	{}

	property ::ShapeUpgrade_ShapeDivideClosedEdges* NativeInstance
	{
		::ShapeUpgrade_ShapeDivideClosedEdges* get()
		{
			return static_cast<::ShapeUpgrade_ShapeDivideClosedEdges*>(_NativeInstance);
		}
	}

public:
	ShapeUpgrade_ShapeDivideClosedEdges(Macad::Occt::TopoDS_Shape^ S);
	ShapeUpgrade_ShapeDivideClosedEdges(Macad::Occt::ShapeUpgrade_ShapeDivideClosedEdges^ parameter1);
	void SetNbSplitPoints(int num);
}; // class ShapeUpgrade_ShapeDivideClosedEdges

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitCurve
//---------------------------------------------------------------------
public ref class ShapeUpgrade_SplitCurve : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeUpgrade_SplitCurve_h
public:
	Include_ShapeUpgrade_SplitCurve_h
#endif

protected:
	ShapeUpgrade_SplitCurve(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	ShapeUpgrade_SplitCurve(::ShapeUpgrade_SplitCurve* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeUpgrade_SplitCurve(::ShapeUpgrade_SplitCurve& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeUpgrade_SplitCurve* NativeInstance
	{
		::ShapeUpgrade_SplitCurve* get()
		{
			return static_cast<::ShapeUpgrade_SplitCurve*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_SplitCurve^ CreateDowncasted(::ShapeUpgrade_SplitCurve* instance);

public:
	ShapeUpgrade_SplitCurve();
	ShapeUpgrade_SplitCurve(Macad::Occt::ShapeUpgrade_SplitCurve^ parameter1);
	void Init(double First, double Last);
	void SetSplitValues(Macad::Occt::TColStd_HSequenceOfReal^ SplitValues);
	void Build(bool Segment);
	Macad::Occt::TColStd_HSequenceOfReal^ SplitValues();
	void Compute();
	void Perform(bool Segment);
	void Perform();
	bool Status(Macad::Occt::ShapeExtend_Status status);
}; // class ShapeUpgrade_SplitCurve

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitCurve2d
//---------------------------------------------------------------------
public ref class ShapeUpgrade_SplitCurve2d : public Macad::Occt::ShapeUpgrade_SplitCurve
{

#ifdef Include_ShapeUpgrade_SplitCurve2d_h
public:
	Include_ShapeUpgrade_SplitCurve2d_h
#endif

protected:
	ShapeUpgrade_SplitCurve2d(InitMode init)
		: Macad::Occt::ShapeUpgrade_SplitCurve( init )
	{}

public:
	ShapeUpgrade_SplitCurve2d(::ShapeUpgrade_SplitCurve2d* nativeInstance)
		: Macad::Occt::ShapeUpgrade_SplitCurve( nativeInstance )
	{}

	ShapeUpgrade_SplitCurve2d(::ShapeUpgrade_SplitCurve2d& nativeInstance)
		: Macad::Occt::ShapeUpgrade_SplitCurve( nativeInstance )
	{}

	property ::ShapeUpgrade_SplitCurve2d* NativeInstance
	{
		::ShapeUpgrade_SplitCurve2d* get()
		{
			return static_cast<::ShapeUpgrade_SplitCurve2d*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_SplitCurve2d^ CreateDowncasted(::ShapeUpgrade_SplitCurve2d* instance);

public:
	ShapeUpgrade_SplitCurve2d();
	ShapeUpgrade_SplitCurve2d(Macad::Occt::ShapeUpgrade_SplitCurve2d^ parameter1);
	void Init(Macad::Occt::Geom2d_Curve^ C);
	void Init(Macad::Occt::Geom2d_Curve^ C, double First, double Last);
	void Build(bool Segment);
	/* Method skipped due to unknown mapping: TColGeom2d_HArray1OfCurve GetCurves() */
}; // class ShapeUpgrade_SplitCurve2d

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitCurve2dContinuity
//---------------------------------------------------------------------
public ref class ShapeUpgrade_SplitCurve2dContinuity sealed : public Macad::Occt::ShapeUpgrade_SplitCurve2d
{

#ifdef Include_ShapeUpgrade_SplitCurve2dContinuity_h
public:
	Include_ShapeUpgrade_SplitCurve2dContinuity_h
#endif

public:
	ShapeUpgrade_SplitCurve2dContinuity(::ShapeUpgrade_SplitCurve2dContinuity* nativeInstance)
		: Macad::Occt::ShapeUpgrade_SplitCurve2d( nativeInstance )
	{}

	ShapeUpgrade_SplitCurve2dContinuity(::ShapeUpgrade_SplitCurve2dContinuity& nativeInstance)
		: Macad::Occt::ShapeUpgrade_SplitCurve2d( nativeInstance )
	{}

	property ::ShapeUpgrade_SplitCurve2dContinuity* NativeInstance
	{
		::ShapeUpgrade_SplitCurve2dContinuity* get()
		{
			return static_cast<::ShapeUpgrade_SplitCurve2dContinuity*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_SplitCurve2dContinuity^ CreateDowncasted(::ShapeUpgrade_SplitCurve2dContinuity* instance);

public:
	ShapeUpgrade_SplitCurve2dContinuity();
	ShapeUpgrade_SplitCurve2dContinuity(Macad::Occt::ShapeUpgrade_SplitCurve2dContinuity^ parameter1);
	void SetCriterion(Macad::Occt::GeomAbs_Shape Criterion);
	void SetTolerance(double Tol);
	void Compute();
}; // class ShapeUpgrade_SplitCurve2dContinuity

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ConvertCurve2dToBezier
//---------------------------------------------------------------------
public ref class ShapeUpgrade_ConvertCurve2dToBezier sealed : public Macad::Occt::ShapeUpgrade_SplitCurve2d
{

#ifdef Include_ShapeUpgrade_ConvertCurve2dToBezier_h
public:
	Include_ShapeUpgrade_ConvertCurve2dToBezier_h
#endif

public:
	ShapeUpgrade_ConvertCurve2dToBezier(::ShapeUpgrade_ConvertCurve2dToBezier* nativeInstance)
		: Macad::Occt::ShapeUpgrade_SplitCurve2d( nativeInstance )
	{}

	ShapeUpgrade_ConvertCurve2dToBezier(::ShapeUpgrade_ConvertCurve2dToBezier& nativeInstance)
		: Macad::Occt::ShapeUpgrade_SplitCurve2d( nativeInstance )
	{}

	property ::ShapeUpgrade_ConvertCurve2dToBezier* NativeInstance
	{
		::ShapeUpgrade_ConvertCurve2dToBezier* get()
		{
			return static_cast<::ShapeUpgrade_ConvertCurve2dToBezier*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_ConvertCurve2dToBezier^ CreateDowncasted(::ShapeUpgrade_ConvertCurve2dToBezier* instance);

public:
	ShapeUpgrade_ConvertCurve2dToBezier();
	ShapeUpgrade_ConvertCurve2dToBezier(Macad::Occt::ShapeUpgrade_ConvertCurve2dToBezier^ parameter1);
	void Compute();
	void Build(bool Segment);
	Macad::Occt::TColStd_HSequenceOfReal^ SplitParams();
}; // class ShapeUpgrade_ConvertCurve2dToBezier

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitCurve3d
//---------------------------------------------------------------------
public ref class ShapeUpgrade_SplitCurve3d : public Macad::Occt::ShapeUpgrade_SplitCurve
{

#ifdef Include_ShapeUpgrade_SplitCurve3d_h
public:
	Include_ShapeUpgrade_SplitCurve3d_h
#endif

protected:
	ShapeUpgrade_SplitCurve3d(InitMode init)
		: Macad::Occt::ShapeUpgrade_SplitCurve( init )
	{}

public:
	ShapeUpgrade_SplitCurve3d(::ShapeUpgrade_SplitCurve3d* nativeInstance)
		: Macad::Occt::ShapeUpgrade_SplitCurve( nativeInstance )
	{}

	ShapeUpgrade_SplitCurve3d(::ShapeUpgrade_SplitCurve3d& nativeInstance)
		: Macad::Occt::ShapeUpgrade_SplitCurve( nativeInstance )
	{}

	property ::ShapeUpgrade_SplitCurve3d* NativeInstance
	{
		::ShapeUpgrade_SplitCurve3d* get()
		{
			return static_cast<::ShapeUpgrade_SplitCurve3d*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_SplitCurve3d^ CreateDowncasted(::ShapeUpgrade_SplitCurve3d* instance);

public:
	ShapeUpgrade_SplitCurve3d();
	ShapeUpgrade_SplitCurve3d(Macad::Occt::ShapeUpgrade_SplitCurve3d^ parameter1);
	void Init(Macad::Occt::Geom_Curve^ C);
	void Init(Macad::Occt::Geom_Curve^ C, double First, double Last);
	void Build(bool Segment);
	/* Method skipped due to unknown mapping: TColGeom_HArray1OfCurve GetCurves() */
}; // class ShapeUpgrade_SplitCurve3d

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitCurve3dContinuity
//---------------------------------------------------------------------
public ref class ShapeUpgrade_SplitCurve3dContinuity sealed : public Macad::Occt::ShapeUpgrade_SplitCurve3d
{

#ifdef Include_ShapeUpgrade_SplitCurve3dContinuity_h
public:
	Include_ShapeUpgrade_SplitCurve3dContinuity_h
#endif

public:
	ShapeUpgrade_SplitCurve3dContinuity(::ShapeUpgrade_SplitCurve3dContinuity* nativeInstance)
		: Macad::Occt::ShapeUpgrade_SplitCurve3d( nativeInstance )
	{}

	ShapeUpgrade_SplitCurve3dContinuity(::ShapeUpgrade_SplitCurve3dContinuity& nativeInstance)
		: Macad::Occt::ShapeUpgrade_SplitCurve3d( nativeInstance )
	{}

	property ::ShapeUpgrade_SplitCurve3dContinuity* NativeInstance
	{
		::ShapeUpgrade_SplitCurve3dContinuity* get()
		{
			return static_cast<::ShapeUpgrade_SplitCurve3dContinuity*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_SplitCurve3dContinuity^ CreateDowncasted(::ShapeUpgrade_SplitCurve3dContinuity* instance);

public:
	ShapeUpgrade_SplitCurve3dContinuity();
	ShapeUpgrade_SplitCurve3dContinuity(Macad::Occt::ShapeUpgrade_SplitCurve3dContinuity^ parameter1);
	void SetCriterion(Macad::Occt::GeomAbs_Shape Criterion);
	void SetTolerance(double Tol);
	void Compute();
	Macad::Occt::Geom_Curve^ GetCurve();
}; // class ShapeUpgrade_SplitCurve3dContinuity

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ConvertCurve3dToBezier
//---------------------------------------------------------------------
public ref class ShapeUpgrade_ConvertCurve3dToBezier sealed : public Macad::Occt::ShapeUpgrade_SplitCurve3d
{

#ifdef Include_ShapeUpgrade_ConvertCurve3dToBezier_h
public:
	Include_ShapeUpgrade_ConvertCurve3dToBezier_h
#endif

public:
	ShapeUpgrade_ConvertCurve3dToBezier(::ShapeUpgrade_ConvertCurve3dToBezier* nativeInstance)
		: Macad::Occt::ShapeUpgrade_SplitCurve3d( nativeInstance )
	{}

	ShapeUpgrade_ConvertCurve3dToBezier(::ShapeUpgrade_ConvertCurve3dToBezier& nativeInstance)
		: Macad::Occt::ShapeUpgrade_SplitCurve3d( nativeInstance )
	{}

	property ::ShapeUpgrade_ConvertCurve3dToBezier* NativeInstance
	{
		::ShapeUpgrade_ConvertCurve3dToBezier* get()
		{
			return static_cast<::ShapeUpgrade_ConvertCurve3dToBezier*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_ConvertCurve3dToBezier^ CreateDowncasted(::ShapeUpgrade_ConvertCurve3dToBezier* instance);

public:
	ShapeUpgrade_ConvertCurve3dToBezier();
	ShapeUpgrade_ConvertCurve3dToBezier(Macad::Occt::ShapeUpgrade_ConvertCurve3dToBezier^ parameter1);
	void SetLineMode(bool mode);
	bool GetLineMode();
	void SetCircleMode(bool mode);
	bool GetCircleMode();
	void SetConicMode(bool mode);
	bool GetConicMode();
	void Compute();
	void Build(bool Segment);
	Macad::Occt::TColStd_HSequenceOfReal^ SplitParams();
}; // class ShapeUpgrade_ConvertCurve3dToBezier

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitSurface
//---------------------------------------------------------------------
public ref class ShapeUpgrade_SplitSurface : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeUpgrade_SplitSurface_h
public:
	Include_ShapeUpgrade_SplitSurface_h
#endif

protected:
	ShapeUpgrade_SplitSurface(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	ShapeUpgrade_SplitSurface(::ShapeUpgrade_SplitSurface* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeUpgrade_SplitSurface(::ShapeUpgrade_SplitSurface& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeUpgrade_SplitSurface* NativeInstance
	{
		::ShapeUpgrade_SplitSurface* get()
		{
			return static_cast<::ShapeUpgrade_SplitSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_SplitSurface^ CreateDowncasted(::ShapeUpgrade_SplitSurface* instance);

public:
	ShapeUpgrade_SplitSurface();
	ShapeUpgrade_SplitSurface(Macad::Occt::ShapeUpgrade_SplitSurface^ parameter1);
	void Init(Macad::Occt::Geom_Surface^ S);
	void Init(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast);
	void SetUSplitValues(Macad::Occt::TColStd_HSequenceOfReal^ UValues);
	void SetVSplitValues(Macad::Occt::TColStd_HSequenceOfReal^ VValues);
	void Build(bool Segment);
	void Compute(bool Segment);
	void Compute();
	void Perform(bool Segment);
	void Perform();
	Macad::Occt::TColStd_HSequenceOfReal^ USplitValues();
	Macad::Occt::TColStd_HSequenceOfReal^ VSplitValues();
	bool Status(Macad::Occt::ShapeExtend_Status status);
	Macad::Occt::ShapeExtend_CompositeSurface^ ResSurfaces();
}; // class ShapeUpgrade_SplitSurface

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitSurfaceContinuity
//---------------------------------------------------------------------
public ref class ShapeUpgrade_SplitSurfaceContinuity sealed : public Macad::Occt::ShapeUpgrade_SplitSurface
{

#ifdef Include_ShapeUpgrade_SplitSurfaceContinuity_h
public:
	Include_ShapeUpgrade_SplitSurfaceContinuity_h
#endif

public:
	ShapeUpgrade_SplitSurfaceContinuity(::ShapeUpgrade_SplitSurfaceContinuity* nativeInstance)
		: Macad::Occt::ShapeUpgrade_SplitSurface( nativeInstance )
	{}

	ShapeUpgrade_SplitSurfaceContinuity(::ShapeUpgrade_SplitSurfaceContinuity& nativeInstance)
		: Macad::Occt::ShapeUpgrade_SplitSurface( nativeInstance )
	{}

	property ::ShapeUpgrade_SplitSurfaceContinuity* NativeInstance
	{
		::ShapeUpgrade_SplitSurfaceContinuity* get()
		{
			return static_cast<::ShapeUpgrade_SplitSurfaceContinuity*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_SplitSurfaceContinuity^ CreateDowncasted(::ShapeUpgrade_SplitSurfaceContinuity* instance);

public:
	ShapeUpgrade_SplitSurfaceContinuity();
	ShapeUpgrade_SplitSurfaceContinuity(Macad::Occt::ShapeUpgrade_SplitSurfaceContinuity^ parameter1);
	void SetCriterion(Macad::Occt::GeomAbs_Shape Criterion);
	void SetTolerance(double Tol);
	void Compute(bool Segment);
}; // class ShapeUpgrade_SplitSurfaceContinuity

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitSurfaceAngle
//---------------------------------------------------------------------
public ref class ShapeUpgrade_SplitSurfaceAngle sealed : public Macad::Occt::ShapeUpgrade_SplitSurface
{

#ifdef Include_ShapeUpgrade_SplitSurfaceAngle_h
public:
	Include_ShapeUpgrade_SplitSurfaceAngle_h
#endif

public:
	ShapeUpgrade_SplitSurfaceAngle(::ShapeUpgrade_SplitSurfaceAngle* nativeInstance)
		: Macad::Occt::ShapeUpgrade_SplitSurface( nativeInstance )
	{}

	ShapeUpgrade_SplitSurfaceAngle(::ShapeUpgrade_SplitSurfaceAngle& nativeInstance)
		: Macad::Occt::ShapeUpgrade_SplitSurface( nativeInstance )
	{}

	property ::ShapeUpgrade_SplitSurfaceAngle* NativeInstance
	{
		::ShapeUpgrade_SplitSurfaceAngle* get()
		{
			return static_cast<::ShapeUpgrade_SplitSurfaceAngle*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_SplitSurfaceAngle^ CreateDowncasted(::ShapeUpgrade_SplitSurfaceAngle* instance);

public:
	ShapeUpgrade_SplitSurfaceAngle(double MaxAngle);
	ShapeUpgrade_SplitSurfaceAngle(Macad::Occt::ShapeUpgrade_SplitSurfaceAngle^ parameter1);
	void SetMaxAngle(double MaxAngle);
	double MaxAngle();
	void Compute(bool Segment);
}; // class ShapeUpgrade_SplitSurfaceAngle

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ConvertSurfaceToBezierBasis
//---------------------------------------------------------------------
public ref class ShapeUpgrade_ConvertSurfaceToBezierBasis sealed : public Macad::Occt::ShapeUpgrade_SplitSurface
{

#ifdef Include_ShapeUpgrade_ConvertSurfaceToBezierBasis_h
public:
	Include_ShapeUpgrade_ConvertSurfaceToBezierBasis_h
#endif

public:
	ShapeUpgrade_ConvertSurfaceToBezierBasis(::ShapeUpgrade_ConvertSurfaceToBezierBasis* nativeInstance)
		: Macad::Occt::ShapeUpgrade_SplitSurface( nativeInstance )
	{}

	ShapeUpgrade_ConvertSurfaceToBezierBasis(::ShapeUpgrade_ConvertSurfaceToBezierBasis& nativeInstance)
		: Macad::Occt::ShapeUpgrade_SplitSurface( nativeInstance )
	{}

	property ::ShapeUpgrade_ConvertSurfaceToBezierBasis* NativeInstance
	{
		::ShapeUpgrade_ConvertSurfaceToBezierBasis* get()
		{
			return static_cast<::ShapeUpgrade_ConvertSurfaceToBezierBasis*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_ConvertSurfaceToBezierBasis^ CreateDowncasted(::ShapeUpgrade_ConvertSurfaceToBezierBasis* instance);

public:
	ShapeUpgrade_ConvertSurfaceToBezierBasis();
	ShapeUpgrade_ConvertSurfaceToBezierBasis(Macad::Occt::ShapeUpgrade_ConvertSurfaceToBezierBasis^ parameter1);
	void Build(bool Segment);
	void Compute(bool Segment);
	Macad::Occt::ShapeExtend_CompositeSurface^ Segments();
	void SetPlaneMode(bool mode);
	bool GetPlaneMode();
	void SetRevolutionMode(bool mode);
	bool GetRevolutionMode();
	void SetExtrusionMode(bool mode);
	bool GetExtrusionMode();
	void SetBSplineMode(bool mode);
	bool GetBSplineMode();
}; // class ShapeUpgrade_ConvertSurfaceToBezierBasis

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitSurfaceArea
//---------------------------------------------------------------------
public ref class ShapeUpgrade_SplitSurfaceArea sealed : public Macad::Occt::ShapeUpgrade_SplitSurface
{

#ifdef Include_ShapeUpgrade_SplitSurfaceArea_h
public:
	Include_ShapeUpgrade_SplitSurfaceArea_h
#endif

public:
	ShapeUpgrade_SplitSurfaceArea(::ShapeUpgrade_SplitSurfaceArea* nativeInstance)
		: Macad::Occt::ShapeUpgrade_SplitSurface( nativeInstance )
	{}

	ShapeUpgrade_SplitSurfaceArea(::ShapeUpgrade_SplitSurfaceArea& nativeInstance)
		: Macad::Occt::ShapeUpgrade_SplitSurface( nativeInstance )
	{}

	property ::ShapeUpgrade_SplitSurfaceArea* NativeInstance
	{
		::ShapeUpgrade_SplitSurfaceArea* get()
		{
			return static_cast<::ShapeUpgrade_SplitSurfaceArea*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_SplitSurfaceArea^ CreateDowncasted(::ShapeUpgrade_SplitSurfaceArea* instance);

public:
	ShapeUpgrade_SplitSurfaceArea();
	ShapeUpgrade_SplitSurfaceArea(Macad::Occt::ShapeUpgrade_SplitSurfaceArea^ parameter1);
	int NbParts();
	void Compute(bool Segment);
	void Compute();
}; // class ShapeUpgrade_SplitSurfaceArea

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShellSewing
//---------------------------------------------------------------------
public ref class ShapeUpgrade_ShellSewing sealed : public BaseClass<::ShapeUpgrade_ShellSewing>
{

#ifdef Include_ShapeUpgrade_ShellSewing_h
public:
	Include_ShapeUpgrade_ShellSewing_h
#endif

public:
	ShapeUpgrade_ShellSewing(::ShapeUpgrade_ShellSewing* nativeInstance)
		: BaseClass<::ShapeUpgrade_ShellSewing>( nativeInstance, true )
	{}

	ShapeUpgrade_ShellSewing(::ShapeUpgrade_ShellSewing& nativeInstance)
		: BaseClass<::ShapeUpgrade_ShellSewing>( &nativeInstance, false )
	{}

	property ::ShapeUpgrade_ShellSewing* NativeInstance
	{
		::ShapeUpgrade_ShellSewing* get()
		{
			return static_cast<::ShapeUpgrade_ShellSewing*>(_NativeInstance);
		}
	}

public:
	ShapeUpgrade_ShellSewing();
	ShapeUpgrade_ShellSewing(Macad::Occt::ShapeUpgrade_ShellSewing^ parameter1);
	Macad::Occt::TopoDS_Shape^ ApplySewing(Macad::Occt::TopoDS_Shape^ shape, double tol);
	Macad::Occt::TopoDS_Shape^ ApplySewing(Macad::Occt::TopoDS_Shape^ shape);
}; // class ShapeUpgrade_ShellSewing

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_FixSmallCurves
//---------------------------------------------------------------------
public ref class ShapeUpgrade_FixSmallCurves : public Macad::Occt::ShapeUpgrade_Tool
{

#ifdef Include_ShapeUpgrade_FixSmallCurves_h
public:
	Include_ShapeUpgrade_FixSmallCurves_h
#endif

protected:
	ShapeUpgrade_FixSmallCurves(InitMode init)
		: Macad::Occt::ShapeUpgrade_Tool( init )
	{}

public:
	ShapeUpgrade_FixSmallCurves(::ShapeUpgrade_FixSmallCurves* nativeInstance)
		: Macad::Occt::ShapeUpgrade_Tool( nativeInstance )
	{}

	ShapeUpgrade_FixSmallCurves(::ShapeUpgrade_FixSmallCurves& nativeInstance)
		: Macad::Occt::ShapeUpgrade_Tool( nativeInstance )
	{}

	property ::ShapeUpgrade_FixSmallCurves* NativeInstance
	{
		::ShapeUpgrade_FixSmallCurves* get()
		{
			return static_cast<::ShapeUpgrade_FixSmallCurves*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_FixSmallCurves^ CreateDowncasted(::ShapeUpgrade_FixSmallCurves* instance);

public:
	ShapeUpgrade_FixSmallCurves();
	ShapeUpgrade_FixSmallCurves(Macad::Occt::ShapeUpgrade_FixSmallCurves^ parameter1);
	void Init(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace);
	bool Approx(Macad::Occt::Geom_Curve^ Curve3d, Macad::Occt::Geom2d_Curve^ Curve2d, Macad::Occt::Geom2d_Curve^ Curve2dR, double% First, double% Last);
	void SetSplitCurve3dTool(Macad::Occt::ShapeUpgrade_SplitCurve3d^ splitCurve3dTool);
	void SetSplitCurve2dTool(Macad::Occt::ShapeUpgrade_SplitCurve2d^ splitCurve2dTool);
	bool Status(Macad::Occt::ShapeExtend_Status status);
}; // class ShapeUpgrade_FixSmallCurves

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_FixSmallBezierCurves
//---------------------------------------------------------------------
public ref class ShapeUpgrade_FixSmallBezierCurves sealed : public Macad::Occt::ShapeUpgrade_FixSmallCurves
{

#ifdef Include_ShapeUpgrade_FixSmallBezierCurves_h
public:
	Include_ShapeUpgrade_FixSmallBezierCurves_h
#endif

public:
	ShapeUpgrade_FixSmallBezierCurves(::ShapeUpgrade_FixSmallBezierCurves* nativeInstance)
		: Macad::Occt::ShapeUpgrade_FixSmallCurves( nativeInstance )
	{}

	ShapeUpgrade_FixSmallBezierCurves(::ShapeUpgrade_FixSmallBezierCurves& nativeInstance)
		: Macad::Occt::ShapeUpgrade_FixSmallCurves( nativeInstance )
	{}

	property ::ShapeUpgrade_FixSmallBezierCurves* NativeInstance
	{
		::ShapeUpgrade_FixSmallBezierCurves* get()
		{
			return static_cast<::ShapeUpgrade_FixSmallBezierCurves*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_FixSmallBezierCurves^ CreateDowncasted(::ShapeUpgrade_FixSmallBezierCurves* instance);

public:
	ShapeUpgrade_FixSmallBezierCurves();
	ShapeUpgrade_FixSmallBezierCurves(Macad::Occt::ShapeUpgrade_FixSmallBezierCurves^ parameter1);
	bool Approx(Macad::Occt::Geom_Curve^ Curve3d, Macad::Occt::Geom2d_Curve^ Curve2d, Macad::Occt::Geom2d_Curve^ Curve2dR, double% First, double% Last);
}; // class ShapeUpgrade_FixSmallBezierCurves

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_RemoveLocations
//---------------------------------------------------------------------
public ref class ShapeUpgrade_RemoveLocations sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeUpgrade_RemoveLocations_h
public:
	Include_ShapeUpgrade_RemoveLocations_h
#endif

public:
	ShapeUpgrade_RemoveLocations(::ShapeUpgrade_RemoveLocations* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeUpgrade_RemoveLocations(::ShapeUpgrade_RemoveLocations& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeUpgrade_RemoveLocations* NativeInstance
	{
		::ShapeUpgrade_RemoveLocations* get()
		{
			return static_cast<::ShapeUpgrade_RemoveLocations*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_RemoveLocations^ CreateDowncasted(::ShapeUpgrade_RemoveLocations* instance);

public:
	ShapeUpgrade_RemoveLocations();
	ShapeUpgrade_RemoveLocations(Macad::Occt::ShapeUpgrade_RemoveLocations^ parameter1);
	bool Remove(Macad::Occt::TopoDS_Shape^ theShape);
	Macad::Occt::TopoDS_Shape^ GetResult();
	void SetRemoveLevel(Macad::Occt::TopAbs_ShapeEnum theLevel);
	Macad::Occt::TopAbs_ShapeEnum RemoveLevel();
	Macad::Occt::TopoDS_Shape^ ModifiedShape(Macad::Occt::TopoDS_Shape^ theInitShape);
}; // class ShapeUpgrade_RemoveLocations

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_RemoveInternalWires
//---------------------------------------------------------------------
public ref class ShapeUpgrade_RemoveInternalWires sealed : public Macad::Occt::ShapeUpgrade_Tool
{

#ifdef Include_ShapeUpgrade_RemoveInternalWires_h
public:
	Include_ShapeUpgrade_RemoveInternalWires_h
#endif

public:
	ShapeUpgrade_RemoveInternalWires(::ShapeUpgrade_RemoveInternalWires* nativeInstance)
		: Macad::Occt::ShapeUpgrade_Tool( nativeInstance )
	{}

	ShapeUpgrade_RemoveInternalWires(::ShapeUpgrade_RemoveInternalWires& nativeInstance)
		: Macad::Occt::ShapeUpgrade_Tool( nativeInstance )
	{}

	property ::ShapeUpgrade_RemoveInternalWires* NativeInstance
	{
		::ShapeUpgrade_RemoveInternalWires* get()
		{
			return static_cast<::ShapeUpgrade_RemoveInternalWires*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_RemoveInternalWires^ CreateDowncasted(::ShapeUpgrade_RemoveInternalWires* instance);

public:
	ShapeUpgrade_RemoveInternalWires();
	ShapeUpgrade_RemoveInternalWires(Macad::Occt::TopoDS_Shape^ theShape);
	ShapeUpgrade_RemoveInternalWires(Macad::Occt::ShapeUpgrade_RemoveInternalWires^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ theShape);
	bool Perform();
	bool Perform(Macad::Occt::TopTools_SequenceOfShape^ theSeqShapes);
	Macad::Occt::TopoDS_Shape^ GetResult();
	double MinArea();
	bool RemoveFaceMode();
	Macad::Occt::TopTools_SequenceOfShape^ RemovedFaces();
	Macad::Occt::TopTools_SequenceOfShape^ RemovedWires();
	bool Status(Macad::Occt::ShapeExtend_Status theStatus);
}; // class ShapeUpgrade_RemoveInternalWires

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_UnifySameDomain
//---------------------------------------------------------------------
public ref class ShapeUpgrade_UnifySameDomain sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeUpgrade_UnifySameDomain_h
public:
	Include_ShapeUpgrade_UnifySameDomain_h
#endif

public:
	ShapeUpgrade_UnifySameDomain(::ShapeUpgrade_UnifySameDomain* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeUpgrade_UnifySameDomain(::ShapeUpgrade_UnifySameDomain& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeUpgrade_UnifySameDomain* NativeInstance
	{
		::ShapeUpgrade_UnifySameDomain* get()
		{
			return static_cast<::ShapeUpgrade_UnifySameDomain*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeUpgrade_UnifySameDomain^ CreateDowncasted(::ShapeUpgrade_UnifySameDomain* instance);

public:
	ShapeUpgrade_UnifySameDomain();
	ShapeUpgrade_UnifySameDomain(Macad::Occt::TopoDS_Shape^ aShape, bool UnifyEdges, bool UnifyFaces, bool ConcatBSplines);
	ShapeUpgrade_UnifySameDomain(Macad::Occt::TopoDS_Shape^ aShape, bool UnifyEdges, bool UnifyFaces);
	ShapeUpgrade_UnifySameDomain(Macad::Occt::TopoDS_Shape^ aShape, bool UnifyEdges);
	ShapeUpgrade_UnifySameDomain(Macad::Occt::TopoDS_Shape^ aShape);
	ShapeUpgrade_UnifySameDomain(Macad::Occt::ShapeUpgrade_UnifySameDomain^ parameter1);
	void Initialize(Macad::Occt::TopoDS_Shape^ aShape, bool UnifyEdges, bool UnifyFaces, bool ConcatBSplines);
	void Initialize(Macad::Occt::TopoDS_Shape^ aShape, bool UnifyEdges, bool UnifyFaces);
	void Initialize(Macad::Occt::TopoDS_Shape^ aShape, bool UnifyEdges);
	void Initialize(Macad::Occt::TopoDS_Shape^ aShape);
	void AllowInternalEdges(bool theValue);
	void KeepShape(Macad::Occt::TopoDS_Shape^ theShape);
	void KeepShapes(Macad::Occt::TopTools_MapOfShape^ theShapes);
	void SetSafeInputMode(bool theValue);
	void SetLinearTolerance(double theValue);
	void SetAngularTolerance(double theValue);
	void Build();
	Macad::Occt::TopoDS_Shape^ Shape();
	Macad::Occt::BRepTools_History^ History();
}; // class ShapeUpgrade_UnifySameDomain

//---------------------------------------------------------------------
//  Class  ShapeUpgrade
//---------------------------------------------------------------------
public ref class ShapeUpgrade sealed : public BaseClass<::ShapeUpgrade>
{

#ifdef Include_ShapeUpgrade_h
public:
	Include_ShapeUpgrade_h
#endif

public:
	ShapeUpgrade(::ShapeUpgrade* nativeInstance)
		: BaseClass<::ShapeUpgrade>( nativeInstance, true )
	{}

	ShapeUpgrade(::ShapeUpgrade& nativeInstance)
		: BaseClass<::ShapeUpgrade>( &nativeInstance, false )
	{}

	property ::ShapeUpgrade* NativeInstance
	{
		::ShapeUpgrade* get()
		{
			return static_cast<::ShapeUpgrade*>(_NativeInstance);
		}
	}

public:
	ShapeUpgrade();
	ShapeUpgrade(Macad::Occt::ShapeUpgrade^ parameter1);
	/* Method skipped due to unknown mapping: Standard_Boolean C0BSplineToSequenceOfC1BSplineCurve(Geom_BSplineCurve BS, TColGeom_HSequenceOfBoundedCurve seqBS, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean C0BSplineToSequenceOfC1BSplineCurve(Geom2d_BSplineCurve BS, TColGeom2d_HSequenceOfBoundedCurve seqBS, ) */
}; // class ShapeUpgrade

}; // namespace Occt
}; // namespace Macad
