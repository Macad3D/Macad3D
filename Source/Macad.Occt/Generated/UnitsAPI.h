// Generated wrapper code for package UnitsAPI

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  UnitsAPI_SystemUnits
//---------------------------------------------------------------------
public enum class UnitsAPI_SystemUnits
{
	UnitsAPI_DEFAULT = 0,
	UnitsAPI_SI = 1,
	UnitsAPI_MDTV = 2
}; // enum  class UnitsAPI_SystemUnits

//---------------------------------------------------------------------
//  Class  UnitsAPI
//---------------------------------------------------------------------
public ref class UnitsAPI sealed : public BaseClass<::UnitsAPI>
{

#ifdef Include_UnitsAPI_h
public:
	Include_UnitsAPI_h
#endif

public:
	UnitsAPI(::UnitsAPI* nativeInstance)
		: BaseClass<::UnitsAPI>( nativeInstance, true )
	{}

	UnitsAPI(::UnitsAPI& nativeInstance)
		: BaseClass<::UnitsAPI>( &nativeInstance, false )
	{}

	property ::UnitsAPI* NativeInstance
	{
		::UnitsAPI* get()
		{
			return static_cast<::UnitsAPI*>(_NativeInstance);
		}
	}

public:
	UnitsAPI();
	UnitsAPI(Macad::Occt::UnitsAPI^ parameter1);
	static double CurrentToLS(double aData, System::String^ aQuantity);
	static double CurrentToSI(double aData, System::String^ aQuantity);
	static double CurrentFromLS(double aData, System::String^ aQuantity);
	static double CurrentFromSI(double aData, System::String^ aQuantity);
	static double AnyToLS(double aData, System::String^ aUnit);
	static double AnyToLS(double aData, System::String^ aUnit, Macad::Occt::Units_Dimensions^ aDim);
	static double AnyToSI(double aData, System::String^ aUnit);
	static double AnyToSI(double aData, System::String^ aUnit, Macad::Occt::Units_Dimensions^ aDim);
	static double AnyFromLS(double aData, System::String^ aUnit);
	static double AnyFromSI(double aData, System::String^ aUnit);
	static double CurrentToAny(double aData, System::String^ aQuantity, System::String^ aUnit);
	static double CurrentFromAny(double aData, System::String^ aQuantity, System::String^ aUnit);
	static double AnyToAny(double aData, System::String^ aUnit1, System::String^ aUnit2);
	static double LSToSI(double aData, System::String^ aQuantity);
	static double SIToLS(double aData, System::String^ aQuantity);
	static void SetLocalSystem(Macad::Occt::UnitsAPI_SystemUnits aSystemUnit);
	static void SetLocalSystem();
	static Macad::Occt::UnitsAPI_SystemUnits LocalSystem();
	static void SetCurrentUnit(System::String^ aQuantity, System::String^ aUnit);
	static System::String^ CurrentUnit(System::String^ aQuantity);
	static void Save();
	static void Reload();
	static Macad::Occt::Units_Dimensions^ Dimensions(System::String^ aQuantity);
	static Macad::Occt::Units_Dimensions^ DimensionLess();
	static Macad::Occt::Units_Dimensions^ DimensionMass();
	static Macad::Occt::Units_Dimensions^ DimensionLength();
	static Macad::Occt::Units_Dimensions^ DimensionTime();
	static Macad::Occt::Units_Dimensions^ DimensionElectricCurrent();
	static Macad::Occt::Units_Dimensions^ DimensionThermodynamicTemperature();
	static Macad::Occt::Units_Dimensions^ DimensionAmountOfSubstance();
	static Macad::Occt::Units_Dimensions^ DimensionLuminousIntensity();
	static Macad::Occt::Units_Dimensions^ DimensionPlaneAngle();
	static Macad::Occt::Units_Dimensions^ DimensionSolidAngle();
	static bool Check(System::String^ aQuantity, System::String^ aUnit);
}; // class UnitsAPI

}; // namespace Occt
}; // namespace Macad
