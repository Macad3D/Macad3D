// Generated wrapper code for package AIS

#pragma once

#include "SelectMgr.h"
#include "AIS.h"
#include "Prs3d.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  AIS_KindOfSurface
//---------------------------------------------------------------------
public enum class AIS_KindOfSurface
{
	AIS_KOS_Plane = 0,
	AIS_KOS_Cylinder = 1,
	AIS_KOS_Cone = 2,
	AIS_KOS_Sphere = 3,
	AIS_KOS_Torus = 4,
	AIS_KOS_Revolution = 5,
	AIS_KOS_Extrusion = 6,
	AIS_KOS_OtherSurface = 7
}; // enum  class AIS_KindOfSurface

//---------------------------------------------------------------------
//  Enum  AIS_DimensionSelectionMode
//---------------------------------------------------------------------
public enum class AIS_DimensionSelectionMode
{
	AIS_DSM_All = 0,
	AIS_DSM_Line = 1,
	AIS_DSM_Text = 2
}; // enum  class AIS_DimensionSelectionMode

//---------------------------------------------------------------------
//  Enum  AIS_DisplaySpecialSymbol
//---------------------------------------------------------------------
public enum class AIS_DisplaySpecialSymbol
{
	AIS_DSS_No = 0,
	AIS_DSS_Before = 1,
	AIS_DSS_After = 2
}; // enum  class AIS_DisplaySpecialSymbol

//---------------------------------------------------------------------
//  Enum  AIS_KindOfInteractive
//---------------------------------------------------------------------
public enum class AIS_KindOfInteractive
{
	AIS_KOI_None = 0,
	AIS_KOI_Datum = 1,
	AIS_KOI_Shape = 2,
	AIS_KOI_Object = 3,
	AIS_KOI_Relation = 4,
	AIS_KOI_Dimension = 5
}; // enum  class AIS_KindOfInteractive

//---------------------------------------------------------------------
//  Enum  AIS_KindOfDimension
//---------------------------------------------------------------------
public enum class AIS_KindOfDimension
{
	AIS_KOD_NONE = 0,
	AIS_KOD_LENGTH = 1,
	AIS_KOD_PLANEANGLE = 2,
	AIS_KOD_SOLIDANGLE = 3,
	AIS_KOD_AREA = 4,
	AIS_KOD_VOLUME = 5,
	AIS_KOD_MASS = 6,
	AIS_KOD_TIME = 7,
	AIS_KOD_RADIUS = 8,
	AIS_KOD_DIAMETER = 9,
	AIS_KOD_CHAMF2D = 10,
	AIS_KOD_CHAMF3D = 11,
	AIS_KOD_OFFSET = 12,
	AIS_KOD_ELLIPSERADIUS = 13
}; // enum  class AIS_KindOfDimension

//---------------------------------------------------------------------
//  Enum  AIS_TypeOfAngle
//---------------------------------------------------------------------
public enum class AIS_TypeOfAngle
{
	AIS_TOA_Interior = 0,
	AIS_TOA_Exterior = 1
}; // enum  class AIS_TypeOfAngle

//---------------------------------------------------------------------
//  Enum  AIS_TypeOfAngleArrowVisibility
//---------------------------------------------------------------------
public enum class AIS_TypeOfAngleArrowVisibility
{
	AIS_TOAV_Both = 0,
	AIS_TOAV_First = 1,
	AIS_TOAV_Second = 2,
	AIS_TOAV_None = 3
}; // enum  class AIS_TypeOfAngleArrowVisibility

//---------------------------------------------------------------------
//  Enum  AIS_DisplayStatus
//---------------------------------------------------------------------
public enum class AIS_DisplayStatus
{
	AIS_DS_Displayed = 0,
	AIS_DS_Erased = 1,
	AIS_DS_None = 2
}; // enum  class AIS_DisplayStatus

//---------------------------------------------------------------------
//  Enum  AIS_DisplayMode
//---------------------------------------------------------------------
public enum class AIS_DisplayMode
{
	AIS_WireFrame = 0,
	AIS_Shaded = 1
}; // enum  class AIS_DisplayMode

//---------------------------------------------------------------------
//  Enum  AIS_ClearMode
//---------------------------------------------------------------------
public enum class AIS_ClearMode
{
	AIS_CM_All = 0,
	AIS_CM_Interactive = 1,
	AIS_CM_Filters = 2,
	AIS_CM_StandardModes = 3,
	AIS_CM_TemporaryShapePrs = 4
}; // enum  class AIS_ClearMode

//---------------------------------------------------------------------
//  Enum  AIS_SelectStatus
//---------------------------------------------------------------------
public enum class AIS_SelectStatus
{
	AIS_SS_Added = 0,
	AIS_SS_Removed = 1,
	AIS_SS_NotDone = 2
}; // enum  class AIS_SelectStatus

//---------------------------------------------------------------------
//  Enum  AIS_SelectionModesConcurrency
//---------------------------------------------------------------------
public enum class AIS_SelectionModesConcurrency
{
	AIS_SelectionModesConcurrency_Single = 0,
	AIS_SelectionModesConcurrency_GlobalOrLocal = 1,
	AIS_SelectionModesConcurrency_Multiple = 2
}; // enum  class AIS_SelectionModesConcurrency

//---------------------------------------------------------------------
//  Enum  AIS_StatusOfDetection
//---------------------------------------------------------------------
public enum class AIS_StatusOfDetection
{
	AIS_SOD_Error = 0,
	AIS_SOD_Nothing = 1,
	AIS_SOD_AllBad = 2,
	AIS_SOD_Selected = 3,
	AIS_SOD_OnlyOneDetected = 4,
	AIS_SOD_OnlyOneGood = 5,
	AIS_SOD_SeveralGood = 6
}; // enum  class AIS_StatusOfDetection

//---------------------------------------------------------------------
//  Enum  AIS_StatusOfPick
//---------------------------------------------------------------------
public enum class AIS_StatusOfPick
{
	AIS_SOP_Error = 0,
	AIS_SOP_NothingSelected = 1,
	AIS_SOP_Removed = 2,
	AIS_SOP_OneSelected = 3,
	AIS_SOP_SeveralSelected = 4
}; // enum  class AIS_StatusOfPick

//---------------------------------------------------------------------
//  Enum  AIS_TypeOfIso
//---------------------------------------------------------------------
public enum class AIS_TypeOfIso
{
	AIS_TOI_IsoU = 0,
	AIS_TOI_IsoV = 1,
	AIS_TOI_Both = 2
}; // enum  class AIS_TypeOfIso

//---------------------------------------------------------------------
//  Enum  AIS_TypeOfAxis
//---------------------------------------------------------------------
public enum class AIS_TypeOfAxis
{
	AIS_TOAX_Unknown = 0,
	AIS_TOAX_XAxis = 1,
	AIS_TOAX_YAxis = 2,
	AIS_TOAX_ZAxis = 3
}; // enum  class AIS_TypeOfAxis

//---------------------------------------------------------------------
//  Enum  AIS_ConnectStatus
//---------------------------------------------------------------------
public enum class AIS_ConnectStatus
{
	AIS_CS_None = 0,
	AIS_CS_Connection = 1,
	AIS_CS_Transform = 2,
	AIS_CS_Both = 3
}; // enum  class AIS_ConnectStatus

//---------------------------------------------------------------------
//  Enum  AIS_DragAction
//---------------------------------------------------------------------
public enum class AIS_DragAction
{
	AIS_DragAction_Start = 0,
	AIS_DragAction_Update = 1,
	AIS_DragAction_Stop = 2,
	AIS_DragAction_Abort = 3
}; // enum  class AIS_DragAction

//---------------------------------------------------------------------
//  Enum  AIS_TypeOfDist
//---------------------------------------------------------------------
public enum class AIS_TypeOfDist
{
	AIS_TOD_Unknown = 0,
	AIS_TOD_Horizontal = 1,
	AIS_TOD_Vertical = 2
}; // enum  class AIS_TypeOfDist

//---------------------------------------------------------------------
//  Enum  AIS_TypeOfAttribute
//---------------------------------------------------------------------
public enum class AIS_TypeOfAttribute
{
	AIS_TOA_Line = 0,
	AIS_TOA_Dimension = 1,
	AIS_TOA_Wire = 2,
	AIS_TOA_Plane = 3,
	AIS_TOA_Vector = 4,
	AIS_TOA_UIso = 5,
	AIS_TOA_VIso = 6,
	AIS_TOA_Free = 7,
	AIS_TOA_UnFree = 8,
	AIS_TOA_Section = 9,
	AIS_TOA_Hidden = 10,
	AIS_TOA_Seen = 11,
	AIS_TOA_FaceBoundary = 12,
	AIS_TOA_FirstAxis = 13,
	AIS_TOA_SecondAxis = 14,
	AIS_TOA_ThirdAxis = 15
}; // enum  class AIS_TypeOfAttribute

//---------------------------------------------------------------------
//  Enum  AIS_KindOfRelation
//---------------------------------------------------------------------
public enum class AIS_KindOfRelation
{
	AIS_KOR_NONE = 0,
	AIS_KOR_CONCENTRIC = 1,
	AIS_KOR_EQUALDISTANCE = 2,
	AIS_KOR_EQUALRADIUS = 3,
	AIS_KOR_FIX = 4,
	AIS_KOR_IDENTIC = 5,
	AIS_KOR_OFFSET = 6,
	AIS_KOR_PARALLEL = 7,
	AIS_KOR_PERPENDICULAR = 8,
	AIS_KOR_TANGENT = 9,
	AIS_KOR_SYMMETRIC = 10
}; // enum  class AIS_KindOfRelation

//---------------------------------------------------------------------
//  Enum  AIS_KindOfUnit
//---------------------------------------------------------------------
public enum class AIS_KindOfUnit
{
	AIS_TOU_LENGTH = 0,
	AIS_TOU_SURFACE = 1,
	AIS_TOU_VOLUME = 2,
	AIS_TOU_PLANE_ANGLE = 3,
	AIS_TOU_SOLID_ANGLE = 4,
	AIS_TOU_MASS = 5,
	AIS_TOU_FORCE = 6,
	AIS_TOU_TIME = 7
}; // enum  class AIS_KindOfUnit

//---------------------------------------------------------------------
//  Enum  AIS_ManipulatorMode
//---------------------------------------------------------------------
public enum class AIS_ManipulatorMode
{
	AIS_MM_None = 0,
	AIS_MM_Translation = 1,
	AIS_MM_Rotation = 2,
	AIS_MM_Scaling = 3,
	AIS_MM_TranslationPlane = 4
}; // enum  class AIS_ManipulatorMode

//---------------------------------------------------------------------
//  Enum  AIS_MouseGesture
//---------------------------------------------------------------------
public enum class AIS_MouseGesture
{
	AIS_MouseGesture_NONE = 0,
	AIS_MouseGesture_SelectRectangle = 1,
	AIS_MouseGesture_SelectLasso = 2,
	AIS_MouseGesture_Zoom = 3,
	AIS_MouseGesture_Pan = 4,
	AIS_MouseGesture_RotateOrbit = 5,
	AIS_MouseGesture_RotateView = 6
}; // enum  class AIS_MouseGesture

//---------------------------------------------------------------------
//  Enum  AIS_NavigationMode
//---------------------------------------------------------------------
public enum class AIS_NavigationMode
{
	AIS_NavigationMode_Orbit = 0,
	AIS_NavigationMode_FirstPersonFlight = 1,
	AIS_NavigationMode_FirstPersonWalk = 2
}; // enum  class AIS_NavigationMode

//---------------------------------------------------------------------
//  Enum  AIS_TypeOfPlane
//---------------------------------------------------------------------
public enum class AIS_TypeOfPlane
{
	AIS_TOPL_Unknown = 0,
	AIS_TOPL_XYPlane = 1,
	AIS_TOPL_XZPlane = 2,
	AIS_TOPL_YZPlane = 3
}; // enum  class AIS_TypeOfPlane

//---------------------------------------------------------------------
//  Enum  AIS_RotationMode
//---------------------------------------------------------------------
public enum class AIS_RotationMode
{
	AIS_RotationMode_BndBoxActive = 0,
	AIS_RotationMode_PickLast = 1,
	AIS_RotationMode_PickCenter = 2,
	AIS_RotationMode_CameraAt = 3,
	AIS_RotationMode_BndBoxScene = 4
}; // enum  class AIS_RotationMode

//---------------------------------------------------------------------
//  Enum  AIS_StandardDatum
//---------------------------------------------------------------------
public enum class AIS_StandardDatum
{
	AIS_SD_None = 0,
	AIS_SD_Point = 1,
	AIS_SD_Axis = 2,
	AIS_SD_Trihedron = 3,
	AIS_SD_PlaneTrihedron = 4,
	AIS_SD_Line = 5,
	AIS_SD_Circle = 6,
	AIS_SD_Plane = 7
}; // enum  class AIS_StandardDatum

//---------------------------------------------------------------------
//  Enum  AIS_TrihedronSelectionMode
//---------------------------------------------------------------------
public enum class AIS_TrihedronSelectionMode
{
	AIS_TrihedronSelectionMode_EntireObject = 0,
	AIS_TrihedronSelectionMode_Origin = 1,
	AIS_TrihedronSelectionMode_Axes = 2,
	AIS_TrihedronSelectionMode_MainPlanes = 3
}; // enum  class AIS_TrihedronSelectionMode

//---------------------------------------------------------------------
//  Enum  AIS_ViewSelectionTool
//---------------------------------------------------------------------
public enum class AIS_ViewSelectionTool
{
	AIS_ViewSelectionTool_Picking = 0,
	AIS_ViewSelectionTool_RubberBand = 1,
	AIS_ViewSelectionTool_Polygon = 2
}; // enum  class AIS_ViewSelectionTool

//---------------------------------------------------------------------
//  Enum  AIS_ViewInputBufferType
//---------------------------------------------------------------------
public enum class AIS_ViewInputBufferType
{
	AIS_ViewInputBufferType_UI = 0,
	AIS_ViewInputBufferType_GL = 1
}; // enum  class AIS_ViewInputBufferType

//---------------------------------------------------------------------
//  Enum  AIS_WalkTranslation
//---------------------------------------------------------------------
public enum class AIS_WalkTranslation
{
	AIS_WalkTranslation_Forward = 0,
	AIS_WalkTranslation_Side = 1,
	AIS_WalkTranslation_Up = 2
}; // enum  class AIS_WalkTranslation

//---------------------------------------------------------------------
//  Enum  AIS_WalkRotation
//---------------------------------------------------------------------
public enum class AIS_WalkRotation
{
	AIS_WalkRotation_Yaw = 0,
	AIS_WalkRotation_Pitch = 1,
	AIS_WalkRotation_Roll = 2
}; // enum  class AIS_WalkRotation

//---------------------------------------------------------------------
//  Class  AIS_ListOfInteractive
//---------------------------------------------------------------------
public ref class AIS_ListOfInteractive sealed : public BaseClass<::AIS_ListOfInteractive>
{

#ifdef Include_AIS_ListOfInteractive_h
public:
	Include_AIS_ListOfInteractive_h
#endif

public:
	AIS_ListOfInteractive(::AIS_ListOfInteractive* nativeInstance)
		: BaseClass<::AIS_ListOfInteractive>( nativeInstance, true )
	{}

	AIS_ListOfInteractive(::AIS_ListOfInteractive& nativeInstance)
		: BaseClass<::AIS_ListOfInteractive>( &nativeInstance, false )
	{}

	property ::AIS_ListOfInteractive* NativeInstance
	{
		::AIS_ListOfInteractive* get()
		{
			return static_cast<::AIS_ListOfInteractive*>(_NativeInstance);
		}
	}

public:
	AIS_ListOfInteractive();
	AIS_ListOfInteractive(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	AIS_ListOfInteractive(Macad::Occt::AIS_ListOfInteractive^ theOther);
	int Size();
	Macad::Occt::AIS_ListOfInteractive^ Assign(Macad::Occt::AIS_ListOfInteractive^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::AIS_InteractiveObject^ First();
	Macad::Occt::AIS_InteractiveObject^ Last();
	Macad::Occt::AIS_InteractiveObject^ Append(Macad::Occt::AIS_InteractiveObject^ theItem);
	/* Method skipped due to unknown mapping: void Append(AIS_InteractiveObject theItem, Iterator theIter, ) */
	void Append(Macad::Occt::AIS_ListOfInteractive^ theOther);
	Macad::Occt::AIS_InteractiveObject^ Prepend(Macad::Occt::AIS_InteractiveObject^ theItem);
	void Prepend(Macad::Occt::AIS_ListOfInteractive^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: AIS_InteractiveObject InsertBefore(AIS_InteractiveObject theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(AIS_ListOfInteractive theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: AIS_InteractiveObject InsertAfter(AIS_InteractiveObject theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(AIS_ListOfInteractive theOther, Iterator theIter, ) */
	void Reverse();
}; // class AIS_ListOfInteractive

//---------------------------------------------------------------------
//  Class  AIS_NListOfEntityOwner
//---------------------------------------------------------------------
public ref class AIS_NListOfEntityOwner sealed : public BaseClass<::AIS_NListOfEntityOwner>
{

#ifdef Include_AIS_NListOfEntityOwner_h
public:
	Include_AIS_NListOfEntityOwner_h
#endif

public:
	AIS_NListOfEntityOwner(::AIS_NListOfEntityOwner* nativeInstance)
		: BaseClass<::AIS_NListOfEntityOwner>( nativeInstance, true )
	{}

	AIS_NListOfEntityOwner(::AIS_NListOfEntityOwner& nativeInstance)
		: BaseClass<::AIS_NListOfEntityOwner>( &nativeInstance, false )
	{}

	property ::AIS_NListOfEntityOwner* NativeInstance
	{
		::AIS_NListOfEntityOwner* get()
		{
			return static_cast<::AIS_NListOfEntityOwner*>(_NativeInstance);
		}
	}

public:
	AIS_NListOfEntityOwner();
	AIS_NListOfEntityOwner(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	AIS_NListOfEntityOwner(Macad::Occt::AIS_NListOfEntityOwner^ theOther);
	int Size();
	Macad::Occt::AIS_NListOfEntityOwner^ Assign(Macad::Occt::AIS_NListOfEntityOwner^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::SelectMgr_EntityOwner^ First();
	Macad::Occt::SelectMgr_EntityOwner^ Last();
	Macad::Occt::SelectMgr_EntityOwner^ Append(Macad::Occt::SelectMgr_EntityOwner^ theItem);
	/* Method skipped due to unknown mapping: void Append(SelectMgr_EntityOwner theItem, Iterator theIter, ) */
	void Append(Macad::Occt::AIS_NListOfEntityOwner^ theOther);
	Macad::Occt::SelectMgr_EntityOwner^ Prepend(Macad::Occt::SelectMgr_EntityOwner^ theItem);
	void Prepend(Macad::Occt::AIS_NListOfEntityOwner^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: SelectMgr_EntityOwner InsertBefore(SelectMgr_EntityOwner theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(AIS_NListOfEntityOwner theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: SelectMgr_EntityOwner InsertAfter(SelectMgr_EntityOwner theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(AIS_NListOfEntityOwner theOther, Iterator theIter, ) */
	void Reverse();
}; // class AIS_NListOfEntityOwner

//---------------------------------------------------------------------
//  Class  AIS_DataMapOfShapeDrawer
//---------------------------------------------------------------------
public ref class AIS_DataMapOfShapeDrawer sealed : public BaseClass<::AIS_DataMapOfShapeDrawer>
{

#ifdef Include_AIS_DataMapOfShapeDrawer_h
public:
	Include_AIS_DataMapOfShapeDrawer_h
#endif

public:
	AIS_DataMapOfShapeDrawer(::AIS_DataMapOfShapeDrawer* nativeInstance)
		: BaseClass<::AIS_DataMapOfShapeDrawer>( nativeInstance, true )
	{}

	AIS_DataMapOfShapeDrawer(::AIS_DataMapOfShapeDrawer& nativeInstance)
		: BaseClass<::AIS_DataMapOfShapeDrawer>( &nativeInstance, false )
	{}

	property ::AIS_DataMapOfShapeDrawer* NativeInstance
	{
		::AIS_DataMapOfShapeDrawer* get()
		{
			return static_cast<::AIS_DataMapOfShapeDrawer*>(_NativeInstance);
		}
	}

public:
	AIS_DataMapOfShapeDrawer();
	AIS_DataMapOfShapeDrawer(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	AIS_DataMapOfShapeDrawer(int theNbBuckets);
	AIS_DataMapOfShapeDrawer(Macad::Occt::AIS_DataMapOfShapeDrawer^ theOther);
	void Exchange(Macad::Occt::AIS_DataMapOfShapeDrawer^ theOther);
	Macad::Occt::AIS_DataMapOfShapeDrawer^ Assign(Macad::Occt::AIS_DataMapOfShapeDrawer^ theOther);
	Macad::Occt::AIS_ColoredDrawer^ Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::AIS_ColoredDrawer^ theItem);
	bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
	bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
	Macad::Occt::AIS_ColoredDrawer^ Seek(Macad::Occt::TopoDS_Shape^ theKey);
	Macad::Occt::AIS_ColoredDrawer^ Find(Macad::Occt::TopoDS_Shape^ theKey);
	bool Find(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::AIS_ColoredDrawer^ theValue);
	Macad::Occt::AIS_ColoredDrawer^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
	Macad::Occt::AIS_ColoredDrawer^ ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class AIS_DataMapOfShapeDrawer

//---------------------------------------------------------------------
//  Class  AIS_SequenceOfDimension
//---------------------------------------------------------------------
public ref class AIS_SequenceOfDimension sealed : public BaseClass<::AIS_SequenceOfDimension>
{

#ifdef Include_AIS_SequenceOfDimension_h
public:
	Include_AIS_SequenceOfDimension_h
#endif

public:
	AIS_SequenceOfDimension(::AIS_SequenceOfDimension* nativeInstance)
		: BaseClass<::AIS_SequenceOfDimension>( nativeInstance, true )
	{}

	AIS_SequenceOfDimension(::AIS_SequenceOfDimension& nativeInstance)
		: BaseClass<::AIS_SequenceOfDimension>( &nativeInstance, false )
	{}

	property ::AIS_SequenceOfDimension* NativeInstance
	{
		::AIS_SequenceOfDimension* get()
		{
			return static_cast<::AIS_SequenceOfDimension*>(_NativeInstance);
		}
	}

public:
	AIS_SequenceOfDimension();
	AIS_SequenceOfDimension(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	AIS_SequenceOfDimension(Macad::Occt::AIS_SequenceOfDimension^ theOther);
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
	Macad::Occt::AIS_SequenceOfDimension^ Assign(Macad::Occt::AIS_SequenceOfDimension^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::AIS_Relation^ theItem);
	void Append(Macad::Occt::AIS_SequenceOfDimension^ theSeq);
	void Prepend(Macad::Occt::AIS_Relation^ theItem);
	void Prepend(Macad::Occt::AIS_SequenceOfDimension^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::AIS_Relation^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::AIS_SequenceOfDimension^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, AIS_Relation theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::AIS_SequenceOfDimension^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::AIS_Relation^ theItem);
	void Split(int theIndex, Macad::Occt::AIS_SequenceOfDimension^ theSeq);
	Macad::Occt::AIS_Relation^ First();
	Macad::Occt::AIS_Relation^ ChangeFirst();
	Macad::Occt::AIS_Relation^ Last();
	Macad::Occt::AIS_Relation^ ChangeLast();
	Macad::Occt::AIS_Relation^ Value(int theIndex);
	Macad::Occt::AIS_Relation^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::AIS_Relation^ theItem);
}; // class AIS_SequenceOfDimension

//---------------------------------------------------------------------
//  Class  AIS_SequenceOfInteractive
//---------------------------------------------------------------------
public ref class AIS_SequenceOfInteractive sealed : public BaseClass<::AIS_SequenceOfInteractive>
{

#ifdef Include_AIS_SequenceOfInteractive_h
public:
	Include_AIS_SequenceOfInteractive_h
#endif

public:
	AIS_SequenceOfInteractive(::AIS_SequenceOfInteractive* nativeInstance)
		: BaseClass<::AIS_SequenceOfInteractive>( nativeInstance, true )
	{}

	AIS_SequenceOfInteractive(::AIS_SequenceOfInteractive& nativeInstance)
		: BaseClass<::AIS_SequenceOfInteractive>( &nativeInstance, false )
	{}

	property ::AIS_SequenceOfInteractive* NativeInstance
	{
		::AIS_SequenceOfInteractive* get()
		{
			return static_cast<::AIS_SequenceOfInteractive*>(_NativeInstance);
		}
	}

public:
	AIS_SequenceOfInteractive();
	AIS_SequenceOfInteractive(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	AIS_SequenceOfInteractive(Macad::Occt::AIS_SequenceOfInteractive^ theOther);
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
	Macad::Occt::AIS_SequenceOfInteractive^ Assign(Macad::Occt::AIS_SequenceOfInteractive^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::AIS_InteractiveObject^ theItem);
	void Append(Macad::Occt::AIS_SequenceOfInteractive^ theSeq);
	void Prepend(Macad::Occt::AIS_InteractiveObject^ theItem);
	void Prepend(Macad::Occt::AIS_SequenceOfInteractive^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::AIS_InteractiveObject^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::AIS_SequenceOfInteractive^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, AIS_InteractiveObject theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::AIS_SequenceOfInteractive^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::AIS_InteractiveObject^ theItem);
	void Split(int theIndex, Macad::Occt::AIS_SequenceOfInteractive^ theSeq);
	Macad::Occt::AIS_InteractiveObject^ First();
	Macad::Occt::AIS_InteractiveObject^ ChangeFirst();
	Macad::Occt::AIS_InteractiveObject^ Last();
	Macad::Occt::AIS_InteractiveObject^ ChangeLast();
	Macad::Occt::AIS_InteractiveObject^ Value(int theIndex);
	Macad::Occt::AIS_InteractiveObject^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::AIS_InteractiveObject^ theItem);
}; // class AIS_SequenceOfInteractive

//---------------------------------------------------------------------
//  Class  AIS_AnimationProgress
//---------------------------------------------------------------------
public ref class AIS_AnimationProgress sealed : public BaseClass<::AIS_AnimationProgress>
{

#ifdef Include_AIS_AnimationProgress_h
public:
	Include_AIS_AnimationProgress_h
#endif

public:
	AIS_AnimationProgress(::AIS_AnimationProgress* nativeInstance)
		: BaseClass<::AIS_AnimationProgress>( nativeInstance, true )
	{}

	AIS_AnimationProgress(::AIS_AnimationProgress& nativeInstance)
		: BaseClass<::AIS_AnimationProgress>( &nativeInstance, false )
	{}

	property ::AIS_AnimationProgress* NativeInstance
	{
		::AIS_AnimationProgress* get()
		{
			return static_cast<::AIS_AnimationProgress*>(_NativeInstance);
		}
	}

public:
	AIS_AnimationProgress();
	AIS_AnimationProgress(Macad::Occt::AIS_AnimationProgress^ parameter1);
}; // class AIS_AnimationProgress

//---------------------------------------------------------------------
//  Class  AIS_WalkPart
//---------------------------------------------------------------------
public ref class AIS_WalkPart sealed : public BaseClass<::AIS_WalkPart>
{

#ifdef Include_AIS_WalkPart_h
public:
	Include_AIS_WalkPart_h
#endif

public:
	AIS_WalkPart(::AIS_WalkPart* nativeInstance)
		: BaseClass<::AIS_WalkPart>( nativeInstance, true )
	{}

	AIS_WalkPart(::AIS_WalkPart& nativeInstance)
		: BaseClass<::AIS_WalkPart>( &nativeInstance, false )
	{}

	property ::AIS_WalkPart* NativeInstance
	{
		::AIS_WalkPart* get()
		{
			return static_cast<::AIS_WalkPart*>(_NativeInstance);
		}
	}

public:
	AIS_WalkPart();
	AIS_WalkPart(Macad::Occt::AIS_WalkPart^ parameter1);
	bool IsEmpty();
}; // class AIS_WalkPart

//---------------------------------------------------------------------
//  Class  AIS_WalkDelta
//---------------------------------------------------------------------
public ref class AIS_WalkDelta sealed : public BaseClass<::AIS_WalkDelta>
{

#ifdef Include_AIS_WalkDelta_h
public:
	Include_AIS_WalkDelta_h
#endif

public:
	AIS_WalkDelta(::AIS_WalkDelta* nativeInstance)
		: BaseClass<::AIS_WalkDelta>( nativeInstance, true )
	{}

	AIS_WalkDelta(::AIS_WalkDelta& nativeInstance)
		: BaseClass<::AIS_WalkDelta>( &nativeInstance, false )
	{}

	property ::AIS_WalkDelta* NativeInstance
	{
		::AIS_WalkDelta* get()
		{
			return static_cast<::AIS_WalkDelta*>(_NativeInstance);
		}
	}

public:
	AIS_WalkDelta();
	AIS_WalkDelta(Macad::Occt::AIS_WalkDelta^ parameter1);
	bool IsJumping();
	void SetJumping(bool theIsJumping);
	bool IsCrouching();
	void SetCrouching(bool theIsCrouching);
	bool IsRunning();
	void SetRunning(bool theIsRunning);
	bool IsEmpty();
	bool ToMove();
	bool ToRotate();
}; // class AIS_WalkDelta

//---------------------------------------------------------------------
//  Class  AIS
//---------------------------------------------------------------------
public ref class AIS sealed : public BaseClass<::AIS>
{

#ifdef Include_AIS_h
public:
	Include_AIS_h
#endif

public:
	AIS(::AIS* nativeInstance)
		: BaseClass<::AIS>( nativeInstance, true )
	{}

	AIS(::AIS& nativeInstance)
		: BaseClass<::AIS>( &nativeInstance, false )
	{}

	property ::AIS* NativeInstance
	{
		::AIS* get()
		{
			return static_cast<::AIS*>(_NativeInstance);
		}
	}

public:
	AIS();
	AIS(Macad::Occt::AIS^ parameter1);
	static Macad::Occt::Pnt Nearest(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::Pnt aPoint);
	static Macad::Occt::Pnt Nearest(Macad::Occt::gp_Lin^ theLine, Macad::Occt::Pnt thePoint);
	static bool Nearest(Macad::Occt::Geom_Curve^ theCurve, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theFirstPoint, Macad::Occt::Pnt theLastPoint, Macad::Occt::Pnt% theNearestPoint);
	static Macad::Occt::Pnt Farest(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::Pnt aPoint);
	static bool ComputeGeometry(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::Geom_Curve^ theCurve, Macad::Occt::Pnt% theFirstPnt, Macad::Occt::Pnt% theLastPnt);
	static bool ComputeGeometry(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::Geom_Curve^ theCurve, Macad::Occt::Pnt% theFirstPnt, Macad::Occt::Pnt% theLastPnt, bool% theIsInfinite);
	static bool ComputeGeometry(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::Geom_Curve^ theCurve, Macad::Occt::Pnt% theFirstPnt, Macad::Occt::Pnt% theLastPnt, Macad::Occt::Geom_Curve^ theExtCurve, bool% theIsInfinite, bool% theIsOnPlane, Macad::Occt::Geom_Plane^ thePlane);
	static bool ComputeGeometry(Macad::Occt::TopoDS_Edge^ theFirstEdge, Macad::Occt::TopoDS_Edge^ theSecondEdge, Macad::Occt::Geom_Curve^ theFirstCurve, Macad::Occt::Geom_Curve^ theSecondCurve, Macad::Occt::Pnt% theFirstPnt1, Macad::Occt::Pnt% theLastPnt1, Macad::Occt::Pnt% theFirstPnt2, Macad::Occt::Pnt% theLastPnt2, Macad::Occt::Geom_Plane^ thePlane);
	static bool ComputeGeometry(Macad::Occt::TopoDS_Edge^ theFirstEdge, Macad::Occt::TopoDS_Edge^ theSecondEdge, Macad::Occt::Geom_Curve^ theFirstCurve, Macad::Occt::Geom_Curve^ theSecondCurve, Macad::Occt::Pnt% theFirstPnt1, Macad::Occt::Pnt% theLastPnt1, Macad::Occt::Pnt% theFirstPnt2, Macad::Occt::Pnt% theLastPnt2, bool% theIsinfinite1, bool% theIsinfinite2);
	static bool ComputeGeometry(Macad::Occt::TopoDS_Edge^ theFirstEdge, Macad::Occt::TopoDS_Edge^ theSecondEdge, int% theExtIndex, Macad::Occt::Geom_Curve^ theFirstCurve, Macad::Occt::Geom_Curve^ theSecondCurve, Macad::Occt::Pnt% theFirstPnt1, Macad::Occt::Pnt% theLastPnt1, Macad::Occt::Pnt% theFirstPnt2, Macad::Occt::Pnt% theLastPnt2, Macad::Occt::Geom_Curve^ theExtCurve, bool% theIsinfinite1, bool% theIsinfinite2, Macad::Occt::Geom_Plane^ thePlane);
	static bool ComputeGeomCurve(Macad::Occt::Geom_Curve^ aCurve, double first1, double last1, Macad::Occt::Pnt% FirstPnt1, Macad::Occt::Pnt% LastPnt1, Macad::Occt::Geom_Plane^ aPlane, bool% isOnPlane);
	static bool ComputeGeometry(Macad::Occt::TopoDS_Vertex^ aVertex, Macad::Occt::Pnt% point, Macad::Occt::Geom_Plane^ aPlane, bool% isOnPlane);
	static bool GetPlaneFromFace(Macad::Occt::TopoDS_Face^ aFace, Macad::Occt::Pln% aPlane, Macad::Occt::Geom_Surface^ aSurf, Macad::Occt::AIS_KindOfSurface% aSurfType, double% Offset);
	static void InitFaceLength(Macad::Occt::TopoDS_Face^ aFace, Macad::Occt::Pln% aPlane, Macad::Occt::Geom_Surface^ aSurface, Macad::Occt::AIS_KindOfSurface% aSurfaceType, double% anOffset);
	static void InitLengthBetweenCurvilinearFaces(Macad::Occt::TopoDS_Face^ theFirstFace, Macad::Occt::TopoDS_Face^ theSecondFace, Macad::Occt::Geom_Surface^ theFirstSurf, Macad::Occt::Geom_Surface^ theSecondSurf, Macad::Occt::Pnt% theFirstAttach, Macad::Occt::Pnt% theSecondAttach, Macad::Occt::Dir% theDirOnPlane);
	static bool InitAngleBetweenPlanarFaces(Macad::Occt::TopoDS_Face^ theFirstFace, Macad::Occt::TopoDS_Face^ theSecondFace, Macad::Occt::Pnt% theCenter, Macad::Occt::Pnt% theFirstAttach, Macad::Occt::Pnt% theSecondAttach, bool theIsFirstPointSet);
	static bool InitAngleBetweenPlanarFaces(Macad::Occt::TopoDS_Face^ theFirstFace, Macad::Occt::TopoDS_Face^ theSecondFace, Macad::Occt::Pnt% theCenter, Macad::Occt::Pnt% theFirstAttach, Macad::Occt::Pnt% theSecondAttach);
	static bool InitAngleBetweenCurvilinearFaces(Macad::Occt::TopoDS_Face^ theFirstFace, Macad::Occt::TopoDS_Face^ theSecondFace, Macad::Occt::AIS_KindOfSurface theFirstSurfType, Macad::Occt::AIS_KindOfSurface theSecondSurfType, Macad::Occt::Pnt% theCenter, Macad::Occt::Pnt% theFirstAttach, Macad::Occt::Pnt% theSecondAttach, bool theIsFirstPointSet);
	static bool InitAngleBetweenCurvilinearFaces(Macad::Occt::TopoDS_Face^ theFirstFace, Macad::Occt::TopoDS_Face^ theSecondFace, Macad::Occt::AIS_KindOfSurface theFirstSurfType, Macad::Occt::AIS_KindOfSurface theSecondSurfType, Macad::Occt::Pnt% theCenter, Macad::Occt::Pnt% theFirstAttach, Macad::Occt::Pnt% theSecondAttach);
	static Macad::Occt::Pnt ProjectPointOnPlane(Macad::Occt::Pnt aPoint, Macad::Occt::Pln aPlane);
	static Macad::Occt::Pnt ProjectPointOnLine(Macad::Occt::Pnt aPoint, Macad::Occt::gp_Lin^ aLine);
	static Macad::Occt::Pnt TranslatePointToBound(Macad::Occt::Pnt aPoint, Macad::Occt::Dir aDir, Macad::Occt::Bnd_Box^ aBndBox);
	static bool InDomain(double aFirstPar, double aLastPar, double anAttachPar);
	static Macad::Occt::Pnt NearestApex(Macad::Occt::gp_Elips^ elips, Macad::Occt::Pnt pApex, Macad::Occt::Pnt nApex, double fpara, double lpara, bool% IsInDomain);
	static double DistanceFromApex(Macad::Occt::gp_Elips^ elips, Macad::Occt::Pnt Apex, double par);
	static void ComputeProjEdgePresentation(Macad::Occt::Graphic3d_Structure^ aPres, Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::TopoDS_Edge^ anEdge, Macad::Occt::Geom_Curve^ ProjCurve, Macad::Occt::Pnt FirstP, Macad::Occt::Pnt LastP, Macad::Occt::Quantity_NameOfColor aColor, double aWidth, Macad::Occt::Aspect_TypeOfLine aProjTOL, Macad::Occt::Aspect_TypeOfLine aCallTOL);
	static void ComputeProjEdgePresentation(Macad::Occt::Graphic3d_Structure^ aPres, Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::TopoDS_Edge^ anEdge, Macad::Occt::Geom_Curve^ ProjCurve, Macad::Occt::Pnt FirstP, Macad::Occt::Pnt LastP, Macad::Occt::Quantity_NameOfColor aColor, double aWidth, Macad::Occt::Aspect_TypeOfLine aProjTOL);
	static void ComputeProjEdgePresentation(Macad::Occt::Graphic3d_Structure^ aPres, Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::TopoDS_Edge^ anEdge, Macad::Occt::Geom_Curve^ ProjCurve, Macad::Occt::Pnt FirstP, Macad::Occt::Pnt LastP, Macad::Occt::Quantity_NameOfColor aColor, double aWidth);
	static void ComputeProjEdgePresentation(Macad::Occt::Graphic3d_Structure^ aPres, Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::TopoDS_Edge^ anEdge, Macad::Occt::Geom_Curve^ ProjCurve, Macad::Occt::Pnt FirstP, Macad::Occt::Pnt LastP, Macad::Occt::Quantity_NameOfColor aColor);
	static void ComputeProjEdgePresentation(Macad::Occt::Graphic3d_Structure^ aPres, Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::TopoDS_Edge^ anEdge, Macad::Occt::Geom_Curve^ ProjCurve, Macad::Occt::Pnt FirstP, Macad::Occt::Pnt LastP);
	static void ComputeProjVertexPresentation(Macad::Occt::Graphic3d_Structure^ aPres, Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::TopoDS_Vertex^ aVertex, Macad::Occt::Pnt ProjPoint, Macad::Occt::Quantity_NameOfColor aColor, double aWidth, Macad::Occt::Aspect_TypeOfMarker aProjTOM, Macad::Occt::Aspect_TypeOfLine aCallTOL);
	static void ComputeProjVertexPresentation(Macad::Occt::Graphic3d_Structure^ aPres, Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::TopoDS_Vertex^ aVertex, Macad::Occt::Pnt ProjPoint, Macad::Occt::Quantity_NameOfColor aColor, double aWidth, Macad::Occt::Aspect_TypeOfMarker aProjTOM);
	static void ComputeProjVertexPresentation(Macad::Occt::Graphic3d_Structure^ aPres, Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::TopoDS_Vertex^ aVertex, Macad::Occt::Pnt ProjPoint, Macad::Occt::Quantity_NameOfColor aColor, double aWidth);
	static void ComputeProjVertexPresentation(Macad::Occt::Graphic3d_Structure^ aPres, Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::TopoDS_Vertex^ aVertex, Macad::Occt::Pnt ProjPoint, Macad::Occt::Quantity_NameOfColor aColor);
	static void ComputeProjVertexPresentation(Macad::Occt::Graphic3d_Structure^ aPres, Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::TopoDS_Vertex^ aVertex, Macad::Occt::Pnt ProjPoint);
}; // class AIS

//---------------------------------------------------------------------
//  Class  AIS_DimensionOwner
//---------------------------------------------------------------------
public ref class AIS_DimensionOwner sealed : public Macad::Occt::SelectMgr_EntityOwner
{

#ifdef Include_AIS_DimensionOwner_h
public:
	Include_AIS_DimensionOwner_h
#endif

public:
	AIS_DimensionOwner(::AIS_DimensionOwner* nativeInstance)
		: Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
	{}

	AIS_DimensionOwner(::AIS_DimensionOwner& nativeInstance)
		: Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
	{}

	property ::AIS_DimensionOwner* NativeInstance
	{
		::AIS_DimensionOwner* get()
		{
			return static_cast<::AIS_DimensionOwner*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_DimensionOwner^ CreateDowncasted(::AIS_DimensionOwner* instance);

public:
	AIS_DimensionOwner(Macad::Occt::SelectMgr_SelectableObject^ theSelObject, Macad::Occt::AIS_DimensionSelectionMode theSelMode, int thePriority);
	AIS_DimensionOwner(Macad::Occt::SelectMgr_SelectableObject^ theSelObject, Macad::Occt::AIS_DimensionSelectionMode theSelMode);
	AIS_DimensionOwner(Macad::Occt::AIS_DimensionOwner^ parameter1);
	Macad::Occt::AIS_DimensionSelectionMode SelectionMode();
	/* Method skipped due to unknown mapping: void HilightWithColor(PrsMgr_PresentationManager thePM, Prs3d_Drawer theStyle, Standard_Integer theMode, ) */
	/* Method skipped due to unknown mapping: void HilightWithColor(PrsMgr_PresentationManager thePM, Prs3d_Drawer theStyle, Standard_Integer theMode, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean IsHilighted(PrsMgr_PresentationManager thePM, Standard_Integer theMode, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean IsHilighted(PrsMgr_PresentationManager thePM, Standard_Integer theMode, ) */
	/* Method skipped due to unknown mapping: void Unhilight(PrsMgr_PresentationManager thePM, Standard_Integer theMode, ) */
	/* Method skipped due to unknown mapping: void Unhilight(PrsMgr_PresentationManager thePM, Standard_Integer theMode, ) */
}; // class AIS_DimensionOwner

//---------------------------------------------------------------------
//  Class  AIS_InteractiveContext
//---------------------------------------------------------------------
public ref class AIS_InteractiveContext sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_AIS_InteractiveContext_h
public:
	Include_AIS_InteractiveContext_h
#endif

public:
	AIS_InteractiveContext(::AIS_InteractiveContext* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	AIS_InteractiveContext(::AIS_InteractiveContext& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::AIS_InteractiveContext* NativeInstance
	{
		::AIS_InteractiveContext* get()
		{
			return static_cast<::AIS_InteractiveContext*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_InteractiveContext^ CreateDowncasted(::AIS_InteractiveContext* instance);

public:
	AIS_InteractiveContext(Macad::Occt::V3d_Viewer^ MainViewer);
	AIS_InteractiveContext(Macad::Occt::AIS_InteractiveContext^ parameter1);
	Macad::Occt::AIS_DisplayStatus DisplayStatus(Macad::Occt::AIS_InteractiveObject^ anIobj);
	void Status(Macad::Occt::AIS_InteractiveObject^ anObj, Macad::Occt::TCollection_ExtendedString^ astatus);
	bool IsDisplayed(Macad::Occt::AIS_InteractiveObject^ anIobj);
	bool IsDisplayed(Macad::Occt::AIS_InteractiveObject^ aniobj, int aMode);
	void SetAutoActivateSelection(bool theIsAuto);
	bool GetAutoActivateSelection();
	void Display(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
	void Display(Macad::Occt::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer, Macad::Occt::AIS_DisplayStatus theDispStatus);
	void Display(Macad::Occt::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer);
	void Load(Macad::Occt::AIS_InteractiveObject^ theObj, int theSelectionMode);
	void Load(Macad::Occt::AIS_InteractiveObject^ theObj);
	void Display(Macad::Occt::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer, bool theToAllowDecomposition, Macad::Occt::AIS_DisplayStatus theDispStatus);
	void Display(Macad::Occt::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer, bool theToAllowDecomposition);
	void Load(Macad::Occt::AIS_InteractiveObject^ theObj, int theSelectionMode, bool parameter1);
	void Erase(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
	void EraseAll(bool theToUpdateViewer);
	void DisplayAll(bool theToUpdateViewer);
	void EraseSelected(bool theToUpdateViewer);
	void DisplaySelected(bool theToUpdateViewer);
	void ClearPrs(Macad::Occt::AIS_InteractiveObject^ theIObj, int theMode, bool theToUpdateViewer);
	void Remove(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
	void RemoveAll(bool theToUpdateViewer);
	void Redisplay(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer, bool theAllModes);
	void Redisplay(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
	void Redisplay(Macad::Occt::AIS_KindOfInteractive theTypeOfObject, int theSignature, bool theToUpdateViewer);
	void RecomputePrsOnly(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer, bool theAllModes);
	void RecomputePrsOnly(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
	void RecomputeSelectionOnly(Macad::Occt::AIS_InteractiveObject^ anIObj);
	void Update(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theUpdateViewer);
	Macad::Occt::Prs3d_Drawer^ HighlightStyle(Macad::Occt::Prs3d_TypeOfHighlight theStyleType);
	void SetHighlightStyle(Macad::Occt::Prs3d_TypeOfHighlight theStyleType, Macad::Occt::Prs3d_Drawer^ theStyle);
	Macad::Occt::Prs3d_Drawer^ HighlightStyle();
	void SetHighlightStyle(Macad::Occt::Prs3d_Drawer^ theStyle);
	Macad::Occt::Prs3d_Drawer^ SelectionStyle();
	void SetSelectionStyle(Macad::Occt::Prs3d_Drawer^ theStyle);
	bool HighlightStyle(Macad::Occt::AIS_InteractiveObject^ theObj, Macad::Occt::Prs3d_Drawer^ theStyle);
	bool HighlightStyle(Macad::Occt::SelectMgr_EntityOwner^ theOwner, Macad::Occt::Prs3d_Drawer^ theStyle);
	bool IsHilighted(Macad::Occt::AIS_InteractiveObject^ theObj);
	bool IsHilighted(Macad::Occt::SelectMgr_EntityOwner^ theOwner);
	void HilightWithColor(Macad::Occt::AIS_InteractiveObject^ theObj, Macad::Occt::Prs3d_Drawer^ theStyle, bool theToUpdateViewer);
	void Unhilight(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
	int DisplayPriority(Macad::Occt::AIS_InteractiveObject^ theIObj);
	void SetDisplayPriority(Macad::Occt::AIS_InteractiveObject^ theIObj, int thePriority);
	int GetZLayer(Macad::Occt::AIS_InteractiveObject^ theIObj);
	void SetZLayer(Macad::Occt::AIS_InteractiveObject^ theIObj, int theLayerId);
	void SetViewAffinity(Macad::Occt::AIS_InteractiveObject^ theIObj, Macad::Occt::V3d_View^ theView, bool theIsVisible);
	int DisplayMode();
	void SetDisplayMode(int theMode, bool theToUpdateViewer);
	void SetDisplayMode(Macad::Occt::AIS_InteractiveObject^ theIObj, int theMode, bool theToUpdateViewer);
	void UnsetDisplayMode(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
	void SetLocation(Macad::Occt::AIS_InteractiveObject^ theObject, Macad::Occt::TopLoc_Location^ theLocation);
	void ResetLocation(Macad::Occt::AIS_InteractiveObject^ theObject);
	bool HasLocation(Macad::Occt::AIS_InteractiveObject^ theObject);
	Macad::Occt::TopLoc_Location^ Location(Macad::Occt::AIS_InteractiveObject^ theObject);
	void SetTransformPersistence(Macad::Occt::AIS_InteractiveObject^ theObject, Macad::Occt::Graphic3d_TransformPers^ theTrsfPers);
	void SetTransformPersistence(Macad::Occt::AIS_InteractiveObject^ theObj, Macad::Occt::Graphic3d_TransModeFlags% theFlag, Macad::Occt::Pnt thePoint);
	void SetTransformPersistence(Macad::Occt::AIS_InteractiveObject^ theObj, Macad::Occt::Graphic3d_TransModeFlags% theFlag);
	void SetPixelTolerance(int thePrecision);
	void SetPixelTolerance();
	int PixelTolerance();
	void SetSelectionSensitivity(Macad::Occt::AIS_InteractiveObject^ theObject, int theMode, int theNewSensitivity);
	Macad::Occt::V3d_View^ LastActiveView();
	Macad::Occt::AIS_StatusOfDetection MoveTo(int theXPix, int theYPix, Macad::Occt::V3d_View^ theView, bool theToRedrawOnUpdate);
	bool ClearDetected(bool theToRedrawImmediate);
	bool ClearDetected();
	bool HasDetected();
	Macad::Occt::SelectMgr_EntityOwner^ DetectedOwner();
	Macad::Occt::AIS_InteractiveObject^ DetectedInteractive();
	bool HasDetectedShape();
	Macad::Occt::TopoDS_Shape^ DetectedShape();
	bool HasNextDetected();
	int HilightNextDetected(Macad::Occt::V3d_View^ theView, bool theToRedrawImmediate);
	int HilightNextDetected(Macad::Occt::V3d_View^ theView);
	int HilightPreviousDetected(Macad::Occt::V3d_View^ theView, bool theToRedrawImmediate);
	int HilightPreviousDetected(Macad::Occt::V3d_View^ theView);
	void InitDetected();
	bool MoreDetected();
	void NextDetected();
	Macad::Occt::SelectMgr_EntityOwner^ DetectedCurrentOwner();
	void SetSelectedAspect(Macad::Occt::Prs3d_BasicAspect^ theAspect, bool theToUpdateViewer);
	Macad::Occt::AIS_StatusOfPick AddSelect(Macad::Occt::SelectMgr_EntityOwner^ theObject);
	Macad::Occt::AIS_StatusOfPick AddSelect(Macad::Occt::AIS_InteractiveObject^ theObject);
	Macad::Occt::AIS_StatusOfPick Select(int theXPMin, int theYPMin, int theXPMax, int theYPMax, Macad::Occt::V3d_View^ theView, bool theToUpdateViewer);
	Macad::Occt::AIS_StatusOfPick Select(Macad::Occt::TColgp_Array1OfPnt2d^ thePolyline, Macad::Occt::V3d_View^ theView, bool theToUpdateViewer);
	Macad::Occt::AIS_StatusOfPick Select(bool theToUpdateViewer);
	Macad::Occt::AIS_StatusOfPick ShiftSelect(bool theToUpdateViewer);
	Macad::Occt::AIS_StatusOfPick ShiftSelect(Macad::Occt::TColgp_Array1OfPnt2d^ thePolyline, Macad::Occt::V3d_View^ theView, bool theToUpdateViewer);
	Macad::Occt::AIS_StatusOfPick ShiftSelect(int theXPMin, int theYPMin, int theXPMax, int theYPMax, Macad::Occt::V3d_View^ theView, bool theToUpdateViewer);
	Macad::Occt::Bnd_Box^ BoundingBoxOfSelection();
	void FitSelected(Macad::Occt::V3d_View^ theView, double theMargin, bool theToUpdate);
	void FitSelected(Macad::Occt::V3d_View^ theView);
	bool ToHilightSelected();
	void SetToHilightSelected(bool toHilight);
	bool AutomaticHilight();
	void SetAutomaticHilight(bool theStatus);
	void SetSelected(Macad::Occt::SelectMgr_EntityOwner^ theOwners, bool theToUpdateViewer);
	void SetSelected(Macad::Occt::AIS_InteractiveObject^ theObject, bool theToUpdateViewer);
	void AddOrRemoveSelected(Macad::Occt::AIS_InteractiveObject^ theObject, bool theToUpdateViewer);
	bool SetSelectedState(Macad::Occt::SelectMgr_EntityOwner^ theOwner, bool theIsSelected);
	void HilightSelected(bool theToUpdateViewer);
	void UnhilightSelected(bool theToUpdateViewer);
	void UpdateSelected(bool theToUpdateViewer);
	void ClearSelected(bool theToUpdateViewer);
	void AddOrRemoveSelected(Macad::Occt::SelectMgr_EntityOwner^ theOwner, bool theToUpdateViewer);
	bool IsSelected(Macad::Occt::SelectMgr_EntityOwner^ theOwner);
	bool IsSelected(Macad::Occt::AIS_InteractiveObject^ theObj);
	Macad::Occt::AIS_InteractiveObject^ FirstSelectedObject();
	int NbSelected();
	void InitSelected();
	bool MoreSelected();
	void NextSelected();
	Macad::Occt::SelectMgr_EntityOwner^ SelectedOwner();
	Macad::Occt::AIS_InteractiveObject^ SelectedInteractive();
	bool HasSelectedShape();
	Macad::Occt::TopoDS_Shape^ SelectedShape();
	bool HasApplicative();
	Macad::Occt::Standard_Transient^ Applicative();
	bool BeginImmediateDraw();
	bool ImmediateAdd(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode);
	bool ImmediateAdd(Macad::Occt::AIS_InteractiveObject^ theObj);
	bool EndImmediateDraw(Macad::Occt::V3d_View^ theView);
	bool EndImmediateDraw();
	bool IsImmediateModeOn();
	void RedrawImmediate(Macad::Occt::V3d_Viewer^ theViewer);
	void SetSelectionModeActive(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode, bool theToActivate, Macad::Occt::AIS_SelectionModesConcurrency theConcurrency, bool theIsForce);
	void SetSelectionModeActive(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode, bool theToActivate, Macad::Occt::AIS_SelectionModesConcurrency theConcurrency);
	void SetSelectionModeActive(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode, bool theToActivate);
	void Activate(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode, bool theIsForce);
	void Activate(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode);
	void Activate(Macad::Occt::AIS_InteractiveObject^ theObj);
	void Activate(int theMode, bool theIsForce);
	void Activate(int theMode);
	void Deactivate(Macad::Occt::AIS_InteractiveObject^ theObj);
	void Deactivate(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode);
	void Deactivate(int theMode);
	void Deactivate();
	void ActivatedModes(Macad::Occt::AIS_InteractiveObject^ anIobj, Macad::Occt::TColStd_ListOfInteger^ theList);
	Macad::Occt::SelectMgr_ListOfFilter^ Filters();
	void AddFilter(Macad::Occt::SelectMgr_Filter^ theFilter);
	void RemoveFilter(Macad::Occt::SelectMgr_Filter^ theFilter);
	void RemoveFilters();
	Macad::Occt::SelectMgr_PickingStrategy PickingStrategy();
	void SetPickingStrategy(Macad::Occt::SelectMgr_PickingStrategy theStrategy);
	Macad::Occt::Prs3d_Drawer^ DefaultDrawer();
	Macad::Occt::V3d_Viewer^ CurrentViewer();
	Macad::Occt::SelectMgr_SelectionManager^ SelectionManager();
	/* Method skipped due to unknown mapping: PrsMgr_PresentationManager MainPrsMgr() */
	Macad::Occt::StdSelect_ViewerSelector3d^ MainSelector();
	void UpdateCurrentViewer();
	void DisplayedObjects(Macad::Occt::AIS_ListOfInteractive^ aListOfIO);
	void DisplayedObjects(Macad::Occt::AIS_KindOfInteractive theWhichKind, int theWhichSignature, Macad::Occt::AIS_ListOfInteractive^ theListOfIO);
	void ErasedObjects(Macad::Occt::AIS_ListOfInteractive^ theListOfIO);
	void ErasedObjects(Macad::Occt::AIS_KindOfInteractive theWhichKind, int theWhichSignature, Macad::Occt::AIS_ListOfInteractive^ theListOfIO);
	void ObjectsByDisplayStatus(Macad::Occt::AIS_DisplayStatus theStatus, Macad::Occt::AIS_ListOfInteractive^ theListOfIO);
	void ObjectsByDisplayStatus(Macad::Occt::AIS_KindOfInteractive WhichKind, int WhichSignature, Macad::Occt::AIS_DisplayStatus theStatus, Macad::Occt::AIS_ListOfInteractive^ theListOfIO);
	void ObjectsInside(Macad::Occt::AIS_ListOfInteractive^ aListOfIO, Macad::Occt::AIS_KindOfInteractive WhichKind, int WhichSignature);
	void ObjectsInside(Macad::Occt::AIS_ListOfInteractive^ aListOfIO, Macad::Occt::AIS_KindOfInteractive WhichKind);
	void ObjectsInside(Macad::Occt::AIS_ListOfInteractive^ aListOfIO);
	void RebuildSelectionStructs();
	void Disconnect(Macad::Occt::AIS_InteractiveObject^ theAssembly, Macad::Occt::AIS_InteractiveObject^ theObjToDisconnect);
	void Disconnect(Macad::Occt::AIS_InteractiveObject^ theAssembly);
	void ObjectsForView(Macad::Occt::AIS_ListOfInteractive^ theListOfIO, Macad::Occt::V3d_View^ theView, bool theIsVisibleInView, Macad::Occt::AIS_DisplayStatus theStatus);
	void ObjectsForView(Macad::Occt::AIS_ListOfInteractive^ theListOfIO, Macad::Occt::V3d_View^ theView, bool theIsVisibleInView);
	int PurgeDisplay();
	Macad::Occt::Pnt GravityPoint(Macad::Occt::V3d_View^ theView);
	void DisplayActiveSensitive(Macad::Occt::V3d_View^ aView);
	void ClearActiveSensitive(Macad::Occt::V3d_View^ aView);
	void DisplayActiveSensitive(Macad::Occt::AIS_InteractiveObject^ anObject, Macad::Occt::V3d_View^ aView);
	void SetLocalAttributes(Macad::Occt::AIS_InteractiveObject^ theIObj, Macad::Occt::Prs3d_Drawer^ theDrawer, bool theToUpdateViewer);
	void UnsetLocalAttributes(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
	void SetCurrentFacingModel(Macad::Occt::AIS_InteractiveObject^ aniobj, Macad::Occt::Aspect_TypeOfFacingModel aModel);
	void SetCurrentFacingModel(Macad::Occt::AIS_InteractiveObject^ aniobj);
	bool HasColor(Macad::Occt::AIS_InteractiveObject^ aniobj);
	void Color(Macad::Occt::AIS_InteractiveObject^ aniobj, Macad::Occt::Quantity_Color^ acolor);
	void SetColor(Macad::Occt::AIS_InteractiveObject^ theIObj, Macad::Occt::Quantity_Color^ theColor, bool theToUpdateViewer);
	void UnsetColor(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
	double Width(Macad::Occt::AIS_InteractiveObject^ aniobj);
	void SetWidth(Macad::Occt::AIS_InteractiveObject^ theIObj, double theValue, bool theToUpdateViewer);
	void UnsetWidth(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
	void SetMaterial(Macad::Occt::AIS_InteractiveObject^ theIObj, Macad::Occt::Graphic3d_MaterialAspect^ theMaterial, bool theToUpdateViewer);
	void UnsetMaterial(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
	void SetTransparency(Macad::Occt::AIS_InteractiveObject^ theIObj, double theValue, bool theToUpdateViewer);
	void UnsetTransparency(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
	void SetPolygonOffsets(Macad::Occt::AIS_InteractiveObject^ theIObj, int theMode, float theFactor, float theUnits, bool theToUpdateViewer);
	bool HasPolygonOffsets(Macad::Occt::AIS_InteractiveObject^ anObj);
	void PolygonOffsets(Macad::Occt::AIS_InteractiveObject^ anObj, int% aMode, float% aFactor, float% aUnits);
	void SetTrihedronSize(double theSize, bool theToUpdateViewer);
	double TrihedronSize();
	void SetPlaneSize(double theSizeX, double theSizeY, bool theToUpdateViewer);
	void SetPlaneSize(double theSize, bool theToUpdateViewer);
	bool PlaneSize(double% XSize, double% YSize);
	void SetDeviationCoefficient(Macad::Occt::AIS_InteractiveObject^ theIObj, double theCoefficient, bool theToUpdateViewer);
	void SetDeviationAngle(Macad::Occt::AIS_InteractiveObject^ theIObj, double theAngle, bool theToUpdateViewer);
	void SetAngleAndDeviation(Macad::Occt::AIS_InteractiveObject^ theIObj, double theAngle, bool theToUpdateViewer);
	void SetHLRDeviationCoefficient(Macad::Occt::AIS_InteractiveObject^ theIObj, double theCoefficient, bool theToUpdateViewer);
	void SetHLRDeviationAngle(Macad::Occt::AIS_InteractiveObject^ theIObj, double theAngle, bool theToUpdateViewer);
	void SetHLRAngleAndDeviation(Macad::Occt::AIS_InteractiveObject^ theIObj, double theAngle, bool theToUpdateViewer);
	void SetDeviationCoefficient(double theCoefficient);
	double DeviationCoefficient();
	void SetDeviationAngle(double anAngle);
	double DeviationAngle();
	void SetHLRDeviationCoefficient(double aCoefficient);
	double HLRDeviationCoefficient();
	void SetHLRAngle(double theAngle);
	double HLRAngle();
	void SetHLRAngleAndDeviation(double theAngle);
	Macad::Occt::Prs3d_LineAspect^ HiddenLineAspect();
	void SetHiddenLineAspect(Macad::Occt::Prs3d_LineAspect^ anAspect);
	bool DrawHiddenLine();
	void EnableDrawHiddenLine();
	void DisableDrawHiddenLine();
	void SetIsoNumber(int NbIsos, Macad::Occt::AIS_TypeOfIso WhichIsos);
	void SetIsoNumber(int NbIsos);
	int IsoNumber(Macad::Occt::AIS_TypeOfIso WhichIsos);
	int IsoNumber();
	void IsoOnPlane(bool SwitchOn);
	bool IsoOnPlane();
	void IsoOnTriangulation(bool theIsEnabled, Macad::Occt::AIS_InteractiveObject^ theObject);
	void IsoOnTriangulation(bool theToSwitchOn);
	bool IsoOnTriangulation();
	void SetCurrentObject(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
	void AddOrRemoveCurrentObject(Macad::Occt::AIS_InteractiveObject^ theObj, bool theIsToUpdateViewer);
	void UpdateCurrent();
	bool IsCurrent(Macad::Occt::AIS_InteractiveObject^ theObject);
	void InitCurrent();
	bool MoreCurrent();
	void NextCurrent();
	Macad::Occt::AIS_InteractiveObject^ Current();
	int NbCurrents();
	void HilightCurrents(bool theToUpdateViewer);
	void UnhilightCurrents(bool theToUpdateViewer);
	void ClearCurrents(bool theToUpdateViewer);
	Macad::Occt::TopoDS_Shape^ DetectedCurrentShape();
	Macad::Occt::AIS_InteractiveObject^ DetectedCurrentObject();
	Macad::Occt::Quantity_Color^ SubIntensityColor();
	void SetSubIntensityColor(Macad::Occt::Quantity_Color^ theColor);
	void SubIntensityOn(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
	void SubIntensityOff(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
	Macad::Occt::AIS_Selection^ Selection();
	void SetSelection(Macad::Occt::AIS_Selection^ theSelection);
}; // class AIS_InteractiveContext

//---------------------------------------------------------------------
//  Class  AIS_InteractiveObject
//---------------------------------------------------------------------
public ref class AIS_InteractiveObject : public Macad::Occt::SelectMgr_SelectableObject
{

#ifdef Include_AIS_InteractiveObject_h
public:
	Include_AIS_InteractiveObject_h
#endif

protected:
	AIS_InteractiveObject(InitMode init)
		: Macad::Occt::SelectMgr_SelectableObject( init )
	{}

public:
	AIS_InteractiveObject(::AIS_InteractiveObject* nativeInstance)
		: Macad::Occt::SelectMgr_SelectableObject( nativeInstance )
	{}

	AIS_InteractiveObject(::AIS_InteractiveObject& nativeInstance)
		: Macad::Occt::SelectMgr_SelectableObject( nativeInstance )
	{}

	property ::AIS_InteractiveObject* NativeInstance
	{
		::AIS_InteractiveObject* get()
		{
			return static_cast<::AIS_InteractiveObject*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_InteractiveObject^ CreateDowncasted(::AIS_InteractiveObject* instance);

public:
	AIS_InteractiveObject(Macad::Occt::AIS_InteractiveObject^ parameter1);
	Macad::Occt::AIS_KindOfInteractive Type();
	int Signature();
	void Redisplay(bool AllModes);
	void Redisplay();
	bool HasInteractiveContext();
	Macad::Occt::AIS_InteractiveContext^ InteractiveContext();
	void SetContext(Macad::Occt::AIS_InteractiveContext^ aCtx);
	bool HasOwner();
	Macad::Occt::Standard_Transient^ GetOwner();
	void SetOwner(Macad::Occt::Standard_Transient^ theApplicativeEntity);
	void ClearOwner();
	Macad::Occt::AIS_InteractiveContext^ GetContext();
	bool HasPresentation();
	Macad::Occt::Graphic3d_Structure^ Presentation();
	void SetAspect(Macad::Occt::Prs3d_BasicAspect^ anAspect);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class AIS_InteractiveObject

//---------------------------------------------------------------------
//  Class  AIS_Dimension
//---------------------------------------------------------------------
public ref class AIS_Dimension : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_Dimension_h
public:
	Include_AIS_Dimension_h
#endif

protected:
	AIS_Dimension(InitMode init)
		: Macad::Occt::AIS_InteractiveObject( init )
	{}

public:
	AIS_Dimension(::AIS_Dimension* nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	AIS_Dimension(::AIS_Dimension& nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	property ::AIS_Dimension* NativeInstance
	{
		::AIS_Dimension* get()
		{
			return static_cast<::AIS_Dimension*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_Dimension^ CreateDowncasted(::AIS_Dimension* instance);

public:
	//---------------------------------------------------------------------
	//  Enum  GeometryType
	//---------------------------------------------------------------------
	enum class GeometryType
	{
		GeometryType_UndefShapes = 0,
		GeometryType_Edge = 1,
		GeometryType_Face = 2,
		GeometryType_Points = 3,
		GeometryType_Edges = 4,
		GeometryType_Faces = 5,
		GeometryType_EdgeFace = 6,
		GeometryType_EdgeVertex = 7
	}; // enum  class GeometryType

	//---------------------------------------------------------------------
	//  Enum  LabelPosition
	//---------------------------------------------------------------------
	enum class LabelPosition
	{
		LabelPosition_None = 0,
		LabelPosition_Left = 1,
		LabelPosition_Right = 2,
		LabelPosition_HCenter = 4,
		LabelPosition_HMask = 7,
		LabelPosition_Above = 16,
		LabelPosition_Below = 32,
		LabelPosition_VCenter = 64,
		LabelPosition_VMask = 112
	}; // enum  class LabelPosition

	//---------------------------------------------------------------------
	//  Enum  ValueType
	//---------------------------------------------------------------------
	enum class ValueType
	{
		ValueType_Computed = 0,
		ValueType_CustomReal = 1,
		ValueType_CustomText = 2
	}; // enum  class ValueType

	//---------------------------------------------------------------------
	//  Enum  ComputeMode
	//---------------------------------------------------------------------
	enum class ComputeMode
	{
		ComputeMode_All = 0,
		ComputeMode_Line = 1,
		ComputeMode_Text = 2
	}; // enum  class ComputeMode

	AIS_Dimension(Macad::Occt::AIS_KindOfDimension theType);
	AIS_Dimension(Macad::Occt::AIS_Dimension^ parameter1);
	double GetValue();
	void SetComputedValue();
	void SetCustomValue(double theValue);
	void SetCustomValue(Macad::Occt::TCollection_ExtendedString^ theValue);
	Macad::Occt::TCollection_ExtendedString^ GetCustomValue();
	Macad::Occt::Pln GetPlane();
	int GetGeometryType();
	void SetCustomPlane(Macad::Occt::Pln thePlane);
	void UnsetCustomPlane();
	bool IsTextPositionCustom();
	void SetTextPosition(Macad::Occt::Pnt parameter1);
	Macad::Occt::Pnt GetTextPosition();
	Macad::Occt::Prs3d_DimensionAspect^ DimensionAspect();
	void SetDimensionAspect(Macad::Occt::Prs3d_DimensionAspect^ theDimensionAspect);
	Macad::Occt::AIS_KindOfDimension KindOfDimension();
	Macad::Occt::AIS_KindOfInteractive Type();
	bool AcceptDisplayMode(int theMode);
	Macad::Occt::AIS_DisplaySpecialSymbol DisplaySpecialSymbol();
	void SetDisplaySpecialSymbol(Macad::Occt::AIS_DisplaySpecialSymbol theDisplaySpecSymbol);
	char16_t SpecialSymbol();
	void SetSpecialSymbol(char16_t theSpecialSymbol);
	Macad::Occt::TCollection_AsciiString^ GetDisplayUnits();
	Macad::Occt::TCollection_AsciiString^ GetModelUnits();
	void SetDisplayUnits(Macad::Occt::TCollection_AsciiString^ parameter1);
	void SetModelUnits(Macad::Occt::TCollection_AsciiString^ parameter1);
	void UnsetFixedTextPosition();
	double SelToleranceForText2d();
	void SetSelToleranceForText2d(double theTol);
	double GetFlyout();
	void SetFlyout(double theFlyout);
	bool IsValid();
}; // class AIS_Dimension

//---------------------------------------------------------------------
//  Class  AIS_AngleDimension
//---------------------------------------------------------------------
public ref class AIS_AngleDimension sealed : public Macad::Occt::AIS_Dimension
{

#ifdef Include_AIS_AngleDimension_h
public:
	Include_AIS_AngleDimension_h
#endif

public:
	AIS_AngleDimension(::AIS_AngleDimension* nativeInstance)
		: Macad::Occt::AIS_Dimension( nativeInstance )
	{}

	AIS_AngleDimension(::AIS_AngleDimension& nativeInstance)
		: Macad::Occt::AIS_Dimension( nativeInstance )
	{}

	property ::AIS_AngleDimension* NativeInstance
	{
		::AIS_AngleDimension* get()
		{
			return static_cast<::AIS_AngleDimension*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_AngleDimension^ CreateDowncasted(::AIS_AngleDimension* instance);

public:
	AIS_AngleDimension(Macad::Occt::TopoDS_Edge^ theFirstEdge, Macad::Occt::TopoDS_Edge^ theSecondEdge);
	AIS_AngleDimension(Macad::Occt::Pnt theFirstPoint, Macad::Occt::Pnt theSecondPoint, Macad::Occt::Pnt theThirdPoint);
	AIS_AngleDimension(Macad::Occt::TopoDS_Vertex^ theFirstVertex, Macad::Occt::TopoDS_Vertex^ theSecondVertex, Macad::Occt::TopoDS_Vertex^ theThirdVertex);
	AIS_AngleDimension(Macad::Occt::TopoDS_Face^ theCone);
	AIS_AngleDimension(Macad::Occt::TopoDS_Face^ theFirstFace, Macad::Occt::TopoDS_Face^ theSecondFace);
	AIS_AngleDimension(Macad::Occt::TopoDS_Face^ theFirstFace, Macad::Occt::TopoDS_Face^ theSecondFace, Macad::Occt::Pnt thePoint);
	AIS_AngleDimension(Macad::Occt::AIS_AngleDimension^ parameter1);
	Macad::Occt::Pnt FirstPoint();
	Macad::Occt::Pnt SecondPoint();
	Macad::Occt::Pnt CenterPoint();
	Macad::Occt::TopoDS_Shape^ FirstShape();
	Macad::Occt::TopoDS_Shape^ SecondShape();
	Macad::Occt::TopoDS_Shape^ ThirdShape();
	void SetMeasuredGeometry(Macad::Occt::TopoDS_Edge^ theFirstEdge, Macad::Occt::TopoDS_Edge^ theSecondEdge);
	void SetMeasuredGeometry(Macad::Occt::Pnt theFirstPoint, Macad::Occt::Pnt theSecondPoint, Macad::Occt::Pnt theThridPoint);
	void SetMeasuredGeometry(Macad::Occt::TopoDS_Vertex^ theFirstVertex, Macad::Occt::TopoDS_Vertex^ theSecondVertex, Macad::Occt::TopoDS_Vertex^ theThirdVertex);
	void SetMeasuredGeometry(Macad::Occt::TopoDS_Face^ theCone);
	void SetMeasuredGeometry(Macad::Occt::TopoDS_Face^ theFirstFace, Macad::Occt::TopoDS_Face^ theSecondFace);
	void SetMeasuredGeometry(Macad::Occt::TopoDS_Face^ theFirstFace, Macad::Occt::TopoDS_Face^ theSecondFace, Macad::Occt::Pnt thePoint);
	Macad::Occt::TCollection_AsciiString^ GetDisplayUnits();
	Macad::Occt::TCollection_AsciiString^ GetModelUnits();
	void SetDisplayUnits(Macad::Occt::TCollection_AsciiString^ theUnits);
	void SetModelUnits(Macad::Occt::TCollection_AsciiString^ theUnits);
	void SetTextPosition(Macad::Occt::Pnt theTextPos);
	Macad::Occt::Pnt GetTextPosition();
	void SetType(Macad::Occt::AIS_TypeOfAngle theType);
	Macad::Occt::AIS_TypeOfAngle GetTypeOcc();
	void SetArrowsVisibility(Macad::Occt::AIS_TypeOfAngleArrowVisibility% theType);
	Macad::Occt::AIS_TypeOfAngleArrowVisibility GetArrowsVisibility();
}; // class AIS_AngleDimension

//---------------------------------------------------------------------
//  Class  AIS_Animation
//---------------------------------------------------------------------
public ref class AIS_Animation : public Macad::Occt::Standard_Transient
{

#ifdef Include_AIS_Animation_h
public:
	Include_AIS_Animation_h
#endif

protected:
	AIS_Animation(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	AIS_Animation(::AIS_Animation* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	AIS_Animation(::AIS_Animation& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::AIS_Animation* NativeInstance
	{
		::AIS_Animation* get()
		{
			return static_cast<::AIS_Animation*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_Animation^ CreateDowncasted(::AIS_Animation* instance);

public:
	//---------------------------------------------------------------------
	//  Enum  AnimationState
	//---------------------------------------------------------------------
	enum class AnimationState
	{
		AnimationState_Started = 0,
		AnimationState_Stopped = 1,
		AnimationState_Paused = 2
	}; // enum  class AnimationState

	AIS_Animation(Macad::Occt::TCollection_AsciiString^ theAnimationName);
	AIS_Animation(Macad::Occt::AIS_Animation^ parameter1);
	Macad::Occt::TCollection_AsciiString^ Name();
	double StartPts();
	void SetStartPts(double thePtsStart);
	double Duration();
	void UpdateTotalDuration();
	bool HasOwnDuration();
	double OwnDuration();
	void SetOwnDuration(double theDuration);
	void Add(Macad::Occt::AIS_Animation^ theAnimation);
	void Clear();
	Macad::Occt::AIS_Animation^ Find(Macad::Occt::TCollection_AsciiString^ theAnimationName);
	bool Remove(Macad::Occt::AIS_Animation^ theAnimation);
	bool Replace(Macad::Occt::AIS_Animation^ theAnimationOld, Macad::Occt::AIS_Animation^ theAnimationNew);
	void CopyFrom(Macad::Occt::AIS_Animation^ theOther);
	/* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<AIS_Animation> > Children() */
	void StartTimer(double theStartPts, double thePlaySpeed, bool theToUpdate, bool theToStopTimer);
	void StartTimer(double theStartPts, double thePlaySpeed, bool theToUpdate);
	double UpdateTimer();
	double ElapsedTime();
	void Start(bool theToUpdate);
	void Pause();
	void Stop();
	bool IsStopped();
	bool Update(double thePts);
}; // class AIS_Animation

//---------------------------------------------------------------------
//  Class  AIS_AnimationCamera
//---------------------------------------------------------------------
public ref class AIS_AnimationCamera sealed : public Macad::Occt::AIS_Animation
{

#ifdef Include_AIS_AnimationCamera_h
public:
	Include_AIS_AnimationCamera_h
#endif

public:
	AIS_AnimationCamera(::AIS_AnimationCamera* nativeInstance)
		: Macad::Occt::AIS_Animation( nativeInstance )
	{}

	AIS_AnimationCamera(::AIS_AnimationCamera& nativeInstance)
		: Macad::Occt::AIS_Animation( nativeInstance )
	{}

	property ::AIS_AnimationCamera* NativeInstance
	{
		::AIS_AnimationCamera* get()
		{
			return static_cast<::AIS_AnimationCamera*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_AnimationCamera^ CreateDowncasted(::AIS_AnimationCamera* instance);

public:
	AIS_AnimationCamera(Macad::Occt::TCollection_AsciiString^ theAnimationName, Macad::Occt::V3d_View^ theView);
	AIS_AnimationCamera(Macad::Occt::AIS_AnimationCamera^ parameter1);
	Macad::Occt::V3d_View^ View();
	void SetView(Macad::Occt::V3d_View^ theView);
	Macad::Occt::Graphic3d_Camera^ CameraStart();
	void SetCameraStart(Macad::Occt::Graphic3d_Camera^ theCameraStart);
	Macad::Occt::Graphic3d_Camera^ CameraEnd();
	void SetCameraEnd(Macad::Occt::Graphic3d_Camera^ theCameraEnd);
}; // class AIS_AnimationCamera

//---------------------------------------------------------------------
//  Class  AIS_GlobalStatus
//---------------------------------------------------------------------
public ref class AIS_GlobalStatus sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_AIS_GlobalStatus_h
public:
	Include_AIS_GlobalStatus_h
#endif

public:
	AIS_GlobalStatus(::AIS_GlobalStatus* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	AIS_GlobalStatus(::AIS_GlobalStatus& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::AIS_GlobalStatus* NativeInstance
	{
		::AIS_GlobalStatus* get()
		{
			return static_cast<::AIS_GlobalStatus*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_GlobalStatus^ CreateDowncasted(::AIS_GlobalStatus* instance);

public:
	AIS_GlobalStatus();
	AIS_GlobalStatus(Macad::Occt::AIS_DisplayStatus aStat, int aDispMode, int aSelMode, bool ishilighted, int aLayerIndex);
	AIS_GlobalStatus(Macad::Occt::AIS_DisplayStatus aStat, int aDispMode, int aSelMode, bool ishilighted);
	AIS_GlobalStatus(Macad::Occt::AIS_DisplayStatus aStat, int aDispMode, int aSelMode);
	AIS_GlobalStatus(Macad::Occt::AIS_GlobalStatus^ parameter1);
	void SetGraphicStatus(Macad::Occt::AIS_DisplayStatus theStatus);
	void AddSelectionMode(int theMode);
	void SetDisplayMode(int theMode);
	int DisplayMode();
	void SetLayerIndex(int theIndex);
	void SetHilightStatus(bool theStatus);
	void SetHilightStyle(Macad::Occt::Prs3d_Drawer^ theStyle);
	Macad::Occt::Prs3d_Drawer^ HilightStyle();
	bool IsSubIntensityOn();
	void SubIntensityOn();
	void SubIntensityOff();
	void RemoveSelectionMode(int aMode);
	void ClearSelectionModes();
	Macad::Occt::AIS_DisplayStatus GraphicStatus();
	Macad::Occt::TColStd_ListOfInteger^ SelectionModes();
	bool IsHilighted();
	bool IsSModeIn(int aMode);
	int GetLayerIndex();
}; // class AIS_GlobalStatus

//---------------------------------------------------------------------
//  Class  AIS_Selection
//---------------------------------------------------------------------
public ref class AIS_Selection sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_AIS_Selection_h
public:
	Include_AIS_Selection_h
#endif

public:
	AIS_Selection(::AIS_Selection* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	AIS_Selection(::AIS_Selection& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::AIS_Selection* NativeInstance
	{
		::AIS_Selection* get()
		{
			return static_cast<::AIS_Selection*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_Selection^ CreateDowncasted(::AIS_Selection* instance);

public:
	AIS_Selection();
	AIS_Selection(Macad::Occt::AIS_Selection^ parameter1);
	void Clear();
	Macad::Occt::AIS_SelectStatus Select(Macad::Occt::SelectMgr_EntityOwner^ theObject);
	Macad::Occt::AIS_SelectStatus AddSelect(Macad::Occt::SelectMgr_EntityOwner^ theObject);
	void ClearAndSelect(Macad::Occt::SelectMgr_EntityOwner^ theObject);
	bool IsSelected(Macad::Occt::SelectMgr_EntityOwner^ theObject);
	Macad::Occt::AIS_NListOfEntityOwner^ Objects();
	int Extent();
	bool IsEmpty();
	void Init();
	bool More();
	void Next();
	Macad::Occt::SelectMgr_EntityOwner^ Value();
}; // class AIS_Selection

//---------------------------------------------------------------------
//  Class  AIS_AnimationObject
//---------------------------------------------------------------------
public ref class AIS_AnimationObject sealed : public Macad::Occt::AIS_Animation
{

#ifdef Include_AIS_AnimationObject_h
public:
	Include_AIS_AnimationObject_h
#endif

public:
	AIS_AnimationObject(::AIS_AnimationObject* nativeInstance)
		: Macad::Occt::AIS_Animation( nativeInstance )
	{}

	AIS_AnimationObject(::AIS_AnimationObject& nativeInstance)
		: Macad::Occt::AIS_Animation( nativeInstance )
	{}

	property ::AIS_AnimationObject* NativeInstance
	{
		::AIS_AnimationObject* get()
		{
			return static_cast<::AIS_AnimationObject*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_AnimationObject^ CreateDowncasted(::AIS_AnimationObject* instance);

public:
	AIS_AnimationObject(Macad::Occt::TCollection_AsciiString^ theAnimationName, Macad::Occt::AIS_InteractiveContext^ theContext, Macad::Occt::AIS_InteractiveObject^ theObject, Macad::Occt::Trsf theTrsfStart, Macad::Occt::Trsf theTrsfEnd);
	AIS_AnimationObject(Macad::Occt::AIS_AnimationObject^ parameter1);
}; // class AIS_AnimationObject

//---------------------------------------------------------------------
//  Class  AIS_AttributeFilter
//---------------------------------------------------------------------
public ref class AIS_AttributeFilter sealed : public Macad::Occt::SelectMgr_Filter
{

#ifdef Include_AIS_AttributeFilter_h
public:
	Include_AIS_AttributeFilter_h
#endif

public:
	AIS_AttributeFilter(::AIS_AttributeFilter* nativeInstance)
		: Macad::Occt::SelectMgr_Filter( nativeInstance )
	{}

	AIS_AttributeFilter(::AIS_AttributeFilter& nativeInstance)
		: Macad::Occt::SelectMgr_Filter( nativeInstance )
	{}

	property ::AIS_AttributeFilter* NativeInstance
	{
		::AIS_AttributeFilter* get()
		{
			return static_cast<::AIS_AttributeFilter*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_AttributeFilter^ CreateDowncasted(::AIS_AttributeFilter* instance);

public:
	AIS_AttributeFilter();
	AIS_AttributeFilter(Macad::Occt::Quantity_NameOfColor aCol);
	AIS_AttributeFilter(double aWidth);
	AIS_AttributeFilter(Macad::Occt::AIS_AttributeFilter^ parameter1);
	bool HasColor();
	bool HasWidth();
	void SetColor(Macad::Occt::Quantity_NameOfColor aCol);
	void SetWidth(double aWidth);
	void UnsetColor();
	void UnsetWidth();
	bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ anObj);
}; // class AIS_AttributeFilter

//---------------------------------------------------------------------
//  Class  AIS_Axis
//---------------------------------------------------------------------
public ref class AIS_Axis sealed : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_Axis_h
public:
	Include_AIS_Axis_h
#endif

public:
	AIS_Axis(::AIS_Axis* nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	AIS_Axis(::AIS_Axis& nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	property ::AIS_Axis* NativeInstance
	{
		::AIS_Axis* get()
		{
			return static_cast<::AIS_Axis*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_Axis^ CreateDowncasted(::AIS_Axis* instance);

public:
	AIS_Axis(Macad::Occt::Geom_Line^ aComponent);
	AIS_Axis(Macad::Occt::Geom_Axis2Placement^ aComponent, Macad::Occt::AIS_TypeOfAxis anAxisType);
	AIS_Axis(Macad::Occt::Geom_Axis1Placement^ anAxis);
	AIS_Axis(Macad::Occt::AIS_Axis^ parameter1);
	Macad::Occt::Geom_Line^ Component();
	void SetComponent(Macad::Occt::Geom_Line^ aComponent);
	Macad::Occt::Geom_Axis2Placement^ Axis2Placement();
	void SetAxis2Placement(Macad::Occt::Geom_Axis2Placement^ aComponent, Macad::Occt::AIS_TypeOfAxis anAxisType);
	void SetAxis1Placement(Macad::Occt::Geom_Axis1Placement^ anAxis);
	Macad::Occt::AIS_TypeOfAxis TypeOfAxis();
	void SetTypeOfAxis(Macad::Occt::AIS_TypeOfAxis theTypeAxis);
	bool IsXYZAxis();
	bool AcceptDisplayMode(int aMode);
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
	int Signature();
	Macad::Occt::AIS_KindOfInteractive Type();
	void SetColor(Macad::Occt::Quantity_Color^ aColor);
	void SetWidth(double aValue);
	void UnsetColor();
	void UnsetWidth();
}; // class AIS_Axis

//---------------------------------------------------------------------
//  Class  AIS_BadEdgeFilter
//---------------------------------------------------------------------
public ref class AIS_BadEdgeFilter sealed : public Macad::Occt::SelectMgr_Filter
{

#ifdef Include_AIS_BadEdgeFilter_h
public:
	Include_AIS_BadEdgeFilter_h
#endif

public:
	AIS_BadEdgeFilter(::AIS_BadEdgeFilter* nativeInstance)
		: Macad::Occt::SelectMgr_Filter( nativeInstance )
	{}

	AIS_BadEdgeFilter(::AIS_BadEdgeFilter& nativeInstance)
		: Macad::Occt::SelectMgr_Filter( nativeInstance )
	{}

	property ::AIS_BadEdgeFilter* NativeInstance
	{
		::AIS_BadEdgeFilter* get()
		{
			return static_cast<::AIS_BadEdgeFilter*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_BadEdgeFilter^ CreateDowncasted(::AIS_BadEdgeFilter* instance);

public:
	AIS_BadEdgeFilter();
	AIS_BadEdgeFilter(Macad::Occt::AIS_BadEdgeFilter^ parameter1);
	bool ActsOn(Macad::Occt::TopAbs_ShapeEnum aType);
	bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ EO);
	void SetContour(int Index);
	void AddEdge(Macad::Occt::TopoDS_Edge^ anEdge, int Index);
	void RemoveEdges(int Index);
}; // class AIS_BadEdgeFilter

//---------------------------------------------------------------------
//  Class  AIS_C0RegularityFilter
//---------------------------------------------------------------------
public ref class AIS_C0RegularityFilter sealed : public Macad::Occt::SelectMgr_Filter
{

#ifdef Include_AIS_C0RegularityFilter_h
public:
	Include_AIS_C0RegularityFilter_h
#endif

public:
	AIS_C0RegularityFilter(::AIS_C0RegularityFilter* nativeInstance)
		: Macad::Occt::SelectMgr_Filter( nativeInstance )
	{}

	AIS_C0RegularityFilter(::AIS_C0RegularityFilter& nativeInstance)
		: Macad::Occt::SelectMgr_Filter( nativeInstance )
	{}

	property ::AIS_C0RegularityFilter* NativeInstance
	{
		::AIS_C0RegularityFilter* get()
		{
			return static_cast<::AIS_C0RegularityFilter*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_C0RegularityFilter^ CreateDowncasted(::AIS_C0RegularityFilter* instance);

public:
	AIS_C0RegularityFilter(Macad::Occt::TopoDS_Shape^ aShape);
	AIS_C0RegularityFilter(Macad::Occt::AIS_C0RegularityFilter^ parameter1);
	bool ActsOn(Macad::Occt::TopAbs_ShapeEnum aType);
	bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ EO);
}; // class AIS_C0RegularityFilter

//---------------------------------------------------------------------
//  Class  AIS_CameraFrustum
//---------------------------------------------------------------------
public ref class AIS_CameraFrustum sealed : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_CameraFrustum_h
public:
	Include_AIS_CameraFrustum_h
#endif

public:
	AIS_CameraFrustum(::AIS_CameraFrustum* nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	AIS_CameraFrustum(::AIS_CameraFrustum& nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	property ::AIS_CameraFrustum* NativeInstance
	{
		::AIS_CameraFrustum* get()
		{
			return static_cast<::AIS_CameraFrustum*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_CameraFrustum^ CreateDowncasted(::AIS_CameraFrustum* instance);

public:
	//---------------------------------------------------------------------
	//  Enum  SelectionMode
	//---------------------------------------------------------------------
	enum class SelectionMode
	{
		SelectionMode_Edges = 0,
		SelectionMode_Volume = 1
	}; // enum  class SelectionMode

	AIS_CameraFrustum();
	AIS_CameraFrustum(Macad::Occt::AIS_CameraFrustum^ parameter1);
	void SetCameraFrustum(Macad::Occt::Graphic3d_Camera^ theCamera);
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	void UnsetColor();
	void UnsetTransparency();
	bool AcceptDisplayMode(int theMode);
}; // class AIS_CameraFrustum

//---------------------------------------------------------------------
//  Class  AIS_Relation
//---------------------------------------------------------------------
public ref class AIS_Relation : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_Relation_h
public:
	Include_AIS_Relation_h
#endif

protected:
	AIS_Relation(InitMode init)
		: Macad::Occt::AIS_InteractiveObject( init )
	{}

public:
	AIS_Relation(::AIS_Relation* nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	AIS_Relation(::AIS_Relation& nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	property ::AIS_Relation* NativeInstance
	{
		::AIS_Relation* get()
		{
			return static_cast<::AIS_Relation*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_Relation^ CreateDowncasted(::AIS_Relation* instance);

public:
	AIS_Relation(Macad::Occt::AIS_Relation^ parameter1);
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	void UnsetColor();
	Macad::Occt::AIS_KindOfInteractive Type();
	Macad::Occt::AIS_KindOfDimension KindOfDimension();
	bool IsMovable();
	Macad::Occt::TopoDS_Shape^ FirstShape();
	void SetFirstShape(Macad::Occt::TopoDS_Shape^ aFShape);
	Macad::Occt::TopoDS_Shape^ SecondShape();
	void SetSecondShape(Macad::Occt::TopoDS_Shape^ aSShape);
	void SetBndBox(double theXmin, double theYmin, double theZmin, double theXmax, double theYmax, double theZmax);
	void UnsetBndBox();
	Macad::Occt::Geom_Plane^ Plane();
	void SetPlane(Macad::Occt::Geom_Plane^ thePlane);
	double Value();
	void SetValue(double theVal);
	Macad::Occt::Pnt Position();
	void SetPosition(Macad::Occt::Pnt thePosition);
	Macad::Occt::TCollection_ExtendedString^ Text();
	void SetText(Macad::Occt::TCollection_ExtendedString^ theText);
	double ArrowSize();
	void SetArrowSize(double theArrowSize);
	/* Method skipped due to unknown mapping: DsgPrs_ArrowSide SymbolPrs() */
	/* Method skipped due to unknown mapping: void SetSymbolPrs(DsgPrs_ArrowSide theSymbolPrs, ) */
	void SetExtShape(int theIndex);
	int ExtShape();
	bool AcceptDisplayMode(int aMode);
	void SetAutomaticPosition(bool theStatus);
	bool AutomaticPosition();
}; // class AIS_Relation

//---------------------------------------------------------------------
//  Class  AIS_Chamf2dDimension
//---------------------------------------------------------------------
public ref class AIS_Chamf2dDimension sealed : public Macad::Occt::AIS_Relation
{

#ifdef Include_AIS_Chamf2dDimension_h
public:
	Include_AIS_Chamf2dDimension_h
#endif

public:
	AIS_Chamf2dDimension(::AIS_Chamf2dDimension* nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	AIS_Chamf2dDimension(::AIS_Chamf2dDimension& nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	property ::AIS_Chamf2dDimension* NativeInstance
	{
		::AIS_Chamf2dDimension* get()
		{
			return static_cast<::AIS_Chamf2dDimension*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_Chamf2dDimension^ CreateDowncasted(::AIS_Chamf2dDimension* instance);

public:
	AIS_Chamf2dDimension(Macad::Occt::TopoDS_Shape^ aFShape, Macad::Occt::Geom_Plane^ aPlane, double aVal, Macad::Occt::TCollection_ExtendedString^ aText);
	/* Method skipped due to unknown mapping: void AIS_Chamf2dDimension(TopoDS_Shape aFShape, Geom_Plane aPlane, Standard_Real aVal, TCollection_ExtendedString aText, gp_Pnt aPosition, DsgPrs_ArrowSide aSymbolPrs, Standard_Real anArrowSize, ) */
	/* Method skipped due to unknown mapping: void AIS_Chamf2dDimension(TopoDS_Shape aFShape, Geom_Plane aPlane, Standard_Real aVal, TCollection_ExtendedString aText, gp_Pnt aPosition, DsgPrs_ArrowSide aSymbolPrs, Standard_Real anArrowSize, ) */
	AIS_Chamf2dDimension(Macad::Occt::AIS_Chamf2dDimension^ parameter1);
	Macad::Occt::AIS_KindOfDimension KindOfDimension();
	bool IsMovable();
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
}; // class AIS_Chamf2dDimension

//---------------------------------------------------------------------
//  Class  AIS_Chamf3dDimension
//---------------------------------------------------------------------
public ref class AIS_Chamf3dDimension sealed : public Macad::Occt::AIS_Relation
{

#ifdef Include_AIS_Chamf3dDimension_h
public:
	Include_AIS_Chamf3dDimension_h
#endif

public:
	AIS_Chamf3dDimension(::AIS_Chamf3dDimension* nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	AIS_Chamf3dDimension(::AIS_Chamf3dDimension& nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	property ::AIS_Chamf3dDimension* NativeInstance
	{
		::AIS_Chamf3dDimension* get()
		{
			return static_cast<::AIS_Chamf3dDimension*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_Chamf3dDimension^ CreateDowncasted(::AIS_Chamf3dDimension* instance);

public:
	AIS_Chamf3dDimension(Macad::Occt::TopoDS_Shape^ aFShape, double aVal, Macad::Occt::TCollection_ExtendedString^ aText);
	/* Method skipped due to unknown mapping: void AIS_Chamf3dDimension(TopoDS_Shape aFShape, Standard_Real aVal, TCollection_ExtendedString aText, gp_Pnt aPosition, DsgPrs_ArrowSide aSymbolPrs, Standard_Real anArrowSize, ) */
	/* Method skipped due to unknown mapping: void AIS_Chamf3dDimension(TopoDS_Shape aFShape, Standard_Real aVal, TCollection_ExtendedString aText, gp_Pnt aPosition, DsgPrs_ArrowSide aSymbolPrs, Standard_Real anArrowSize, ) */
	AIS_Chamf3dDimension(Macad::Occt::AIS_Chamf3dDimension^ parameter1);
	Macad::Occt::AIS_KindOfDimension KindOfDimension();
	bool IsMovable();
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
}; // class AIS_Chamf3dDimension

//---------------------------------------------------------------------
//  Class  AIS_Circle
//---------------------------------------------------------------------
public ref class AIS_Circle sealed : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_Circle_h
public:
	Include_AIS_Circle_h
#endif

public:
	AIS_Circle(::AIS_Circle* nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	AIS_Circle(::AIS_Circle& nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	property ::AIS_Circle* NativeInstance
	{
		::AIS_Circle* get()
		{
			return static_cast<::AIS_Circle*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_Circle^ CreateDowncasted(::AIS_Circle* instance);

public:
	AIS_Circle(Macad::Occt::Geom_Circle^ aCircle);
	AIS_Circle(Macad::Occt::Geom_Circle^ theCircle, double theUStart, double theUEnd, bool theIsFilledCircleSens);
	AIS_Circle(Macad::Occt::Geom_Circle^ theCircle, double theUStart, double theUEnd);
	AIS_Circle(Macad::Occt::AIS_Circle^ parameter1);
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
	int Signature();
	Macad::Occt::AIS_KindOfInteractive Type();
	Macad::Occt::Geom_Circle^ Circle();
	void Parameters(double% theU1, double% theU2);
	void SetCircle(Macad::Occt::Geom_Circle^ theCircle);
	void SetFirstParam(double theU);
	void SetLastParam(double theU);
	void SetColor(Macad::Occt::Quantity_Color^ aColor);
	void SetWidth(double aValue);
	void UnsetColor();
	void UnsetWidth();
	bool IsFilledCircleSens();
	void SetFilledCircleSens(bool theIsFilledCircleSens);
}; // class AIS_Circle

//---------------------------------------------------------------------
//  Class  AIS_ColoredDrawer
//---------------------------------------------------------------------
public ref class AIS_ColoredDrawer sealed : public Macad::Occt::Prs3d_Drawer
{

#ifdef Include_AIS_ColoredDrawer_h
public:
	Include_AIS_ColoredDrawer_h
#endif

public:
	AIS_ColoredDrawer(::AIS_ColoredDrawer* nativeInstance)
		: Macad::Occt::Prs3d_Drawer( nativeInstance )
	{}

	AIS_ColoredDrawer(::AIS_ColoredDrawer& nativeInstance)
		: Macad::Occt::Prs3d_Drawer( nativeInstance )
	{}

	property ::AIS_ColoredDrawer* NativeInstance
	{
		::AIS_ColoredDrawer* get()
		{
			return static_cast<::AIS_ColoredDrawer*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_ColoredDrawer^ CreateDowncasted(::AIS_ColoredDrawer* instance);

public:
	AIS_ColoredDrawer(Macad::Occt::Prs3d_Drawer^ theLink);
	AIS_ColoredDrawer(Macad::Occt::AIS_ColoredDrawer^ parameter1);
	bool IsHidden();
	void SetHidden(bool theToHide);
	bool HasOwnColor();
	void UnsetOwnColor();
	void SetOwnColor(Macad::Occt::Quantity_Color^ parameter1);
	bool HasOwnTransparency();
	void UnsetOwnTransparency();
	void SetOwnTransparency(double parameter1);
	bool HasOwnWidth();
	void UnsetOwnWidth();
	void SetOwnWidth(double parameter1);
}; // class AIS_ColoredDrawer

//---------------------------------------------------------------------
//  Class  AIS_Shape
//---------------------------------------------------------------------
public ref class AIS_Shape : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_Shape_h
public:
	Include_AIS_Shape_h
#endif

protected:
	AIS_Shape(InitMode init)
		: Macad::Occt::AIS_InteractiveObject( init )
	{}

public:
	AIS_Shape(::AIS_Shape* nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	AIS_Shape(::AIS_Shape& nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	property ::AIS_Shape* NativeInstance
	{
		::AIS_Shape* get()
		{
			return static_cast<::AIS_Shape*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_Shape^ CreateDowncasted(::AIS_Shape* instance);

public:
	AIS_Shape(Macad::Occt::TopoDS_Shape^ shap);
	AIS_Shape(Macad::Occt::AIS_Shape^ parameter1);
	int Signature();
	Macad::Occt::AIS_KindOfInteractive Type();
	bool AcceptShapeDecomposition();
	bool AcceptDisplayMode(int theMode);
	Macad::Occt::TopoDS_Shape^ Shape();
	void SetShape(Macad::Occt::TopoDS_Shape^ theShape);
	void Set(Macad::Occt::TopoDS_Shape^ theShape);
	bool SetOwnDeviationCoefficient();
	bool SetOwnHLRDeviationCoefficient();
	bool SetOwnDeviationAngle();
	bool SetOwnHLRDeviationAngle();
	void SetOwnDeviationCoefficient(double aCoefficient);
	void SetOwnHLRDeviationCoefficient(double aCoefficient);
	void SetAngleAndDeviation(double anAngle);
	double UserAngle();
	void SetOwnDeviationAngle(double anAngle);
	void SetHLRAngleAndDeviation(double anAngle);
	void SetOwnHLRDeviationAngle(double anAngle);
	bool OwnDeviationCoefficient(double% aCoefficient, double% aPreviousCoefficient);
	bool OwnHLRDeviationCoefficient(double% aCoefficient, double% aPreviousCoefficient);
	bool OwnDeviationAngle(double% anAngle, double% aPreviousAngle);
	bool OwnHLRDeviationAngle(double% anAngle, double% aPreviousAngle);
	void SetTypeOfHLR(Macad::Occt::Prs3d_TypeOfHLR theTypeOfHLR);
	Macad::Occt::Prs3d_TypeOfHLR TypeOfHLR();
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	void UnsetColor();
	void SetWidth(double aValue);
	void UnsetWidth();
	void SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ aName);
	void UnsetMaterial();
	void SetTransparency(double aValue);
	void SetTransparency();
	void UnsetTransparency();
	Macad::Occt::Bnd_Box^ BoundingBox();
	void Color(Macad::Occt::Quantity_Color^ aColor);
	Macad::Occt::Graphic3d_NameOfMaterial Material();
	double Transparency();
	static Macad::Occt::TopAbs_ShapeEnum SelectionType(int theSelMode);
	static int SelectionMode(Macad::Occt::TopAbs_ShapeEnum theShapeType);
	Macad::Occt::Pnt2d TextureRepeatUV();
	void SetTextureRepeatUV(Macad::Occt::Pnt2d theRepeatUV);
	Macad::Occt::Pnt2d TextureOriginUV();
	void SetTextureOriginUV(Macad::Occt::Pnt2d theOriginUV);
	Macad::Occt::Pnt2d TextureScaleUV();
	void SetTextureScaleUV(Macad::Occt::Pnt2d theScaleUV);
	static void computeHlrPresentation(Macad::Occt::Prs3d_Projector^ theProjector, Macad::Occt::Graphic3d_Structure^ thePrs, Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::Prs3d_Drawer^ theDrawer);
}; // class AIS_Shape

//---------------------------------------------------------------------
//  Class  AIS_ColoredShape
//---------------------------------------------------------------------
public ref class AIS_ColoredShape sealed : public Macad::Occt::AIS_Shape
{

#ifdef Include_AIS_ColoredShape_h
public:
	Include_AIS_ColoredShape_h
#endif

public:
	AIS_ColoredShape(::AIS_ColoredShape* nativeInstance)
		: Macad::Occt::AIS_Shape( nativeInstance )
	{}

	AIS_ColoredShape(::AIS_ColoredShape& nativeInstance)
		: Macad::Occt::AIS_Shape( nativeInstance )
	{}

	property ::AIS_ColoredShape* NativeInstance
	{
		::AIS_ColoredShape* get()
		{
			return static_cast<::AIS_ColoredShape*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_ColoredShape^ CreateDowncasted(::AIS_ColoredShape* instance);

public:
	AIS_ColoredShape(Macad::Occt::TopoDS_Shape^ theShape);
	AIS_ColoredShape(Macad::Occt::AIS_Shape^ theShape);
	AIS_ColoredShape(Macad::Occt::AIS_ColoredShape^ parameter1);
	Macad::Occt::AIS_ColoredDrawer^ CustomAspects(Macad::Occt::TopoDS_Shape^ theShape);
	void ClearCustomAspects();
	void UnsetCustomAspects(Macad::Occt::TopoDS_Shape^ theShape, bool theToUnregister);
	void UnsetCustomAspects(Macad::Occt::TopoDS_Shape^ theShape);
	void SetCustomColor(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::Quantity_Color^ theColor);
	void SetCustomTransparency(Macad::Occt::TopoDS_Shape^ theShape, double theTransparency);
	void SetCustomWidth(Macad::Occt::TopoDS_Shape^ theShape, double theLineWidth);
	Macad::Occt::AIS_DataMapOfShapeDrawer^ CustomAspectsMap();
	Macad::Occt::AIS_DataMapOfShapeDrawer^ ChangeCustomAspectsMap();
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	void SetWidth(double theLineWidth);
	void SetTransparency(double theValue);
	void SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theAspect);
	void UnsetTransparency();
	void UnsetWidth();
}; // class AIS_ColoredShape

//---------------------------------------------------------------------
//  Class  AIS_ConcentricRelation
//---------------------------------------------------------------------
public ref class AIS_ConcentricRelation sealed : public Macad::Occt::AIS_Relation
{

#ifdef Include_AIS_ConcentricRelation_h
public:
	Include_AIS_ConcentricRelation_h
#endif

public:
	AIS_ConcentricRelation(::AIS_ConcentricRelation* nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	AIS_ConcentricRelation(::AIS_ConcentricRelation& nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	property ::AIS_ConcentricRelation* NativeInstance
	{
		::AIS_ConcentricRelation* get()
		{
			return static_cast<::AIS_ConcentricRelation*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_ConcentricRelation^ CreateDowncasted(::AIS_ConcentricRelation* instance);

public:
	AIS_ConcentricRelation(Macad::Occt::TopoDS_Shape^ aFShape, Macad::Occt::TopoDS_Shape^ aSShape, Macad::Occt::Geom_Plane^ aPlane);
	AIS_ConcentricRelation(Macad::Occt::AIS_ConcentricRelation^ parameter1);
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
}; // class AIS_ConcentricRelation

//---------------------------------------------------------------------
//  Class  AIS_ConnectedInteractive
//---------------------------------------------------------------------
public ref class AIS_ConnectedInteractive sealed : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_ConnectedInteractive_h
public:
	Include_AIS_ConnectedInteractive_h
#endif

public:
	AIS_ConnectedInteractive(::AIS_ConnectedInteractive* nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	AIS_ConnectedInteractive(::AIS_ConnectedInteractive& nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	property ::AIS_ConnectedInteractive* NativeInstance
	{
		::AIS_ConnectedInteractive* get()
		{
			return static_cast<::AIS_ConnectedInteractive*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_ConnectedInteractive^ CreateDowncasted(::AIS_ConnectedInteractive* instance);

public:
	/* Method skipped due to unknown mapping: void AIS_ConnectedInteractive(PrsMgr_TypeOfPresentation3d aTypeOfPresentation3d, ) */
	AIS_ConnectedInteractive(Macad::Occt::AIS_ConnectedInteractive^ parameter1);
	Macad::Occt::AIS_KindOfInteractive Type();
	int Signature();
	void Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj);
	void Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::Trsf theLocation);
	void Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::Geom_Transformation^ theLocation);
	bool HasConnection();
	Macad::Occt::AIS_InteractiveObject^ ConnectedTo();
	void Disconnect();
	bool AcceptShapeDecomposition();
	bool AcceptDisplayMode(int theMode);
}; // class AIS_ConnectedInteractive

//---------------------------------------------------------------------
//  Class  AIS_DiameterDimension
//---------------------------------------------------------------------
public ref class AIS_DiameterDimension sealed : public Macad::Occt::AIS_Dimension
{

#ifdef Include_AIS_DiameterDimension_h
public:
	Include_AIS_DiameterDimension_h
#endif

public:
	AIS_DiameterDimension(::AIS_DiameterDimension* nativeInstance)
		: Macad::Occt::AIS_Dimension( nativeInstance )
	{}

	AIS_DiameterDimension(::AIS_DiameterDimension& nativeInstance)
		: Macad::Occt::AIS_Dimension( nativeInstance )
	{}

	property ::AIS_DiameterDimension* NativeInstance
	{
		::AIS_DiameterDimension* get()
		{
			return static_cast<::AIS_DiameterDimension*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_DiameterDimension^ CreateDowncasted(::AIS_DiameterDimension* instance);

public:
	AIS_DiameterDimension(Macad::Occt::gp_Circ^ theCircle);
	AIS_DiameterDimension(Macad::Occt::gp_Circ^ theCircle, Macad::Occt::Pln thePlane);
	AIS_DiameterDimension(Macad::Occt::TopoDS_Shape^ theShape);
	AIS_DiameterDimension(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::Pln thePlane);
	AIS_DiameterDimension(Macad::Occt::AIS_DiameterDimension^ parameter1);
	Macad::Occt::gp_Circ^ Circle();
	Macad::Occt::Pnt AnchorPoint();
	Macad::Occt::TopoDS_Shape^ Shape();
	void SetMeasuredGeometry(Macad::Occt::gp_Circ^ theCircle);
	void SetMeasuredGeometry(Macad::Occt::TopoDS_Shape^ theShape);
	Macad::Occt::TCollection_AsciiString^ GetDisplayUnits();
	Macad::Occt::TCollection_AsciiString^ GetModelUnits();
	void SetDisplayUnits(Macad::Occt::TCollection_AsciiString^ theUnits);
	void SetModelUnits(Macad::Occt::TCollection_AsciiString^ theUnits);
	void SetTextPosition(Macad::Occt::Pnt theTextPos);
	Macad::Occt::Pnt GetTextPosition();
}; // class AIS_DiameterDimension

//---------------------------------------------------------------------
//  Class  AIS_EllipseRadiusDimension
//---------------------------------------------------------------------
public ref class AIS_EllipseRadiusDimension : public Macad::Occt::AIS_Relation
{

#ifdef Include_AIS_EllipseRadiusDimension_h
public:
	Include_AIS_EllipseRadiusDimension_h
#endif

protected:
	AIS_EllipseRadiusDimension(InitMode init)
		: Macad::Occt::AIS_Relation( init )
	{}

public:
	AIS_EllipseRadiusDimension(::AIS_EllipseRadiusDimension* nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	AIS_EllipseRadiusDimension(::AIS_EllipseRadiusDimension& nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	property ::AIS_EllipseRadiusDimension* NativeInstance
	{
		::AIS_EllipseRadiusDimension* get()
		{
			return static_cast<::AIS_EllipseRadiusDimension*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_EllipseRadiusDimension^ CreateDowncasted(::AIS_EllipseRadiusDimension* instance);

public:
	AIS_EllipseRadiusDimension(Macad::Occt::AIS_EllipseRadiusDimension^ parameter1);
	Macad::Occt::AIS_KindOfDimension KindOfDimension();
	bool IsMovable();
	void ComputeGeometry();
}; // class AIS_EllipseRadiusDimension

//---------------------------------------------------------------------
//  Class  AIS_EqualDistanceRelation
//---------------------------------------------------------------------
public ref class AIS_EqualDistanceRelation sealed : public Macad::Occt::AIS_Relation
{

#ifdef Include_AIS_EqualDistanceRelation_h
public:
	Include_AIS_EqualDistanceRelation_h
#endif

public:
	AIS_EqualDistanceRelation(::AIS_EqualDistanceRelation* nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	AIS_EqualDistanceRelation(::AIS_EqualDistanceRelation& nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	property ::AIS_EqualDistanceRelation* NativeInstance
	{
		::AIS_EqualDistanceRelation* get()
		{
			return static_cast<::AIS_EqualDistanceRelation*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_EqualDistanceRelation^ CreateDowncasted(::AIS_EqualDistanceRelation* instance);

public:
	AIS_EqualDistanceRelation(Macad::Occt::TopoDS_Shape^ aShape1, Macad::Occt::TopoDS_Shape^ aShape2, Macad::Occt::TopoDS_Shape^ aShape3, Macad::Occt::TopoDS_Shape^ aShape4, Macad::Occt::Geom_Plane^ aPlane);
	AIS_EqualDistanceRelation(Macad::Occt::AIS_EqualDistanceRelation^ parameter1);
	void SetShape3(Macad::Occt::TopoDS_Shape^ aShape);
	Macad::Occt::TopoDS_Shape^ Shape3();
	void SetShape4(Macad::Occt::TopoDS_Shape^ aShape);
	Macad::Occt::TopoDS_Shape^ Shape4();
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
	/* Method skipped due to unknown mapping: void ComputeTwoEdgesLength(Graphic3d_Structure aPresentation, Prs3d_Drawer aDrawer, Standard_Real ArrowSize, TopoDS_Edge FirstEdge, TopoDS_Edge SecondEdge, Geom_Plane Plane, Standard_Boolean AutomaticPos, Standard_Boolean IsSetBndBox, Bnd_Box BndBox, gp_Pnt Position, gp_Pnt FirstAttach, gp_Pnt SecondAttach, gp_Pnt FirstExtreme, gp_Pnt SecondExtreme, DsgPrs_ArrowSide SymbolPrs, ) */
	/* Method skipped due to unknown mapping: void ComputeTwoVerticesLength(Graphic3d_Structure aPresentation, Prs3d_Drawer aDrawer, Standard_Real ArrowSize, TopoDS_Vertex FirstVertex, TopoDS_Vertex SecondVertex, Geom_Plane Plane, Standard_Boolean AutomaticPos, Standard_Boolean IsSetBndBox, Bnd_Box BndBox, AIS_TypeOfDist TypeDist, gp_Pnt Position, gp_Pnt FirstAttach, gp_Pnt SecondAttach, gp_Pnt FirstExtreme, gp_Pnt SecondExtreme, DsgPrs_ArrowSide SymbolPrs, ) */
	/* Method skipped due to unknown mapping: void ComputeOneEdgeOneVertexLength(Graphic3d_Structure aPresentation, Prs3d_Drawer aDrawer, Standard_Real ArrowSize, TopoDS_Shape FirstShape, TopoDS_Shape SecondShape, Geom_Plane Plane, Standard_Boolean AutomaticPos, Standard_Boolean IsSetBndBox, Bnd_Box BndBox, gp_Pnt Position, gp_Pnt FirstAttach, gp_Pnt SecondAttach, gp_Pnt FirstExtreme, gp_Pnt SecondExtreme, DsgPrs_ArrowSide SymbolPrs, ) */
}; // class AIS_EqualDistanceRelation

//---------------------------------------------------------------------
//  Class  AIS_EqualRadiusRelation
//---------------------------------------------------------------------
public ref class AIS_EqualRadiusRelation sealed : public Macad::Occt::AIS_Relation
{

#ifdef Include_AIS_EqualRadiusRelation_h
public:
	Include_AIS_EqualRadiusRelation_h
#endif

public:
	AIS_EqualRadiusRelation(::AIS_EqualRadiusRelation* nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	AIS_EqualRadiusRelation(::AIS_EqualRadiusRelation& nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	property ::AIS_EqualRadiusRelation* NativeInstance
	{
		::AIS_EqualRadiusRelation* get()
		{
			return static_cast<::AIS_EqualRadiusRelation*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_EqualRadiusRelation^ CreateDowncasted(::AIS_EqualRadiusRelation* instance);

public:
	AIS_EqualRadiusRelation(Macad::Occt::TopoDS_Edge^ aFirstEdge, Macad::Occt::TopoDS_Edge^ aSecondEdge, Macad::Occt::Geom_Plane^ aPlane);
	AIS_EqualRadiusRelation(Macad::Occt::AIS_EqualRadiusRelation^ parameter1);
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
}; // class AIS_EqualRadiusRelation

//---------------------------------------------------------------------
//  Class  AIS_ExclusionFilter
//---------------------------------------------------------------------
public ref class AIS_ExclusionFilter sealed : public Macad::Occt::SelectMgr_Filter
{

#ifdef Include_AIS_ExclusionFilter_h
public:
	Include_AIS_ExclusionFilter_h
#endif

public:
	AIS_ExclusionFilter(::AIS_ExclusionFilter* nativeInstance)
		: Macad::Occt::SelectMgr_Filter( nativeInstance )
	{}

	AIS_ExclusionFilter(::AIS_ExclusionFilter& nativeInstance)
		: Macad::Occt::SelectMgr_Filter( nativeInstance )
	{}

	property ::AIS_ExclusionFilter* NativeInstance
	{
		::AIS_ExclusionFilter* get()
		{
			return static_cast<::AIS_ExclusionFilter*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_ExclusionFilter^ CreateDowncasted(::AIS_ExclusionFilter* instance);

public:
	AIS_ExclusionFilter(bool ExclusionFlagOn);
	AIS_ExclusionFilter(Macad::Occt::AIS_KindOfInteractive TypeToExclude, bool ExclusionFlagOn);
	AIS_ExclusionFilter(Macad::Occt::AIS_KindOfInteractive TypeToExclude);
	AIS_ExclusionFilter(Macad::Occt::AIS_KindOfInteractive TypeToExclude, int SignatureInType, bool ExclusionFlagOn);
	AIS_ExclusionFilter(Macad::Occt::AIS_KindOfInteractive TypeToExclude, int SignatureInType);
	AIS_ExclusionFilter(Macad::Occt::AIS_ExclusionFilter^ parameter1);
	bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ anObj);
	bool Add(Macad::Occt::AIS_KindOfInteractive TypeToExclude);
	bool Add(Macad::Occt::AIS_KindOfInteractive TypeToExclude, int SignatureInType);
	bool Remove(Macad::Occt::AIS_KindOfInteractive TypeToExclude);
	bool Remove(Macad::Occt::AIS_KindOfInteractive TypeToExclude, int SignatureInType);
	void Clear();
	bool IsExclusionFlagOn();
	void SetExclusionFlag(bool Status);
	bool IsStored(Macad::Occt::AIS_KindOfInteractive aType);
	void ListOfStoredTypes(Macad::Occt::TColStd_ListOfInteger^ TheList);
	void ListOfSignature(Macad::Occt::AIS_KindOfInteractive aType, Macad::Occt::TColStd_ListOfInteger^ TheStoredList);
}; // class AIS_ExclusionFilter

//---------------------------------------------------------------------
//  Class  AIS_FixRelation
//---------------------------------------------------------------------
public ref class AIS_FixRelation sealed : public Macad::Occt::AIS_Relation
{

#ifdef Include_AIS_FixRelation_h
public:
	Include_AIS_FixRelation_h
#endif

public:
	AIS_FixRelation(::AIS_FixRelation* nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	AIS_FixRelation(::AIS_FixRelation& nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	property ::AIS_FixRelation* NativeInstance
	{
		::AIS_FixRelation* get()
		{
			return static_cast<::AIS_FixRelation*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_FixRelation^ CreateDowncasted(::AIS_FixRelation* instance);

public:
	AIS_FixRelation(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::Geom_Plane^ aPlane, Macad::Occt::TopoDS_Wire^ aWire);
	AIS_FixRelation(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::Geom_Plane^ aPlane, Macad::Occt::TopoDS_Wire^ aWire, Macad::Occt::Pnt aPosition, double anArrowSize);
	AIS_FixRelation(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::Geom_Plane^ aPlane, Macad::Occt::TopoDS_Wire^ aWire, Macad::Occt::Pnt aPosition);
	AIS_FixRelation(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::Geom_Plane^ aPlane);
	AIS_FixRelation(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::Geom_Plane^ aPlane, Macad::Occt::Pnt aPosition, double anArrowSize);
	AIS_FixRelation(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::Geom_Plane^ aPlane, Macad::Occt::Pnt aPosition);
	AIS_FixRelation(Macad::Occt::AIS_FixRelation^ parameter1);
	Macad::Occt::TopoDS_Wire^ Wire();
	void SetWire(Macad::Occt::TopoDS_Wire^ aWire);
	bool IsMovable();
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
}; // class AIS_FixRelation

//---------------------------------------------------------------------
//  Class  AIS_GraphicTool
//---------------------------------------------------------------------
public ref class AIS_GraphicTool sealed : public BaseClass<::AIS_GraphicTool>
{

#ifdef Include_AIS_GraphicTool_h
public:
	Include_AIS_GraphicTool_h
#endif

public:
	AIS_GraphicTool(::AIS_GraphicTool* nativeInstance)
		: BaseClass<::AIS_GraphicTool>( nativeInstance, true )
	{}

	AIS_GraphicTool(::AIS_GraphicTool& nativeInstance)
		: BaseClass<::AIS_GraphicTool>( &nativeInstance, false )
	{}

	property ::AIS_GraphicTool* NativeInstance
	{
		::AIS_GraphicTool* get()
		{
			return static_cast<::AIS_GraphicTool*>(_NativeInstance);
		}
	}

public:
	AIS_GraphicTool();
	AIS_GraphicTool(Macad::Occt::AIS_GraphicTool^ parameter1);
	static Macad::Occt::Quantity_NameOfColor GetLineColor(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::AIS_TypeOfAttribute TheTypeOfAttributes);
	static void GetLineColor(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::AIS_TypeOfAttribute TheTypeOfAttributes, Macad::Occt::Quantity_Color^ TheLineColor);
	static double GetLineWidth(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::AIS_TypeOfAttribute TheTypeOfAttributes);
	static Macad::Occt::Aspect_TypeOfLine GetLineType(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::AIS_TypeOfAttribute TheTypeOfAttributes);
	static void GetLineAtt(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::AIS_TypeOfAttribute TheTypeOfAttributes, Macad::Occt::Quantity_NameOfColor% aCol, double% aWidth, Macad::Occt::Aspect_TypeOfLine% aTyp);
	static Macad::Occt::Quantity_NameOfColor GetInteriorColor(Macad::Occt::Prs3d_Drawer^ aDrawer);
	static void GetInteriorColor(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::Quantity_Color^ aColor);
	static Macad::Occt::Graphic3d_MaterialAspect^ GetMaterial(Macad::Occt::Prs3d_Drawer^ aDrawer);
}; // class AIS_GraphicTool

//---------------------------------------------------------------------
//  Class  AIS_IdenticRelation
//---------------------------------------------------------------------
public ref class AIS_IdenticRelation sealed : public Macad::Occt::AIS_Relation
{

#ifdef Include_AIS_IdenticRelation_h
public:
	Include_AIS_IdenticRelation_h
#endif

public:
	AIS_IdenticRelation(::AIS_IdenticRelation* nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	AIS_IdenticRelation(::AIS_IdenticRelation& nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	property ::AIS_IdenticRelation* NativeInstance
	{
		::AIS_IdenticRelation* get()
		{
			return static_cast<::AIS_IdenticRelation*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_IdenticRelation^ CreateDowncasted(::AIS_IdenticRelation* instance);

public:
	AIS_IdenticRelation(Macad::Occt::TopoDS_Shape^ FirstShape, Macad::Occt::TopoDS_Shape^ SecondShape, Macad::Occt::Geom_Plane^ aPlane);
	AIS_IdenticRelation(Macad::Occt::AIS_IdenticRelation^ parameter1);
	bool HasUsers();
	Macad::Occt::TColStd_ListOfTransient^ Users();
	void AddUser(Macad::Occt::Standard_Transient^ theUser);
	void ClearUsers();
	bool IsMovable();
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
}; // class AIS_IdenticRelation

//---------------------------------------------------------------------
//  Class  AIS_LengthDimension
//---------------------------------------------------------------------
public ref class AIS_LengthDimension sealed : public Macad::Occt::AIS_Dimension
{

#ifdef Include_AIS_LengthDimension_h
public:
	Include_AIS_LengthDimension_h
#endif

public:
	AIS_LengthDimension(::AIS_LengthDimension* nativeInstance)
		: Macad::Occt::AIS_Dimension( nativeInstance )
	{}

	AIS_LengthDimension(::AIS_LengthDimension& nativeInstance)
		: Macad::Occt::AIS_Dimension( nativeInstance )
	{}

	property ::AIS_LengthDimension* NativeInstance
	{
		::AIS_LengthDimension* get()
		{
			return static_cast<::AIS_LengthDimension*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_LengthDimension^ CreateDowncasted(::AIS_LengthDimension* instance);

public:
	AIS_LengthDimension(Macad::Occt::TopoDS_Face^ theFace, Macad::Occt::TopoDS_Edge^ theEdge);
	AIS_LengthDimension(Macad::Occt::TopoDS_Face^ theFirstFace, Macad::Occt::TopoDS_Face^ theSecondFace);
	AIS_LengthDimension(Macad::Occt::Pnt theFirstPoint, Macad::Occt::Pnt theSecondPoint, Macad::Occt::Pln thePlane);
	AIS_LengthDimension(Macad::Occt::TopoDS_Shape^ theFirstShape, Macad::Occt::TopoDS_Shape^ theSecondShape, Macad::Occt::Pln thePlane);
	AIS_LengthDimension(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::Pln thePlane);
	AIS_LengthDimension(Macad::Occt::AIS_LengthDimension^ parameter1);
	Macad::Occt::Pnt FirstPoint();
	Macad::Occt::Pnt SecondPoint();
	Macad::Occt::TopoDS_Shape^ FirstShape();
	Macad::Occt::TopoDS_Shape^ SecondShape();
	void SetMeasuredGeometry(Macad::Occt::Pnt theFirstPoint, Macad::Occt::Pnt theSecondPoint, Macad::Occt::Pln thePlane);
	void SetMeasuredGeometry(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::Pln thePlane);
	void SetMeasuredGeometry(Macad::Occt::TopoDS_Face^ theFirstFace, Macad::Occt::TopoDS_Face^ theSecondFace);
	void SetMeasuredGeometry(Macad::Occt::TopoDS_Face^ theFace, Macad::Occt::TopoDS_Edge^ theEdge);
	void SetMeasuredShapes(Macad::Occt::TopoDS_Shape^ theFirstShape, Macad::Occt::TopoDS_Shape^ theSecondShape);
	Macad::Occt::TCollection_AsciiString^ GetDisplayUnits();
	Macad::Occt::TCollection_AsciiString^ GetModelUnits();
	void SetDisplayUnits(Macad::Occt::TCollection_AsciiString^ theUnits);
	void SetModelUnits(Macad::Occt::TCollection_AsciiString^ theUnits);
	void SetTextPosition(Macad::Occt::Pnt theTextPos);
	Macad::Occt::Pnt GetTextPosition();
	void SetDirection(Macad::Occt::Dir theDirection, bool theUseDirection);
	void SetDirection(Macad::Occt::Dir theDirection);
}; // class AIS_LengthDimension

//---------------------------------------------------------------------
//  Class  AIS_Line
//---------------------------------------------------------------------
public ref class AIS_Line sealed : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_Line_h
public:
	Include_AIS_Line_h
#endif

public:
	AIS_Line(::AIS_Line* nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	AIS_Line(::AIS_Line& nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	property ::AIS_Line* NativeInstance
	{
		::AIS_Line* get()
		{
			return static_cast<::AIS_Line*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_Line^ CreateDowncasted(::AIS_Line* instance);

public:
	AIS_Line(Macad::Occt::Geom_Line^ aLine);
	AIS_Line(Macad::Occt::Geom_Point^ aStartPoint, Macad::Occt::Geom_Point^ aEndPoint);
	AIS_Line(Macad::Occt::AIS_Line^ parameter1);
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
	int Signature();
	Macad::Occt::AIS_KindOfInteractive Type();
	Macad::Occt::Geom_Line^ Line();
	void Points(Macad::Occt::Geom_Point^ thePStart, Macad::Occt::Geom_Point^ thePEnd);
	void SetLine(Macad::Occt::Geom_Line^ theLine);
	void SetPoints(Macad::Occt::Geom_Point^ thePStart, Macad::Occt::Geom_Point^ thePEnd);
	void SetColor(Macad::Occt::Quantity_Color^ aColor);
	void SetWidth(double aValue);
	void UnsetColor();
	void UnsetWidth();
}; // class AIS_Line

//---------------------------------------------------------------------
//  Class  AIS_ManipulatorObjectSequence
//---------------------------------------------------------------------
public ref class AIS_ManipulatorObjectSequence sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_AIS_ManipulatorObjectSequence_h
public:
	Include_AIS_ManipulatorObjectSequence_h
#endif

public:
	AIS_ManipulatorObjectSequence(::AIS_ManipulatorObjectSequence* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	AIS_ManipulatorObjectSequence(::AIS_ManipulatorObjectSequence& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::AIS_ManipulatorObjectSequence* NativeInstance
	{
		::AIS_ManipulatorObjectSequence* get()
		{
			return static_cast<::AIS_ManipulatorObjectSequence*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_ManipulatorObjectSequence^ CreateDowncasted(::AIS_ManipulatorObjectSequence* instance);

public:
	AIS_ManipulatorObjectSequence();
	/* Method skipped due to unknown mapping: void AIS_ManipulatorObjectSequence(NCollection_Sequence<opencascade::handle<AIS_InteractiveObject> > theOther, ) */
	AIS_ManipulatorObjectSequence(Macad::Occt::AIS_ManipulatorObjectSequence^ parameter1);
	/* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<AIS_InteractiveObject> > Sequence() */
	void Append(Macad::Occt::AIS_InteractiveObject^ theItem);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<opencascade::handle<AIS_InteractiveObject> > theSequence, ) */
	/* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<AIS_InteractiveObject> > ChangeSequence() */
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
	/* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<AIS_InteractiveObject> > Assign(NCollection_Sequence<opencascade::handle<AIS_InteractiveObject> > theOther, ) */
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Prepend(Macad::Occt::AIS_InteractiveObject^ theItem);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<opencascade::handle<AIS_InteractiveObject> > theSeq, ) */
	void InsertBefore(int theIndex, Macad::Occt::AIS_InteractiveObject^ theItem);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<AIS_InteractiveObject> > theSeq, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, AIS_InteractiveObject theItem, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<AIS_InteractiveObject> > theSeq, ) */
	void InsertAfter(int theIndex, Macad::Occt::AIS_InteractiveObject^ theItem);
	/* Method skipped due to unknown mapping: void Split(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<AIS_InteractiveObject> > theSeq, ) */
	Macad::Occt::AIS_InteractiveObject^ First();
	Macad::Occt::AIS_InteractiveObject^ ChangeFirst();
	Macad::Occt::AIS_InteractiveObject^ Last();
	Macad::Occt::AIS_InteractiveObject^ ChangeLast();
	Macad::Occt::AIS_InteractiveObject^ Value(int theIndex);
	Macad::Occt::AIS_InteractiveObject^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::AIS_InteractiveObject^ theItem);
}; // class AIS_ManipulatorObjectSequence

//---------------------------------------------------------------------
//  Class  AIS_ManipulatorOwner
//---------------------------------------------------------------------
public ref class AIS_ManipulatorOwner sealed : public Macad::Occt::SelectMgr_EntityOwner
{

#ifdef Include_AIS_ManipulatorOwner_h
public:
	Include_AIS_ManipulatorOwner_h
#endif

public:
	AIS_ManipulatorOwner(::AIS_ManipulatorOwner* nativeInstance)
		: Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
	{}

	AIS_ManipulatorOwner(::AIS_ManipulatorOwner& nativeInstance)
		: Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
	{}

	property ::AIS_ManipulatorOwner* NativeInstance
	{
		::AIS_ManipulatorOwner* get()
		{
			return static_cast<::AIS_ManipulatorOwner*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_ManipulatorOwner^ CreateDowncasted(::AIS_ManipulatorOwner* instance);

public:
	AIS_ManipulatorOwner(Macad::Occt::SelectMgr_SelectableObject^ theSelObject, int theIndex, Macad::Occt::AIS_ManipulatorMode theMode, int thePriority);
	AIS_ManipulatorOwner(Macad::Occt::SelectMgr_SelectableObject^ theSelObject, int theIndex, Macad::Occt::AIS_ManipulatorMode theMode);
	AIS_ManipulatorOwner(Macad::Occt::AIS_ManipulatorOwner^ parameter1);
	/* Method skipped due to unknown mapping: void HilightWithColor(PrsMgr_PresentationManager thePM, Prs3d_Drawer theStyle, Standard_Integer theMode, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean IsHilighted(PrsMgr_PresentationManager thePM, Standard_Integer theMode, ) */
	/* Method skipped due to unknown mapping: void Unhilight(PrsMgr_PresentationManager thePM, Standard_Integer theMode, ) */
	Macad::Occt::AIS_ManipulatorMode Mode();
	int Index();
}; // class AIS_ManipulatorOwner

//---------------------------------------------------------------------
//  Class  AIS_MaxRadiusDimension
//---------------------------------------------------------------------
public ref class AIS_MaxRadiusDimension sealed : public Macad::Occt::AIS_EllipseRadiusDimension
{

#ifdef Include_AIS_MaxRadiusDimension_h
public:
	Include_AIS_MaxRadiusDimension_h
#endif

public:
	AIS_MaxRadiusDimension(::AIS_MaxRadiusDimension* nativeInstance)
		: Macad::Occt::AIS_EllipseRadiusDimension( nativeInstance )
	{}

	AIS_MaxRadiusDimension(::AIS_MaxRadiusDimension& nativeInstance)
		: Macad::Occt::AIS_EllipseRadiusDimension( nativeInstance )
	{}

	property ::AIS_MaxRadiusDimension* NativeInstance
	{
		::AIS_MaxRadiusDimension* get()
		{
			return static_cast<::AIS_MaxRadiusDimension*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_MaxRadiusDimension^ CreateDowncasted(::AIS_MaxRadiusDimension* instance);

public:
	AIS_MaxRadiusDimension(Macad::Occt::TopoDS_Shape^ aShape, double aVal, Macad::Occt::TCollection_ExtendedString^ aText);
	/* Method skipped due to unknown mapping: void AIS_MaxRadiusDimension(TopoDS_Shape aShape, Standard_Real aVal, TCollection_ExtendedString aText, gp_Pnt aPosition, DsgPrs_ArrowSide aSymbolPrs, Standard_Real anArrowSize, ) */
	/* Method skipped due to unknown mapping: void AIS_MaxRadiusDimension(TopoDS_Shape aShape, Standard_Real aVal, TCollection_ExtendedString aText, gp_Pnt aPosition, DsgPrs_ArrowSide aSymbolPrs, Standard_Real anArrowSize, ) */
	AIS_MaxRadiusDimension(Macad::Occt::AIS_MaxRadiusDimension^ parameter1);
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
}; // class AIS_MaxRadiusDimension

//---------------------------------------------------------------------
//  Class  AIS_MediaPlayer
//---------------------------------------------------------------------
public ref class AIS_MediaPlayer sealed : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_MediaPlayer_h
public:
	Include_AIS_MediaPlayer_h
#endif

public:
	AIS_MediaPlayer(::AIS_MediaPlayer* nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	AIS_MediaPlayer(::AIS_MediaPlayer& nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	property ::AIS_MediaPlayer* NativeInstance
	{
		::AIS_MediaPlayer* get()
		{
			return static_cast<::AIS_MediaPlayer*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_MediaPlayer^ CreateDowncasted(::AIS_MediaPlayer* instance);

public:
	AIS_MediaPlayer();
	AIS_MediaPlayer(Macad::Occt::AIS_MediaPlayer^ parameter1);
	void OpenInput(Macad::Occt::TCollection_AsciiString^ thePath, bool theToWait);
	bool PresentFrame(Macad::Occt::Graphic3d_Vec2i^ theLeftCorner, Macad::Occt::Graphic3d_Vec2i^ theMaxSize);
	/* Method skipped due to unknown mapping: Media_PlayerContext PlayerContext() */
	void PlayPause();
	void SetClosePlayer();
	double Duration();
}; // class AIS_MediaPlayer

//---------------------------------------------------------------------
//  Class  AIS_MidPointRelation
//---------------------------------------------------------------------
public ref class AIS_MidPointRelation sealed : public Macad::Occt::AIS_Relation
{

#ifdef Include_AIS_MidPointRelation_h
public:
	Include_AIS_MidPointRelation_h
#endif

public:
	AIS_MidPointRelation(::AIS_MidPointRelation* nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	AIS_MidPointRelation(::AIS_MidPointRelation& nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	property ::AIS_MidPointRelation* NativeInstance
	{
		::AIS_MidPointRelation* get()
		{
			return static_cast<::AIS_MidPointRelation*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_MidPointRelation^ CreateDowncasted(::AIS_MidPointRelation* instance);

public:
	AIS_MidPointRelation(Macad::Occt::TopoDS_Shape^ aSymmTool, Macad::Occt::TopoDS_Shape^ FirstShape, Macad::Occt::TopoDS_Shape^ SecondShape, Macad::Occt::Geom_Plane^ aPlane);
	AIS_MidPointRelation(Macad::Occt::AIS_MidPointRelation^ parameter1);
	bool IsMovable();
	void SetTool(Macad::Occt::TopoDS_Shape^ aMidPointTool);
	Macad::Occt::TopoDS_Shape^ GetTool();
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
}; // class AIS_MidPointRelation

//---------------------------------------------------------------------
//  Class  AIS_MinRadiusDimension
//---------------------------------------------------------------------
public ref class AIS_MinRadiusDimension sealed : public Macad::Occt::AIS_EllipseRadiusDimension
{

#ifdef Include_AIS_MinRadiusDimension_h
public:
	Include_AIS_MinRadiusDimension_h
#endif

public:
	AIS_MinRadiusDimension(::AIS_MinRadiusDimension* nativeInstance)
		: Macad::Occt::AIS_EllipseRadiusDimension( nativeInstance )
	{}

	AIS_MinRadiusDimension(::AIS_MinRadiusDimension& nativeInstance)
		: Macad::Occt::AIS_EllipseRadiusDimension( nativeInstance )
	{}

	property ::AIS_MinRadiusDimension* NativeInstance
	{
		::AIS_MinRadiusDimension* get()
		{
			return static_cast<::AIS_MinRadiusDimension*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_MinRadiusDimension^ CreateDowncasted(::AIS_MinRadiusDimension* instance);

public:
	AIS_MinRadiusDimension(Macad::Occt::TopoDS_Shape^ aShape, double aVal, Macad::Occt::TCollection_ExtendedString^ aText);
	/* Method skipped due to unknown mapping: void AIS_MinRadiusDimension(TopoDS_Shape aShape, Standard_Real aVal, TCollection_ExtendedString aText, gp_Pnt aPosition, DsgPrs_ArrowSide aSymbolPrs, Standard_Real anArrowSize, ) */
	/* Method skipped due to unknown mapping: void AIS_MinRadiusDimension(TopoDS_Shape aShape, Standard_Real aVal, TCollection_ExtendedString aText, gp_Pnt aPosition, DsgPrs_ArrowSide aSymbolPrs, Standard_Real anArrowSize, ) */
	AIS_MinRadiusDimension(Macad::Occt::AIS_MinRadiusDimension^ parameter1);
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
}; // class AIS_MinRadiusDimension

//---------------------------------------------------------------------
//  Class  AIS_MultipleConnectedInteractive
//---------------------------------------------------------------------
public ref class AIS_MultipleConnectedInteractive sealed : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_MultipleConnectedInteractive_h
public:
	Include_AIS_MultipleConnectedInteractive_h
#endif

public:
	AIS_MultipleConnectedInteractive(::AIS_MultipleConnectedInteractive* nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	AIS_MultipleConnectedInteractive(::AIS_MultipleConnectedInteractive& nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	property ::AIS_MultipleConnectedInteractive* NativeInstance
	{
		::AIS_MultipleConnectedInteractive* get()
		{
			return static_cast<::AIS_MultipleConnectedInteractive*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_MultipleConnectedInteractive^ CreateDowncasted(::AIS_MultipleConnectedInteractive* instance);

public:
	AIS_MultipleConnectedInteractive();
	AIS_MultipleConnectedInteractive(Macad::Occt::AIS_MultipleConnectedInteractive^ parameter1);
	Macad::Occt::AIS_InteractiveObject^ Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::Geom_Transformation^ theLocation, Macad::Occt::Graphic3d_TransformPers^ theTrsfPers);
	Macad::Occt::AIS_KindOfInteractive Type();
	int Signature();
	bool HasConnection();
	void Disconnect(Macad::Occt::AIS_InteractiveObject^ theInteractive);
	void DisconnectAll();
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Graphic3d_Structure^ aPresentation);
	bool AcceptShapeDecomposition();
	Macad::Occt::SelectMgr_EntityOwner^ GetAssemblyOwner();
	Macad::Occt::SelectMgr_EntityOwner^ GlobalSelOwner();
	void SetContext(Macad::Occt::AIS_InteractiveContext^ theCtx);
	Macad::Occt::AIS_InteractiveObject^ Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj);
	Macad::Occt::AIS_InteractiveObject^ Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::Trsf theLocation);
	Macad::Occt::AIS_InteractiveObject^ Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::Trsf theLocation, Macad::Occt::Graphic3d_TransformPers^ theTrsfPers);
	Macad::Occt::AIS_InteractiveObject^ Connect(Macad::Occt::AIS_InteractiveObject^ theInteractive, Macad::Occt::Trsf theLocation, Macad::Occt::Graphic3d_TransModeFlags% theTrsfPersFlag, Macad::Occt::Pnt theTrsfPersPoint);
}; // class AIS_MultipleConnectedInteractive

//---------------------------------------------------------------------
//  Class  AIS_OffsetDimension
//---------------------------------------------------------------------
public ref class AIS_OffsetDimension sealed : public Macad::Occt::AIS_Relation
{

#ifdef Include_AIS_OffsetDimension_h
public:
	Include_AIS_OffsetDimension_h
#endif

public:
	AIS_OffsetDimension(::AIS_OffsetDimension* nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	AIS_OffsetDimension(::AIS_OffsetDimension& nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	property ::AIS_OffsetDimension* NativeInstance
	{
		::AIS_OffsetDimension* get()
		{
			return static_cast<::AIS_OffsetDimension*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_OffsetDimension^ CreateDowncasted(::AIS_OffsetDimension* instance);

public:
	AIS_OffsetDimension(Macad::Occt::TopoDS_Shape^ FistShape, Macad::Occt::TopoDS_Shape^ SecondShape, double aVal, Macad::Occt::TCollection_ExtendedString^ aText);
	AIS_OffsetDimension(Macad::Occt::AIS_OffsetDimension^ parameter1);
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
	Macad::Occt::AIS_KindOfDimension KindOfDimension();
	bool IsMovable();
	void SetRelativePos(Macad::Occt::Trsf aTrsf);
}; // class AIS_OffsetDimension

//---------------------------------------------------------------------
//  Class  AIS_ParallelRelation
//---------------------------------------------------------------------
public ref class AIS_ParallelRelation sealed : public Macad::Occt::AIS_Relation
{

#ifdef Include_AIS_ParallelRelation_h
public:
	Include_AIS_ParallelRelation_h
#endif

public:
	AIS_ParallelRelation(::AIS_ParallelRelation* nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	AIS_ParallelRelation(::AIS_ParallelRelation& nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	property ::AIS_ParallelRelation* NativeInstance
	{
		::AIS_ParallelRelation* get()
		{
			return static_cast<::AIS_ParallelRelation*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_ParallelRelation^ CreateDowncasted(::AIS_ParallelRelation* instance);

public:
	AIS_ParallelRelation(Macad::Occt::TopoDS_Shape^ aFShape, Macad::Occt::TopoDS_Shape^ aSShape, Macad::Occt::Geom_Plane^ aPlane);
	/* Method skipped due to unknown mapping: void AIS_ParallelRelation(TopoDS_Shape aFShape, TopoDS_Shape aSShape, Geom_Plane aPlane, gp_Pnt aPosition, DsgPrs_ArrowSide aSymbolPrs, Standard_Real anArrowSize, ) */
	/* Method skipped due to unknown mapping: void AIS_ParallelRelation(TopoDS_Shape aFShape, TopoDS_Shape aSShape, Geom_Plane aPlane, gp_Pnt aPosition, DsgPrs_ArrowSide aSymbolPrs, Standard_Real anArrowSize, ) */
	AIS_ParallelRelation(Macad::Occt::AIS_ParallelRelation^ parameter1);
	bool IsMovable();
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
}; // class AIS_ParallelRelation

//---------------------------------------------------------------------
//  Class  AIS_PerpendicularRelation
//---------------------------------------------------------------------
public ref class AIS_PerpendicularRelation sealed : public Macad::Occt::AIS_Relation
{

#ifdef Include_AIS_PerpendicularRelation_h
public:
	Include_AIS_PerpendicularRelation_h
#endif

public:
	AIS_PerpendicularRelation(::AIS_PerpendicularRelation* nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	AIS_PerpendicularRelation(::AIS_PerpendicularRelation& nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	property ::AIS_PerpendicularRelation* NativeInstance
	{
		::AIS_PerpendicularRelation* get()
		{
			return static_cast<::AIS_PerpendicularRelation*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_PerpendicularRelation^ CreateDowncasted(::AIS_PerpendicularRelation* instance);

public:
	AIS_PerpendicularRelation(Macad::Occt::TopoDS_Shape^ aFShape, Macad::Occt::TopoDS_Shape^ aSShape, Macad::Occt::Geom_Plane^ aPlane);
	AIS_PerpendicularRelation(Macad::Occt::TopoDS_Shape^ aFShape, Macad::Occt::TopoDS_Shape^ aSShape);
	AIS_PerpendicularRelation(Macad::Occt::AIS_PerpendicularRelation^ parameter1);
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
}; // class AIS_PerpendicularRelation

//---------------------------------------------------------------------
//  Class  AIS_Plane
//---------------------------------------------------------------------
public ref class AIS_Plane sealed : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_Plane_h
public:
	Include_AIS_Plane_h
#endif

public:
	AIS_Plane(::AIS_Plane* nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	AIS_Plane(::AIS_Plane& nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	property ::AIS_Plane* NativeInstance
	{
		::AIS_Plane* get()
		{
			return static_cast<::AIS_Plane*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_Plane^ CreateDowncasted(::AIS_Plane* instance);

public:
	AIS_Plane(Macad::Occt::Geom_Plane^ aComponent, bool aCurrentMode);
	AIS_Plane(Macad::Occt::Geom_Plane^ aComponent);
	AIS_Plane(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt aCenter, bool aCurrentMode);
	AIS_Plane(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt aCenter);
	AIS_Plane(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt aCenter, Macad::Occt::Pnt aPmin, Macad::Occt::Pnt aPmax, bool aCurrentMode);
	AIS_Plane(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt aCenter, Macad::Occt::Pnt aPmin, Macad::Occt::Pnt aPmax);
	AIS_Plane(Macad::Occt::Geom_Axis2Placement^ aComponent, Macad::Occt::AIS_TypeOfPlane aPlaneType, bool aCurrentMode);
	AIS_Plane(Macad::Occt::Geom_Axis2Placement^ aComponent, Macad::Occt::AIS_TypeOfPlane aPlaneType);
	AIS_Plane(Macad::Occt::AIS_Plane^ parameter1);
	void SetSize(double aValue);
	void SetSize(double Xval, double YVal);
	void UnsetSize();
	bool Size(double% X, double% Y);
	bool HasOwnSize();
	int Signature();
	Macad::Occt::AIS_KindOfInteractive Type();
	Macad::Occt::Geom_Plane^ Component();
	void SetComponent(Macad::Occt::Geom_Plane^ aComponent);
	bool PlaneAttributes(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt% aCenter, Macad::Occt::Pnt% aPmin, Macad::Occt::Pnt% aPmax);
	void SetPlaneAttributes(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt aCenter, Macad::Occt::Pnt aPmin, Macad::Occt::Pnt aPmax);
	Macad::Occt::Pnt Center();
	void SetCenter(Macad::Occt::Pnt theCenter);
	void SetAxis2Placement(Macad::Occt::Geom_Axis2Placement^ aComponent, Macad::Occt::AIS_TypeOfPlane aPlaneType);
	Macad::Occt::Geom_Axis2Placement^ Axis2Placement();
	Macad::Occt::AIS_TypeOfPlane TypeOfPlane();
	bool IsXYZPlane();
	bool CurrentMode();
	void SetCurrentMode(bool theCurrentMode);
	bool AcceptDisplayMode(int aMode);
	void SetContext(Macad::Occt::AIS_InteractiveContext^ aCtx);
	/* Method skipped due to unknown mapping: Select3D_TypeOfSensitivity TypeOfSensitivity() */
	/* Method skipped due to unknown mapping: void SetTypeOfSensitivity(Select3D_TypeOfSensitivity theTypeOfSensitivity, ) */
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
	void ComputeSelection(Macad::Occt::SelectMgr_Selection^ theSelection, int theMode);
	void SetColor(Macad::Occt::Quantity_Color^ aColor);
	void UnsetColor();
}; // class AIS_Plane

//---------------------------------------------------------------------
//  Class  AIS_Point
//---------------------------------------------------------------------
public ref class AIS_Point : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_Point_h
public:
	Include_AIS_Point_h
#endif

protected:
	AIS_Point(InitMode init)
		: Macad::Occt::AIS_InteractiveObject( init )
	{}

public:
	AIS_Point(::AIS_Point* nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	AIS_Point(::AIS_Point& nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	property ::AIS_Point* NativeInstance
	{
		::AIS_Point* get()
		{
			return static_cast<::AIS_Point*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_Point^ CreateDowncasted(::AIS_Point* instance);

public:
	AIS_Point(Macad::Occt::Geom_Point^ aComponent);
	AIS_Point(Macad::Occt::AIS_Point^ parameter1);
	int Signature();
	Macad::Occt::AIS_KindOfInteractive Type();
	Macad::Occt::Geom_Point^ Component();
	void SetComponent(Macad::Occt::Geom_Point^ aComponent);
	bool AcceptDisplayMode(int aMode);
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	void UnsetColor();
	void SetMarker(Macad::Occt::Aspect_TypeOfMarker aType);
	void UnsetMarker();
	bool HasMarker();
	Macad::Occt::TopoDS_Vertex^ Vertex();
}; // class AIS_Point

//---------------------------------------------------------------------
//  Class  AIS_PlaneTrihedron
//---------------------------------------------------------------------
public ref class AIS_PlaneTrihedron sealed : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_PlaneTrihedron_h
public:
	Include_AIS_PlaneTrihedron_h
#endif

public:
	AIS_PlaneTrihedron(::AIS_PlaneTrihedron* nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	AIS_PlaneTrihedron(::AIS_PlaneTrihedron& nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	property ::AIS_PlaneTrihedron* NativeInstance
	{
		::AIS_PlaneTrihedron* get()
		{
			return static_cast<::AIS_PlaneTrihedron*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_PlaneTrihedron^ CreateDowncasted(::AIS_PlaneTrihedron* instance);

public:
	AIS_PlaneTrihedron(Macad::Occt::Geom_Plane^ aPlane);
	AIS_PlaneTrihedron(Macad::Occt::AIS_PlaneTrihedron^ parameter1);
	Macad::Occt::Geom_Plane^ Component();
	void SetComponent(Macad::Occt::Geom_Plane^ aPlane);
	Macad::Occt::AIS_Line^ XAxis();
	Macad::Occt::AIS_Line^ YAxis();
	Macad::Occt::AIS_Point^ Position();
	void SetLength(double theLength);
	double GetLength();
	bool AcceptDisplayMode(int aMode);
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
	int Signature();
	Macad::Occt::AIS_KindOfInteractive Type();
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	void SetXLabel(Macad::Occt::TCollection_AsciiString^ theLabel);
	void SetYLabel(Macad::Occt::TCollection_AsciiString^ theLabel);
}; // class AIS_PlaneTrihedron

//---------------------------------------------------------------------
//  Class  AIS_PointCloud
//---------------------------------------------------------------------
public ref class AIS_PointCloud sealed : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_PointCloud_h
public:
	Include_AIS_PointCloud_h
#endif

public:
	AIS_PointCloud(::AIS_PointCloud* nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	AIS_PointCloud(::AIS_PointCloud& nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	property ::AIS_PointCloud* NativeInstance
	{
		::AIS_PointCloud* get()
		{
			return static_cast<::AIS_PointCloud*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_PointCloud^ CreateDowncasted(::AIS_PointCloud* instance);

public:
	//---------------------------------------------------------------------
	//  Enum  DisplayMode
	//---------------------------------------------------------------------
	enum class DisplayMode
	{
		DM_Points = 0,
		DM_BndBox = 2
	}; // enum  class DisplayMode

	//---------------------------------------------------------------------
	//  Enum  SelectionMode
	//---------------------------------------------------------------------
	enum class SelectionMode
	{
		SM_Points = 0,
		SM_SubsetOfPoints = 1,
		SM_BndBox = 2
	}; // enum  class SelectionMode

	AIS_PointCloud();
	AIS_PointCloud(Macad::Occt::AIS_PointCloud^ parameter1);
	void SetPoints(Macad::Occt::Graphic3d_ArrayOfPoints^ thePoints);
	void SetPoints(Macad::Occt::TColgp_HArray1OfPnt^ theCoords, Macad::Occt::Quantity_HArray1OfColor^ theColors, Macad::Occt::TColgp_HArray1OfDir^ theNormals);
	void SetPoints(Macad::Occt::TColgp_HArray1OfPnt^ theCoords, Macad::Occt::Quantity_HArray1OfColor^ theColors);
	void SetPoints(Macad::Occt::TColgp_HArray1OfPnt^ theCoords);
	Macad::Occt::Graphic3d_ArrayOfPoints^ GetPoints();
	Macad::Occt::Bnd_Box^ GetBoundingBox();
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	void UnsetColor();
	void SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theMat);
	void UnsetMaterial();
}; // class AIS_PointCloud

//---------------------------------------------------------------------
//  Class  AIS_PointCloudOwner
//---------------------------------------------------------------------
public ref class AIS_PointCloudOwner sealed : public Macad::Occt::SelectMgr_EntityOwner
{

#ifdef Include_AIS_PointCloudOwner_h
public:
	Include_AIS_PointCloudOwner_h
#endif

public:
	AIS_PointCloudOwner(::AIS_PointCloudOwner* nativeInstance)
		: Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
	{}

	AIS_PointCloudOwner(::AIS_PointCloudOwner& nativeInstance)
		: Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
	{}

	property ::AIS_PointCloudOwner* NativeInstance
	{
		::AIS_PointCloudOwner* get()
		{
			return static_cast<::AIS_PointCloudOwner*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_PointCloudOwner^ CreateDowncasted(::AIS_PointCloudOwner* instance);

public:
	AIS_PointCloudOwner(Macad::Occt::AIS_PointCloud^ theOrigin);
	AIS_PointCloudOwner(Macad::Occt::AIS_PointCloudOwner^ parameter1);
	Macad::Occt::TColStd_HPackedMapOfInteger^ SelectedPoints();
	Macad::Occt::TColStd_HPackedMapOfInteger^ DetectedPoints();
	bool IsForcedHilight();
	/* Method skipped due to unknown mapping: void HilightWithColor(PrsMgr_PresentationManager thePrsMgr, Prs3d_Drawer theStyle, Standard_Integer theMode, ) */
	/* Method skipped due to unknown mapping: void Unhilight(PrsMgr_PresentationManager thePrsMgr, Standard_Integer theMode, ) */
	/* Method skipped due to unknown mapping: void Clear(PrsMgr_PresentationManager thePrsMgr, Standard_Integer theMode, ) */
}; // class AIS_PointCloudOwner

//---------------------------------------------------------------------
//  Class  AIS_RadiusDimension
//---------------------------------------------------------------------
public ref class AIS_RadiusDimension sealed : public Macad::Occt::AIS_Dimension
{

#ifdef Include_AIS_RadiusDimension_h
public:
	Include_AIS_RadiusDimension_h
#endif

public:
	AIS_RadiusDimension(::AIS_RadiusDimension* nativeInstance)
		: Macad::Occt::AIS_Dimension( nativeInstance )
	{}

	AIS_RadiusDimension(::AIS_RadiusDimension& nativeInstance)
		: Macad::Occt::AIS_Dimension( nativeInstance )
	{}

	property ::AIS_RadiusDimension* NativeInstance
	{
		::AIS_RadiusDimension* get()
		{
			return static_cast<::AIS_RadiusDimension*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_RadiusDimension^ CreateDowncasted(::AIS_RadiusDimension* instance);

public:
	AIS_RadiusDimension(Macad::Occt::gp_Circ^ theCircle);
	AIS_RadiusDimension(Macad::Occt::gp_Circ^ theCircle, Macad::Occt::Pnt theAnchorPoint);
	AIS_RadiusDimension(Macad::Occt::TopoDS_Shape^ theShape);
	AIS_RadiusDimension(Macad::Occt::AIS_RadiusDimension^ parameter1);
	Macad::Occt::gp_Circ^ Circle();
	Macad::Occt::Pnt AnchorPoint();
	Macad::Occt::TopoDS_Shape^ Shape();
	void SetMeasuredGeometry(Macad::Occt::gp_Circ^ theCircle);
	void SetMeasuredGeometry(Macad::Occt::gp_Circ^ theCircle, Macad::Occt::Pnt theAnchorPoint, bool theHasAnchor);
	void SetMeasuredGeometry(Macad::Occt::gp_Circ^ theCircle, Macad::Occt::Pnt theAnchorPoint);
	void SetMeasuredGeometry(Macad::Occt::TopoDS_Shape^ theShape);
	void SetMeasuredGeometry(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::Pnt theAnchorPoint, bool theHasAnchor);
	void SetMeasuredGeometry(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::Pnt theAnchorPoint);
	Macad::Occt::TCollection_AsciiString^ GetDisplayUnits();
	Macad::Occt::TCollection_AsciiString^ GetModelUnits();
	void SetDisplayUnits(Macad::Occt::TCollection_AsciiString^ theUnits);
	void SetModelUnits(Macad::Occt::TCollection_AsciiString^ theUnits);
	void SetTextPosition(Macad::Occt::Pnt theTextPos);
	Macad::Occt::Pnt GetTextPosition();
}; // class AIS_RadiusDimension

//---------------------------------------------------------------------
//  Class  AIS_RubberBand
//---------------------------------------------------------------------
public ref class AIS_RubberBand sealed : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_RubberBand_h
public:
	Include_AIS_RubberBand_h
#endif

public:
	AIS_RubberBand(::AIS_RubberBand* nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	AIS_RubberBand(::AIS_RubberBand& nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	property ::AIS_RubberBand* NativeInstance
	{
		::AIS_RubberBand* get()
		{
			return static_cast<::AIS_RubberBand*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_RubberBand^ CreateDowncasted(::AIS_RubberBand* instance);

public:
	AIS_RubberBand();
	AIS_RubberBand(Macad::Occt::Quantity_Color^ theLineColor, Macad::Occt::Aspect_TypeOfLine theType, double theLineWidth, bool theIsPolygonClosed);
	AIS_RubberBand(Macad::Occt::Quantity_Color^ theLineColor, Macad::Occt::Aspect_TypeOfLine theType, double theLineWidth);
	AIS_RubberBand(Macad::Occt::Quantity_Color^ theLineColor, Macad::Occt::Aspect_TypeOfLine theType);
	AIS_RubberBand(Macad::Occt::Quantity_Color^ theLineColor, Macad::Occt::Aspect_TypeOfLine theType, Macad::Occt::Quantity_Color^ theFillColor, double theTransparency, double theLineWidth, bool theIsPolygonClosed);
	AIS_RubberBand(Macad::Occt::Quantity_Color^ theLineColor, Macad::Occt::Aspect_TypeOfLine theType, Macad::Occt::Quantity_Color^ theFillColor, double theTransparency, double theLineWidth);
	AIS_RubberBand(Macad::Occt::Quantity_Color^ theLineColor, Macad::Occt::Aspect_TypeOfLine theType, Macad::Occt::Quantity_Color^ theFillColor, double theTransparency);
	AIS_RubberBand(Macad::Occt::Quantity_Color^ theLineColor, Macad::Occt::Aspect_TypeOfLine theType, Macad::Occt::Quantity_Color^ theFillColor);
	AIS_RubberBand(Macad::Occt::AIS_RubberBand^ parameter1);
	void SetRectangle(int theMinX, int theMinY, int theMaxX, int theMaxY);
	void AddPoint(Macad::Occt::Graphic3d_Vec2i^ thePoint);
	void RemoveLastPoint();
	/* Method skipped due to unknown mapping: NCollection_Sequence<NCollection_Vec2<int> > Points() */
	void ClearPoints();
	Macad::Occt::Quantity_Color^ LineColor();
	void SetLineColor(Macad::Occt::Quantity_Color^ theColor);
	Macad::Occt::Quantity_Color^ FillColor();
	void SetFillColor(Macad::Occt::Quantity_Color^ theColor);
	void SetLineWidth(double theWidth);
	double LineWidth();
	void SetLineType(Macad::Occt::Aspect_TypeOfLine theType);
	Macad::Occt::Aspect_TypeOfLine LineType();
	void SetFillTransparency(double theValue);
	double FillTransparency();
	void SetFilling(bool theIsFilling);
	void SetFilling(Macad::Occt::Quantity_Color^ theColor, double theTransparency);
	bool IsFilling();
	bool IsPolygonClosed();
	void SetPolygonClosed(bool theIsPolygonClosed);
}; // class AIS_RubberBand

//---------------------------------------------------------------------
//  Class  AIS_TypeFilter
//---------------------------------------------------------------------
public ref class AIS_TypeFilter : public Macad::Occt::SelectMgr_Filter
{

#ifdef Include_AIS_TypeFilter_h
public:
	Include_AIS_TypeFilter_h
#endif

protected:
	AIS_TypeFilter(InitMode init)
		: Macad::Occt::SelectMgr_Filter( init )
	{}

public:
	AIS_TypeFilter(::AIS_TypeFilter* nativeInstance)
		: Macad::Occt::SelectMgr_Filter( nativeInstance )
	{}

	AIS_TypeFilter(::AIS_TypeFilter& nativeInstance)
		: Macad::Occt::SelectMgr_Filter( nativeInstance )
	{}

	property ::AIS_TypeFilter* NativeInstance
	{
		::AIS_TypeFilter* get()
		{
			return static_cast<::AIS_TypeFilter*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_TypeFilter^ CreateDowncasted(::AIS_TypeFilter* instance);

public:
	AIS_TypeFilter(Macad::Occt::AIS_KindOfInteractive aGivenKind);
	AIS_TypeFilter(Macad::Occt::AIS_TypeFilter^ parameter1);
	bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj);
}; // class AIS_TypeFilter

//---------------------------------------------------------------------
//  Class  AIS_SignatureFilter
//---------------------------------------------------------------------
public ref class AIS_SignatureFilter sealed : public Macad::Occt::AIS_TypeFilter
{

#ifdef Include_AIS_SignatureFilter_h
public:
	Include_AIS_SignatureFilter_h
#endif

public:
	AIS_SignatureFilter(::AIS_SignatureFilter* nativeInstance)
		: Macad::Occt::AIS_TypeFilter( nativeInstance )
	{}

	AIS_SignatureFilter(::AIS_SignatureFilter& nativeInstance)
		: Macad::Occt::AIS_TypeFilter( nativeInstance )
	{}

	property ::AIS_SignatureFilter* NativeInstance
	{
		::AIS_SignatureFilter* get()
		{
			return static_cast<::AIS_SignatureFilter*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_SignatureFilter^ CreateDowncasted(::AIS_SignatureFilter* instance);

public:
	AIS_SignatureFilter(Macad::Occt::AIS_KindOfInteractive aGivenKind, int aGivenSignature);
	AIS_SignatureFilter(Macad::Occt::AIS_SignatureFilter^ parameter1);
	bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj);
}; // class AIS_SignatureFilter

//---------------------------------------------------------------------
//  Class  AIS_SymmetricRelation
//---------------------------------------------------------------------
public ref class AIS_SymmetricRelation sealed : public Macad::Occt::AIS_Relation
{

#ifdef Include_AIS_SymmetricRelation_h
public:
	Include_AIS_SymmetricRelation_h
#endif

public:
	AIS_SymmetricRelation(::AIS_SymmetricRelation* nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	AIS_SymmetricRelation(::AIS_SymmetricRelation& nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	property ::AIS_SymmetricRelation* NativeInstance
	{
		::AIS_SymmetricRelation* get()
		{
			return static_cast<::AIS_SymmetricRelation*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_SymmetricRelation^ CreateDowncasted(::AIS_SymmetricRelation* instance);

public:
	AIS_SymmetricRelation(Macad::Occt::TopoDS_Shape^ aSymmTool, Macad::Occt::TopoDS_Shape^ FirstShape, Macad::Occt::TopoDS_Shape^ SecondShape, Macad::Occt::Geom_Plane^ aPlane);
	AIS_SymmetricRelation(Macad::Occt::AIS_SymmetricRelation^ parameter1);
	bool IsMovable();
	void SetTool(Macad::Occt::TopoDS_Shape^ aSymmetricTool);
	Macad::Occt::TopoDS_Shape^ GetTool();
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
}; // class AIS_SymmetricRelation

//---------------------------------------------------------------------
//  Class  AIS_TangentRelation
//---------------------------------------------------------------------
public ref class AIS_TangentRelation sealed : public Macad::Occt::AIS_Relation
{

#ifdef Include_AIS_TangentRelation_h
public:
	Include_AIS_TangentRelation_h
#endif

public:
	AIS_TangentRelation(::AIS_TangentRelation* nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	AIS_TangentRelation(::AIS_TangentRelation& nativeInstance)
		: Macad::Occt::AIS_Relation( nativeInstance )
	{}

	property ::AIS_TangentRelation* NativeInstance
	{
		::AIS_TangentRelation* get()
		{
			return static_cast<::AIS_TangentRelation*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_TangentRelation^ CreateDowncasted(::AIS_TangentRelation* instance);

public:
	AIS_TangentRelation(Macad::Occt::TopoDS_Shape^ aFShape, Macad::Occt::TopoDS_Shape^ aSShape, Macad::Occt::Geom_Plane^ aPlane, int anExternRef);
	AIS_TangentRelation(Macad::Occt::TopoDS_Shape^ aFShape, Macad::Occt::TopoDS_Shape^ aSShape, Macad::Occt::Geom_Plane^ aPlane);
	AIS_TangentRelation(Macad::Occt::AIS_TangentRelation^ parameter1);
	int ExternRef();
	void SetExternRef(int aRef);
	void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation);
}; // class AIS_TangentRelation

//---------------------------------------------------------------------
//  Class  AIS_TextLabel
//---------------------------------------------------------------------
public ref class AIS_TextLabel sealed : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_TextLabel_h
public:
	Include_AIS_TextLabel_h
#endif

public:
	AIS_TextLabel(::AIS_TextLabel* nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	AIS_TextLabel(::AIS_TextLabel& nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	property ::AIS_TextLabel* NativeInstance
	{
		::AIS_TextLabel* get()
		{
			return static_cast<::AIS_TextLabel*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_TextLabel^ CreateDowncasted(::AIS_TextLabel* instance);

public:
	AIS_TextLabel();
	AIS_TextLabel(Macad::Occt::AIS_TextLabel^ parameter1);
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	void SetTransparency(double theValue);
	void UnsetTransparency();
	void SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ parameter1);
	void SetText(Macad::Occt::TCollection_ExtendedString^ theText);
	void SetPosition(Macad::Occt::Pnt thePosition);
	void SetHJustification(Macad::Occt::Graphic3d_HorizontalTextAlignment theHJust);
	void SetVJustification(Macad::Occt::Graphic3d_VerticalTextAlignment theVJust);
	void SetAngle(double theAngle);
	void SetZoomable(bool theIsZoomable);
	void SetHeight(double theHeight);
	/* Method skipped due to unknown mapping: void SetFontAspect(Font_FontAspect theFontAspect, ) */
	void SetFont(System::String^ theFont);
	void SetOrientation3D(Macad::Occt::Ax2 theOrientation);
	void UnsetOrientation3D();
	Macad::Occt::Pnt Position();
	Macad::Occt::Ax2 Orientation3D();
	bool HasOrientation3D();
	void SetFlipping(bool theIsFlipping);
	bool HasFlipping();
	void SetDisplayType(Macad::Occt::Aspect_TypeOfDisplayText theDisplayType);
	void SetColorSubTitle(Macad::Occt::Quantity_Color^ theColor);
}; // class AIS_TextLabel

//---------------------------------------------------------------------
//  Class  AIS_TexturedShape
//---------------------------------------------------------------------
public ref class AIS_TexturedShape sealed : public Macad::Occt::AIS_Shape
{

#ifdef Include_AIS_TexturedShape_h
public:
	Include_AIS_TexturedShape_h
#endif

public:
	AIS_TexturedShape(::AIS_TexturedShape* nativeInstance)
		: Macad::Occt::AIS_Shape( nativeInstance )
	{}

	AIS_TexturedShape(::AIS_TexturedShape& nativeInstance)
		: Macad::Occt::AIS_Shape( nativeInstance )
	{}

	property ::AIS_TexturedShape* NativeInstance
	{
		::AIS_TexturedShape* get()
		{
			return static_cast<::AIS_TexturedShape*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_TexturedShape^ CreateDowncasted(::AIS_TexturedShape* instance);

public:
	AIS_TexturedShape(Macad::Occt::TopoDS_Shape^ theShape);
	AIS_TexturedShape(Macad::Occt::AIS_TexturedShape^ parameter1);
	void SetTextureFileName(Macad::Occt::TCollection_AsciiString^ theTextureFileName);
	void SetTexturePixMap(Macad::Occt::Image_PixMap^ theTexturePixMap);
	bool TextureMapState();
	void SetTextureMapOn();
	void SetTextureMapOff();
	System::String^ TextureFile();
	Macad::Occt::Image_PixMap^ TexturePixMap();
	void UpdateAttributes();
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	void UnsetColor();
	void SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theAspect);
	void UnsetMaterial();
	void EnableTextureModulate();
	void DisableTextureModulate();
	bool TextureRepeat();
	double URepeat();
	double VRepeat();
	void SetTextureRepeat(bool theToRepeat, double theURepeat, double theVRepeat);
	void SetTextureRepeat(bool theToRepeat, double theURepeat);
	void SetTextureRepeat(bool theToRepeat);
	bool TextureOrigin();
	double TextureUOrigin();
	double TextureVOrigin();
	void SetTextureOrigin(bool theToSetTextureOrigin, double theUOrigin, double theVOrigin);
	void SetTextureOrigin(bool theToSetTextureOrigin, double theUOrigin);
	void SetTextureOrigin(bool theToSetTextureOrigin);
	bool TextureScale();
	double TextureScaleU();
	double TextureScaleV();
	void SetTextureScale(bool theToSetTextureScale, double theScaleU, double theScaleV);
	void SetTextureScale(bool theToSetTextureScale, double theScaleU);
	void SetTextureScale(bool theToSetTextureScale);
	bool ShowTriangles();
	void ShowTriangles(bool theToShowTriangles);
	bool TextureModulate();
	bool AcceptDisplayMode(int theMode);
}; // class AIS_TexturedShape

//---------------------------------------------------------------------
//  Class  AIS_Triangulation
//---------------------------------------------------------------------
public ref class AIS_Triangulation sealed : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_Triangulation_h
public:
	Include_AIS_Triangulation_h
#endif

public:
	AIS_Triangulation(::AIS_Triangulation* nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	AIS_Triangulation(::AIS_Triangulation& nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	property ::AIS_Triangulation* NativeInstance
	{
		::AIS_Triangulation* get()
		{
			return static_cast<::AIS_Triangulation*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_Triangulation^ CreateDowncasted(::AIS_Triangulation* instance);

public:
	/* Method skipped due to unknown mapping: void AIS_Triangulation(Poly_Triangulation aTriangulation, ) */
	AIS_Triangulation(Macad::Occt::AIS_Triangulation^ parameter1);
	void SetColors(Macad::Occt::TColStd_HArray1OfInteger^ aColor);
	Macad::Occt::TColStd_HArray1OfInteger^ GetColors();
	bool HasVertexColors();
	/* Method skipped due to unknown mapping: void SetTriangulation(Poly_Triangulation aTriangulation, ) */
	/* Method skipped due to unknown mapping: Poly_Triangulation GetTriangulation() */
	void SetTransparency(double aValue);
	void SetTransparency();
	void UnsetTransparency();
}; // class AIS_Triangulation

//---------------------------------------------------------------------
//  Class  AIS_Trihedron
//---------------------------------------------------------------------
public ref class AIS_Trihedron sealed : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_Trihedron_h
public:
	Include_AIS_Trihedron_h
#endif

public:
	AIS_Trihedron(::AIS_Trihedron* nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	AIS_Trihedron(::AIS_Trihedron& nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	property ::AIS_Trihedron* NativeInstance
	{
		::AIS_Trihedron* get()
		{
			return static_cast<::AIS_Trihedron*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_Trihedron^ CreateDowncasted(::AIS_Trihedron* instance);

public:
	AIS_Trihedron(Macad::Occt::Geom_Axis2Placement^ theComponent);
	AIS_Trihedron(Macad::Occt::AIS_Trihedron^ parameter1);
	void SetDatumDisplayMode(Macad::Occt::Prs3d_DatumMode theMode);
	Macad::Occt::Prs3d_DatumMode DatumDisplayMode();
	Macad::Occt::Geom_Axis2Placement^ Component();
	void SetComponent(Macad::Occt::Geom_Axis2Placement^ theComponent);
	bool HasOwnSize();
	void SetSize(double theValue);
	void UnsetSize();
	double Size();
	bool AcceptDisplayMode(int theMode);
	int Signature();
	Macad::Occt::AIS_KindOfInteractive Type();
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	void SetTextColor(Macad::Occt::Quantity_Color^ theColor);
	bool HasTextColor();
	Macad::Occt::Quantity_Color^ TextColor();
	void SetArrowColor(Macad::Occt::Quantity_Color^ theColor);
	bool HasArrowColor();
	Macad::Occt::Quantity_Color^ ArrowColor();
	void UnsetColor();
	void SetDatumPartColor(Macad::Occt::Prs3d_DatumParts thePart, Macad::Occt::Quantity_Color^ theColor);
	Macad::Occt::Quantity_Color^ DatumPartColor(Macad::Occt::Prs3d_DatumParts thePart);
	void SetOriginColor(Macad::Occt::Quantity_Color^ theColor);
	void SetXAxisColor(Macad::Occt::Quantity_Color^ theColor);
	void SetYAxisColor(Macad::Occt::Quantity_Color^ theColor);
	void SetAxisColor(Macad::Occt::Quantity_Color^ theColor);
	bool ToDrawArrows();
	void SetDrawArrows(bool theToDraw);
	void SetSelectionPriority(Macad::Occt::Prs3d_DatumParts thePart, int thePriority);
	int SelectionPriority(Macad::Occt::Prs3d_DatumParts thePart);
	void SetLabel(Macad::Occt::Prs3d_DatumParts thePart, Macad::Occt::TCollection_ExtendedString^ thePriority);
	Macad::Occt::TCollection_ExtendedString^ Label(Macad::Occt::Prs3d_DatumParts thePart);
	bool IsAutoHilight();
	void ClearSelected();
	/* Method skipped due to unknown mapping: void HilightSelected(PrsMgr_PresentationManager thePM, SelectMgr_SequenceOfOwner theOwners, ) */
	/* Method skipped due to unknown mapping: void HilightOwnerWithColor(PrsMgr_PresentationManager thePM, Prs3d_Drawer theStyle, SelectMgr_EntityOwner theOwner, ) */
}; // class AIS_Trihedron

//---------------------------------------------------------------------
//  Class  AIS_TrihedronOwner
//---------------------------------------------------------------------
public ref class AIS_TrihedronOwner sealed : public Macad::Occt::SelectMgr_EntityOwner
{

#ifdef Include_AIS_TrihedronOwner_h
public:
	Include_AIS_TrihedronOwner_h
#endif

public:
	AIS_TrihedronOwner(::AIS_TrihedronOwner* nativeInstance)
		: Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
	{}

	AIS_TrihedronOwner(::AIS_TrihedronOwner& nativeInstance)
		: Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
	{}

	property ::AIS_TrihedronOwner* NativeInstance
	{
		::AIS_TrihedronOwner* get()
		{
			return static_cast<::AIS_TrihedronOwner*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_TrihedronOwner^ CreateDowncasted(::AIS_TrihedronOwner* instance);

public:
	AIS_TrihedronOwner(Macad::Occt::SelectMgr_SelectableObject^ theSelObject, Macad::Occt::Prs3d_DatumParts theDatumPart, int thePriority);
	AIS_TrihedronOwner(Macad::Occt::AIS_TrihedronOwner^ parameter1);
	Macad::Occt::Prs3d_DatumParts DatumPart();
	/* Method skipped due to unknown mapping: void HilightWithColor(PrsMgr_PresentationManager thePM, Prs3d_Drawer theStyle, Standard_Integer theMode, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean IsHilighted(PrsMgr_PresentationManager thePM, Standard_Integer theMode, ) */
	/* Method skipped due to unknown mapping: void Unhilight(PrsMgr_PresentationManager thePM, Standard_Integer theMode, ) */
}; // class AIS_TrihedronOwner

//---------------------------------------------------------------------
//  Class  AIS_ViewInputBuffer
//---------------------------------------------------------------------
public ref class AIS_ViewInputBuffer sealed : public BaseClass<::AIS_ViewInputBuffer>
{

#ifdef Include_AIS_ViewInputBuffer_h
public:
	Include_AIS_ViewInputBuffer_h
#endif

public:
	AIS_ViewInputBuffer(::AIS_ViewInputBuffer* nativeInstance)
		: BaseClass<::AIS_ViewInputBuffer>( nativeInstance, true )
	{}

	AIS_ViewInputBuffer(::AIS_ViewInputBuffer& nativeInstance)
		: BaseClass<::AIS_ViewInputBuffer>( &nativeInstance, false )
	{}

	property ::AIS_ViewInputBuffer* NativeInstance
	{
		::AIS_ViewInputBuffer* get()
		{
			return static_cast<::AIS_ViewInputBuffer*>(_NativeInstance);
		}
	}

public:
	AIS_ViewInputBuffer();
	AIS_ViewInputBuffer(Macad::Occt::AIS_ViewInputBuffer^ parameter1);
	void Reset();
}; // class AIS_ViewInputBuffer

//---------------------------------------------------------------------
//  Class  AIS_ViewController
//---------------------------------------------------------------------
public ref class AIS_ViewController sealed : public BaseClass<::AIS_ViewController>
{

#ifdef Include_AIS_ViewController_h
public:
	Include_AIS_ViewController_h
#endif

public:
	AIS_ViewController(::AIS_ViewController* nativeInstance)
		: BaseClass<::AIS_ViewController>( nativeInstance, true )
	{}

	AIS_ViewController(::AIS_ViewController& nativeInstance)
		: BaseClass<::AIS_ViewController>( &nativeInstance, false )
	{}

	property ::AIS_ViewController* NativeInstance
	{
		::AIS_ViewController* get()
		{
			return static_cast<::AIS_ViewController*>(_NativeInstance);
		}
	}

public:
	AIS_ViewController();
	Macad::Occt::AIS_ViewInputBuffer^ InputBuffer(Macad::Occt::AIS_ViewInputBufferType theType);
	Macad::Occt::AIS_ViewInputBuffer^ ChangeInputBuffer(Macad::Occt::AIS_ViewInputBufferType theType);
	Macad::Occt::AIS_AnimationCamera^ ViewAnimation();
	void SetViewAnimation(Macad::Occt::AIS_AnimationCamera^ theAnimation);
	void AbortViewAnimation();
	Macad::Occt::AIS_RotationMode RotationMode();
	void SetRotationMode(Macad::Occt::AIS_RotationMode theMode);
	Macad::Occt::AIS_NavigationMode NavigationMode();
	void SetNavigationMode(Macad::Occt::AIS_NavigationMode theMode);
	float MouseAcceleration();
	void SetMouseAcceleration(float theRatio);
	float OrbitAcceleration();
	void SetOrbitAcceleration(float theRatio);
	bool ToShowPanAnchorPoint();
	void SetShowPanAnchorPoint(bool theToShow);
	bool ToShowRotateCenter();
	void SetShowRotateCenter(bool theToShow);
	bool ToLockOrbitZUp();
	void SetLockOrbitZUp(bool theToForceUp);
	bool ToAllowTouchZRotation();
	void SetAllowTouchZRotation(bool theToEnable);
	bool ToAllowRotation();
	void SetAllowRotation(bool theToEnable);
	bool ToAllowPanning();
	void SetAllowPanning(bool theToEnable);
	bool ToAllowZooming();
	void SetAllowZooming(bool theToEnable);
	bool ToAllowZFocus();
	void SetAllowZFocus(bool theToEnable);
	bool ToAllowHighlight();
	void SetAllowHighlight(bool theToEnable);
	bool ToAllowDragging();
	void SetAllowDragging(bool theToEnable);
	bool ToStickToRayOnZoom();
	void SetStickToRayOnZoom(bool theToEnable);
	bool ToStickToRayOnRotation();
	void SetStickToRayOnRotation(bool theToEnable);
	bool ToInvertPitch();
	void SetInvertPitch(bool theToInvert);
	float WalkSpeedAbsolute();
	void SetWalkSpeedAbsolute(float theSpeed);
	float WalkSpeedRelative();
	void SetWalkSpeedRelative(float theFactor);
	float ThrustSpeed();
	void SetThrustSpeed(float theSpeed);
	bool HasPreviousMoveTo();
	Macad::Occt::Graphic3d_Vec2i^ PreviousMoveTo();
	void ResetPreviousMoveTo();
	void KeyDown(unsigned int theKey, double theTime, double thePressure);
	void KeyDown(unsigned int theKey, double theTime);
	void KeyUp(unsigned int theKey, double theTime);
	void KeyFromAxis(unsigned int theNegative, unsigned int thePositive, double theTime, double thePressure);
	Macad::Occt::AIS_WalkDelta^ FetchNavigationKeys(double theCrouchRatio, double theRunRatio);
	/* Method skipped due to unknown mapping: AIS_MouseGestureMap MouseGestureMap() */
	/* Method skipped due to unknown mapping: AIS_MouseGestureMap ChangeMouseGestureMap() */
	double MouseDoubleClickInterval();
	void SetMouseDoubleClickInterval(double theSeconds);
	void SelectInViewer(Macad::Occt::Graphic3d_Vec2i^ thePnt, bool theIsXOR);
	void SelectInViewer(Macad::Occt::Graphic3d_Vec2i^ thePnt);
	/* Method skipped due to unknown mapping: void SelectInViewer(NCollection_Sequence<NCollection_Vec2<int> > thePnts, bool theIsXOR, ) */
	/* Method skipped due to unknown mapping: void SelectInViewer(NCollection_Sequence<NCollection_Vec2<int> > thePnts, bool theIsXOR, ) */
	void UpdateRubberBand(Macad::Occt::Graphic3d_Vec2i^ thePntFrom, Macad::Occt::Graphic3d_Vec2i^ thePntTo, bool theIsXOR);
	void UpdateRubberBand(Macad::Occt::Graphic3d_Vec2i^ thePntFrom, Macad::Occt::Graphic3d_Vec2i^ thePntTo);
	void UpdatePolySelection(Macad::Occt::Graphic3d_Vec2i^ thePnt, bool theToAppend);
	bool UpdateZoom(Macad::Occt::Aspect_ScrollDelta^ theDelta);
	bool UpdateZRotation(double theAngle);
	bool UpdateMouseScroll(Macad::Occt::Aspect_ScrollDelta^ theDelta);
	bool UpdateMouseButtons(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButtons, unsigned int theModifiers, bool theIsEmulated);
	bool UpdateMousePosition(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButtons, unsigned int theModifiers, bool theIsEmulated);
	bool PressMouseButton(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsEmulated);
	bool ReleaseMouseButton(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsEmulated);
	bool UpdateMouseClick(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsDoubleClick);
	unsigned int PressedMouseButtons();
	unsigned int LastMouseFlags();
	Macad::Occt::Graphic3d_Vec2i^ LastMousePosition();
	float TouchToleranceScale();
	void SetTouchToleranceScale(float theTolerance);
	bool HasTouchPoints();
	void AddTouchPoint(size_t theId, Macad::Occt::Graphic3d_Vec2d^ thePnt, bool theClearBefore);
	void AddTouchPoint(size_t theId, Macad::Occt::Graphic3d_Vec2d^ thePnt);
	bool RemoveTouchPoint(size_t theId, bool theClearSelectPnts);
	bool RemoveTouchPoint(size_t theId);
	void UpdateTouchPoint(size_t theId, Macad::Occt::Graphic3d_Vec2d^ thePnt);
	double EventTime();
	void ResetViewInput();
	void UpdateViewOrientation(Macad::Occt::V3d_TypeOfOrientation theOrientation, bool theToFitAll);
	void FlushViewEvents(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, bool theToHandle);
	void FlushViewEvents(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
	void HandleViewEvents(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
	void OnSelectionChanged(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
	void OnObjectDragged(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_DragAction theAction);
	bool PickPoint(Macad::Occt::Pnt% thePnt, Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::Graphic3d_Vec2i^ theCursor, bool theToStickToPickRay);
	Macad::Occt::Pnt GravityPoint(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
	void handleCameraActions(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_WalkDelta^ theWalk);
	void handleMoveTo(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
	bool toAskNextFrame();
	void setAskNextFrame(bool theToDraw);
	void setAskNextFrame();
	bool hasPanningAnchorPoint();
	Macad::Occt::Pnt panningAnchorPoint();
	void setPanningAnchorPoint(Macad::Occt::Pnt thePnt);
	void handlePanning(Macad::Occt::V3d_View^ theView);
	void handleZRotate(Macad::Occt::V3d_View^ theView);
	double MinZoomDistance();
	void SetMinZoomDistance(double theDist);
	void handleZoom(Macad::Occt::V3d_View^ theView, Macad::Occt::Aspect_ScrollDelta^ theParams, Macad::Occt::Pnt thePnt);
	void handleZFocusScroll(Macad::Occt::V3d_View^ theView, Macad::Occt::Aspect_ScrollDelta^ theParams);
	void handleOrbitRotation(Macad::Occt::V3d_View^ theView, Macad::Occt::Pnt thePnt, bool theToLockZUp);
	void handleViewRotation(Macad::Occt::V3d_View^ theView, double theYawExtra, double thePitchExtra, double theRoll, bool theToRestartOnIncrement);
	void handleViewRedraw(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
}; // class AIS_ViewController

//---------------------------------------------------------------------
//  Class  AIS_ViewCubeOwner
//---------------------------------------------------------------------
public ref class AIS_ViewCubeOwner sealed : public Macad::Occt::SelectMgr_EntityOwner
{

#ifdef Include_AIS_ViewCubeOwner_h
public:
	Include_AIS_ViewCubeOwner_h
#endif

public:
	AIS_ViewCubeOwner(::AIS_ViewCubeOwner* nativeInstance)
		: Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
	{}

	AIS_ViewCubeOwner(::AIS_ViewCubeOwner& nativeInstance)
		: Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
	{}

	property ::AIS_ViewCubeOwner* NativeInstance
	{
		::AIS_ViewCubeOwner* get()
		{
			return static_cast<::AIS_ViewCubeOwner*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_ViewCubeOwner^ CreateDowncasted(::AIS_ViewCubeOwner* instance);

public:
	AIS_ViewCubeOwner(Macad::Occt::AIS_ViewCube^ theObject, Macad::Occt::V3d_TypeOfOrientation theOrient, int thePriority);
	AIS_ViewCubeOwner(Macad::Occt::AIS_ViewCube^ theObject, Macad::Occt::V3d_TypeOfOrientation theOrient);
	AIS_ViewCubeOwner(Macad::Occt::AIS_ViewCubeOwner^ parameter1);
	bool IsForcedHilight();
	Macad::Occt::V3d_TypeOfOrientation MainOrientation();
	bool HandleMouseClick(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsDoubleClick);
}; // class AIS_ViewCubeOwner

//---------------------------------------------------------------------
//  Class  AIS_ViewCube
//---------------------------------------------------------------------
public ref class AIS_ViewCube : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_ViewCube_h
public:
	Include_AIS_ViewCube_h
#endif

protected:
	AIS_ViewCube(InitMode init)
		: Macad::Occt::AIS_InteractiveObject( init )
	{}

public:
	AIS_ViewCube(::AIS_ViewCube* nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	AIS_ViewCube(::AIS_ViewCube& nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	property ::AIS_ViewCube* NativeInstance
	{
		::AIS_ViewCube* get()
		{
			return static_cast<::AIS_ViewCube*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_ViewCube^ CreateDowncasted(::AIS_ViewCube* instance);

public:
	AIS_ViewCube();
	AIS_ViewCube(Macad::Occt::AIS_ViewCube^ parameter1);
	static bool IsBoxSide(Macad::Occt::V3d_TypeOfOrientation theOrient);
	static bool IsBoxEdge(Macad::Occt::V3d_TypeOfOrientation theOrient);
	static bool IsBoxCorner(Macad::Occt::V3d_TypeOfOrientation theOrient);
	Macad::Occt::AIS_AnimationCamera^ ViewAnimation();
	void SetViewAnimation(Macad::Occt::AIS_AnimationCamera^ theAnimation);
	bool ToAutoStartAnimation();
	void SetAutoStartAnimation(bool theToEnable);
	bool IsFixedAnimationLoop();
	void SetFixedAnimationLoop(bool theToEnable);
	void ResetStyles();
	double Size();
	void SetSize(double theValue, bool theToAdaptAnother);
	void SetSize(double theValue);
	double BoxFacetExtension();
	void SetBoxFacetExtension(double theValue);
	double AxesPadding();
	void SetAxesPadding(double theValue);
	double BoxEdgeGap();
	void SetBoxEdgeGap(double theValue);
	double BoxEdgeMinSize();
	void SetBoxEdgeMinSize(double theValue);
	double BoxCornerMinSize();
	void SetBoxCornerMinSize(double theValue);
	double RoundRadius();
	void SetRoundRadius(double theValue);
	bool ToDrawAxes();
	void SetDrawAxes(bool theValue);
	bool ToDrawEdges();
	void SetDrawEdges(bool theValue);
	bool ToDrawVertices();
	void SetDrawVertices(bool theValue);
	bool IsYup();
	void SetYup(bool theIsYup, bool theToUpdateLabels);
	void SetYup(bool theIsYup);
	Macad::Occt::Prs3d_ShadingAspect^ BoxSideStyle();
	Macad::Occt::Prs3d_ShadingAspect^ BoxEdgeStyle();
	Macad::Occt::Prs3d_ShadingAspect^ BoxCornerStyle();
	Macad::Occt::Quantity_Color^ BoxColor();
	void SetBoxColor(Macad::Occt::Quantity_Color^ theColor);
	double BoxTransparency();
	void SetBoxTransparency(double theValue);
	Macad::Occt::Quantity_Color^ InnerColor();
	void SetInnerColor(Macad::Occt::Quantity_Color^ theColor);
	Macad::Occt::TCollection_AsciiString^ BoxSideLabel(Macad::Occt::V3d_TypeOfOrientation theSide);
	void SetBoxSideLabel(Macad::Occt::V3d_TypeOfOrientation theSide, Macad::Occt::TCollection_AsciiString^ theLabel);
	Macad::Occt::Quantity_Color^ TextColor();
	void SetTextColor(Macad::Occt::Quantity_Color^ theColor);
	Macad::Occt::TCollection_AsciiString^ Font();
	void SetFont(Macad::Occt::TCollection_AsciiString^ theFont);
	double FontHeight();
	void SetFontHeight(double theValue);
	Macad::Occt::TCollection_AsciiString^ AxisLabel(Macad::Occt::Prs3d_DatumParts theAxis);
	void SetAxesLabels(Macad::Occt::TCollection_AsciiString^ theX, Macad::Occt::TCollection_AsciiString^ theY, Macad::Occt::TCollection_AsciiString^ theZ);
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	void UnsetColor();
	void SetTransparency(double theValue);
	void UnsetTransparency();
	void SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theMat);
	void UnsetMaterial();
	double Duration();
	void SetDuration(double theValue);
	bool ToResetCameraUp();
	void SetResetCamera(bool theToReset);
	bool ToFitSelected();
	void SetFitSelected(bool theToFitSelected);
	bool HasAnimation();
	void StartAnimation(Macad::Occt::AIS_ViewCubeOwner^ theOwner);
	bool UpdateAnimation(bool theToUpdate);
	void HandleClick(Macad::Occt::AIS_ViewCubeOwner^ theOwner);
	bool AcceptDisplayMode(int theMode);
	Macad::Occt::SelectMgr_EntityOwner^ GlobalSelOwner();
	/* Method skipped due to unknown mapping: void Compute(PrsMgr_PresentationManager thePrsMgr, Graphic3d_Structure thePrs, Standard_Integer theMode, ) */
	/* Method skipped due to unknown mapping: void Compute(PrsMgr_PresentationManager thePrsMgr, Graphic3d_Structure thePrs, Standard_Integer theMode, ) */
	void ComputeSelection(Macad::Occt::SelectMgr_Selection^ theSelection, int theMode);
	bool IsAutoHilight();
	void ClearSelected();
	/* Method skipped due to unknown mapping: void HilightOwnerWithColor(PrsMgr_PresentationManager thePM, Prs3d_Drawer theStyle, SelectMgr_EntityOwner theOwner, ) */
	/* Method skipped due to unknown mapping: void HilightSelected(PrsMgr_PresentationManager thePM, SelectMgr_SequenceOfOwner theSeq, ) */
	void UnsetAttributes();
	void UnsetHilightAttributes();
}; // class AIS_ViewCube

}; // namespace Occt
}; // namespace Macad
