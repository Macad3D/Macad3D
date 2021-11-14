// Generated wrapper code for package BRepFilletAPI

#pragma once

#include "BRepBuilderAPI.h"
#include "BRepFilletAPI.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRepFilletAPI_LocalOperation
//---------------------------------------------------------------------
public ref class BRepFilletAPI_LocalOperation : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepFilletAPI_LocalOperation_h
public:
	Include_BRepFilletAPI_LocalOperation_h
#endif

protected:
	BRepFilletAPI_LocalOperation(InitMode init)
		: Macad::Occt::BRepBuilderAPI_MakeShape( init )
	{}

public:
	BRepFilletAPI_LocalOperation(::BRepFilletAPI_LocalOperation* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepFilletAPI_LocalOperation(::BRepFilletAPI_LocalOperation& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepFilletAPI_LocalOperation* NativeInstance
	{
		::BRepFilletAPI_LocalOperation* get()
		{
			return static_cast<::BRepFilletAPI_LocalOperation*>(_NativeInstance);
		}
	}

public:
	BRepFilletAPI_LocalOperation(Macad::Occt::BRepFilletAPI_LocalOperation^ parameter1);
	BRepFilletAPI_LocalOperation();
	void Add(Macad::Occt::TopoDS_Edge^ E);
	void ResetContour(int IC);
	int NbContours();
	int Contour(Macad::Occt::TopoDS_Edge^ E);
	int NbEdges(int I);
	Macad::Occt::TopoDS_Edge^ Edge(int I, int J);
	void Remove(Macad::Occt::TopoDS_Edge^ E);
	double Length(int IC);
	Macad::Occt::TopoDS_Vertex^ FirstVertex(int IC);
	Macad::Occt::TopoDS_Vertex^ LastVertex(int IC);
	double Abscissa(int IC, Macad::Occt::TopoDS_Vertex^ V);
	double RelativeAbscissa(int IC, Macad::Occt::TopoDS_Vertex^ V);
	bool ClosedAndTangent(int IC);
	bool Closed(int IC);
	void Reset();
	void Simulate(int IC);
	int NbSurf(int IC);
	/* Method skipped due to unknown mapping: ChFiDS_SecHArray1 Sect(Standard_Integer IC, Standard_Integer IS, ) */
}; // class BRepFilletAPI_LocalOperation

//---------------------------------------------------------------------
//  Class  BRepFilletAPI_MakeChamfer
//---------------------------------------------------------------------
public ref class BRepFilletAPI_MakeChamfer sealed : public Macad::Occt::BRepFilletAPI_LocalOperation
{

#ifdef Include_BRepFilletAPI_MakeChamfer_h
public:
	Include_BRepFilletAPI_MakeChamfer_h
#endif

public:
	BRepFilletAPI_MakeChamfer(::BRepFilletAPI_MakeChamfer* nativeInstance)
		: Macad::Occt::BRepFilletAPI_LocalOperation( nativeInstance )
	{}

	BRepFilletAPI_MakeChamfer(::BRepFilletAPI_MakeChamfer& nativeInstance)
		: Macad::Occt::BRepFilletAPI_LocalOperation( nativeInstance )
	{}

	property ::BRepFilletAPI_MakeChamfer* NativeInstance
	{
		::BRepFilletAPI_MakeChamfer* get()
		{
			return static_cast<::BRepFilletAPI_MakeChamfer*>(_NativeInstance);
		}
	}

public:
	BRepFilletAPI_MakeChamfer(Macad::Occt::TopoDS_Shape^ S);
	BRepFilletAPI_MakeChamfer(Macad::Occt::BRepFilletAPI_MakeChamfer^ parameter1);
	void Add(Macad::Occt::TopoDS_Edge^ E);
	void Add(double Dis, Macad::Occt::TopoDS_Edge^ E);
	void SetDist(double Dis, int IC, Macad::Occt::TopoDS_Face^ F);
	void GetDist(int IC, double% Dis);
	void Add(double Dis1, double Dis2, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
	void SetDists(double Dis1, double Dis2, int IC, Macad::Occt::TopoDS_Face^ F);
	void Dists(int IC, double% Dis1, double% Dis2);
	void AddDA(double Dis, double Angle, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
	void SetDistAngle(double Dis, double Angle, int IC, Macad::Occt::TopoDS_Face^ F);
	void GetDistAngle(int IC, double% Dis, double% Angle);
	/* Method skipped due to unknown mapping: void SetMode(ChFiDS_ChamfMode theMode, ) */
	bool IsSymetric(int IC);
	bool IsTwoDistances(int IC);
	bool IsDistanceAngle(int IC);
	void ResetContour(int IC);
	int NbContours();
	int Contour(Macad::Occt::TopoDS_Edge^ E);
	int NbEdges(int I);
	Macad::Occt::TopoDS_Edge^ Edge(int I, int J);
	void Remove(Macad::Occt::TopoDS_Edge^ E);
	double Length(int IC);
	Macad::Occt::TopoDS_Vertex^ FirstVertex(int IC);
	Macad::Occt::TopoDS_Vertex^ LastVertex(int IC);
	double Abscissa(int IC, Macad::Occt::TopoDS_Vertex^ V);
	double RelativeAbscissa(int IC, Macad::Occt::TopoDS_Vertex^ V);
	bool ClosedAndTangent(int IC);
	bool Closed(int IC);
	void Build(Macad::Occt::Message_ProgressRange^ theRange);
	void Build();
	void Reset();
	/* Method skipped due to unknown mapping: TopOpeBRepBuild_HBuilder Builder() */
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ EorV);
	Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ F);
	bool IsDeleted(Macad::Occt::TopoDS_Shape^ F);
	void Simulate(int IC);
	int NbSurf(int IC);
	/* Method skipped due to unknown mapping: ChFiDS_SecHArray1 Sect(Standard_Integer IC, Standard_Integer IS, ) */
}; // class BRepFilletAPI_MakeChamfer

//---------------------------------------------------------------------
//  Class  BRepFilletAPI_MakeFillet
//---------------------------------------------------------------------
public ref class BRepFilletAPI_MakeFillet sealed : public Macad::Occt::BRepFilletAPI_LocalOperation
{

#ifdef Include_BRepFilletAPI_MakeFillet_h
public:
	Include_BRepFilletAPI_MakeFillet_h
#endif

public:
	BRepFilletAPI_MakeFillet(::BRepFilletAPI_MakeFillet* nativeInstance)
		: Macad::Occt::BRepFilletAPI_LocalOperation( nativeInstance )
	{}

	BRepFilletAPI_MakeFillet(::BRepFilletAPI_MakeFillet& nativeInstance)
		: Macad::Occt::BRepFilletAPI_LocalOperation( nativeInstance )
	{}

	property ::BRepFilletAPI_MakeFillet* NativeInstance
	{
		::BRepFilletAPI_MakeFillet* get()
		{
			return static_cast<::BRepFilletAPI_MakeFillet*>(_NativeInstance);
		}
	}

public:
	BRepFilletAPI_MakeFillet(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::ChFi3d_FilletShape FShape);
	BRepFilletAPI_MakeFillet(Macad::Occt::TopoDS_Shape^ S);
	BRepFilletAPI_MakeFillet(Macad::Occt::BRepFilletAPI_MakeFillet^ parameter1);
	void SetParams(double Tang, double Tesp, double T2d, double TApp3d, double TolApp2d, double Fleche);
	void SetContinuity(Macad::Occt::GeomAbs_Shape InternalContinuity, double AngularTolerance);
	void Add(Macad::Occt::TopoDS_Edge^ E);
	void Add(double Radius, Macad::Occt::TopoDS_Edge^ E);
	void Add(double R1, double R2, Macad::Occt::TopoDS_Edge^ E);
	/* Method skipped due to unknown mapping: void Add(Law_Function L, TopoDS_Edge E, ) */
	void Add(Macad::Occt::TColgp_Array1OfPnt2d^ UandR, Macad::Occt::TopoDS_Edge^ E);
	void SetRadius(double Radius, int IC, int IinC);
	void SetRadius(double R1, double R2, int IC, int IinC);
	/* Method skipped due to unknown mapping: void SetRadius(Law_Function L, Standard_Integer IC, Standard_Integer IinC, ) */
	void SetRadius(Macad::Occt::TColgp_Array1OfPnt2d^ UandR, int IC, int IinC);
	void ResetContour(int IC);
	bool IsConstant(int IC);
	double Radius(int IC);
	bool IsConstant(int IC, Macad::Occt::TopoDS_Edge^ E);
	double Radius(int IC, Macad::Occt::TopoDS_Edge^ E);
	void SetRadius(double Radius, int IC, Macad::Occt::TopoDS_Edge^ E);
	void SetRadius(double Radius, int IC, Macad::Occt::TopoDS_Vertex^ V);
	bool GetBounds(int IC, Macad::Occt::TopoDS_Edge^ E, double% F, double% L);
	/* Method skipped due to unknown mapping: Law_Function GetLaw(Standard_Integer IC, TopoDS_Edge E, ) */
	/* Method skipped due to unknown mapping: void SetLaw(Standard_Integer IC, TopoDS_Edge E, Law_Function L, ) */
	void SetFilletShape(Macad::Occt::ChFi3d_FilletShape FShape);
	Macad::Occt::ChFi3d_FilletShape GetFilletShape();
	int NbContours();
	int Contour(Macad::Occt::TopoDS_Edge^ E);
	int NbEdges(int I);
	Macad::Occt::TopoDS_Edge^ Edge(int I, int J);
	void Remove(Macad::Occt::TopoDS_Edge^ E);
	double Length(int IC);
	Macad::Occt::TopoDS_Vertex^ FirstVertex(int IC);
	Macad::Occt::TopoDS_Vertex^ LastVertex(int IC);
	double Abscissa(int IC, Macad::Occt::TopoDS_Vertex^ V);
	double RelativeAbscissa(int IC, Macad::Occt::TopoDS_Vertex^ V);
	bool ClosedAndTangent(int IC);
	bool Closed(int IC);
	void Build(Macad::Occt::Message_ProgressRange^ theRange);
	void Build();
	void Reset();
	/* Method skipped due to unknown mapping: TopOpeBRepBuild_HBuilder Builder() */
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ EorV);
	Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ F);
	bool IsDeleted(Macad::Occt::TopoDS_Shape^ F);
	int NbSurfaces();
	Macad::Occt::TopTools_ListOfShape^ NewFaces(int I);
	void Simulate(int IC);
	int NbSurf(int IC);
	/* Method skipped due to unknown mapping: ChFiDS_SecHArray1 Sect(Standard_Integer IC, Standard_Integer IS, ) */
	int NbFaultyContours();
	int FaultyContour(int I);
	int NbComputedSurfaces(int IC);
	Macad::Occt::Geom_Surface^ ComputedSurface(int IC, int IS);
	int NbFaultyVertices();
	Macad::Occt::TopoDS_Vertex^ FaultyVertex(int IV);
	bool HasResult();
	Macad::Occt::TopoDS_Shape^ BadShape();
	/* Method skipped due to unknown mapping: ChFiDS_ErrorStatus StripeStatus(Standard_Integer IC, ) */
}; // class BRepFilletAPI_MakeFillet

//---------------------------------------------------------------------
//  Class  BRepFilletAPI_MakeFillet2d
//---------------------------------------------------------------------
public ref class BRepFilletAPI_MakeFillet2d sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepFilletAPI_MakeFillet2d_h
public:
	Include_BRepFilletAPI_MakeFillet2d_h
#endif

public:
	BRepFilletAPI_MakeFillet2d(::BRepFilletAPI_MakeFillet2d* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepFilletAPI_MakeFillet2d(::BRepFilletAPI_MakeFillet2d& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepFilletAPI_MakeFillet2d* NativeInstance
	{
		::BRepFilletAPI_MakeFillet2d* get()
		{
			return static_cast<::BRepFilletAPI_MakeFillet2d*>(_NativeInstance);
		}
	}

public:
	BRepFilletAPI_MakeFillet2d();
	BRepFilletAPI_MakeFillet2d(Macad::Occt::TopoDS_Face^ F);
	BRepFilletAPI_MakeFillet2d(Macad::Occt::BRepFilletAPI_MakeFillet2d^ parameter1);
	void Init(Macad::Occt::TopoDS_Face^ F);
	void Init(Macad::Occt::TopoDS_Face^ RefFace, Macad::Occt::TopoDS_Face^ ModFace);
	Macad::Occt::TopoDS_Edge^ AddFillet(Macad::Occt::TopoDS_Vertex^ V, double Radius);
	Macad::Occt::TopoDS_Edge^ ModifyFillet(Macad::Occt::TopoDS_Edge^ Fillet, double Radius);
	Macad::Occt::TopoDS_Vertex^ RemoveFillet(Macad::Occt::TopoDS_Edge^ Fillet);
	Macad::Occt::TopoDS_Edge^ AddChamfer(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double D1, double D2);
	Macad::Occt::TopoDS_Edge^ AddChamfer(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Vertex^ V, double D, double Ang);
	Macad::Occt::TopoDS_Edge^ ModifyChamfer(Macad::Occt::TopoDS_Edge^ Chamfer, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double D1, double D2);
	Macad::Occt::TopoDS_Edge^ ModifyChamfer(Macad::Occt::TopoDS_Edge^ Chamfer, Macad::Occt::TopoDS_Edge^ E, double D, double Ang);
	Macad::Occt::TopoDS_Vertex^ RemoveChamfer(Macad::Occt::TopoDS_Edge^ Chamfer);
	bool IsModified(Macad::Occt::TopoDS_Edge^ E);
	Macad::Occt::TopTools_SequenceOfShape^ FilletEdges();
	int NbFillet();
	Macad::Occt::TopTools_SequenceOfShape^ ChamferEdges();
	int NbChamfer();
	Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ S);
	int NbCurves();
	Macad::Occt::TopTools_ListOfShape^ NewEdges(int I);
	bool HasDescendant(Macad::Occt::TopoDS_Edge^ E);
	Macad::Occt::TopoDS_Edge^ DescendantEdge(Macad::Occt::TopoDS_Edge^ E);
	Macad::Occt::TopoDS_Edge^ BasisEdge(Macad::Occt::TopoDS_Edge^ E);
	/* Method skipped due to unknown mapping: ChFi2d_ConstructionError Status() */
	void Build(Macad::Occt::Message_ProgressRange^ theRange);
	void Build();
}; // class BRepFilletAPI_MakeFillet2d

}; // namespace Occt
}; // namespace Macad
