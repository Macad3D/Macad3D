// Generated wrapper code for package BRepAlgoAPI

#pragma once

#include "BRepBuilderAPI.h"
#include "BRepAlgoAPI.h"
#include "BOPAlgo.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Algo
//---------------------------------------------------------------------
public ref class BRepAlgoAPI_Algo : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepAlgoAPI_Algo_h
public:
	Include_BRepAlgoAPI_Algo_h
#endif

protected:
	BRepAlgoAPI_Algo(InitMode init)
		: Macad::Occt::BRepBuilderAPI_MakeShape( init )
	{}

public:
	BRepAlgoAPI_Algo(::BRepAlgoAPI_Algo* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepAlgoAPI_Algo(::BRepAlgoAPI_Algo& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepAlgoAPI_Algo* NativeInstance
	{
		::BRepAlgoAPI_Algo* get()
		{
			return static_cast<::BRepAlgoAPI_Algo*>(_NativeInstance);
		}
	}

public:
	BRepAlgoAPI_Algo(Macad::Occt::BRepAlgoAPI_Algo^ parameter1);
	Macad::Occt::TopoDS_Shape^ Shape();
}; // class BRepAlgoAPI_Algo

//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_BuilderAlgo
//---------------------------------------------------------------------
public ref class BRepAlgoAPI_BuilderAlgo : public Macad::Occt::BRepAlgoAPI_Algo
{

#ifdef Include_BRepAlgoAPI_BuilderAlgo_h
public:
	Include_BRepAlgoAPI_BuilderAlgo_h
#endif

protected:
	BRepAlgoAPI_BuilderAlgo(InitMode init)
		: Macad::Occt::BRepAlgoAPI_Algo( init )
	{}

public:
	BRepAlgoAPI_BuilderAlgo(::BRepAlgoAPI_BuilderAlgo* nativeInstance)
		: Macad::Occt::BRepAlgoAPI_Algo( nativeInstance )
	{}

	BRepAlgoAPI_BuilderAlgo(::BRepAlgoAPI_BuilderAlgo& nativeInstance)
		: Macad::Occt::BRepAlgoAPI_Algo( nativeInstance )
	{}

	property ::BRepAlgoAPI_BuilderAlgo* NativeInstance
	{
		::BRepAlgoAPI_BuilderAlgo* get()
		{
			return static_cast<::BRepAlgoAPI_BuilderAlgo*>(_NativeInstance);
		}
	}

public:
	BRepAlgoAPI_BuilderAlgo();
	/* Method skipped due to unknown mapping: void BRepAlgoAPI_BuilderAlgo(BOPAlgo_PaveFiller thePF, ) */
	BRepAlgoAPI_BuilderAlgo(Macad::Occt::BRepAlgoAPI_BuilderAlgo^ parameter1);
	void SetArguments(Macad::Occt::TopTools_ListOfShape^ theLS);
	Macad::Occt::TopTools_ListOfShape^ Arguments();
	void SetNonDestructive(bool theFlag);
	bool NonDestructive();
	void SetGlue(Macad::Occt::BOPAlgo_GlueEnum theGlue);
	Macad::Occt::BOPAlgo_GlueEnum Glue();
	void SetCheckInverted(bool theCheck);
	bool CheckInverted();
	void Build(Macad::Occt::Message_ProgressRange^ theRange);
	void Build();
	void SimplifyResult(bool theUnifyEdges, bool theUnifyFaces, double theAngularTol);
	void SimplifyResult(bool theUnifyEdges, bool theUnifyFaces);
	void SimplifyResult(bool theUnifyEdges);
	void SimplifyResult();
	Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ theS);
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ theS);
	bool IsDeleted(Macad::Occt::TopoDS_Shape^ aS);
	bool HasModified();
	bool HasGenerated();
	bool HasDeleted();
	void SetToFillHistory(bool theHistFlag);
	bool HasHistory();
	Macad::Occt::TopTools_ListOfShape^ SectionEdges();
	/* Method skipped due to unknown mapping: BOPAlgo_PaveFiller DSFiller() */
	Macad::Occt::BRepTools_History^ History();
}; // class BRepAlgoAPI_BuilderAlgo

//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_BooleanOperation
//---------------------------------------------------------------------
public ref class BRepAlgoAPI_BooleanOperation : public Macad::Occt::BRepAlgoAPI_BuilderAlgo
{

#ifdef Include_BRepAlgoAPI_BooleanOperation_h
public:
	Include_BRepAlgoAPI_BooleanOperation_h
#endif

protected:
	BRepAlgoAPI_BooleanOperation(InitMode init)
		: Macad::Occt::BRepAlgoAPI_BuilderAlgo( init )
	{}

public:
	BRepAlgoAPI_BooleanOperation(::BRepAlgoAPI_BooleanOperation* nativeInstance)
		: Macad::Occt::BRepAlgoAPI_BuilderAlgo( nativeInstance )
	{}

	BRepAlgoAPI_BooleanOperation(::BRepAlgoAPI_BooleanOperation& nativeInstance)
		: Macad::Occt::BRepAlgoAPI_BuilderAlgo( nativeInstance )
	{}

	property ::BRepAlgoAPI_BooleanOperation* NativeInstance
	{
		::BRepAlgoAPI_BooleanOperation* get()
		{
			return static_cast<::BRepAlgoAPI_BooleanOperation*>(_NativeInstance);
		}
	}

public:
	BRepAlgoAPI_BooleanOperation();
	/* Method skipped due to unknown mapping: void BRepAlgoAPI_BooleanOperation(BOPAlgo_PaveFiller thePF, ) */
	BRepAlgoAPI_BooleanOperation(Macad::Occt::BRepAlgoAPI_BooleanOperation^ parameter1);
	Macad::Occt::TopoDS_Shape^ Shape1();
	Macad::Occt::TopoDS_Shape^ Shape2();
	void SetTools(Macad::Occt::TopTools_ListOfShape^ theLS);
	Macad::Occt::TopTools_ListOfShape^ Tools();
	void SetOperation(Macad::Occt::BOPAlgo_Operation theBOP);
	Macad::Occt::BOPAlgo_Operation Operation();
	void Build(Macad::Occt::Message_ProgressRange^ theRange);
	void Build();
}; // class BRepAlgoAPI_BooleanOperation

//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Check
//---------------------------------------------------------------------
public ref class BRepAlgoAPI_Check sealed : public Macad::Occt::BOPAlgo_Options
{

#ifdef Include_BRepAlgoAPI_Check_h
public:
	Include_BRepAlgoAPI_Check_h
#endif

public:
	BRepAlgoAPI_Check(::BRepAlgoAPI_Check* nativeInstance)
		: Macad::Occt::BOPAlgo_Options( nativeInstance )
	{}

	BRepAlgoAPI_Check(::BRepAlgoAPI_Check& nativeInstance)
		: Macad::Occt::BOPAlgo_Options( nativeInstance )
	{}

	property ::BRepAlgoAPI_Check* NativeInstance
	{
		::BRepAlgoAPI_Check* get()
		{
			return static_cast<::BRepAlgoAPI_Check*>(_NativeInstance);
		}
	}

public:
	BRepAlgoAPI_Check();
	BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS, bool bTestSE, bool bTestSI, Macad::Occt::Message_ProgressRange^ theRange);
	BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS, bool bTestSE, bool bTestSI);
	BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS, bool bTestSE);
	BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS);
	BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp, bool bTestSE, bool bTestSI, Macad::Occt::Message_ProgressRange^ theRange);
	BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp, bool bTestSE, bool bTestSI);
	BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp, bool bTestSE);
	BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp);
	BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2);
	BRepAlgoAPI_Check(Macad::Occt::BRepAlgoAPI_Check^ parameter1);
	void SetData(Macad::Occt::TopoDS_Shape^ theS, bool bTestSE, bool bTestSI);
	void SetData(Macad::Occt::TopoDS_Shape^ theS, bool bTestSE);
	void SetData(Macad::Occt::TopoDS_Shape^ theS);
	void SetData(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp, bool bTestSE, bool bTestSI);
	void SetData(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp, bool bTestSE);
	void SetData(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp);
	void SetData(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2);
	void Perform(Macad::Occt::Message_ProgressRange^ theRange);
	void Perform();
	bool IsValid();
	/* Method skipped due to unknown mapping: BOPAlgo_ListOfCheckResult Result() */
}; // class BRepAlgoAPI_Check

//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Common
//---------------------------------------------------------------------
public ref class BRepAlgoAPI_Common sealed : public Macad::Occt::BRepAlgoAPI_BooleanOperation
{

#ifdef Include_BRepAlgoAPI_Common_h
public:
	Include_BRepAlgoAPI_Common_h
#endif

public:
	BRepAlgoAPI_Common(::BRepAlgoAPI_Common* nativeInstance)
		: Macad::Occt::BRepAlgoAPI_BooleanOperation( nativeInstance )
	{}

	BRepAlgoAPI_Common(::BRepAlgoAPI_Common& nativeInstance)
		: Macad::Occt::BRepAlgoAPI_BooleanOperation( nativeInstance )
	{}

	property ::BRepAlgoAPI_Common* NativeInstance
	{
		::BRepAlgoAPI_Common* get()
		{
			return static_cast<::BRepAlgoAPI_Common*>(_NativeInstance);
		}
	}

public:
	BRepAlgoAPI_Common();
	/* Method skipped due to unknown mapping: void BRepAlgoAPI_Common(BOPAlgo_PaveFiller PF, ) */
	BRepAlgoAPI_Common(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, Macad::Occt::Message_ProgressRange^ theRange);
	BRepAlgoAPI_Common(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2);
	/* Method skipped due to unknown mapping: void BRepAlgoAPI_Common(TopoDS_Shape S1, TopoDS_Shape S2, BOPAlgo_PaveFiller PF, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void BRepAlgoAPI_Common(TopoDS_Shape S1, TopoDS_Shape S2, BOPAlgo_PaveFiller PF, Message_ProgressRange theRange, ) */
	BRepAlgoAPI_Common(Macad::Occt::BRepAlgoAPI_Common^ parameter1);
}; // class BRepAlgoAPI_Common

//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Cut
//---------------------------------------------------------------------
public ref class BRepAlgoAPI_Cut sealed : public Macad::Occt::BRepAlgoAPI_BooleanOperation
{

#ifdef Include_BRepAlgoAPI_Cut_h
public:
	Include_BRepAlgoAPI_Cut_h
#endif

public:
	BRepAlgoAPI_Cut(::BRepAlgoAPI_Cut* nativeInstance)
		: Macad::Occt::BRepAlgoAPI_BooleanOperation( nativeInstance )
	{}

	BRepAlgoAPI_Cut(::BRepAlgoAPI_Cut& nativeInstance)
		: Macad::Occt::BRepAlgoAPI_BooleanOperation( nativeInstance )
	{}

	property ::BRepAlgoAPI_Cut* NativeInstance
	{
		::BRepAlgoAPI_Cut* get()
		{
			return static_cast<::BRepAlgoAPI_Cut*>(_NativeInstance);
		}
	}

public:
	BRepAlgoAPI_Cut();
	/* Method skipped due to unknown mapping: void BRepAlgoAPI_Cut(BOPAlgo_PaveFiller PF, ) */
	BRepAlgoAPI_Cut(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, Macad::Occt::Message_ProgressRange^ theRange);
	BRepAlgoAPI_Cut(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2);
	/* Method skipped due to unknown mapping: void BRepAlgoAPI_Cut(TopoDS_Shape S1, TopoDS_Shape S2, BOPAlgo_PaveFiller aDSF, Standard_Boolean bFWD, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void BRepAlgoAPI_Cut(TopoDS_Shape S1, TopoDS_Shape S2, BOPAlgo_PaveFiller aDSF, Standard_Boolean bFWD, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void BRepAlgoAPI_Cut(TopoDS_Shape S1, TopoDS_Shape S2, BOPAlgo_PaveFiller aDSF, Standard_Boolean bFWD, Message_ProgressRange theRange, ) */
	BRepAlgoAPI_Cut(Macad::Occt::BRepAlgoAPI_Cut^ parameter1);
}; // class BRepAlgoAPI_Cut

//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Defeaturing
//---------------------------------------------------------------------
public ref class BRepAlgoAPI_Defeaturing sealed : public Macad::Occt::BRepAlgoAPI_Algo
{

#ifdef Include_BRepAlgoAPI_Defeaturing_h
public:
	Include_BRepAlgoAPI_Defeaturing_h
#endif

public:
	BRepAlgoAPI_Defeaturing(::BRepAlgoAPI_Defeaturing* nativeInstance)
		: Macad::Occt::BRepAlgoAPI_Algo( nativeInstance )
	{}

	BRepAlgoAPI_Defeaturing(::BRepAlgoAPI_Defeaturing& nativeInstance)
		: Macad::Occt::BRepAlgoAPI_Algo( nativeInstance )
	{}

	property ::BRepAlgoAPI_Defeaturing* NativeInstance
	{
		::BRepAlgoAPI_Defeaturing* get()
		{
			return static_cast<::BRepAlgoAPI_Defeaturing*>(_NativeInstance);
		}
	}

public:
	BRepAlgoAPI_Defeaturing();
	BRepAlgoAPI_Defeaturing(Macad::Occt::BRepAlgoAPI_Defeaturing^ parameter1);
	void SetShape(Macad::Occt::TopoDS_Shape^ theShape);
	Macad::Occt::TopoDS_Shape^ InputShape();
	void AddFaceToRemove(Macad::Occt::TopoDS_Shape^ theFace);
	void AddFacesToRemove(Macad::Occt::TopTools_ListOfShape^ theFaces);
	Macad::Occt::TopTools_ListOfShape^ FacesToRemove();
	void Build(Macad::Occt::Message_ProgressRange^ theRange);
	void Build();
	void SetToFillHistory(bool theFlag);
	bool HasHistory();
	Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ theS);
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ theS);
	bool IsDeleted(Macad::Occt::TopoDS_Shape^ theS);
	bool HasModified();
	bool HasGenerated();
	bool HasDeleted();
	Macad::Occt::BRepTools_History^ History();
}; // class BRepAlgoAPI_Defeaturing

//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Fuse
//---------------------------------------------------------------------
public ref class BRepAlgoAPI_Fuse sealed : public Macad::Occt::BRepAlgoAPI_BooleanOperation
{

#ifdef Include_BRepAlgoAPI_Fuse_h
public:
	Include_BRepAlgoAPI_Fuse_h
#endif

public:
	BRepAlgoAPI_Fuse(::BRepAlgoAPI_Fuse* nativeInstance)
		: Macad::Occt::BRepAlgoAPI_BooleanOperation( nativeInstance )
	{}

	BRepAlgoAPI_Fuse(::BRepAlgoAPI_Fuse& nativeInstance)
		: Macad::Occt::BRepAlgoAPI_BooleanOperation( nativeInstance )
	{}

	property ::BRepAlgoAPI_Fuse* NativeInstance
	{
		::BRepAlgoAPI_Fuse* get()
		{
			return static_cast<::BRepAlgoAPI_Fuse*>(_NativeInstance);
		}
	}

public:
	BRepAlgoAPI_Fuse();
	/* Method skipped due to unknown mapping: void BRepAlgoAPI_Fuse(BOPAlgo_PaveFiller PF, ) */
	BRepAlgoAPI_Fuse(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, Macad::Occt::Message_ProgressRange^ theRange);
	BRepAlgoAPI_Fuse(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2);
	/* Method skipped due to unknown mapping: void BRepAlgoAPI_Fuse(TopoDS_Shape S1, TopoDS_Shape S2, BOPAlgo_PaveFiller aDSF, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void BRepAlgoAPI_Fuse(TopoDS_Shape S1, TopoDS_Shape S2, BOPAlgo_PaveFiller aDSF, Message_ProgressRange theRange, ) */
	BRepAlgoAPI_Fuse(Macad::Occt::BRepAlgoAPI_Fuse^ parameter1);
}; // class BRepAlgoAPI_Fuse

//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Section
//---------------------------------------------------------------------
public ref class BRepAlgoAPI_Section sealed : public Macad::Occt::BRepAlgoAPI_BooleanOperation
{

#ifdef Include_BRepAlgoAPI_Section_h
public:
	Include_BRepAlgoAPI_Section_h
#endif

public:
	BRepAlgoAPI_Section(::BRepAlgoAPI_Section* nativeInstance)
		: Macad::Occt::BRepAlgoAPI_BooleanOperation( nativeInstance )
	{}

	BRepAlgoAPI_Section(::BRepAlgoAPI_Section& nativeInstance)
		: Macad::Occt::BRepAlgoAPI_BooleanOperation( nativeInstance )
	{}

	property ::BRepAlgoAPI_Section* NativeInstance
	{
		::BRepAlgoAPI_Section* get()
		{
			return static_cast<::BRepAlgoAPI_Section*>(_NativeInstance);
		}
	}

public:
	BRepAlgoAPI_Section();
	/* Method skipped due to unknown mapping: void BRepAlgoAPI_Section(BOPAlgo_PaveFiller PF, ) */
	BRepAlgoAPI_Section(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, bool PerformNow);
	BRepAlgoAPI_Section(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2);
	/* Method skipped due to unknown mapping: void BRepAlgoAPI_Section(TopoDS_Shape S1, TopoDS_Shape S2, BOPAlgo_PaveFiller aDSF, Standard_Boolean PerformNow, ) */
	/* Method skipped due to unknown mapping: void BRepAlgoAPI_Section(TopoDS_Shape S1, TopoDS_Shape S2, BOPAlgo_PaveFiller aDSF, Standard_Boolean PerformNow, ) */
	BRepAlgoAPI_Section(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::Pln Pl, bool PerformNow);
	BRepAlgoAPI_Section(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::Pln Pl);
	BRepAlgoAPI_Section(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::Geom_Surface^ Sf, bool PerformNow);
	BRepAlgoAPI_Section(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::Geom_Surface^ Sf);
	BRepAlgoAPI_Section(Macad::Occt::Geom_Surface^ Sf, Macad::Occt::TopoDS_Shape^ S2, bool PerformNow);
	BRepAlgoAPI_Section(Macad::Occt::Geom_Surface^ Sf, Macad::Occt::TopoDS_Shape^ S2);
	BRepAlgoAPI_Section(Macad::Occt::Geom_Surface^ Sf1, Macad::Occt::Geom_Surface^ Sf2, bool PerformNow);
	BRepAlgoAPI_Section(Macad::Occt::Geom_Surface^ Sf1, Macad::Occt::Geom_Surface^ Sf2);
	BRepAlgoAPI_Section(Macad::Occt::BRepAlgoAPI_Section^ parameter1);
	void Init1(Macad::Occt::TopoDS_Shape^ S1);
	void Init1(Macad::Occt::Pln Pl);
	void Init1(Macad::Occt::Geom_Surface^ Sf);
	void Init2(Macad::Occt::TopoDS_Shape^ S2);
	void Init2(Macad::Occt::Pln Pl);
	void Init2(Macad::Occt::Geom_Surface^ Sf);
	void Approximation(bool B);
	void ComputePCurveOn1(bool B);
	void ComputePCurveOn2(bool B);
	void Build(Macad::Occt::Message_ProgressRange^ theRange);
	void Build();
	bool HasAncestorFaceOn1(Macad::Occt::TopoDS_Shape^ E, Macad::Occt::TopoDS_Shape^ F);
	bool HasAncestorFaceOn2(Macad::Occt::TopoDS_Shape^ E, Macad::Occt::TopoDS_Shape^ F);
}; // class BRepAlgoAPI_Section

//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Splitter
//---------------------------------------------------------------------
public ref class BRepAlgoAPI_Splitter sealed : public Macad::Occt::BRepAlgoAPI_BuilderAlgo
{

#ifdef Include_BRepAlgoAPI_Splitter_h
public:
	Include_BRepAlgoAPI_Splitter_h
#endif

public:
	BRepAlgoAPI_Splitter(::BRepAlgoAPI_Splitter* nativeInstance)
		: Macad::Occt::BRepAlgoAPI_BuilderAlgo( nativeInstance )
	{}

	BRepAlgoAPI_Splitter(::BRepAlgoAPI_Splitter& nativeInstance)
		: Macad::Occt::BRepAlgoAPI_BuilderAlgo( nativeInstance )
	{}

	property ::BRepAlgoAPI_Splitter* NativeInstance
	{
		::BRepAlgoAPI_Splitter* get()
		{
			return static_cast<::BRepAlgoAPI_Splitter*>(_NativeInstance);
		}
	}

public:
	BRepAlgoAPI_Splitter();
	/* Method skipped due to unknown mapping: void BRepAlgoAPI_Splitter(BOPAlgo_PaveFiller thePF, ) */
	BRepAlgoAPI_Splitter(Macad::Occt::BRepAlgoAPI_Splitter^ parameter1);
	void SetTools(Macad::Occt::TopTools_ListOfShape^ theLS);
	Macad::Occt::TopTools_ListOfShape^ Tools();
	void Build(Macad::Occt::Message_ProgressRange^ theRange);
	void Build();
}; // class BRepAlgoAPI_Splitter

}; // namespace Occt
}; // namespace Macad
