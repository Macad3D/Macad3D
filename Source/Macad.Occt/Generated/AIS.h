// Generated wrapper code for package AIS

#pragma once

#include "SelectMgr.h"
#include "AIS.h"
#include "Prs3d.h"
#include "Aspect.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  AIS_KindOfInteractive
//---------------------------------------------------------------------
public enum class AIS_KindOfInteractive
{
	AIS_KindOfInteractive_None = 0,
	AIS_KindOfInteractive_Datum = 1,
	AIS_KindOfInteractive_Shape = 2,
	AIS_KindOfInteractive_Object = 3,
	AIS_KindOfInteractive_Relation = 4,
	AIS_KindOfInteractive_Dimension = 5,
	AIS_KindOfInteractive_LightSource = 6,
	AIS_KOI_None = 0,
	AIS_KOI_Datum = 1,
	AIS_KOI_Shape = 2,
	AIS_KOI_Object = 3,
	AIS_KOI_Relation = 4,
	AIS_KOI_Dimension = 5
}; // enum  class AIS_KindOfInteractive

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
//  Enum  AIS_SelectionScheme
//---------------------------------------------------------------------
public enum class AIS_SelectionScheme
{
	AIS_SelectionScheme_UNKNOWN = -1,
	AIS_SelectionScheme_Replace = 0,
	AIS_SelectionScheme_Add = 1,
	AIS_SelectionScheme_Remove = 2,
	AIS_SelectionScheme_XOR = 3,
	AIS_SelectionScheme_Clear = 4,
	AIS_SelectionScheme_ReplaceExtra = 5
}; // enum  class AIS_SelectionScheme

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
	AIS_MouseGesture_ZoomWindow = 4,
	AIS_MouseGesture_Pan = 5,
	AIS_MouseGesture_RotateOrbit = 6,
	AIS_MouseGesture_RotateView = 7
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
	AIS_ViewSelectionTool_Polygon = 2,
	AIS_ViewSelectionTool_ZoomWindow = 3
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
//  Class  AIS_DataMapOfIOStatus
//---------------------------------------------------------------------
public ref class AIS_DataMapOfIOStatus sealed : public BaseClass<::AIS_DataMapOfIOStatus>
{

#ifdef Include_AIS_DataMapOfIOStatus_h
public:
	Include_AIS_DataMapOfIOStatus_h
#endif

public:
	AIS_DataMapOfIOStatus(::AIS_DataMapOfIOStatus* nativeInstance)
		: BaseClass<::AIS_DataMapOfIOStatus>( nativeInstance, true )
	{}

	AIS_DataMapOfIOStatus(::AIS_DataMapOfIOStatus& nativeInstance)
		: BaseClass<::AIS_DataMapOfIOStatus>( &nativeInstance, false )
	{}

	property ::AIS_DataMapOfIOStatus* NativeInstance
	{
		::AIS_DataMapOfIOStatus* get()
		{
			return static_cast<::AIS_DataMapOfIOStatus*>(_NativeInstance);
		}
	}

public:
	AIS_DataMapOfIOStatus();
	AIS_DataMapOfIOStatus(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	AIS_DataMapOfIOStatus(int theNbBuckets);
	AIS_DataMapOfIOStatus(Macad::Occt::AIS_DataMapOfIOStatus^ theOther);
	void Exchange(Macad::Occt::AIS_DataMapOfIOStatus^ theOther);
	Macad::Occt::AIS_DataMapOfIOStatus^ Assign(Macad::Occt::AIS_DataMapOfIOStatus^ theOther);
	Macad::Occt::AIS_GlobalStatus^ Bound(Macad::Occt::AIS_InteractiveObject^ theKey, Macad::Occt::AIS_GlobalStatus^ theItem);
	bool IsBound(Macad::Occt::AIS_InteractiveObject^ theKey);
	bool UnBind(Macad::Occt::AIS_InteractiveObject^ theKey);
	Macad::Occt::AIS_GlobalStatus^ Seek(Macad::Occt::AIS_InteractiveObject^ theKey);
	Macad::Occt::AIS_GlobalStatus^ Find(Macad::Occt::AIS_InteractiveObject^ theKey);
	bool Find(Macad::Occt::AIS_InteractiveObject^ theKey, Macad::Occt::AIS_GlobalStatus^ theValue);
	Macad::Occt::AIS_GlobalStatus^ ChangeSeek(Macad::Occt::AIS_InteractiveObject^ theKey);
	Macad::Occt::AIS_GlobalStatus^ ChangeFind(Macad::Occt::AIS_InteractiveObject^ theKey);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class AIS_DataMapOfIOStatus

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
//  Class  AIS_NArray1OfEntityOwner
//---------------------------------------------------------------------
public ref class AIS_NArray1OfEntityOwner sealed : public BaseClass<::AIS_NArray1OfEntityOwner>
{

#ifdef Include_AIS_NArray1OfEntityOwner_h
public:
	Include_AIS_NArray1OfEntityOwner_h
#endif

public:
	AIS_NArray1OfEntityOwner(::AIS_NArray1OfEntityOwner* nativeInstance)
		: BaseClass<::AIS_NArray1OfEntityOwner>( nativeInstance, true )
	{}

	AIS_NArray1OfEntityOwner(::AIS_NArray1OfEntityOwner& nativeInstance)
		: BaseClass<::AIS_NArray1OfEntityOwner>( &nativeInstance, false )
	{}

	property ::AIS_NArray1OfEntityOwner* NativeInstance
	{
		::AIS_NArray1OfEntityOwner* get()
		{
			return static_cast<::AIS_NArray1OfEntityOwner*>(_NativeInstance);
		}
	}

public:
	AIS_NArray1OfEntityOwner();
	AIS_NArray1OfEntityOwner(int theLower, int theUpper);
	AIS_NArray1OfEntityOwner(Macad::Occt::AIS_NArray1OfEntityOwner^ theOther);
	AIS_NArray1OfEntityOwner(Macad::Occt::SelectMgr_EntityOwner^ theBegin, int theLower, int theUpper);
	void Init(Macad::Occt::SelectMgr_EntityOwner^ theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	Macad::Occt::AIS_NArray1OfEntityOwner^ Assign(Macad::Occt::AIS_NArray1OfEntityOwner^ theOther);
	Macad::Occt::AIS_NArray1OfEntityOwner^ Move(Macad::Occt::AIS_NArray1OfEntityOwner^ theOther);
	Macad::Occt::SelectMgr_EntityOwner^ First();
	Macad::Occt::SelectMgr_EntityOwner^ ChangeFirst();
	Macad::Occt::SelectMgr_EntityOwner^ Last();
	Macad::Occt::SelectMgr_EntityOwner^ ChangeLast();
	Macad::Occt::SelectMgr_EntityOwner^ Value(int theIndex);
	Macad::Occt::SelectMgr_EntityOwner^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::SelectMgr_EntityOwner^ theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class AIS_NArray1OfEntityOwner

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
//  Class  AIS_DataMapofIntegerListOfinteractive
//---------------------------------------------------------------------
public ref class AIS_DataMapofIntegerListOfinteractive sealed : public BaseClass<::AIS_DataMapofIntegerListOfinteractive>
{

#ifdef Include_AIS_DataMapofIntegerListOfinteractive_h
public:
	Include_AIS_DataMapofIntegerListOfinteractive_h
#endif

public:
	AIS_DataMapofIntegerListOfinteractive(::AIS_DataMapofIntegerListOfinteractive* nativeInstance)
		: BaseClass<::AIS_DataMapofIntegerListOfinteractive>( nativeInstance, true )
	{}

	AIS_DataMapofIntegerListOfinteractive(::AIS_DataMapofIntegerListOfinteractive& nativeInstance)
		: BaseClass<::AIS_DataMapofIntegerListOfinteractive>( &nativeInstance, false )
	{}

	property ::AIS_DataMapofIntegerListOfinteractive* NativeInstance
	{
		::AIS_DataMapofIntegerListOfinteractive* get()
		{
			return static_cast<::AIS_DataMapofIntegerListOfinteractive*>(_NativeInstance);
		}
	}

public:
	AIS_DataMapofIntegerListOfinteractive();
	AIS_DataMapofIntegerListOfinteractive(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	AIS_DataMapofIntegerListOfinteractive(int theNbBuckets);
	AIS_DataMapofIntegerListOfinteractive(Macad::Occt::AIS_DataMapofIntegerListOfinteractive^ theOther);
	void Exchange(Macad::Occt::AIS_DataMapofIntegerListOfinteractive^ theOther);
	Macad::Occt::AIS_DataMapofIntegerListOfinteractive^ Assign(Macad::Occt::AIS_DataMapofIntegerListOfinteractive^ theOther);
	/* Method skipped due to unknown mapping: NCollection_List<opencascade::handle<AIS_InteractiveObject>> Bound(int theKey, NCollection_List<opencascade::handle<AIS_InteractiveObject>> theItem, ) */
	bool IsBound(int theKey);
	bool UnBind(int theKey);
	/* Method skipped due to unknown mapping: NCollection_List<opencascade::handle<AIS_InteractiveObject>> Seek(int theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_List<opencascade::handle<AIS_InteractiveObject>> Find(int theKey, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Find(int theKey, NCollection_List<opencascade::handle<AIS_InteractiveObject>> theValue, ) */
	/* Method skipped due to unknown mapping: NCollection_List<opencascade::handle<AIS_InteractiveObject>> ChangeSeek(int theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_List<opencascade::handle<AIS_InteractiveObject>> ChangeFind(int theKey, ) */
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class AIS_DataMapofIntegerListOfinteractive

//---------------------------------------------------------------------
//  Class  AIS_IndexedDataMapOfOwnerPrs
//---------------------------------------------------------------------
public ref class AIS_IndexedDataMapOfOwnerPrs sealed : public BaseClass<::AIS_IndexedDataMapOfOwnerPrs>
{

#ifdef Include_AIS_IndexedDataMapOfOwnerPrs_h
public:
	Include_AIS_IndexedDataMapOfOwnerPrs_h
#endif

public:
	AIS_IndexedDataMapOfOwnerPrs(::AIS_IndexedDataMapOfOwnerPrs* nativeInstance)
		: BaseClass<::AIS_IndexedDataMapOfOwnerPrs>( nativeInstance, true )
	{}

	AIS_IndexedDataMapOfOwnerPrs(::AIS_IndexedDataMapOfOwnerPrs& nativeInstance)
		: BaseClass<::AIS_IndexedDataMapOfOwnerPrs>( &nativeInstance, false )
	{}

	property ::AIS_IndexedDataMapOfOwnerPrs* NativeInstance
	{
		::AIS_IndexedDataMapOfOwnerPrs* get()
		{
			return static_cast<::AIS_IndexedDataMapOfOwnerPrs*>(_NativeInstance);
		}
	}

public:
	AIS_IndexedDataMapOfOwnerPrs();
	AIS_IndexedDataMapOfOwnerPrs(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	AIS_IndexedDataMapOfOwnerPrs(int theNbBuckets);
	AIS_IndexedDataMapOfOwnerPrs(Macad::Occt::AIS_IndexedDataMapOfOwnerPrs^ theOther);
	void Exchange(Macad::Occt::AIS_IndexedDataMapOfOwnerPrs^ theOther);
	int Add(Macad::Occt::SelectMgr_EntityOwner^ theKey1, Macad::Occt::Graphic3d_Structure^ theItem);
	bool Contains(Macad::Occt::SelectMgr_EntityOwner^ theKey1);
	void Substitute(int theIndex, Macad::Occt::SelectMgr_EntityOwner^ theKey1, Macad::Occt::Graphic3d_Structure^ theItem);
	void Swap(int theIndex1, int theIndex2);
	void RemoveLast();
	void RemoveFromIndex(int theIndex);
	void RemoveKey(Macad::Occt::SelectMgr_EntityOwner^ theKey1);
	Macad::Occt::SelectMgr_EntityOwner^ FindKey(int theIndex);
	Macad::Occt::Graphic3d_Structure^ FindFromIndex(int theIndex);
	Macad::Occt::Graphic3d_Structure^ ChangeFromIndex(int theIndex);
	int FindIndex(Macad::Occt::SelectMgr_EntityOwner^ theKey1);
	Macad::Occt::Graphic3d_Structure^ FindFromKey(Macad::Occt::SelectMgr_EntityOwner^ theKey1);
	Macad::Occt::Graphic3d_Structure^ ChangeFromKey(Macad::Occt::SelectMgr_EntityOwner^ theKey1);
	Macad::Occt::Graphic3d_Structure^ Seek(Macad::Occt::SelectMgr_EntityOwner^ theKey1);
	Macad::Occt::Graphic3d_Structure^ ChangeSeek(Macad::Occt::SelectMgr_EntityOwner^ theKey1);
	bool FindFromKey(Macad::Occt::SelectMgr_EntityOwner^ theKey1, Macad::Occt::Graphic3d_Structure^ theValue);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class AIS_IndexedDataMapOfOwnerPrs

//---------------------------------------------------------------------
//  Class  AIS_MapOfInteractive
//---------------------------------------------------------------------
public ref class AIS_MapOfInteractive sealed : public BaseClass<::AIS_MapOfInteractive>
{

#ifdef Include_AIS_MapOfInteractive_h
public:
	Include_AIS_MapOfInteractive_h
#endif

public:
	AIS_MapOfInteractive(::AIS_MapOfInteractive* nativeInstance)
		: BaseClass<::AIS_MapOfInteractive>( nativeInstance, true )
	{}

	AIS_MapOfInteractive(::AIS_MapOfInteractive& nativeInstance)
		: BaseClass<::AIS_MapOfInteractive>( &nativeInstance, false )
	{}

	property ::AIS_MapOfInteractive* NativeInstance
	{
		::AIS_MapOfInteractive* get()
		{
			return static_cast<::AIS_MapOfInteractive*>(_NativeInstance);
		}
	}

public:
	AIS_MapOfInteractive();
	AIS_MapOfInteractive(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	AIS_MapOfInteractive(int theNbBuckets);
	AIS_MapOfInteractive(Macad::Occt::AIS_MapOfInteractive^ theOther);
	void Exchange(Macad::Occt::AIS_MapOfInteractive^ theOther);
	Macad::Occt::AIS_MapOfInteractive^ Assign(Macad::Occt::AIS_MapOfInteractive^ theOther);
	Macad::Occt::AIS_InteractiveObject^ Added(Macad::Occt::AIS_InteractiveObject^ K);
	bool Contains(Macad::Occt::AIS_InteractiveObject^ K);
	bool Remove(Macad::Occt::AIS_InteractiveObject^ K);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
	bool IsEqual(Macad::Occt::AIS_MapOfInteractive^ theOther);
	bool Contains(Macad::Occt::AIS_MapOfInteractive^ theOther);
	void Union(Macad::Occt::AIS_MapOfInteractive^ theLeft, Macad::Occt::AIS_MapOfInteractive^ theRight);
	bool Unite(Macad::Occt::AIS_MapOfInteractive^ theOther);
	bool HasIntersection(Macad::Occt::AIS_MapOfInteractive^ theMap);
	void Intersection(Macad::Occt::AIS_MapOfInteractive^ theLeft, Macad::Occt::AIS_MapOfInteractive^ theRight);
	bool Intersect(Macad::Occt::AIS_MapOfInteractive^ theOther);
	void Subtraction(Macad::Occt::AIS_MapOfInteractive^ theLeft, Macad::Occt::AIS_MapOfInteractive^ theRight);
	bool Subtract(Macad::Occt::AIS_MapOfInteractive^ theOther);
	void Difference(Macad::Occt::AIS_MapOfInteractive^ theLeft, Macad::Occt::AIS_MapOfInteractive^ theRight);
	bool Differ(Macad::Occt::AIS_MapOfInteractive^ theOther);
}; // class AIS_MapOfInteractive

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
	bool IsDefined();
	void SetDefined(bool theIsDefined);
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
}; // class AIS

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
	/* Method skipped due to unknown mapping: PrsMgr_DisplayStatus DisplayStatus(AIS_InteractiveObject anIobj, ) */
	void Status(Macad::Occt::AIS_InteractiveObject^ anObj, Macad::Occt::TCollection_ExtendedString^ astatus);
	bool IsDisplayed(Macad::Occt::AIS_InteractiveObject^ anIobj);
	bool IsDisplayed(Macad::Occt::AIS_InteractiveObject^ aniobj, int aMode);
	void SetAutoActivateSelection(bool theIsAuto);
	bool GetAutoActivateSelection();
	void Display(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
	/* Method skipped due to unknown mapping: void Display(AIS_InteractiveObject theIObj, Standard_Integer theDispMode, Standard_Integer theSelectionMode, Standard_Boolean theToUpdateViewer, PrsMgr_DisplayStatus theDispStatus, ) */
	void Display(Macad::Occt::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer);
	void Load(Macad::Occt::AIS_InteractiveObject^ theObj, int theSelectionMode);
	void Load(Macad::Occt::AIS_InteractiveObject^ theObj);
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
	void SetPixelTolerance(int thePrecision);
	void SetPixelTolerance();
	int PixelTolerance();
	void SetSelectionSensitivity(Macad::Occt::AIS_InteractiveObject^ theObject, int theMode, int theNewSensitivity);
	Macad::Occt::V3d_View^ LastActiveView();
	Macad::Occt::AIS_StatusOfDetection MoveTo(int theXPix, int theYPix, Macad::Occt::V3d_View^ theView, bool theToRedrawOnUpdate);
	Macad::Occt::AIS_StatusOfDetection MoveTo(Macad::Occt::Ax1 theAxis, Macad::Occt::V3d_View^ theView, bool theToRedrawOnUpdate);
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
	Macad::Occt::AIS_StatusOfPick AddSelect(Macad::Occt::SelectMgr_EntityOwner^ theObject);
	Macad::Occt::AIS_StatusOfPick AddSelect(Macad::Occt::AIS_InteractiveObject^ theObject);
	Macad::Occt::AIS_StatusOfPick SelectRectangle(Macad::Occt::Graphic3d_Vec2i^ thePntMin, Macad::Occt::Graphic3d_Vec2i^ thePntMax, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_SelectionScheme theSelScheme);
	Macad::Occt::AIS_StatusOfPick SelectRectangle(Macad::Occt::Graphic3d_Vec2i^ thePntMin, Macad::Occt::Graphic3d_Vec2i^ thePntMax, Macad::Occt::V3d_View^ theView);
	Macad::Occt::AIS_StatusOfPick SelectPolygon(Macad::Occt::TColgp_Array1OfPnt2d^ thePolyline, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_SelectionScheme theSelScheme);
	Macad::Occt::AIS_StatusOfPick SelectPolygon(Macad::Occt::TColgp_Array1OfPnt2d^ thePolyline, Macad::Occt::V3d_View^ theView);
	Macad::Occt::AIS_StatusOfPick SelectPoint(Macad::Occt::Graphic3d_Vec2i^ thePnt, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_SelectionScheme theSelScheme);
	Macad::Occt::AIS_StatusOfPick SelectPoint(Macad::Occt::Graphic3d_Vec2i^ thePnt, Macad::Occt::V3d_View^ theView);
	Macad::Occt::AIS_StatusOfPick SelectDetected(Macad::Occt::AIS_SelectionScheme theSelScheme);
	Macad::Occt::AIS_StatusOfPick SelectDetected();
	Macad::Occt::Bnd_Box^ BoundingBoxOfSelection();
	Macad::Occt::AIS_StatusOfPick Select(Macad::Occt::AIS_NArray1OfEntityOwner^ theOwners, Macad::Occt::AIS_SelectionScheme theSelScheme);
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
	Macad::Occt::SelectMgr_FilterType FilterType();
	void SetFilterType(Macad::Occt::SelectMgr_FilterType theFilterType);
	Macad::Occt::SelectMgr_ListOfFilter^ Filters();
	Macad::Occt::SelectMgr_AndOrFilter^ GlobalFilter();
	void AddFilter(Macad::Occt::SelectMgr_Filter^ theFilter);
	void RemoveFilter(Macad::Occt::SelectMgr_Filter^ theFilter);
	void RemoveFilters();
	Macad::Occt::SelectMgr_PickingStrategy PickingStrategy();
	void SetPickingStrategy(Macad::Occt::SelectMgr_PickingStrategy theStrategy);
	Macad::Occt::Prs3d_Drawer^ DefaultDrawer();
	void SetDefaultDrawer(Macad::Occt::Prs3d_Drawer^ theDrawer);
	Macad::Occt::V3d_Viewer^ CurrentViewer();
	Macad::Occt::SelectMgr_SelectionManager^ SelectionManager();
	/* Method skipped due to unknown mapping: PrsMgr_PresentationManager MainPrsMgr() */
	Macad::Occt::SelectMgr_ViewerSelector^ MainSelector();
	void UpdateCurrentViewer();
	void DisplayedObjects(Macad::Occt::AIS_ListOfInteractive^ aListOfIO);
	void DisplayedObjects(Macad::Occt::AIS_KindOfInteractive theWhichKind, int theWhichSignature, Macad::Occt::AIS_ListOfInteractive^ theListOfIO);
	void ErasedObjects(Macad::Occt::AIS_ListOfInteractive^ theListOfIO);
	void ErasedObjects(Macad::Occt::AIS_KindOfInteractive theWhichKind, int theWhichSignature, Macad::Occt::AIS_ListOfInteractive^ theListOfIO);
	/* Method skipped due to unknown mapping: void ObjectsByDisplayStatus(PrsMgr_DisplayStatus theStatus, AIS_ListOfInteractive theListOfIO, ) */
	/* Method skipped due to unknown mapping: void ObjectsByDisplayStatus(AIS_KindOfInteractive WhichKind, Standard_Integer WhichSignature, PrsMgr_DisplayStatus theStatus, AIS_ListOfInteractive theListOfIO, ) */
	void ObjectsInside(Macad::Occt::AIS_ListOfInteractive^ aListOfIO, Macad::Occt::AIS_KindOfInteractive WhichKind, int WhichSignature);
	void ObjectsInside(Macad::Occt::AIS_ListOfInteractive^ aListOfIO, Macad::Occt::AIS_KindOfInteractive WhichKind);
	void ObjectsInside(Macad::Occt::AIS_ListOfInteractive^ aListOfIO);
	/* Method skipped due to unknown mapping: Iterator ObjectIterator() */
	void RebuildSelectionStructs();
	void Disconnect(Macad::Occt::AIS_InteractiveObject^ theAssembly, Macad::Occt::AIS_InteractiveObject^ theObjToDisconnect);
	void Disconnect(Macad::Occt::AIS_InteractiveObject^ theAssembly);
	/* Method skipped due to unknown mapping: void ObjectsForView(AIS_ListOfInteractive theListOfIO, V3d_View theView, Standard_Boolean theIsVisibleInView, PrsMgr_DisplayStatus theStatus, ) */
	void ObjectsForView(Macad::Occt::AIS_ListOfInteractive^ theListOfIO, Macad::Occt::V3d_View^ theView, bool theIsVisibleInView);
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
	void SetDeviationCoefficient(double theCoefficient);
	double DeviationCoefficient();
	void SetDeviationAngle(double theAngle);
	double DeviationAngle();
	Macad::Occt::Prs3d_LineAspect^ HiddenLineAspect();
	void SetHiddenLineAspect(Macad::Occt::Prs3d_LineAspect^ theAspect);
	bool DrawHiddenLine();
	void EnableDrawHiddenLine();
	void DisableDrawHiddenLine();
	void SetIsoNumber(int NbIsos, Macad::Occt::AIS_TypeOfIso WhichIsos);
	void SetIsoNumber(int NbIsos);
	int IsoNumber(Macad::Occt::AIS_TypeOfIso WhichIsos);
	int IsoNumber();
	void IsoOnPlane(bool theToSwitchOn);
	bool IsoOnPlane();
	void IsoOnTriangulation(bool theIsEnabled, Macad::Occt::AIS_InteractiveObject^ theObject);
	void IsoOnTriangulation(bool theToSwitchOn);
	bool IsoOnTriangulation();
	/* Method skipped due to unknown mapping: void Display(AIS_InteractiveObject theIObj, Standard_Integer theDispMode, Standard_Integer theSelectionMode, Standard_Boolean theToUpdateViewer, Standard_Boolean theToAllowDecomposition, PrsMgr_DisplayStatus theDispStatus, ) */
	void Display(Macad::Occt::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer, bool theToAllowDecomposition);
	void Load(Macad::Occt::AIS_InteractiveObject^ theObj, int theSelectionMode, bool parameter1);
	void SetSelectedAspect(Macad::Occt::Prs3d_BasicAspect^ theAspect, bool theToUpdateViewer);
	Macad::Occt::AIS_StatusOfPick Select(int theXPMin, int theYPMin, int theXPMax, int theYPMax, Macad::Occt::V3d_View^ theView, bool theToUpdateViewer);
	Macad::Occt::AIS_StatusOfPick Select(Macad::Occt::TColgp_Array1OfPnt2d^ thePolyline, Macad::Occt::V3d_View^ theView, bool theToUpdateViewer);
	Macad::Occt::AIS_StatusOfPick Select(bool theToUpdateViewer);
	Macad::Occt::AIS_StatusOfPick ShiftSelect(bool theToUpdateViewer);
	Macad::Occt::AIS_StatusOfPick ShiftSelect(Macad::Occt::TColgp_Array1OfPnt2d^ thePolyline, Macad::Occt::V3d_View^ theView, bool theToUpdateViewer);
	Macad::Occt::AIS_StatusOfPick ShiftSelect(int theXPMin, int theYPMin, int theXPMax, int theYPMax, Macad::Occt::V3d_View^ theView, bool theToUpdateViewer);
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
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
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
	bool ProcessDragging(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::SelectMgr_EntityOwner^ theOwner, Macad::Occt::Graphic3d_Vec2i^ theDragFrom, Macad::Occt::Graphic3d_Vec2i^ theDragTo, Macad::Occt::AIS_DragAction theAction);
	Macad::Occt::AIS_InteractiveContext^ GetContext();
	bool HasPresentation();
	Macad::Occt::Graphic3d_Structure^ Presentation();
	void SetAspect(Macad::Occt::Prs3d_BasicAspect^ anAspect);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class AIS_InteractiveObject

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
	/* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<AIS_Animation>> Children() */
	void StartTimer(double theStartPts, double thePlaySpeed, bool theToUpdate, bool theToStopTimer);
	void StartTimer(double theStartPts, double thePlaySpeed, bool theToUpdate);
	double UpdateTimer();
	double ElapsedTime();
	/* Method skipped due to unknown mapping: Media_Timer Timer() */
	/* Method skipped due to unknown mapping: void SetTimer(Media_Timer theTimer, ) */
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
	AIS_GlobalStatus(Macad::Occt::AIS_GlobalStatus^ parameter1);
	int DisplayMode();
	void SetDisplayMode(int theMode);
	bool IsHilighted();
	void SetHilightStatus(bool theStatus);
	void SetHilightStyle(Macad::Occt::Prs3d_Drawer^ theStyle);
	Macad::Occt::Prs3d_Drawer^ HilightStyle();
	Macad::Occt::TColStd_ListOfInteger^ SelectionModes();
	bool IsSModeIn(int theMode);
	bool AddSelectionMode(int theMode);
	bool RemoveSelectionMode(int theMode);
	void ClearSelectionModes();
	bool IsSubIntensityOn();
	void SetSubIntensity(bool theIsOn);
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
	void SelectOwners(Macad::Occt::AIS_NArray1OfEntityOwner^ thePickedOwners, Macad::Occt::AIS_SelectionScheme theSelScheme, bool theToAllowSelOverlap, Macad::Occt::SelectMgr_Filter^ theFilter);
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
	void SetColor(Macad::Occt::Quantity_NameOfColor theCol);
	void SetWidth(double theWidth);
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
	AIS_Axis(Macad::Occt::Ax1 theAxis, double theLength);
	AIS_Axis(Macad::Occt::Ax1 theAxis);
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
	int Signature();
	Macad::Occt::AIS_KindOfInteractive Type();
	void SetColor(Macad::Occt::Quantity_Color^ aColor);
	void SetWidth(double aValue);
	void SetDisplayAspect(Macad::Occt::Prs3d_LineAspect^ theNewDatumAspect);
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
	bool HasOwnMaterial();
	void UnsetOwnMaterial();
	void SetOwnMaterial();
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
	bool SetOwnDeviationAngle();
	void SetOwnDeviationCoefficient(double aCoefficient);
	void SetAngleAndDeviation(double anAngle);
	double UserAngle();
	void SetOwnDeviationAngle(double anAngle);
	bool OwnDeviationCoefficient(double% aCoefficient, double% aPreviousCoefficient);
	bool OwnDeviationAngle(double% anAngle, double% aPreviousAngle);
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
	static void computeHlrPresentation(Macad::Occt::Graphic3d_Camera^ theProjector, Macad::Occt::Graphic3d_Structure^ thePrs, Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::Prs3d_Drawer^ theDrawer);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
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
	void Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::TopLoc_Datum3D^ theLocation);
	bool HasConnection();
	Macad::Occt::AIS_InteractiveObject^ ConnectedTo();
	void Disconnect();
	bool AcceptShapeDecomposition();
	bool AcceptDisplayMode(int theMode);
}; // class AIS_ConnectedInteractive

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
	void SetExclusionFlag(bool theStatus);
	bool IsStored(Macad::Occt::AIS_KindOfInteractive aType);
	void ListOfStoredTypes(Macad::Occt::TColStd_ListOfInteger^ TheList);
	void ListOfSignature(Macad::Occt::AIS_KindOfInteractive aType, Macad::Occt::TColStd_ListOfInteger^ TheStoredList);
}; // class AIS_ExclusionFilter

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
//  Class  AIS_LightSource
//---------------------------------------------------------------------
public ref class AIS_LightSource sealed : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_LightSource_h
public:
	Include_AIS_LightSource_h
#endif

public:
	AIS_LightSource(::AIS_LightSource* nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	AIS_LightSource(::AIS_LightSource& nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	property ::AIS_LightSource* NativeInstance
	{
		::AIS_LightSource* get()
		{
			return static_cast<::AIS_LightSource*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_LightSource^ CreateDowncasted(::AIS_LightSource* instance);

public:
	AIS_LightSource(Macad::Occt::Graphic3d_CLight^ theLightSource);
	AIS_LightSource(Macad::Occt::AIS_LightSource^ parameter1);
	Macad::Occt::Graphic3d_CLight^ Light();
	void SetLight(Macad::Occt::Graphic3d_CLight^ theLight);
	bool ToDisplayName();
	void SetDisplayName(bool theToDisplay);
	bool ToDisplayRange();
	void SetDisplayRange(bool theToDisplay);
	double Size();
	void SetSize(double theSize);
	int ArcSize();
	void SetArcSize(int theSize);
	bool IsZoomable();
	void SetZoomable(bool theIsZoomable);
	void SetDraggable(bool theIsDraggable);
	bool ToSwitchOnClick();
	void SetSwitchOnClick(bool theToHandle);
	int NbArrows();
	void SetNbArrows(int theNbArrows);
	Macad::Occt::Graphic3d_MarkerImage^ MarkerImage(bool theIsEnabled);
	Macad::Occt::Aspect_TypeOfMarker MarkerType(bool theIsEnabled);
	void SetMarkerImage(Macad::Occt::Graphic3d_MarkerImage^ theImage, bool theIsEnabled);
	void SetMarkerType(Macad::Occt::Aspect_TypeOfMarker theType, bool theIsEnabled);
	int NbSplitsQuadric();
	void SetNbSplitsQuadric(int theNbSplits);
	int NbSplitsArrow();
	void SetNbSplitsArrow(int theNbSplits);
	Macad::Occt::AIS_KindOfInteractive Type();
}; // class AIS_LightSource

//---------------------------------------------------------------------
//  Class  AIS_LightSourceOwner
//---------------------------------------------------------------------
public ref class AIS_LightSourceOwner sealed : public Macad::Occt::SelectMgr_EntityOwner
{

#ifdef Include_AIS_LightSourceOwner_h
public:
	Include_AIS_LightSourceOwner_h
#endif

public:
	AIS_LightSourceOwner(::AIS_LightSourceOwner* nativeInstance)
		: Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
	{}

	AIS_LightSourceOwner(::AIS_LightSourceOwner& nativeInstance)
		: Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
	{}

	property ::AIS_LightSourceOwner* NativeInstance
	{
		::AIS_LightSourceOwner* get()
		{
			return static_cast<::AIS_LightSourceOwner*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_LightSourceOwner^ CreateDowncasted(::AIS_LightSourceOwner* instance);

public:
	AIS_LightSourceOwner(Macad::Occt::AIS_LightSource^ theObject, int thePriority);
	AIS_LightSourceOwner(Macad::Occt::AIS_LightSource^ theObject);
	AIS_LightSourceOwner(Macad::Occt::AIS_LightSourceOwner^ parameter1);
	bool HandleMouseClick(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsDoubleClick);
	/* Method skipped due to unknown mapping: void HilightWithColor(PrsMgr_PresentationManager thePrsMgr, Prs3d_Drawer theStyle, Standard_Integer theMode, ) */
	bool IsForcedHilight();
}; // class AIS_LightSourceOwner

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
	/* Method skipped due to unknown mapping: void AIS_ManipulatorObjectSequence(NCollection_Sequence<opencascade::handle<AIS_InteractiveObject>> theOther, ) */
	AIS_ManipulatorObjectSequence(Macad::Occt::AIS_ManipulatorObjectSequence^ parameter1);
	/* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<AIS_InteractiveObject>> Sequence() */
	void Append(Macad::Occt::AIS_InteractiveObject^ theItem);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<opencascade::handle<AIS_InteractiveObject>> theSequence, ) */
	/* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<AIS_InteractiveObject>> ChangeSequence() */
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
	/* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<AIS_InteractiveObject>> Assign(NCollection_Sequence<opencascade::handle<AIS_InteractiveObject>> theOther, ) */
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Prepend(Macad::Occt::AIS_InteractiveObject^ theItem);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<opencascade::handle<AIS_InteractiveObject>> theSeq, ) */
	void InsertBefore(int theIndex, Macad::Occt::AIS_InteractiveObject^ theItem);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<AIS_InteractiveObject>> theSeq, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, AIS_InteractiveObject theItem, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<AIS_InteractiveObject>> theSeq, ) */
	void InsertAfter(int theIndex, Macad::Occt::AIS_InteractiveObject^ theItem);
	/* Method skipped due to unknown mapping: void Split(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<AIS_InteractiveObject>> theSeq, ) */
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
	Macad::Occt::AIS_InteractiveObject^ Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::TopLoc_Datum3D^ theLocation, Macad::Occt::Graphic3d_TransformPers^ theTrsfPers);
	Macad::Occt::AIS_KindOfInteractive Type();
	int Signature();
	bool HasConnection();
	void Disconnect(Macad::Occt::AIS_InteractiveObject^ theInteractive);
	void DisconnectAll();
	bool AcceptShapeDecomposition();
	Macad::Occt::SelectMgr_EntityOwner^ GetAssemblyOwner();
	Macad::Occt::SelectMgr_EntityOwner^ GlobalSelOwner();
	void SetContext(Macad::Occt::AIS_InteractiveContext^ theCtx);
	Macad::Occt::AIS_InteractiveObject^ Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj);
	Macad::Occt::AIS_InteractiveObject^ Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::Trsf theLocation);
	Macad::Occt::AIS_InteractiveObject^ Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::Trsf theLocation, Macad::Occt::Graphic3d_TransformPers^ theTrsfPers);
}; // class AIS_MultipleConnectedInteractive

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
	void SetMinimumSize(double theValue);
	void UnsetMinimumSize();
	bool HasMinimumSize();
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
	/* Method skipped due to unknown mapping: NCollection_Sequence<NCollection_Vec2<int>> Points() */
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
	bool AcceptDisplayMode(int theMode);
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
	Macad::Occt::TCollection_ExtendedString^ Text();
	Macad::Occt::TCollection_AsciiString^ FontName();
	/* Method skipped due to unknown mapping: Font_FontAspect FontAspect() */
	Macad::Occt::Ax2 Orientation3D();
	bool HasOrientation3D();
	void SetFlipping(bool theIsFlipping);
	bool HasFlipping();
	bool HasOwnAnchorPoint();
	void SetOwnAnchorPoint(bool theOwnAnchorPoint);
	void SetDisplayType(Macad::Occt::Aspect_TypeOfDisplayText theDisplayType);
	void SetColorSubTitle(Macad::Occt::Quantity_Color^ theColor);
	/* Method skipped due to unknown mapping: Font_TextFormatter TextFormatter() */
	/* Method skipped due to unknown mapping: void SetTextFormatter(Font_TextFormatter theFormatter, ) */
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
	Macad::Occt::Prs3d_DatumMode DatumDisplayMode();
	void SetDatumDisplayMode(Macad::Occt::Prs3d_DatumMode theMode);
	Macad::Occt::Geom_Axis2Placement^ Component();
	void SetComponent(Macad::Occt::Geom_Axis2Placement^ theComponent);
	bool HasOwnSize();
	double Size();
	void SetSize(double theValue);
	void UnsetSize();
	bool HasTextColor();
	Macad::Occt::Quantity_Color^ TextColor();
	void SetTextColor(Macad::Occt::Quantity_Color^ theColor);
	void SetTextColor(Macad::Occt::Prs3d_DatumParts thePart, Macad::Occt::Quantity_Color^ theColor);
	bool HasArrowColor();
	Macad::Occt::Quantity_Color^ ArrowColor();
	void SetArrowColor(Macad::Occt::Quantity_Color^ theColor);
	void SetArrowColor(Macad::Occt::Prs3d_DatumParts thePart, Macad::Occt::Quantity_Color^ theColor);
	Macad::Occt::Quantity_Color^ DatumPartColor(Macad::Occt::Prs3d_DatumParts thePart);
	void SetDatumPartColor(Macad::Occt::Prs3d_DatumParts thePart, Macad::Occt::Quantity_Color^ theColor);
	void SetOriginColor(Macad::Occt::Quantity_Color^ theColor);
	void SetXAxisColor(Macad::Occt::Quantity_Color^ theColor);
	void SetYAxisColor(Macad::Occt::Quantity_Color^ theColor);
	void SetAxisColor(Macad::Occt::Quantity_Color^ theColor);
	bool ToDrawArrows();
	void SetDrawArrows(bool theToDraw);
	int SelectionPriority(Macad::Occt::Prs3d_DatumParts thePart);
	void SetSelectionPriority(Macad::Occt::Prs3d_DatumParts thePart, int thePriority);
	Macad::Occt::TCollection_ExtendedString^ Label(Macad::Occt::Prs3d_DatumParts thePart);
	void SetLabel(Macad::Occt::Prs3d_DatumParts thePart, Macad::Occt::TCollection_ExtendedString^ theName);
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	bool AcceptDisplayMode(int theMode);
	int Signature();
	Macad::Occt::AIS_KindOfInteractive Type();
	void UnsetColor();
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
//  Class  AIS_XRTrackedDevice
//---------------------------------------------------------------------
public ref class AIS_XRTrackedDevice sealed : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_XRTrackedDevice_h
public:
	Include_AIS_XRTrackedDevice_h
#endif

public:
	AIS_XRTrackedDevice(::AIS_XRTrackedDevice* nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	AIS_XRTrackedDevice(::AIS_XRTrackedDevice& nativeInstance)
		: Macad::Occt::AIS_InteractiveObject( nativeInstance )
	{}

	property ::AIS_XRTrackedDevice* NativeInstance
	{
		::AIS_XRTrackedDevice* get()
		{
			return static_cast<::AIS_XRTrackedDevice*>(_NativeInstance);
		}
	}

	static Macad::Occt::AIS_XRTrackedDevice^ CreateDowncasted(::AIS_XRTrackedDevice* instance);

public:
	AIS_XRTrackedDevice(Macad::Occt::Graphic3d_ArrayOfTriangles^ theTris, Macad::Occt::Image_Texture^ theTexture);
	AIS_XRTrackedDevice();
	AIS_XRTrackedDevice(Macad::Occt::AIS_XRTrackedDevice^ parameter1);
	Macad::Occt::Aspect_XRTrackedDeviceRole Role();
	void SetRole(Macad::Occt::Aspect_XRTrackedDeviceRole theRole);
	Macad::Occt::Quantity_Color^ LaserColor();
	void SetLaserColor(Macad::Occt::Quantity_Color^ theColor);
	float LaserLength();
	void SetLaserLength(float theLength);
	float UnitFactor();
	void SetUnitFactor(float theFactor);
}; // class AIS_XRTrackedDevice

//---------------------------------------------------------------------
//  Class  AIS_ViewController
//---------------------------------------------------------------------
public ref class AIS_ViewController sealed : public Macad::Occt::Aspect_WindowInputListener
{

#ifdef Include_AIS_ViewController_h
public:
	Include_AIS_ViewController_h
#endif

public:
	AIS_ViewController(::AIS_ViewController* nativeInstance)
		: Macad::Occt::Aspect_WindowInputListener( nativeInstance )
	{}

	AIS_ViewController(::AIS_ViewController& nativeInstance)
		: Macad::Occt::Aspect_WindowInputListener( nativeInstance )
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
	Macad::Occt::AIS_Animation^ ObjectsAnimation();
	void SetObjectsAnimation(Macad::Occt::AIS_Animation^ theAnimation);
	bool ToPauseObjectsAnimation();
	void SetPauseObjectsAnimation(bool theToPause);
	bool IsContinuousRedraw();
	void SetContinuousRedraw(bool theToEnable);
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
	bool ToDisplayXRAuxDevices();
	void SetDisplayXRAuxDevices(bool theToDisplay);
	bool ToDisplayXRHands();
	void SetDisplayXRHands(bool theToDisplay);
	void KeyDown(unsigned int theKey, double theTime, double thePressure);
	void KeyDown(unsigned int theKey, double theTime);
	void KeyUp(unsigned int theKey, double theTime);
	void KeyFromAxis(unsigned int theNegative, unsigned int thePositive, double theTime, double thePressure);
	Macad::Occt::AIS_WalkDelta^ FetchNavigationKeys(double theCrouchRatio, double theRunRatio);
	/* Method skipped due to unknown mapping: AIS_MouseGestureMap MouseGestureMap() */
	/* Method skipped due to unknown mapping: AIS_MouseGestureMap ChangeMouseGestureMap() */
	/* Method skipped due to unknown mapping: AIS_MouseSelectionSchemeMap MouseSelectionSchemes() */
	/* Method skipped due to unknown mapping: AIS_MouseSelectionSchemeMap ChangeMouseSelectionSchemes() */
	double MouseDoubleClickInterval();
	void SetMouseDoubleClickInterval(double theSeconds);
	void SelectInViewer(Macad::Occt::Graphic3d_Vec2i^ thePnt, Macad::Occt::AIS_SelectionScheme theScheme);
	void SelectInViewer(Macad::Occt::Graphic3d_Vec2i^ thePnt);
	/* Method skipped due to unknown mapping: void SelectInViewer(NCollection_Sequence<NCollection_Vec2<int>> thePnts, AIS_SelectionScheme theScheme, ) */
	/* Method skipped due to unknown mapping: void SelectInViewer(NCollection_Sequence<NCollection_Vec2<int>> thePnts, AIS_SelectionScheme theScheme, ) */
	void UpdateRubberBand(Macad::Occt::Graphic3d_Vec2i^ thePntFrom, Macad::Occt::Graphic3d_Vec2i^ thePntTo);
	void UpdatePolySelection(Macad::Occt::Graphic3d_Vec2i^ thePnt, bool theToAppend);
	bool UpdateZoom(Macad::Occt::Aspect_ScrollDelta^ theDelta);
	bool UpdateZRotation(double theAngle);
	bool UpdateMouseScroll(Macad::Occt::Aspect_ScrollDelta^ theDelta);
	bool UpdateMouseButtons(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButtons, unsigned int theModifiers, bool theIsEmulated);
	bool UpdateMousePosition(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButtons, unsigned int theModifiers, bool theIsEmulated);
	bool UpdateMouseClick(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsDoubleClick);
	float TouchToleranceScale();
	void SetTouchToleranceScale(float theTolerance);
	void AddTouchPoint(size_t theId, Macad::Occt::Graphic3d_Vec2d^ thePnt, bool theClearBefore);
	void AddTouchPoint(size_t theId, Macad::Occt::Graphic3d_Vec2d^ thePnt);
	bool RemoveTouchPoint(size_t theId, bool theClearSelectPnts);
	bool RemoveTouchPoint(size_t theId);
	void UpdateTouchPoint(size_t theId, Macad::Occt::Graphic3d_Vec2d^ thePnt);
	/* Method skipped due to unknown mapping: bool Update3dMouse(WNT_HIDSpaceMouse theEvent, ) */
	void ProcessExpose();
	void ProcessConfigure(bool theIsResized);
	void ProcessInput();
	void ProcessFocus(bool theIsActivated);
	void ProcessClose();
	void ResetViewInput();
	void UpdateViewOrientation(Macad::Occt::V3d_TypeOfOrientation theOrientation, bool theToFitAll);
	void FlushViewEvents(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, bool theToHandle);
	void FlushViewEvents(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
	void HandleViewEvents(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
	void OnSelectionChanged(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
	void OnObjectDragged(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_DragAction theAction);
	bool PickPoint(Macad::Occt::Pnt% thePnt, Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::Graphic3d_Vec2i^ theCursor, bool theToStickToPickRay);
	bool PickAxis(Macad::Occt::Pnt% theTopPnt, Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::Ax1 theAxis);
	Macad::Occt::Pnt GravityPoint(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
	void FitAllAuto(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
	void handleViewOrientationKeys(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
	Macad::Occt::AIS_WalkDelta^ handleNavigationKeys(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
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
	void handleXRInput(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_WalkDelta^ theWalk);
	void handleXRTurnPad(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
	void handleXRTeleport(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
	void handleXRPicking(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
	void handleXRHighlight(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
	void handleXRPresentations(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
	int handleXRMoveTo(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::Trsf thePose, bool theToHighlight);
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
	double AxesRadius();
	void SetAxesRadius(double theRadius);
	double AxesConeRadius();
	void SetAxesConeRadius(double theRadius);
	double AxesSphereRadius();
	void SetAxesSphereRadius(double theRadius);
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
