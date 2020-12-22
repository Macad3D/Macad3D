// Generated wrapper code for package UnitsAPI

#include "OcctPCH.h"
#include "UnitsAPI.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "Units.h"
#include "UnitsAPI.h"


//---------------------------------------------------------------------
//  Class  UnitsAPI
//---------------------------------------------------------------------

Macad::Occt::UnitsAPI::UnitsAPI()
	: BaseClass<::UnitsAPI>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::UnitsAPI();
}

Macad::Occt::UnitsAPI::UnitsAPI(Macad::Occt::UnitsAPI^ parameter1)
	: BaseClass<::UnitsAPI>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::UnitsAPI(*(::UnitsAPI*)parameter1->NativeInstance);
}

double Macad::Occt::UnitsAPI::CurrentToLS(double aData, System::String^ aQuantity)
{
	const char* sz_aQuantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aQuantity);
	return ::UnitsAPI::CurrentToLS(aData, sz_aQuantity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aQuantity);
}

double Macad::Occt::UnitsAPI::CurrentToSI(double aData, System::String^ aQuantity)
{
	const char* sz_aQuantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aQuantity);
	return ::UnitsAPI::CurrentToSI(aData, sz_aQuantity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aQuantity);
}

double Macad::Occt::UnitsAPI::CurrentFromLS(double aData, System::String^ aQuantity)
{
	const char* sz_aQuantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aQuantity);
	return ::UnitsAPI::CurrentFromLS(aData, sz_aQuantity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aQuantity);
}

double Macad::Occt::UnitsAPI::CurrentFromSI(double aData, System::String^ aQuantity)
{
	const char* sz_aQuantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aQuantity);
	return ::UnitsAPI::CurrentFromSI(aData, sz_aQuantity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aQuantity);
}

double Macad::Occt::UnitsAPI::AnyToLS(double aData, System::String^ aUnit)
{
	const char* sz_aUnit = (char*)(void*)Marshal::StringToHGlobalAnsi(aUnit);
	return ::UnitsAPI::AnyToLS(aData, sz_aUnit);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aUnit);
}

double Macad::Occt::UnitsAPI::AnyToLS(double aData, System::String^ aUnit, Macad::Occt::Units_Dimensions^ aDim)
{
	const char* sz_aUnit = (char*)(void*)Marshal::StringToHGlobalAnsi(aUnit);
	Handle(::Units_Dimensions) h_aDim = aDim->NativeInstance;
	return ::UnitsAPI::AnyToLS(aData, sz_aUnit, h_aDim);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aUnit);
	aDim->NativeInstance = h_aDim.get();
}

double Macad::Occt::UnitsAPI::AnyToSI(double aData, System::String^ aUnit)
{
	const char* sz_aUnit = (char*)(void*)Marshal::StringToHGlobalAnsi(aUnit);
	return ::UnitsAPI::AnyToSI(aData, sz_aUnit);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aUnit);
}

double Macad::Occt::UnitsAPI::AnyToSI(double aData, System::String^ aUnit, Macad::Occt::Units_Dimensions^ aDim)
{
	const char* sz_aUnit = (char*)(void*)Marshal::StringToHGlobalAnsi(aUnit);
	Handle(::Units_Dimensions) h_aDim = aDim->NativeInstance;
	return ::UnitsAPI::AnyToSI(aData, sz_aUnit, h_aDim);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aUnit);
	aDim->NativeInstance = h_aDim.get();
}

double Macad::Occt::UnitsAPI::AnyFromLS(double aData, System::String^ aUnit)
{
	const char* sz_aUnit = (char*)(void*)Marshal::StringToHGlobalAnsi(aUnit);
	return ::UnitsAPI::AnyFromLS(aData, sz_aUnit);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aUnit);
}

double Macad::Occt::UnitsAPI::AnyFromSI(double aData, System::String^ aUnit)
{
	const char* sz_aUnit = (char*)(void*)Marshal::StringToHGlobalAnsi(aUnit);
	return ::UnitsAPI::AnyFromSI(aData, sz_aUnit);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aUnit);
}

double Macad::Occt::UnitsAPI::CurrentToAny(double aData, System::String^ aQuantity, System::String^ aUnit)
{
	const char* sz_aQuantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aQuantity);
	const char* sz_aUnit = (char*)(void*)Marshal::StringToHGlobalAnsi(aUnit);
	return ::UnitsAPI::CurrentToAny(aData, sz_aQuantity, sz_aUnit);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aQuantity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aUnit);
}

double Macad::Occt::UnitsAPI::CurrentFromAny(double aData, System::String^ aQuantity, System::String^ aUnit)
{
	const char* sz_aQuantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aQuantity);
	const char* sz_aUnit = (char*)(void*)Marshal::StringToHGlobalAnsi(aUnit);
	return ::UnitsAPI::CurrentFromAny(aData, sz_aQuantity, sz_aUnit);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aQuantity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aUnit);
}

double Macad::Occt::UnitsAPI::AnyToAny(double aData, System::String^ aUnit1, System::String^ aUnit2)
{
	const char* sz_aUnit1 = (char*)(void*)Marshal::StringToHGlobalAnsi(aUnit1);
	const char* sz_aUnit2 = (char*)(void*)Marshal::StringToHGlobalAnsi(aUnit2);
	return ::UnitsAPI::AnyToAny(aData, sz_aUnit1, sz_aUnit2);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aUnit1);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aUnit2);
}

double Macad::Occt::UnitsAPI::LSToSI(double aData, System::String^ aQuantity)
{
	const char* sz_aQuantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aQuantity);
	return ::UnitsAPI::LSToSI(aData, sz_aQuantity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aQuantity);
}

double Macad::Occt::UnitsAPI::SIToLS(double aData, System::String^ aQuantity)
{
	const char* sz_aQuantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aQuantity);
	return ::UnitsAPI::SIToLS(aData, sz_aQuantity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aQuantity);
}

void Macad::Occt::UnitsAPI::SetLocalSystem(Macad::Occt::UnitsAPI_SystemUnits aSystemUnit)
{
	::UnitsAPI::SetLocalSystem((::UnitsAPI_SystemUnits)aSystemUnit);
}

void Macad::Occt::UnitsAPI::SetLocalSystem()
{
	::UnitsAPI::SetLocalSystem(UnitsAPI_SI);
}

Macad::Occt::UnitsAPI_SystemUnits Macad::Occt::UnitsAPI::LocalSystem()
{
	return (Macad::Occt::UnitsAPI_SystemUnits)::UnitsAPI::LocalSystem();
}

void Macad::Occt::UnitsAPI::SetCurrentUnit(System::String^ aQuantity, System::String^ aUnit)
{
	const char* sz_aQuantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aQuantity);
	const char* sz_aUnit = (char*)(void*)Marshal::StringToHGlobalAnsi(aUnit);
	::UnitsAPI::SetCurrentUnit(sz_aQuantity, sz_aUnit);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aQuantity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aUnit);
}

System::String^ Macad::Occt::UnitsAPI::CurrentUnit(System::String^ aQuantity)
{
	const char* sz_aQuantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aQuantity);
	Standard_CString _result;
	_result = ::UnitsAPI::CurrentUnit(sz_aQuantity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aQuantity);
	return gcnew System::String(_result);
}

void Macad::Occt::UnitsAPI::Save()
{
	::UnitsAPI::Save();
}

void Macad::Occt::UnitsAPI::Reload()
{
	::UnitsAPI::Reload();
}

Macad::Occt::Units_Dimensions^ Macad::Occt::UnitsAPI::Dimensions(System::String^ aQuantity)
{
	const char* sz_aQuantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aQuantity);
	Handle(::Units_Dimensions) _result;
	_result = ::UnitsAPI::Dimensions(sz_aQuantity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aQuantity);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::UnitsAPI::DimensionLess()
{
	Handle(::Units_Dimensions) _result;
	_result = ::UnitsAPI::DimensionLess();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::UnitsAPI::DimensionMass()
{
	Handle(::Units_Dimensions) _result;
	_result = ::UnitsAPI::DimensionMass();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::UnitsAPI::DimensionLength()
{
	Handle(::Units_Dimensions) _result;
	_result = ::UnitsAPI::DimensionLength();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::UnitsAPI::DimensionTime()
{
	Handle(::Units_Dimensions) _result;
	_result = ::UnitsAPI::DimensionTime();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::UnitsAPI::DimensionElectricCurrent()
{
	Handle(::Units_Dimensions) _result;
	_result = ::UnitsAPI::DimensionElectricCurrent();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::UnitsAPI::DimensionThermodynamicTemperature()
{
	Handle(::Units_Dimensions) _result;
	_result = ::UnitsAPI::DimensionThermodynamicTemperature();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::UnitsAPI::DimensionAmountOfSubstance()
{
	Handle(::Units_Dimensions) _result;
	_result = ::UnitsAPI::DimensionAmountOfSubstance();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::UnitsAPI::DimensionLuminousIntensity()
{
	Handle(::Units_Dimensions) _result;
	_result = ::UnitsAPI::DimensionLuminousIntensity();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::UnitsAPI::DimensionPlaneAngle()
{
	Handle(::Units_Dimensions) _result;
	_result = ::UnitsAPI::DimensionPlaneAngle();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::UnitsAPI::DimensionSolidAngle()
{
	Handle(::Units_Dimensions) _result;
	_result = ::UnitsAPI::DimensionSolidAngle();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

bool Macad::Occt::UnitsAPI::Check(System::String^ aQuantity, System::String^ aUnit)
{
	const char* sz_aQuantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aQuantity);
	const char* sz_aUnit = (char*)(void*)Marshal::StringToHGlobalAnsi(aUnit);
	return ::UnitsAPI::Check(sz_aQuantity, sz_aUnit);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aQuantity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aUnit);
}



