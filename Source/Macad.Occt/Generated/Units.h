// Generated wrapper code for package Units

#pragma once

#include "Units.h"
#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  Units_UtsSequence
//---------------------------------------------------------------------
public ref class Units_UtsSequence sealed : public BaseClass<::Units_UtsSequence>
{

#ifdef Include_Units_UtsSequence_h
public:
	Include_Units_UtsSequence_h
#endif

public:
	Units_UtsSequence(::Units_UtsSequence* nativeInstance)
		: BaseClass<::Units_UtsSequence>( nativeInstance, true )
	{}

	Units_UtsSequence(::Units_UtsSequence& nativeInstance)
		: BaseClass<::Units_UtsSequence>( &nativeInstance, false )
	{}

	property ::Units_UtsSequence* NativeInstance
	{
		::Units_UtsSequence* get()
		{
			return static_cast<::Units_UtsSequence*>(_NativeInstance);
		}
	}

public:
	Units_UtsSequence();
	Units_UtsSequence(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Units_UtsSequence(Macad::Occt::Units_UtsSequence^ theOther);
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
	Macad::Occt::Units_UtsSequence^ Assign(Macad::Occt::Units_UtsSequence^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::Units_Unit^ theItem);
	void Append(Macad::Occt::Units_UtsSequence^ theSeq);
	void Prepend(Macad::Occt::Units_Unit^ theItem);
	void Prepend(Macad::Occt::Units_UtsSequence^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::Units_Unit^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::Units_UtsSequence^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Units_Unit theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::Units_UtsSequence^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::Units_Unit^ theItem);
	void Split(int theIndex, Macad::Occt::Units_UtsSequence^ theSeq);
	Macad::Occt::Units_Unit^ First();
	Macad::Occt::Units_Unit^ ChangeFirst();
	Macad::Occt::Units_Unit^ Last();
	Macad::Occt::Units_Unit^ ChangeLast();
	Macad::Occt::Units_Unit^ Value(int theIndex);
	Macad::Occt::Units_Unit^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Units_Unit^ theItem);
}; // class Units_UtsSequence

//---------------------------------------------------------------------
//  Class  Units_QtsSequence
//---------------------------------------------------------------------
public ref class Units_QtsSequence sealed : public BaseClass<::Units_QtsSequence>
{

#ifdef Include_Units_QtsSequence_h
public:
	Include_Units_QtsSequence_h
#endif

public:
	Units_QtsSequence(::Units_QtsSequence* nativeInstance)
		: BaseClass<::Units_QtsSequence>( nativeInstance, true )
	{}

	Units_QtsSequence(::Units_QtsSequence& nativeInstance)
		: BaseClass<::Units_QtsSequence>( &nativeInstance, false )
	{}

	property ::Units_QtsSequence* NativeInstance
	{
		::Units_QtsSequence* get()
		{
			return static_cast<::Units_QtsSequence*>(_NativeInstance);
		}
	}

public:
	Units_QtsSequence();
	Units_QtsSequence(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Units_QtsSequence(Macad::Occt::Units_QtsSequence^ theOther);
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
	Macad::Occt::Units_QtsSequence^ Assign(Macad::Occt::Units_QtsSequence^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::Units_Quantity^ theItem);
	void Append(Macad::Occt::Units_QtsSequence^ theSeq);
	void Prepend(Macad::Occt::Units_Quantity^ theItem);
	void Prepend(Macad::Occt::Units_QtsSequence^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::Units_Quantity^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::Units_QtsSequence^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Units_Quantity theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::Units_QtsSequence^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::Units_Quantity^ theItem);
	void Split(int theIndex, Macad::Occt::Units_QtsSequence^ theSeq);
	Macad::Occt::Units_Quantity^ First();
	Macad::Occt::Units_Quantity^ ChangeFirst();
	Macad::Occt::Units_Quantity^ Last();
	Macad::Occt::Units_Quantity^ ChangeLast();
	Macad::Occt::Units_Quantity^ Value(int theIndex);
	Macad::Occt::Units_Quantity^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Units_Quantity^ theItem);
}; // class Units_QtsSequence

//---------------------------------------------------------------------
//  Class  Units_TksSequence
//---------------------------------------------------------------------
public ref class Units_TksSequence sealed : public BaseClass<::Units_TksSequence>
{

#ifdef Include_Units_TksSequence_h
public:
	Include_Units_TksSequence_h
#endif

public:
	Units_TksSequence(::Units_TksSequence* nativeInstance)
		: BaseClass<::Units_TksSequence>( nativeInstance, true )
	{}

	Units_TksSequence(::Units_TksSequence& nativeInstance)
		: BaseClass<::Units_TksSequence>( &nativeInstance, false )
	{}

	property ::Units_TksSequence* NativeInstance
	{
		::Units_TksSequence* get()
		{
			return static_cast<::Units_TksSequence*>(_NativeInstance);
		}
	}

public:
	Units_TksSequence();
	Units_TksSequence(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Units_TksSequence(Macad::Occt::Units_TksSequence^ theOther);
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
	Macad::Occt::Units_TksSequence^ Assign(Macad::Occt::Units_TksSequence^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::Units_Token^ theItem);
	void Append(Macad::Occt::Units_TksSequence^ theSeq);
	void Prepend(Macad::Occt::Units_Token^ theItem);
	void Prepend(Macad::Occt::Units_TksSequence^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::Units_Token^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::Units_TksSequence^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Units_Token theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::Units_TksSequence^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::Units_Token^ theItem);
	void Split(int theIndex, Macad::Occt::Units_TksSequence^ theSeq);
	Macad::Occt::Units_Token^ First();
	Macad::Occt::Units_Token^ ChangeFirst();
	Macad::Occt::Units_Token^ Last();
	Macad::Occt::Units_Token^ ChangeLast();
	Macad::Occt::Units_Token^ Value(int theIndex);
	Macad::Occt::Units_Token^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Units_Token^ theItem);
}; // class Units_TksSequence

//---------------------------------------------------------------------
//  Class  Units_UnitsDictionary
//---------------------------------------------------------------------
/// <summary>
/// This class creates  a dictionary of all  the units
/// you want to know.
/// </summary>
public ref class Units_UnitsDictionary sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Units_UnitsDictionary_h
public:
	Include_Units_UnitsDictionary_h
#endif

public:
	Units_UnitsDictionary(::Units_UnitsDictionary* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Units_UnitsDictionary(::Units_UnitsDictionary& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Units_UnitsDictionary* NativeInstance
	{
		::Units_UnitsDictionary* get()
		{
			return static_cast<::Units_UnitsDictionary*>(_NativeInstance);
		}
	}

	static Macad::Occt::Units_UnitsDictionary^ CreateDowncasted(::Units_UnitsDictionary* instance);

public:
	/// <summary>
	/// Returns an empty instance of UnitsDictionary.
	/// </summary>
	Units_UnitsDictionary();
	Units_UnitsDictionary(Macad::Occt::Units_UnitsDictionary^ parameter1);
	/// <summary>
	/// Returns a  UnitsDictionary object  which  contains the
	/// sequence  of all   the  units  you want to   consider,
	/// physical quantity by physical quantity.
	/// </summary>
	void Creates();
	/// <summary>
	/// Returns   the  head   of   the  sequence  of  physical
	/// quantities.
	/// </summary>
	Macad::Occt::Units_QuantitiesSequence^ Sequence();
	/// <summary>
	/// Returns for <aquantity> the active unit.
	/// </summary>
	Macad::Occt::TCollection_AsciiString^ ActiveUnit(System::String^ aquantity);
	/// <summary>
	/// Dumps only  the sequence   of  quantities without  the
	/// units  if  <alevel> is  equal  to zero,  and  for each
	/// quantity all the units stored if <alevel>  is equal to
	/// one.
	/// </summary>
	void Dump(int alevel);
	/// <summary>
	/// Dumps  for a     designated  physical       dimensions
	/// <adimensions> all the previously stored units.
	/// </summary>
	void Dump(Macad::Occt::Units_Dimensions^ adimensions);
}; // class Units_UnitsDictionary

//---------------------------------------------------------------------
//  Class  Units_Quantity
//---------------------------------------------------------------------
/// <summary>
/// This  class stores  in its  field all the possible
/// units of all the unit systems for a given physical
/// quantity. Each unit's  value  is  expressed in the
/// S.I. unit system.
/// </summary>
public ref class Units_Quantity sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Units_Quantity_h
public:
	Include_Units_Quantity_h
#endif

public:
	Units_Quantity(::Units_Quantity* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Units_Quantity(::Units_Quantity& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Units_Quantity* NativeInstance
	{
		::Units_Quantity* get()
		{
			return static_cast<::Units_Quantity*>(_NativeInstance);
		}
	}

	static Macad::Occt::Units_Quantity^ CreateDowncasted(::Units_Quantity* instance);

public:
	/// <summary>
	/// Creates  a new Quantity  object with <aname> which  is
	/// the name of the physical quantity, <adimensions> which
	/// is the physical dimensions, and <aunitssequence> which
	/// describes all the units known for this quantity.
	/// </summary>
	Units_Quantity(System::String^ aname, Macad::Occt::Units_Dimensions^ adimensions, Macad::Occt::Units_UnitsSequence^ aunitssequence);
	Units_Quantity(Macad::Occt::Units_Quantity^ parameter1);
	/// <summary>
	/// Returns in a AsciiString from TCollection the name of the quantity.
	/// </summary>
	Macad::Occt::TCollection_AsciiString^ Name();
	/// <summary>
	/// Returns the physical dimensions of the quantity.
	/// </summary>
	Macad::Occt::Units_Dimensions^ Dimensions();
	/// <summary>
	/// Returns <theunitssequence>, which  is the  sequence of
	/// all the units stored for this physical quantity.
	/// </summary>
	Macad::Occt::Units_UnitsSequence^ Sequence();
	/// <summary>
	/// Returns True if the name of the Quantity <me> is equal
	/// to <astring>, False otherwise.
	/// </summary>
	bool IsEqual(System::String^ astring);
	/// <summary>
	/// Useful for debugging.
	/// </summary>
	void Dump(int ashift, int alevel);
}; // class Units_Quantity

//---------------------------------------------------------------------
//  Class  Units_Lexicon
//---------------------------------------------------------------------
/// <summary>
/// This class defines a lexicon useful to analyse and
/// recognize the  different key words  included  in a
/// sentence.  The lexicon is stored  in a sequence of
/// tokens.
/// </summary>
public ref class Units_Lexicon : public Macad::Occt::Standard_Transient
{

#ifdef Include_Units_Lexicon_h
public:
	Include_Units_Lexicon_h
#endif

protected:
	Units_Lexicon(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Units_Lexicon(::Units_Lexicon* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Units_Lexicon(::Units_Lexicon& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Units_Lexicon* NativeInstance
	{
		::Units_Lexicon* get()
		{
			return static_cast<::Units_Lexicon*>(_NativeInstance);
		}
	}

	static Macad::Occt::Units_Lexicon^ CreateDowncasted(::Units_Lexicon* instance);

public:
	/// <summary>
	/// Creates an empty instance of Lexicon.
	/// </summary>
	Units_Lexicon();
	Units_Lexicon(Macad::Occt::Units_Lexicon^ parameter1);
	/// <summary>
	/// Reads the file <afilename> to create a sequence  of tokens
	/// stored in <thesequenceoftokens>.
	/// </summary>
	void Creates();
	/// <summary>
	/// Returns the first item of the sequence of tokens.
	/// </summary>
	Macad::Occt::Units_TokensSequence^ Sequence();
	/// <summary>
	/// Adds to the lexicon a new token with <aword>, <amean>,
	/// <avalue>  as  arguments.  If there is  already a token
	/// with   the  field  <theword>  equal    to <aword>, the
	/// existing token is updated.
	/// </summary>
	void AddToken(System::String^ aword, System::String^ amean, double avalue);
	/// <summary>
	/// Useful for debugging.
	/// </summary>
	void Dump();
}; // class Units_Lexicon

//---------------------------------------------------------------------
//  Class  Units_Dimensions
//---------------------------------------------------------------------
/// <summary>
/// This class includes all  the methods to create and
/// manipulate    the   dimensions  of the    physical
/// quantities.
/// </summary>
public ref class Units_Dimensions sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Units_Dimensions_h
public:
	Include_Units_Dimensions_h
#endif

public:
	Units_Dimensions(::Units_Dimensions* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Units_Dimensions(::Units_Dimensions& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Units_Dimensions* NativeInstance
	{
		::Units_Dimensions* get()
		{
			return static_cast<::Units_Dimensions*>(_NativeInstance);
		}
	}

	static Macad::Occt::Units_Dimensions^ CreateDowncasted(::Units_Dimensions* instance);

public:
	/// <summary>
	/// Returns  a  Dimensions  object  which  represents  the
	/// dimension  of  a  physical  quantity.    Each  of  the
	/// <amass>,  <alength>,   <atime>,   <anelectriccurrent>,
	/// <athermodynamictemperature>,    <anamountofsubstance>,
	/// <aluminousintensity>, <aplaneangle>, <asolidangle> are
	/// the powers for  the 7  fundamental  units of  physical
	/// quantity and  the 2  secondary  fundamental  units  of
	/// physical quantity.
	/// </summary>
	Units_Dimensions(double amass, double alength, double atime, double anelectriccurrent, double athermodynamictemperature, double anamountofsubstance, double aluminousintensity, double aplaneangle, double asolidangle);
	Units_Dimensions(Macad::Occt::Units_Dimensions^ parameter1);
	/// <summary>
	/// Returns the power of mass stored in the dimensions.
	/// </summary>
	double Mass();
	/// <summary>
	/// Returns the power of length stored in the dimensions.
	/// </summary>
	double Length();
	/// <summary>
	/// Returns the power of time stored in the dimensions.
	/// </summary>
	double Time();
	/// <summary>
	/// Returns the  power of  electrical  intensity (current)
	/// stored in the dimensions.
	/// </summary>
	double ElectricCurrent();
	/// <summary>
	/// Returns  the  power  of   temperature stored  in   the
	/// dimensions.
	/// </summary>
	double ThermodynamicTemperature();
	/// <summary>
	/// Returns  the power   of quantity   of  material (mole)
	/// stored in the dimensions.
	/// </summary>
	double AmountOfSubstance();
	/// <summary>
	/// Returns the  power of light   intensity stored  in the
	/// dimensions.
	/// </summary>
	double LuminousIntensity();
	/// <summary>
	/// Returns  the power   of plane   angle  stored  in  the
	/// dimensions.
	/// </summary>
	double PlaneAngle();
	/// <summary>
	/// Returns the   power   of  solid angle stored   in  the
	/// dimensions.
	/// </summary>
	double SolidAngle();
	/// <summary>
	/// Returns the quantity string of the dimension
	/// </summary>
	System::String^ Quantity();
	/// <summary>
	/// Creates and returns  a new Dimensions  object which is
	/// the   result   of the  multiplication    of  <me>  and
	/// <adimensions>.
	/// </summary>
	Macad::Occt::Units_Dimensions^ Multiply(Macad::Occt::Units_Dimensions^ adimensions);
	/// <summary>
	/// Creates and returns a new  Dimensions object which  is
	/// the result of the division of <me> by <adimensions>.
	/// </summary>
	Macad::Occt::Units_Dimensions^ Divide(Macad::Occt::Units_Dimensions^ adimensions);
	/// <summary>
	/// Creates  and returns a new  Dimensions object which is
	/// the result of the power of <me> and <anexponent>.
	/// </summary>
	Macad::Occt::Units_Dimensions^ Power(double anexponent);
	/// <summary>
	/// Returns true if  <me>  and <adimensions> have the same
	/// dimensions, false otherwise.
	/// </summary>
	bool IsEqual(Macad::Occt::Units_Dimensions^ adimensions);
	/// <summary>
	/// Returns false if <me> and  <adimensions> have the same
	/// dimensions, true otherwise.
	/// </summary>
	bool IsNotEqual(Macad::Occt::Units_Dimensions^ adimensions);
	/// <summary>
	/// Useful for degugging.
	/// </summary>
	void Dump(int ashift);
	static Macad::Occt::Units_Dimensions^ ALess();
	static Macad::Occt::Units_Dimensions^ AMass();
	static Macad::Occt::Units_Dimensions^ ALength();
	static Macad::Occt::Units_Dimensions^ ATime();
	static Macad::Occt::Units_Dimensions^ AElectricCurrent();
	static Macad::Occt::Units_Dimensions^ AThermodynamicTemperature();
	static Macad::Occt::Units_Dimensions^ AAmountOfSubstance();
	static Macad::Occt::Units_Dimensions^ ALuminousIntensity();
	static Macad::Occt::Units_Dimensions^ APlaneAngle();
	/// <summary>
	/// Returns the basic dimensions.
	/// </summary>
	static Macad::Occt::Units_Dimensions^ ASolidAngle();
}; // class Units_Dimensions

//---------------------------------------------------------------------
//  Class  Units_Unit
//---------------------------------------------------------------------
/// <summary>
/// This class defines an elementary word contained in
/// a physical quantity.
/// </summary>
public ref class Units_Unit : public Macad::Occt::Standard_Transient
{

#ifdef Include_Units_Unit_h
public:
	Include_Units_Unit_h
#endif

protected:
	Units_Unit(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Units_Unit(::Units_Unit* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Units_Unit(::Units_Unit& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Units_Unit* NativeInstance
	{
		::Units_Unit* get()
		{
			return static_cast<::Units_Unit*>(_NativeInstance);
		}
	}

	static Macad::Occt::Units_Unit^ CreateDowncasted(::Units_Unit* instance);

public:
	/// <summary>
	/// Creates  and returns a  unit.  <aname> is  the name of
	/// the  unit, <asymbol> is the  usual abbreviation of the
	/// unit,  and  <avalue> is the  value in relation to  the
	/// International System of Units.
	/// </summary>
	Units_Unit(System::String^ aname, System::String^ asymbol, double avalue, Macad::Occt::Units_Quantity^ aquantity);
	/// <summary>
	/// Creates  and returns a  unit.  <aname> is  the name of
	/// the  unit, <asymbol> is the  usual abbreviation of the
	/// unit.
	/// </summary>
	Units_Unit(System::String^ aname, System::String^ asymbol);
	/// <summary>
	/// Creates  and returns a  unit.  <aname> is  the name of
	/// the  unit.
	/// </summary>
	Units_Unit(System::String^ aname);
	Units_Unit(Macad::Occt::Units_Unit^ parameter1);
	/// <summary>
	/// Returns the name of the unit <thename>
	/// </summary>
	Macad::Occt::TCollection_AsciiString^ Name();
	/// <summary>
	/// Adds a new symbol <asymbol> attached to <me>.
	/// </summary>
	void Symbol(System::String^ asymbol);
	/// <summary>
	/// Returns the  value in relation  with the International
	/// System of Units.
	/// </summary>
	double Value();
	/// <summary>
	/// Returns <thequantity> contained in <me>.
	/// </summary>
	Macad::Occt::Units_Quantity^ Quantity();
	/// <summary>
	/// Returns the sequence of symbols <thesymbolssequence>
	/// </summary>
	Macad::Occt::TColStd_HSequenceOfHAsciiString^ SymbolsSequence();
	/// <summary>
	/// Sets the value <avalue> to <me>.
	/// </summary>
	void Value(double avalue);
	/// <summary>
	/// Sets the physical Quantity <aquantity> to <me>.
	/// </summary>
	void Quantity(Macad::Occt::Units_Quantity^ aquantity);
	/// <summary>
	/// Starting with <me>, returns a new Token object.
	/// </summary>
	Macad::Occt::Units_Token^ Token();
	/// <summary>
	/// Compares all the symbols  linked  within <me> with the
	/// name of <atoken>,  and returns  True  if there is  one
	/// symbol equal to the name, False otherwise.
	/// </summary>
	bool IsEqual(System::String^ astring);
	/// <summary>
	/// Useful for debugging
	/// </summary>
	void Dump(int ashift, int alevel);
}; // class Units_Unit

//---------------------------------------------------------------------
//  Class  Units_ShiftedUnit
//---------------------------------------------------------------------
/// <summary>
/// This class is useful   to describe  units  with  a
/// shifted origin in relation to another unit. A well
/// known example  is the  Celsius degrees in relation
/// to Kelvin degrees. The shift of the Celsius origin
/// is 273.15 Kelvin degrees.
/// </summary>
public ref class Units_ShiftedUnit sealed : public Macad::Occt::Units_Unit
{

#ifdef Include_Units_ShiftedUnit_h
public:
	Include_Units_ShiftedUnit_h
#endif

public:
	Units_ShiftedUnit(::Units_ShiftedUnit* nativeInstance)
		: Macad::Occt::Units_Unit( nativeInstance )
	{}

	Units_ShiftedUnit(::Units_ShiftedUnit& nativeInstance)
		: Macad::Occt::Units_Unit( nativeInstance )
	{}

	property ::Units_ShiftedUnit* NativeInstance
	{
		::Units_ShiftedUnit* get()
		{
			return static_cast<::Units_ShiftedUnit*>(_NativeInstance);
		}
	}

	static Macad::Occt::Units_ShiftedUnit^ CreateDowncasted(::Units_ShiftedUnit* instance);

public:
	/// <summary>
	/// Creates  and  returns a  shifted unit.   <aname> is the
	/// name of the unit,  <asymbol> is the usual abbreviation
	/// of the unit, <avalue> is the  value in relation to the
	/// International System of Units, and <amove>  is the gap
	/// in relation to another unit.
	/// 
	/// For  example Celsius   degree   of temperature  is  an
	/// instance of ShiftedUnit  with <avalue> equal to 1. and
	/// <amove> equal to 273.15.
	/// </summary>
	Units_ShiftedUnit(System::String^ aname, System::String^ asymbol, double avalue, double amove, Macad::Occt::Units_Quantity^ aquantity);
	/// <summary>
	/// Creates  and returns a  unit.  <aname> is  the name of
	/// the  unit, <asymbol> is the  usual abbreviation of the
	/// unit.
	/// </summary>
	Units_ShiftedUnit(System::String^ aname, System::String^ asymbol);
	/// <summary>
	/// Creates  and returns a  unit.  <aname> is  the name of
	/// the  unit.
	/// </summary>
	Units_ShiftedUnit(System::String^ aname);
	Units_ShiftedUnit(Macad::Occt::Units_ShiftedUnit^ parameter1);
	/// <summary>
	/// Sets the field <themove> to <amove>
	/// </summary>
	void Move(double amove);
	/// <summary>
	/// Returns the shifted value <themove>.
	/// </summary>
	double Move();
	/// <summary>
	/// This redefined method returns a ShiftedToken object.
	/// </summary>
	Macad::Occt::Units_Token^ Token();
	void Dump(int ashift, int alevel);
}; // class Units_ShiftedUnit

//---------------------------------------------------------------------
//  Class  Units_Token
//---------------------------------------------------------------------
/// <summary>
/// This class defines an elementary word contained in
/// a Sentence object.
/// </summary>
public ref class Units_Token : public Macad::Occt::Standard_Transient
{

#ifdef Include_Units_Token_h
public:
	Include_Units_Token_h
#endif

protected:
	Units_Token(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Units_Token(::Units_Token* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Units_Token(::Units_Token& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Units_Token* NativeInstance
	{
		::Units_Token* get()
		{
			return static_cast<::Units_Token*>(_NativeInstance);
		}
	}

	static Macad::Occt::Units_Token^ CreateDowncasted(::Units_Token* instance);

public:
	/// <summary>
	/// Creates and returns a empty token.
	/// </summary>
	Units_Token();
	/// <summary>
	/// Creates  and returns  a token.   <aword>  is  a string
	/// containing the available word.
	/// </summary>
	Units_Token(System::String^ aword);
	/// <summary>
	/// Creates and returns a  token.  <atoken> is  copied  in
	/// the returned token.
	/// </summary>
	Units_Token(Macad::Occt::Units_Token^ atoken);
	/// <summary>
	/// Creates  and  returns a  token.   <aword> is  a string
	/// containing the  available word and  <amean>  gives the
	/// signification of the token.
	/// </summary>
	Units_Token(System::String^ aword, System::String^ amean);
	/// <summary>
	/// Creates   and  returns a  token.   <aword> is a string
	/// containing   the available  word,  <amean> gives   the
	/// signification of the token and <avalue> is the numeric
	/// value of the dimension.
	/// </summary>
	Units_Token(System::String^ aword, System::String^ amean, double avalue);
	/// <summary>
	/// Creates and returns  a  token.  <aword> is   a  string
	/// containing the   available   word, <amean>   gives the
	/// signification of  the  token, <avalue> is  the numeric
	/// value  of the dimension,  and <adimensions>   is   the
	/// dimension of the given word <aword>.
	/// </summary>
	Units_Token(System::String^ aword, System::String^ amean, double avalue, Macad::Occt::Units_Dimensions^ adimension);
	/// <summary>
	/// Creates and returns a  token, which is a ShiftedToken.
	/// </summary>
	Macad::Occt::Units_Token^ Creates();
	/// <summary>
	/// Returns the length of the word.
	/// </summary>
	int Length();
	/// <summary>
	/// Returns the string <theword>
	/// </summary>
	Macad::Occt::TCollection_AsciiString^ Word();
	/// <summary>
	/// Sets the field <theword> to <aword>.
	/// </summary>
	void Word(System::String^ aword);
	/// <summary>
	/// Returns the significance of the word  <theword>, which
	/// is in the field <themean>.
	/// </summary>
	Macad::Occt::TCollection_AsciiString^ Mean();
	/// <summary>
	/// Sets the field <themean> to <amean>.
	/// </summary>
	void Mean(System::String^ amean);
	/// <summary>
	/// Returns the value stored in the field <thevalue>.
	/// </summary>
	double Value();
	/// <summary>
	/// Sets the field <thevalue> to <avalue>.
	/// </summary>
	void Value(double avalue);
	/// <summary>
	/// Returns the dimensions of the token <thedimensions>.
	/// </summary>
	Macad::Occt::Units_Dimensions^ Dimensions();
	/// <summary>
	/// Sets the field <thedimensions> to <adimensions>.
	/// </summary>
	void Dimensions(Macad::Occt::Units_Dimensions^ adimensions);
	/// <summary>
	/// Updates     the  token  <me>    with  the   additional
	/// signification  <amean> by  concatenation   of the  two
	/// strings   <themean>    and   <amean>.   If    the  two
	/// significations are  the same  , an information message
	/// is written in the output device.
	/// </summary>
	void Update(System::String^ amean);
	Macad::Occt::Units_Token^ Add(int aninteger);
	/// <summary>
	/// Returns a  token which is  the addition  of  <me>  and
	/// another token <atoken>. The  addition  is  possible if
	/// and only if the dimensions are the same.
	/// </summary>
	Macad::Occt::Units_Token^ Add(Macad::Occt::Units_Token^ atoken);
	/// <summary>
	/// Returns a token  which is the  subtraction of <me> and
	/// another token <atoken>. The subtraction is possible if
	/// and only if the dimensions are the same.
	/// </summary>
	Macad::Occt::Units_Token^ Subtract(Macad::Occt::Units_Token^ atoken);
	/// <summary>
	/// Returns a  token  which  is the  product of   <me> and
	/// another token <atoken>.
	/// </summary>
	Macad::Occt::Units_Token^ Multiply(Macad::Occt::Units_Token^ atoken);
	/// <summary>
	/// This   virtual method is   called  by  the Measurement
	/// methods,  to  compute    the   measurement   during  a
	/// conversion.
	/// </summary>
	double Multiplied(double avalue);
	/// <summary>
	/// Returns a token which is the division of <me> by another
	/// token <atoken>.
	/// </summary>
	Macad::Occt::Units_Token^ Divide(Macad::Occt::Units_Token^ atoken);
	/// <summary>
	/// This  virtual  method  is  called by  the  Measurement
	/// methods,   to   compute   the measurement  during    a
	/// conversion.
	/// </summary>
	double Divided(double avalue);
	/// <summary>
	/// Returns a token which is <me> to the power  of another
	/// token <atoken>.  The computation  is possible  only if
	/// <atoken> is a dimensionless constant.
	/// </summary>
	Macad::Occt::Units_Token^ Power(Macad::Occt::Units_Token^ atoken);
	/// <summary>
	/// Returns a token which is <me> to the power  of <anexponent>.
	/// </summary>
	Macad::Occt::Units_Token^ Power(double anexponent);
	/// <summary>
	/// Returns true if  the  field <theword> and  the  string
	/// <astring> are the same, false otherwise.
	/// </summary>
	bool IsEqual(System::String^ astring);
	/// <summary>
	/// Returns true  if the  field  <theword> and  the string
	/// <theword> contained  in  the  token <atoken>  are  the
	/// same, false otherwise.
	/// </summary>
	bool IsEqual(Macad::Occt::Units_Token^ atoken);
	/// <summary>
	/// Returns false if  the field <theword>  and the  string
	/// <astring> are the same, true otherwise.
	/// </summary>
	bool IsNotEqual(System::String^ astring);
	/// <summary>
	/// Returns false if  the field <theword>  and the  string
	/// <theword> contained  in the  token  <atoken>  are  the
	/// same, true otherwise.
	/// </summary>
	bool IsNotEqual(Macad::Occt::Units_Token^ atoken);
	/// <summary>
	/// Returns   true  if the   field <theword>  is  strictly
	/// contained at  the beginning  of the string  <astring>,
	/// false otherwise.
	/// </summary>
	bool IsLessOrEqual(System::String^ astring);
	/// <summary>
	/// Returns false  if   the field   <theword> is  strictly
	/// contained at  the  beginning  of the string <astring>,
	/// true otherwise.
	/// </summary>
	bool IsGreater(System::String^ astring);
	/// <summary>
	/// Returns false  if   the field   <theword> is  strictly
	/// contained at  the  beginning  of the string <astring>,
	/// true otherwise.
	/// </summary>
	bool IsGreater(Macad::Occt::Units_Token^ atoken);
	/// <summary>
	/// Returns true  if  the string <astring>   is   strictly
	/// contained   at the  beginning  of  the field <theword>
	/// false otherwise.
	/// </summary>
	bool IsGreaterOrEqual(Macad::Occt::Units_Token^ atoken);
	/// <summary>
	/// Useful for debugging
	/// </summary>
	void Dump(int ashift, int alevel);
}; // class Units_Token

//---------------------------------------------------------------------
//  Class  Units_ShiftedToken
//---------------------------------------------------------------------
/// <summary>
/// The  ShiftedToken class  inherits   from Token and
/// describes tokens which have  a gap in  addition of
/// the  multiplicative factor.   This kind  of  token
/// allows  the  description of linear functions which
/// do not pass through the origin, of the form :
/// 
/// y = ax  +b
/// 
/// where <x> and  <y>  are the unknown variables, <a>
/// the mutiplicative factor, and <b> the gap relative
/// to the ordinate axis.
/// 
/// An example is the  translation between the  Celsius
/// and Fahrenheit degree of temperature.
/// </summary>
public ref class Units_ShiftedToken sealed : public Macad::Occt::Units_Token
{

#ifdef Include_Units_ShiftedToken_h
public:
	Include_Units_ShiftedToken_h
#endif

public:
	Units_ShiftedToken(::Units_ShiftedToken* nativeInstance)
		: Macad::Occt::Units_Token( nativeInstance )
	{}

	Units_ShiftedToken(::Units_ShiftedToken& nativeInstance)
		: Macad::Occt::Units_Token( nativeInstance )
	{}

	property ::Units_ShiftedToken* NativeInstance
	{
		::Units_ShiftedToken* get()
		{
			return static_cast<::Units_ShiftedToken*>(_NativeInstance);
		}
	}

	static Macad::Occt::Units_ShiftedToken^ CreateDowncasted(::Units_ShiftedToken* instance);

public:
	/// <summary>
	/// Creates and returns a  shifted   token.  <aword> is  a
	/// string containing the   available word, <amean>  gives
	/// the signification   of the   token,  <avalue> is   the
	/// numeric value  of the  dimension, <amove> is  the gap,
	/// and <adimensions> is  the dimension of the given  word
	/// <aword>.
	/// </summary>
	Units_ShiftedToken(System::String^ aword, System::String^ amean, double avalue, double amove, Macad::Occt::Units_Dimensions^ adimensions);
	Units_ShiftedToken(Macad::Occt::Units_ShiftedToken^ parameter1);
	/// <summary>
	/// Creates and returns a  token, which is a ShiftedToken.
	/// </summary>
	Macad::Occt::Units_Token^ Creates();
	/// <summary>
	/// Returns the gap <themove>
	/// </summary>
	double Move();
	/// <summary>
	/// This  virtual   method  is  called  by the Measurement
	/// methods,  to   compute  the   measurement    during  a
	/// conversion.
	/// </summary>
	double Multiplied(double avalue);
	/// <summary>
	/// This   virtual  method is  called  by  the Measurement
	/// methods,   to   compute   the   measurement   during a
	/// conversion.
	/// </summary>
	double Divided(double avalue);
	void Dump(int ashift, int alevel);
}; // class Units_ShiftedToken

//---------------------------------------------------------------------
//  Class  Units_UnitsSystem
//---------------------------------------------------------------------
/// <summary>
/// This class  allows  the  user  to  define his  own
/// system of units.
/// </summary>
public ref class Units_UnitsSystem sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Units_UnitsSystem_h
public:
	Include_Units_UnitsSystem_h
#endif

public:
	Units_UnitsSystem(::Units_UnitsSystem* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Units_UnitsSystem(::Units_UnitsSystem& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Units_UnitsSystem* NativeInstance
	{
		::Units_UnitsSystem* get()
		{
			return static_cast<::Units_UnitsSystem*>(_NativeInstance);
		}
	}

	static Macad::Occt::Units_UnitsSystem^ CreateDowncasted(::Units_UnitsSystem* instance);

public:
	/// <summary>
	/// Returns an instance of UnitsSystem initialized to the
	/// S.I. units system.
	/// </summary>
	Units_UnitsSystem();
	/// <summary>
	/// Returns an instance of UnitsSystem initialized to the
	/// S.I. units system upgraded by the base system units description
	/// file.
	/// Attempts to find the four following files:
	/// $CSF_`aName`Defaults/.aName
	/// $CSF_`aName`SiteDefaults/.aName
	/// $CSF_`aName`GroupDefaults/.aName
	/// $CSF_`aName`UserDefaults/.aName
	/// See : Resource_Manager for the description of this file.
	/// </summary>
	Units_UnitsSystem(System::String^ aName, bool Verbose);
	/// <summary>
	/// Returns an instance of UnitsSystem initialized to the
	/// S.I. units system upgraded by the base system units description
	/// file.
	/// Attempts to find the four following files:
	/// $CSF_`aName`Defaults/.aName
	/// $CSF_`aName`SiteDefaults/.aName
	/// $CSF_`aName`GroupDefaults/.aName
	/// $CSF_`aName`UserDefaults/.aName
	/// See : Resource_Manager for the description of this file.
	/// </summary>
	Units_UnitsSystem(System::String^ aName);
	Units_UnitsSystem(Macad::Occt::Units_UnitsSystem^ parameter1);
	/// <summary>
	/// Returns the sequence of refined quantities.
	/// </summary>
	Macad::Occt::Units_QuantitiesSequence^ QuantitiesSequence();
	/// <summary>
	/// Returns a sequence of integer in correspondence with
	/// the sequence of quantities, which indicates, for each
	/// redefined quantity, the index into the sequence of
	/// units, of the active unit.
	/// </summary>
	Macad::Occt::TColStd_HSequenceOfInteger^ ActiveUnitsSequence();
	/// <summary>
	/// Specifies for <aquantity> the unit <aunit> used.
	/// </summary>
	void Specify(System::String^ aquantity, System::String^ aunit);
	/// <summary>
	/// Removes for <aquantity> the unit <aunit> used.
	/// </summary>
	void Remove(System::String^ aquantity, System::String^ aunit);
	/// <summary>
	/// Specifies for <aquantity> the unit <aunit> used.
	/// </summary>
	void Activate(System::String^ aquantity, System::String^ aunit);
	/// <summary>
	/// Activates the first unit of all defined system quantities
	/// </summary>
	void Activates();
	/// <summary>
	/// Returns for <aquantity> the active unit.
	/// </summary>
	Macad::Occt::TCollection_AsciiString^ ActiveUnit(System::String^ aquantity);
	/// <summary>
	/// Converts a real value <avalue> from the unit <aunit>
	/// belonging to the physical dimensions <aquantity> to
	/// the corresponding unit of the user system.
	/// </summary>
	double ConvertValueToUserSystem(System::String^ aquantity, double avalue, System::String^ aunit);
	/// <summary>
	/// Converts the real value <avalue> from the S.I. system
	/// of units to the user system of units. <aquantity> is
	/// the physical dimensions of the measurement.
	/// </summary>
	double ConvertSIValueToUserSystem(System::String^ aquantity, double avalue);
	/// <summary>
	/// Converts the real value <avalue> from the user system
	/// of units to the S.I. system of units. <aquantity> is
	/// the physical dimensions of the measurement.
	/// </summary>
	double ConvertUserSystemValueToSI(System::String^ aquantity, double avalue);
	void Dump();
	/// <summary>
	/// Returns TRUE if no units has been defined in the system.
	/// </summary>
	bool IsEmpty();
}; // class Units_UnitsSystem

//---------------------------------------------------------------------
//  Class  Units_Explorer
//---------------------------------------------------------------------
/// <summary>
/// This class provides all the services to explore
/// UnitsSystem or UnitsDictionary.
/// </summary>
public ref class Units_Explorer sealed : public BaseClass<::Units_Explorer>
{

#ifdef Include_Units_Explorer_h
public:
	Include_Units_Explorer_h
#endif

public:
	Units_Explorer(::Units_Explorer* nativeInstance)
		: BaseClass<::Units_Explorer>( nativeInstance, true )
	{}

	Units_Explorer(::Units_Explorer& nativeInstance)
		: BaseClass<::Units_Explorer>( &nativeInstance, false )
	{}

	property ::Units_Explorer* NativeInstance
	{
		::Units_Explorer* get()
		{
			return static_cast<::Units_Explorer*>(_NativeInstance);
		}
	}

public:
	/// <summary>
	/// Empty constructor of the class.
	/// </summary>
	Units_Explorer();
	/// <summary>
	/// Creates a new instance of the class, initialized with
	/// the UnitsSystem <aunitssystem>.
	/// </summary>
	Units_Explorer(Macad::Occt::Units_UnitsSystem^ aunitssystem);
	/// <summary>
	/// Creates a new instance of the class, initialized with
	/// the UnitsDictionary <aunitsdictionary>.
	/// </summary>
	Units_Explorer(Macad::Occt::Units_UnitsDictionary^ aunitsdictionary);
	/// <summary>
	/// Creates a new instance of the class, initialized with
	/// the UnitsSystem <aunitssystem> and positioned at the
	/// quantity <aquantity>.
	/// </summary>
	Units_Explorer(Macad::Occt::Units_UnitsSystem^ aunitssystem, System::String^ aquantity);
	/// <summary>
	/// Creates a  new instance of the class,  initialized with
	/// the  UnitsDictionary <aunitsdictionary> and positioned
	/// at the quantity <aquantity>.
	/// </summary>
	Units_Explorer(Macad::Occt::Units_UnitsDictionary^ aunitsdictionary, System::String^ aquantity);
	Units_Explorer(Macad::Occt::Units_Explorer^ parameter1);
	/// <summary>
	/// Initializes  the  instance  of  the  class  with  the
	/// UnitsSystem <aunitssystem>.
	/// </summary>
	void Init(Macad::Occt::Units_UnitsSystem^ aunitssystem);
	/// <summary>
	/// Initializes  the  instance  of  the  class  with  the
	/// UnitsDictionary <aunitsdictionary>.
	/// </summary>
	void Init(Macad::Occt::Units_UnitsDictionary^ aunitsdictionary);
	/// <summary>
	/// Initializes  the  instance  of  the   class  with  the
	/// UnitsSystem  <aunitssystem>  and   positioned  at  the
	/// quantity <aquantity>.
	/// </summary>
	void Init(Macad::Occt::Units_UnitsSystem^ aunitssystem, System::String^ aquantity);
	/// <summary>
	/// Initializes  the  instance   of  the  class  with  the
	/// UnitsDictionary  <aunitsdictionary> and positioned  at
	/// the quantity <aquantity>.
	/// </summary>
	void Init(Macad::Occt::Units_UnitsDictionary^ aunitsdictionary, System::String^ aquantity);
	/// <summary>
	/// Returns True if there is another Quantity to explore,
	/// False otherwise.
	/// </summary>
	bool MoreQuantity();
	/// <summary>
	/// Sets the next Quantity current.
	/// </summary>
	void NextQuantity();
	/// <summary>
	/// Returns the name of the current Quantity.
	/// </summary>
	Macad::Occt::TCollection_AsciiString^ Quantity();
	/// <summary>
	/// Returns True if there is another Unit to explore,
	/// False otherwise.
	/// </summary>
	bool MoreUnit();
	/// <summary>
	/// Sets the next Unit current.
	/// </summary>
	void NextUnit();
	/// <summary>
	/// Returns the name of the current unit.
	/// </summary>
	Macad::Occt::TCollection_AsciiString^ Unit();
	/// <summary>
	/// If the  units system  to  explore  is  a user  system,
	/// returns True  if  the  current unit  is  active, False
	/// otherwise.
	/// 
	/// If   the   units  system  to  explore  is   the  units
	/// dictionary,  returns True if the  current unit is  the
	/// S.I. unit.
	/// </summary>
	bool IsActive();
}; // class Units_Explorer

//---------------------------------------------------------------------
//  Class  Units_Sentence
//---------------------------------------------------------------------
/// <summary>
/// This class describes all the methods to create and
/// compute an expression contained in a string.
/// </summary>
public ref class Units_Sentence : public BaseClass<::Units_Sentence>
{

#ifdef Include_Units_Sentence_h
public:
	Include_Units_Sentence_h
#endif

protected:
	Units_Sentence(InitMode init)
		: BaseClass<::Units_Sentence>( init )
	{}

public:
	Units_Sentence(::Units_Sentence* nativeInstance)
		: BaseClass<::Units_Sentence>( nativeInstance, true )
	{}

	Units_Sentence(::Units_Sentence& nativeInstance)
		: BaseClass<::Units_Sentence>( &nativeInstance, false )
	{}

	property ::Units_Sentence* NativeInstance
	{
		::Units_Sentence* get()
		{
			return static_cast<::Units_Sentence*>(_NativeInstance);
		}
	}

public:
	/// <summary>
	/// Creates and  returns  a   Sentence, by  analyzing  the
	/// string <astring> with the lexicon <alexicon>.
	/// </summary>
	Units_Sentence(Macad::Occt::Units_Lexicon^ alexicon, System::String^ astring);
	Units_Sentence(Macad::Occt::Units_Sentence^ parameter1);
	/// <summary>
	/// For each constant encountered, sets the value.
	/// </summary>
	void SetConstants();
	/// <summary>
	/// Returns <thesequenceoftokens>.
	/// </summary>
	Macad::Occt::Units_TokensSequence^ Sequence();
	/// <summary>
	/// Sets the field <thesequenceoftokens> to <asequenceoftokens>.
	/// </summary>
	void Sequence(Macad::Occt::Units_TokensSequence^ asequenceoftokens);
	/// <summary>
	/// Computes and  returns in a   token the result  of  the
	/// expression.
	/// </summary>
	Macad::Occt::Units_Token^ Evaluate();
	/// <summary>
	/// Return True if number of created tokens > 0
	/// (i.e creation of sentence is successful)
	/// </summary>
	bool IsDone();
	/// <summary>
	/// Useful for debugging.
	/// </summary>
	void Dump();
}; // class Units_Sentence

//---------------------------------------------------------------------
//  Class  Units_MathSentence
//---------------------------------------------------------------------
/// <summary>
/// This class  defines all the methods to  create and
/// compute an algebraic formula.
/// </summary>
public ref class Units_MathSentence sealed : public Macad::Occt::Units_Sentence
{

#ifdef Include_Units_MathSentence_h
public:
	Include_Units_MathSentence_h
#endif

public:
	Units_MathSentence(::Units_MathSentence* nativeInstance)
		: Macad::Occt::Units_Sentence( nativeInstance )
	{}

	Units_MathSentence(::Units_MathSentence& nativeInstance)
		: Macad::Occt::Units_Sentence( nativeInstance )
	{}

	property ::Units_MathSentence* NativeInstance
	{
		::Units_MathSentence* get()
		{
			return static_cast<::Units_MathSentence*>(_NativeInstance);
		}
	}

public:
	/// <summary>
	/// Creates and returns a  MathSentence object. The string
	/// <astring>  describes  an algebraic  formula in natural
	/// language.
	/// </summary>
	Units_MathSentence(System::String^ astring);
	Units_MathSentence(Macad::Occt::Units_MathSentence^ parameter1);
}; // class Units_MathSentence

//---------------------------------------------------------------------
//  Class  Units_UnitSentence
//---------------------------------------------------------------------
/// <summary>
/// This   class describes   all    the  facilities to
/// manipulate and compute units contained in a string
/// expression.
/// </summary>
public ref class Units_UnitSentence sealed : public Macad::Occt::Units_Sentence
{

#ifdef Include_Units_UnitSentence_h
public:
	Include_Units_UnitSentence_h
#endif

public:
	Units_UnitSentence(::Units_UnitSentence* nativeInstance)
		: Macad::Occt::Units_Sentence( nativeInstance )
	{}

	Units_UnitSentence(::Units_UnitSentence& nativeInstance)
		: Macad::Occt::Units_Sentence( nativeInstance )
	{}

	property ::Units_UnitSentence* NativeInstance
	{
		::Units_UnitSentence* get()
		{
			return static_cast<::Units_UnitSentence*>(_NativeInstance);
		}
	}

public:
	/// <summary>
	/// Creates   and   returns a   UnitSentence.   The string
	/// <astring> describes in natural  language the  unit  or
	/// the composed unit to be analysed.
	/// </summary>
	Units_UnitSentence(System::String^ astring);
	/// <summary>
	/// Creates  and returns    a  UnitSentence.  The   string
	/// <astring> describes in natural language the unit to be
	/// analysed.   The    sequence     of physical quantities
	/// <asequenceofquantities>   describes    the   available
	/// dictionary of units you want to use.
	/// </summary>
	Units_UnitSentence(System::String^ astring, Macad::Occt::Units_QuantitiesSequence^ aquantitiessequence);
	Units_UnitSentence(Macad::Occt::Units_UnitSentence^ parameter1);
	/// <summary>
	/// Analyzes   the sequence  of   tokens  created  by  the
	/// constructor to  find  the true significance   of  each
	/// token.
	/// </summary>
	void Analyse();
	/// <summary>
	/// For each token which  represents a unit, finds  in the
	/// sequence    of    physical   quantities      all   the
	/// characteristics of the unit found.
	/// </summary>
	void SetUnits(Macad::Occt::Units_QuantitiesSequence^ aquantitiessequence);
}; // class Units_UnitSentence

//---------------------------------------------------------------------
//  Class  Units_UnitsLexicon
//---------------------------------------------------------------------
/// <summary>
/// This class defines a lexicon useful to analyse and
/// recognize the different key  words  included  in a
/// sentence. The  lexicon is stored  in a sequence of
/// tokens.
/// </summary>
public ref class Units_UnitsLexicon sealed : public Macad::Occt::Units_Lexicon
{

#ifdef Include_Units_UnitsLexicon_h
public:
	Include_Units_UnitsLexicon_h
#endif

public:
	Units_UnitsLexicon(::Units_UnitsLexicon* nativeInstance)
		: Macad::Occt::Units_Lexicon( nativeInstance )
	{}

	Units_UnitsLexicon(::Units_UnitsLexicon& nativeInstance)
		: Macad::Occt::Units_Lexicon( nativeInstance )
	{}

	property ::Units_UnitsLexicon* NativeInstance
	{
		::Units_UnitsLexicon* get()
		{
			return static_cast<::Units_UnitsLexicon*>(_NativeInstance);
		}
	}

	static Macad::Occt::Units_UnitsLexicon^ CreateDowncasted(::Units_UnitsLexicon* instance);

public:
	/// <summary>
	/// Returns an empty instance of UnitsLexicon
	/// </summary>
	Units_UnitsLexicon();
	Units_UnitsLexicon(Macad::Occt::Units_UnitsLexicon^ parameter1);
	/// <summary>
	/// Reads  the files  <afilename1>  and  <afilename2>   to
	/// create     a   sequence     of    tokens   stored   in
	/// <thesequenceoftokens>.
	/// </summary>
	void Creates(bool amode);
	/// <summary>
	/// Reads  the files  <afilename1>  and  <afilename2>   to
	/// create     a   sequence     of    tokens   stored   in
	/// <thesequenceoftokens>.
	/// </summary>
	void Creates();
	/// <summary>
	/// Useful for debugging.
	/// </summary>
	void Dump();
}; // class Units_UnitsLexicon

//---------------------------------------------------------------------
//  Class  Units_Measurement
//---------------------------------------------------------------------
/// <summary>
/// This class  defines  a measurement which is the
/// association of a real value and a unit.
/// </summary>
public ref class Units_Measurement sealed : public BaseClass<::Units_Measurement>
{

#ifdef Include_Units_Measurement_h
public:
	Include_Units_Measurement_h
#endif

public:
	Units_Measurement(::Units_Measurement* nativeInstance)
		: BaseClass<::Units_Measurement>( nativeInstance, true )
	{}

	Units_Measurement(::Units_Measurement& nativeInstance)
		: BaseClass<::Units_Measurement>( &nativeInstance, false )
	{}

	property ::Units_Measurement* NativeInstance
	{
		::Units_Measurement* get()
		{
			return static_cast<::Units_Measurement*>(_NativeInstance);
		}
	}

public:
	/// <summary>
	/// It is the empty constructor of the class.
	/// </summary>
	Units_Measurement();
	/// <summary>
	/// Returns an instance  of this class.   <avalue> defines
	/// the measurement, and <atoken>  the token which defines
	/// the unit used.
	/// </summary>
	Units_Measurement(double avalue, Macad::Occt::Units_Token^ atoken);
	/// <summary>
	/// Returns an  instance of this  class.  <avalue> defines
	/// the  measurement, and <aunit> the   unit used,
	/// described in natural language.
	/// </summary>
	Units_Measurement(double avalue, System::String^ aunit);
	Units_Measurement(Macad::Occt::Units_Measurement^ parameter1);
	/// <summary>
	/// Converts (if   possible)  the  measurement   object into
	/// another   unit.      <aunit>   must  have    the  same
	/// dimensionality as  the  unit  contained in   the token
	/// <thetoken>.
	/// </summary>
	void Convert(System::String^ aunit);
	/// <summary>
	/// Returns a Measurement object with the integer value of
	/// the measurement contained in <me>.
	/// </summary>
	Macad::Occt::Units_Measurement^ Integer();
	/// <summary>
	/// Returns a Measurement object with the fractional value
	/// of the measurement contained in <me>.
	/// </summary>
	Macad::Occt::Units_Measurement^ Fractional();
	/// <summary>
	/// Returns the value of the measurement.
	/// </summary>
	double Measurement();
	/// <summary>
	/// Returns the token contained in <me>.
	/// </summary>
	Macad::Occt::Units_Token^ Token();
	/// <summary>
	/// Returns (if it is possible) a measurement which is the
	/// addition  of  <me>  and  <ameasurement>.  The   chosen
	/// returned unit is the unit of <me>.
	/// </summary>
	Macad::Occt::Units_Measurement^ Add(Macad::Occt::Units_Measurement^ ameasurement);
	/// <summary>
	/// Returns (if it is possible) a measurement which is the
	/// subtraction of  <me>  and <ameasurement>.   The chosen
	/// returned unit is the unit of <me>.
	/// </summary>
	Macad::Occt::Units_Measurement^ Subtract(Macad::Occt::Units_Measurement^ ameasurement);
	/// <summary>
	/// Returns  a measurement which  is the multiplication of
	/// <me> and <ameasurement>.
	/// </summary>
	Macad::Occt::Units_Measurement^ Multiply(Macad::Occt::Units_Measurement^ ameasurement);
	/// <summary>
	/// Returns  a measurement which  is the multiplication of
	/// <me> with the value  <avalue>.
	/// </summary>
	Macad::Occt::Units_Measurement^ Multiply(double avalue);
	/// <summary>
	/// Returns a measurement which  is the division of  <me> by
	/// <ameasurement>.
	/// </summary>
	Macad::Occt::Units_Measurement^ Divide(Macad::Occt::Units_Measurement^ ameasurement);
	/// <summary>
	/// Returns  a measurement which  is the division of <me> by
	/// the constant <avalue>.
	/// </summary>
	Macad::Occt::Units_Measurement^ Divide(double avalue);
	/// <summary>
	/// Returns   a    measurement  which   is <me>    powered
	/// <anexponent>.
	/// </summary>
	Macad::Occt::Units_Measurement^ Power(double anexponent);
	bool HasToken();
	/// <summary>
	/// Useful for debugging.
	/// </summary>
	void Dump();
}; // class Units_Measurement

//---------------------------------------------------------------------
//  Class  Units
//---------------------------------------------------------------------
/// <summary>
/// This  package provides all the  facilities  to create
/// and question a dictionary of  units,  and also  to
/// manipulate measurements which are real values with
/// units.
/// </summary>
public ref class Units sealed : public BaseClass<::Units>
{

#ifdef Include_Units_h
public:
	Include_Units_h
#endif

public:
	Units(::Units* nativeInstance)
		: BaseClass<::Units>( nativeInstance, true )
	{}

	Units(::Units& nativeInstance)
		: BaseClass<::Units>( &nativeInstance, false )
	{}

	property ::Units* NativeInstance
	{
		::Units* get()
		{
			return static_cast<::Units*>(_NativeInstance);
		}
	}

public:
	Units();
	Units(Macad::Occt::Units^ parameter1);
	/// <summary>
	/// Defines the location of the file containing all the
	/// information useful in creating the dictionary of all
	/// the units known to the system.
	/// </summary>
	static void UnitsFile(System::String^ afile);
	/// <summary>
	/// Defines the location of the file containing the lexicon
	/// useful in manipulating composite units.
	/// </summary>
	static void LexiconFile(System::String^ afile);
	/// <summary>
	/// Returns a unique instance of the dictionary of units.
	/// If <amode> is True, then it forces the recomputation of
	/// the dictionary of units.
	/// </summary>
	static Macad::Occt::Units_UnitsDictionary^ DictionaryOfUnits(bool amode);
	/// <summary>
	/// Returns a unique instance of the dictionary of units.
	/// If <amode> is True, then it forces the recomputation of
	/// the dictionary of units.
	/// </summary>
	static Macad::Occt::Units_UnitsDictionary^ DictionaryOfUnits();
	/// <summary>
	/// Returns a unique quantity instance corresponding to <aquantity>.
	/// </summary>
	static Macad::Occt::Units_Quantity^ Quantity(System::String^ aquantity);
	/// <summary>
	/// Returns the first quantity string founded from the unit <aUnit>.
	/// </summary>
	static System::String^ FirstQuantity(System::String^ aunit);
	/// <summary>
	/// Returns a unique instance of the Units_Lexicon.
	/// If <amode> is True, it forces the recomputation of
	/// the dictionary of units, and by consequence the
	/// completion of the Units_Lexicon.
	/// </summary>
	static Macad::Occt::Units_Lexicon^ LexiconUnits(bool amode);
	/// <summary>
	/// Returns a unique instance of the Units_Lexicon.
	/// If <amode> is True, it forces the recomputation of
	/// the dictionary of units, and by consequence the
	/// completion of the Units_Lexicon.
	/// </summary>
	static Macad::Occt::Units_Lexicon^ LexiconUnits();
	/// <summary>
	/// Return a unique instance of LexiconFormula.
	/// </summary>
	static Macad::Occt::Units_Lexicon^ LexiconFormula();
	/// <summary>
	/// Returns always the same instance of Dimensions.
	/// </summary>
	static Macad::Occt::Units_Dimensions^ NullDimensions();
	/// <summary>
	/// Converts <avalue> expressed in <afirstunit> into the <asecondunit>.
	/// </summary>
	static double Convert(double avalue, System::String^ afirstunit, System::String^ asecondunit);
	static double ToSI(double aData, System::String^ aUnit);
	static double ToSI(double aData, System::String^ aUnit, Macad::Occt::Units_Dimensions^ aDim);
	static double FromSI(double aData, System::String^ aUnit);
	static double FromSI(double aData, System::String^ aUnit, Macad::Occt::Units_Dimensions^ aDim);
	/// <summary>
	/// return the dimension associated to the Type
	/// </summary>
	static Macad::Occt::Units_Dimensions^ Dimensions(System::String^ aType);
}; // class Units

//---------------------------------------------------------------------
//  Class  Units_UnitsSequence
//---------------------------------------------------------------------
public ref class Units_UnitsSequence sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Units_UnitsSequence_h
public:
	Include_Units_UnitsSequence_h
#endif

public:
	Units_UnitsSequence(::Units_UnitsSequence* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Units_UnitsSequence(::Units_UnitsSequence& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Units_UnitsSequence* NativeInstance
	{
		::Units_UnitsSequence* get()
		{
			return static_cast<::Units_UnitsSequence*>(_NativeInstance);
		}
	}

	static Macad::Occt::Units_UnitsSequence^ CreateDowncasted(::Units_UnitsSequence* instance);

public:
	Units_UnitsSequence();
	Units_UnitsSequence(Macad::Occt::Units_UtsSequence^ theOther);
	Units_UnitsSequence(Macad::Occt::Units_UnitsSequence^ parameter1);
	Macad::Occt::Units_UtsSequence^ Sequence();
	void Append(Macad::Occt::Units_Unit^ theItem);
	void Append(Macad::Occt::Units_UtsSequence^ theSequence);
	Macad::Occt::Units_UtsSequence^ ChangeSequence();
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
	/* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<Units_Unit>> Assign(NCollection_Sequence<opencascade::handle<Units_Unit>> theOther, ) */
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<opencascade::handle<Units_Unit>> theSeq, ) */
	void Prepend(Macad::Occt::Units_Unit^ theItem);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<opencascade::handle<Units_Unit>> theSeq, ) */
	void InsertBefore(int theIndex, Macad::Occt::Units_Unit^ theItem);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Units_Unit>> theSeq, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Units_Unit theItem, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Units_Unit>> theSeq, ) */
	void InsertAfter(int theIndex, Macad::Occt::Units_Unit^ theItem);
	/* Method skipped due to unknown mapping: void Split(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Units_Unit>> theSeq, ) */
	Macad::Occt::Units_Unit^ First();
	Macad::Occt::Units_Unit^ ChangeFirst();
	Macad::Occt::Units_Unit^ Last();
	Macad::Occt::Units_Unit^ ChangeLast();
	Macad::Occt::Units_Unit^ Value(int theIndex);
	Macad::Occt::Units_Unit^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Units_Unit^ theItem);
}; // class Units_UnitsSequence

//---------------------------------------------------------------------
//  Class  Units_QuantitiesSequence
//---------------------------------------------------------------------
public ref class Units_QuantitiesSequence sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Units_QuantitiesSequence_h
public:
	Include_Units_QuantitiesSequence_h
#endif

public:
	Units_QuantitiesSequence(::Units_QuantitiesSequence* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Units_QuantitiesSequence(::Units_QuantitiesSequence& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Units_QuantitiesSequence* NativeInstance
	{
		::Units_QuantitiesSequence* get()
		{
			return static_cast<::Units_QuantitiesSequence*>(_NativeInstance);
		}
	}

	static Macad::Occt::Units_QuantitiesSequence^ CreateDowncasted(::Units_QuantitiesSequence* instance);

public:
	Units_QuantitiesSequence();
	Units_QuantitiesSequence(Macad::Occt::Units_QtsSequence^ theOther);
	Units_QuantitiesSequence(Macad::Occt::Units_QuantitiesSequence^ parameter1);
	Macad::Occt::Units_QtsSequence^ Sequence();
	void Append(Macad::Occt::Units_Quantity^ theItem);
	void Append(Macad::Occt::Units_QtsSequence^ theSequence);
	Macad::Occt::Units_QtsSequence^ ChangeSequence();
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
	/* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<Units_Quantity>> Assign(NCollection_Sequence<opencascade::handle<Units_Quantity>> theOther, ) */
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<opencascade::handle<Units_Quantity>> theSeq, ) */
	void Prepend(Macad::Occt::Units_Quantity^ theItem);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<opencascade::handle<Units_Quantity>> theSeq, ) */
	void InsertBefore(int theIndex, Macad::Occt::Units_Quantity^ theItem);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Units_Quantity>> theSeq, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Units_Quantity theItem, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Units_Quantity>> theSeq, ) */
	void InsertAfter(int theIndex, Macad::Occt::Units_Quantity^ theItem);
	/* Method skipped due to unknown mapping: void Split(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Units_Quantity>> theSeq, ) */
	Macad::Occt::Units_Quantity^ First();
	Macad::Occt::Units_Quantity^ ChangeFirst();
	Macad::Occt::Units_Quantity^ Last();
	Macad::Occt::Units_Quantity^ ChangeLast();
	Macad::Occt::Units_Quantity^ Value(int theIndex);
	Macad::Occt::Units_Quantity^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Units_Quantity^ theItem);
}; // class Units_QuantitiesSequence

//---------------------------------------------------------------------
//  Class  Units_TokensSequence
//---------------------------------------------------------------------
public ref class Units_TokensSequence sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Units_TokensSequence_h
public:
	Include_Units_TokensSequence_h
#endif

public:
	Units_TokensSequence(::Units_TokensSequence* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Units_TokensSequence(::Units_TokensSequence& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Units_TokensSequence* NativeInstance
	{
		::Units_TokensSequence* get()
		{
			return static_cast<::Units_TokensSequence*>(_NativeInstance);
		}
	}

	static Macad::Occt::Units_TokensSequence^ CreateDowncasted(::Units_TokensSequence* instance);

public:
	Units_TokensSequence();
	Units_TokensSequence(Macad::Occt::Units_TksSequence^ theOther);
	Units_TokensSequence(Macad::Occt::Units_TokensSequence^ parameter1);
	Macad::Occt::Units_TksSequence^ Sequence();
	void Append(Macad::Occt::Units_Token^ theItem);
	void Append(Macad::Occt::Units_TksSequence^ theSequence);
	Macad::Occt::Units_TksSequence^ ChangeSequence();
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
	/* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<Units_Token>> Assign(NCollection_Sequence<opencascade::handle<Units_Token>> theOther, ) */
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<opencascade::handle<Units_Token>> theSeq, ) */
	void Prepend(Macad::Occt::Units_Token^ theItem);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<opencascade::handle<Units_Token>> theSeq, ) */
	void InsertBefore(int theIndex, Macad::Occt::Units_Token^ theItem);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Units_Token>> theSeq, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Units_Token theItem, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Units_Token>> theSeq, ) */
	void InsertAfter(int theIndex, Macad::Occt::Units_Token^ theItem);
	/* Method skipped due to unknown mapping: void Split(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Units_Token>> theSeq, ) */
	Macad::Occt::Units_Token^ First();
	Macad::Occt::Units_Token^ ChangeFirst();
	Macad::Occt::Units_Token^ Last();
	Macad::Occt::Units_Token^ ChangeLast();
	Macad::Occt::Units_Token^ Value(int theIndex);
	Macad::Occt::Units_Token^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Units_Token^ theItem);
}; // class Units_TokensSequence

//---------------------------------------------------------------------
//  Class  Units_NoSuchType
//---------------------------------------------------------------------
public ref class Units_NoSuchType sealed : public Macad::Occt::Standard_NoSuchObject
{

#ifdef Include_Units_NoSuchType_h
public:
	Include_Units_NoSuchType_h
#endif

public:
	Units_NoSuchType(::Units_NoSuchType* nativeInstance)
		: Macad::Occt::Standard_NoSuchObject( nativeInstance )
	{}

	Units_NoSuchType(::Units_NoSuchType& nativeInstance)
		: Macad::Occt::Standard_NoSuchObject( nativeInstance )
	{}

	property ::Units_NoSuchType* NativeInstance
	{
		::Units_NoSuchType* get()
		{
			return static_cast<::Units_NoSuchType*>(_NativeInstance);
		}
	}

	static Macad::Occt::Units_NoSuchType^ CreateDowncasted(::Units_NoSuchType* instance);

public:
	Units_NoSuchType();
	Units_NoSuchType(System::String^ theMessage);
	Units_NoSuchType(System::String^ theMessage, System::String^ theStackTrace);
	Units_NoSuchType(Macad::Occt::Units_NoSuchType^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Units_NoSuchType^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Units_NoSuchType^ NewInstance();
	static Macad::Occt::Units_NoSuchType^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Units_NoSuchType

//---------------------------------------------------------------------
//  Class  Units_NoSuchUnit
//---------------------------------------------------------------------
public ref class Units_NoSuchUnit sealed : public Macad::Occt::Standard_NoSuchObject
{

#ifdef Include_Units_NoSuchUnit_h
public:
	Include_Units_NoSuchUnit_h
#endif

public:
	Units_NoSuchUnit(::Units_NoSuchUnit* nativeInstance)
		: Macad::Occt::Standard_NoSuchObject( nativeInstance )
	{}

	Units_NoSuchUnit(::Units_NoSuchUnit& nativeInstance)
		: Macad::Occt::Standard_NoSuchObject( nativeInstance )
	{}

	property ::Units_NoSuchUnit* NativeInstance
	{
		::Units_NoSuchUnit* get()
		{
			return static_cast<::Units_NoSuchUnit*>(_NativeInstance);
		}
	}

	static Macad::Occt::Units_NoSuchUnit^ CreateDowncasted(::Units_NoSuchUnit* instance);

public:
	Units_NoSuchUnit();
	Units_NoSuchUnit(System::String^ theMessage);
	Units_NoSuchUnit(System::String^ theMessage, System::String^ theStackTrace);
	Units_NoSuchUnit(Macad::Occt::Units_NoSuchUnit^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Units_NoSuchUnit^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Units_NoSuchUnit^ NewInstance();
	static Macad::Occt::Units_NoSuchUnit^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Units_NoSuchUnit

}; // namespace Occt
}; // namespace Macad
