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
	Units_UnitsDictionary();
	Units_UnitsDictionary(Macad::Occt::Units_UnitsDictionary^ parameter1);
	void Creates();
	Macad::Occt::Units_QuantitiesSequence^ Sequence();
	Macad::Occt::TCollection_AsciiString^ ActiveUnit(System::String^ aquantity);
	void Dump(int alevel);
	void Dump(Macad::Occt::Units_Dimensions^ adimensions);
}; // class Units_UnitsDictionary

//---------------------------------------------------------------------
//  Class  Units_Quantity
//---------------------------------------------------------------------
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
	Units_Quantity(System::String^ aname, Macad::Occt::Units_Dimensions^ adimensions, Macad::Occt::Units_UnitsSequence^ aunitssequence);
	Units_Quantity(Macad::Occt::Units_Quantity^ parameter1);
	Macad::Occt::TCollection_AsciiString^ Name();
	Macad::Occt::Units_Dimensions^ Dimensions();
	Macad::Occt::Units_UnitsSequence^ Sequence();
	bool IsEqual(System::String^ astring);
	void Dump(int ashift, int alevel);
}; // class Units_Quantity

//---------------------------------------------------------------------
//  Class  Units_Lexicon
//---------------------------------------------------------------------
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
	Units_Lexicon();
	Units_Lexicon(Macad::Occt::Units_Lexicon^ parameter1);
	void Creates();
	Macad::Occt::Units_TokensSequence^ Sequence();
	void AddToken(System::String^ aword, System::String^ amean, double avalue);
	void Dump();
}; // class Units_Lexicon

//---------------------------------------------------------------------
//  Class  Units_Dimensions
//---------------------------------------------------------------------
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
	Units_Dimensions(double amass, double alength, double atime, double anelectriccurrent, double athermodynamictemperature, double anamountofsubstance, double aluminousintensity, double aplaneangle, double asolidangle);
	Units_Dimensions(Macad::Occt::Units_Dimensions^ parameter1);
	double Mass();
	double Length();
	double Time();
	double ElectricCurrent();
	double ThermodynamicTemperature();
	double AmountOfSubstance();
	double LuminousIntensity();
	double PlaneAngle();
	double SolidAngle();
	System::String^ Quantity();
	Macad::Occt::Units_Dimensions^ Multiply(Macad::Occt::Units_Dimensions^ adimensions);
	Macad::Occt::Units_Dimensions^ Divide(Macad::Occt::Units_Dimensions^ adimensions);
	Macad::Occt::Units_Dimensions^ Power(double anexponent);
	bool IsEqual(Macad::Occt::Units_Dimensions^ adimensions);
	bool IsNotEqual(Macad::Occt::Units_Dimensions^ adimensions);
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
	static Macad::Occt::Units_Dimensions^ ASolidAngle();
}; // class Units_Dimensions

//---------------------------------------------------------------------
//  Class  Units_Unit
//---------------------------------------------------------------------
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
	Units_Unit(System::String^ aname, System::String^ asymbol, double avalue, Macad::Occt::Units_Quantity^ aquantity);
	Units_Unit(System::String^ aname, System::String^ asymbol);
	Units_Unit(System::String^ aname);
	Units_Unit(Macad::Occt::Units_Unit^ parameter1);
	Macad::Occt::TCollection_AsciiString^ Name();
	void Symbol(System::String^ asymbol);
	double Value();
	Macad::Occt::Units_Quantity^ Quantity();
	Macad::Occt::TColStd_HSequenceOfHAsciiString^ SymbolsSequence();
	void Value(double avalue);
	void Quantity(Macad::Occt::Units_Quantity^ aquantity);
	Macad::Occt::Units_Token^ Token();
	bool IsEqual(System::String^ astring);
	void Dump(int ashift, int alevel);
}; // class Units_Unit

//---------------------------------------------------------------------
//  Class  Units_ShiftedUnit
//---------------------------------------------------------------------
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
	Units_ShiftedUnit(System::String^ aname, System::String^ asymbol, double avalue, double amove, Macad::Occt::Units_Quantity^ aquantity);
	Units_ShiftedUnit(System::String^ aname, System::String^ asymbol);
	Units_ShiftedUnit(System::String^ aname);
	Units_ShiftedUnit(Macad::Occt::Units_ShiftedUnit^ parameter1);
	void Move(double amove);
	double Move();
	Macad::Occt::Units_Token^ Token();
	void Dump(int ashift, int alevel);
}; // class Units_ShiftedUnit

//---------------------------------------------------------------------
//  Class  Units_Token
//---------------------------------------------------------------------
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
	Units_Token();
	Units_Token(System::String^ aword);
	Units_Token(Macad::Occt::Units_Token^ atoken);
	Units_Token(System::String^ aword, System::String^ amean);
	Units_Token(System::String^ aword, System::String^ amean, double avalue);
	Units_Token(System::String^ aword, System::String^ amean, double avalue, Macad::Occt::Units_Dimensions^ adimension);
	Macad::Occt::Units_Token^ Creates();
	int Length();
	Macad::Occt::TCollection_AsciiString^ Word();
	void Word(System::String^ aword);
	Macad::Occt::TCollection_AsciiString^ Mean();
	void Mean(System::String^ amean);
	double Value();
	void Value(double avalue);
	Macad::Occt::Units_Dimensions^ Dimensions();
	void Dimensions(Macad::Occt::Units_Dimensions^ adimensions);
	void Update(System::String^ amean);
	Macad::Occt::Units_Token^ Add(int aninteger);
	Macad::Occt::Units_Token^ Add(Macad::Occt::Units_Token^ atoken);
	Macad::Occt::Units_Token^ Subtract(Macad::Occt::Units_Token^ atoken);
	Macad::Occt::Units_Token^ Multiply(Macad::Occt::Units_Token^ atoken);
	double Multiplied(double avalue);
	Macad::Occt::Units_Token^ Divide(Macad::Occt::Units_Token^ atoken);
	double Divided(double avalue);
	Macad::Occt::Units_Token^ Power(Macad::Occt::Units_Token^ atoken);
	Macad::Occt::Units_Token^ Power(double anexponent);
	bool IsEqual(System::String^ astring);
	bool IsEqual(Macad::Occt::Units_Token^ atoken);
	bool IsNotEqual(System::String^ astring);
	bool IsNotEqual(Macad::Occt::Units_Token^ atoken);
	bool IsLessOrEqual(System::String^ astring);
	bool IsGreater(System::String^ astring);
	bool IsGreater(Macad::Occt::Units_Token^ atoken);
	bool IsGreaterOrEqual(Macad::Occt::Units_Token^ atoken);
	void Dump(int ashift, int alevel);
}; // class Units_Token

//---------------------------------------------------------------------
//  Class  Units_ShiftedToken
//---------------------------------------------------------------------
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
	Units_ShiftedToken(System::String^ aword, System::String^ amean, double avalue, double amove, Macad::Occt::Units_Dimensions^ adimensions);
	Units_ShiftedToken(Macad::Occt::Units_ShiftedToken^ parameter1);
	Macad::Occt::Units_Token^ Creates();
	double Move();
	double Multiplied(double avalue);
	double Divided(double avalue);
	void Dump(int ashift, int alevel);
}; // class Units_ShiftedToken

//---------------------------------------------------------------------
//  Class  Units_UnitsSystem
//---------------------------------------------------------------------
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
	Units_UnitsSystem();
	Units_UnitsSystem(System::String^ aName, bool Verbose);
	Units_UnitsSystem(System::String^ aName);
	Units_UnitsSystem(Macad::Occt::Units_UnitsSystem^ parameter1);
	Macad::Occt::Units_QuantitiesSequence^ QuantitiesSequence();
	Macad::Occt::TColStd_HSequenceOfInteger^ ActiveUnitsSequence();
	void Specify(System::String^ aquantity, System::String^ aunit);
	void Remove(System::String^ aquantity, System::String^ aunit);
	void Activate(System::String^ aquantity, System::String^ aunit);
	void Activates();
	Macad::Occt::TCollection_AsciiString^ ActiveUnit(System::String^ aquantity);
	double ConvertValueToUserSystem(System::String^ aquantity, double avalue, System::String^ aunit);
	double ConvertSIValueToUserSystem(System::String^ aquantity, double avalue);
	double ConvertUserSystemValueToSI(System::String^ aquantity, double avalue);
	void Dump();
	bool IsEmpty();
}; // class Units_UnitsSystem

//---------------------------------------------------------------------
//  Class  Units_Explorer
//---------------------------------------------------------------------
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
	Units_Explorer();
	Units_Explorer(Macad::Occt::Units_UnitsSystem^ aunitssystem);
	Units_Explorer(Macad::Occt::Units_UnitsDictionary^ aunitsdictionary);
	Units_Explorer(Macad::Occt::Units_UnitsSystem^ aunitssystem, System::String^ aquantity);
	Units_Explorer(Macad::Occt::Units_UnitsDictionary^ aunitsdictionary, System::String^ aquantity);
	Units_Explorer(Macad::Occt::Units_Explorer^ parameter1);
	void Init(Macad::Occt::Units_UnitsSystem^ aunitssystem);
	void Init(Macad::Occt::Units_UnitsDictionary^ aunitsdictionary);
	void Init(Macad::Occt::Units_UnitsSystem^ aunitssystem, System::String^ aquantity);
	void Init(Macad::Occt::Units_UnitsDictionary^ aunitsdictionary, System::String^ aquantity);
	bool MoreQuantity();
	void NextQuantity();
	Macad::Occt::TCollection_AsciiString^ Quantity();
	bool MoreUnit();
	void NextUnit();
	Macad::Occt::TCollection_AsciiString^ Unit();
	bool IsActive();
}; // class Units_Explorer

//---------------------------------------------------------------------
//  Class  Units_Sentence
//---------------------------------------------------------------------
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
	Units_Sentence(Macad::Occt::Units_Lexicon^ alexicon, System::String^ astring);
	Units_Sentence(Macad::Occt::Units_Sentence^ parameter1);
	void SetConstants();
	Macad::Occt::Units_TokensSequence^ Sequence();
	void Sequence(Macad::Occt::Units_TokensSequence^ asequenceoftokens);
	Macad::Occt::Units_Token^ Evaluate();
	bool IsDone();
	void Dump();
}; // class Units_Sentence

//---------------------------------------------------------------------
//  Class  Units_MathSentence
//---------------------------------------------------------------------
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
	Units_MathSentence(System::String^ astring);
	Units_MathSentence(Macad::Occt::Units_MathSentence^ parameter1);
}; // class Units_MathSentence

//---------------------------------------------------------------------
//  Class  Units_UnitSentence
//---------------------------------------------------------------------
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
	Units_UnitSentence(System::String^ astring);
	Units_UnitSentence(System::String^ astring, Macad::Occt::Units_QuantitiesSequence^ aquantitiessequence);
	Units_UnitSentence(Macad::Occt::Units_UnitSentence^ parameter1);
	void Analyse();
	void SetUnits(Macad::Occt::Units_QuantitiesSequence^ aquantitiessequence);
}; // class Units_UnitSentence

//---------------------------------------------------------------------
//  Class  Units_UnitsLexicon
//---------------------------------------------------------------------
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
	Units_UnitsLexicon();
	Units_UnitsLexicon(Macad::Occt::Units_UnitsLexicon^ parameter1);
	void Creates(bool amode);
	void Creates();
	void Dump();
}; // class Units_UnitsLexicon

//---------------------------------------------------------------------
//  Class  Units_Measurement
//---------------------------------------------------------------------
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
	Units_Measurement();
	Units_Measurement(double avalue, Macad::Occt::Units_Token^ atoken);
	Units_Measurement(double avalue, System::String^ aunit);
	Units_Measurement(Macad::Occt::Units_Measurement^ parameter1);
	void Convert(System::String^ aunit);
	Macad::Occt::Units_Measurement^ Integer();
	Macad::Occt::Units_Measurement^ Fractional();
	double Measurement();
	Macad::Occt::Units_Token^ Token();
	Macad::Occt::Units_Measurement^ Add(Macad::Occt::Units_Measurement^ ameasurement);
	Macad::Occt::Units_Measurement^ Subtract(Macad::Occt::Units_Measurement^ ameasurement);
	Macad::Occt::Units_Measurement^ Multiply(Macad::Occt::Units_Measurement^ ameasurement);
	Macad::Occt::Units_Measurement^ Multiply(double avalue);
	Macad::Occt::Units_Measurement^ Divide(Macad::Occt::Units_Measurement^ ameasurement);
	Macad::Occt::Units_Measurement^ Divide(double avalue);
	Macad::Occt::Units_Measurement^ Power(double anexponent);
	bool HasToken();
	void Dump();
}; // class Units_Measurement

//---------------------------------------------------------------------
//  Class  Units
//---------------------------------------------------------------------
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
	static void UnitsFile(System::String^ afile);
	static void LexiconFile(System::String^ afile);
	static Macad::Occt::Units_UnitsDictionary^ DictionaryOfUnits(bool amode);
	static Macad::Occt::Units_UnitsDictionary^ DictionaryOfUnits();
	static Macad::Occt::Units_Quantity^ Quantity(System::String^ aquantity);
	static System::String^ FirstQuantity(System::String^ aunit);
	static Macad::Occt::Units_Lexicon^ LexiconUnits(bool amode);
	static Macad::Occt::Units_Lexicon^ LexiconUnits();
	static Macad::Occt::Units_Lexicon^ LexiconFormula();
	static Macad::Occt::Units_Dimensions^ NullDimensions();
	static double Convert(double avalue, System::String^ afirstunit, System::String^ asecondunit);
	static double ToSI(double aData, System::String^ aUnit);
	static double ToSI(double aData, System::String^ aUnit, Macad::Occt::Units_Dimensions^ aDim);
	static double FromSI(double aData, System::String^ aUnit);
	static double FromSI(double aData, System::String^ aUnit, Macad::Occt::Units_Dimensions^ aDim);
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
	/* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<Units_Unit> > Assign(NCollection_Sequence<opencascade::handle<Units_Unit> > theOther, ) */
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<opencascade::handle<Units_Unit> > theSeq, ) */
	void Prepend(Macad::Occt::Units_Unit^ theItem);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<opencascade::handle<Units_Unit> > theSeq, ) */
	void InsertBefore(int theIndex, Macad::Occt::Units_Unit^ theItem);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Units_Unit> > theSeq, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Units_Unit theItem, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Units_Unit> > theSeq, ) */
	void InsertAfter(int theIndex, Macad::Occt::Units_Unit^ theItem);
	/* Method skipped due to unknown mapping: void Split(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Units_Unit> > theSeq, ) */
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
	/* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<Units_Quantity> > Assign(NCollection_Sequence<opencascade::handle<Units_Quantity> > theOther, ) */
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<opencascade::handle<Units_Quantity> > theSeq, ) */
	void Prepend(Macad::Occt::Units_Quantity^ theItem);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<opencascade::handle<Units_Quantity> > theSeq, ) */
	void InsertBefore(int theIndex, Macad::Occt::Units_Quantity^ theItem);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Units_Quantity> > theSeq, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Units_Quantity theItem, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Units_Quantity> > theSeq, ) */
	void InsertAfter(int theIndex, Macad::Occt::Units_Quantity^ theItem);
	/* Method skipped due to unknown mapping: void Split(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Units_Quantity> > theSeq, ) */
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
	/* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<Units_Token> > Assign(NCollection_Sequence<opencascade::handle<Units_Token> > theOther, ) */
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<opencascade::handle<Units_Token> > theSeq, ) */
	void Prepend(Macad::Occt::Units_Token^ theItem);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<opencascade::handle<Units_Token> > theSeq, ) */
	void InsertBefore(int theIndex, Macad::Occt::Units_Token^ theItem);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Units_Token> > theSeq, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Units_Token theItem, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Units_Token> > theSeq, ) */
	void InsertAfter(int theIndex, Macad::Occt::Units_Token^ theItem);
	/* Method skipped due to unknown mapping: void Split(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Units_Token> > theSeq, ) */
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
	Units_NoSuchType(Macad::Occt::Units_NoSuchType^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Units_NoSuchType^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Units_NoSuchType^ NewInstance();
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
	Units_NoSuchUnit(Macad::Occt::Units_NoSuchUnit^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Units_NoSuchUnit^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Units_NoSuchUnit^ NewInstance();
}; // class Units_NoSuchUnit

}; // namespace Occt
}; // namespace Macad
