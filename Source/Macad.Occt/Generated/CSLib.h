// Generated wrapper code for package CSLib

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  CSLib_DerivativeStatus
//---------------------------------------------------------------------
/// <summary>
/// D1uIsNull : ||D1U|| <= Resolution
/// 
/// D1vIsNull : ||D1V|| <= Resolution
/// 
/// D1IsNull  : the first derivatives in the U and V parametric
/// directions have null length  :
/// ||D1U|| <= Resolution and ||D1V|| <= Resolution
/// 
/// D1uD1vRatioIsNull : the first derivative in the U direction has
/// null length by comparison with the derivative
/// in the V direction
/// ||D1U|| / ||D1V|| <= RealEpsilon
/// 
/// D1vD1uRatioIsNull : the first derivative in the V direction has
/// null length by comparison with the derivative
/// in the U direction
/// ||D1V|| / ||D1U|| <= RealEpsilon
/// 
/// D1uIsParallelD1v : the angle between the derivatives in the U and
/// V direction is null (tolerance criterion given
/// as input data)
/// </summary>
public enum class CSLib_DerivativeStatus
{
    Done = 0,
    D1uIsNull = 1,
    D1vIsNull = 2,
    D1IsNull = 3,
    D1uD1vRatioIsNull = 4,
    D1vD1uRatioIsNull = 5,
    D1uIsParallelD1v = 6
}; // enum  class CSLib_DerivativeStatus

//---------------------------------------------------------------------
//  Enum  CSLib_NormalStatus
//---------------------------------------------------------------------
/// <summary>
/// if N is the normal
/// 
/// InfinityOfSolutions : ||DN/du||>Resolution, ||DN/dv||>Resolution
/// 
/// D1NuIsNull          : ||DN/du|| <= Resolution
/// 
/// D1NvIsNull          : ||DN/dv|| <= Resolution
/// 
/// D1NIsNull           : ||DN/du||<=Resolution, ||DN/dv||<=Resolution
/// 
/// D1NuNvRatioIsNull   : ||D1Nu|| / ||D1Nv|| <= RealEpsilon
/// 
/// D1NvNuRatioIsNull   : ||D1Nu|| / ||D1Nv|| <= RealEpsilon
/// 
/// D1NuIsParallelD1Nv  : The angle between D1Nu and D1Nv is Null.
/// </summary>
public enum class CSLib_NormalStatus
{
    Singular = 0,
    Defined = 1,
    InfinityOfSolutions = 2,
    D1NuIsNull = 3,
    D1NvIsNull = 4,
    D1NIsNull = 5,
    D1NuNvRatioIsNull = 6,
    D1NvNuRatioIsNull = 7,
    D1NuIsParallelD1Nv = 8
}; // enum  class CSLib_NormalStatus

//---------------------------------------------------------------------
//  Class  CSLib
//---------------------------------------------------------------------
/// <summary>
/// This package implements functions for basis geometric
/// computation on curves and surfaces.
/// The tolerance criterions used in this package are
/// Resolution from package gp and RealEpsilon from class
/// Real of package Standard.
/// </summary>
public ref class CSLib sealed
    : public Macad::Occt::BaseClass<::CSLib>
{

#ifdef Include_CSLib_h
public:
    Include_CSLib_h
#endif

public:
    CSLib(::CSLib* nativeInstance)
        : Macad::Occt::BaseClass<::CSLib>( nativeInstance, true )
    {}

    CSLib(::CSLib& nativeInstance)
        : Macad::Occt::BaseClass<::CSLib>( &nativeInstance, false )
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
    /// <summary>
    /// The following functions computes the normal to a surface
    /// inherits FunctionWithDerivative from math
    /// 
    /// Computes the normal direction of a surface as the cross product
    /// between D1U and D1V.
    /// If D1U has null length or D1V has null length or D1U and D1V are
    /// parallel the normal is undefined.
    /// To check that D1U and D1V are colinear the sinus of the angle
    /// between D1U and D1V is computed and compared with SinTol.
    /// The normal is computed if theStatus == Done else the theStatus gives the
    /// reason why the computation has failed.
    /// </summary>
    static void Normal(Macad::Occt::Vec D1U, Macad::Occt::Vec D1V, double SinTol, Macad::Occt::CSLib_DerivativeStatus% theStatus, Macad::Occt::Dir% Normal);
    /// <summary>
    /// If there is a singularity on the surface  the previous method
    /// cannot compute the local normal.
    /// This method computes an approached normal direction of a surface.
    /// It does a limited development and needs the second derivatives
    /// on the surface as input data.
    /// It computes the normal as follow :
    /// N(u, v) = D1U ^ D1V
    /// N(u0+du,v0+dv) = N0 + DN/du(u0,v0) * du + DN/dv(u0,v0) * dv + Eps
    /// with Eps->0 so we can have the equivalence N ~ dN/du + dN/dv.
    /// DNu = ||DN/du|| and DNv = ||DN/dv||
    /// 
    /// . if DNu IsNull (DNu <= Resolution from gp) the answer Done = True
    /// the normal direction is given by DN/dv
    /// . if DNv IsNull (DNv <= Resolution from gp) the answer Done = True
    /// the normal direction is given by DN/du
    /// . if the two directions DN/du and DN/dv are parallel Done = True
    /// the normal direction is given either by DN/du or DN/dv.
    /// To check that the two directions are colinear the sinus of the
    /// angle between these directions is computed and compared with
    /// SinTol.
    /// . if DNu/DNv or DNv/DNu is lower or equal than Real Epsilon
    /// Done = False, the normal is undefined
    /// . if DNu IsNull and DNv is Null Done = False, there is an
    /// indetermination and we should do a limited development at
    /// order 2 (it means that we cannot omit Eps).
    /// . if DNu Is not Null and DNv Is not Null Done = False, there are
    /// an infinity of normals at the considered point on the surface.
    /// </summary>
    static void Normal(Macad::Occt::Vec D1U, Macad::Occt::Vec D1V, Macad::Occt::Vec D2U, Macad::Occt::Vec D2V, Macad::Occt::Vec D2UV, double SinTol, bool% Done, Macad::Occt::CSLib_NormalStatus% theStatus, Macad::Occt::Dir% Normal);
    /// <summary>
    /// Computes the normal direction of a surface as the cross product
    /// between D1U and D1V.
    /// </summary>
    static void Normal(Macad::Occt::Vec D1U, Macad::Occt::Vec D1V, double MagTol, Macad::Occt::CSLib_NormalStatus% theStatus, Macad::Occt::Dir% Normal);
    /// <summary>
    /// find the first  order k0  of deriviative of NUV
    /// where: foreach order < k0  all the derivatives of NUV  are
    /// null all the derivatives of NUV corresponding to the order
    /// k0 are collinear and have the same sens.
    /// In this case, normal at U,V is unique.
    /// </summary>
    static void Normal(int MaxOrder, Macad::Occt::TColgp_Array2OfVec^ DerNUV, double MagTol, double U, double V, double Umin, double Umax, double Vmin, double Vmax, Macad::Occt::CSLib_NormalStatus% theStatus, Macad::Occt::Dir% Normal, int% OrderU, int% OrderV);
    /// <summary>
    /// -- Computes the derivative  of order Nu in the --
    /// direction U and Nv in the direction V of the not --
    /// normalized  normal vector at  the point  P(U,V) The
    /// array DerSurf contain the derivative (i,j) of the surface
    /// for i=0,Nu+1 ; j=0,Nv+1
    /// </summary>
    static Macad::Occt::Vec DNNUV(int Nu, int Nv, Macad::Occt::TColgp_Array2OfVec^ DerSurf);
    /// <summary>
    /// Computes the derivatives of order Nu in the direction Nu
    /// and Nv in the direction Nv of the not normalized vector
    /// N(u,v) = dS1/du * dS2/dv (cases where we use an osculating surface)
    /// DerSurf1 are the derivatives of S1
    /// </summary>
    static Macad::Occt::Vec DNNUV(int Nu, int Nv, Macad::Occt::TColgp_Array2OfVec^ DerSurf1, Macad::Occt::TColgp_Array2OfVec^ DerSurf2);
    /// <summary>
    /// -- Computes the derivative  of order Nu in the --
    /// direction   U and  Nv in the  direction  V  of the
    /// normalized normal vector  at the point P(U,V) array
    /// DerNUV contain the  derivative  (i+Iduref,j+Idvref)
    /// of D1U ^ D1V for i=0,Nu  ; j=0,Nv Iduref and Idvref
    /// correspond to a derivative  of D1U ^ D1V  which can
    /// be used to compute the normalized normal vector.
    /// In the regular cases , Iduref=Idvref=0.
    /// </summary>
    static Macad::Occt::Vec DNNormal(int Nu, int Nv, Macad::Occt::TColgp_Array2OfVec^ DerNUV, int Iduref, int Idvref);
    /// <summary>
    /// -- Computes the derivative  of order Nu in the --
    /// direction   U and  Nv in the  direction  V  of the
    /// normalized normal vector  at the point P(U,V) array
    /// DerNUV contain the  derivative  (i+Iduref,j+Idvref)
    /// of D1U ^ D1V for i=0,Nu  ; j=0,Nv Iduref and Idvref
    /// correspond to a derivative  of D1U ^ D1V  which can
    /// be used to compute the normalized normal vector.
    /// In the regular cases , Iduref=Idvref=0.
    /// </summary>
    static Macad::Occt::Vec DNNormal(int Nu, int Nv, Macad::Occt::TColgp_Array2OfVec^ DerNUV, int Iduref);
    /// <summary>
    /// -- Computes the derivative  of order Nu in the --
    /// direction   U and  Nv in the  direction  V  of the
    /// normalized normal vector  at the point P(U,V) array
    /// DerNUV contain the  derivative  (i+Iduref,j+Idvref)
    /// of D1U ^ D1V for i=0,Nu  ; j=0,Nv Iduref and Idvref
    /// correspond to a derivative  of D1U ^ D1V  which can
    /// be used to compute the normalized normal vector.
    /// In the regular cases , Iduref=Idvref=0.
    /// </summary>
    static Macad::Occt::Vec DNNormal(int Nu, int Nv, Macad::Occt::TColgp_Array2OfVec^ DerNUV);
}; // class CSLib

//---------------------------------------------------------------------
//  Class  CSLib_Class2d
//---------------------------------------------------------------------
/// <summary>
/// *** Class2d    : Low level algorithm for 2d classification
/// this class was moved from package BRepTopAdaptor
/// </summary>
public ref class CSLib_Class2d sealed
    : public Macad::Occt::BaseClass<::CSLib_Class2d>
{

#ifdef Include_CSLib_Class2d_h
public:
    Include_CSLib_Class2d_h
#endif

public:
    CSLib_Class2d(::CSLib_Class2d* nativeInstance)
        : Macad::Occt::BaseClass<::CSLib_Class2d>( nativeInstance, true )
    {}

    CSLib_Class2d(::CSLib_Class2d& nativeInstance)
        : Macad::Occt::BaseClass<::CSLib_Class2d>( &nativeInstance, false )
    {}

    property ::CSLib_Class2d* NativeInstance
    {
        ::CSLib_Class2d* get()
        {
            return static_cast<::CSLib_Class2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs the 2D-polygon.
    /// thePnts2d is the set of the vertices (closed polygon
    /// will always be created inside of this constructor;
    /// consequently, there is no point in repeating first and
    /// last point in thePnts2d).
    /// theTolu and theTolv are tolerances.
    /// theUmin, theVmin, theUmax, theVmax are
    /// UV-bounds of the polygon.
    /// </summary>
    CSLib_Class2d(Macad::Occt::TColgp_Array1OfPnt2d^ thePnts2d, double theTolU, double theTolV, double theUMin, double theVMin, double theUMax, double theVMax);
    /// <summary>
    /// Constructs the 2D-polygon.
    /// thePnts2d is the set of the vertices (closed polygon
    /// will always be created inside of this constructor;
    /// consequently, there is no point in repeating first and
    /// last point in thePnts2d).
    /// theTolu and theTolv are tolerances.
    /// theUmin, theVmin, theUmax, theVmax are
    /// UV-bounds of the polygon.
    /// </summary>
    CSLib_Class2d(Macad::Occt::TColgp_SequenceOfPnt2d^ thePnts2d, double theTolU, double theTolV, double theUMin, double theVMin, double theUMax, double theVMax);
    int SiDans(Macad::Occt::Pnt2d P);
    int SiDans_OnMode(Macad::Occt::Pnt2d P, double Tol);
    int InternalSiDans(double X, double Y);
    int InternalSiDansOuOn(double X, double Y);
}; // class CSLib_Class2d

}; // namespace Occt
}; // namespace Macad
