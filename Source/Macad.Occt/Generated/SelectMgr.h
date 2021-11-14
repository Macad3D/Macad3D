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
public enum class SelectMgr_FilterType
{
	SelectMgr_FilterType_AND = 0,
	SelectMgr_FilterType_OR = 1
}; // enum  class SelectMgr_FilterType

//---------------------------------------------------------------------
//  Enum  SelectMgr_SelectionType
//---------------------------------------------------------------------
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
public enum class SelectMgr_TypeOfUpdate
{
	SelectMgr_TOU_Full = 0,
	SelectMgr_TOU_Partial = 1,
	SelectMgr_TOU_None = 2
}; // enum  class SelectMgr_TypeOfUpdate

//---------------------------------------------------------------------
//  Enum  SelectMgr_PickingStrategy
//---------------------------------------------------------------------
public enum class SelectMgr_PickingStrategy
{
	SelectMgr_PickingStrategy_FirstAcceptable = 0,
	SelectMgr_PickingStrategy_OnlyTopmost = 1
}; // enum  class SelectMgr_PickingStrategy

//---------------------------------------------------------------------
//  Enum  SelectMgr_TypeOfDepthTolerance
//---------------------------------------------------------------------
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
	SelectMgr_Selection(int theModeIdx);
	SelectMgr_Selection(Macad::Occt::SelectMgr_Selection^ parameter1);
	void Destroy();
	/* Method skipped due to unknown mapping: void Add(Select3D_SensitiveEntity theSensitive, ) */
	void Clear();
	bool IsEmpty();
	int Mode();
	/* Method skipped due to unknown mapping: NCollection_Vector<opencascade::handle<SelectMgr_SensitiveEntity>> Entities() */
	/* Method skipped due to unknown mapping: NCollection_Vector<opencascade::handle<SelectMgr_SensitiveEntity>> ChangeEntities() */
	Macad::Occt::SelectMgr_TypeOfUpdate UpdateStatus();
	void UpdateStatus(Macad::Occt::SelectMgr_TypeOfUpdate theStatus);
	void UpdateBVHStatus(Macad::Occt::SelectMgr_TypeOfBVHUpdate theStatus);
	Macad::Occt::SelectMgr_TypeOfBVHUpdate BVHUpdateStatus();
	Macad::Occt::SelectMgr_StateOfSelection GetSelectionState();
	void SetSelectionState(Macad::Occt::SelectMgr_StateOfSelection theState);
	int Sensitivity();
	void SetSensitivity(int theNewSens);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class SelectMgr_Selection

//---------------------------------------------------------------------
//  Class  SelectMgr
//---------------------------------------------------------------------
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
	static void ComputeSensitivePrs(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::SelectMgr_Selection^ theSel, Macad::Occt::Trsf theLoc, Macad::Occt::Graphic3d_TransformPers^ theTrsfPers);
}; // class SelectMgr

//---------------------------------------------------------------------
//  Class  SelectMgr_EntityOwner
//---------------------------------------------------------------------
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
	SelectMgr_EntityOwner(int aPriority);
	SelectMgr_EntityOwner(Macad::Occt::SelectMgr_SelectableObject^ aSO, int aPriority);
	SelectMgr_EntityOwner(Macad::Occt::SelectMgr_SelectableObject^ aSO);
	SelectMgr_EntityOwner(Macad::Occt::SelectMgr_EntityOwner^ theOwner, int aPriority);
	SelectMgr_EntityOwner(Macad::Occt::SelectMgr_EntityOwner^ parameter1);
	int Priority();
	void SetPriority(int thePriority);
	bool HasSelectable();
	Macad::Occt::SelectMgr_SelectableObject^ Selectable();
	void SetSelectable(Macad::Occt::SelectMgr_SelectableObject^ theSelObj);
	bool HandleMouseClick(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsDoubleClick);
	/* Method skipped due to unknown mapping: Standard_Boolean IsHilighted(PrsMgr_PresentationManager thePrsMgr, Standard_Integer theMode, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean IsHilighted(PrsMgr_PresentationManager thePrsMgr, Standard_Integer theMode, ) */
	/* Method skipped due to unknown mapping: void HilightWithColor(PrsMgr_PresentationManager thePrsMgr, Prs3d_Drawer theStyle, Standard_Integer theMode, ) */
	/* Method skipped due to unknown mapping: void HilightWithColor(PrsMgr_PresentationManager thePrsMgr, Prs3d_Drawer theStyle, Standard_Integer theMode, ) */
	/* Method skipped due to unknown mapping: void Unhilight(PrsMgr_PresentationManager thePrsMgr, Standard_Integer theMode, ) */
	/* Method skipped due to unknown mapping: void Unhilight(PrsMgr_PresentationManager thePrsMgr, Standard_Integer theMode, ) */
	/* Method skipped due to unknown mapping: void Clear(PrsMgr_PresentationManager thePrsMgr, Standard_Integer theMode, ) */
	/* Method skipped due to unknown mapping: void Clear(PrsMgr_PresentationManager thePrsMgr, Standard_Integer theMode, ) */
	bool HasLocation();
	Macad::Occt::TopLoc_Location^ Location();
	void SetLocation(Macad::Occt::TopLoc_Location^ theLocation);
	bool IsSelected();
	void SetSelected(bool theIsSelected);
	int State();
	void State(int theStatus);
	bool IsAutoHilight();
	bool IsForcedHilight();
	void SetZLayer(int theLayerId);
	/* Method skipped due to unknown mapping: void UpdateHighlightTrsf(V3d_Viewer theViewer, PrsMgr_PresentationManager theManager, Standard_Integer theDispMode, ) */
	bool IsSameSelectable(Macad::Occt::SelectMgr_SelectableObject^ theOther);
	bool ComesFromDecomposition();
	void SetComesFromDecomposition(bool theIsFromDecomposition);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	void Set(Macad::Occt::SelectMgr_SelectableObject^ theSelObj);
	void Set(int thePriority);
}; // class SelectMgr_EntityOwner

//---------------------------------------------------------------------
//  Class  SelectMgr_Filter
//---------------------------------------------------------------------
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
	bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ anObj);
	bool ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode);
}; // class SelectMgr_Filter

//---------------------------------------------------------------------
//  Class  SelectMgr_CompositionFilter
//---------------------------------------------------------------------
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
	void Add(Macad::Occt::SelectMgr_Filter^ afilter);
	void Remove(Macad::Occt::SelectMgr_Filter^ aFilter);
	bool IsEmpty();
	bool IsIn(Macad::Occt::SelectMgr_Filter^ aFilter);
	Macad::Occt::SelectMgr_ListOfFilter^ StoredFilters();
	void Clear();
	bool ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode);
}; // class SelectMgr_CompositionFilter

//---------------------------------------------------------------------
//  Class  SelectMgr_AndFilter
//---------------------------------------------------------------------
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
	SelectMgr_AndFilter();
	SelectMgr_AndFilter(Macad::Occt::SelectMgr_AndFilter^ parameter1);
	bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj);
}; // class SelectMgr_AndFilter

//---------------------------------------------------------------------
//  Class  SelectMgr_AndOrFilter
//---------------------------------------------------------------------
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
	SelectMgr_AndOrFilter(Macad::Occt::SelectMgr_FilterType theFilterType);
	SelectMgr_AndOrFilter(Macad::Occt::SelectMgr_AndOrFilter^ parameter1);
	bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ theObj);
	/* Method skipped due to unknown mapping: void SetDisabledObjects(NCollection_Shared<NCollection_Map<const Standard_Transient *, NCollection_DefaultHasher<const Standard_Transient *>>, void theObjects, ) */
	Macad::Occt::SelectMgr_FilterType FilterType();
	void SetFilterType(Macad::Occt::SelectMgr_FilterType theFilterType);
}; // class SelectMgr_AndOrFilter

//---------------------------------------------------------------------
//  Class  SelectMgr_ViewClipRange
//---------------------------------------------------------------------
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
	SelectMgr_ViewClipRange();
	SelectMgr_ViewClipRange(Macad::Occt::SelectMgr_ViewClipRange^ parameter1);
	bool IsClipped(double theDepth);
	bool GetNearestDepth(Macad::Occt::Bnd_Range^ theRange, double% theDepth);
	void SetVoid();
	void AddClippingPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes, Macad::Occt::Ax1 thePickRay);
	Macad::Occt::Bnd_Range^ ChangeUnclipRange();
	void AddClipSubRange(Macad::Occt::Bnd_Range^ theRange);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class SelectMgr_ViewClipRange

//---------------------------------------------------------------------
//  Class  SelectMgr_BaseIntersector
//---------------------------------------------------------------------
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
	SelectMgr_BaseIntersector();
	SelectMgr_BaseIntersector(Macad::Occt::SelectMgr_BaseIntersector^ parameter1);
	void Build();
	Macad::Occt::SelectMgr_SelectionType GetSelectionType();
	bool IsScalable();
	void SetPixelTolerance(int theTol);
	/* Method skipped due to unknown mapping: SelectMgr_BaseIntersector ScaleAndTransform(Standard_Integer theScaleFactor, gp_GTrsf theTrsf, SelectMgr_FrustumBuilder theBuilder, ) */
	Macad::Occt::Graphic3d_Camera^ Camera();
	void SetCamera(Macad::Occt::Graphic3d_Camera^ theCamera);
	void WindowSize(int% theWidth, int% theHeight);
	void SetWindowSize(int theWidth, int theHeight);
	void SetViewport(double theX, double theY, double theWidth, double theHeight);
	Macad::Occt::Pnt GetNearPnt();
	Macad::Occt::Pnt GetFarPnt();
	Macad::Occt::Dir GetViewRayDirection();
	Macad::Occt::Pnt2d GetMousePosition();
	/* Method skipped due to unknown mapping: void GetPlanes(NCollection_Vector<NCollection_Vec4<double>> thePlaneEquations, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean OverlapsBox(SelectMgr_Vec3 theBoxMin, SelectMgr_Vec3 theBoxMax, SelectMgr_ViewClipRange theClipRange, SelectBasics_PickResult thePickResult, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean OverlapsBox(SelectMgr_Vec3 theBoxMin, SelectMgr_Vec3 theBoxMax, Standard_Boolean theInside, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean OverlapsBox(SelectMgr_Vec3 theBoxMin, SelectMgr_Vec3 theBoxMax, Standard_Boolean theInside, ) */
	bool OverlapsPoint(Macad::Occt::Pnt thePnt, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	bool OverlapsPoint(Macad::Occt::Pnt thePnt);
	/* Method skipped due to unknown mapping: Standard_Boolean OverlapsPolygon(TColgp_Array1OfPnt theArrayOfPnts, Select3D_TypeOfSensitivity theSensType, SelectMgr_ViewClipRange theClipRange, SelectBasics_PickResult thePickResult, ) */
	bool OverlapsSegment(Macad::Occt::Pnt thePnt1, Macad::Occt::Pnt thePnt2, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	/* Method skipped due to unknown mapping: Standard_Boolean OverlapsTriangle(gp_Pnt thePnt1, gp_Pnt thePnt2, gp_Pnt thePnt3, Select3D_TypeOfSensitivity theSensType, SelectMgr_ViewClipRange theClipRange, SelectBasics_PickResult thePickResult, ) */
	bool OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, bool% theInside);
	bool OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius);
	bool OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool% theInside);
	bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf);
	double DistToGeometryCenter(Macad::Occt::Pnt theCOG);
	Macad::Occt::Pnt DetectedPoint(double theDepth);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	bool RaySphereIntersection(Macad::Occt::Pnt theCenter, double theRadius, Macad::Occt::Pnt theLoc, Macad::Occt::Dir theRayDir, double% theTimeEnter, double% theTimeLeave);
	bool RayCylinderIntersection(double theBottomRadius, double theTopRadius, double theHeight, Macad::Occt::Pnt theLoc, Macad::Occt::Dir theRayDir, double% theTimeEnter, double% theTimeLeave);
}; // class SelectMgr_BaseIntersector

//---------------------------------------------------------------------
//  Class  SelectMgr_AxisIntersector
//---------------------------------------------------------------------
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
	SelectMgr_AxisIntersector();
	SelectMgr_AxisIntersector(Macad::Occt::SelectMgr_AxisIntersector^ parameter1);
	void Init(Macad::Occt::Ax1 theAxis);
	void Build();
	void SetCamera(Macad::Occt::Graphic3d_Camera^ theCamera);
	bool IsScalable();
	/* Method skipped due to unknown mapping: SelectMgr_BaseIntersector ScaleAndTransform(Standard_Integer theScaleFactor, gp_GTrsf theTrsf, SelectMgr_FrustumBuilder theBuilder, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean OverlapsBox(SelectMgr_Vec3 theBoxMin, SelectMgr_Vec3 theBoxMax, SelectMgr_ViewClipRange theClipRange, SelectBasics_PickResult thePickResult, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean OverlapsBox(SelectMgr_Vec3 theBoxMin, SelectMgr_Vec3 theBoxMax, Standard_Boolean theInside, ) */
	bool OverlapsPoint(Macad::Occt::Pnt thePnt, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	bool OverlapsPoint(Macad::Occt::Pnt thePnt);
	/* Method skipped due to unknown mapping: Standard_Boolean OverlapsPolygon(TColgp_Array1OfPnt theArrayOfPnts, Select3D_TypeOfSensitivity theSensType, SelectMgr_ViewClipRange theClipRange, SelectBasics_PickResult thePickResult, ) */
	bool OverlapsSegment(Macad::Occt::Pnt thePnt1, Macad::Occt::Pnt thePnt2, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	/* Method skipped due to unknown mapping: Standard_Boolean OverlapsTriangle(gp_Pnt thePnt1, gp_Pnt thePnt2, gp_Pnt thePnt3, Select3D_TypeOfSensitivity theSensType, SelectMgr_ViewClipRange theClipRange, SelectBasics_PickResult thePickResult, ) */
	bool OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, bool% theInside);
	bool OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius);
	bool OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool% theInside);
	bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf);
	double DistToGeometryCenter(Macad::Occt::Pnt theCOG);
	Macad::Occt::Pnt DetectedPoint(double theDepth);
	Macad::Occt::Pnt GetNearPnt();
	Macad::Occt::Pnt GetFarPnt();
	Macad::Occt::Dir GetViewRayDirection();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class SelectMgr_AxisIntersector

//---------------------------------------------------------------------
//  Class  SelectMgr_BVHThreadPool
//---------------------------------------------------------------------
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
	SelectMgr_BVHThreadPool(int theNbThreads);
	/* Method skipped due to unknown mapping: void AddEntity(Select3D_SensitiveEntity theEntity, ) */
	void StopThreads();
	void WaitThreads();
	/* Method skipped due to unknown mapping: NCollection_Array1<SelectMgr_BVHThreadPool::BVHThread> Threads() */
}; // class SelectMgr_BVHThreadPool

//---------------------------------------------------------------------
//  Class  SelectMgr_SensitiveEntity
//---------------------------------------------------------------------
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
	/* Method skipped due to unknown mapping: void SelectMgr_SensitiveEntity(Select3D_SensitiveEntity theEntity, ) */
	SelectMgr_SensitiveEntity(Macad::Occt::SelectMgr_SensitiveEntity^ parameter1);
	void Clear();
	/* Method skipped due to unknown mapping: Select3D_SensitiveEntity BaseSensitive() */
	bool IsActiveForSelection();
	void ResetSelectionActiveStatus();
	void SetActiveForSelection();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class SelectMgr_SensitiveEntity

//---------------------------------------------------------------------
//  Class  SelectMgr_SelectionManager
//---------------------------------------------------------------------
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
	SelectMgr_SelectionManager(Macad::Occt::SelectMgr_ViewerSelector^ theSelector);
	SelectMgr_SelectionManager(Macad::Occt::SelectMgr_SelectionManager^ parameter1);
	Macad::Occt::SelectMgr_ViewerSelector^ Selector();
	bool Contains(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	void Load(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode);
	void Load(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	void Remove(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	void Activate(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode);
	void Activate(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	void Deactivate(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode);
	void Deactivate(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	bool IsActivated(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode);
	bool IsActivated(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	void ClearSelectionStructures(Macad::Occt::SelectMgr_SelectableObject^ theObj, int theMode);
	void ClearSelectionStructures(Macad::Occt::SelectMgr_SelectableObject^ theObj);
	void RestoreSelectionStructures(Macad::Occt::SelectMgr_SelectableObject^ theObj, int theMode);
	void RestoreSelectionStructures(Macad::Occt::SelectMgr_SelectableObject^ theObj);
	void RecomputeSelection(Macad::Occt::SelectMgr_SelectableObject^ theObject, bool theIsForce, int theMode);
	void RecomputeSelection(Macad::Occt::SelectMgr_SelectableObject^ theObject, bool theIsForce);
	void RecomputeSelection(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	void Update(Macad::Occt::SelectMgr_SelectableObject^ theObject, bool theIsForce);
	void Update(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	void SetUpdateMode(Macad::Occt::SelectMgr_SelectableObject^ theObject, Macad::Occt::SelectMgr_TypeOfUpdate theType);
	void SetUpdateMode(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode, Macad::Occt::SelectMgr_TypeOfUpdate theType);
	void SetSelectionSensitivity(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode, int theNewSens);
	void UpdateSelection(Macad::Occt::SelectMgr_SelectableObject^ theObj);
}; // class SelectMgr_SelectionManager

//---------------------------------------------------------------------
//  Class  SelectMgr_SelectableObject
//---------------------------------------------------------------------
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
	void ComputeSelection(Macad::Occt::SelectMgr_Selection^ theSelection, int theMode);
	bool AcceptShapeDecomposition();
	void RecomputePrimitives();
	void RecomputePrimitives(int theMode);
	void AddSelection(Macad::Occt::SelectMgr_Selection^ aSelection, int aMode);
	void ClearSelections(bool update);
	void ClearSelections();
	Macad::Occt::SelectMgr_Selection^ Selection(int theMode);
	bool HasSelection(int theMode);
	Macad::Occt::SelectMgr_SequenceOfSelection^ Selections();
	void ResetTransformation();
	void UpdateTransformation();
	void UpdateTransformations(Macad::Occt::SelectMgr_Selection^ aSelection);
	/* Method skipped due to unknown mapping: void HilightSelected(PrsMgr_PresentationManager thePrsMgr, SelectMgr_SequenceOfOwner theSeq, ) */
	void ClearSelected();
	/* Method skipped due to unknown mapping: void ClearDynamicHighlight(PrsMgr_PresentationManager theMgr, ) */
	/* Method skipped due to unknown mapping: void HilightOwnerWithColor(PrsMgr_PresentationManager thePM, Prs3d_Drawer theStyle, SelectMgr_EntityOwner theOwner, ) */
	bool IsAutoHilight();
	void SetAutoHilight(bool theAutoHilight);
	/* Method skipped due to unknown mapping: Graphic3d_Structure GetHilightPresentation(PrsMgr_PresentationManager thePrsMgr, ) */
	/* Method skipped due to unknown mapping: Graphic3d_Structure GetSelectPresentation(PrsMgr_PresentationManager thePrsMgr, ) */
	void ErasePresentations(bool theToRemove);
	void SetZLayer(int theLayerId);
	void UpdateSelection(int theMode);
	void UpdateSelection();
	void SetAssemblyOwner(Macad::Occt::SelectMgr_EntityOwner^ theOwner, int theMode);
	void SetAssemblyOwner(Macad::Occt::SelectMgr_EntityOwner^ theOwner);
	int GlobalSelectionMode();
	Macad::Occt::SelectMgr_EntityOwner^ GlobalSelOwner();
	Macad::Occt::SelectMgr_EntityOwner^ GetAssemblyOwner();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class SelectMgr_SelectableObject

//---------------------------------------------------------------------
//  Class  SelectMgr_SortCriterion
//---------------------------------------------------------------------
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
	SelectMgr_SortCriterion();
	SelectMgr_SortCriterion(Macad::Occt::SelectMgr_SortCriterion^ parameter1);
	bool IsCloserDepth(Macad::Occt::SelectMgr_SortCriterion^ theOther);
	bool IsHigherPriority(Macad::Occt::SelectMgr_SortCriterion^ theOther);
}; // class SelectMgr_SortCriterion

//---------------------------------------------------------------------
//  Class  SelectMgr_OrFilter
//---------------------------------------------------------------------
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
	SelectMgr_OrFilter();
	SelectMgr_OrFilter(Macad::Occt::SelectMgr_OrFilter^ parameter1);
	bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj);
}; // class SelectMgr_OrFilter

//---------------------------------------------------------------------
//  Class  SelectMgr_SelectableObjectSet
//---------------------------------------------------------------------
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
	enum class BVHSubset
	{
		BVHSubset_3d = 0,
		BVHSubset_3dPersistent = 1,
		BVHSubset_2dPersistent = 2,
		BVHSubsetNb = 3
	}; // enum  class BVHSubset

	SelectMgr_SelectableObjectSet();
	SelectMgr_SelectableObjectSet(Macad::Occt::SelectMgr_SelectableObjectSet^ parameter1);
	bool Append(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	bool Remove(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	void ChangeSubset(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	void UpdateBVH(Macad::Occt::Graphic3d_Camera^ theCam, Macad::Occt::Graphic3d_Vec2i^ theWinSize);
	void MarkDirty();
	bool Contains(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	bool IsEmpty();
	bool IsEmpty(Macad::Occt::SelectMgr_SelectableObjectSet::BVHSubset theSubset);
	Macad::Occt::SelectMgr_SelectableObject^ GetObjectById(Macad::Occt::SelectMgr_SelectableObjectSet::BVHSubset theSubset, int theIndex);
	/* Method skipped due to unknown mapping: BVH_Tree<double, 3, BVH_BinaryTree BVH(BVHSubset theSubset, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class SelectMgr_SelectableObjectSet

//---------------------------------------------------------------------
//  Class  SelectMgr_ViewerSelector
//---------------------------------------------------------------------
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
	SelectMgr_ViewerSelector();
	SelectMgr_ViewerSelector(Macad::Occt::SelectMgr_ViewerSelector^ parameter1);
	int CustomPixelTolerance();
	void SetPixelTolerance(int theTolerance);
	double Sensitivity();
	int PixelTolerance();
	void SortResult();
	Macad::Occt::SelectMgr_EntityOwner^ OnePicked();
	bool ToPickClosest();
	void SetPickClosest(bool theToPreferClosest);
	Macad::Occt::SelectMgr_TypeOfDepthTolerance DepthToleranceType();
	double DepthTolerance();
	void SetDepthTolerance(Macad::Occt::SelectMgr_TypeOfDepthTolerance theType, double theTolerance);
	int NbPicked();
	void ClearPicked();
	void Clear();
	Macad::Occt::SelectMgr_EntityOwner^ Picked(int theRank);
	Macad::Occt::SelectMgr_SortCriterion^ PickedData(int theRank);
	/* Method skipped due to unknown mapping: Select3D_SensitiveEntity PickedEntity(Standard_Integer theRank, ) */
	Macad::Occt::Pnt PickedPoint(int theRank);
	bool RemovePicked(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	bool Contains(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	/* Method skipped due to unknown mapping: BVH_Builder<double, 3 EntitySetBuilder() */
	/* Method skipped due to unknown mapping: void SetEntitySetBuilder(BVH_Builder<double, 3 theBuilder, ) */
	bool Modes(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject, Macad::Occt::TColStd_ListOfInteger^ theModeList, Macad::Occt::SelectMgr_StateOfSelection theWantedState);
	bool Modes(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject, Macad::Occt::TColStd_ListOfInteger^ theModeList);
	bool IsActive(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject, int theMode);
	bool IsInside(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject, int theMode);
	Macad::Occt::SelectMgr_StateOfSelection Status(Macad::Occt::SelectMgr_Selection^ theSelection);
	Macad::Occt::TCollection_AsciiString^ Status(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject);
	/* Method skipped due to unknown mapping: void ActiveOwners(NCollection_List<opencascade::handle<SelectMgr_EntityOwner>> theOwners, ) */
	void AddSelectableObject(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	void AddSelectionToObject(Macad::Occt::SelectMgr_SelectableObject^ theObject, Macad::Occt::SelectMgr_Selection^ theSelection);
	void MoveSelectableObject(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	void RemoveSelectableObject(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	void RemoveSelectionOfObject(Macad::Occt::SelectMgr_SelectableObject^ theObject, Macad::Occt::SelectMgr_Selection^ theSelection);
	void RebuildObjectsTree(bool theIsForce);
	void RebuildObjectsTree();
	void RebuildSensitivesTree(Macad::Occt::SelectMgr_SelectableObject^ theObject, bool theIsForce);
	void RebuildSensitivesTree(Macad::Occt::SelectMgr_SelectableObject^ theObject);
	/* Method skipped due to unknown mapping: SelectMgr_SelectingVolumeManager GetManager() */
	Macad::Occt::SelectMgr_SelectableObjectSet^ SelectableObjects();
	void ResetSelectionActivationStatus();
	void AllowOverlapDetection(bool theIsToAllow);
	void Pick(int theXPix, int theYPix, Macad::Occt::V3d_View^ theView);
	void Pick(int theXPMin, int theYPMin, int theXPMax, int theYPMax, Macad::Occt::V3d_View^ theView);
	void Pick(Macad::Occt::TColgp_Array1OfPnt2d^ thePolyline, Macad::Occt::V3d_View^ theView);
	void Pick(Macad::Occt::Ax1 theAxis, Macad::Occt::V3d_View^ theView);
	bool ToPixMap(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::V3d_View^ theView, Macad::Occt::StdSelect_TypeOfSelectionImage theType, int thePickedIndex);
	bool ToPixMap(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::V3d_View^ theView, Macad::Occt::StdSelect_TypeOfSelectionImage theType);
	void DisplaySensitive(Macad::Occt::V3d_View^ theView);
	void ClearSensitive(Macad::Occt::V3d_View^ theView);
	void DisplaySensitive(Macad::Occt::SelectMgr_Selection^ theSel, Macad::Occt::Trsf theTrsf, Macad::Occt::V3d_View^ theView, bool theToClearOthers);
	void DisplaySensitive(Macad::Occt::SelectMgr_Selection^ theSel, Macad::Occt::Trsf theTrsf, Macad::Occt::V3d_View^ theView);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	void SetToPrebuildBVH(bool theToPrebuild, int theThreadsNum);
	void SetToPrebuildBVH(bool theToPrebuild);
	/* Method skipped due to unknown mapping: void QueueBVHBuild(Select3D_SensitiveEntity theEntity, ) */
	void WaitForBVHBuild();
	bool ToPrebuildBVH();
}; // class SelectMgr_ViewerSelector

}; // namespace Occt
}; // namespace Macad
