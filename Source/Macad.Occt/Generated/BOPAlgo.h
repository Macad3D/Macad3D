// Generated wrapper code for package BOPAlgo

#pragma once

#include "BOPAlgo.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  BOPAlgo_Operation
//---------------------------------------------------------------------
public enum class BOPAlgo_Operation
{
	BOPAlgo_COMMON = 0,
	BOPAlgo_FUSE = 1,
	BOPAlgo_CUT = 2,
	BOPAlgo_CUT21 = 3,
	BOPAlgo_SECTION = 4,
	BOPAlgo_UNKNOWN = 5
}; // enum  class BOPAlgo_Operation

//---------------------------------------------------------------------
//  Enum  BOPAlgo_GlueEnum
//---------------------------------------------------------------------
public enum class BOPAlgo_GlueEnum
{
	BOPAlgo_GlueOff = 0,
	BOPAlgo_GlueShift = 1,
	BOPAlgo_GlueFull = 2
}; // enum  class BOPAlgo_GlueEnum

//---------------------------------------------------------------------
//  Class  BOPAlgo_Options
//---------------------------------------------------------------------
public ref class BOPAlgo_Options : public BaseClass<::BOPAlgo_Options>
{

#ifdef Include_BOPAlgo_Options_h
public:
	Include_BOPAlgo_Options_h
#endif

protected:
	BOPAlgo_Options(InitMode init)
		: BaseClass<::BOPAlgo_Options>( init )
	{}

public:
	BOPAlgo_Options(::BOPAlgo_Options* nativeInstance)
		: BaseClass<::BOPAlgo_Options>( nativeInstance, true )
	{}

	BOPAlgo_Options(::BOPAlgo_Options& nativeInstance)
		: BaseClass<::BOPAlgo_Options>( &nativeInstance, false )
	{}

	property ::BOPAlgo_Options* NativeInstance
	{
		::BOPAlgo_Options* get()
		{
			return static_cast<::BOPAlgo_Options*>(_NativeInstance);
		}
	}

public:
	BOPAlgo_Options();
	BOPAlgo_Options(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	BOPAlgo_Options(Macad::Occt::BOPAlgo_Options^ parameter1);
	Macad::Occt::NCollection_BaseAllocator^ Allocator();
	void Clear();
	void AddError(Macad::Occt::Message_Alert^ theAlert);
	void AddWarning(Macad::Occt::Message_Alert^ theAlert);
	bool HasErrors();
	/* Method skipped due to unknown mapping: Standard_Boolean HasError(Standard_Type theType, ) */
	bool HasWarnings();
	/* Method skipped due to unknown mapping: Standard_Boolean HasWarning(Standard_Type theType, ) */
	Macad::Occt::Message_Report^ GetReport();
	/* Method skipped due to unknown mapping: void DumpErrors(ostream theOS, ) */
	/* Method skipped due to unknown mapping: void DumpWarnings(ostream theOS, ) */
	void ClearWarnings();
	static bool GetParallelMode();
	static void SetParallelMode(bool theNewMode);
	void SetRunParallel(bool theFlag);
	bool RunParallel();
	void SetFuzzyValue(double theFuzz);
	double FuzzyValue();
	/* Method skipped due to unknown mapping: void SetProgressIndicator(Message_ProgressIndicator theObj, ) */
	void SetUseOBB(bool theUseOBB);
	bool UseOBB();
}; // class BOPAlgo_Options

//---------------------------------------------------------------------
//  Class  BOPAlgo_Algo
//---------------------------------------------------------------------
public ref class BOPAlgo_Algo : public Macad::Occt::BOPAlgo_Options
{

#ifdef Include_BOPAlgo_Algo_h
public:
	Include_BOPAlgo_Algo_h
#endif

protected:
	BOPAlgo_Algo(InitMode init)
		: Macad::Occt::BOPAlgo_Options( init )
	{}

public:
	BOPAlgo_Algo(::BOPAlgo_Algo* nativeInstance)
		: Macad::Occt::BOPAlgo_Options( nativeInstance )
	{}

	BOPAlgo_Algo(::BOPAlgo_Algo& nativeInstance)
		: Macad::Occt::BOPAlgo_Options( nativeInstance )
	{}

	property ::BOPAlgo_Algo* NativeInstance
	{
		::BOPAlgo_Algo* get()
		{
			return static_cast<::BOPAlgo_Algo*>(_NativeInstance);
		}
	}

public:
	BOPAlgo_Algo(Macad::Occt::BOPAlgo_Algo^ parameter1);
	void Perform();
}; // class BOPAlgo_Algo

//---------------------------------------------------------------------
//  Class  BOPAlgo_BuilderShape
//---------------------------------------------------------------------
public ref class BOPAlgo_BuilderShape : public Macad::Occt::BOPAlgo_Algo
{

#ifdef Include_BOPAlgo_BuilderShape_h
public:
	Include_BOPAlgo_BuilderShape_h
#endif

protected:
	BOPAlgo_BuilderShape(InitMode init)
		: Macad::Occt::BOPAlgo_Algo( init )
	{}

public:
	BOPAlgo_BuilderShape(::BOPAlgo_BuilderShape* nativeInstance)
		: Macad::Occt::BOPAlgo_Algo( nativeInstance )
	{}

	BOPAlgo_BuilderShape(::BOPAlgo_BuilderShape& nativeInstance)
		: Macad::Occt::BOPAlgo_Algo( nativeInstance )
	{}

	property ::BOPAlgo_BuilderShape* NativeInstance
	{
		::BOPAlgo_BuilderShape* get()
		{
			return static_cast<::BOPAlgo_BuilderShape*>(_NativeInstance);
		}
	}

public:
	BOPAlgo_BuilderShape(Macad::Occt::BOPAlgo_BuilderShape^ parameter1);
	Macad::Occt::TopoDS_Shape^ Shape();
	Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ theS);
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ theS);
	bool IsDeleted(Macad::Occt::TopoDS_Shape^ theS);
	bool HasModified();
	bool HasGenerated();
	bool HasDeleted();
	Macad::Occt::BRepTools_History^ History();
	void SetToFillHistory(bool theHistFlag);
	bool HasHistory();
}; // class BOPAlgo_BuilderShape

//---------------------------------------------------------------------
//  Class  BOPAlgo_Builder
//---------------------------------------------------------------------
public ref class BOPAlgo_Builder : public Macad::Occt::BOPAlgo_BuilderShape
{

#ifdef Include_BOPAlgo_Builder_h
public:
	Include_BOPAlgo_Builder_h
#endif

protected:
	BOPAlgo_Builder(InitMode init)
		: Macad::Occt::BOPAlgo_BuilderShape( init )
	{}

public:
	BOPAlgo_Builder(::BOPAlgo_Builder* nativeInstance)
		: Macad::Occt::BOPAlgo_BuilderShape( nativeInstance )
	{}

	BOPAlgo_Builder(::BOPAlgo_Builder& nativeInstance)
		: Macad::Occt::BOPAlgo_BuilderShape( nativeInstance )
	{}

	property ::BOPAlgo_Builder* NativeInstance
	{
		::BOPAlgo_Builder* get()
		{
			return static_cast<::BOPAlgo_Builder*>(_NativeInstance);
		}
	}

public:
	BOPAlgo_Builder();
	BOPAlgo_Builder(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	BOPAlgo_Builder(Macad::Occt::BOPAlgo_Builder^ parameter1);
	void Clear();
	/* Method skipped due to unknown mapping: BOPAlgo_PaveFiller PPaveFiller() */
	/* Method skipped due to unknown mapping: BOPDS_DS PDS() */
	/* Method skipped due to unknown mapping: IntTools_Context Context() */
	void AddArgument(Macad::Occt::TopoDS_Shape^ theShape);
	void SetArguments(Macad::Occt::TopTools_ListOfShape^ theLS);
	Macad::Occt::TopTools_ListOfShape^ Arguments();
	void SetNonDestructive(bool theFlag);
	bool NonDestructive();
	void SetGlue(Macad::Occt::BOPAlgo_GlueEnum theGlue);
	Macad::Occt::BOPAlgo_GlueEnum Glue();
	void SetCheckInverted(bool theCheck);
	bool CheckInverted();
	void Perform();
	/* Method skipped due to unknown mapping: void PerformWithFiller(BOPAlgo_PaveFiller theFiller, ) */
	void BuildBOP(Macad::Occt::TopTools_ListOfShape^ theObjects, Macad::Occt::TopAbs_State theObjState, Macad::Occt::TopTools_ListOfShape^ theTools, Macad::Occt::TopAbs_State theToolsState, Macad::Occt::Message_Report^ theReport);
	void BuildBOP(Macad::Occt::TopTools_ListOfShape^ theObjects, Macad::Occt::TopAbs_State theObjState, Macad::Occt::TopTools_ListOfShape^ theTools, Macad::Occt::TopAbs_State theToolsState);
	void BuildBOP(Macad::Occt::TopTools_ListOfShape^ theObjects, Macad::Occt::TopTools_ListOfShape^ theTools, Macad::Occt::BOPAlgo_Operation theOperation, Macad::Occt::Message_Report^ theReport);
	void BuildBOP(Macad::Occt::TopTools_ListOfShape^ theObjects, Macad::Occt::TopTools_ListOfShape^ theTools, Macad::Occt::BOPAlgo_Operation theOperation);
	Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Images();
	Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Origins();
	Macad::Occt::TopTools_DataMapOfShapeShape^ ShapesSD();
}; // class BOPAlgo_Builder

//---------------------------------------------------------------------
//  Class  BOPAlgo_ToolsProvider
//---------------------------------------------------------------------
public ref class BOPAlgo_ToolsProvider : public Macad::Occt::BOPAlgo_Builder
{

#ifdef Include_BOPAlgo_ToolsProvider_h
public:
	Include_BOPAlgo_ToolsProvider_h
#endif

protected:
	BOPAlgo_ToolsProvider(InitMode init)
		: Macad::Occt::BOPAlgo_Builder( init )
	{}

public:
	BOPAlgo_ToolsProvider(::BOPAlgo_ToolsProvider* nativeInstance)
		: Macad::Occt::BOPAlgo_Builder( nativeInstance )
	{}

	BOPAlgo_ToolsProvider(::BOPAlgo_ToolsProvider& nativeInstance)
		: Macad::Occt::BOPAlgo_Builder( nativeInstance )
	{}

	property ::BOPAlgo_ToolsProvider* NativeInstance
	{
		::BOPAlgo_ToolsProvider* get()
		{
			return static_cast<::BOPAlgo_ToolsProvider*>(_NativeInstance);
		}
	}

public:
	BOPAlgo_ToolsProvider();
	BOPAlgo_ToolsProvider(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	BOPAlgo_ToolsProvider(Macad::Occt::BOPAlgo_ToolsProvider^ parameter1);
	void Clear();
	void AddTool(Macad::Occt::TopoDS_Shape^ theShape);
	void SetTools(Macad::Occt::TopTools_ListOfShape^ theShapes);
	Macad::Occt::TopTools_ListOfShape^ Tools();
}; // class BOPAlgo_ToolsProvider

//---------------------------------------------------------------------
//  Class  BOPAlgo_BOP
//---------------------------------------------------------------------
public ref class BOPAlgo_BOP : public Macad::Occt::BOPAlgo_ToolsProvider
{

#ifdef Include_BOPAlgo_BOP_h
public:
	Include_BOPAlgo_BOP_h
#endif

protected:
	BOPAlgo_BOP(InitMode init)
		: Macad::Occt::BOPAlgo_ToolsProvider( init )
	{}

public:
	BOPAlgo_BOP(::BOPAlgo_BOP* nativeInstance)
		: Macad::Occt::BOPAlgo_ToolsProvider( nativeInstance )
	{}

	BOPAlgo_BOP(::BOPAlgo_BOP& nativeInstance)
		: Macad::Occt::BOPAlgo_ToolsProvider( nativeInstance )
	{}

	property ::BOPAlgo_BOP* NativeInstance
	{
		::BOPAlgo_BOP* get()
		{
			return static_cast<::BOPAlgo_BOP*>(_NativeInstance);
		}
	}

public:
	BOPAlgo_BOP();
	BOPAlgo_BOP(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	BOPAlgo_BOP(Macad::Occt::BOPAlgo_BOP^ parameter1);
	void Clear();
	void SetOperation(Macad::Occt::BOPAlgo_Operation theOperation);
	Macad::Occt::BOPAlgo_Operation Operation();
	void Perform();
}; // class BOPAlgo_BOP

//---------------------------------------------------------------------
//  Class  BOPAlgo_Tools
//---------------------------------------------------------------------
public ref class BOPAlgo_Tools sealed : public BaseClass<::BOPAlgo_Tools>
{

#ifdef Include_BOPAlgo_Tools_h
public:
	Include_BOPAlgo_Tools_h
#endif

public:
	BOPAlgo_Tools(::BOPAlgo_Tools* nativeInstance)
		: BaseClass<::BOPAlgo_Tools>( nativeInstance, true )
	{}

	BOPAlgo_Tools(::BOPAlgo_Tools& nativeInstance)
		: BaseClass<::BOPAlgo_Tools>( &nativeInstance, false )
	{}

	property ::BOPAlgo_Tools* NativeInstance
	{
		::BOPAlgo_Tools* get()
		{
			return static_cast<::BOPAlgo_Tools*>(_NativeInstance);
		}
	}

public:
	BOPAlgo_Tools();
	BOPAlgo_Tools(Macad::Occt::BOPAlgo_Tools^ parameter1);
	/* Method skipped due to unknown mapping: void FillMap(BOPDS_PaveBlock thePB1, Standard_Integer theF, BOPDS_IndexedDataMapOfPaveBlockListOfInteger theMILI, NCollection_BaseAllocator theAllocator, ) */
	/* Method skipped due to unknown mapping: Standard_Real ComputeToleranceOfCB(BOPDS_CommonBlock theCB, BOPDS_DS theDS, IntTools_Context theContext, ) */
	static int EdgesToWires(Macad::Occt::TopoDS_Shape^ theEdges, Macad::Occt::TopoDS_Shape^ theWires, bool theShared, double theAngTol);
	static int EdgesToWires(Macad::Occt::TopoDS_Shape^ theEdges, Macad::Occt::TopoDS_Shape^ theWires, bool theShared);
	static int EdgesToWires(Macad::Occt::TopoDS_Shape^ theEdges, Macad::Occt::TopoDS_Shape^ theWires);
	static bool WiresToFaces(Macad::Occt::TopoDS_Shape^ theWires, Macad::Occt::TopoDS_Shape^ theFaces, double theAngTol);
	static bool WiresToFaces(Macad::Occt::TopoDS_Shape^ theWires, Macad::Occt::TopoDS_Shape^ theFaces);
	static void IntersectVertices(Macad::Occt::TopTools_IndexedDataMapOfShapeReal^ theVertices, double theFuzzyValue, Macad::Occt::TopTools_ListOfListOfShape^ theChains);
	static void TreatCompound(Macad::Occt::TopoDS_Shape^ theS, Macad::Occt::TopTools_MapOfShape^ theMFence, Macad::Occt::TopTools_ListOfShape^ theLS);
	/* Method skipped due to unknown mapping: void ClassifyFaces(TopTools_ListOfShape theFaces, TopTools_ListOfShape theSolids, Standard_Boolean theRunParallel, IntTools_Context theContext, TopTools_IndexedDataMapOfShapeListOfShape theInParts, TopTools_DataMapOfShapeBox theShapeBoxMap, TopTools_DataMapOfShapeListOfShape theSolidsIF, ) */
	/* Method skipped due to unknown mapping: void ClassifyFaces(TopTools_ListOfShape theFaces, TopTools_ListOfShape theSolids, Standard_Boolean theRunParallel, IntTools_Context theContext, TopTools_IndexedDataMapOfShapeListOfShape theInParts, TopTools_DataMapOfShapeBox theShapeBoxMap, TopTools_DataMapOfShapeListOfShape theSolidsIF, ) */
	/* Method skipped due to unknown mapping: void ClassifyFaces(TopTools_ListOfShape theFaces, TopTools_ListOfShape theSolids, Standard_Boolean theRunParallel, IntTools_Context theContext, TopTools_IndexedDataMapOfShapeListOfShape theInParts, TopTools_DataMapOfShapeBox theShapeBoxMap, TopTools_DataMapOfShapeListOfShape theSolidsIF, ) */
	/* Method skipped due to unknown mapping: void FillInternals(TopTools_ListOfShape theSolids, TopTools_ListOfShape theParts, TopTools_DataMapOfShapeListOfShape theImages, IntTools_Context theContext, ) */
}; // class BOPAlgo_Tools

}; // namespace Occt
}; // namespace Macad
