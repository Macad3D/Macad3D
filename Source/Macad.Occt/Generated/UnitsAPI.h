// Generated wrapper code for package UnitsAPI

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  UnitsAPI_SystemUnits
//---------------------------------------------------------------------
/// <summary>
/// Identifies unit systems which may be defined as a
/// basis system in the user's session:
/// -   UnitsAPI_DEFAULT : default system (this is the SI system)
/// -   UnitsAPI_SI : the SI unit system
/// -   UnitsAPI_MDTV : the MDTV unit system; it
/// is equivalent to the SI unit system but the
/// length unit and all its derivatives use
/// millimeters instead of meters.
/// Use the function SetLocalSystem to set up one
/// of these unit systems as working environment.
/// </summary>
public enum class UnitsAPI_SystemUnits
{
	UnitsAPI_DEFAULT = 0,
	UnitsAPI_SI = 1,
	UnitsAPI_MDTV = 2
}; // enum  class UnitsAPI_SystemUnits

//---------------------------------------------------------------------
//  Class  UnitsAPI
//---------------------------------------------------------------------
/// <summary>
/// The UnitsAPI global functions are used to
/// convert a value from any unit into another unit.
/// Principles
/// Conversion is executed among three unit systems:
/// -   the SI System
/// -   the user's Local System
/// -   the user's Current System.
/// The SI System is the standard international unit
/// system. It is indicated by SI in the synopses of
/// the UnitsAPI functions.
/// The MDTV System corresponds to the SI
/// international standard but the length unit and all
/// its derivatives use millimeters instead of the meters.
/// Both systems are proposed by Open CASCADE;
/// the SI System is the standard option. By
/// selecting one of these two systems, the user
/// defines his Local System through the
/// SetLocalSystem function. The Local System is
/// indicated by LS in the synopses of the UnitsAPI functions.
/// The user's Local System units can be modified in
/// the working environment. The user defines his
/// Current System by modifying its units through
/// the SetCurrentUnit function. The Current
/// System is indicated by Current in the synopses
/// of the UnitsAPI functions.
/// </summary>
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
	/// <summary>
	/// Converts the current unit value to the local system units value.
	/// Example: CurrentToLS(1.,"LENGTH") returns 1000. if the current length unit
	/// is meter and LocalSystem is MDTV.
	/// </summary>
	static double CurrentToLS(double aData, System::String^ aQuantity);
	/// <summary>
	/// Converts the current unit value to the SI system units value.
	/// Example: CurrentToSI(1.,"LENGTH") returns 0.001 if current length unit
	/// is millimeter.
	/// </summary>
	static double CurrentToSI(double aData, System::String^ aQuantity);
	/// <summary>
	/// Converts the local system units value to the current unit value.
	/// Example: CurrentFromLS(1000.,"LENGTH") returns 1. if current length unit
	/// is meter and LocalSystem is MDTV.
	/// </summary>
	static double CurrentFromLS(double aData, System::String^ aQuantity);
	/// <summary>
	/// Converts the SI system units value to the current unit value.
	/// Example: CurrentFromSI(0.001,"LENGTH") returns 1 if current length unit
	/// is millimeter.
	/// </summary>
	static double CurrentFromSI(double aData, System::String^ aQuantity);
	/// <summary>
	/// Converts the local unit value to the local system units value.
	/// Example: AnyToLS(1.,"in.") returns 25.4 if the LocalSystem is MDTV.
	/// </summary>
	static double AnyToLS(double aData, System::String^ aUnit);
	/// <summary>
	/// Converts the local unit value to the local system units value.
	/// and gives the associated dimension of the unit
	/// </summary>
	static double AnyToLS(double aData, System::String^ aUnit, Macad::Occt::Units_Dimensions^ aDim);
	/// <summary>
	/// Converts the local unit value to the SI system units value.
	/// Example: AnyToSI(1.,"in.") returns 0.0254
	/// </summary>
	static double AnyToSI(double aData, System::String^ aUnit);
	/// <summary>
	/// Converts the local unit value to the SI system units value.
	/// and gives the associated dimension of the unit
	/// </summary>
	static double AnyToSI(double aData, System::String^ aUnit, Macad::Occt::Units_Dimensions^ aDim);
	/// <summary>
	/// Converts the local system units value to the local unit value.
	/// Example: AnyFromLS(25.4,"in.") returns 1. if the LocalSystem is MDTV.
	/// Note: aUnit is also used to identify the type of physical quantity to convert.
	/// </summary>
	static double AnyFromLS(double aData, System::String^ aUnit);
	/// <summary>
	/// Converts the SI system units value to the local unit value.
	/// Example: AnyFromSI(0.0254,"in.") returns 0.001
	/// Note: aUnit is also used to identify the type of physical quantity to convert.
	/// </summary>
	static double AnyFromSI(double aData, System::String^ aUnit);
	/// <summary>
	/// Converts the aData value expressed in the
	/// current unit for the working environment, as
	/// defined for the physical quantity aQuantity by the
	/// last call to the SetCurrentUnit function, into the unit aUnit.
	/// </summary>
	static double CurrentToAny(double aData, System::String^ aQuantity, System::String^ aUnit);
	/// <summary>
	/// Converts the aData value expressed in the unit
	/// aUnit, into the current unit for the working
	/// environment, as defined for the physical quantity
	/// aQuantity by the last call to the SetCurrentUnit function.
	/// </summary>
	static double CurrentFromAny(double aData, System::String^ aQuantity, System::String^ aUnit);
	/// <summary>
	/// Converts the local unit value to another local unit value.
	/// Example: AnyToAny(0.0254,"in.","millimeter") returns 1. ;
	/// </summary>
	static double AnyToAny(double aData, System::String^ aUnit1, System::String^ aUnit2);
	/// <summary>
	/// Converts the local system units value to the SI system unit value.
	/// Example: LSToSI(1.,"LENGTH") returns 0.001 if the local system
	/// length unit is millimeter.
	/// </summary>
	static double LSToSI(double aData, System::String^ aQuantity);
	/// <summary>
	/// Converts the SI system unit value to the local system units value.
	/// Example: SIToLS(1.,"LENGTH") returns 1000. if the local system
	/// length unit is millimeter.
	/// </summary>
	static double SIToLS(double aData, System::String^ aQuantity);
	/// <summary>
	/// Sets the local system units.
	/// Example: SetLocalSystem(UnitsAPI_MDTV)
	/// </summary>
	static void SetLocalSystem(Macad::Occt::UnitsAPI_SystemUnits aSystemUnit);
	/// <summary>
	/// Sets the local system units.
	/// Example: SetLocalSystem(UnitsAPI_MDTV)
	/// </summary>
	static void SetLocalSystem();
	/// <summary>
	/// Returns the current local system units.
	/// </summary>
	static Macad::Occt::UnitsAPI_SystemUnits LocalSystem();
	/// <summary>
	/// Sets the current unit dimension <aUnit> to the unit quantity <aQuantity>.
	/// Example: SetCurrentUnit("LENGTH","millimeter")
	/// </summary>
	static void SetCurrentUnit(System::String^ aQuantity, System::String^ aUnit);
	/// <summary>
	/// Returns the current unit dimension <aUnit> from the unit quantity <aQuantity>.
	/// </summary>
	static System::String^ CurrentUnit(System::String^ aQuantity);
	/// <summary>
	/// saves the units in the file .CurrentUnits of the directory pointed by the
	/// CSF_CurrentUnitsUserDefaults environment variable.
	/// </summary>
	static void Save();
	static void Reload();
	/// <summary>
	/// return the dimension associated to the quantity
	/// </summary>
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
	/// <summary>
	/// Returns the basic dimensions.
	/// </summary>
	static Macad::Occt::Units_Dimensions^ DimensionSolidAngle();
	/// <summary>
	/// Checks the coherence between the quantity <aQuantity>
	/// and the unit <aUnits> in the current system and
	/// returns FALSE when it's WRONG.
	/// </summary>
	static bool Check(System::String^ aQuantity, System::String^ aUnit);
}; // class UnitsAPI

}; // namespace Occt
}; // namespace Macad
