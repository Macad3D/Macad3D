// Generated wrapper code for package BRepFeat

#pragma once

#include "BOPAlgo.h"
#include "BRepBuilderAPI.h"
#include "BRepFeat.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  BRepFeat_StatusError
//---------------------------------------------------------------------
public enum class BRepFeat_StatusError
{
	BRepFeat_OK = 0,
	BRepFeat_BadDirect = 1,
	BRepFeat_BadIntersect = 2,
	BRepFeat_EmptyBaryCurve = 3,
	BRepFeat_EmptyCutResult = 4,
	BRepFeat_FalseSide = 5,
	BRepFeat_IncDirection = 6,
	BRepFeat_IncSlidFace = 7,
	BRepFeat_IncParameter = 8,
	BRepFeat_IncTypes = 9,
	BRepFeat_IntervalOverlap = 10,
	BRepFeat_InvFirstShape = 11,
	BRepFeat_InvOption = 12,
	BRepFeat_InvShape = 13,
	BRepFeat_LocOpeNotDone = 14,
	BRepFeat_LocOpeInvNotDone = 15,
	BRepFeat_NoExtFace = 16,
	BRepFeat_NoFaceProf = 17,
	BRepFeat_NoGluer = 18,
	BRepFeat_NoIntersectF = 19,
	BRepFeat_NoIntersectU = 20,
	BRepFeat_NoParts = 21,
	BRepFeat_NoProjPt = 22,
	BRepFeat_NotInitialized = 23,
	BRepFeat_NotYetImplemented = 24,
	BRepFeat_NullRealTool = 25,
	BRepFeat_NullToolF = 26,
	BRepFeat_NullToolU = 27
}; // enum  class BRepFeat_StatusError

//---------------------------------------------------------------------
//  Enum  BRepFeat_PerfSelection
//---------------------------------------------------------------------
public enum class BRepFeat_PerfSelection
{
	BRepFeat_NoSelection = 0,
	BRepFeat_SelectionFU = 1,
	BRepFeat_SelectionU = 2,
	BRepFeat_SelectionSh = 3,
	BRepFeat_SelectionShU = 4
}; // enum  class BRepFeat_PerfSelection

//---------------------------------------------------------------------
//  Enum  BRepFeat_Status
//---------------------------------------------------------------------
public enum class BRepFeat_Status
{
	BRepFeat_NoError = 0,
	BRepFeat_InvalidPlacement = 1,
	BRepFeat_HoleTooLong = 2
}; // enum  class BRepFeat_Status

//---------------------------------------------------------------------
//  Class  BRepFeat
//---------------------------------------------------------------------
public ref class BRepFeat sealed : public BaseClass<::BRepFeat>
{

#ifdef Include_BRepFeat_h
public:
	Include_BRepFeat_h
#endif

public:
	BRepFeat(::BRepFeat* nativeInstance)
		: BaseClass<::BRepFeat>( nativeInstance, true )
	{}

	BRepFeat(::BRepFeat& nativeInstance)
		: BaseClass<::BRepFeat>( &nativeInstance, false )
	{}

	property ::BRepFeat* NativeInstance
	{
		::BRepFeat* get()
		{
			return static_cast<::BRepFeat*>(_NativeInstance);
		}
	}

public:
	BRepFeat();
	BRepFeat(Macad::Occt::BRepFeat^ parameter1);
	static void SampleEdges(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TColgp_SequenceOfPnt^ Pt);
	static void Barycenter(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Pnt% Pt);
	static double ParametricBarycenter(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Geom_Curve^ C);
	static void ParametricMinMax(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Geom_Curve^ C, double% prmin, double% prmax, double% prbmin, double% prbmax, bool% flag, bool Ori);
	static void ParametricMinMax(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Geom_Curve^ C, double% prmin, double% prmax, double% prbmin, double% prbmax, bool% flag);
	static bool IsInside(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2);
	/* Method skipped due to unknown mapping: Standard_Boolean IsInOut(BRepTopAdaptor_FClass2d FC, Geom2dAdaptor_Curve AC, ) */
	static void FaceUntil(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopoDS_Face^ F);
	static Macad::Occt::TopoDS_Solid^ Tool(Macad::Occt::TopoDS_Shape^ SRef, Macad::Occt::TopoDS_Face^ Fac, Macad::Occt::TopAbs_Orientation Orf);
	/* Method skipped due to unknown mapping: ostream Print(BRepFeat_StatusError SE, ostream S, ) */
}; // class BRepFeat

//---------------------------------------------------------------------
//  Class  BRepFeat_Builder
//---------------------------------------------------------------------
public ref class BRepFeat_Builder : public Macad::Occt::BOPAlgo_BOP
{

#ifdef Include_BRepFeat_Builder_h
public:
	Include_BRepFeat_Builder_h
#endif

protected:
	BRepFeat_Builder(InitMode init)
		: Macad::Occt::BOPAlgo_BOP( init )
	{}

public:
	BRepFeat_Builder(::BRepFeat_Builder* nativeInstance)
		: Macad::Occt::BOPAlgo_BOP( nativeInstance )
	{}

	BRepFeat_Builder(::BRepFeat_Builder& nativeInstance)
		: Macad::Occt::BOPAlgo_BOP( nativeInstance )
	{}

	property ::BRepFeat_Builder* NativeInstance
	{
		::BRepFeat_Builder* get()
		{
			return static_cast<::BRepFeat_Builder*>(_NativeInstance);
		}
	}

public:
	BRepFeat_Builder();
	BRepFeat_Builder(Macad::Occt::BRepFeat_Builder^ parameter1);
	void Clear();
	void Init(Macad::Occt::TopoDS_Shape^ theShape);
	void Init(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::TopoDS_Shape^ theTool);
	void SetOperation(int theFuse);
	void SetOperation(int theFuse, bool theFlag);
	void PartsOfTool(Macad::Occt::TopTools_ListOfShape^ theLT);
	void KeepParts(Macad::Occt::TopTools_ListOfShape^ theIm);
	void KeepPart(Macad::Occt::TopoDS_Shape^ theS);
	void PerformResult(Macad::Occt::Message_ProgressRange^ theRange);
	void PerformResult();
	void RebuildFaces();
	void RebuildEdge(Macad::Occt::TopoDS_Shape^ theE, Macad::Occt::TopoDS_Face^ theF, Macad::Occt::TopTools_MapOfShape^ theME, Macad::Occt::TopTools_ListOfShape^ aLEIm);
	void CheckSolidImages();
	void FillRemoved();
	void FillRemoved(Macad::Occt::TopoDS_Shape^ theS, Macad::Occt::TopTools_MapOfShape^ theM);
}; // class BRepFeat_Builder

//---------------------------------------------------------------------
//  Class  BRepFeat_Form
//---------------------------------------------------------------------
public ref class BRepFeat_Form : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepFeat_Form_h
public:
	Include_BRepFeat_Form_h
#endif

protected:
	BRepFeat_Form(InitMode init)
		: Macad::Occt::BRepBuilderAPI_MakeShape( init )
	{}

public:
	BRepFeat_Form(::BRepFeat_Form* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepFeat_Form(::BRepFeat_Form& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepFeat_Form* NativeInstance
	{
		::BRepFeat_Form* get()
		{
			return static_cast<::BRepFeat_Form*>(_NativeInstance);
		}
	}

public:
	BRepFeat_Form(Macad::Occt::BRepFeat_Form^ parameter1);
	Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ F);
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
	bool IsDeleted(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopTools_ListOfShape^ FirstShape();
	Macad::Occt::TopTools_ListOfShape^ LastShape();
	Macad::Occt::TopTools_ListOfShape^ NewEdges();
	Macad::Occt::TopTools_ListOfShape^ TgtEdges();
	void BasisShapeValid();
	void GeneratedShapeValid();
	void ShapeFromValid();
	void ShapeUntilValid();
	void GluedFacesValid();
	void SketchFaceValid();
	void PerfSelectionValid();
	/* Method skipped due to unknown mapping: void Curves(TColGeom_SequenceOfCurve S, ) */
	Macad::Occt::Geom_Curve^ BarycCurve();
	Macad::Occt::BRepFeat_StatusError CurrentStatusError();
}; // class BRepFeat_Form

//---------------------------------------------------------------------
//  Class  BRepFeat_Gluer
//---------------------------------------------------------------------
public ref class BRepFeat_Gluer sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepFeat_Gluer_h
public:
	Include_BRepFeat_Gluer_h
#endif

public:
	BRepFeat_Gluer(::BRepFeat_Gluer* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepFeat_Gluer(::BRepFeat_Gluer& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepFeat_Gluer* NativeInstance
	{
		::BRepFeat_Gluer* get()
		{
			return static_cast<::BRepFeat_Gluer*>(_NativeInstance);
		}
	}

public:
	BRepFeat_Gluer();
	BRepFeat_Gluer(Macad::Occt::TopoDS_Shape^ Snew, Macad::Occt::TopoDS_Shape^ Sbase);
	BRepFeat_Gluer(Macad::Occt::BRepFeat_Gluer^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ Snew, Macad::Occt::TopoDS_Shape^ Sbase);
	void Bind(Macad::Occt::TopoDS_Face^ Fnew, Macad::Occt::TopoDS_Face^ Fbase);
	void Bind(Macad::Occt::TopoDS_Edge^ Enew, Macad::Occt::TopoDS_Edge^ Ebase);
	/* Method skipped due to unknown mapping: LocOpe_Operation OpeType() */
	Macad::Occt::TopoDS_Shape^ BasisShape();
	Macad::Occt::TopoDS_Shape^ GluedShape();
	void Build(Macad::Occt::Message_ProgressRange^ theRange);
	void Build();
	bool IsDeleted(Macad::Occt::TopoDS_Shape^ F);
	Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ F);
}; // class BRepFeat_Gluer

//---------------------------------------------------------------------
//  Class  BRepFeat_MakeCylindricalHole
//---------------------------------------------------------------------
public ref class BRepFeat_MakeCylindricalHole sealed : public Macad::Occt::BRepFeat_Builder
{

#ifdef Include_BRepFeat_MakeCylindricalHole_h
public:
	Include_BRepFeat_MakeCylindricalHole_h
#endif

public:
	BRepFeat_MakeCylindricalHole(::BRepFeat_MakeCylindricalHole* nativeInstance)
		: Macad::Occt::BRepFeat_Builder( nativeInstance )
	{}

	BRepFeat_MakeCylindricalHole(::BRepFeat_MakeCylindricalHole& nativeInstance)
		: Macad::Occt::BRepFeat_Builder( nativeInstance )
	{}

	property ::BRepFeat_MakeCylindricalHole* NativeInstance
	{
		::BRepFeat_MakeCylindricalHole* get()
		{
			return static_cast<::BRepFeat_MakeCylindricalHole*>(_NativeInstance);
		}
	}

public:
	BRepFeat_MakeCylindricalHole();
	BRepFeat_MakeCylindricalHole(Macad::Occt::BRepFeat_MakeCylindricalHole^ parameter1);
	void Init(Macad::Occt::Ax1 Axis);
	void Init(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Ax1 Axis);
	void Perform(double Radius);
	void Perform(double Radius, double PFrom, double PTo, bool WithControl);
	void Perform(double Radius, double PFrom, double PTo);
	void PerformThruNext(double Radius, bool WithControl);
	void PerformThruNext(double Radius);
	void PerformUntilEnd(double Radius, bool WithControl);
	void PerformUntilEnd(double Radius);
	void PerformBlind(double Radius, double Length, bool WithControl);
	void PerformBlind(double Radius, double Length);
	Macad::Occt::BRepFeat_Status Status();
	void Build();
}; // class BRepFeat_MakeCylindricalHole

//---------------------------------------------------------------------
//  Class  BRepFeat_MakeDPrism
//---------------------------------------------------------------------
public ref class BRepFeat_MakeDPrism sealed : public Macad::Occt::BRepFeat_Form
{

#ifdef Include_BRepFeat_MakeDPrism_h
public:
	Include_BRepFeat_MakeDPrism_h
#endif

public:
	BRepFeat_MakeDPrism(::BRepFeat_MakeDPrism* nativeInstance)
		: Macad::Occt::BRepFeat_Form( nativeInstance )
	{}

	BRepFeat_MakeDPrism(::BRepFeat_MakeDPrism& nativeInstance)
		: Macad::Occt::BRepFeat_Form( nativeInstance )
	{}

	property ::BRepFeat_MakeDPrism* NativeInstance
	{
		::BRepFeat_MakeDPrism* get()
		{
			return static_cast<::BRepFeat_MakeDPrism*>(_NativeInstance);
		}
	}

public:
	BRepFeat_MakeDPrism(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Face^ Pbase, Macad::Occt::TopoDS_Face^ Skface, double Angle, int Fuse, bool Modify);
	BRepFeat_MakeDPrism();
	BRepFeat_MakeDPrism(Macad::Occt::BRepFeat_MakeDPrism^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Face^ Pbase, Macad::Occt::TopoDS_Face^ Skface, double Angle, int Fuse, bool Modify);
	void Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ OnFace);
	void Perform(double Height);
	void Perform(Macad::Occt::TopoDS_Shape^ Until);
	void Perform(Macad::Occt::TopoDS_Shape^ From, Macad::Occt::TopoDS_Shape^ Until);
	void PerformUntilEnd();
	void PerformFromEnd(Macad::Occt::TopoDS_Shape^ FUntil);
	void PerformThruAll();
	void PerformUntilHeight(Macad::Occt::TopoDS_Shape^ Until, double Height);
	/* Method skipped due to unknown mapping: void Curves(TColGeom_SequenceOfCurve S, ) */
	Macad::Occt::Geom_Curve^ BarycCurve();
	void BossEdges(int sig);
	Macad::Occt::TopTools_ListOfShape^ TopEdges();
	Macad::Occt::TopTools_ListOfShape^ LatEdges();
}; // class BRepFeat_MakeDPrism

//---------------------------------------------------------------------
//  Class  BRepFeat_RibSlot
//---------------------------------------------------------------------
public ref class BRepFeat_RibSlot : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepFeat_RibSlot_h
public:
	Include_BRepFeat_RibSlot_h
#endif

protected:
	BRepFeat_RibSlot(InitMode init)
		: Macad::Occt::BRepBuilderAPI_MakeShape( init )
	{}

public:
	BRepFeat_RibSlot(::BRepFeat_RibSlot* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepFeat_RibSlot(::BRepFeat_RibSlot& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepFeat_RibSlot* NativeInstance
	{
		::BRepFeat_RibSlot* get()
		{
			return static_cast<::BRepFeat_RibSlot*>(_NativeInstance);
		}
	}

public:
	BRepFeat_RibSlot(Macad::Occt::BRepFeat_RibSlot^ parameter1);
	bool IsDeleted(Macad::Occt::TopoDS_Shape^ F);
	Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ F);
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopTools_ListOfShape^ FirstShape();
	Macad::Occt::TopTools_ListOfShape^ LastShape();
	Macad::Occt::TopTools_ListOfShape^ FacesForDraft();
	Macad::Occt::TopTools_ListOfShape^ NewEdges();
	Macad::Occt::TopTools_ListOfShape^ TgtEdges();
	static double IntPar(Macad::Occt::Geom_Curve^ C, Macad::Occt::Pnt P);
	static Macad::Occt::TopoDS_Face^ ChoiceOfFaces(Macad::Occt::TopTools_ListOfShape^ faces, Macad::Occt::Geom_Curve^ cc, double par, double bnd, Macad::Occt::Geom_Plane^ Pln);
	Macad::Occt::BRepFeat_StatusError CurrentStatusError();
}; // class BRepFeat_RibSlot

//---------------------------------------------------------------------
//  Class  BRepFeat_MakeLinearForm
//---------------------------------------------------------------------
public ref class BRepFeat_MakeLinearForm sealed : public Macad::Occt::BRepFeat_RibSlot
{

#ifdef Include_BRepFeat_MakeLinearForm_h
public:
	Include_BRepFeat_MakeLinearForm_h
#endif

public:
	BRepFeat_MakeLinearForm(::BRepFeat_MakeLinearForm* nativeInstance)
		: Macad::Occt::BRepFeat_RibSlot( nativeInstance )
	{}

	BRepFeat_MakeLinearForm(::BRepFeat_MakeLinearForm& nativeInstance)
		: Macad::Occt::BRepFeat_RibSlot( nativeInstance )
	{}

	property ::BRepFeat_MakeLinearForm* NativeInstance
	{
		::BRepFeat_MakeLinearForm* get()
		{
			return static_cast<::BRepFeat_MakeLinearForm*>(_NativeInstance);
		}
	}

public:
	BRepFeat_MakeLinearForm();
	BRepFeat_MakeLinearForm(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Wire^ W, Macad::Occt::Geom_Plane^ P, Macad::Occt::Vec Direction, Macad::Occt::Vec Direction1, int Fuse, bool Modify);
	BRepFeat_MakeLinearForm(Macad::Occt::BRepFeat_MakeLinearForm^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Wire^ W, Macad::Occt::Geom_Plane^ P, Macad::Occt::Vec Direction, Macad::Occt::Vec Direction1, int Fuse, bool Modify);
	void Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ OnFace);
	void Perform();
	void TransformShapeFU(int flag);
	bool Propagate(Macad::Occt::TopTools_ListOfShape^ L, Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt FPoint, Macad::Occt::Pnt LPoint, bool% falseside);
}; // class BRepFeat_MakeLinearForm

//---------------------------------------------------------------------
//  Class  BRepFeat_MakePipe
//---------------------------------------------------------------------
public ref class BRepFeat_MakePipe sealed : public Macad::Occt::BRepFeat_Form
{

#ifdef Include_BRepFeat_MakePipe_h
public:
	Include_BRepFeat_MakePipe_h
#endif

public:
	BRepFeat_MakePipe(::BRepFeat_MakePipe* nativeInstance)
		: Macad::Occt::BRepFeat_Form( nativeInstance )
	{}

	BRepFeat_MakePipe(::BRepFeat_MakePipe& nativeInstance)
		: Macad::Occt::BRepFeat_Form( nativeInstance )
	{}

	property ::BRepFeat_MakePipe* NativeInstance
	{
		::BRepFeat_MakePipe* get()
		{
			return static_cast<::BRepFeat_MakePipe*>(_NativeInstance);
		}
	}

public:
	BRepFeat_MakePipe();
	BRepFeat_MakePipe(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Shape^ Pbase, Macad::Occt::TopoDS_Face^ Skface, Macad::Occt::TopoDS_Wire^ Spine, int Fuse, bool Modify);
	BRepFeat_MakePipe(Macad::Occt::BRepFeat_MakePipe^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Shape^ Pbase, Macad::Occt::TopoDS_Face^ Skface, Macad::Occt::TopoDS_Wire^ Spine, int Fuse, bool Modify);
	void Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ OnFace);
	void Perform();
	void Perform(Macad::Occt::TopoDS_Shape^ Until);
	void Perform(Macad::Occt::TopoDS_Shape^ From, Macad::Occt::TopoDS_Shape^ Until);
	/* Method skipped due to unknown mapping: void Curves(TColGeom_SequenceOfCurve S, ) */
	Macad::Occt::Geom_Curve^ BarycCurve();
}; // class BRepFeat_MakePipe

//---------------------------------------------------------------------
//  Class  BRepFeat_MakePrism
//---------------------------------------------------------------------
public ref class BRepFeat_MakePrism sealed : public Macad::Occt::BRepFeat_Form
{

#ifdef Include_BRepFeat_MakePrism_h
public:
	Include_BRepFeat_MakePrism_h
#endif

public:
	BRepFeat_MakePrism(::BRepFeat_MakePrism* nativeInstance)
		: Macad::Occt::BRepFeat_Form( nativeInstance )
	{}

	BRepFeat_MakePrism(::BRepFeat_MakePrism& nativeInstance)
		: Macad::Occt::BRepFeat_Form( nativeInstance )
	{}

	property ::BRepFeat_MakePrism* NativeInstance
	{
		::BRepFeat_MakePrism* get()
		{
			return static_cast<::BRepFeat_MakePrism*>(_NativeInstance);
		}
	}

public:
	BRepFeat_MakePrism();
	BRepFeat_MakePrism(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Shape^ Pbase, Macad::Occt::TopoDS_Face^ Skface, Macad::Occt::Dir Direction, int Fuse, bool Modify);
	BRepFeat_MakePrism(Macad::Occt::BRepFeat_MakePrism^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Shape^ Pbase, Macad::Occt::TopoDS_Face^ Skface, Macad::Occt::Dir Direction, int Fuse, bool Modify);
	void Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ OnFace);
	void Perform(double Length);
	void Perform(Macad::Occt::TopoDS_Shape^ Until);
	void Perform(Macad::Occt::TopoDS_Shape^ From, Macad::Occt::TopoDS_Shape^ Until);
	void PerformUntilEnd();
	void PerformFromEnd(Macad::Occt::TopoDS_Shape^ FUntil);
	void PerformThruAll();
	void PerformUntilHeight(Macad::Occt::TopoDS_Shape^ Until, double Length);
	/* Method skipped due to unknown mapping: void Curves(TColGeom_SequenceOfCurve S, ) */
	Macad::Occt::Geom_Curve^ BarycCurve();
}; // class BRepFeat_MakePrism

//---------------------------------------------------------------------
//  Class  BRepFeat_MakeRevol
//---------------------------------------------------------------------
public ref class BRepFeat_MakeRevol sealed : public Macad::Occt::BRepFeat_Form
{

#ifdef Include_BRepFeat_MakeRevol_h
public:
	Include_BRepFeat_MakeRevol_h
#endif

public:
	BRepFeat_MakeRevol(::BRepFeat_MakeRevol* nativeInstance)
		: Macad::Occt::BRepFeat_Form( nativeInstance )
	{}

	BRepFeat_MakeRevol(::BRepFeat_MakeRevol& nativeInstance)
		: Macad::Occt::BRepFeat_Form( nativeInstance )
	{}

	property ::BRepFeat_MakeRevol* NativeInstance
	{
		::BRepFeat_MakeRevol* get()
		{
			return static_cast<::BRepFeat_MakeRevol*>(_NativeInstance);
		}
	}

public:
	BRepFeat_MakeRevol();
	BRepFeat_MakeRevol(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Shape^ Pbase, Macad::Occt::TopoDS_Face^ Skface, Macad::Occt::Ax1 Axis, int Fuse, bool Modify);
	BRepFeat_MakeRevol(Macad::Occt::BRepFeat_MakeRevol^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Shape^ Pbase, Macad::Occt::TopoDS_Face^ Skface, Macad::Occt::Ax1 Axis, int Fuse, bool Modify);
	void Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ OnFace);
	void Perform(double Angle);
	void Perform(Macad::Occt::TopoDS_Shape^ Until);
	void Perform(Macad::Occt::TopoDS_Shape^ From, Macad::Occt::TopoDS_Shape^ Until);
	void PerformThruAll();
	void PerformUntilAngle(Macad::Occt::TopoDS_Shape^ Until, double Angle);
	/* Method skipped due to unknown mapping: void Curves(TColGeom_SequenceOfCurve S, ) */
	Macad::Occt::Geom_Curve^ BarycCurve();
}; // class BRepFeat_MakeRevol

//---------------------------------------------------------------------
//  Class  BRepFeat_MakeRevolutionForm
//---------------------------------------------------------------------
public ref class BRepFeat_MakeRevolutionForm sealed : public Macad::Occt::BRepFeat_RibSlot
{

#ifdef Include_BRepFeat_MakeRevolutionForm_h
public:
	Include_BRepFeat_MakeRevolutionForm_h
#endif

public:
	BRepFeat_MakeRevolutionForm(::BRepFeat_MakeRevolutionForm* nativeInstance)
		: Macad::Occt::BRepFeat_RibSlot( nativeInstance )
	{}

	BRepFeat_MakeRevolutionForm(::BRepFeat_MakeRevolutionForm& nativeInstance)
		: Macad::Occt::BRepFeat_RibSlot( nativeInstance )
	{}

	property ::BRepFeat_MakeRevolutionForm* NativeInstance
	{
		::BRepFeat_MakeRevolutionForm* get()
		{
			return static_cast<::BRepFeat_MakeRevolutionForm*>(_NativeInstance);
		}
	}

public:
	BRepFeat_MakeRevolutionForm();
	BRepFeat_MakeRevolutionForm(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Wire^ W, Macad::Occt::Geom_Plane^ Plane, Macad::Occt::Ax1 Axis, double Height1, double Height2, int Fuse, bool% Sliding);
	BRepFeat_MakeRevolutionForm(Macad::Occt::BRepFeat_MakeRevolutionForm^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Wire^ W, Macad::Occt::Geom_Plane^ Plane, Macad::Occt::Ax1 Axis, double Height1, double Height2, int Fuse, bool% Sliding);
	void Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ OnFace);
	void Perform();
	bool Propagate(Macad::Occt::TopTools_ListOfShape^ L, Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt FPoint, Macad::Occt::Pnt LPoint, bool% falseside);
}; // class BRepFeat_MakeRevolutionForm

//---------------------------------------------------------------------
//  Class  BRepFeat_SplitShape
//---------------------------------------------------------------------
public ref class BRepFeat_SplitShape sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepFeat_SplitShape_h
public:
	Include_BRepFeat_SplitShape_h
#endif

public:
	BRepFeat_SplitShape(::BRepFeat_SplitShape* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepFeat_SplitShape(::BRepFeat_SplitShape& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepFeat_SplitShape* NativeInstance
	{
		::BRepFeat_SplitShape* get()
		{
			return static_cast<::BRepFeat_SplitShape*>(_NativeInstance);
		}
	}

public:
	BRepFeat_SplitShape();
	BRepFeat_SplitShape(Macad::Occt::TopoDS_Shape^ S);
	BRepFeat_SplitShape(Macad::Occt::BRepFeat_SplitShape^ parameter1);
	bool Add(Macad::Occt::TopTools_SequenceOfShape^ theEdges);
	void Init(Macad::Occt::TopoDS_Shape^ S);
	void SetCheckInterior(bool ToCheckInterior);
	void Add(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F);
	void Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
	void Add(Macad::Occt::TopoDS_Compound^ Comp, Macad::Occt::TopoDS_Face^ F);
	void Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Edge^ EOn);
	Macad::Occt::TopTools_ListOfShape^ DirectLeft();
	Macad::Occt::TopTools_ListOfShape^ Left();
	Macad::Occt::TopTools_ListOfShape^ Right();
	void Build(Macad::Occt::Message_ProgressRange^ theRange);
	void Build();
	bool IsDeleted(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ F);
}; // class BRepFeat_SplitShape

}; // namespace Occt
}; // namespace Macad
