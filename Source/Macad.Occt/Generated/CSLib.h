// Generated wrapper code for package CSLib

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  CSLib_DerivativeStatus
//---------------------------------------------------------------------
public enum class CSLib_DerivativeStatus
{
	CSLib_Done = 0,
	CSLib_D1uIsNull = 1,
	CSLib_D1vIsNull = 2,
	CSLib_D1IsNull = 3,
	CSLib_D1uD1vRatioIsNull = 4,
	CSLib_D1vD1uRatioIsNull = 5,
	CSLib_D1uIsParallelD1v = 6
}; // enum  class CSLib_DerivativeStatus

//---------------------------------------------------------------------
//  Enum  CSLib_NormalStatus
//---------------------------------------------------------------------
public enum class CSLib_NormalStatus
{
	CSLib_Singular = 0,
	CSLib_Defined = 1,
	CSLib_InfinityOfSolutions = 2,
	CSLib_D1NuIsNull = 3,
	CSLib_D1NvIsNull = 4,
	CSLib_D1NIsNull = 5,
	CSLib_D1NuNvRatioIsNull = 6,
	CSLib_D1NvNuRatioIsNull = 7,
	CSLib_D1NuIsParallelD1Nv = 8
}; // enum  class CSLib_NormalStatus

//---------------------------------------------------------------------
//  Class  CSLib
//---------------------------------------------------------------------
public ref class CSLib sealed : public BaseClass<::CSLib>
{

#ifdef Include_CSLib_h
public:
	Include_CSLib_h
#endif

public:
	CSLib(::CSLib* nativeInstance)
		: BaseClass<::CSLib>( nativeInstance, true )
	{}

	CSLib(::CSLib& nativeInstance)
		: BaseClass<::CSLib>( &nativeInstance, false )
	{}

	property ::CSLib* NativeInstance
	{
		::CSLib* get()
		{
			return static_cast<::CSLib*>(_NativeInstance);
		}
	}

public:
	CSLib();
	CSLib(Macad::Occt::CSLib^ parameter1);
	static void Normal(Macad::Occt::Vec D1U, Macad::Occt::Vec D1V, double SinTol, Macad::Occt::CSLib_DerivativeStatus% theStatus, Macad::Occt::Dir% Normal);
	static void Normal(Macad::Occt::Vec D1U, Macad::Occt::Vec D1V, Macad::Occt::Vec D2U, Macad::Occt::Vec D2V, Macad::Occt::Vec D2UV, double SinTol, bool% Done, Macad::Occt::CSLib_NormalStatus% theStatus, Macad::Occt::Dir% Normal);
	static void Normal(Macad::Occt::Vec D1U, Macad::Occt::Vec D1V, double MagTol, Macad::Occt::CSLib_NormalStatus% theStatus, Macad::Occt::Dir% Normal);
	static void Normal(int MaxOrder, Macad::Occt::TColgp_Array2OfVec^ DerNUV, double MagTol, double U, double V, double Umin, double Umax, double Vmin, double Vmax, Macad::Occt::CSLib_NormalStatus% theStatus, Macad::Occt::Dir% Normal, int% OrderU, int% OrderV);
	static Macad::Occt::Vec DNNUV(int Nu, int Nv, Macad::Occt::TColgp_Array2OfVec^ DerSurf);
	static Macad::Occt::Vec DNNUV(int Nu, int Nv, Macad::Occt::TColgp_Array2OfVec^ DerSurf1, Macad::Occt::TColgp_Array2OfVec^ DerSurf2);
	static Macad::Occt::Vec DNNormal(int Nu, int Nv, Macad::Occt::TColgp_Array2OfVec^ DerNUV, int Iduref, int Idvref);
	static Macad::Occt::Vec DNNormal(int Nu, int Nv, Macad::Occt::TColgp_Array2OfVec^ DerNUV, int Iduref);
	static Macad::Occt::Vec DNNormal(int Nu, int Nv, Macad::Occt::TColgp_Array2OfVec^ DerNUV);
}; // class CSLib

//---------------------------------------------------------------------
//  Class  CSLib_Class2d
//---------------------------------------------------------------------
public ref class CSLib_Class2d sealed : public BaseClass<::CSLib_Class2d>
{

#ifdef Include_CSLib_Class2d_h
public:
	Include_CSLib_Class2d_h
#endif

public:
	CSLib_Class2d(::CSLib_Class2d* nativeInstance)
		: BaseClass<::CSLib_Class2d>( nativeInstance, true )
	{}

	CSLib_Class2d(::CSLib_Class2d& nativeInstance)
		: BaseClass<::CSLib_Class2d>( &nativeInstance, false )
	{}

	property ::CSLib_Class2d* NativeInstance
	{
		::CSLib_Class2d* get()
		{
			return static_cast<::CSLib_Class2d*>(_NativeInstance);
		}
	}

public:
	CSLib_Class2d(Macad::Occt::TColgp_Array1OfPnt2d^ thePnts2d, double theTolU, double theTolV, double theUMin, double theVMin, double theUMax, double theVMax);
	CSLib_Class2d(Macad::Occt::TColgp_SequenceOfPnt2d^ thePnts2d, double theTolU, double theTolV, double theUMin, double theVMin, double theUMax, double theVMax);
	CSLib_Class2d(Macad::Occt::CSLib_Class2d^ parameter1);
	int SiDans(Macad::Occt::Pnt2d P);
	int SiDans_OnMode(Macad::Occt::Pnt2d P, double Tol);
	int InternalSiDans(double X, double Y);
	int InternalSiDansOuOn(double X, double Y);
}; // class CSLib_Class2d

}; // namespace Occt
}; // namespace Macad
