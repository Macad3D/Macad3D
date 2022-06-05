// Generated wrapper code for package SelectMgr

#pragma once

#include "SelectMgr.h"
#include "PrsMgr.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  SelectMgr_FilterType
//---------------------------------------------------------------------
/// <summary>
/// Enumeration defines the filter type.
/// </summary>
public enum class SelectMgr_FilterType
{
	SelectMgr_FilterType_AND = 0,
	SelectMgr_FilterType_OR = 1
}; // enum  class SelectMgr_FilterType

//---------------------------------------------------------------------
//  Enum  SelectMgr_SelectionType
//---------------------------------------------------------------------
/// <summary>
/// Possible selection types
/// </summary>
public enum class SelectMgr_SelectionType
{
	SelectMgr_SelectionType_Unknown = -1,
	SelectMgr_SelectionType_Point = 0,
	SelectMgr_SelectionType_Box = 1,
	SelectMgr_SelectionType_Polyline = 2
}; // enum  class SelectMgr_SelectionType

//---------------------------------------------------------------------
//  Enum  SelectMgr_StateOfSelection
//---------------------------------------------------------------------
/// <summary>
/// different state of a Selection in a ViewerSelector...
/// </summary>
public enum class SelectMgr_StateOfSelection
{
	SelectMgr_SOS_Any = -2,
	SelectMgr_SOS_Unknown = -1,
	SelectMgr_SOS_Deactivated = 0,
	SelectMgr_SOS_Activated = 1
}; // enum  class SelectMgr_StateOfSelection

//---------------------------------------------------------------------
//  Enum  SelectMgr_TypeOfBVHUpdate
//---------------------------------------------------------------------
/// <summary>
/// Keeps track for BVH update state for each SelectMgr_Selection entity in a following way:
/// - Add        : 2nd level BVH does not contain any of the selection's sensitive entities and they must be
/// added;
/// - Remove     : all sensitive entities of the selection must be removed from 2nd level BVH;
/// - Renew      : 2nd level BVH already contains sensitives of the selection, but the its complete update
/// and removal is required. Therefore, sensitives of the selection with this type of update
/// must be removed from 2nd level BVH and added after recomputation.
/// - Invalidate : the 2nd level BVH needs to be rebuilt;
/// - None       : entities of the selection are up to date.
/// </summary>
public enum class SelectMgr_TypeOfBVHUpdate
{
	SelectMgr_TBU_Add = 0,
	SelectMgr_TBU_Remove = 1,
	SelectMgr_TBU_Renew = 2,
	SelectMgr_TBU_Invalidate = 3,
	SelectMgr_TBU_None = 4
}; // enum  class SelectMgr_TypeOfBVHUpdate

//---------------------------------------------------------------------
//  Enum  SelectMgr_TypeOfUpdate
//---------------------------------------------------------------------
/// <summary>
/// Provides values for types of update, including
/// -   full
/// -   partial
/// -   none.
/// </summary>
public enum class SelectMgr_TypeOfUpdate
{
	SelectMgr_TOU_Full = 0,
	SelectMgr_TOU_Partial = 1,
	SelectMgr_TOU_None = 2
}; // enum  class SelectMgr_TypeOfUpdate

//---------------------------------------------------------------------
//  Enum  SelectMgr_PickingStrategy
//---------------------------------------------------------------------
/// <summary>
/// Enumeration defines picking strategy - which entities detected by picking line will be accepted, considering selection filters.
/// </summary>
public enum class SelectMgr_PickingStrategy
{
	SelectMgr_PickingStrategy_FirstAcceptable = 0,
	SelectMgr_PickingStrategy_OnlyTopmost = 1
}; // enum  class SelectMgr_PickingStrategy

//---------------------------------------------------------------------
//  Enum  SelectMgr_TypeOfDepthTolerance
//---------------------------------------------------------------------
/// <summary>
/// Define the type of depth tolerance for considering picked entities to lie on the same depth (distance from eye to entity).
/// </summary>
/// @sa SelectMgr_SortCriterion, SelectMgr_ViewerSelector
public enum class SelectMgr_TypeOfDepthTolerance
{
	SelectMgr_TypeOfDepthTolerance_Uniform = 0,
	SelectMgr_TypeOfDepthTolerance_UniformPixels = 1,
	SelectMgr_TypeOfDepthTolerance_SensitivityFactor = 2
}; // enum  class SelectMgr_TypeOfDepthTolerance

//---------------------------------------------------------------------
//  Class  SelectMgr_ListOfFilter
//---------------------------------------------------------------------
public ref class SelectMgr_ListOfFilter sealed : public BaseClass<::SelectMgr_ListOfFilter>
{

#ifdef Include_SelectMgr_ListOfFilter_h
public:
	Include_SelectMgr_ListOfFilter_h
#endif

public:
	SelectMgr_ListOfFilter(::SelectMgr_ListOfFilter* nativeInstance)
		: BaseClass<::SelectMgr_ListOfFilter>( nativeInstance, true )
	{}

	SelectMgr_ListOfFilter(::SelectMgr_ListOfFilter& nativeInstance)
		: BaseClass<::SelectMgr_ListOfFilter>( &nativeInstance, false )
	{}

	property ::SelectMgr_ListOfFilter* NativeInstance
	{
		::SelectMgr_ListOfFilter* get()
		{
			return static_cast<::SelectMgr_ListOfFilter*>(_NativeInstance);
		}
	}

public:
	SelectMgr_ListOfFilter();
	SelectMgr_ListOfFilter(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	SelectMgr_ListOfFilter(Macad::Occt::SelectMgr_ListOfFilter^ theOther);
	int Size();
	Macad::Occt::SelectMgr_ListOfFilter^ Assign(Macad::Occt::SelectMgr_ListOfFilter^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::SelectMgr_Filter^ First();
	Macad::Occt::SelectMgr_Filter^ Last();
	Macad::Occt::SelectMgr_Filter^ Append(Macad::Occt::SelectMgr_Filter^ theItem);
	/* Method skipped due to unknown mapping: void Append(SelectMgr_Filter theItem, Iterator theIter, ) */
	void Append(Macad::Occt::SelectMgr_ListOfFilter^ theOther);
	Macad::Occt::SelectMgr_Filter^ Prepend(Macad::Occt::SelectMgr_Filter^ theItem);
	void Prepend(Macad::Occt::SelectMgr_ListOfFilter^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: SelectMgr_Filter InsertBefore(SelectMgr_Filter theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(SelectMgr_ListOfFilter theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: SelectMgr_Filter InsertAfter(SelectMgr_Filter theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(SelectMgr_ListOfFilter theOther, Iterator theIter, ) */
	void Reverse();
}; // class SelectMgr_ListOfFilter

//---------------------------------------------------------------------
//  Class  SelectMgr_SequenceOfSelection
//---------------------------------------------------------------------
public ref class SelectMgr_SequenceOfSelection sealed : public BaseClass<::SelectMgr_SequenceOfSelection>
{

#ifdef Include_SelectMgr_SequenceOfSelection_h
public:
	Include_SelectMgr_SequenceOfSelection_h
#endif

public:
	SelectMgr_SequenceOfSelection(::SelectMgr_SequenceOfSelection* nativeInstance)
		: BaseClass<::SelectMgr_SequenceOfSelection>( nativeInstance, true )
	{}

	SelectMgr_SequenceOfSelection(::SelectMgr_SequenceOfSelection& nativeInstance)
		: BaseClass<::SelectMgr_SequenceOfSelection>( &nativeInstance, false )
	{}

	property ::SelectMgr_SequenceOfSelection* NativeInstance
	{
		::SelectMgr_SequenceOfSelection* get()
		{
			return static_cast<::SelectMgr_SequenceOfSelection*>(_NativeInstance);
		}
	}

public:
	SelectMgr_SequenceOfSelection();
	SelectMgr_SequenceOfSelection(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	SelectMgr_SequenceOfSelection(Macad::Occt::SelectMgr_SequenceOfSelection^ theOther);
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
	Macad::Occt::SelectMgr_SequenceOfSelection^ Assign(Macad::Occt::SelectMgr_SequenceOfSelection^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::SelectMgr_Selection^ theItem);
	void Append(Macad::Occt::SelectMgr_SequenceOfSelection^ theSeq);
	void Prepend(Macad::Occt::SelectMgr_Selection^ theItem);
	void Prepend(Macad::Occt::SelectMgr_SequenceOfSelection^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::SelectMgr_Selection^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::SelectMgr_SequenceOfSelection^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, SelectMgr_Selection theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::SelectMgr_SequenceOfSelection^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::SelectMgr_Selection^ theItem);
	void Split(int theIndex, Macad::Occt::SelectMgr_SequenceOfSelection^ theSeq);
	Macad::Occt::SelectMgr_Selection^ First();
	Macad::Occt::SelectMgr_Selection^ ChangeFirst();
	Macad::Occt::SelectMgr_Selection^ Last();
	Macad::Occt::SelectMgr_Selection^ ChangeLast();
	Macad::Occt::SelectMgr_Selection^ Value(int theIndex);
	Macad::Occt::SelectMgr_Selection^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::SelectMgr_Selection^ theItem);
}; // class SelectMgr_SequenceOfSelection

//---------------------------------------------------------------------
//  Class  SelectMgr_SequenceOfOwner
//---------------------------------------------------------------------
public ref class SelectMgr_SequenceOfOwner sealed : public BaseClass<::SelectMgr_SequenceOfOwner>
{

#ifdef Include_SelectMgr_SequenceOfOwner_h
public:
	Include_SelectMgr_SequenceOfOwner_h
#endif

public:
	SelectMgr_SequenceOfOwner(::SelectMgr_SequenceOfOwner* nativeInstance)
		: BaseClass<::SelectMgr_SequenceOfOwner>( nativeInstance, true )
	{}

	SelectMgr_SequenceOfOwner(::SelectMgr_SequenceOfOwner& nativeInstance)
		: BaseClass<::SelectMgr_SequenceOfOwner>( &nativeInstance, false )
	{}

	property ::SelectMgr_SequenceOfOwner* NativeInstance
	{
		::SelectMgr_SequenceOfOwner* get()
		{
			return static_cast<::SelectMgr_SequenceOfOwner*>(_NativeInstance);
		}
	}

public:
	SelectMgr_SequenceOfOwner();
	SelectMgr_SequenceOfOwner(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	SelectMgr_SequenceOfOwner(Macad::Occt::SelectMgr_SequenceOfOwner^ theOther);
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
	Macad::Occt::SelectMgr_SequenceOfOwner^ Assign(Macad::Occt::SelectMgr_SequenceOfOwner^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::SelectMgr_EntityOwner^ theItem);
	void Append(Macad::Occt::SelectMgr_SequenceOfOwner^ theSeq);
	void Prepend(Macad::Occt::SelectMgr_EntityOwner^ theItem);
	void Prepend(Macad::Occt::SelectMgr_SequenceOfOwner^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::SelectMgr_EntityOwner^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::SelectMgr_SequenceOfOwner^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, SelectMgr_EntityOwner theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::SelectMgr_SequenceOfOwner^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::SelectMgr_EntityOwner^ theItem);
	void Split(int theIndex, Macad::Occt::SelectMgr_SequenceOfOwner^ theSeq);
	Macad::Occt::SelectMgr_EntityOwner^ First();
	Macad::Occt::SelectMgr_EntityOwner^ ChangeFirst();
	Macad::Occt::SelectMgr_EntityOwner^ Last();
	Macad::Occt::SelectMgr_EntityOwner^ ChangeLast();
	Macad::Occt::SelectMgr_EntityOwner^ Value(int theIndex);
	Macad::Occt::SelectMgr_EntityOwner^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::SelectMgr_EntityOwner^ theItem);
}; // class SelectMgr_SequenceOfOwner

//---------------------------------------------------------------------
//  Class  SelectMgr_IndexedDataMapOfOwnerCriterion
//---------------------------------------------------------------------
public ref class SelectMgr_IndexedDataMapOfOwnerCriterion sealed : public BaseClass<::SelectMgr_IndexedDataMapOfOwnerCriterion>
{

#ifdef Include_SelectMgr_IndexedDataMapOfOwnerCriterion_h
public:
	Include_SelectMgr_IndexedDataMapOfOwnerCriterion_h
#endif

public:
	SelectMgr_IndexedDataMapOfOwnerCriterion(::SelectMgr_IndexedDataMapOfOwnerCriterion* nativeInstance)
		: BaseClass<::SelectMgr_IndexedDataMapOfOwnerCriterion>( nativeInstance, true )
	{}

	SelectMgr_IndexedDataMapOfOwnerCriterion(::SelectMgr_IndexedDataMapOfOwnerCriterion& nativeInstance)
		: BaseClass<::SelectMgr_IndexedDataMapOfOwnerCriterion>( &nativeInstance, false )
	{}

	property ::SelectMgr_IndexedDataMapOfOwnerCriterion* NativeInstance
	{
		::SelectMgr_IndexedDataMapOfOwnerCriterion* get()
		{
			return static_cast<::SelectMgr_IndexedDataMapOfOwnerCriterion*>(_NativeInstance);
		}
	}

public:
	SelectMgr_IndexedDataMapOfOwnerCriterion();
	SelectMgr_IndexedDataMapOfOwnerCriterion(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	SelectMgr_IndexedDataMapOfOwnerCriterion(int theNbBuckets);
	SelectMgr_IndexedDataMapOfOwnerCriterion(Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion^ theOther);
	void Exchange(Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion^ theOther);
	int Add(Macad::Occt::SelectMgr_EntityOwner^ theKey1, Macad::Occt::SelectMgr_SortCriterion^ theItem);
	bool Contains(Macad::Occt::SelectMgr_EntityOwner^ theKey1);
	void Substitute(int theIndex, Macad::Occt::SelectMgr_EntityOwner^ theKey1, Macad::Occt::SelectMgr_SortCriterion^ theItem);
	void Swap(int theIndex1, int theIndex2);
	void RemoveLast();
	void RemoveFromIndex(int theIndex);
	void RemoveKey(Macad::Occt::SelectMgr_EntityOwner^ theKey1);
	Macad::Occt::SelectMgr_EntityOwner^ FindKey(int theIndex);
	Macad::Occt::SelectMgr_SortCriterion^ FindFromIndex(int theIndex);
	Macad::Occt::SelectMgr_SortCriterion^ ChangeFromIndex(int theIndex);
	int FindIndex(Macad::Occt::SelectMgr_EntityOwner^ theKey1);
	Macad::Occt::SelectMgr_SortCriterion^ FindFromKey(Macad::Occt::SelectMgr_EntityOwner^ theKey1);
	Macad::Occt::SelectMgr_SortCriterion^ ChangeFromKey(Macad::Occt::SelectMgr_EntityOwner^ theKey1);
	Macad::Occt::SelectMgr_SortCriterion^ Seek(Macad::Occt::SelectMgr_EntityOwner^ theKey1);
	Macad::Occt::SelectMgr_SortCriterion^ ChangeSeek(Macad::Occt::SelectMgr_EntityOwner^ theKey1);
	bool FindFromKey(Macad::Occt::SelectMgr_EntityOwner^ theKey1, Macad::Occt::SelectMgr_SortCriterion^ theValue);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class SelectMgr_IndexedDataMapOfOwnerCriterion

//---------------------------------------------------------------------
//  Class  SelectMgr_MapOfObjectSensitives
//---------------------------------------------------------------------
public ref class SelectMgr_MapOfObjectSensitives sealed : public BaseClass<::SelectMgr_MapOfObjectSensitives>
{

#ifdef Include_SelectMgr_MapOfObjectSensitives_h
public:
	Include_SelectMgr_MapOfObjectSensitives_h
#endif

public:
	SelectMgr_MapOfObjectSensitives(::SelectMgr_MapOfObjectSensitives* nativeInstance)
		: BaseClass<::SelectMgr_MapOfObjectSensitives>( nativeInstance, true )
	{}

	SelectMgr_MapOfObjectSensitives(::SelectMgr_MapOfObjectSensitives& nativeInstance)
		: BaseClass<::SelectMgr_MapOfObjectSensitives>( &nativeInstance, false )
	{}

	property ::SelectMgr_MapOfObjectSensitives* NativeInstance
	{
		::SelectMgr_MapOfObjectSensitives* get()
		{
			return static_cast<::SelectMgr_MapOfObjectSensitives*>(_NativeInstance);
		}
	}

public:
	SelectMgr_MapOfObjectSensitives();
	SelectMgr_MapOfObjectSensitives(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	SelectMgr_MapOfObjectSensitives(int theNbBuckets);
	SelectMgr_MapOfObjectSensitives(Macad::Occt::SelectMgr_MapOfObjectSensitives^ theOther);
	void Exchange(Macad::Occt::SelectMgr_MapOfObjectSensitives^ theOther);
	Macad::Occt::SelectMgr_MapOfObjectSensitives^ Assign(Macad::Occt::SelectMgr_MapOfObjectSensitives^ theOther);
	/* Method skipped due to unknown mapping: SelectMgr_SensitiveEntitySet Bound(SelectMgr_SelectableObject theKey, SelectMgr_SensitiveEntitySet theItem, ) */
	bool IsBound(Macad::Occt::SelectMgr_SelectableObject^ theKey);
	bool UnBind(Macad::Occt::SelectMgr_SelectableObject^ theKey);
	/* Method skipped due to unknown mapping: SelectMgr_SensitiveEntitySet Seek(SelectMgr_SelectableObject theKey, ) */
	/* Method skipped due to unknown mapping: SelectMgr_SensitiveEntitySet Find(SelectMgr_SelectableObject theKey, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Find(SelectMgr_SelectableObject theKey, SelectMgr_SensitiveEntitySet theValue, ) */
	/* Method skipped due to unknown mapping: SelectMgr_SensitiveEntitySet ChangeSeek(SelectMgr_SelectableObject theKey, ) */
	/* Method skipped due to unknown mapping: SelectMgr_SensitiveEntitySet ChangeFind(SelectMgr_SelectableObject theKey, ) */
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class SelectMgr_MapOfObjectSensitives

//---------------------------------------------------------------------
//  Class  SelectMgr_FrustumCache
//---------------------------------------------------------------------
public ref class SelectMgr_FrustumCache sealed : public BaseClass<::SelectMgr_FrustumCache>
{

#ifdef Include_SelectMgr_FrustumCache_h
public:
	Include_SelectMgr_FrustumCache_h
#endif

public:
	SelectMgr_FrustumCache(::SelectMgr_FrustumCache* nativeInstance)
		: BaseClass<::SelectMgr_FrustumCache>( nativeInstance, true )
	{}

	SelectMgr_FrustumCache(::SelectMgr_FrustumCache& nativeInstance)
		: BaseClass<::SelectMgr_FrustumCache>( &nativeInstance, false )
	{}

	property ::SelectMgr_FrustumCache* NativeInstance
	{
		::SelectMgr_FrustumCache* get()
		{
			return static_cast<::SelectMgr_FrustumCache*>(_NativeInstance);
		}
	}

public:
	SelectMgr_FrustumCache();
	SelectMgr_FrustumCache(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	SelectMgr_FrustumCache(int theNbBuckets);
	SelectMgr_FrustumCache(Macad::Occt::SelectMgr_FrustumCache^ theOther);
	void Exchange(Macad::Occt::SelectMgr_FrustumCache^ theOther);
	Macad::Occt::SelectMgr_FrustumCache^ Assign(Macad::Occt::SelectMgr_FrustumCache^ theOther);
	/* Method skipped due to unknown mapping: SelectMgr_SelectingVolumeManager Bound(int theKey, SelectMgr_SelectingVolumeManager theItem, ) */
	bool IsBound(int theKey);
	bool UnBind(int theKey);
	/* Method skipped due to unknown mapping: SelectMgr_SelectingVolumeManager Seek(int theKey, ) */
	/* Method skipped due to unknown mapping: SelectMgr_SelectingVolumeManager Find(int theKey, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Find(int theKey, SelectMgr_SelectingVolumeManager theValue, ) */
	/* Method skipped due to unknown mapping: SelectMgr_SelectingVolumeManager ChangeSeek(int theKey, ) */
	/* Method skipped due to unknown mapping: SelectMgr_SelectingVolumeManager ChangeFind(int theKey, ) */
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class SelectMgr_FrustumCache

//---------------------------------------------------------------------
//  Class  SelectMgr_IndexedMapOfHSensitive
//---------------------------------------------------------------------
public ref class SelectMgr_IndexedMapOfHSensitive sealed : public BaseClass<::SelectMgr_IndexedMapOfHSensitive>
{

#ifdef Include_SelectMgr_IndexedMapOfHSensitive_h
public:
	Include_SelectMgr_IndexedMapOfHSensitive_h
#endif

public:
	SelectMgr_IndexedMapOfHSensitive(::SelectMgr_IndexedMapOfHSensitive* nativeInstance)
		: BaseClass<::SelectMgr_IndexedMapOfHSensitive>( nativeInstance, true )
	{}

	SelectMgr_IndexedMapOfHSensitive(::SelectMgr_IndexedMapOfHSensitive& nativeInstance)
		: BaseClass<::SelectMgr_IndexedMapOfHSensitive>( &nativeInstance, false )
	{}

	property ::SelectMgr_IndexedMapOfHSensitive* NativeInstance
	{
		::SelectMgr_IndexedMapOfHSensitive* get()
		{
			return static_cast<::SelectMgr_IndexedMapOfHSensitive*>(_NativeInstance);
		}
	}

public:
	SelectMgr_IndexedMapOfHSensitive();
	SelectMgr_IndexedMapOfHSensitive(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	SelectMgr_IndexedMapOfHSensitive(int theNbBuckets);
	SelectMgr_IndexedMapOfHSensitive(Macad::Occt::SelectMgr_IndexedMapOfHSensitive^ theOther);
	void Exchange(Macad::Occt::SelectMgr_IndexedMapOfHSensitive^ theOther);
	int Add(Macad::Occt::SelectMgr_SensitiveEntity^ theKey1);
	bool Contains(Macad::Occt::SelectMgr_SensitiveEntity^ theKey1);
	void Substitute(int theIndex, Macad::Occt::SelectMgr_SensitiveEntity^ theKey1);
	void Swap(int theIndex1, int theIndex2);
	void RemoveLast();
	void RemoveFromIndex(int theIndex);
	bool RemoveKey(Macad::Occt::SelectMgr_SensitiveEntity^ theKey1);
	Macad::Occt::SelectMgr_SensitiveEntity^ FindKey(int theIndex);
	int FindIndex(Macad::Occt::SelectMgr_SensitiveEntity^ theKey1);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class SelectMgr_IndexedMapOfHSensitive

//---------------------------------------------------------------------
//  Class  SelectMgr_MapOfOwners
//---------------------------------------------------------------------
public ref class SelectMgr_MapOfOwners sealed : public BaseClass<::SelectMgr_MapOfOwners>
{

#ifdef Include_SelectMgr_MapOfOwners_h
public:
	Include_SelectMgr_MapOfOwners_h
#endif

public:
	SelectMgr_MapOfOwners(::SelectMgr_MapOfOwners* nativeInstance)
		: BaseClass<::SelectMgr_MapOfOwners>( nativeInstance, true )
	{}

	SelectMgr_MapOfOwners(::SelectMgr_MapOfOwners& nativeInstance)
		: BaseClass<::SelectMgr_MapOfOwners>( &nativeInstance, false )
	{}

	property ::SelectMgr_MapOfOwners* NativeInstance
	{
		::SelectMgr_MapOfOwners* get()
		{
			return static_cast<::SelectMgr_MapOfOwners*>(_NativeInstance);
		}
	}

public:
	SelectMgr_MapOfOwners();
	SelectMgr_MapOfOwners(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	SelectMgr_MapOfOwners(int theNbBuckets);
	SelectMgr_MapOfOwners(Macad::Occt::SelectMgr_MapOfOwners^ theOther);
	void Exchange(Macad::Occt::SelectMgr_MapOfOwners^ theOther);
	Macad::Occt::SelectMgr_MapOfOwners^ Assign(Macad::Occt::SelectMgr_MapOfOwners^ theOther);
	int Bound(Macad::Occt::SelectMgr_EntityOwner^ theKey, int theItem);
	bool IsBound(Macad::Occt::SelectMgr_EntityOwner^ theKey);
	bool UnBind(Macad::Occt::SelectMgr_EntityOwner^ theKey);
	int Seek(Macad::Occt::SelectMgr_EntityOwner^ theKey);
	int Find(Macad::Occt::SelectMgr_EntityOwner^ theKey);
	bool Find(Macad::Occt::SelectMgr_EntityOwner^ theKey, int% theValue);
	int ChangeSeek(Macad::Occt::SelectMgr_EntityOwner^ theKey);
	int ChangeFind(Macad::Occt::SelectMgr_EntityOwner^ theKey);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class SelectMgr_MapOfOwners

//---------------------------------------------------------------------
//  Class  SelectMgr_TriangFrustums
//---------------------------------------------------------------------
public ref class SelectMgr_TriangFrustums sealed : public BaseClass<::SelectMgr_TriangFrustums>
{

#ifdef Include_SelectMgr_TriangFrustums_h
public:
	Include_SelectMgr_TriangFrustums_h
#endif

public:
	SelectMgr_TriangFrustums(::SelectMgr_TriangFrustums* nativeInstance)
		: BaseClass<::SelectMgr_TriangFrustums>( nativeInstance, true )
	{}

	SelectMgr_TriangFrustums(::SelectMgr_TriangFrustums& nativeInstance)
		: BaseClass<::SelectMgr_TriangFrustums>( &nativeInstance, false )
	{}

	property ::SelectMgr_TriangFrustums* NativeInstance
	{
		::SelectMgr_TriangFrustums* get()
		{
			return static_cast<::SelectMgr_TriangFrustums*>(_NativeInstance);
		}
	}

public:
	SelectMgr_TriangFrustums();
	SelectMgr_TriangFrustums(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	SelectMgr_TriangFrustums(Macad::Occt::SelectMgr_TriangFrustums^ theOther);
	int Size();
	Macad::Occt::SelectMgr_TriangFrustums^ Assign(Macad::Occt::SelectMgr_TriangFrustums^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	/* Method skipped due to unknown mapping: SelectMgr_TriangularFrustum First() */
	/* Method skipped due to unknown mapping: SelectMgr_TriangularFrustum Last() */
	/* Method skipped due to unknown mapping: SelectMgr_TriangularFrustum Append(SelectMgr_TriangularFrustum theItem, ) */
	/* Method skipped due to unknown mapping: void Append(SelectMgr_TriangularFrustum theItem, Iterator theIter, ) */
	void Append(Macad::Occt::SelectMgr_TriangFrustums^ theOther);
	/* Method skipped due to unknown mapping: SelectMgr_TriangularFrustum Prepend(SelectMgr_TriangularFrustum theItem, ) */
	void Prepend(Macad::Occt::SelectMgr_TriangFrustums^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: SelectMgr_TriangularFrustum InsertBefore(SelectMgr_TriangularFrustum theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(SelectMgr_TriangFrustums theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: SelectMgr_TriangularFrustum InsertAfter(SelectMgr_TriangularFrustum theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(SelectMgr_TriangFrustums theOther, Iterator theIter, ) */
	void Reverse();
}; // class SelectMgr_TriangFrustums

//---------------------------------------------------------------------
//  Class  SelectMgr_Selection
//---------------------------------------------------------------------
/// <summary>
/// Represents the state of a given selection mode for a
/// Selectable Object. Contains all the sensitive entities available for this mode.
/// An interactive object can have an indefinite number of
/// modes of selection, each representing a
/// "decomposition" into sensitive primitives; each
/// primitive has an Owner (SelectMgr_EntityOwner)
/// which allows us to identify the exact entity which has
/// been detected. Each Selection mode is identified by
/// an index. The set of sensitive primitives which
/// correspond to a given mode is stocked in a
/// SelectMgr_Selection object. By Convention, the
/// default selection mode which allows us to grasp the
/// Interactive object in its entirety will be mode 0.
/// AIS_Trihedron : 4 selection modes
/// -   mode 0 : selection of a trihedron
/// -   mode 1 : selection of the origin of the trihedron
/// -   mode 2 : selection of the axes
/// -   mode 3 : selection of the planes XOY, YOZ, XOZ
/// when you activate one of modes 1 2 3 4 , you pick AIS objects of type:
/// -   AIS_Point
/// -   AIS_Axis (and information on the type of axis)
/// -   AIS_Plane (and information on the type of plane).
/// AIS_PlaneTrihedron offers 3 selection modes:
/// -   mode 0 : selection of the whole trihedron
/// -   mode 1 : selection of the origin of the trihedron
/// -   mode 2 : selection of the axes - same remarks as for the Trihedron.
/// AIS_Shape : 7 maximum selection modes, depending
/// on the complexity of the shape :
/// -   mode 0 : selection of the AIS_Shape
/// -   mode 1 : selection of the vertices
/// -   mode 2 : selection of the edges
/// -   mode 3 : selection of the wires
/// -   mode 4 : selection of the faces
/// -   mode 5 : selection of the shells
/// -   mode 6 :   selection of the constituent solids.
/// </summary>
public ref class SelectMgr_Selection sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_SelectMgr_Selection_h
public:
	Include_SelectMgr_Selection_h
#endif

public:
	SelectMgr_Selection(::SelectMgr_Selection* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	SelectMgr_Selection(::SelectMgr_Selection& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::SelectMgr_Selection* NativeInstance
	{
		::SelectMgr_Selection* get()
		{
			return static_cast<::SelectMgr_Selection*>(_NativeInstance);
		}
	}

	static Macad::Occt::SelectMgr_Selection^ CreateDowncasted(::SelectMgr_Selection* instance);

public:
	/// <summary>
	/// Constructs a selection object defined by the selection mode IdMode.
	/// The default setting 0 is the selection mode for a shape in its entirety.
	/// </summary>
	SelectMgr_Selection(int theModeIdx);
	SelectMgr_Selection(Macad::Occt::SelectMgr_Selection^ parameter1);
	void Destroy();
	/// <summary>
	/// Adds the sensitive primitive to the list of stored entities in this object.
	/// Raises NullObject if the primitive is a null handle.
	/// </summary>
	/* Method skipped due to unknown mapping: void Add(Select3D_SensitiveEntity theSensitive, ) */
	/// <summary>
	/// empties the selection from all the stored entities
	/// </summary>
	void Clear();
	/// <summary>
	/// returns true if no sensitive entity is stored.
	/// </summary>
	bool IsEmpty();
	/// <summary>
	/// returns the selection mode represented by this selection
	/// </summary>
	int Mode();
	/// <summary>
	/// Return entities.
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Vector<opencascade::handle<SelectMgr_SensitiveEntity>> Entities() */
	/// <summary>
	/// Return entities.
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Vector<opencascade::handle<SelectMgr_SensitiveEntity>> ChangeEntities() */
	/// <summary>
	/// Returns the flag UpdateFlag.
	/// This flage gives the update status of this framework
	/// in a ViewerSelector object:
	/// -   full
	/// -   partial, or
	/// -   none.
	/// </summary>
	Macad::Occt::SelectMgr_TypeOfUpdate UpdateStatus();
	void UpdateStatus(Macad::Occt::SelectMgr_TypeOfUpdate theStatus);
	void UpdateBVHStatus(Macad::Occt::SelectMgr_TypeOfBVHUpdate theStatus);
	Macad::Occt::SelectMgr_TypeOfBVHUpdate BVHUpdateStatus();
	/// <summary>
	/// Returns status of selection
	/// </summary>
	Macad::Occt::SelectMgr_StateOfSelection GetSelectionState();
	/// <summary>
	/// Sets status of selection
	/// </summary>
	void SetSelectionState(Macad::Occt::SelectMgr_StateOfSelection theState);
	/// <summary>
	/// Returns sensitivity of the selection
	/// </summary>
	int Sensitivity();
	/// <summary>
	/// Changes sensitivity of the selection and all its entities to the given value.
	/// IMPORTANT: This method does not update any outer selection structures, so for
	/// proper updates use SelectMgr_SelectionManager::SetSelectionSensitivity method.
	/// </summary>
	void SetSensitivity(int theNewSens);
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class SelectMgr_Selection

//---------------------------------------------------------------------
//  Class  SelectMgr
//---------------------------------------------------------------------
/// <summary>
/// Auxiliary tools for SelectMgr package.
/// </summary>
public ref class SelectMgr sealed : public BaseClass<::SelectMgr>
{

#ifdef Include_SelectMgr_h
public:
	Include_SelectMgr_h
#endif

public:
	SelectMgr(::SelectMgr* nativeInstance)
		: BaseClass<::SelectMgr>( nativeInstance, true )
	{}

	SelectMgr(::SelectMgr& nativeInstance)
		: BaseClass<::SelectMgr>( &nativeInstance, false )
	{}

	property ::SelectMgr* NativeInstance
	{
		::SelectMgr* get()
		{
			return static_cast<::SelectMgr*>(_NativeInstance);
		}
	}

public:
	SelectMgr();
	SelectMgr(Macad::Occt::SelectMgr^ parameter1);
	/// <summary>
	/// Compute debug presentation for sensitive objects.
	/// </summary>
	static void ComputeSensitivePrs(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::SelectMgr_Selection^ theSel, Macad::Occt::Trsf theLoc, Macad::Occt::Graphic3d_TransformPers^ theTrsfPers);
}; // class SelectMgr

//---------------------------------------------------------------------
//  Class  SelectMgr_EntityOwner
//---------------------------------------------------------------------
/// <summary>
/// A framework to define classes of owners of sensitive primitives.
/// The owner is the link between application and selection data structures.
/// For the application to make its own objects selectable, it must define owner classes inheriting this framework.
/// </summary>
public ref class SelectMgr_EntityOwner : public Macad::Occt::Standard_Transient
{

#ifdef Include_SelectMgr_EntityOwner_h
public:
	Include_SelectMgr_EntityOwner_h
#endif

protected:
	SelectMgr_EntityOwner(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	SelectMgr_EntityOwner(::SelectMgr_EntityOwner* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	SelectMgr_EntityOwner(::SelectMgr_EntityOwner& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::SelectMgr_EntityOwner* NativeInstance
	{
		::SelectMgr_EntityOwner* get()
		{
			return static_cast<::SelectMgr_EntityOwner*>(_NativeInstance);
		}
	}

	static Macad::Occt::SelectMgr_EntityOwner^ CreateDowncasted(::SelectMgr_EntityOwner* instance);

public:
	/// <summary>
	/// Initializes the selection priority aPriority.
	/// </summary>
	SelectMgr_EntityOwner(int aPriority);
	/// <summary>
	/// Constructs a framework with the selectable object
	/// anSO being attributed the selection priority aPriority.
	/// </summary>
	SelectMgr_EntityOwner(Macad::Occt::SelectMgr_SelectableObject^ aSO, int aPriority);
	/// <summary>
	/// Constructs a framework with the selectable object
	/// anSO being attributed the selection priority aPriority.
	/// </summary>
	SelectMgr_EntityOwner(Macad::Occt::SelectMgr_SelectableObject^ aSO);
	/// <summary>
	/// Constructs a framework from existing one
	/// anSO being attributed the selection priority aPriority.
	/// </summary>
	SelectMgr_EntityOwner(Macad::Occt::SelectMgr_EntityOwner^ theOwner, int aPriority);
	SelectMgr_EntityOwner(Macad::Occt::SelectMgr_EntityOwner^ parameter1);
	/// <summary>
	/// Return selection priority (within range [0-9]) for results with the same depth; 0 by default.
	/// Example - selection of shapes:
	/// the owners are selectable objects (presentations) a user can give vertex priority [3], edges [2] faces [1] shape [0],
	/// so that if during selection one vertex one edge and one face are simultaneously detected, the vertex will only be hilighted.
	/// </summary>
	int Priority();
	/// <summary>
	/// Sets the selectable priority of the owner within range [0-9].
	/// </summary>
	void SetPriority(int thePriority);
	/// <summary>
	/// Returns true if there is a selectable object to serve as an owner.
	/// </summary>
	bool HasSelectable();
	/// <summary>
	/// Returns a selectable object detected in the working context.
	/// </summary>
	Macad::Occt::SelectMgr_SelectableObject^ Selectable();
	/// <summary>
	/// Sets the selectable object.
	/// </summary>
	void SetSelectable(Macad::Occt::SelectMgr_SelectableObject^ theSelObj);
	/// <summary>
	/// Handle mouse button click event.
	/// Does nothing by default and returns FALSE.
	/// </summary>
	/// <param name="thePoint">
	///      mouse cursor position
	/// </param>
	/// <param name="theButton">
	///     clicked button
	/// </param>
	/// <param name="theModifiers">
	///  key modifiers
	/// </param>
	/// <param name="theIsDoubleClick">
	/// flag indicating double mouse click
	/// </param>
	/// <returns>
	/// TRUE if object handled click
	/// </returns>
	bool HandleMouseClick(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsDoubleClick);
	/// <summary>
	/// Returns true if the presentation manager highlights selections corresponding to the selection mode.
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean IsHilighted(PrsMgr_PresentationManager thePrsMgr, Standard_Integer theMode, ) */
	/// <summary>
	/// Returns true if the presentation manager highlights selections corresponding to the selection mode.
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean IsHilighted(PrsMgr_PresentationManager thePrsMgr, Standard_Integer theMode, ) */
	/// <summary>
	/// Highlights selectable object's presentation with display mode in presentation manager with given highlight style.
	/// Also a check for auto-highlight is performed - if selectable object manages highlighting on its own,
	/// execution will be passed to SelectMgr_SelectableObject::HilightOwnerWithColor method.
	/// </summary>
	/* Method skipped due to unknown mapping: void HilightWithColor(PrsMgr_PresentationManager thePrsMgr, Prs3d_Drawer theStyle, Standard_Integer theMode, ) */
	/// <summary>
	/// Highlights selectable object's presentation with display mode in presentation manager with given highlight style.
	/// Also a check for auto-highlight is performed - if selectable object manages highlighting on its own,
	/// execution will be passed to SelectMgr_SelectableObject::HilightOwnerWithColor method.
	/// </summary>
	/* Method skipped due to unknown mapping: void HilightWithColor(PrsMgr_PresentationManager thePrsMgr, Prs3d_Drawer theStyle, Standard_Integer theMode, ) */
	/// <summary>
	/// Removes highlighting from the owner of a detected selectable object in the presentation manager.
	/// This object could be the owner of a sensitive primitive.
	/// </summary>
	/// <param name="thePrsMgr">
	/// presentation manager
	/// </param>
	/// <param name="theMode">
	///   obsolete argument for compatibility, should be ignored by implementations
	/// </param>
	/* Method skipped due to unknown mapping: void Unhilight(PrsMgr_PresentationManager thePrsMgr, Standard_Integer theMode, ) */
	/// <summary>
	/// Removes highlighting from the owner of a detected selectable object in the presentation manager.
	/// This object could be the owner of a sensitive primitive.
	/// </summary>
	/// <param name="thePrsMgr">
	/// presentation manager
	/// </param>
	/// <param name="theMode">
	///   obsolete argument for compatibility, should be ignored by implementations
	/// </param>
	/* Method skipped due to unknown mapping: void Unhilight(PrsMgr_PresentationManager thePrsMgr, Standard_Integer theMode, ) */
	/// <summary>
	/// Clears the owners matching the value of the selection
	/// mode aMode from the presentation manager object aPM.
	/// </summary>
	/* Method skipped due to unknown mapping: void Clear(PrsMgr_PresentationManager thePrsMgr, Standard_Integer theMode, ) */
	/// <summary>
	/// Clears the owners matching the value of the selection
	/// mode aMode from the presentation manager object aPM.
	/// </summary>
	/* Method skipped due to unknown mapping: void Clear(PrsMgr_PresentationManager thePrsMgr, Standard_Integer theMode, ) */
	/// <summary>
	/// Returns TRUE if selectable has transformation.
	/// </summary>
	bool HasLocation();
	/// <summary>
	/// Returns transformation of selectable.
	/// </summary>
	Macad::Occt::TopLoc_Location^ Location();
	/// <summary>
	/// Change owner location (callback for handling change of location of selectable object).
	/// </summary>
	void SetLocation(Macad::Occt::TopLoc_Location^ theLocation);
	/// <summary>
	/// </summary>
	/// <returns>
	/// Standard_True if the owner is selected.
	/// </returns>
	bool IsSelected();
	/// <summary>
	/// Set the state of the owner.
	/// </summary>
	/// <param name="theIsSelected">
	/// [in] shows if owner is selected.
	/// </param>
	void SetSelected(bool theIsSelected);
	/// <summary>
	/// Returns selection state.
	/// </summary>
	int State();
	/// <summary>
	/// Set the state of the owner.
	/// The method is deprecated. Use SetSelected() instead.
	/// </summary>
	void State(int theStatus);
	/// <summary>
	/// if owner is not auto hilighted, for group contains many such owners will be called one method HilightSelected of SelectableObject
	/// </summary>
	bool IsAutoHilight();
	/// <summary>
	/// if this method returns TRUE the owner will always call method Hilight for SelectableObject when the owner is detected.
	/// By default it always return FALSE.
	/// </summary>
	bool IsForcedHilight();
	/// <summary>
	/// Set Z layer ID and update all presentations.
	/// </summary>
	void SetZLayer(int theLayerId);
	/// <summary>
	/// Implements immediate application of location transformation of parent object to dynamic highlight structure
	/// </summary>
	/* Method skipped due to unknown mapping: void UpdateHighlightTrsf(V3d_Viewer theViewer, PrsMgr_PresentationManager theManager, Standard_Integer theDispMode, ) */
	/// <summary>
	/// Returns true if pointer to selectable object of this owner is equal to the given one
	/// </summary>
	bool IsSameSelectable(Macad::Occt::SelectMgr_SelectableObject^ theOther);
	/// <summary>
	/// Returns TRUE if this owner points to a part of object and FALSE for entire object.
	/// </summary>
	bool ComesFromDecomposition();
	/// <summary>
	/// Sets flag indicating this owner points to a part of object (TRUE) or to entire object (FALSE).
	/// </summary>
	void SetComesFromDecomposition(bool theIsFromDecomposition);
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Sets the selectable object.
	/// </summary>
	void Set(Macad::Occt::SelectMgr_SelectableObject^ theSelObj);
	/// <summary>
	/// sets the selectable priority of the owner
	/// </summary>
	void Set(int thePriority);
}; // class SelectMgr_EntityOwner

//---------------------------------------------------------------------
//  Class  SelectMgr_Filter
//---------------------------------------------------------------------
/// <summary>
/// The root class to define filter objects for selection.
/// Advance handling of objects requires the services of
/// filters. These only allow dynamic detection and
/// selection of objects which correspond to the criteria defined in each.
/// Eight standard filters inheriting SelectMgr_Filter are
/// defined in Open CASCADE.
/// You can create your own filters by defining new filter
/// classes inheriting this framework. You use these
/// filters by loading them into an AIS interactive context.
/// </summary>
public ref class SelectMgr_Filter : public Macad::Occt::Standard_Transient
{

#ifdef Include_SelectMgr_Filter_h
public:
	Include_SelectMgr_Filter_h
#endif

protected:
	SelectMgr_Filter(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	SelectMgr_Filter(::SelectMgr_Filter* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	SelectMgr_Filter(::SelectMgr_Filter& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::SelectMgr_Filter* NativeInstance
	{
		::SelectMgr_Filter* get()
		{
			return static_cast<::SelectMgr_Filter*>(_NativeInstance);
		}
	}

	static Macad::Occt::SelectMgr_Filter^ CreateDowncasted(::SelectMgr_Filter* instance);

public:
	SelectMgr_Filter(Macad::Occt::SelectMgr_Filter^ parameter1);
	SelectMgr_Filter();
	/// <summary>
	/// Indicates that the selected Interactive Object
	/// passes the filter. The owner, anObj, can be either
	/// direct or user. A direct owner is the corresponding
	/// construction element, whereas a user is the
	/// compound shape of which the entity forms a part.
	/// When an object is detected by the mouse - in AIS,
	/// this is done through a context selector - its owner
	/// is passed to the filter as an argument.
	/// If the object returns Standard_True, it is kept; if
	/// not, it is rejected.
	/// If you are creating a filter class inheriting this
	/// framework, and the daughter class is to be used in
	/// an AIS local context, you will need to implement the
	/// virtual function ActsOn.
	/// </summary>
	bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ anObj);
	/// <summary>
	/// Returns true in an AIS local context, if this filter
	/// operates on a type of subshape defined in a filter
	/// class inheriting this framework.
	/// This function completes IsOk in an AIS local context.
	/// </summary>
	bool ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode);
}; // class SelectMgr_Filter

//---------------------------------------------------------------------
//  Class  SelectMgr_CompositionFilter
//---------------------------------------------------------------------
/// <summary>
/// A framework to define a compound filter composed of
/// two or more simple filters.
/// </summary>
public ref class SelectMgr_CompositionFilter : public Macad::Occt::SelectMgr_Filter
{

#ifdef Include_SelectMgr_CompositionFilter_h
public:
	Include_SelectMgr_CompositionFilter_h
#endif

protected:
	SelectMgr_CompositionFilter(InitMode init)
		: Macad::Occt::SelectMgr_Filter( init )
	{}

public:
	SelectMgr_CompositionFilter(::SelectMgr_CompositionFilter* nativeInstance)
		: Macad::Occt::SelectMgr_Filter( nativeInstance )
	{}

	SelectMgr_CompositionFilter(::SelectMgr_CompositionFilter& nativeInstance)
		: Macad::Occt::SelectMgr_Filter( nativeInstance )
	{}

	property ::SelectMgr_CompositionFilter* NativeInstance
	{
		::SelectMgr_CompositionFilter* get()
		{
			return static_cast<::SelectMgr_CompositionFilter*>(_NativeInstance);
		}
	}

	static Macad::Occt::SelectMgr_CompositionFilter^ CreateDowncasted(::SelectMgr_CompositionFilter* instance);

public:
	SelectMgr_CompositionFilter(Macad::Occt::SelectMgr_CompositionFilter^ parameter1);
	SelectMgr_CompositionFilter();
	/// <summary>
	/// Adds the filter afilter to a filter object created by a
	/// filter class inheriting this framework.
	/// </summary>
	void Add(Macad::Occt::SelectMgr_Filter^ afilter);
	/// <summary>
	/// Removes the filter aFilter from this framework.
	/// </summary>
	void Remove(Macad::Occt::SelectMgr_Filter^ aFilter);
	/// <summary>
	/// Returns true if this framework is empty.
	/// </summary>
	bool IsEmpty();
	/// <summary>
	/// Returns true if the filter aFilter is in this framework.
	/// </summary>
	bool IsIn(Macad::Occt::SelectMgr_Filter^ aFilter);
	/// <summary>
	/// Returns the list of stored filters from this framework.
	/// </summary>
	Macad::Occt::SelectMgr_ListOfFilter^ StoredFilters();
	/// <summary>
	/// Clears the filters used in this framework.
	/// </summary>
	void Clear();
	bool ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode);
}; // class SelectMgr_CompositionFilter

//---------------------------------------------------------------------
//  Class  SelectMgr_AndFilter
//---------------------------------------------------------------------
/// <summary>
/// A framework to define a selection filter for two or
/// more types of entity.
/// </summary>
public ref class SelectMgr_AndFilter sealed : public Macad::Occt::SelectMgr_CompositionFilter
{

#ifdef Include_SelectMgr_AndFilter_h
public:
	Include_SelectMgr_AndFilter_h
#endif

public:
	SelectMgr_AndFilter(::SelectMgr_AndFilter* nativeInstance)
		: Macad::Occt::SelectMgr_CompositionFilter( nativeInstance )
	{}

	SelectMgr_AndFilter(::SelectMgr_AndFilter& nativeInstance)
		: Macad::Occt::SelectMgr_CompositionFilter( nativeInstance )
	{}

	property ::SelectMgr_AndFilter* NativeInstance
	{
		::SelectMgr_AndFilter* get()
		{
			return static_cast<::SelectMgr_AndFilter*>(_NativeInstance);
		}
	}

	static Macad::Occt::SelectMgr_AndFilter^ CreateDowncasted(::SelectMgr_AndFilter* instance);

public:
	/// <summary>
	/// Constructs an empty selection filter object for two or
	/// more types of entity.
	/// </summary>
	SelectMgr_AndFilter();
	SelectMgr_AndFilter(Macad::Occt::SelectMgr_AndFilter^ parameter1);
	bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj);
}; // class SelectMgr_AndFilter

//---------------------------------------------------------------------
//  Class  SelectMgr_AndOrFilter
//---------------------------------------------------------------------
/// <summary>
/// A framework to define an OR or AND selection filter.
/// To use an AND selection filter call SetUseOrFilter with False parameter.
/// By default the OR selection filter is used.
/// </summary>
public ref class SelectMgr_AndOrFilter sealed : public Macad::Occt::SelectMgr_CompositionFilter
{

#ifdef Include_SelectMgr_AndOrFilter_h
public:
	Include_SelectMgr_AndOrFilter_h
#endif

public:
	SelectMgr_AndOrFilter(::SelectMgr_AndOrFilter* nativeInstance)
		: Macad::Occt::SelectMgr_CompositionFilter( nativeInstance )
	{}

	SelectMgr_AndOrFilter(::SelectMgr_AndOrFilter& nativeInstance)
		: Macad::Occt::SelectMgr_CompositionFilter( nativeInstance )
	{}

	property ::SelectMgr_AndOrFilter* NativeInstance
	{
		::SelectMgr_AndOrFilter* get()
		{
			return static_cast<::SelectMgr_AndOrFilter*>(_NativeInstance);
		}
	}

	static Macad::Occt::SelectMgr_AndOrFilter^ CreateDowncasted(::SelectMgr_AndOrFilter* instance);

public:
	/// <summary>
	/// Constructs an empty selection filter.
	/// </summary>
	SelectMgr_AndOrFilter(Macad::Occt::SelectMgr_FilterType theFilterType);
	SelectMgr_AndOrFilter(Macad::Occt::SelectMgr_AndOrFilter^ parameter1);
	/// <summary>
	/// Indicates that the selected Interactive Object passes the filter.
	/// </summary>
	bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ theObj);
	/// <summary>
	/// Disable selection of specified objects.
	/// </summary>
	/* Method skipped due to unknown mapping: void SetDisabledObjects(NCollection_Shared<NCollection_Map<const Standard_Transient *, NCollection_DefaultHasher<const Standard_Transient *>>, void theObjects, ) */
	/// <summary>
	/// </summary>
	/// <returns>
	/// a selection filter type (@sa SelectMgr_FilterType).
	/// </returns>
	Macad::Occt::SelectMgr_FilterType FilterType();
	/// <summary>
	/// Sets a selection filter type.
	/// SelectMgr_FilterType_OR selection filter is used be default.
	/// </summary>
	/// <param name="theFilterType">
	/// the filter type.
	/// </param>
	void SetFilterType(Macad::Occt::SelectMgr_FilterType theFilterType);
}; // class SelectMgr_AndOrFilter

//---------------------------------------------------------------------
//  Class  SelectMgr_ViewClipRange
//---------------------------------------------------------------------
/// <summary>
/// Class for handling depth clipping range.
/// It is used to perform checks in case if global (for the whole view)
/// clipping planes are defined inside of SelectMgr_RectangularFrustum class methods.
/// </summary>
public ref class SelectMgr_ViewClipRange sealed : public BaseClass<::SelectMgr_ViewClipRange>
{

#ifdef Include_SelectMgr_ViewClipRange_h
public:
	Include_SelectMgr_ViewClipRange_h
#endif

public:
	SelectMgr_ViewClipRange(::SelectMgr_ViewClipRange* nativeInstance)
		: BaseClass<::SelectMgr_ViewClipRange>( nativeInstance, true )
	{}

	SelectMgr_ViewClipRange(::SelectMgr_ViewClipRange& nativeInstance)
		: BaseClass<::SelectMgr_ViewClipRange>( &nativeInstance, false )
	{}

	property ::SelectMgr_ViewClipRange* NativeInstance
	{
		::SelectMgr_ViewClipRange* get()
		{
			return static_cast<::SelectMgr_ViewClipRange*>(_NativeInstance);
		}
	}

public:
	/// <summary>
	/// Creates an empty clip range.
	/// </summary>
	SelectMgr_ViewClipRange();
	SelectMgr_ViewClipRange(Macad::Occt::SelectMgr_ViewClipRange^ parameter1);
	/// <summary>
	/// Check if the given depth is not within clipping range(s),
	/// e.g. TRUE means depth is clipped.
	/// </summary>
	bool IsClipped(double theDepth);
	/// <summary>
	/// Calculates the min not clipped value from the range.
	/// Returns FALSE if the whole range is clipped.
	/// </summary>
	bool GetNearestDepth(Macad::Occt::Bnd_Range^ theRange, double% theDepth);
	/// <summary>
	/// Clears clipping range.
	/// </summary>
	void SetVoid();
	/// <summary>
	/// Add clipping planes. Planes and picking ray should be defined in the same coordinate system.
	/// </summary>
	void AddClippingPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes, Macad::Occt::Ax1 thePickRay);
	/// <summary>
	/// Returns the main unclipped range; [-inf, inf] by default.
	/// </summary>
	Macad::Occt::Bnd_Range^ ChangeUnclipRange();
	/// <summary>
	/// Adds a clipping sub-range (for clipping chains).
	/// </summary>
	void AddClipSubRange(Macad::Occt::Bnd_Range^ theRange);
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class SelectMgr_ViewClipRange

//---------------------------------------------------------------------
//  Class  SelectMgr_BaseIntersector
//---------------------------------------------------------------------
/// <summary>
/// This class is an interface for different types of selecting intersector,
/// defining different selection types, like point, box or polyline
/// selection. It contains signatures of functions for detection of
/// overlap by sensitive entity and initializes some data for building
/// the selecting intersector
/// </summary>
public ref class SelectMgr_BaseIntersector : public Macad::Occt::Standard_Transient
{

#ifdef Include_SelectMgr_BaseIntersector_h
public:
	Include_SelectMgr_BaseIntersector_h
#endif

protected:
	SelectMgr_BaseIntersector(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	SelectMgr_BaseIntersector(::SelectMgr_BaseIntersector* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	SelectMgr_BaseIntersector(::SelectMgr_BaseIntersector& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::SelectMgr_BaseIntersector* NativeInstance
	{
		::SelectMgr_BaseIntersector* get()
		{
			return static_cast<::SelectMgr_BaseIntersector*>(_NativeInstance);
		}
	}

	static Macad::Occt::SelectMgr_BaseIntersector^ CreateDowncasted(::SelectMgr_BaseIntersector* instance);

public:
	/// <summary>
	/// Creates new empty selecting volume
	/// </summary>
	SelectMgr_BaseIntersector();
	SelectMgr_BaseIntersector(Macad::Occt::SelectMgr_BaseIntersector^ parameter1);
	/// <summary>
	/// Builds intersector according to internal parameters
	/// </summary>
	void Build();
	/// <summary>
	/// Returns selection type of this intersector
	/// </summary>
	Macad::Occt::SelectMgr_SelectionType GetSelectionType();
	/// <summary>
	/// Checks if it is possible to scale this intersector.
	/// </summary>
	bool IsScalable();
	/// <summary>
	/// Sets pixel tolerance.
	/// It makes sense only for scalable intersectors (built on a single point).
	/// This method does nothing for the base class.
	/// </summary>
	void SetPixelTolerance(int theTol);
	/// <summary>
	/// Note that this method does not perform any checks on type of the frustum.
	/// </summary>
	/// <param name="theScaleFactor">
	/// [in] scale factor for new intersector or negative value if undefined;
	/// IMPORTANT: scaling makes sense only for scalable ::IsScalable() intersectors (built on a single point)!
	/// </param>
	/// <param name="theTrsf">
	/// [in] transformation for new intersector or gp_Identity if undefined
	/// </param>
	/// <param name="theBuilder">
	/// [in] an optional argument that represents corresponding settings for re-constructing transformed frustum from scratch;
	/// could be NULL if reconstruction is not expected furthermore
	/// </param>
	/// <returns>
	/// a copy of the frustum resized according to the scale factor given and transforms it using the matrix given
	/// </returns>
	/* Method skipped due to unknown mapping: SelectMgr_BaseIntersector ScaleAndTransform(Standard_Integer theScaleFactor, gp_GTrsf theTrsf, SelectMgr_FrustumBuilder theBuilder, ) */
	/// <summary>
	/// Return camera definition.
	/// </summary>
	Macad::Occt::Graphic3d_Camera^ Camera();
	/// <summary>
	/// Saves camera definition.
	/// </summary>
	void SetCamera(Macad::Occt::Graphic3d_Camera^ theCamera);
	/// <summary>
	/// Returns current window size.
	/// This method doesn't set any output values for the base class.
	/// </summary>
	void WindowSize(int% theWidth, int% theHeight);
	/// <summary>
	/// Sets current window size.
	/// This method does nothing for the base class.
	/// </summary>
	void SetWindowSize(int theWidth, int theHeight);
	/// <summary>
	/// Sets viewport parameters.
	/// This method does nothing for the base class.
	/// </summary>
	void SetViewport(double theX, double theY, double theWidth, double theHeight);
	/// <summary>
	/// Returns near point of intersector.
	/// This method returns zero point for the base class.
	/// </summary>
	Macad::Occt::Pnt GetNearPnt();
	/// <summary>
	/// Returns far point of intersector.
	/// This method returns zero point for the base class.
	/// </summary>
	Macad::Occt::Pnt GetFarPnt();
	/// <summary>
	/// Returns direction ray of intersector.
	/// This method returns zero direction for the base class.
	/// </summary>
	Macad::Occt::Dir GetViewRayDirection();
	/// <summary>
	/// Returns current mouse coordinates.
	/// This method returns infinite point for the base class.
	/// </summary>
	Macad::Occt::Pnt2d GetMousePosition();
	/// <summary>
	/// Stores plane equation coefficients (in the following form:
	/// Ax + By + Cz + D = 0) to the given vector.
	/// This method only clears input vector for the base class.
	/// </summary>
	/* Method skipped due to unknown mapping: void GetPlanes(NCollection_Vector<NCollection_Vec4<double>> thePlaneEquations, ) */
	/// <summary>
	/// SAT intersection test between defined volume and given axis-aligned box
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean OverlapsBox(SelectMgr_Vec3 theBoxMin, SelectMgr_Vec3 theBoxMax, SelectMgr_ViewClipRange theClipRange, SelectBasics_PickResult thePickResult, ) */
	/// <summary>
	/// Returns true if selecting volume is overlapped by axis-aligned bounding box
	/// with minimum corner at point theMinPt and maximum at point theMaxPt
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean OverlapsBox(SelectMgr_Vec3 theBoxMin, SelectMgr_Vec3 theBoxMax, Standard_Boolean theInside, ) */
	/// <summary>
	/// Returns true if selecting volume is overlapped by axis-aligned bounding box
	/// with minimum corner at point theMinPt and maximum at point theMaxPt
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean OverlapsBox(SelectMgr_Vec3 theBoxMin, SelectMgr_Vec3 theBoxMax, Standard_Boolean theInside, ) */
	/// <summary>
	/// Intersection test between defined volume and given point
	/// </summary>
	bool OverlapsPoint(Macad::Occt::Pnt thePnt, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	/// <summary>
	/// Intersection test between defined volume and given point
	/// Does not perform depth calculation, so this method is defined as helper function for inclusion test.
	/// Therefore, its implementation makes sense only for rectangular frustum with box selection mode activated.
	/// </summary>
	bool OverlapsPoint(Macad::Occt::Pnt thePnt);
	/// <summary>
	/// SAT intersection test between defined volume and given ordered set of points,
	/// representing line segments. The test may be considered of interior part or
	/// boundary line defined by segments depending on given sensitivity type
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean OverlapsPolygon(TColgp_Array1OfPnt theArrayOfPnts, Select3D_TypeOfSensitivity theSensType, SelectMgr_ViewClipRange theClipRange, SelectBasics_PickResult thePickResult, ) */
	/// <summary>
	/// Checks if line segment overlaps selecting frustum
	/// </summary>
	bool OverlapsSegment(Macad::Occt::Pnt thePnt1, Macad::Occt::Pnt thePnt2, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	/// <summary>
	/// SAT intersection test between defined volume and given triangle. The test may
	/// be considered of interior part or boundary line defined by triangle vertices
	/// depending on given sensitivity type
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean OverlapsTriangle(gp_Pnt thePnt1, gp_Pnt thePnt2, gp_Pnt thePnt3, Select3D_TypeOfSensitivity theSensType, SelectMgr_ViewClipRange theClipRange, SelectBasics_PickResult thePickResult, ) */
	/// <summary>
	/// Returns true if selecting volume is overlapped by sphere with center theCenter
	/// and radius theRadius
	/// </summary>
	bool OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, bool% theInside);
	/// <summary>
	/// Returns true if selecting volume is overlapped by sphere with center theCenter
	/// and radius theRadius
	/// </summary>
	bool OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius);
	/// <summary>
	/// Returns true if selecting volume is overlapped by sphere with center theCenter
	/// and radius theRadius
	/// </summary>
	bool OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	/// <summary>
	/// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
	/// and theTopRad, height theHeight and transformation to apply theTrsf.
	/// </summary>
	bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	/// <summary>
	/// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
	/// and theTopRad, height theHeight and transformation to apply theTrsf.
	/// </summary>
	bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool% theInside);
	/// <summary>
	/// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
	/// and theTopRad, height theHeight and transformation to apply theTrsf.
	/// </summary>
	bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf);
	/// <summary>
	/// Measures distance between 3d projection of user-picked
	/// screen point and given point theCOG.
	/// It makes sense only for intersectors built on a single point.
	/// This method returns infinite value for the base class.
	/// </summary>
	double DistToGeometryCenter(Macad::Occt::Pnt theCOG);
	/// <summary>
	/// Calculates the point on a view ray that was detected during the run of selection algo by given depth.
	/// It makes sense only for intersectors built on a single point.
	/// This method returns infinite point for the base class.
	/// </summary>
	Macad::Occt::Pnt DetectedPoint(double theDepth);
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Checks whether the ray that starts at the point theLoc and directs with the direction theRayDir intersects
	/// with the sphere with center at theCenter and radius TheRadius
	/// </summary>
	bool RaySphereIntersection(Macad::Occt::Pnt theCenter, double theRadius, Macad::Occt::Pnt theLoc, Macad::Occt::Dir theRayDir, double% theTimeEnter, double% theTimeLeave);
	/// <summary>
	/// Checks whether the ray that starts at the point theLoc and directs with the direction theRayDir intersects
	/// with the cylinder (or cone) with radiuses theBottomRad and theTopRad and height theHeights
	/// </summary>
	bool RayCylinderIntersection(double theBottomRadius, double theTopRadius, double theHeight, Macad::Occt::Pnt theLoc, Macad::Occt::Dir theRayDir, double% theTimeEnter, double% theTimeLeave);
}; // class SelectMgr_BaseIntersector

//---------------------------------------------------------------------
//  Class  SelectMgr_AxisIntersector
//---------------------------------------------------------------------
/// <summary>
/// This class contains representation of selecting axis, created in case of point selection
/// and algorithms for overlap detection between this axis and sensitive entities.
/// </summary>
public ref class SelectMgr_AxisIntersector sealed : public Macad::Occt::SelectMgr_BaseIntersector
{

#ifdef Include_SelectMgr_AxisIntersector_h
public:
	Include_SelectMgr_AxisIntersector_h
#endif

public:
	SelectMgr_AxisIntersector(::SelectMgr_AxisIntersector* nativeInstance)
		: Macad::Occt::SelectMgr_BaseIntersector( nativeInstance )
	{}

	SelectMgr_AxisIntersector(::SelectMgr_AxisIntersector& nativeInstance)
		: Macad::Occt::SelectMgr_BaseIntersector( nativeInstance )
	{}

	property ::SelectMgr_AxisIntersector* NativeInstance
	{
		::SelectMgr_AxisIntersector* get()
		{
			return static_cast<::SelectMgr_AxisIntersector*>(_NativeInstance);
		}
	}

	static Macad::Occt::SelectMgr_AxisIntersector^ CreateDowncasted(::SelectMgr_AxisIntersector* instance);

public:
	/// <summary>
	/// Empty constructor
	/// </summary>
	SelectMgr_AxisIntersector();
	SelectMgr_AxisIntersector(Macad::Occt::SelectMgr_AxisIntersector^ parameter1);
	/// <summary>
	/// Initializes selecting axis according to the input one
	/// </summary>
	void Init(Macad::Occt::Ax1 theAxis);
	/// <summary>
	/// Builds axis according to internal parameters.
	/// NOTE: it should be called after Init() method
	/// </summary>
	void Build();
	/// <summary>
	/// Saves camera definition.
	/// Do nothing for axis intersector (not applicable to this volume).
	/// </summary>
	void SetCamera(Macad::Occt::Graphic3d_Camera^ theCamera);
	/// <summary>
	/// Returns FALSE (not applicable to this volume).
	/// </summary>
	bool IsScalable();
	/// <summary>
	/// IMPORTANT: Scaling doesn't make sense for this intersector.
	/// Returns a copy of the intersector transformed using the matrix given.
	/// Builder is an optional argument that represents corresponding settings for re-constructing transformed frustum from scratch.
	/// Can be null if reconstruction is not expected furthermore.
	/// </summary>
	/* Method skipped due to unknown mapping: SelectMgr_BaseIntersector ScaleAndTransform(Standard_Integer theScaleFactor, gp_GTrsf theTrsf, SelectMgr_FrustumBuilder theBuilder, ) */
	/// <summary>
	/// Intersection test between defined axis and given axis-aligned box
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean OverlapsBox(SelectMgr_Vec3 theBoxMin, SelectMgr_Vec3 theBoxMax, SelectMgr_ViewClipRange theClipRange, SelectBasics_PickResult thePickResult, ) */
	/// <summary>
	/// Returns true if selecting axis intersects axis-aligned bounding box
	/// with minimum corner at point theMinPt and maximum at point theMaxPt
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean OverlapsBox(SelectMgr_Vec3 theBoxMin, SelectMgr_Vec3 theBoxMax, Standard_Boolean theInside, ) */
	/// <summary>
	/// Intersection test between defined axis and given point
	/// </summary>
	bool OverlapsPoint(Macad::Occt::Pnt thePnt, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	/// <summary>
	/// Intersection test between defined axis and given point
	/// </summary>
	bool OverlapsPoint(Macad::Occt::Pnt thePnt);
	/// <summary>
	/// Intersection test between defined axis and given ordered set of points,
	/// representing line segments. The test may be considered of interior part or
	/// boundary line defined by segments depending on given sensitivity type
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean OverlapsPolygon(TColgp_Array1OfPnt theArrayOfPnts, Select3D_TypeOfSensitivity theSensType, SelectMgr_ViewClipRange theClipRange, SelectBasics_PickResult thePickResult, ) */
	/// <summary>
	/// Checks if selecting axis intersects line segment
	/// </summary>
	bool OverlapsSegment(Macad::Occt::Pnt thePnt1, Macad::Occt::Pnt thePnt2, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	/// <summary>
	/// Intersection test between defined axis and given triangle. The test may
	/// be considered of interior part or boundary line defined by triangle vertices
	/// depending on given sensitivity type
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean OverlapsTriangle(gp_Pnt thePnt1, gp_Pnt thePnt2, gp_Pnt thePnt3, Select3D_TypeOfSensitivity theSensType, SelectMgr_ViewClipRange theClipRange, SelectBasics_PickResult thePickResult, ) */
	/// <summary>
	/// Intersection test between defined axis and given sphere with center theCenter
	/// and radius theRadius
	/// </summary>
	bool OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, bool% theInside);
	/// <summary>
	/// Intersection test between defined axis and given sphere with center theCenter
	/// and radius theRadius
	/// </summary>
	bool OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius);
	/// <summary>
	/// Intersection test between defined axis and given sphere with center theCenter
	/// and radius theRadius
	/// </summary>
	bool OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	/// <summary>
	/// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
	/// and theTopRad, height theHeight and transformation to apply theTrsf.
	/// </summary>
	bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	/// <summary>
	/// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
	/// and theTopRad, height theHeight and transformation to apply theTrsf.
	/// </summary>
	bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool% theInside);
	/// <summary>
	/// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
	/// and theTopRad, height theHeight and transformation to apply theTrsf.
	/// </summary>
	bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf);
	/// <summary>
	/// Measures distance between start axis point and given point theCOG.
	/// </summary>
	double DistToGeometryCenter(Macad::Occt::Pnt theCOG);
	/// <summary>
	/// Calculates the point on a axis ray that was detected during the run of selection algo by given depth
	/// </summary>
	Macad::Occt::Pnt DetectedPoint(double theDepth);
	/// <summary>
	/// Returns near point along axis.
	/// </summary>
	Macad::Occt::Pnt GetNearPnt();
	/// <summary>
	/// Returns far point along axis (infinite).
	/// </summary>
	Macad::Occt::Pnt GetFarPnt();
	/// <summary>
	/// Returns axis direction.
	/// </summary>
	Macad::Occt::Dir GetViewRayDirection();
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class SelectMgr_AxisIntersector

//---------------------------------------------------------------------
//  Class  SelectMgr_BVHThreadPool
//---------------------------------------------------------------------
/// <summary>
/// Class defining a thread pool for building BVH for the list of Select3D_SensitiveEntity within background thread(s).
/// </summary>
public ref class SelectMgr_BVHThreadPool sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_SelectMgr_BVHThreadPool_h
public:
	Include_SelectMgr_BVHThreadPool_h
#endif

public:
	SelectMgr_BVHThreadPool(::SelectMgr_BVHThreadPool* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	SelectMgr_BVHThreadPool(::SelectMgr_BVHThreadPool& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::SelectMgr_BVHThreadPool* NativeInstance
	{
		::SelectMgr_BVHThreadPool* get()
		{
			return static_cast<::SelectMgr_BVHThreadPool*>(_NativeInstance);
		}
	}

	static Macad::Occt::SelectMgr_BVHThreadPool^ CreateDowncasted(::SelectMgr_BVHThreadPool* instance);

public:
	/// <summary>
	/// Main constructor
	/// </summary>
	SelectMgr_BVHThreadPool(int theNbThreads);
	/// <summary>
	/// Queue a sensitive entity to build its BVH
	/// </summary>
	/* Method skipped due to unknown mapping: void AddEntity(Select3D_SensitiveEntity theEntity, ) */
	/// <summary>
	/// Stops threads
	/// </summary>
	void StopThreads();
	/// <summary>
	/// Waits for all threads finish their jobs
	/// </summary>
	void WaitThreads();
	/// <summary>
	/// Returns array of threads
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Array1<SelectMgr_BVHThreadPool::BVHThread> Threads() */
}; // class SelectMgr_BVHThreadPool

//---------------------------------------------------------------------
//  Class  SelectMgr_SensitiveEntity
//---------------------------------------------------------------------
/// <summary>
/// The purpose of this class is to mark sensitive entities selectable or not
/// depending on current active selection of parent object for proper BVH traverse
/// </summary>
public ref class SelectMgr_SensitiveEntity sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_SelectMgr_SensitiveEntity_h
public:
	Include_SelectMgr_SensitiveEntity_h
#endif

public:
	SelectMgr_SensitiveEntity(::SelectMgr_SensitiveEntity* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	SelectMgr_SensitiveEntity(::SelectMgr_SensitiveEntity& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::SelectMgr_SensitiveEntity* NativeInstance
	{
		::SelectMgr_SensitiveEntity* get()
		{
			return static_cast<::SelectMgr_SensitiveEntity*>(_NativeInstance);
		}
	}

	static Macad::Occt::SelectMgr_SensitiveEntity^ CreateDowncasted(::SelectMgr_SensitiveEntity* instance);

public:
	/// <summary>
	/// Creates new inactive for selection object with base entity theEntity
	/// </summary>
	/* Method skipped due to unknown mapping: void SelectMgr_SensitiveEntity(Select3D_SensitiveEntity theEntity, ) */
	SelectMgr_SensitiveEntity(Macad::Occt::SelectMgr_SensitiveEntity^ parameter1);
	/// <summary>
	/// Clears up all resources and memory
	/// </summary>
	void Clear();
	/// <summary>
	/// Returns related instance of SelectBasics class
	/// </summary>
	/* Method skipped due to unknown mapping: Select3D_SensitiveEntity BaseSensitive() */
	/// <summary>
	/// Returns true if this entity belongs to the active selection
	/// mode of parent object
	/// </summary>
	bool IsActiveForSelection();
	/// <summary>
	/// Marks entity as inactive for selection
	/// </summary>
	void ResetSelectionActiveStatus();
	/// <summary>
	/// Marks entity as active for selection
	/// </summary>
	void SetActiveForSelection();
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class SelectMgr_SensitiveEntity

//---------------------------------------------------------------------
//  Class  SelectMgr_SelectionManager
//---------------------------------------------------------------------
/// <summary>
/// A framework to manage selection from the point of view of viewer selectors.
/// These can be added and removed, and selection modes can be activated and deactivated.
/// In addition, objects may be known to all selectors or only to some.
/// </summary>
public ref class SelectMgr_SelectionManager sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_SelectMgr_SelectionManager_h
public:
	Include_SelectMgr_SelectionManager_h
#endif

public:
	SelectMgr_SelectionManager(::SelectMgr_SelectionManager* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	SelectMgr_SelectionManager(::SelectMgr_SelectionManager& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::SelectMgr_SelectionManager* NativeInstance
	{
		::SelectMgr_SelectionManager* get()
		{
			return static_cast<::SelectMgr_SelectionManager*>(_NativeInstance);
		}
	}

	static Macad::Occt::SelectMgr_SelectionManager^ CreateDowncasted(::SelectMgr_SelectionManager* instance);

public:
	/// <summary>
	/// Constructs an empty selection manager object.
	/// </summary>
	SelectMgr_SelectionManager(Macad::Occt::SelectMgr_ViewerSelector^ theSelector);
	SelectMgr_SelectionManager(Macad::Occt::SelectMgr_SelectionManager^ parameter1);
	/// <summary>
	/// Return the Selector.
	/// </summary>
	Macad::Occt::SelectMgr_ViewerSelector^ Selector();
	/// <summary>
	/// Returns true if the manager contains the selectable object theObject.
	/// </summary>
	bool Contains(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	/// <summary>
	/// Loads and computes selection mode theMode (if it is not equal to -1) in global context and adds selectable
	/// object to BVH tree. If the object theObject has an already calculated selection with mode theMode and it was removed,
	/// the selection will be recalculated.
	/// </summary>
	void Load(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode);
	/// <summary>
	/// Loads and computes selection mode theMode (if it is not equal to -1) in global context and adds selectable
	/// object to BVH tree. If the object theObject has an already calculated selection with mode theMode and it was removed,
	/// the selection will be recalculated.
	/// </summary>
	void Load(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	/// <summary>
	/// Removes selectable object theObject from all viewer selectors it was added to previously, removes it from all contexts
	/// and clears all computed selections of theObject.
	/// </summary>
	void Remove(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	/// <summary>
	/// Activates the selection mode theMode in the selector theSelector for the selectable object anObject.
	/// By default, theMode is equal to 0. If theSelector is set to default (NULL), the selection with the mode theMode
	/// will be activated in all the viewers available.
	/// </summary>
	void Activate(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode);
	/// <summary>
	/// Activates the selection mode theMode in the selector theSelector for the selectable object anObject.
	/// By default, theMode is equal to 0. If theSelector is set to default (NULL), the selection with the mode theMode
	/// will be activated in all the viewers available.
	/// </summary>
	void Activate(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	/// <summary>
	/// Deactivates mode theMode of theObject in theSelector. If theMode value is set to default (-1), all
	/// active selection modes will be deactivated. Likewise, if theSelector value is set to default (NULL), theMode
	/// will be deactivated in all viewer selectors.
	/// </summary>
	void Deactivate(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode);
	/// <summary>
	/// Deactivates mode theMode of theObject in theSelector. If theMode value is set to default (-1), all
	/// active selection modes will be deactivated. Likewise, if theSelector value is set to default (NULL), theMode
	/// will be deactivated in all viewer selectors.
	/// </summary>
	void Deactivate(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	/// <summary>
	/// Returns true if the selection with theMode is active for the selectable object theObject and selector theSelector.
	/// If all parameters are set to default values, it returns it there is any active selection in any known viewer selector for
	/// object theObject.
	/// </summary>
	bool IsActivated(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode);
	/// <summary>
	/// Returns true if the selection with theMode is active for the selectable object theObject and selector theSelector.
	/// If all parameters are set to default values, it returns it there is any active selection in any known viewer selector for
	/// object theObject.
	/// </summary>
	bool IsActivated(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	/// <summary>
	/// Removes sensitive entities from all viewer selectors
	/// after method Clear() was called to the selection they belonged to
	/// or it was recomputed somehow.
	/// </summary>
	void ClearSelectionStructures(Macad::Occt::SelectMgr_SelectableObject^ theObj, int theMode);
	/// <summary>
	/// Removes sensitive entities from all viewer selectors
	/// after method Clear() was called to the selection they belonged to
	/// or it was recomputed somehow.
	/// </summary>
	void ClearSelectionStructures(Macad::Occt::SelectMgr_SelectableObject^ theObj);
	/// <summary>
	/// Re-adds newly calculated sensitive  entities of recomputed selection
	/// defined by mode theMode to all viewer selectors contained that selection.
	/// </summary>
	void RestoreSelectionStructures(Macad::Occt::SelectMgr_SelectableObject^ theObj, int theMode);
	/// <summary>
	/// Re-adds newly calculated sensitive  entities of recomputed selection
	/// defined by mode theMode to all viewer selectors contained that selection.
	/// </summary>
	void RestoreSelectionStructures(Macad::Occt::SelectMgr_SelectableObject^ theObj);
	/// <summary>
	/// Recomputes activated selections of theObject for all known viewer selectors according to theMode specified.
	/// If theMode is set to default (-1), then all activated selections will be recomputed. If theIsForce is set to true,
	/// then selection mode theMode for object theObject will be recomputed regardless of its activation status.
	/// </summary>
	void RecomputeSelection(Macad::Occt::SelectMgr_SelectableObject^ theObject, bool theIsForce, int theMode);
	/// <summary>
	/// Recomputes activated selections of theObject for all known viewer selectors according to theMode specified.
	/// If theMode is set to default (-1), then all activated selections will be recomputed. If theIsForce is set to true,
	/// then selection mode theMode for object theObject will be recomputed regardless of its activation status.
	/// </summary>
	void RecomputeSelection(Macad::Occt::SelectMgr_SelectableObject^ theObject, bool theIsForce);
	/// <summary>
	/// Recomputes activated selections of theObject for all known viewer selectors according to theMode specified.
	/// If theMode is set to default (-1), then all activated selections will be recomputed. If theIsForce is set to true,
	/// then selection mode theMode for object theObject will be recomputed regardless of its activation status.
	/// </summary>
	void RecomputeSelection(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	/// <summary>
	/// Updates all selections of theObject in all viewer selectors according to its current update status.
	/// If theIsForce is set to true, the call is equal to recomputation.
	/// </summary>
	void Update(Macad::Occt::SelectMgr_SelectableObject^ theObject, bool theIsForce);
	/// <summary>
	/// Updates all selections of theObject in all viewer selectors according to its current update status.
	/// If theIsForce is set to true, the call is equal to recomputation.
	/// </summary>
	void Update(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	/// <summary>
	/// Sets type of update of all selections of theObject to the given theType.
	/// </summary>
	void SetUpdateMode(Macad::Occt::SelectMgr_SelectableObject^ theObject, Macad::Occt::SelectMgr_TypeOfUpdate theType);
	/// <summary>
	/// Sets type of update of selection with theMode of theObject to the given theType.
	/// </summary>
	void SetUpdateMode(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode, Macad::Occt::SelectMgr_TypeOfUpdate theType);
	/// <summary>
	/// Allows to manage sensitivity of a particular selection of interactive object theObject and
	/// changes previous sensitivity value of all sensitive entities in selection with theMode
	/// to the given theNewSensitivity.
	/// </summary>
	void SetSelectionSensitivity(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode, int theNewSens);
	/// <summary>
	/// Re-adds selectable object in BVHs in all viewer selectors.
	/// </summary>
	void UpdateSelection(Macad::Occt::SelectMgr_SelectableObject^ theObj);
}; // class SelectMgr_SelectionManager

//---------------------------------------------------------------------
//  Class  SelectMgr_SelectableObject
//---------------------------------------------------------------------
/// <summary>
/// A framework to supply the structure of the object to be selected.
/// At the first pick, this structure is created by calling the appropriate algorithm and retaining this framework for further picking.
/// This abstract framework is inherited in Application Interactive Services (AIS), notably in AIS_InteractiveObject.
/// Consequently, 3D selection should be handled by the relevant daughter classes and their member functions in AIS.
/// This is particularly true in the creation of new interactive objects.
/// 
/// Key interface methods to be implemented by every Selectable Object:
/// * Presentable Object (PrsMgr_PresentableObject)
/// Consider defining an enumeration of supported Display Mode indexes for particular Interactive Object or class of Interactive Objects.
/// - AcceptDisplayMode() accepting display modes implemented by this object;
/// - Compute() computing presentation for the given display mode index;
/// * Selectable Object (SelectMgr_SelectableObject)
/// Consider defining an enumeration of supported Selection Mode indexes for particular Interactive Object or class of Interactive Objects.
/// - ComputeSelection() computing selectable entities for the given selection mode index.
/// </summary>
public ref class SelectMgr_SelectableObject : public Macad::Occt::PrsMgr_PresentableObject
{

#ifdef Include_SelectMgr_SelectableObject_h
public:
	Include_SelectMgr_SelectableObject_h
#endif

protected:
	SelectMgr_SelectableObject(InitMode init)
		: Macad::Occt::PrsMgr_PresentableObject( init )
	{}

public:
	SelectMgr_SelectableObject(::SelectMgr_SelectableObject* nativeInstance)
		: Macad::Occt::PrsMgr_PresentableObject( nativeInstance )
	{}

	SelectMgr_SelectableObject(::SelectMgr_SelectableObject& nativeInstance)
		: Macad::Occt::PrsMgr_PresentableObject( nativeInstance )
	{}

	property ::SelectMgr_SelectableObject* NativeInstance
	{
		::SelectMgr_SelectableObject* get()
		{
			return static_cast<::SelectMgr_SelectableObject*>(_NativeInstance);
		}
	}

	static Macad::Occt::SelectMgr_SelectableObject^ CreateDowncasted(::SelectMgr_SelectableObject* instance);

public:
	SelectMgr_SelectableObject(Macad::Occt::SelectMgr_SelectableObject^ parameter1);
	/// <summary>
	/// Computes sensitive primitives for the given selection mode - key interface method of Selectable Object.
	/// </summary>
	/// <param name="theSelection">
	/// selection to fill
	/// </param>
	/// <param name="theMode">
	/// selection mode to create sensitive primitives
	/// </param>
	void ComputeSelection(Macad::Occt::SelectMgr_Selection^ theSelection, int theMode);
	/// <summary>
	/// Informs the graphic context that the interactive Object may be decomposed into sub-shapes for dynamic selection.
	/// The most used Interactive Object is AIS_Shape.
	/// </summary>
	bool AcceptShapeDecomposition();
	/// <summary>
	/// Re-computes the sensitive primitives for all modes. IMPORTANT: Do not use
	/// this method to update selection primitives except implementing custom selection manager!
	/// This method does not take into account necessary BVH updates, but may invalidate the pointers
	/// it refers to. TO UPDATE SELECTION properly from outside classes, use method UpdateSelection.
	/// </summary>
	void RecomputePrimitives();
	/// <summary>
	/// Re-computes the sensitive primitives which correspond to the <theMode>th selection mode.
	/// IMPORTANT: Do not use this method to update selection primitives except implementing custom selection manager!
	/// selection manager! This method does not take into account necessary BVH updates, but may invalidate
	/// the pointers it refers to. TO UPDATE SELECTION properly from outside classes, use method UpdateSelection.
	/// </summary>
	void RecomputePrimitives(int theMode);
	/// <summary>
	/// Adds the selection aSelection with the selection mode
	/// index aMode to this framework.
	/// </summary>
	void AddSelection(Macad::Occt::SelectMgr_Selection^ aSelection, int aMode);
	/// <summary>
	/// Empties all the selections in the SelectableObject
	/// <update> parameter defines whether all object's
	/// selections should be flagged for further update or not.
	/// This improved method can be used to recompute an
	/// object's selection (without redisplaying the object
	/// completely) when some selection mode is activated not for the first time.
	/// </summary>
	void ClearSelections(bool update);
	/// <summary>
	/// Empties all the selections in the SelectableObject
	/// <update> parameter defines whether all object's
	/// selections should be flagged for further update or not.
	/// This improved method can be used to recompute an
	/// object's selection (without redisplaying the object
	/// completely) when some selection mode is activated not for the first time.
	/// </summary>
	void ClearSelections();
	/// <summary>
	/// Returns the selection having specified selection mode or NULL.
	/// </summary>
	Macad::Occt::SelectMgr_Selection^ Selection(int theMode);
	/// <summary>
	/// Returns true if a selection corresponding to the selection mode theMode was computed for this object.
	/// </summary>
	bool HasSelection(int theMode);
	/// <summary>
	/// Return the sequence of selections.
	/// </summary>
	Macad::Occt::SelectMgr_SequenceOfSelection^ Selections();
	void ResetTransformation();
	/// <summary>
	/// Recomputes the location of the selection aSelection.
	/// </summary>
	void UpdateTransformation();
	/// <summary>
	/// Updates locations in all sensitive entities from <aSelection>
	/// and in corresponding entity owners.
	/// </summary>
	void UpdateTransformations(Macad::Occt::SelectMgr_Selection^ aSelection);
	/// <summary>
	/// Method which draws selected owners ( for fast presentation draw )
	/// </summary>
	/* Method skipped due to unknown mapping: void HilightSelected(PrsMgr_PresentationManager thePrsMgr, SelectMgr_SequenceOfOwner theSeq, ) */
	/// <summary>
	/// Method which clear all selected owners belonging
	/// to this selectable object ( for fast presentation draw )
	/// </summary>
	void ClearSelected();
	/// <summary>
	/// Method that needs to be implemented when the object
	/// manages selection and dynamic highlighting on its own.
	/// Clears or invalidates dynamic highlight presentation.
	/// By default it clears immediate draw of given presentation
	/// manager.
	/// </summary>
	/* Method skipped due to unknown mapping: void ClearDynamicHighlight(PrsMgr_PresentationManager theMgr, ) */
	/// <summary>
	/// Method which hilight an owner belonging to
	/// this selectable object  ( for fast presentation draw )
	/// </summary>
	/* Method skipped due to unknown mapping: void HilightOwnerWithColor(PrsMgr_PresentationManager thePM, Prs3d_Drawer theStyle, SelectMgr_EntityOwner theOwner, ) */
	/// <summary>
	/// If returns True, the old mechanism for highlighting selected objects is used (HilightSelected Method may be empty).
	/// If returns False, the HilightSelected method will be fully responsible for highlighting selected entity owners belonging to this selectable object.
	/// </summary>
	bool IsAutoHilight();
	/// <summary>
	/// Set AutoHilight property to true or false.
	/// </summary>
	void SetAutoHilight(bool theAutoHilight);
	/// <summary>
	/// Creates or returns existing presentation for highlighting detected object.
	/// </summary>
	/// <param name="thePrsMgr">
	/// presentation manager to create new presentation
	/// </param>
	/// <returns>
	/// existing or newly created presentation (when thePrsMgr is not NULL)
	/// </returns>
	/* Method skipped due to unknown mapping: Graphic3d_Structure GetHilightPresentation(PrsMgr_PresentationManager thePrsMgr, ) */
	/// <summary>
	/// Creates or returns existing presentation for highlighting selected object.
	/// </summary>
	/// <param name="thePrsMgr">
	/// presentation manager to create new presentation
	/// </param>
	/// <returns>
	/// existing or newly created presentation (when thePrsMgr is not NULL)
	/// </returns>
	/* Method skipped due to unknown mapping: Graphic3d_Structure GetSelectPresentation(PrsMgr_PresentationManager thePrsMgr, ) */
	/// <summary>
	/// Removes presentations returned by GetHilightPresentation() and GetSelectPresentation().
	/// </summary>
	void ErasePresentations(bool theToRemove);
	/// <summary>
	/// Set Z layer ID and update all presentations of the selectable object.
	/// The layers mechanism allows drawing objects in higher layers in overlay of objects in lower layers.
	/// </summary>
	void SetZLayer(int theLayerId);
	/// <summary>
	/// Sets update status FULL to selections of the object. Must be used as the only method of UpdateSelection
	/// from outer classes to prevent BVH structures from being outdated.
	/// </summary>
	void UpdateSelection(int theMode);
	/// <summary>
	/// Sets update status FULL to selections of the object. Must be used as the only method of UpdateSelection
	/// from outer classes to prevent BVH structures from being outdated.
	/// </summary>
	void UpdateSelection();
	/// <summary>
	/// Sets common entity owner for assembly sensitive object entities
	/// </summary>
	void SetAssemblyOwner(Macad::Occt::SelectMgr_EntityOwner^ theOwner, int theMode);
	/// <summary>
	/// Sets common entity owner for assembly sensitive object entities
	/// </summary>
	void SetAssemblyOwner(Macad::Occt::SelectMgr_EntityOwner^ theOwner);
	/// <summary>
	/// Returns the mode for selection of object as a whole; 0 by default.
	/// </summary>
	int GlobalSelectionMode();
	/// <summary>
	/// Returns the owner of mode for selection of object as a whole
	/// </summary>
	Macad::Occt::SelectMgr_EntityOwner^ GlobalSelOwner();
	/// <summary>
	/// Returns common entity owner if the object is an assembly
	/// </summary>
	Macad::Occt::SelectMgr_EntityOwner^ GetAssemblyOwner();
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class SelectMgr_SelectableObject

//---------------------------------------------------------------------
//  Class  SelectMgr_SortCriterion
//---------------------------------------------------------------------
/// <summary>
/// This class provides data and criterion for sorting candidate
/// entities in the process of interactive selection by mouse click
/// </summary>
public ref class SelectMgr_SortCriterion sealed : public BaseClass<::SelectMgr_SortCriterion>
{

#ifdef Include_SelectMgr_SortCriterion_h
public:
	Include_SelectMgr_SortCriterion_h
#endif

public:
	SelectMgr_SortCriterion(::SelectMgr_SortCriterion* nativeInstance)
		: BaseClass<::SelectMgr_SortCriterion>( nativeInstance, true )
	{}

	SelectMgr_SortCriterion(::SelectMgr_SortCriterion& nativeInstance)
		: BaseClass<::SelectMgr_SortCriterion>( &nativeInstance, false )
	{}

	property ::SelectMgr_SortCriterion* NativeInstance
	{
		::SelectMgr_SortCriterion* get()
		{
			return static_cast<::SelectMgr_SortCriterion*>(_NativeInstance);
		}
	}

public:
	/// <summary>
	/// Empty constructor.
	/// </summary>
	SelectMgr_SortCriterion();
	SelectMgr_SortCriterion(Macad::Occt::SelectMgr_SortCriterion^ parameter1);
	/// <summary>
	/// Compare with another item by depth, priority and minDist.
	/// </summary>
	bool IsCloserDepth(Macad::Occt::SelectMgr_SortCriterion^ theOther);
	/// <summary>
	/// Compare with another item using old logic (OCCT version <= 6.3.1) with priority considered preceding depth.
	/// </summary>
	bool IsHigherPriority(Macad::Occt::SelectMgr_SortCriterion^ theOther);
}; // class SelectMgr_SortCriterion

//---------------------------------------------------------------------
//  Class  SelectMgr_OrFilter
//---------------------------------------------------------------------
/// <summary>
/// A framework to define an or selection filter.
/// This selects one or another type of sensitive entity.
/// </summary>
public ref class SelectMgr_OrFilter sealed : public Macad::Occt::SelectMgr_CompositionFilter
{

#ifdef Include_SelectMgr_OrFilter_h
public:
	Include_SelectMgr_OrFilter_h
#endif

public:
	SelectMgr_OrFilter(::SelectMgr_OrFilter* nativeInstance)
		: Macad::Occt::SelectMgr_CompositionFilter( nativeInstance )
	{}

	SelectMgr_OrFilter(::SelectMgr_OrFilter& nativeInstance)
		: Macad::Occt::SelectMgr_CompositionFilter( nativeInstance )
	{}

	property ::SelectMgr_OrFilter* NativeInstance
	{
		::SelectMgr_OrFilter* get()
		{
			return static_cast<::SelectMgr_OrFilter*>(_NativeInstance);
		}
	}

	static Macad::Occt::SelectMgr_OrFilter^ CreateDowncasted(::SelectMgr_OrFilter* instance);

public:
	/// <summary>
	/// Constructs an empty or selection filter.
	/// </summary>
	SelectMgr_OrFilter();
	SelectMgr_OrFilter(Macad::Occt::SelectMgr_OrFilter^ parameter1);
	bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj);
}; // class SelectMgr_OrFilter

//---------------------------------------------------------------------
//  Class  SelectMgr_SelectableObjectSet
//---------------------------------------------------------------------
/// <summary>
/// The purpose of this class is to organize all selectable objects into data structure, allowing to build
/// set of BVH trees for each transformation persistence subclass of selectable objects. This allow to minify
/// number of updates for BVH trees - for example 2D persistent object subclass depends only on camera's projection
/// and the corresponding BVH tree needs to be updated when camera's projection parameters change, while another
/// tree for non-persistent objects can be left unchanged in this case.
/// </summary>
public ref class SelectMgr_SelectableObjectSet sealed : public BaseClass<::SelectMgr_SelectableObjectSet>
{

#ifdef Include_SelectMgr_SelectableObjectSet_h
public:
	Include_SelectMgr_SelectableObjectSet_h
#endif

public:
	SelectMgr_SelectableObjectSet(::SelectMgr_SelectableObjectSet* nativeInstance)
		: BaseClass<::SelectMgr_SelectableObjectSet>( nativeInstance, true )
	{}

	SelectMgr_SelectableObjectSet(::SelectMgr_SelectableObjectSet& nativeInstance)
		: BaseClass<::SelectMgr_SelectableObjectSet>( &nativeInstance, false )
	{}

	property ::SelectMgr_SelectableObjectSet* NativeInstance
	{
		::SelectMgr_SelectableObjectSet* get()
		{
			return static_cast<::SelectMgr_SelectableObjectSet*>(_NativeInstance);
		}
	}

public:
	//---------------------------------------------------------------------
	//  Enum  BVHSubset
	//---------------------------------------------------------------------
	/// <summary>
	/// This enumeration declares names for subsets of selectable objects. Each subset has independent BVH tree.
	/// The class maintains subsets of selectable objects by their persistence flag. This allows to restric
	/// rebuilding of the trees for particular subset when the camera change does not implicitly require it:
	/// - BVHSubset_3d refers to the subset of normal world-space 3D objects. Associated BVH tree does not depend
	/// on the camera's state at all.
	/// This subset uses binned BVH builder with 32 bins and 1 element per leaf.
	/// - BVHSubset_3dPersistent refers to the subset of 3D persistent selectable objects (rotate, pan, zoom persistence).
	/// Associated BVH tree needs to be updated when either the camera's projection and position change.
	/// This subset uses linear BVH builder with 32 levels of depth and 1 element per leaf.
	/// - BVHSubset_2dPersistent refers to the subset of 2D persistent selectable objects. Associated BVH tree
	/// needs to be updated only when camera's projection changes. Bounding volumes for this object subclass
	/// is represented directly in eye space coordinates.
	/// This subset uses linear BVH builder with 32 levels of depth and 1 element per leaf.
	/// </summary>
	enum class BVHSubset
	{
		BVHSubset_3d = 0,
		BVHSubset_3dPersistent = 1,
		BVHSubset_2dPersistent = 2,
		BVHSubsetNb = 3
	}; // enum  class BVHSubset

	/// <summary>
	/// Creates new empty objects set and initializes BVH tree builders for each subset.
	/// </summary>
	SelectMgr_SelectableObjectSet();
	SelectMgr_SelectableObjectSet(Macad::Occt::SelectMgr_SelectableObjectSet^ parameter1);
	/// <summary>
	/// Adds the new selectable object to the set. The selectable object is placed into one of the
	/// predefined subsets depending on its persistence type. After adding an object, this method
	/// marks the corresponding BVH tree for rebuild.
	/// </summary>
	/// <returns>
	/// true if selectable object is added, otherwise returns false (selectable object is already in the set).
	/// </returns>
	bool Append(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	/// <summary>
	/// Removes the selectable object from the set. The selectable object is removed from the subset
	/// it has been placed into. After removing an object, this method marks the corresponding
	/// BVH tree for rebuild.
	/// </summary>
	/// <returns>
	/// true if selectable object is removed, otherwise returns false (selectable object is not in the set).
	/// </returns>
	bool Remove(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	/// <summary>
	/// Performs necessary updates when object's persistence types changes.
	/// This method should be called right after changing transformation persistence flags of the
	/// objects and before updating BVH tree - to provide up-to-date state of the object set.
	/// </summary>
	void ChangeSubset(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	/// <summary>
	/// Updates outdated BVH trees and remembers the last state of the
	/// camera view-projection matrices and viewport (window) dimensions.
	/// </summary>
	void UpdateBVH(Macad::Occt::Graphic3d_Camera^ theCam, Macad::Occt::Graphic3d_Vec2i^ theWinSize);
	/// <summary>
	/// Marks every BVH subset for update.
	/// </summary>
	void MarkDirty();
	/// <summary>
	/// Returns true if this objects set contains theObject given.
	/// </summary>
	bool Contains(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	/// <summary>
	/// Returns true if the object set does not contain any selectable objects.
	/// </summary>
	bool IsEmpty();
	/// <summary>
	/// Returns true if the specified object subset is empty.
	/// </summary>
	bool IsEmpty(Macad::Occt::SelectMgr_SelectableObjectSet::BVHSubset theSubset);
	/// <summary>
	/// Returns object from subset theSubset by theIndex given. The method allows to get selectable object
	/// referred by the index of an element of the subset's BVH tree.
	/// </summary>
	Macad::Occt::SelectMgr_SelectableObject^ GetObjectById(Macad::Occt::SelectMgr_SelectableObjectSet::BVHSubset theSubset, int theIndex);
	/// <summary>
	/// Returns computed BVH for the theSubset given.
	/// </summary>
	/* Method skipped due to unknown mapping: BVH_Tree<double, 3, BVH_BinaryTree BVH(BVHSubset theSubset, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class SelectMgr_SelectableObjectSet

//---------------------------------------------------------------------
//  Class  SelectMgr_ViewerSelector
//---------------------------------------------------------------------
/// <summary>
/// A framework to define finding, sorting the sensitive
/// primitives in a view. Services are also provided to
/// define the return of the owners of those primitives
/// selected. The primitives are sorted by criteria such
/// as priority of the primitive or its depth in the view
/// relative to that of other primitives.
/// Note that in 3D, the inheriting framework
/// StdSelect_ViewerSelector3d   is only to be used
/// if you do not want to use the services provided by
/// AIS.
/// Two tools are available to find and select objects
/// found at a given position in the view. If you want to
/// select the owners of all the objects detected at
/// point x,y,z you use the Init - More - Next - Picked
/// loop. If, on the other hand, you want to select only
/// one object detected at that point, you use the Init -
/// More - OnePicked loop. In this iteration, More is
/// used to see if an object was picked and
/// OnePicked, to get the object closest to the pick position.
/// Viewer selectors are driven by
/// SelectMgr_SelectionManager, and manipulate
/// the SelectMgr_Selection objects given to them by
/// the selection manager.
/// 
/// Tolerances are applied to the entities in the following way:
/// 1. tolerance value stored in mytolerance will be used to calculate initial
/// selecting frustum, which will be applied for intersection testing during
/// BVH traverse;
/// 2. if tolerance of sensitive entity is less than mytolerance, the frustum for
/// intersection detection will be resized according to its sensitivity.
/// </summary>
public ref class SelectMgr_ViewerSelector sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_SelectMgr_ViewerSelector_h
public:
	Include_SelectMgr_ViewerSelector_h
#endif

public:
	SelectMgr_ViewerSelector(::SelectMgr_ViewerSelector* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	SelectMgr_ViewerSelector(::SelectMgr_ViewerSelector& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::SelectMgr_ViewerSelector* NativeInstance
	{
		::SelectMgr_ViewerSelector* get()
		{
			return static_cast<::SelectMgr_ViewerSelector*>(_NativeInstance);
		}
	}

	static Macad::Occt::SelectMgr_ViewerSelector^ CreateDowncasted(::SelectMgr_ViewerSelector* instance);

public:
	/// <summary>
	/// Constructs an empty selector object.
	/// </summary>
	SelectMgr_ViewerSelector();
	SelectMgr_ViewerSelector(Macad::Occt::SelectMgr_ViewerSelector^ parameter1);
	/// <summary>
	/// Returns custom pixel tolerance value.
	/// </summary>
	int CustomPixelTolerance();
	/// <summary>
	/// Sets the pixel tolerance <theTolerance>.
	/// </summary>
	void SetPixelTolerance(int theTolerance);
	/// <summary>
	/// Returns the largest sensitivity of picking
	/// </summary>
	double Sensitivity();
	/// <summary>
	/// Returns the largest pixel tolerance.
	/// </summary>
	int PixelTolerance();
	/// <summary>
	/// Sorts the detected entities by priority and distance.
	/// </summary>
	void SortResult();
	/// <summary>
	/// Returns the picked element with the highest priority,
	/// and which is the closest to the last successful mouse position.
	/// </summary>
	Macad::Occt::SelectMgr_EntityOwner^ OnePicked();
	/// <summary>
	/// Return the flag determining precedence of picked depth (distance from eye to entity) over entity priority in sorted results; TRUE by default.
	/// When flag is TRUE, priority will be considered only if entities have the same depth  within the tolerance.
	/// When flag is FALSE, entities with higher priority will be in front regardless of their depth (like x-ray).
	/// </summary>
	bool ToPickClosest();
	/// <summary>
	/// Set flag determining precedence of picked depth over entity priority in sorted results.
	/// </summary>
	void SetPickClosest(bool theToPreferClosest);
	/// <summary>
	/// Return the type of tolerance for considering two entities having a similar depth (distance from eye to entity);
	/// SelectMgr_TypeOfDepthTolerance_SensitivityFactor by default.
	/// </summary>
	Macad::Occt::SelectMgr_TypeOfDepthTolerance DepthToleranceType();
	/// <summary>
	/// Return the tolerance for considering two entities having a similar depth (distance from eye to entity).
	/// </summary>
	double DepthTolerance();
	/// <summary>
	/// Set the tolerance for considering two entities having a similar depth (distance from eye to entity).
	/// </summary>
	/// <param name="theType">
	/// [in] type of tolerance value
	/// </param>
	/// <param name="theTolerance">
	/// [in] tolerance value in 3D scale (SelectMgr_TypeOfDepthTolerance_Uniform)
	/// or in pixels (SelectMgr_TypeOfDepthTolerance_UniformPixels);
	/// value is ignored in case of SelectMgr_TypeOfDepthTolerance_SensitivityFactor
	/// </param>
	void SetDepthTolerance(Macad::Occt::SelectMgr_TypeOfDepthTolerance theType, double theTolerance);
	/// <summary>
	/// Returns the number of detected owners.
	/// </summary>
	int NbPicked();
	/// <summary>
	/// Clears picking results.
	/// </summary>
	void ClearPicked();
	/// <summary>
	/// Empties all the tables, removes all selections...
	/// </summary>
	void Clear();
	/// <summary>
	/// Returns the entity Owner for the object picked at specified position.
	/// </summary>
	/// <param name="theRank">
	/// rank of detected object within range 1...NbPicked()
	/// </param>
	Macad::Occt::SelectMgr_EntityOwner^ Picked(int theRank);
	/// <summary>
	/// Returns the Entity for the object picked at specified position.
	/// </summary>
	/// <param name="theRank">
	/// rank of detected object within range 1...NbPicked()
	/// </param>
	Macad::Occt::SelectMgr_SortCriterion^ PickedData(int theRank);
	/// <summary>
	/// Returns the Entity for the object picked at specified position.
	/// </summary>
	/// <param name="theRank">
	/// rank of detected object within range 1...NbPicked()
	/// </param>
	/* Method skipped due to unknown mapping: Select3D_SensitiveEntity PickedEntity(Standard_Integer theRank, ) */
	/// <summary>
	/// Returns the 3D point (intersection of picking axis with the object nearest to eye)
	/// for the object picked at specified position.
	/// </summary>
	/// <param name="theRank">
	/// rank of detected object within range 1...NbPicked()
	/// </param>
	Macad::Occt::Pnt PickedPoint(int theRank);
	/// <summary>
	/// Remove picked entities associated with specified object.
	/// </summary>
	bool RemovePicked(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	bool Contains(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	/// <summary>
	/// Returns the default builder used to construct BVH of entity set.
	/// </summary>
	/* Method skipped due to unknown mapping: BVH_Builder<double, 3 EntitySetBuilder() */
	/// <summary>
	/// Sets the default builder used to construct BVH of entity set.
	/// The new builder will be also assigned for already defined objects, but computed BVH trees will not be invalidated.
	/// </summary>
	/* Method skipped due to unknown mapping: void SetEntitySetBuilder(BVH_Builder<double, 3 theBuilder, ) */
	/// <summary>
	/// Returns the list of selection modes ModeList found in
	/// this selector for the selectable object aSelectableObject.
	/// Returns true if aSelectableObject is referenced inside
	/// this selector; returns false if the object is not present
	/// in this selector.
	/// </summary>
	bool Modes(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject, Macad::Occt::TColStd_ListOfInteger^ theModeList, Macad::Occt::SelectMgr_StateOfSelection theWantedState);
	/// <summary>
	/// Returns the list of selection modes ModeList found in
	/// this selector for the selectable object aSelectableObject.
	/// Returns true if aSelectableObject is referenced inside
	/// this selector; returns false if the object is not present
	/// in this selector.
	/// </summary>
	bool Modes(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject, Macad::Occt::TColStd_ListOfInteger^ theModeList);
	/// <summary>
	/// Returns true if the selectable object
	/// aSelectableObject having the selection mode aMode
	/// is active in this selector.
	/// </summary>
	bool IsActive(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject, int theMode);
	/// <summary>
	/// Returns true if the selectable object
	/// aSelectableObject having the selection mode aMode
	/// is in this selector.
	/// </summary>
	bool IsInside(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject, int theMode);
	/// <summary>
	/// Returns the selection status Status of the selection aSelection.
	/// </summary>
	Macad::Occt::SelectMgr_StateOfSelection Status(Macad::Occt::SelectMgr_Selection^ theSelection);
	Macad::Occt::TCollection_AsciiString^ Status(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject);
	/// <summary>
	/// Returns the list of active entity owners
	/// </summary>
	/* Method skipped due to unknown mapping: void ActiveOwners(NCollection_List<opencascade::handle<SelectMgr_EntityOwner>> theOwners, ) */
	/// <summary>
	/// Adds new object to the map of selectable objects
	/// </summary>
	void AddSelectableObject(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	/// <summary>
	/// Adds new selection to the object and builds its BVH tree
	/// </summary>
	void AddSelectionToObject(Macad::Occt::SelectMgr_SelectableObject^ theObject, Macad::Occt::SelectMgr_Selection^ theSelection);
	/// <summary>
	/// Moves existing object from set of not transform persistence objects
	/// to set of transform persistence objects (or vice versa).
	/// </summary>
	void MoveSelectableObject(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	/// <summary>
	/// Removes selectable object from map of selectable ones
	/// </summary>
	void RemoveSelectableObject(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	/// <summary>
	/// Removes selection of the object and marks its BVH tree for rebuild
	/// </summary>
	void RemoveSelectionOfObject(Macad::Occt::SelectMgr_SelectableObject^ theObject, Macad::Occt::SelectMgr_Selection^ theSelection);
	/// <summary>
	/// Marks BVH of selectable objects for rebuild. Parameter theIsForce set as true
	/// guarantees that 1st level BVH for the viewer selector will be rebuilt during this call
	/// </summary>
	void RebuildObjectsTree(bool theIsForce);
	/// <summary>
	/// Marks BVH of selectable objects for rebuild. Parameter theIsForce set as true
	/// guarantees that 1st level BVH for the viewer selector will be rebuilt during this call
	/// </summary>
	void RebuildObjectsTree();
	/// <summary>
	/// Marks BVH of sensitive entities of particular selectable object for rebuild. Parameter
	/// theIsForce set as true guarantees that 2nd level BVH for the object given will be
	/// rebuilt during this call
	/// </summary>
	void RebuildSensitivesTree(Macad::Occt::SelectMgr_SelectableObject^ theObject, bool theIsForce);
	/// <summary>
	/// Marks BVH of sensitive entities of particular selectable object for rebuild. Parameter
	/// theIsForce set as true guarantees that 2nd level BVH for the object given will be
	/// rebuilt during this call
	/// </summary>
	void RebuildSensitivesTree(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	/// <summary>
	/// Returns instance of selecting volume manager of the viewer selector
	/// </summary>
	/* Method skipped due to unknown mapping: SelectMgr_SelectingVolumeManager GetManager() */
	/// <summary>
	/// Return map of selectable objects.
	/// </summary>
	Macad::Occt::SelectMgr_SelectableObjectSet^ SelectableObjects();
	/// <summary>
	/// Marks all added sensitive entities of all objects as non-selectable
	/// </summary>
	void ResetSelectionActivationStatus();
	/// <summary>
	/// Is used for rectangular selection only
	/// If theIsToAllow is false, only fully included sensitives will be detected, otherwise the algorithm will
	/// mark both included and overlapped entities as matched
	/// </summary>
	void AllowOverlapDetection(bool theIsToAllow);
	/// <summary>
	/// Picks the sensitive entity at the pixel coordinates of
	/// the mouse <theXPix> and <theYPix>. The selector looks for touched areas and owners.
	/// </summary>
	void Pick(int theXPix, int theYPix, Macad::Occt::V3d_View^ theView);
	/// <summary>
	/// Picks the sensitive entity according to the minimum
	/// and maximum pixel values <theXPMin>, <theYPMin>, <theXPMax>
	/// and <theYPMax> defining a 2D area for selection in the 3D view aView.
	/// </summary>
	void Pick(int theXPMin, int theYPMin, int theXPMax, int theYPMax, Macad::Occt::V3d_View^ theView);
	/// <summary>
	/// pick action - input pixel values for polyline selection for selection.
	/// </summary>
	void Pick(Macad::Occt::TColgp_Array1OfPnt2d^ thePolyline, Macad::Occt::V3d_View^ theView);
	/// <summary>
	/// Picks the sensitive entity according to the input axis.
	/// This is geometric intersection 3D objects by axis
	/// (camera parameters are ignored and objects with transform persistance are skipped).
	/// </summary>
	void Pick(Macad::Occt::Ax1 theAxis, Macad::Occt::V3d_View^ theView);
	/// <summary>
	/// Dump of detection results into image.
	/// This method performs axis picking for each pixel in the image
	/// and generates a color depending on picking results and selection image type.
	/// </summary>
	/// <param name="theImage">
	///       result image, should be initialized
	/// </param>
	/// <param name="theView">
	///        3D view defining camera position
	/// </param>
	/// <param name="theType">
	///        type of image to define
	/// </param>
	/// <param name="thePickedIndex">
	/// index of picked entity (1 means topmost)
	/// </param>
	bool ToPixMap(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::V3d_View^ theView, Macad::Occt::StdSelect_TypeOfSelectionImage theType, int thePickedIndex);
	/// <summary>
	/// Dump of detection results into image.
	/// This method performs axis picking for each pixel in the image
	/// and generates a color depending on picking results and selection image type.
	/// </summary>
	/// <param name="theImage">
	///       result image, should be initialized
	/// </param>
	/// <param name="theView">
	///        3D view defining camera position
	/// </param>
	/// <param name="theType">
	///        type of image to define
	/// </param>
	/// <param name="thePickedIndex">
	/// index of picked entity (1 means topmost)
	/// </param>
	bool ToPixMap(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::V3d_View^ theView, Macad::Occt::StdSelect_TypeOfSelectionImage theType);
	/// <summary>
	/// Displays sensitives in view <theView>.
	/// </summary>
	void DisplaySensitive(Macad::Occt::V3d_View^ theView);
	void ClearSensitive(Macad::Occt::V3d_View^ theView);
	void DisplaySensitive(Macad::Occt::SelectMgr_Selection^ theSel, Macad::Occt::Trsf theTrsf, Macad::Occt::V3d_View^ theView, bool theToClearOthers);
	void DisplaySensitive(Macad::Occt::SelectMgr_Selection^ theSel, Macad::Occt::Trsf theTrsf, Macad::Occt::V3d_View^ theView);
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Enables/disables building BVH for sensitives in separate threads
	/// </summary>
	void SetToPrebuildBVH(bool theToPrebuild, int theThreadsNum);
	/// <summary>
	/// Enables/disables building BVH for sensitives in separate threads
	/// </summary>
	void SetToPrebuildBVH(bool theToPrebuild);
	/// <summary>
	/// Queues a sensitive entity to build its BVH
	/// </summary>
	/* Method skipped due to unknown mapping: void QueueBVHBuild(Select3D_SensitiveEntity theEntity, ) */
	/// <summary>
	/// Waits BVH threads finished building
	/// </summary>
	void WaitForBVHBuild();
	/// <summary>
	/// Returns TRUE if building BVH for sensitives in separate threads is enabled
	/// </summary>
	bool ToPrebuildBVH();
}; // class SelectMgr_ViewerSelector

}; // namespace Occt
}; // namespace Macad
