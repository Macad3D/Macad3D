// Generated wrapper code for package ShapeUpgrade

#include "OcctPCH.h"
#include "ShapeUpgrade.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "ShapeUpgrade.h"
#include "ShapeBuild.h"
#include "Standard.h"
#include "TopoDS.h"
#include "TColStd.h"
#include "Geom.h"
#include "TopLoc.h"
#include "ShapeExtend.h"
#include "ShapeAnalysis.h"
#include "Message.h"
#include "GeomAbs.h"
#include "Geom2d.h"
#include "TopAbs.h"
#include "TopTools.h"
#include "BRepTools.h"


//---------------------------------------------------------------------
//  Class  ShapeUpgrade_Tool
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_Tool::ShapeUpgrade_Tool()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_Tool();
}

Macad::Occt::ShapeUpgrade_Tool::ShapeUpgrade_Tool(Macad::Occt::ShapeUpgrade_Tool^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_Tool(*(::ShapeUpgrade_Tool*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_Tool::Set(Macad::Occt::ShapeUpgrade_Tool^ tool)
{
	Handle(::ShapeUpgrade_Tool) h_tool = tool->NativeInstance;
	((::ShapeUpgrade_Tool*)_NativeInstance)->Set(h_tool);
	tool->NativeInstance = h_tool.get();
}

void Macad::Occt::ShapeUpgrade_Tool::SetContext(Macad::Occt::ShapeBuild_ReShape^ context)
{
	Handle(::ShapeBuild_ReShape) h_context = context->NativeInstance;
	((::ShapeUpgrade_Tool*)_NativeInstance)->SetContext(h_context);
	context->NativeInstance = h_context.get();
}

Macad::Occt::ShapeBuild_ReShape^ Macad::Occt::ShapeUpgrade_Tool::Context()
{
	Handle(::ShapeBuild_ReShape) _result;
	_result = ((::ShapeUpgrade_Tool*)_NativeInstance)->Context();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeBuild_ReShape::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeUpgrade_Tool::SetPrecision(double preci)
{
	((::ShapeUpgrade_Tool*)_NativeInstance)->SetPrecision(preci);
}

double Macad::Occt::ShapeUpgrade_Tool::Precision()
{
	return ((::ShapeUpgrade_Tool*)_NativeInstance)->Precision();
}

void Macad::Occt::ShapeUpgrade_Tool::SetMinTolerance(double mintol)
{
	((::ShapeUpgrade_Tool*)_NativeInstance)->SetMinTolerance(mintol);
}

double Macad::Occt::ShapeUpgrade_Tool::MinTolerance()
{
	return ((::ShapeUpgrade_Tool*)_NativeInstance)->MinTolerance();
}

void Macad::Occt::ShapeUpgrade_Tool::SetMaxTolerance(double maxtol)
{
	((::ShapeUpgrade_Tool*)_NativeInstance)->SetMaxTolerance(maxtol);
}

double Macad::Occt::ShapeUpgrade_Tool::MaxTolerance()
{
	return ((::ShapeUpgrade_Tool*)_NativeInstance)->MaxTolerance();
}

double Macad::Occt::ShapeUpgrade_Tool::LimitTolerance(double toler)
{
	return ((::ShapeUpgrade_Tool*)_NativeInstance)->LimitTolerance(toler);
}


Macad::Occt::ShapeUpgrade_Tool^ Macad::Occt::ShapeUpgrade_Tool::CreateDowncasted(::ShapeUpgrade_Tool* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_EdgeDivide)))
		return Macad::Occt::ShapeUpgrade_EdgeDivide::CreateDowncasted((::ShapeUpgrade_EdgeDivide*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_WireDivide)))
		return Macad::Occt::ShapeUpgrade_WireDivide::CreateDowncasted((::ShapeUpgrade_WireDivide*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_FaceDivide)))
		return Macad::Occt::ShapeUpgrade_FaceDivide::CreateDowncasted((::ShapeUpgrade_FaceDivide*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_FixSmallCurves)))
		return Macad::Occt::ShapeUpgrade_FixSmallCurves::CreateDowncasted((::ShapeUpgrade_FixSmallCurves*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_RemoveInternalWires)))
		return Macad::Occt::ShapeUpgrade_RemoveInternalWires::CreateDowncasted((::ShapeUpgrade_RemoveInternalWires*)instance);

	return gcnew Macad::Occt::ShapeUpgrade_Tool( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_EdgeDivide
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_EdgeDivide::ShapeUpgrade_EdgeDivide()
	: Macad::Occt::ShapeUpgrade_Tool(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_EdgeDivide();
}

Macad::Occt::ShapeUpgrade_EdgeDivide::ShapeUpgrade_EdgeDivide(Macad::Occt::ShapeUpgrade_EdgeDivide^ parameter1)
	: Macad::Occt::ShapeUpgrade_Tool(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_EdgeDivide(*(::ShapeUpgrade_EdgeDivide*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_EdgeDivide::Clear()
{
	((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->Clear();
}

void Macad::Occt::ShapeUpgrade_EdgeDivide::SetFace(Macad::Occt::TopoDS_Face^ F)
{
	((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->SetFace(*(::TopoDS_Face*)F->NativeInstance);
}

bool Macad::Occt::ShapeUpgrade_EdgeDivide::Compute(Macad::Occt::TopoDS_Edge^ E)
{
	return ((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->Compute(*(::TopoDS_Edge*)E->NativeInstance);
}

bool Macad::Occt::ShapeUpgrade_EdgeDivide::HasCurve2d()
{
	return ((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->HasCurve2d();
}

bool Macad::Occt::ShapeUpgrade_EdgeDivide::HasCurve3d()
{
	return ((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->HasCurve3d();
}

Macad::Occt::TColStd_HSequenceOfReal^ Macad::Occt::ShapeUpgrade_EdgeDivide::Knots2d()
{
	Handle(::TColStd_HSequenceOfReal) _result;
	_result = ((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->Knots2d();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HSequenceOfReal::CreateDowncasted( _result.get());
}

Macad::Occt::TColStd_HSequenceOfReal^ Macad::Occt::ShapeUpgrade_EdgeDivide::Knots3d()
{
	Handle(::TColStd_HSequenceOfReal) _result;
	_result = ((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->Knots3d();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HSequenceOfReal::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeUpgrade_EdgeDivide::SetSplitCurve2dTool(Macad::Occt::ShapeUpgrade_SplitCurve2d^ splitCurve2dTool)
{
	Handle(::ShapeUpgrade_SplitCurve2d) h_splitCurve2dTool = splitCurve2dTool->NativeInstance;
	((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->SetSplitCurve2dTool(h_splitCurve2dTool);
	splitCurve2dTool->NativeInstance = h_splitCurve2dTool.get();
}

void Macad::Occt::ShapeUpgrade_EdgeDivide::SetSplitCurve3dTool(Macad::Occt::ShapeUpgrade_SplitCurve3d^ splitCurve3dTool)
{
	Handle(::ShapeUpgrade_SplitCurve3d) h_splitCurve3dTool = splitCurve3dTool->NativeInstance;
	((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->SetSplitCurve3dTool(h_splitCurve3dTool);
	splitCurve3dTool->NativeInstance = h_splitCurve3dTool.get();
}

Macad::Occt::ShapeUpgrade_SplitCurve2d^ Macad::Occt::ShapeUpgrade_EdgeDivide::GetSplitCurve2dTool()
{
	Handle(::ShapeUpgrade_SplitCurve2d) _result;
	_result = ((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->GetSplitCurve2dTool();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeUpgrade_SplitCurve2d::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeUpgrade_SplitCurve3d^ Macad::Occt::ShapeUpgrade_EdgeDivide::GetSplitCurve3dTool()
{
	Handle(::ShapeUpgrade_SplitCurve3d) _result;
	_result = ((::ShapeUpgrade_EdgeDivide*)_NativeInstance)->GetSplitCurve3dTool();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeUpgrade_SplitCurve3d::CreateDowncasted( _result.get());
}


Macad::Occt::ShapeUpgrade_EdgeDivide^ Macad::Occt::ShapeUpgrade_EdgeDivide::CreateDowncasted(::ShapeUpgrade_EdgeDivide* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_ClosedEdgeDivide)))
		return Macad::Occt::ShapeUpgrade_ClosedEdgeDivide::CreateDowncasted((::ShapeUpgrade_ClosedEdgeDivide*)instance);

	return gcnew Macad::Occt::ShapeUpgrade_EdgeDivide( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ClosedEdgeDivide
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_ClosedEdgeDivide::ShapeUpgrade_ClosedEdgeDivide()
	: Macad::Occt::ShapeUpgrade_EdgeDivide(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_ClosedEdgeDivide();
}

Macad::Occt::ShapeUpgrade_ClosedEdgeDivide::ShapeUpgrade_ClosedEdgeDivide(Macad::Occt::ShapeUpgrade_ClosedEdgeDivide^ parameter1)
	: Macad::Occt::ShapeUpgrade_EdgeDivide(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_ClosedEdgeDivide(*(::ShapeUpgrade_ClosedEdgeDivide*)parameter1->NativeInstance);
}

bool Macad::Occt::ShapeUpgrade_ClosedEdgeDivide::Compute(Macad::Occt::TopoDS_Edge^ anEdge)
{
	return ((::ShapeUpgrade_ClosedEdgeDivide*)_NativeInstance)->Compute(*(::TopoDS_Edge*)anEdge->NativeInstance);
}


Macad::Occt::ShapeUpgrade_ClosedEdgeDivide^ Macad::Occt::ShapeUpgrade_ClosedEdgeDivide::CreateDowncasted(::ShapeUpgrade_ClosedEdgeDivide* instance)
{
	return gcnew Macad::Occt::ShapeUpgrade_ClosedEdgeDivide( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_WireDivide
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_WireDivide::ShapeUpgrade_WireDivide()
	: Macad::Occt::ShapeUpgrade_Tool(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_WireDivide();
}

Macad::Occt::ShapeUpgrade_WireDivide::ShapeUpgrade_WireDivide(Macad::Occt::ShapeUpgrade_WireDivide^ parameter1)
	: Macad::Occt::ShapeUpgrade_Tool(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_WireDivide(*(::ShapeUpgrade_WireDivide*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_WireDivide::Init(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F)
{
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->Init(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_WireDivide::Init(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::Geom_Surface^ S)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->Init(*(::TopoDS_Wire*)W->NativeInstance, h_S);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::ShapeUpgrade_WireDivide::Load(Macad::Occt::TopoDS_Wire^ W)
{
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->Load(*(::TopoDS_Wire*)W->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_WireDivide::Load(Macad::Occt::TopoDS_Edge^ E)
{
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->Load(*(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_WireDivide::SetFace(Macad::Occt::TopoDS_Face^ F)
{
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->SetFace(*(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_WireDivide::SetSurface(Macad::Occt::Geom_Surface^ S)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->SetSurface(h_S);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::ShapeUpgrade_WireDivide::SetSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->SetSurface(h_S, *(::TopLoc_Location*)L->NativeInstance);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::ShapeUpgrade_WireDivide::Perform()
{
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->Perform();
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::ShapeUpgrade_WireDivide::Wire()
{
	::TopoDS_Wire* _result = new ::TopoDS_Wire();
	*_result =  (::TopoDS_Wire)((::ShapeUpgrade_WireDivide*)_NativeInstance)->Wire();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

bool Macad::Occt::ShapeUpgrade_WireDivide::Status(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeUpgrade_WireDivide*)_NativeInstance)->Status((::ShapeExtend_Status)status);
}

void Macad::Occt::ShapeUpgrade_WireDivide::SetSplitCurve3dTool(Macad::Occt::ShapeUpgrade_SplitCurve3d^ splitCurve3dTool)
{
	Handle(::ShapeUpgrade_SplitCurve3d) h_splitCurve3dTool = splitCurve3dTool->NativeInstance;
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->SetSplitCurve3dTool(h_splitCurve3dTool);
	splitCurve3dTool->NativeInstance = h_splitCurve3dTool.get();
}

void Macad::Occt::ShapeUpgrade_WireDivide::SetSplitCurve2dTool(Macad::Occt::ShapeUpgrade_SplitCurve2d^ splitCurve2dTool)
{
	Handle(::ShapeUpgrade_SplitCurve2d) h_splitCurve2dTool = splitCurve2dTool->NativeInstance;
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->SetSplitCurve2dTool(h_splitCurve2dTool);
	splitCurve2dTool->NativeInstance = h_splitCurve2dTool.get();
}

void Macad::Occt::ShapeUpgrade_WireDivide::SetTransferParamTool(Macad::Occt::ShapeAnalysis_TransferParameters^ TransferParam)
{
	Handle(::ShapeAnalysis_TransferParameters) h_TransferParam = TransferParam->NativeInstance;
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->SetTransferParamTool(h_TransferParam);
	TransferParam->NativeInstance = h_TransferParam.get();
}

void Macad::Occt::ShapeUpgrade_WireDivide::SetEdgeDivideTool(Macad::Occt::ShapeUpgrade_EdgeDivide^ edgeDivideTool)
{
	Handle(::ShapeUpgrade_EdgeDivide) h_edgeDivideTool = edgeDivideTool->NativeInstance;
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->SetEdgeDivideTool(h_edgeDivideTool);
	edgeDivideTool->NativeInstance = h_edgeDivideTool.get();
}

Macad::Occt::ShapeUpgrade_EdgeDivide^ Macad::Occt::ShapeUpgrade_WireDivide::GetEdgeDivideTool()
{
	Handle(::ShapeUpgrade_EdgeDivide) _result;
	_result = ((::ShapeUpgrade_WireDivide*)_NativeInstance)->GetEdgeDivideTool();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeUpgrade_EdgeDivide::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeAnalysis_TransferParameters^ Macad::Occt::ShapeUpgrade_WireDivide::GetTransferParamTool()
{
	Handle(::ShapeAnalysis_TransferParameters) _result;
	_result = ((::ShapeUpgrade_WireDivide*)_NativeInstance)->GetTransferParamTool();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_TransferParameters::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeUpgrade_WireDivide::SetEdgeMode(int EdgeMode)
{
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->SetEdgeMode(EdgeMode);
}

void Macad::Occt::ShapeUpgrade_WireDivide::SetFixSmallCurveTool(Macad::Occt::ShapeUpgrade_FixSmallCurves^ FixSmallCurvesTool)
{
	Handle(::ShapeUpgrade_FixSmallCurves) h_FixSmallCurvesTool = FixSmallCurvesTool->NativeInstance;
	((::ShapeUpgrade_WireDivide*)_NativeInstance)->SetFixSmallCurveTool(h_FixSmallCurvesTool);
	FixSmallCurvesTool->NativeInstance = h_FixSmallCurvesTool.get();
}

Macad::Occt::ShapeUpgrade_FixSmallCurves^ Macad::Occt::ShapeUpgrade_WireDivide::GetFixSmallCurveTool()
{
	Handle(::ShapeUpgrade_FixSmallCurves) _result;
	_result = ((::ShapeUpgrade_WireDivide*)_NativeInstance)->GetFixSmallCurveTool();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeUpgrade_FixSmallCurves::CreateDowncasted( _result.get());
}


Macad::Occt::ShapeUpgrade_WireDivide^ Macad::Occt::ShapeUpgrade_WireDivide::CreateDowncasted(::ShapeUpgrade_WireDivide* instance)
{
	return gcnew Macad::Occt::ShapeUpgrade_WireDivide( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_FaceDivide
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_FaceDivide::ShapeUpgrade_FaceDivide()
	: Macad::Occt::ShapeUpgrade_Tool(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_FaceDivide();
}

Macad::Occt::ShapeUpgrade_FaceDivide::ShapeUpgrade_FaceDivide(Macad::Occt::TopoDS_Face^ F)
	: Macad::Occt::ShapeUpgrade_Tool(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_FaceDivide(*(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::ShapeUpgrade_FaceDivide::ShapeUpgrade_FaceDivide(Macad::Occt::ShapeUpgrade_FaceDivide^ parameter1)
	: Macad::Occt::ShapeUpgrade_Tool(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_FaceDivide(*(::ShapeUpgrade_FaceDivide*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_FaceDivide::Init(Macad::Occt::TopoDS_Face^ F)
{
	((::ShapeUpgrade_FaceDivide*)_NativeInstance)->Init(*(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_FaceDivide::SetSurfaceSegmentMode(bool Segment)
{
	((::ShapeUpgrade_FaceDivide*)_NativeInstance)->SetSurfaceSegmentMode(Segment);
}

bool Macad::Occt::ShapeUpgrade_FaceDivide::Perform()
{
	return ((::ShapeUpgrade_FaceDivide*)_NativeInstance)->Perform();
}

bool Macad::Occt::ShapeUpgrade_FaceDivide::SplitSurface()
{
	return ((::ShapeUpgrade_FaceDivide*)_NativeInstance)->SplitSurface();
}

bool Macad::Occt::ShapeUpgrade_FaceDivide::SplitCurves()
{
	return ((::ShapeUpgrade_FaceDivide*)_NativeInstance)->SplitCurves();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeUpgrade_FaceDivide::Result()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeUpgrade_FaceDivide*)_NativeInstance)->Result();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::ShapeUpgrade_FaceDivide::Status(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeUpgrade_FaceDivide*)_NativeInstance)->Status((::ShapeExtend_Status)status);
}

void Macad::Occt::ShapeUpgrade_FaceDivide::SetSplitSurfaceTool(Macad::Occt::ShapeUpgrade_SplitSurface^ splitSurfaceTool)
{
	Handle(::ShapeUpgrade_SplitSurface) h_splitSurfaceTool = splitSurfaceTool->NativeInstance;
	((::ShapeUpgrade_FaceDivide*)_NativeInstance)->SetSplitSurfaceTool(h_splitSurfaceTool);
	splitSurfaceTool->NativeInstance = h_splitSurfaceTool.get();
}

void Macad::Occt::ShapeUpgrade_FaceDivide::SetWireDivideTool(Macad::Occt::ShapeUpgrade_WireDivide^ wireDivideTool)
{
	Handle(::ShapeUpgrade_WireDivide) h_wireDivideTool = wireDivideTool->NativeInstance;
	((::ShapeUpgrade_FaceDivide*)_NativeInstance)->SetWireDivideTool(h_wireDivideTool);
	wireDivideTool->NativeInstance = h_wireDivideTool.get();
}

Macad::Occt::ShapeUpgrade_SplitSurface^ Macad::Occt::ShapeUpgrade_FaceDivide::GetSplitSurfaceTool()
{
	Handle(::ShapeUpgrade_SplitSurface) _result;
	_result = ((::ShapeUpgrade_FaceDivide*)_NativeInstance)->GetSplitSurfaceTool();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeUpgrade_SplitSurface::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeUpgrade_WireDivide^ Macad::Occt::ShapeUpgrade_FaceDivide::GetWireDivideTool()
{
	Handle(::ShapeUpgrade_WireDivide) _result;
	_result = ((::ShapeUpgrade_FaceDivide*)_NativeInstance)->GetWireDivideTool();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeUpgrade_WireDivide::CreateDowncasted( _result.get());
}


Macad::Occt::ShapeUpgrade_FaceDivide^ Macad::Occt::ShapeUpgrade_FaceDivide::CreateDowncasted(::ShapeUpgrade_FaceDivide* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_ClosedFaceDivide)))
		return Macad::Occt::ShapeUpgrade_ClosedFaceDivide::CreateDowncasted((::ShapeUpgrade_ClosedFaceDivide*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_FaceDivideArea)))
		return Macad::Occt::ShapeUpgrade_FaceDivideArea::CreateDowncasted((::ShapeUpgrade_FaceDivideArea*)instance);

	return gcnew Macad::Occt::ShapeUpgrade_FaceDivide( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ClosedFaceDivide
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_ClosedFaceDivide::ShapeUpgrade_ClosedFaceDivide()
	: Macad::Occt::ShapeUpgrade_FaceDivide(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_ClosedFaceDivide();
}

Macad::Occt::ShapeUpgrade_ClosedFaceDivide::ShapeUpgrade_ClosedFaceDivide(Macad::Occt::TopoDS_Face^ F)
	: Macad::Occt::ShapeUpgrade_FaceDivide(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_ClosedFaceDivide(*(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::ShapeUpgrade_ClosedFaceDivide::ShapeUpgrade_ClosedFaceDivide(Macad::Occt::ShapeUpgrade_ClosedFaceDivide^ parameter1)
	: Macad::Occt::ShapeUpgrade_FaceDivide(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_ClosedFaceDivide(*(::ShapeUpgrade_ClosedFaceDivide*)parameter1->NativeInstance);
}

bool Macad::Occt::ShapeUpgrade_ClosedFaceDivide::SplitSurface()
{
	return ((::ShapeUpgrade_ClosedFaceDivide*)_NativeInstance)->SplitSurface();
}

void Macad::Occt::ShapeUpgrade_ClosedFaceDivide::SetNbSplitPoints(int num)
{
	((::ShapeUpgrade_ClosedFaceDivide*)_NativeInstance)->SetNbSplitPoints(num);
}

int Macad::Occt::ShapeUpgrade_ClosedFaceDivide::GetNbSplitPoints()
{
	return ((::ShapeUpgrade_ClosedFaceDivide*)_NativeInstance)->GetNbSplitPoints();
}


Macad::Occt::ShapeUpgrade_ClosedFaceDivide^ Macad::Occt::ShapeUpgrade_ClosedFaceDivide::CreateDowncasted(::ShapeUpgrade_ClosedFaceDivide* instance)
{
	return gcnew Macad::Occt::ShapeUpgrade_ClosedFaceDivide( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_FaceDivideArea
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_FaceDivideArea::ShapeUpgrade_FaceDivideArea()
	: Macad::Occt::ShapeUpgrade_FaceDivide(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_FaceDivideArea();
}

Macad::Occt::ShapeUpgrade_FaceDivideArea::ShapeUpgrade_FaceDivideArea(Macad::Occt::TopoDS_Face^ F)
	: Macad::Occt::ShapeUpgrade_FaceDivide(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_FaceDivideArea(*(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::ShapeUpgrade_FaceDivideArea::ShapeUpgrade_FaceDivideArea(Macad::Occt::ShapeUpgrade_FaceDivideArea^ parameter1)
	: Macad::Occt::ShapeUpgrade_FaceDivide(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_FaceDivideArea(*(::ShapeUpgrade_FaceDivideArea*)parameter1->NativeInstance);
}

bool Macad::Occt::ShapeUpgrade_FaceDivideArea::Perform()
{
	return ((::ShapeUpgrade_FaceDivideArea*)_NativeInstance)->Perform();
}

double Macad::Occt::ShapeUpgrade_FaceDivideArea::MaxArea()
{
	return ((::ShapeUpgrade_FaceDivideArea*)_NativeInstance)->MaxArea();
}


Macad::Occt::ShapeUpgrade_FaceDivideArea^ Macad::Occt::ShapeUpgrade_FaceDivideArea::CreateDowncasted(::ShapeUpgrade_FaceDivideArea* instance)
{
	return gcnew Macad::Occt::ShapeUpgrade_FaceDivideArea( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivide
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_ShapeDivide::ShapeUpgrade_ShapeDivide()
	: BaseClass<::ShapeUpgrade_ShapeDivide>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivide();
}

Macad::Occt::ShapeUpgrade_ShapeDivide::ShapeUpgrade_ShapeDivide(Macad::Occt::TopoDS_Shape^ S)
	: BaseClass<::ShapeUpgrade_ShapeDivide>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivide(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::ShapeUpgrade_ShapeDivide::ShapeUpgrade_ShapeDivide(Macad::Occt::ShapeUpgrade_ShapeDivide^ parameter1)
	: BaseClass<::ShapeUpgrade_ShapeDivide>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivide(*(::ShapeUpgrade_ShapeDivide*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_ShapeDivide::Init(Macad::Occt::TopoDS_Shape^ S)
{
	((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_ShapeDivide::SetPrecision(double Prec)
{
	((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->SetPrecision(Prec);
}

void Macad::Occt::ShapeUpgrade_ShapeDivide::SetMaxTolerance(double maxtol)
{
	((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->SetMaxTolerance(maxtol);
}

void Macad::Occt::ShapeUpgrade_ShapeDivide::SetMinTolerance(double mintol)
{
	((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->SetMinTolerance(mintol);
}

void Macad::Occt::ShapeUpgrade_ShapeDivide::SetSurfaceSegmentMode(bool Segment)
{
	((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->SetSurfaceSegmentMode(Segment);
}

bool Macad::Occt::ShapeUpgrade_ShapeDivide::Perform(bool newContext)
{
	return ((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->Perform(newContext);
}

bool Macad::Occt::ShapeUpgrade_ShapeDivide::Perform()
{
	return ((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->Perform(true);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeUpgrade_ShapeDivide::Result()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->Result();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::ShapeBuild_ReShape^ Macad::Occt::ShapeUpgrade_ShapeDivide::GetContext()
{
	Handle(::ShapeBuild_ReShape) _result;
	_result = ((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->GetContext();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeBuild_ReShape::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeUpgrade_ShapeDivide::SetContext(Macad::Occt::ShapeBuild_ReShape^ context)
{
	Handle(::ShapeBuild_ReShape) h_context = context->NativeInstance;
	((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->SetContext(h_context);
	context->NativeInstance = h_context.get();
}

void Macad::Occt::ShapeUpgrade_ShapeDivide::SetMsgRegistrator(Macad::Occt::ShapeExtend_BasicMsgRegistrator^ msgreg)
{
	Handle(::ShapeExtend_BasicMsgRegistrator) h_msgreg = msgreg->NativeInstance;
	((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->SetMsgRegistrator(h_msgreg);
	msgreg->NativeInstance = h_msgreg.get();
}

Macad::Occt::ShapeExtend_BasicMsgRegistrator^ Macad::Occt::ShapeUpgrade_ShapeDivide::MsgRegistrator()
{
	Handle(::ShapeExtend_BasicMsgRegistrator) _result;
	_result = ((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->MsgRegistrator();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeExtend_BasicMsgRegistrator::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeUpgrade_ShapeDivide::SendMsg(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity)
{
	((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->SendMsg(*(::TopoDS_Shape*)shape->NativeInstance, *(::Message_Msg*)message->NativeInstance, (::Message_Gravity)gravity);
}

void Macad::Occt::ShapeUpgrade_ShapeDivide::SendMsg(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message)
{
	((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->SendMsg(*(::TopoDS_Shape*)shape->NativeInstance, *(::Message_Msg*)message->NativeInstance, Message_Info);
}

bool Macad::Occt::ShapeUpgrade_ShapeDivide::Status(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->Status((::ShapeExtend_Status)status);
}

void Macad::Occt::ShapeUpgrade_ShapeDivide::SetSplitFaceTool(Macad::Occt::ShapeUpgrade_FaceDivide^ splitFaceTool)
{
	Handle(::ShapeUpgrade_FaceDivide) h_splitFaceTool = splitFaceTool->NativeInstance;
	((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->SetSplitFaceTool(h_splitFaceTool);
	splitFaceTool->NativeInstance = h_splitFaceTool.get();
}

void Macad::Occt::ShapeUpgrade_ShapeDivide::SetEdgeMode(int aEdgeMode)
{
	((::ShapeUpgrade_ShapeDivide*)_NativeInstance)->SetEdgeMode(aEdgeMode);
}




//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivideArea
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_ShapeDivideArea::ShapeUpgrade_ShapeDivideArea()
	: Macad::Occt::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivideArea();
}

Macad::Occt::ShapeUpgrade_ShapeDivideArea::ShapeUpgrade_ShapeDivideArea(Macad::Occt::TopoDS_Shape^ S)
	: Macad::Occt::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivideArea(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::ShapeUpgrade_ShapeDivideArea::ShapeUpgrade_ShapeDivideArea(Macad::Occt::ShapeUpgrade_ShapeDivideArea^ parameter1)
	: Macad::Occt::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivideArea(*(::ShapeUpgrade_ShapeDivideArea*)parameter1->NativeInstance);
}

double Macad::Occt::ShapeUpgrade_ShapeDivideArea::MaxArea()
{
	return ((::ShapeUpgrade_ShapeDivideArea*)_NativeInstance)->MaxArea();
}




//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivideContinuity
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_ShapeDivideContinuity::ShapeUpgrade_ShapeDivideContinuity()
	: Macad::Occt::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivideContinuity();
}

Macad::Occt::ShapeUpgrade_ShapeDivideContinuity::ShapeUpgrade_ShapeDivideContinuity(Macad::Occt::TopoDS_Shape^ S)
	: Macad::Occt::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivideContinuity(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::ShapeUpgrade_ShapeDivideContinuity::ShapeUpgrade_ShapeDivideContinuity(Macad::Occt::ShapeUpgrade_ShapeDivideContinuity^ parameter1)
	: Macad::Occt::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivideContinuity(*(::ShapeUpgrade_ShapeDivideContinuity*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_ShapeDivideContinuity::SetTolerance(double Tol)
{
	((::ShapeUpgrade_ShapeDivideContinuity*)_NativeInstance)->SetTolerance(Tol);
}

void Macad::Occt::ShapeUpgrade_ShapeDivideContinuity::SetTolerance2d(double Tol)
{
	((::ShapeUpgrade_ShapeDivideContinuity*)_NativeInstance)->SetTolerance2d(Tol);
}

void Macad::Occt::ShapeUpgrade_ShapeDivideContinuity::SetBoundaryCriterion(Macad::Occt::GeomAbs_Shape Criterion)
{
	((::ShapeUpgrade_ShapeDivideContinuity*)_NativeInstance)->SetBoundaryCriterion((::GeomAbs_Shape)Criterion);
}

void Macad::Occt::ShapeUpgrade_ShapeDivideContinuity::SetBoundaryCriterion()
{
	((::ShapeUpgrade_ShapeDivideContinuity*)_NativeInstance)->SetBoundaryCriterion(GeomAbs_C1);
}

void Macad::Occt::ShapeUpgrade_ShapeDivideContinuity::SetPCurveCriterion(Macad::Occt::GeomAbs_Shape Criterion)
{
	((::ShapeUpgrade_ShapeDivideContinuity*)_NativeInstance)->SetPCurveCriterion((::GeomAbs_Shape)Criterion);
}

void Macad::Occt::ShapeUpgrade_ShapeDivideContinuity::SetPCurveCriterion()
{
	((::ShapeUpgrade_ShapeDivideContinuity*)_NativeInstance)->SetPCurveCriterion(GeomAbs_C1);
}

void Macad::Occt::ShapeUpgrade_ShapeDivideContinuity::SetSurfaceCriterion(Macad::Occt::GeomAbs_Shape Criterion)
{
	((::ShapeUpgrade_ShapeDivideContinuity*)_NativeInstance)->SetSurfaceCriterion((::GeomAbs_Shape)Criterion);
}

void Macad::Occt::ShapeUpgrade_ShapeDivideContinuity::SetSurfaceCriterion()
{
	((::ShapeUpgrade_ShapeDivideContinuity*)_NativeInstance)->SetSurfaceCriterion(GeomAbs_C1);
}




//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivideAngle
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_ShapeDivideAngle::ShapeUpgrade_ShapeDivideAngle(double MaxAngle)
	: Macad::Occt::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivideAngle(MaxAngle);
}

Macad::Occt::ShapeUpgrade_ShapeDivideAngle::ShapeUpgrade_ShapeDivideAngle(double MaxAngle, Macad::Occt::TopoDS_Shape^ S)
	: Macad::Occt::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivideAngle(MaxAngle, *(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::ShapeUpgrade_ShapeDivideAngle::ShapeUpgrade_ShapeDivideAngle(Macad::Occt::ShapeUpgrade_ShapeDivideAngle^ parameter1)
	: Macad::Occt::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivideAngle(*(::ShapeUpgrade_ShapeDivideAngle*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_ShapeDivideAngle::InitTool(double MaxAngle)
{
	((::ShapeUpgrade_ShapeDivideAngle*)_NativeInstance)->InitTool(MaxAngle);
}

void Macad::Occt::ShapeUpgrade_ShapeDivideAngle::SetMaxAngle(double MaxAngle)
{
	((::ShapeUpgrade_ShapeDivideAngle*)_NativeInstance)->SetMaxAngle(MaxAngle);
}

double Macad::Occt::ShapeUpgrade_ShapeDivideAngle::MaxAngle()
{
	return ((::ShapeUpgrade_ShapeDivideAngle*)_NativeInstance)->MaxAngle();
}




//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeConvertToBezier
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::ShapeUpgrade_ShapeConvertToBezier()
	: Macad::Occt::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeConvertToBezier();
}

Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::ShapeUpgrade_ShapeConvertToBezier(Macad::Occt::TopoDS_Shape^ S)
	: Macad::Occt::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeConvertToBezier(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::ShapeUpgrade_ShapeConvertToBezier(Macad::Occt::ShapeUpgrade_ShapeConvertToBezier^ parameter1)
	: Macad::Occt::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeConvertToBezier(*(::ShapeUpgrade_ShapeConvertToBezier*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::Set2dConversion(bool mode)
{
	((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Set2dConversion(mode);
}

bool Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::Get2dConversion()
{
	return ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Get2dConversion();
}

void Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::Set3dConversion(bool mode)
{
	((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Set3dConversion(mode);
}

bool Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::Get3dConversion()
{
	return ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Get3dConversion();
}

void Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::SetSurfaceConversion(bool mode)
{
	((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->SetSurfaceConversion(mode);
}

bool Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::GetSurfaceConversion()
{
	return ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->GetSurfaceConversion();
}

void Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::Set3dLineConversion(bool mode)
{
	((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Set3dLineConversion(mode);
}

bool Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::Get3dLineConversion()
{
	return ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Get3dLineConversion();
}

void Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::Set3dCircleConversion(bool mode)
{
	((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Set3dCircleConversion(mode);
}

bool Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::Get3dCircleConversion()
{
	return ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Get3dCircleConversion();
}

void Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::Set3dConicConversion(bool mode)
{
	((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Set3dConicConversion(mode);
}

bool Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::Get3dConicConversion()
{
	return ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Get3dConicConversion();
}

void Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::SetPlaneMode(bool mode)
{
	((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->SetPlaneMode(mode);
}

bool Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::GetPlaneMode()
{
	return ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->GetPlaneMode();
}

void Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::SetRevolutionMode(bool mode)
{
	((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->SetRevolutionMode(mode);
}

bool Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::GetRevolutionMode()
{
	return ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->GetRevolutionMode();
}

void Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::SetExtrusionMode(bool mode)
{
	((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->SetExtrusionMode(mode);
}

bool Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::GetExtrusionMode()
{
	return ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->GetExtrusionMode();
}

void Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::SetBSplineMode(bool mode)
{
	((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->SetBSplineMode(mode);
}

bool Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::GetBSplineMode()
{
	return ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->GetBSplineMode();
}

bool Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::Perform(bool newContext)
{
	return ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Perform(newContext);
}

bool Macad::Occt::ShapeUpgrade_ShapeConvertToBezier::Perform()
{
	return ((::ShapeUpgrade_ShapeConvertToBezier*)_NativeInstance)->Perform(true);
}




//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivideClosed
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_ShapeDivideClosed::ShapeUpgrade_ShapeDivideClosed(Macad::Occt::TopoDS_Shape^ S)
	: Macad::Occt::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivideClosed(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::ShapeUpgrade_ShapeDivideClosed::ShapeUpgrade_ShapeDivideClosed(Macad::Occt::ShapeUpgrade_ShapeDivideClosed^ parameter1)
	: Macad::Occt::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivideClosed(*(::ShapeUpgrade_ShapeDivideClosed*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_ShapeDivideClosed::SetNbSplitPoints(int num)
{
	((::ShapeUpgrade_ShapeDivideClosed*)_NativeInstance)->SetNbSplitPoints(num);
}




//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivideClosedEdges
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_ShapeDivideClosedEdges::ShapeUpgrade_ShapeDivideClosedEdges(Macad::Occt::TopoDS_Shape^ S)
	: Macad::Occt::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivideClosedEdges(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::ShapeUpgrade_ShapeDivideClosedEdges::ShapeUpgrade_ShapeDivideClosedEdges(Macad::Occt::ShapeUpgrade_ShapeDivideClosedEdges^ parameter1)
	: Macad::Occt::ShapeUpgrade_ShapeDivide(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShapeDivideClosedEdges(*(::ShapeUpgrade_ShapeDivideClosedEdges*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_ShapeDivideClosedEdges::SetNbSplitPoints(int num)
{
	((::ShapeUpgrade_ShapeDivideClosedEdges*)_NativeInstance)->SetNbSplitPoints(num);
}




//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitCurve
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_SplitCurve::ShapeUpgrade_SplitCurve()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitCurve();
}

Macad::Occt::ShapeUpgrade_SplitCurve::ShapeUpgrade_SplitCurve(Macad::Occt::ShapeUpgrade_SplitCurve^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitCurve(*(::ShapeUpgrade_SplitCurve*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_SplitCurve::Init(double First, double Last)
{
	((::ShapeUpgrade_SplitCurve*)_NativeInstance)->Init(First, Last);
}

void Macad::Occt::ShapeUpgrade_SplitCurve::SetSplitValues(Macad::Occt::TColStd_HSequenceOfReal^ SplitValues)
{
	Handle(::TColStd_HSequenceOfReal) h_SplitValues = SplitValues->NativeInstance;
	((::ShapeUpgrade_SplitCurve*)_NativeInstance)->SetSplitValues(h_SplitValues);
	SplitValues->NativeInstance = h_SplitValues.get();
}

void Macad::Occt::ShapeUpgrade_SplitCurve::Build(bool Segment)
{
	((::ShapeUpgrade_SplitCurve*)_NativeInstance)->Build(Segment);
}

Macad::Occt::TColStd_HSequenceOfReal^ Macad::Occt::ShapeUpgrade_SplitCurve::SplitValues()
{
	Handle(::TColStd_HSequenceOfReal) _result;
	_result = ((::ShapeUpgrade_SplitCurve*)_NativeInstance)->SplitValues();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HSequenceOfReal::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeUpgrade_SplitCurve::Compute()
{
	((::ShapeUpgrade_SplitCurve*)_NativeInstance)->Compute();
}

void Macad::Occt::ShapeUpgrade_SplitCurve::Perform(bool Segment)
{
	((::ShapeUpgrade_SplitCurve*)_NativeInstance)->Perform(Segment);
}

void Macad::Occt::ShapeUpgrade_SplitCurve::Perform()
{
	((::ShapeUpgrade_SplitCurve*)_NativeInstance)->Perform(true);
}

bool Macad::Occt::ShapeUpgrade_SplitCurve::Status(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeUpgrade_SplitCurve*)_NativeInstance)->Status((::ShapeExtend_Status)status);
}


Macad::Occt::ShapeUpgrade_SplitCurve^ Macad::Occt::ShapeUpgrade_SplitCurve::CreateDowncasted(::ShapeUpgrade_SplitCurve* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_SplitCurve2d)))
		return Macad::Occt::ShapeUpgrade_SplitCurve2d::CreateDowncasted((::ShapeUpgrade_SplitCurve2d*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_SplitCurve3d)))
		return Macad::Occt::ShapeUpgrade_SplitCurve3d::CreateDowncasted((::ShapeUpgrade_SplitCurve3d*)instance);

	return gcnew Macad::Occt::ShapeUpgrade_SplitCurve( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitCurve2d
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_SplitCurve2d::ShapeUpgrade_SplitCurve2d()
	: Macad::Occt::ShapeUpgrade_SplitCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitCurve2d();
}

Macad::Occt::ShapeUpgrade_SplitCurve2d::ShapeUpgrade_SplitCurve2d(Macad::Occt::ShapeUpgrade_SplitCurve2d^ parameter1)
	: Macad::Occt::ShapeUpgrade_SplitCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitCurve2d(*(::ShapeUpgrade_SplitCurve2d*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_SplitCurve2d::Init(Macad::Occt::Geom2d_Curve^ C)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	((::ShapeUpgrade_SplitCurve2d*)_NativeInstance)->Init(h_C);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::ShapeUpgrade_SplitCurve2d::Init(Macad::Occt::Geom2d_Curve^ C, double First, double Last)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	((::ShapeUpgrade_SplitCurve2d*)_NativeInstance)->Init(h_C, First, Last);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::ShapeUpgrade_SplitCurve2d::Build(bool Segment)
{
	((::ShapeUpgrade_SplitCurve2d*)_NativeInstance)->Build(Segment);
}


Macad::Occt::ShapeUpgrade_SplitCurve2d^ Macad::Occt::ShapeUpgrade_SplitCurve2d::CreateDowncasted(::ShapeUpgrade_SplitCurve2d* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_SplitCurve2dContinuity)))
		return Macad::Occt::ShapeUpgrade_SplitCurve2dContinuity::CreateDowncasted((::ShapeUpgrade_SplitCurve2dContinuity*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_ConvertCurve2dToBezier)))
		return Macad::Occt::ShapeUpgrade_ConvertCurve2dToBezier::CreateDowncasted((::ShapeUpgrade_ConvertCurve2dToBezier*)instance);

	return gcnew Macad::Occt::ShapeUpgrade_SplitCurve2d( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitCurve2dContinuity
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_SplitCurve2dContinuity::ShapeUpgrade_SplitCurve2dContinuity()
	: Macad::Occt::ShapeUpgrade_SplitCurve2d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitCurve2dContinuity();
}

Macad::Occt::ShapeUpgrade_SplitCurve2dContinuity::ShapeUpgrade_SplitCurve2dContinuity(Macad::Occt::ShapeUpgrade_SplitCurve2dContinuity^ parameter1)
	: Macad::Occt::ShapeUpgrade_SplitCurve2d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitCurve2dContinuity(*(::ShapeUpgrade_SplitCurve2dContinuity*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_SplitCurve2dContinuity::SetCriterion(Macad::Occt::GeomAbs_Shape Criterion)
{
	((::ShapeUpgrade_SplitCurve2dContinuity*)_NativeInstance)->SetCriterion((::GeomAbs_Shape)Criterion);
}

void Macad::Occt::ShapeUpgrade_SplitCurve2dContinuity::SetTolerance(double Tol)
{
	((::ShapeUpgrade_SplitCurve2dContinuity*)_NativeInstance)->SetTolerance(Tol);
}

void Macad::Occt::ShapeUpgrade_SplitCurve2dContinuity::Compute()
{
	((::ShapeUpgrade_SplitCurve2dContinuity*)_NativeInstance)->Compute();
}


Macad::Occt::ShapeUpgrade_SplitCurve2dContinuity^ Macad::Occt::ShapeUpgrade_SplitCurve2dContinuity::CreateDowncasted(::ShapeUpgrade_SplitCurve2dContinuity* instance)
{
	return gcnew Macad::Occt::ShapeUpgrade_SplitCurve2dContinuity( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ConvertCurve2dToBezier
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_ConvertCurve2dToBezier::ShapeUpgrade_ConvertCurve2dToBezier()
	: Macad::Occt::ShapeUpgrade_SplitCurve2d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_ConvertCurve2dToBezier();
}

Macad::Occt::ShapeUpgrade_ConvertCurve2dToBezier::ShapeUpgrade_ConvertCurve2dToBezier(Macad::Occt::ShapeUpgrade_ConvertCurve2dToBezier^ parameter1)
	: Macad::Occt::ShapeUpgrade_SplitCurve2d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_ConvertCurve2dToBezier(*(::ShapeUpgrade_ConvertCurve2dToBezier*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_ConvertCurve2dToBezier::Compute()
{
	((::ShapeUpgrade_ConvertCurve2dToBezier*)_NativeInstance)->Compute();
}

void Macad::Occt::ShapeUpgrade_ConvertCurve2dToBezier::Build(bool Segment)
{
	((::ShapeUpgrade_ConvertCurve2dToBezier*)_NativeInstance)->Build(Segment);
}

Macad::Occt::TColStd_HSequenceOfReal^ Macad::Occt::ShapeUpgrade_ConvertCurve2dToBezier::SplitParams()
{
	Handle(::TColStd_HSequenceOfReal) _result;
	_result = ((::ShapeUpgrade_ConvertCurve2dToBezier*)_NativeInstance)->SplitParams();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HSequenceOfReal::CreateDowncasted( _result.get());
}


Macad::Occt::ShapeUpgrade_ConvertCurve2dToBezier^ Macad::Occt::ShapeUpgrade_ConvertCurve2dToBezier::CreateDowncasted(::ShapeUpgrade_ConvertCurve2dToBezier* instance)
{
	return gcnew Macad::Occt::ShapeUpgrade_ConvertCurve2dToBezier( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitCurve3d
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_SplitCurve3d::ShapeUpgrade_SplitCurve3d()
	: Macad::Occt::ShapeUpgrade_SplitCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitCurve3d();
}

Macad::Occt::ShapeUpgrade_SplitCurve3d::ShapeUpgrade_SplitCurve3d(Macad::Occt::ShapeUpgrade_SplitCurve3d^ parameter1)
	: Macad::Occt::ShapeUpgrade_SplitCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitCurve3d(*(::ShapeUpgrade_SplitCurve3d*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_SplitCurve3d::Init(Macad::Occt::Geom_Curve^ C)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	((::ShapeUpgrade_SplitCurve3d*)_NativeInstance)->Init(h_C);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::ShapeUpgrade_SplitCurve3d::Init(Macad::Occt::Geom_Curve^ C, double First, double Last)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	((::ShapeUpgrade_SplitCurve3d*)_NativeInstance)->Init(h_C, First, Last);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::ShapeUpgrade_SplitCurve3d::Build(bool Segment)
{
	((::ShapeUpgrade_SplitCurve3d*)_NativeInstance)->Build(Segment);
}


Macad::Occt::ShapeUpgrade_SplitCurve3d^ Macad::Occt::ShapeUpgrade_SplitCurve3d::CreateDowncasted(::ShapeUpgrade_SplitCurve3d* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_SplitCurve3dContinuity)))
		return Macad::Occt::ShapeUpgrade_SplitCurve3dContinuity::CreateDowncasted((::ShapeUpgrade_SplitCurve3dContinuity*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_ConvertCurve3dToBezier)))
		return Macad::Occt::ShapeUpgrade_ConvertCurve3dToBezier::CreateDowncasted((::ShapeUpgrade_ConvertCurve3dToBezier*)instance);

	return gcnew Macad::Occt::ShapeUpgrade_SplitCurve3d( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitCurve3dContinuity
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_SplitCurve3dContinuity::ShapeUpgrade_SplitCurve3dContinuity()
	: Macad::Occt::ShapeUpgrade_SplitCurve3d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitCurve3dContinuity();
}

Macad::Occt::ShapeUpgrade_SplitCurve3dContinuity::ShapeUpgrade_SplitCurve3dContinuity(Macad::Occt::ShapeUpgrade_SplitCurve3dContinuity^ parameter1)
	: Macad::Occt::ShapeUpgrade_SplitCurve3d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitCurve3dContinuity(*(::ShapeUpgrade_SplitCurve3dContinuity*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_SplitCurve3dContinuity::SetCriterion(Macad::Occt::GeomAbs_Shape Criterion)
{
	((::ShapeUpgrade_SplitCurve3dContinuity*)_NativeInstance)->SetCriterion((::GeomAbs_Shape)Criterion);
}

void Macad::Occt::ShapeUpgrade_SplitCurve3dContinuity::SetTolerance(double Tol)
{
	((::ShapeUpgrade_SplitCurve3dContinuity*)_NativeInstance)->SetTolerance(Tol);
}

void Macad::Occt::ShapeUpgrade_SplitCurve3dContinuity::Compute()
{
	((::ShapeUpgrade_SplitCurve3dContinuity*)_NativeInstance)->Compute();
}

Macad::Occt::Geom_Curve^ Macad::Occt::ShapeUpgrade_SplitCurve3dContinuity::GetCurve()
{
	Handle(::Geom_Curve) _result;
	_result = ((::ShapeUpgrade_SplitCurve3dContinuity*)_NativeInstance)->GetCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}


Macad::Occt::ShapeUpgrade_SplitCurve3dContinuity^ Macad::Occt::ShapeUpgrade_SplitCurve3dContinuity::CreateDowncasted(::ShapeUpgrade_SplitCurve3dContinuity* instance)
{
	return gcnew Macad::Occt::ShapeUpgrade_SplitCurve3dContinuity( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ConvertCurve3dToBezier
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_ConvertCurve3dToBezier::ShapeUpgrade_ConvertCurve3dToBezier()
	: Macad::Occt::ShapeUpgrade_SplitCurve3d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_ConvertCurve3dToBezier();
}

Macad::Occt::ShapeUpgrade_ConvertCurve3dToBezier::ShapeUpgrade_ConvertCurve3dToBezier(Macad::Occt::ShapeUpgrade_ConvertCurve3dToBezier^ parameter1)
	: Macad::Occt::ShapeUpgrade_SplitCurve3d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_ConvertCurve3dToBezier(*(::ShapeUpgrade_ConvertCurve3dToBezier*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_ConvertCurve3dToBezier::SetLineMode(bool mode)
{
	((::ShapeUpgrade_ConvertCurve3dToBezier*)_NativeInstance)->SetLineMode(mode);
}

bool Macad::Occt::ShapeUpgrade_ConvertCurve3dToBezier::GetLineMode()
{
	return ((::ShapeUpgrade_ConvertCurve3dToBezier*)_NativeInstance)->GetLineMode();
}

void Macad::Occt::ShapeUpgrade_ConvertCurve3dToBezier::SetCircleMode(bool mode)
{
	((::ShapeUpgrade_ConvertCurve3dToBezier*)_NativeInstance)->SetCircleMode(mode);
}

bool Macad::Occt::ShapeUpgrade_ConvertCurve3dToBezier::GetCircleMode()
{
	return ((::ShapeUpgrade_ConvertCurve3dToBezier*)_NativeInstance)->GetCircleMode();
}

void Macad::Occt::ShapeUpgrade_ConvertCurve3dToBezier::SetConicMode(bool mode)
{
	((::ShapeUpgrade_ConvertCurve3dToBezier*)_NativeInstance)->SetConicMode(mode);
}

bool Macad::Occt::ShapeUpgrade_ConvertCurve3dToBezier::GetConicMode()
{
	return ((::ShapeUpgrade_ConvertCurve3dToBezier*)_NativeInstance)->GetConicMode();
}

void Macad::Occt::ShapeUpgrade_ConvertCurve3dToBezier::Compute()
{
	((::ShapeUpgrade_ConvertCurve3dToBezier*)_NativeInstance)->Compute();
}

void Macad::Occt::ShapeUpgrade_ConvertCurve3dToBezier::Build(bool Segment)
{
	((::ShapeUpgrade_ConvertCurve3dToBezier*)_NativeInstance)->Build(Segment);
}

Macad::Occt::TColStd_HSequenceOfReal^ Macad::Occt::ShapeUpgrade_ConvertCurve3dToBezier::SplitParams()
{
	Handle(::TColStd_HSequenceOfReal) _result;
	_result = ((::ShapeUpgrade_ConvertCurve3dToBezier*)_NativeInstance)->SplitParams();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HSequenceOfReal::CreateDowncasted( _result.get());
}


Macad::Occt::ShapeUpgrade_ConvertCurve3dToBezier^ Macad::Occt::ShapeUpgrade_ConvertCurve3dToBezier::CreateDowncasted(::ShapeUpgrade_ConvertCurve3dToBezier* instance)
{
	return gcnew Macad::Occt::ShapeUpgrade_ConvertCurve3dToBezier( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitSurface
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_SplitSurface::ShapeUpgrade_SplitSurface()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitSurface();
}

Macad::Occt::ShapeUpgrade_SplitSurface::ShapeUpgrade_SplitSurface(Macad::Occt::ShapeUpgrade_SplitSurface^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitSurface(*(::ShapeUpgrade_SplitSurface*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_SplitSurface::Init(Macad::Occt::Geom_Surface^ S)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::ShapeUpgrade_SplitSurface*)_NativeInstance)->Init(h_S);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::ShapeUpgrade_SplitSurface::Init(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::ShapeUpgrade_SplitSurface*)_NativeInstance)->Init(h_S, UFirst, ULast, VFirst, VLast);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::ShapeUpgrade_SplitSurface::SetUSplitValues(Macad::Occt::TColStd_HSequenceOfReal^ UValues)
{
	Handle(::TColStd_HSequenceOfReal) h_UValues = UValues->NativeInstance;
	((::ShapeUpgrade_SplitSurface*)_NativeInstance)->SetUSplitValues(h_UValues);
	UValues->NativeInstance = h_UValues.get();
}

void Macad::Occt::ShapeUpgrade_SplitSurface::SetVSplitValues(Macad::Occt::TColStd_HSequenceOfReal^ VValues)
{
	Handle(::TColStd_HSequenceOfReal) h_VValues = VValues->NativeInstance;
	((::ShapeUpgrade_SplitSurface*)_NativeInstance)->SetVSplitValues(h_VValues);
	VValues->NativeInstance = h_VValues.get();
}

void Macad::Occt::ShapeUpgrade_SplitSurface::Build(bool Segment)
{
	((::ShapeUpgrade_SplitSurface*)_NativeInstance)->Build(Segment);
}

void Macad::Occt::ShapeUpgrade_SplitSurface::Compute(bool Segment)
{
	((::ShapeUpgrade_SplitSurface*)_NativeInstance)->Compute(Segment);
}

void Macad::Occt::ShapeUpgrade_SplitSurface::Compute()
{
	((::ShapeUpgrade_SplitSurface*)_NativeInstance)->Compute(true);
}

void Macad::Occt::ShapeUpgrade_SplitSurface::Perform(bool Segment)
{
	((::ShapeUpgrade_SplitSurface*)_NativeInstance)->Perform(Segment);
}

void Macad::Occt::ShapeUpgrade_SplitSurface::Perform()
{
	((::ShapeUpgrade_SplitSurface*)_NativeInstance)->Perform(true);
}

Macad::Occt::TColStd_HSequenceOfReal^ Macad::Occt::ShapeUpgrade_SplitSurface::USplitValues()
{
	Handle(::TColStd_HSequenceOfReal) _result;
	_result = ((::ShapeUpgrade_SplitSurface*)_NativeInstance)->USplitValues();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HSequenceOfReal::CreateDowncasted( _result.get());
}

Macad::Occt::TColStd_HSequenceOfReal^ Macad::Occt::ShapeUpgrade_SplitSurface::VSplitValues()
{
	Handle(::TColStd_HSequenceOfReal) _result;
	_result = ((::ShapeUpgrade_SplitSurface*)_NativeInstance)->VSplitValues();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HSequenceOfReal::CreateDowncasted( _result.get());
}

bool Macad::Occt::ShapeUpgrade_SplitSurface::Status(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeUpgrade_SplitSurface*)_NativeInstance)->Status((::ShapeExtend_Status)status);
}

Macad::Occt::ShapeExtend_CompositeSurface^ Macad::Occt::ShapeUpgrade_SplitSurface::ResSurfaces()
{
	Handle(::ShapeExtend_CompositeSurface) _result;
	_result = ((::ShapeUpgrade_SplitSurface*)_NativeInstance)->ResSurfaces();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeExtend_CompositeSurface::CreateDowncasted( _result.get());
}


Macad::Occt::ShapeUpgrade_SplitSurface^ Macad::Occt::ShapeUpgrade_SplitSurface::CreateDowncasted(::ShapeUpgrade_SplitSurface* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_SplitSurfaceContinuity)))
		return Macad::Occt::ShapeUpgrade_SplitSurfaceContinuity::CreateDowncasted((::ShapeUpgrade_SplitSurfaceContinuity*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_SplitSurfaceAngle)))
		return Macad::Occt::ShapeUpgrade_SplitSurfaceAngle::CreateDowncasted((::ShapeUpgrade_SplitSurfaceAngle*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_ConvertSurfaceToBezierBasis)))
		return Macad::Occt::ShapeUpgrade_ConvertSurfaceToBezierBasis::CreateDowncasted((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_SplitSurfaceArea)))
		return Macad::Occt::ShapeUpgrade_SplitSurfaceArea::CreateDowncasted((::ShapeUpgrade_SplitSurfaceArea*)instance);

	return gcnew Macad::Occt::ShapeUpgrade_SplitSurface( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitSurfaceContinuity
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_SplitSurfaceContinuity::ShapeUpgrade_SplitSurfaceContinuity()
	: Macad::Occt::ShapeUpgrade_SplitSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitSurfaceContinuity();
}

Macad::Occt::ShapeUpgrade_SplitSurfaceContinuity::ShapeUpgrade_SplitSurfaceContinuity(Macad::Occt::ShapeUpgrade_SplitSurfaceContinuity^ parameter1)
	: Macad::Occt::ShapeUpgrade_SplitSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitSurfaceContinuity(*(::ShapeUpgrade_SplitSurfaceContinuity*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_SplitSurfaceContinuity::SetCriterion(Macad::Occt::GeomAbs_Shape Criterion)
{
	((::ShapeUpgrade_SplitSurfaceContinuity*)_NativeInstance)->SetCriterion((::GeomAbs_Shape)Criterion);
}

void Macad::Occt::ShapeUpgrade_SplitSurfaceContinuity::SetTolerance(double Tol)
{
	((::ShapeUpgrade_SplitSurfaceContinuity*)_NativeInstance)->SetTolerance(Tol);
}

void Macad::Occt::ShapeUpgrade_SplitSurfaceContinuity::Compute(bool Segment)
{
	((::ShapeUpgrade_SplitSurfaceContinuity*)_NativeInstance)->Compute(Segment);
}


Macad::Occt::ShapeUpgrade_SplitSurfaceContinuity^ Macad::Occt::ShapeUpgrade_SplitSurfaceContinuity::CreateDowncasted(::ShapeUpgrade_SplitSurfaceContinuity* instance)
{
	return gcnew Macad::Occt::ShapeUpgrade_SplitSurfaceContinuity( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitSurfaceAngle
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_SplitSurfaceAngle::ShapeUpgrade_SplitSurfaceAngle(double MaxAngle)
	: Macad::Occt::ShapeUpgrade_SplitSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitSurfaceAngle(MaxAngle);
}

Macad::Occt::ShapeUpgrade_SplitSurfaceAngle::ShapeUpgrade_SplitSurfaceAngle(Macad::Occt::ShapeUpgrade_SplitSurfaceAngle^ parameter1)
	: Macad::Occt::ShapeUpgrade_SplitSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitSurfaceAngle(*(::ShapeUpgrade_SplitSurfaceAngle*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_SplitSurfaceAngle::SetMaxAngle(double MaxAngle)
{
	((::ShapeUpgrade_SplitSurfaceAngle*)_NativeInstance)->SetMaxAngle(MaxAngle);
}

double Macad::Occt::ShapeUpgrade_SplitSurfaceAngle::MaxAngle()
{
	return ((::ShapeUpgrade_SplitSurfaceAngle*)_NativeInstance)->MaxAngle();
}

void Macad::Occt::ShapeUpgrade_SplitSurfaceAngle::Compute(bool Segment)
{
	((::ShapeUpgrade_SplitSurfaceAngle*)_NativeInstance)->Compute(Segment);
}


Macad::Occt::ShapeUpgrade_SplitSurfaceAngle^ Macad::Occt::ShapeUpgrade_SplitSurfaceAngle::CreateDowncasted(::ShapeUpgrade_SplitSurfaceAngle* instance)
{
	return gcnew Macad::Occt::ShapeUpgrade_SplitSurfaceAngle( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ConvertSurfaceToBezierBasis
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_ConvertSurfaceToBezierBasis::ShapeUpgrade_ConvertSurfaceToBezierBasis()
	: Macad::Occt::ShapeUpgrade_SplitSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_ConvertSurfaceToBezierBasis();
}

Macad::Occt::ShapeUpgrade_ConvertSurfaceToBezierBasis::ShapeUpgrade_ConvertSurfaceToBezierBasis(Macad::Occt::ShapeUpgrade_ConvertSurfaceToBezierBasis^ parameter1)
	: Macad::Occt::ShapeUpgrade_SplitSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_ConvertSurfaceToBezierBasis(*(::ShapeUpgrade_ConvertSurfaceToBezierBasis*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_ConvertSurfaceToBezierBasis::Build(bool Segment)
{
	((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)_NativeInstance)->Build(Segment);
}

void Macad::Occt::ShapeUpgrade_ConvertSurfaceToBezierBasis::Compute(bool Segment)
{
	((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)_NativeInstance)->Compute(Segment);
}

Macad::Occt::ShapeExtend_CompositeSurface^ Macad::Occt::ShapeUpgrade_ConvertSurfaceToBezierBasis::Segments()
{
	Handle(::ShapeExtend_CompositeSurface) _result;
	_result = ((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)_NativeInstance)->Segments();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeExtend_CompositeSurface::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeUpgrade_ConvertSurfaceToBezierBasis::SetPlaneMode(bool mode)
{
	((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)_NativeInstance)->SetPlaneMode(mode);
}

bool Macad::Occt::ShapeUpgrade_ConvertSurfaceToBezierBasis::GetPlaneMode()
{
	return ((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)_NativeInstance)->GetPlaneMode();
}

void Macad::Occt::ShapeUpgrade_ConvertSurfaceToBezierBasis::SetRevolutionMode(bool mode)
{
	((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)_NativeInstance)->SetRevolutionMode(mode);
}

bool Macad::Occt::ShapeUpgrade_ConvertSurfaceToBezierBasis::GetRevolutionMode()
{
	return ((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)_NativeInstance)->GetRevolutionMode();
}

void Macad::Occt::ShapeUpgrade_ConvertSurfaceToBezierBasis::SetExtrusionMode(bool mode)
{
	((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)_NativeInstance)->SetExtrusionMode(mode);
}

bool Macad::Occt::ShapeUpgrade_ConvertSurfaceToBezierBasis::GetExtrusionMode()
{
	return ((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)_NativeInstance)->GetExtrusionMode();
}

void Macad::Occt::ShapeUpgrade_ConvertSurfaceToBezierBasis::SetBSplineMode(bool mode)
{
	((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)_NativeInstance)->SetBSplineMode(mode);
}

bool Macad::Occt::ShapeUpgrade_ConvertSurfaceToBezierBasis::GetBSplineMode()
{
	return ((::ShapeUpgrade_ConvertSurfaceToBezierBasis*)_NativeInstance)->GetBSplineMode();
}


Macad::Occt::ShapeUpgrade_ConvertSurfaceToBezierBasis^ Macad::Occt::ShapeUpgrade_ConvertSurfaceToBezierBasis::CreateDowncasted(::ShapeUpgrade_ConvertSurfaceToBezierBasis* instance)
{
	return gcnew Macad::Occt::ShapeUpgrade_ConvertSurfaceToBezierBasis( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitSurfaceArea
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_SplitSurfaceArea::ShapeUpgrade_SplitSurfaceArea()
	: Macad::Occt::ShapeUpgrade_SplitSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitSurfaceArea();
}

Macad::Occt::ShapeUpgrade_SplitSurfaceArea::ShapeUpgrade_SplitSurfaceArea(Macad::Occt::ShapeUpgrade_SplitSurfaceArea^ parameter1)
	: Macad::Occt::ShapeUpgrade_SplitSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_SplitSurfaceArea(*(::ShapeUpgrade_SplitSurfaceArea*)parameter1->NativeInstance);
}

int Macad::Occt::ShapeUpgrade_SplitSurfaceArea::NbParts()
{
	return ((::ShapeUpgrade_SplitSurfaceArea*)_NativeInstance)->NbParts();
}

void Macad::Occt::ShapeUpgrade_SplitSurfaceArea::Compute(bool Segment)
{
	((::ShapeUpgrade_SplitSurfaceArea*)_NativeInstance)->Compute(Segment);
}

void Macad::Occt::ShapeUpgrade_SplitSurfaceArea::Compute()
{
	((::ShapeUpgrade_SplitSurfaceArea*)_NativeInstance)->Compute(true);
}


Macad::Occt::ShapeUpgrade_SplitSurfaceArea^ Macad::Occt::ShapeUpgrade_SplitSurfaceArea::CreateDowncasted(::ShapeUpgrade_SplitSurfaceArea* instance)
{
	return gcnew Macad::Occt::ShapeUpgrade_SplitSurfaceArea( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShellSewing
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_ShellSewing::ShapeUpgrade_ShellSewing()
	: BaseClass<::ShapeUpgrade_ShellSewing>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShellSewing();
}

Macad::Occt::ShapeUpgrade_ShellSewing::ShapeUpgrade_ShellSewing(Macad::Occt::ShapeUpgrade_ShellSewing^ parameter1)
	: BaseClass<::ShapeUpgrade_ShellSewing>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade_ShellSewing(*(::ShapeUpgrade_ShellSewing*)parameter1->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeUpgrade_ShellSewing::ApplySewing(Macad::Occt::TopoDS_Shape^ shape, double tol)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeUpgrade_ShellSewing*)_NativeInstance)->ApplySewing(*(::TopoDS_Shape*)shape->NativeInstance, tol);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeUpgrade_ShellSewing::ApplySewing(Macad::Occt::TopoDS_Shape^ shape)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeUpgrade_ShellSewing*)_NativeInstance)->ApplySewing(*(::TopoDS_Shape*)shape->NativeInstance, 0.);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}




//---------------------------------------------------------------------
//  Class  ShapeUpgrade_FixSmallCurves
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_FixSmallCurves::ShapeUpgrade_FixSmallCurves()
	: Macad::Occt::ShapeUpgrade_Tool(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_FixSmallCurves();
}

Macad::Occt::ShapeUpgrade_FixSmallCurves::ShapeUpgrade_FixSmallCurves(Macad::Occt::ShapeUpgrade_FixSmallCurves^ parameter1)
	: Macad::Occt::ShapeUpgrade_Tool(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_FixSmallCurves(*(::ShapeUpgrade_FixSmallCurves*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_FixSmallCurves::Init(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace)
{
	((::ShapeUpgrade_FixSmallCurves*)_NativeInstance)->Init(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Face*)theFace->NativeInstance);
}

bool Macad::Occt::ShapeUpgrade_FixSmallCurves::Approx(Macad::Occt::Geom_Curve^ Curve3d, Macad::Occt::Geom2d_Curve^ Curve2d, Macad::Occt::Geom2d_Curve^ Curve2dR, double% First, double% Last)
{
	Handle(::Geom_Curve) h_Curve3d = Curve3d->NativeInstance;
	Handle(::Geom2d_Curve) h_Curve2d = Curve2d->NativeInstance;
	Handle(::Geom2d_Curve) h_Curve2dR = Curve2dR->NativeInstance;
	pin_ptr<double> pp_First = &First;
	pin_ptr<double> pp_Last = &Last;
	return ((::ShapeUpgrade_FixSmallCurves*)_NativeInstance)->Approx(h_Curve3d, h_Curve2d, h_Curve2dR, *(Standard_Real*)pp_First, *(Standard_Real*)pp_Last);
	Curve3d->NativeInstance = h_Curve3d.get();
	Curve2d->NativeInstance = h_Curve2d.get();
	Curve2dR->NativeInstance = h_Curve2dR.get();
}

void Macad::Occt::ShapeUpgrade_FixSmallCurves::SetSplitCurve3dTool(Macad::Occt::ShapeUpgrade_SplitCurve3d^ splitCurve3dTool)
{
	Handle(::ShapeUpgrade_SplitCurve3d) h_splitCurve3dTool = splitCurve3dTool->NativeInstance;
	((::ShapeUpgrade_FixSmallCurves*)_NativeInstance)->SetSplitCurve3dTool(h_splitCurve3dTool);
	splitCurve3dTool->NativeInstance = h_splitCurve3dTool.get();
}

void Macad::Occt::ShapeUpgrade_FixSmallCurves::SetSplitCurve2dTool(Macad::Occt::ShapeUpgrade_SplitCurve2d^ splitCurve2dTool)
{
	Handle(::ShapeUpgrade_SplitCurve2d) h_splitCurve2dTool = splitCurve2dTool->NativeInstance;
	((::ShapeUpgrade_FixSmallCurves*)_NativeInstance)->SetSplitCurve2dTool(h_splitCurve2dTool);
	splitCurve2dTool->NativeInstance = h_splitCurve2dTool.get();
}

bool Macad::Occt::ShapeUpgrade_FixSmallCurves::Status(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeUpgrade_FixSmallCurves*)_NativeInstance)->Status((::ShapeExtend_Status)status);
}


Macad::Occt::ShapeUpgrade_FixSmallCurves^ Macad::Occt::ShapeUpgrade_FixSmallCurves::CreateDowncasted(::ShapeUpgrade_FixSmallCurves* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeUpgrade_FixSmallBezierCurves)))
		return Macad::Occt::ShapeUpgrade_FixSmallBezierCurves::CreateDowncasted((::ShapeUpgrade_FixSmallBezierCurves*)instance);

	return gcnew Macad::Occt::ShapeUpgrade_FixSmallCurves( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_FixSmallBezierCurves
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_FixSmallBezierCurves::ShapeUpgrade_FixSmallBezierCurves()
	: Macad::Occt::ShapeUpgrade_FixSmallCurves(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_FixSmallBezierCurves();
}

Macad::Occt::ShapeUpgrade_FixSmallBezierCurves::ShapeUpgrade_FixSmallBezierCurves(Macad::Occt::ShapeUpgrade_FixSmallBezierCurves^ parameter1)
	: Macad::Occt::ShapeUpgrade_FixSmallCurves(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_FixSmallBezierCurves(*(::ShapeUpgrade_FixSmallBezierCurves*)parameter1->NativeInstance);
}

bool Macad::Occt::ShapeUpgrade_FixSmallBezierCurves::Approx(Macad::Occt::Geom_Curve^ Curve3d, Macad::Occt::Geom2d_Curve^ Curve2d, Macad::Occt::Geom2d_Curve^ Curve2dR, double% First, double% Last)
{
	Handle(::Geom_Curve) h_Curve3d = Curve3d->NativeInstance;
	Handle(::Geom2d_Curve) h_Curve2d = Curve2d->NativeInstance;
	Handle(::Geom2d_Curve) h_Curve2dR = Curve2dR->NativeInstance;
	pin_ptr<double> pp_First = &First;
	pin_ptr<double> pp_Last = &Last;
	return ((::ShapeUpgrade_FixSmallBezierCurves*)_NativeInstance)->Approx(h_Curve3d, h_Curve2d, h_Curve2dR, *(Standard_Real*)pp_First, *(Standard_Real*)pp_Last);
	Curve3d->NativeInstance = h_Curve3d.get();
	Curve2d->NativeInstance = h_Curve2d.get();
	Curve2dR->NativeInstance = h_Curve2dR.get();
}


Macad::Occt::ShapeUpgrade_FixSmallBezierCurves^ Macad::Occt::ShapeUpgrade_FixSmallBezierCurves::CreateDowncasted(::ShapeUpgrade_FixSmallBezierCurves* instance)
{
	return gcnew Macad::Occt::ShapeUpgrade_FixSmallBezierCurves( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_RemoveLocations
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_RemoveLocations::ShapeUpgrade_RemoveLocations()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_RemoveLocations();
}

Macad::Occt::ShapeUpgrade_RemoveLocations::ShapeUpgrade_RemoveLocations(Macad::Occt::ShapeUpgrade_RemoveLocations^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_RemoveLocations(*(::ShapeUpgrade_RemoveLocations*)parameter1->NativeInstance);
}

bool Macad::Occt::ShapeUpgrade_RemoveLocations::Remove(Macad::Occt::TopoDS_Shape^ theShape)
{
	return ((::ShapeUpgrade_RemoveLocations*)_NativeInstance)->Remove(*(::TopoDS_Shape*)theShape->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeUpgrade_RemoveLocations::GetResult()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeUpgrade_RemoveLocations*)_NativeInstance)->GetResult();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::ShapeUpgrade_RemoveLocations::SetRemoveLevel(Macad::Occt::TopAbs_ShapeEnum theLevel)
{
	((::ShapeUpgrade_RemoveLocations*)_NativeInstance)->SetRemoveLevel((::TopAbs_ShapeEnum)theLevel);
}

Macad::Occt::TopAbs_ShapeEnum Macad::Occt::ShapeUpgrade_RemoveLocations::RemoveLevel()
{
	return (Macad::Occt::TopAbs_ShapeEnum)((::ShapeUpgrade_RemoveLocations*)_NativeInstance)->RemoveLevel();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeUpgrade_RemoveLocations::ModifiedShape(Macad::Occt::TopoDS_Shape^ theInitShape)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeUpgrade_RemoveLocations*)_NativeInstance)->ModifiedShape(*(::TopoDS_Shape*)theInitShape->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}


Macad::Occt::ShapeUpgrade_RemoveLocations^ Macad::Occt::ShapeUpgrade_RemoveLocations::CreateDowncasted(::ShapeUpgrade_RemoveLocations* instance)
{
	return gcnew Macad::Occt::ShapeUpgrade_RemoveLocations( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_RemoveInternalWires
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_RemoveInternalWires::ShapeUpgrade_RemoveInternalWires()
	: Macad::Occt::ShapeUpgrade_Tool(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_RemoveInternalWires();
}

Macad::Occt::ShapeUpgrade_RemoveInternalWires::ShapeUpgrade_RemoveInternalWires(Macad::Occt::TopoDS_Shape^ theShape)
	: Macad::Occt::ShapeUpgrade_Tool(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_RemoveInternalWires(*(::TopoDS_Shape*)theShape->NativeInstance);
}

Macad::Occt::ShapeUpgrade_RemoveInternalWires::ShapeUpgrade_RemoveInternalWires(Macad::Occt::ShapeUpgrade_RemoveInternalWires^ parameter1)
	: Macad::Occt::ShapeUpgrade_Tool(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_RemoveInternalWires(*(::ShapeUpgrade_RemoveInternalWires*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_RemoveInternalWires::Init(Macad::Occt::TopoDS_Shape^ theShape)
{
	((::ShapeUpgrade_RemoveInternalWires*)_NativeInstance)->Init(*(::TopoDS_Shape*)theShape->NativeInstance);
}

bool Macad::Occt::ShapeUpgrade_RemoveInternalWires::Perform()
{
	return ((::ShapeUpgrade_RemoveInternalWires*)_NativeInstance)->Perform();
}

bool Macad::Occt::ShapeUpgrade_RemoveInternalWires::Perform(Macad::Occt::TopTools_SequenceOfShape^ theSeqShapes)
{
	return ((::ShapeUpgrade_RemoveInternalWires*)_NativeInstance)->Perform(*(::TopTools_SequenceOfShape*)theSeqShapes->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeUpgrade_RemoveInternalWires::GetResult()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeUpgrade_RemoveInternalWires*)_NativeInstance)->GetResult();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

double Macad::Occt::ShapeUpgrade_RemoveInternalWires::MinArea()
{
	return ((::ShapeUpgrade_RemoveInternalWires*)_NativeInstance)->MinArea();
}

bool Macad::Occt::ShapeUpgrade_RemoveInternalWires::RemoveFaceMode()
{
	return ((::ShapeUpgrade_RemoveInternalWires*)_NativeInstance)->RemoveFaceMode();
}

Macad::Occt::TopTools_SequenceOfShape^ Macad::Occt::ShapeUpgrade_RemoveInternalWires::RemovedFaces()
{
	::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
	*_result =  (::TopTools_SequenceOfShape)((::ShapeUpgrade_RemoveInternalWires*)_NativeInstance)->RemovedFaces();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_SequenceOfShape(_result);
}

Macad::Occt::TopTools_SequenceOfShape^ Macad::Occt::ShapeUpgrade_RemoveInternalWires::RemovedWires()
{
	::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
	*_result =  (::TopTools_SequenceOfShape)((::ShapeUpgrade_RemoveInternalWires*)_NativeInstance)->RemovedWires();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_SequenceOfShape(_result);
}

bool Macad::Occt::ShapeUpgrade_RemoveInternalWires::Status(Macad::Occt::ShapeExtend_Status theStatus)
{
	return ((::ShapeUpgrade_RemoveInternalWires*)_NativeInstance)->Status((::ShapeExtend_Status)theStatus);
}


Macad::Occt::ShapeUpgrade_RemoveInternalWires^ Macad::Occt::ShapeUpgrade_RemoveInternalWires::CreateDowncasted(::ShapeUpgrade_RemoveInternalWires* instance)
{
	return gcnew Macad::Occt::ShapeUpgrade_RemoveInternalWires( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade_UnifySameDomain
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade_UnifySameDomain::ShapeUpgrade_UnifySameDomain()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_UnifySameDomain();
}

Macad::Occt::ShapeUpgrade_UnifySameDomain::ShapeUpgrade_UnifySameDomain(Macad::Occt::TopoDS_Shape^ aShape, bool UnifyEdges, bool UnifyFaces, bool ConcatBSplines)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_UnifySameDomain(*(::TopoDS_Shape*)aShape->NativeInstance, UnifyEdges, UnifyFaces, ConcatBSplines);
}

Macad::Occt::ShapeUpgrade_UnifySameDomain::ShapeUpgrade_UnifySameDomain(Macad::Occt::TopoDS_Shape^ aShape, bool UnifyEdges, bool UnifyFaces)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_UnifySameDomain(*(::TopoDS_Shape*)aShape->NativeInstance, UnifyEdges, UnifyFaces, false);
}

Macad::Occt::ShapeUpgrade_UnifySameDomain::ShapeUpgrade_UnifySameDomain(Macad::Occt::TopoDS_Shape^ aShape, bool UnifyEdges)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_UnifySameDomain(*(::TopoDS_Shape*)aShape->NativeInstance, UnifyEdges, true, false);
}

Macad::Occt::ShapeUpgrade_UnifySameDomain::ShapeUpgrade_UnifySameDomain(Macad::Occt::TopoDS_Shape^ aShape)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_UnifySameDomain(*(::TopoDS_Shape*)aShape->NativeInstance, true, true, false);
}

Macad::Occt::ShapeUpgrade_UnifySameDomain::ShapeUpgrade_UnifySameDomain(Macad::Occt::ShapeUpgrade_UnifySameDomain^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeUpgrade_UnifySameDomain(*(::ShapeUpgrade_UnifySameDomain*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_UnifySameDomain::Initialize(Macad::Occt::TopoDS_Shape^ aShape, bool UnifyEdges, bool UnifyFaces, bool ConcatBSplines)
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)aShape->NativeInstance, UnifyEdges, UnifyFaces, ConcatBSplines);
}

void Macad::Occt::ShapeUpgrade_UnifySameDomain::Initialize(Macad::Occt::TopoDS_Shape^ aShape, bool UnifyEdges, bool UnifyFaces)
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)aShape->NativeInstance, UnifyEdges, UnifyFaces, false);
}

void Macad::Occt::ShapeUpgrade_UnifySameDomain::Initialize(Macad::Occt::TopoDS_Shape^ aShape, bool UnifyEdges)
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)aShape->NativeInstance, UnifyEdges, true, false);
}

void Macad::Occt::ShapeUpgrade_UnifySameDomain::Initialize(Macad::Occt::TopoDS_Shape^ aShape)
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)aShape->NativeInstance, true, true, false);
}

void Macad::Occt::ShapeUpgrade_UnifySameDomain::AllowInternalEdges(bool theValue)
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->AllowInternalEdges(theValue);
}

void Macad::Occt::ShapeUpgrade_UnifySameDomain::KeepShape(Macad::Occt::TopoDS_Shape^ theShape)
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->KeepShape(*(::TopoDS_Shape*)theShape->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_UnifySameDomain::KeepShapes(Macad::Occt::TopTools_MapOfShape^ theShapes)
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->KeepShapes(*(::TopTools_MapOfShape*)theShapes->NativeInstance);
}

void Macad::Occt::ShapeUpgrade_UnifySameDomain::SetSafeInputMode(bool theValue)
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->SetSafeInputMode(theValue);
}

void Macad::Occt::ShapeUpgrade_UnifySameDomain::SetLinearTolerance(double theValue)
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->SetLinearTolerance(theValue);
}

void Macad::Occt::ShapeUpgrade_UnifySameDomain::SetAngularTolerance(double theValue)
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->SetAngularTolerance(theValue);
}

void Macad::Occt::ShapeUpgrade_UnifySameDomain::Build()
{
	((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->Build();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeUpgrade_UnifySameDomain::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->Shape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::BRepTools_History^ Macad::Occt::ShapeUpgrade_UnifySameDomain::History()
{
	Handle(::BRepTools_History) _result;
	_result = ((::ShapeUpgrade_UnifySameDomain*)_NativeInstance)->History();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRepTools_History::CreateDowncasted( _result.get());
}


Macad::Occt::ShapeUpgrade_UnifySameDomain^ Macad::Occt::ShapeUpgrade_UnifySameDomain::CreateDowncasted(::ShapeUpgrade_UnifySameDomain* instance)
{
	return gcnew Macad::Occt::ShapeUpgrade_UnifySameDomain( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeUpgrade
//---------------------------------------------------------------------

Macad::Occt::ShapeUpgrade::ShapeUpgrade()
	: BaseClass<::ShapeUpgrade>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade();
}

Macad::Occt::ShapeUpgrade::ShapeUpgrade(Macad::Occt::ShapeUpgrade^ parameter1)
	: BaseClass<::ShapeUpgrade>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeUpgrade(*(::ShapeUpgrade*)parameter1->NativeInstance);
}



