// Generated wrapper code for package ShapeExtend

#pragma once

#include "Geom.h"
#include "ShapeExtend.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  ShapeExtend_Status
//---------------------------------------------------------------------
/// <summary>
/// This enumeration is used in
/// ShapeHealing toolkit for representing flags in the
/// return statuses of class methods.
/// The status is a field of the class which is set by one or
/// several methods of that class.
/// It is used for reporting about errors and other situations
/// encountered during execution of the method.
/// There are defined 8 values for DONE and 8 for FAIL flags:
/// ShapeExtend_DONE1 ...      ShapeExtend_DONE8,
/// ShapeExtend_FAIL1 ...      ShapeExtend_FAIL8
/// and also enumerations for representing combinations of flags:
/// ShapeExtend_OK - no flags at all,
/// ShapeExtend_DONE - any of flags DONEi,
/// ShapeExtend_FAIL - any of flags FAILi.
/// The class that uses statuses provides a method(s) which
/// answers whether the flag corresponding to a given
/// enumerative value is (are) set:
/// Standard_Boolean Status(const ShapeExtend_Status test);
/// Note that status can have several flags set simultaneously.
/// Status(ShapeExtend_OK) gives True when no flags are set.
/// Nothing done, everything OK
/// Something was done, case 1
/// Something was done, case 2
/// Something was done, case 3
/// Something was done, case 4
/// Something was done, case 5
/// Something was done, case 6
/// Something was done, case 7
/// Something was done, case 8
/// Something was done (any of DONE#)
/// The method failed, case 1
/// The method failed, case 2
/// The method failed, case 3
/// The method failed, case 4
/// The method failed, case 5
/// The method failed, case 6
/// The method failed, case 7
/// The method failed, case 8
/// The method failed (any of FAIL# occurred)
/// </summary>
public enum class ShapeExtend_Status
{
	ShapeExtend_OK = 0,
	ShapeExtend_DONE1 = 1,
	ShapeExtend_DONE2 = 2,
	ShapeExtend_DONE3 = 3,
	ShapeExtend_DONE4 = 4,
	ShapeExtend_DONE5 = 5,
	ShapeExtend_DONE6 = 6,
	ShapeExtend_DONE7 = 7,
	ShapeExtend_DONE8 = 8,
	ShapeExtend_DONE = 9,
	ShapeExtend_FAIL1 = 10,
	ShapeExtend_FAIL2 = 11,
	ShapeExtend_FAIL3 = 12,
	ShapeExtend_FAIL4 = 13,
	ShapeExtend_FAIL5 = 14,
	ShapeExtend_FAIL6 = 15,
	ShapeExtend_FAIL7 = 16,
	ShapeExtend_FAIL8 = 17,
	ShapeExtend_FAIL = 18
}; // enum  class ShapeExtend_Status

//---------------------------------------------------------------------
//  Enum  ShapeExtend_Parametrisation
//---------------------------------------------------------------------
/// <summary>
/// Defines kind of global parametrisation on the composite surface
/// each patch of the 1st row and column adds its range, Ui+1 = Ui + URange(i,1), etc.
/// each patch gives range 1.: Ui = i-1, Vj = j-1
/// uniform parametrisation with global range [0,1]
/// </summary>
public enum class ShapeExtend_Parametrisation
{
	ShapeExtend_Natural = 0,
	ShapeExtend_Uniform = 1,
	ShapeExtend_Unitary = 2
}; // enum  class ShapeExtend_Parametrisation

//---------------------------------------------------------------------
//  Class  ShapeExtend_DataMapOfShapeListOfMsg
//---------------------------------------------------------------------
public ref class ShapeExtend_DataMapOfShapeListOfMsg sealed : public BaseClass<::ShapeExtend_DataMapOfShapeListOfMsg>
{

#ifdef Include_ShapeExtend_DataMapOfShapeListOfMsg_h
public:
	Include_ShapeExtend_DataMapOfShapeListOfMsg_h
#endif

public:
	ShapeExtend_DataMapOfShapeListOfMsg(::ShapeExtend_DataMapOfShapeListOfMsg* nativeInstance)
		: BaseClass<::ShapeExtend_DataMapOfShapeListOfMsg>( nativeInstance, true )
	{}

	ShapeExtend_DataMapOfShapeListOfMsg(::ShapeExtend_DataMapOfShapeListOfMsg& nativeInstance)
		: BaseClass<::ShapeExtend_DataMapOfShapeListOfMsg>( &nativeInstance, false )
	{}

	property ::ShapeExtend_DataMapOfShapeListOfMsg* NativeInstance
	{
		::ShapeExtend_DataMapOfShapeListOfMsg* get()
		{
			return static_cast<::ShapeExtend_DataMapOfShapeListOfMsg*>(_NativeInstance);
		}
	}

public:
	ShapeExtend_DataMapOfShapeListOfMsg();
	ShapeExtend_DataMapOfShapeListOfMsg(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	ShapeExtend_DataMapOfShapeListOfMsg(int theNbBuckets);
	ShapeExtend_DataMapOfShapeListOfMsg(Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg^ theOther);
	void Exchange(Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg^ theOther);
	Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg^ Assign(Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg^ theOther);
	/* Method skipped due to unknown mapping: NCollection_List<Message_Msg> Bound(TopoDS_Shape theKey, NCollection_List<Message_Msg> theItem, ) */
	bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
	bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
	/* Method skipped due to unknown mapping: NCollection_List<Message_Msg> Seek(TopoDS_Shape theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_List<Message_Msg> Find(TopoDS_Shape theKey, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Find(TopoDS_Shape theKey, NCollection_List<Message_Msg> theValue, ) */
	/* Method skipped due to unknown mapping: NCollection_List<Message_Msg> ChangeSeek(TopoDS_Shape theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_List<Message_Msg> ChangeFind(TopoDS_Shape theKey, ) */
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class ShapeExtend_DataMapOfShapeListOfMsg

//---------------------------------------------------------------------
//  Class  ShapeExtend_DataMapOfTransientListOfMsg
//---------------------------------------------------------------------
public ref class ShapeExtend_DataMapOfTransientListOfMsg sealed : public BaseClass<::ShapeExtend_DataMapOfTransientListOfMsg>
{

#ifdef Include_ShapeExtend_DataMapOfTransientListOfMsg_h
public:
	Include_ShapeExtend_DataMapOfTransientListOfMsg_h
#endif

public:
	ShapeExtend_DataMapOfTransientListOfMsg(::ShapeExtend_DataMapOfTransientListOfMsg* nativeInstance)
		: BaseClass<::ShapeExtend_DataMapOfTransientListOfMsg>( nativeInstance, true )
	{}

	ShapeExtend_DataMapOfTransientListOfMsg(::ShapeExtend_DataMapOfTransientListOfMsg& nativeInstance)
		: BaseClass<::ShapeExtend_DataMapOfTransientListOfMsg>( &nativeInstance, false )
	{}

	property ::ShapeExtend_DataMapOfTransientListOfMsg* NativeInstance
	{
		::ShapeExtend_DataMapOfTransientListOfMsg* get()
		{
			return static_cast<::ShapeExtend_DataMapOfTransientListOfMsg*>(_NativeInstance);
		}
	}

public:
	ShapeExtend_DataMapOfTransientListOfMsg();
	ShapeExtend_DataMapOfTransientListOfMsg(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	ShapeExtend_DataMapOfTransientListOfMsg(int theNbBuckets);
	ShapeExtend_DataMapOfTransientListOfMsg(Macad::Occt::ShapeExtend_DataMapOfTransientListOfMsg^ theOther);
	void Exchange(Macad::Occt::ShapeExtend_DataMapOfTransientListOfMsg^ theOther);
	Macad::Occt::ShapeExtend_DataMapOfTransientListOfMsg^ Assign(Macad::Occt::ShapeExtend_DataMapOfTransientListOfMsg^ theOther);
	/* Method skipped due to unknown mapping: NCollection_List<Message_Msg> Bound(Standard_Transient theKey, NCollection_List<Message_Msg> theItem, ) */
	bool IsBound(Macad::Occt::Standard_Transient^ theKey);
	bool UnBind(Macad::Occt::Standard_Transient^ theKey);
	/* Method skipped due to unknown mapping: NCollection_List<Message_Msg> Seek(Standard_Transient theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_List<Message_Msg> Find(Standard_Transient theKey, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Find(Standard_Transient theKey, NCollection_List<Message_Msg> theValue, ) */
	/* Method skipped due to unknown mapping: NCollection_List<Message_Msg> ChangeSeek(Standard_Transient theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_List<Message_Msg> ChangeFind(Standard_Transient theKey, ) */
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class ShapeExtend_DataMapOfTransientListOfMsg

//---------------------------------------------------------------------
//  Class  ShapeExtend_ComplexCurve
//---------------------------------------------------------------------
/// <summary>
/// Defines a curve which consists of several segments.
/// Implements basic interface to it.
/// </summary>
public ref class ShapeExtend_ComplexCurve : public Macad::Occt::Geom_Curve
{

#ifdef Include_ShapeExtend_ComplexCurve_h
public:
	Include_ShapeExtend_ComplexCurve_h
#endif

public:
	ShapeExtend_ComplexCurve(::ShapeExtend_ComplexCurve* nativeInstance)
		: Macad::Occt::Geom_Curve( nativeInstance )
	{}

	ShapeExtend_ComplexCurve(::ShapeExtend_ComplexCurve& nativeInstance)
		: Macad::Occt::Geom_Curve( nativeInstance )
	{}

	property ::ShapeExtend_ComplexCurve* NativeInstance
	{
		::ShapeExtend_ComplexCurve* get()
		{
			return static_cast<::ShapeExtend_ComplexCurve*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeExtend_ComplexCurve^ CreateDowncasted(::ShapeExtend_ComplexCurve* instance);

public:
	ShapeExtend_ComplexCurve(Macad::Occt::ShapeExtend_ComplexCurve^ parameter1);
	/// <summary>
	/// Returns number of curves
	/// </summary>
	int NbCurves();
	/// <summary>
	/// Returns curve given by its index
	/// </summary>
	Macad::Occt::Geom_Curve^ Curve(int index);
	/// <summary>
	/// Returns number of the curve for the given parameter U
	/// and local paramete r UOut for the found curve
	/// </summary>
	int LocateParameter(double U, double% UOut);
	/// <summary>
	/// Returns global parameter for the whole curve according
	/// to the segment and local parameter on it
	/// </summary>
	double LocalToGlobal(int index, double Ulocal);
	/// <summary>
	/// Applies transformation to each curve
	/// </summary>
	void Transform(Macad::Occt::Trsf T);
	/// <summary>
	/// Returns 1 - U
	/// </summary>
	double ReversedParameter(double U);
	/// <summary>
	/// Returns 0
	/// </summary>
	double FirstParameter();
	/// <summary>
	/// Returns 1
	/// </summary>
	double LastParameter();
	/// <summary>
	/// Returns True if the curve is closed
	/// </summary>
	bool IsClosed();
	/// <summary>
	/// Returns False
	/// </summary>
	bool IsPeriodic();
	/// <summary>
	/// Returns GeomAbs_C0
	/// </summary>
	Macad::Occt::GeomAbs_Shape Continuity();
	/// <summary>
	/// Returns False if N > 0
	/// </summary>
	bool IsCN(int N);
	/// <summary>
	/// Returns point at parameter U.
	/// Finds appropriate curve and local parameter on it.
	/// </summary>
	void D0(double U, Macad::Occt::Pnt% P);
	void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	Macad::Occt::Vec DN(double U, int N);
	/// <summary>
	/// Returns scale factor for recomputing of deviatives.
	/// </summary>
	double GetScaleFactor(int ind);
	/// <summary>
	/// Checks geometrical connectivity of the curves, including
	/// closure (sets fields myClosed)
	/// </summary>
	bool CheckConnectivity(double Preci);
}; // class ShapeExtend_ComplexCurve

//---------------------------------------------------------------------
//  Class  ShapeExtend_CompositeSurface
//---------------------------------------------------------------------
/// <summary>
/// Composite surface is represented by a grid of surfaces
/// (patches) connected geometrically. Patches may have different
/// parametrisation ranges, but they should be parametrised in
/// the same manner so that parameter of each patch (u,v) can be converted
/// to global parameter on the whole surface (U,V) with help of linear
/// transformation:
/// 
/// for any i,j-th patch
/// U = Ui + ( u - uijmin ) * ( Ui+1 - Ui ) / ( uijmax - uijmin )
/// V = Vj + ( v - vijmin ) * ( Vj+1 - Vj ) / ( vijmax - vijmin )
/// 
/// where
/// 
/// [uijmin, uijmax] * [ vijmin, vijmax] - parametric range of i,j-th patch,
/// 
/// Ui (i=1,..,Nu+1), Vi (j=1,..,Nv+1) - values defining global
/// parametrisation by U and V (correspond to points between patches and
/// bounds, (Ui,Uj) corresponds to (uijmin,vijmin) on i,j-th patch) and to
/// (u(i-1)(j-1)max,v(i-1)(j-1)max) on (i-1),(j-1)-th patch.
/// 
/// Geometrical connectivity is expressed via global parameters:
/// S[i,j](Ui+1,V) = S[i+1,j](Ui+1,V) for any i, j, V
/// S[i,j](U,Vj+1) = S[i,j+1](U,Vj+1) for any i, j, U
/// It is checked with Precision::Confusion() by default.
/// 
/// NOTE 1: This class is inherited from Geom_Surface in order to
/// make it more easy to store and deal with it. However, it should
/// not be passed to standard methods dealing with geometry since
/// this type is not known to them.
/// NOTE 2: Not all the inherited methods are implemented, and some are
/// implemented not in the full form.
/// </summary>
public ref class ShapeExtend_CompositeSurface sealed : public Macad::Occt::Geom_Surface
{

#ifdef Include_ShapeExtend_CompositeSurface_h
public:
	Include_ShapeExtend_CompositeSurface_h
#endif

public:
	ShapeExtend_CompositeSurface(::ShapeExtend_CompositeSurface* nativeInstance)
		: Macad::Occt::Geom_Surface( nativeInstance )
	{}

	ShapeExtend_CompositeSurface(::ShapeExtend_CompositeSurface& nativeInstance)
		: Macad::Occt::Geom_Surface( nativeInstance )
	{}

	property ::ShapeExtend_CompositeSurface* NativeInstance
	{
		::ShapeExtend_CompositeSurface* get()
		{
			return static_cast<::ShapeExtend_CompositeSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeExtend_CompositeSurface^ CreateDowncasted(::ShapeExtend_CompositeSurface* instance);

public:
	/// <summary>
	/// Empty constructor.
	/// </summary>
	ShapeExtend_CompositeSurface();
	/// <summary>
	/// Initializes by a grid of surfaces (calls Init()).
	/// </summary>
	/* Method skipped due to unknown mapping: void ShapeExtend_CompositeSurface(TColGeom_HArray2OfSurface GridSurf, ShapeExtend_Parametrisation param, ) */
	/// <summary>
	/// Initializes by a grid of surfaces (calls Init()).
	/// </summary>
	/* Method skipped due to unknown mapping: void ShapeExtend_CompositeSurface(TColGeom_HArray2OfSurface GridSurf, ShapeExtend_Parametrisation param, ) */
	/// <summary>
	/// Initializes by a grid of surfaces (calls Init()).
	/// </summary>
	/* Method skipped due to unknown mapping: void ShapeExtend_CompositeSurface(TColGeom_HArray2OfSurface GridSurf, TColStd_Array1OfReal UJoints, TColStd_Array1OfReal VJoints, ) */
	ShapeExtend_CompositeSurface(Macad::Occt::ShapeExtend_CompositeSurface^ parameter1);
	/// <summary>
	/// Initializes by a grid of surfaces.
	/// All the Surfaces of the grid must have geometrical
	/// connectivity as stated above.
	/// If geometrical connectivity is not satisfied, method
	/// returns False.
	/// However, class is initialized even in that case.
	/// 
	/// Last parameter defines how global parametrisation
	/// (joint values) will be computed:
	/// ShapeExtend_Natural: U1 = u11min, Ui+1 = Ui + (ui1max-ui1min), etc.
	/// ShapeExtend_Uniform: Ui = i-1, Vj = j-1
	/// ShapeExtend_Unitary: Ui = (i-1)/Nu, Vi = (j-1)/Nv
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean Init(TColGeom_HArray2OfSurface GridSurf, ShapeExtend_Parametrisation param, ) */
	/// <summary>
	/// Initializes by a grid of surfaces.
	/// All the Surfaces of the grid must have geometrical
	/// connectivity as stated above.
	/// If geometrical connectivity is not satisfied, method
	/// returns False.
	/// However, class is initialized even in that case.
	/// 
	/// Last parameter defines how global parametrisation
	/// (joint values) will be computed:
	/// ShapeExtend_Natural: U1 = u11min, Ui+1 = Ui + (ui1max-ui1min), etc.
	/// ShapeExtend_Uniform: Ui = i-1, Vj = j-1
	/// ShapeExtend_Unitary: Ui = (i-1)/Nu, Vi = (j-1)/Nv
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean Init(TColGeom_HArray2OfSurface GridSurf, ShapeExtend_Parametrisation param, ) */
	/// <summary>
	/// Initializes by a grid of surfaces with given global
	/// parametrisation defined by UJoints and VJoints arrays,
	/// each having langth equal to number of patches in corresponding
	/// direction + 1. Global joint values should be sorted in
	/// increasing order.
	/// All the Surfaces of the grid must have geometrical
	/// connectivity as stated above.
	/// If geometrical connectivity is not satisfied, method
	/// returns False.
	/// However, class is initialized even in that case.
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean Init(TColGeom_HArray2OfSurface GridSurf, TColStd_Array1OfReal UJoints, TColStd_Array1OfReal VJoints, ) */
	/// <summary>
	/// Returns number of patches in U direction.
	/// </summary>
	int NbUPatches();
	/// <summary>
	/// Returns number of patches in V direction.
	/// </summary>
	int NbVPatches();
	/// <summary>
	/// Returns one surface patch
	/// </summary>
	Macad::Occt::Geom_Surface^ Patch(int i, int j);
	/// <summary>
	/// Returns grid of surfaces
	/// </summary>
	/* Method skipped due to unknown mapping: TColGeom_HArray2OfSurface Patches() */
	/// <summary>
	/// Returns the array of U values corresponding to joint
	/// points between patches as well as to start and end points,
	/// which define global parametrisation of the surface
	/// </summary>
	Macad::Occt::TColStd_HArray1OfReal^ UJointValues();
	/// <summary>
	/// Returns the array of V values corresponding to joint
	/// points between patches as well as to start and end points,
	/// which define global parametrisation of the surface
	/// </summary>
	Macad::Occt::TColStd_HArray1OfReal^ VJointValues();
	/// <summary>
	/// Returns i-th joint value in U direction
	/// (1-st is global Umin, (NbUPatches()+1)-th is global Umax
	/// on the composite surface)
	/// </summary>
	double UJointValue(int i);
	/// <summary>
	/// Returns j-th joint value in V direction
	/// (1-st is global Vmin, (NbVPatches()+1)-th is global Vmax
	/// on the composite surface)
	/// </summary>
	double VJointValue(int j);
	/// <summary>
	/// Sets the array of U values corresponding to joint
	/// points, which define global parametrisation of the surface.
	/// Number of values in array should be equal to NbUPatches()+1.
	/// All the values should be sorted in increasing order.
	/// If this is not satisfied, does nothing and returns False.
	/// </summary>
	bool SetUJointValues(Macad::Occt::TColStd_Array1OfReal^ UJoints);
	/// <summary>
	/// Sets the array of V values corresponding to joint
	/// points, which define global parametrisation of the surface
	/// Number of values in array should be equal to NbVPatches()+1.
	/// All the values should be sorted in increasing order.
	/// If this is not satisfied, does nothing and returns False.
	/// </summary>
	bool SetVJointValues(Macad::Occt::TColStd_Array1OfReal^ VJoints);
	/// <summary>
	/// Changes starting value for global U parametrisation (all
	/// other joint values are shifted accordingly)
	/// </summary>
	void SetUFirstValue(double UFirst);
	/// <summary>
	/// Changes starting value for global V parametrisation (all
	/// other joint values are shifted accordingly)
	/// </summary>
	void SetVFirstValue(double VFirst);
	/// <summary>
	/// Returns number of col that contains given (global) parameter
	/// </summary>
	int LocateUParameter(double U);
	/// <summary>
	/// Returns number of row that contains given (global) parameter
	/// </summary>
	int LocateVParameter(double V);
	/// <summary>
	/// Returns number of row and col of surface that contains
	/// given point
	/// </summary>
	void LocateUVPoint(Macad::Occt::Pnt2d pnt, int% i, int% j);
	/// <summary>
	/// Returns one surface patch that contains given (global) parameters
	/// </summary>
	Macad::Occt::Geom_Surface^ Patch(double U, double V);
	/// <summary>
	/// Returns one surface patch that contains given point
	/// </summary>
	Macad::Occt::Geom_Surface^ Patch(Macad::Occt::Pnt2d pnt);
	/// <summary>
	/// Converts local parameter u on patch i,j to global parameter U
	/// </summary>
	double ULocalToGlobal(int i, int j, double u);
	/// <summary>
	/// Converts local parameter v on patch i,j to global parameter V
	/// </summary>
	double VLocalToGlobal(int i, int j, double v);
	/// <summary>
	/// Converts local parameters uv on patch i,j to global parameters UV
	/// </summary>
	Macad::Occt::Pnt2d LocalToGlobal(int i, int j, Macad::Occt::Pnt2d uv);
	/// <summary>
	/// Converts global parameter U to local parameter u on patch i,j
	/// </summary>
	double UGlobalToLocal(int i, int j, double U);
	/// <summary>
	/// Converts global parameter V to local parameter v on patch i,j
	/// </summary>
	double VGlobalToLocal(int i, int j, double V);
	/// <summary>
	/// Converts global parameters UV to local parameters uv on patch i,j
	/// </summary>
	Macad::Occt::Pnt2d GlobalToLocal(int i, int j, Macad::Occt::Pnt2d UV);
	/// <summary>
	/// Computes transformation operator and uFactor descrinbing affine
	/// transformation required to convert global parameters on composite
	/// surface to local parameters on patch (i,j):
	/// uv = ( uFactor, 1. ) X Trsf * UV;
	/// NOTE: Thus Trsf contains shift and scale by V, scale by U is stored in uFact.
	/// Returns True if transformation is not an identity
	/// </summary>
	bool GlobalToLocalTransformation(int i, int j, double% uFact, Macad::Occt::Trsf2d% Trsf);
	/// <summary>
	/// Applies transformation to all the patches
	/// </summary>
	void Transform(Macad::Occt::Trsf T);
	/// <summary>
	/// Returns a copy of the surface
	/// </summary>
	Macad::Occt::Geom_Geometry^ Copy();
	/// <summary>
	/// NOT IMPLEMENTED (does nothing)
	/// </summary>
	void UReverse();
	/// <summary>
	/// Returns U
	/// </summary>
	double UReversedParameter(double U);
	/// <summary>
	/// NOT IMPLEMENTED (does nothing)
	/// </summary>
	void VReverse();
	/// <summary>
	/// Returns V
	/// </summary>
	double VReversedParameter(double V);
	/// <summary>
	/// Returns the parametric bounds of grid
	/// </summary>
	void Bounds(double% U1, double% U2, double% V1, double% V2);
	/// <summary>
	/// Returns True if grid is closed in U direction
	/// (i.e. connected with Precision::Confusion)
	/// </summary>
	bool IsUClosed();
	/// <summary>
	/// Returns True if grid is closed in V direction
	/// (i.e. connected with Precision::Confusion)
	/// </summary>
	bool IsVClosed();
	/// <summary>
	/// Returns False
	/// </summary>
	bool IsUPeriodic();
	/// <summary>
	/// Returns False
	/// </summary>
	bool IsVPeriodic();
	/// <summary>
	/// NOT IMPLEMENTED (returns Null curve)
	/// </summary>
	Macad::Occt::Geom_Curve^ UIso(double U);
	/// <summary>
	/// NOT IMPLEMENTED (returns Null curve)
	/// </summary>
	Macad::Occt::Geom_Curve^ VIso(double V);
	/// <summary>
	/// returns C0
	/// </summary>
	Macad::Occt::GeomAbs_Shape Continuity();
	/// <summary>
	/// returns True if N <=0
	/// </summary>
	bool IsCNu(int N);
	/// <summary>
	/// returns True if N <=0
	/// </summary>
	bool IsCNv(int N);
	/// <summary>
	/// Computes the point of parameter U,V on the grid.
	/// </summary>
	void D0(double U, double V, Macad::Occt::Pnt% P);
	/// <summary>
	/// Computes the point P and the first derivatives in the
	/// directions U and V at this point.
	/// </summary>
	void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
	/// <summary>
	/// Computes the point P, the first and the second derivatives in
	/// the directions U and V at this point.
	/// </summary>
	void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
	/// <summary>
	/// Computes the point P, the first,the second and the third
	/// derivatives in the directions U and V at this point.
	/// </summary>
	void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
	/// <summary>
	/// Computes the derivative of order Nu in the direction U and Nv
	/// in the direction V at the point P(U, V).
	/// </summary>
	Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
	/// <summary>
	/// Computes the point of parameter pnt on the grid.
	/// </summary>
	Macad::Occt::Pnt Value(Macad::Occt::Pnt2d pnt);
	/// <summary>
	/// Computes Joint values according to parameter
	/// </summary>
	void ComputeJointValues(Macad::Occt::ShapeExtend_Parametrisation param);
	/// <summary>
	/// Computes Joint values according to parameter
	/// </summary>
	void ComputeJointValues();
	/// <summary>
	/// Checks geometrical connectivity of the patches, including
	/// closedness (sets fields muUClosed and myVClosed)
	/// </summary>
	bool CheckConnectivity(double prec);
}; // class ShapeExtend_CompositeSurface

//---------------------------------------------------------------------
//  Class  ShapeExtend_WireData
//---------------------------------------------------------------------
/// <summary>
/// This class provides a data structure necessary for work with the wire as with
/// ordered list of edges, what is required for many algorithms. The advantage of
/// this class is that it allows to work with wires which are not correct.
/// The object of the class ShapeExtend_WireData can be initialized by
/// TopoDS_Wire, and converted back to TopoDS_Wire.
/// An edge in the wire is defined by its rank number. Operations of accessing,
/// adding and removing edge at the given rank number are provided. On the whole
/// wire, operations of circular permutation and reversing (both orientations of
/// all edges and order of edges) are provided as well.
/// This class also provides a method to check if the edge in the wire is a seam
/// (if the wire lies on a face).
/// This class is handled by reference. Such an approach gives the following advantages:
/// 1.    Sharing the object of this class strongly optimizes the processes of
/// analysis and fixing performed in parallel on the wire stored in the form
/// of this class. Fixing tool (e.g. ShapeFix_Wire) fixes problems one by
/// one using analyzing tool (e.g. ShapeAnalysis_Wire). Sharing allows not
/// to reinitialize each time the analyzing tool with modified
/// ShapeExtend_WireData what consumes certain time.
/// 2.    No copying of contents. The object of ShapeExtend_WireData class has
/// quite big size, returning it as a result of the function would cause
/// additional copying of contents if this class were one handled by value.
/// Moreover, this class is stored as a field in other classes which are
/// they returned as results of functions, storing only a handle to
/// ShapeExtend_WireData saves time and memory.
/// </summary>
public ref class ShapeExtend_WireData sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeExtend_WireData_h
public:
	Include_ShapeExtend_WireData_h
#endif

public:
	ShapeExtend_WireData(::ShapeExtend_WireData* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeExtend_WireData(::ShapeExtend_WireData& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeExtend_WireData* NativeInstance
	{
		::ShapeExtend_WireData* get()
		{
			return static_cast<::ShapeExtend_WireData*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeExtend_WireData^ CreateDowncasted(::ShapeExtend_WireData* instance);

public:
	/// <summary>
	/// Empty constructor, creates empty wire with no edges
	/// </summary>
	ShapeExtend_WireData();
	/// <summary>
	/// Constructor initializing the data from TopoDS_Wire. Calls Init(wire,chained).
	/// </summary>
	ShapeExtend_WireData(Macad::Occt::TopoDS_Wire^ wire, bool chained, bool theManifoldMode);
	/// <summary>
	/// Constructor initializing the data from TopoDS_Wire. Calls Init(wire,chained).
	/// </summary>
	ShapeExtend_WireData(Macad::Occt::TopoDS_Wire^ wire, bool chained);
	/// <summary>
	/// Constructor initializing the data from TopoDS_Wire. Calls Init(wire,chained).
	/// </summary>
	ShapeExtend_WireData(Macad::Occt::TopoDS_Wire^ wire);
	ShapeExtend_WireData(Macad::Occt::ShapeExtend_WireData^ parameter1);
	/// <summary>
	/// Copies data from another WireData
	/// </summary>
	void Init(Macad::Occt::ShapeExtend_WireData^ other);
	/// <summary>
	/// Loads an already existing wire
	/// If <chained> is True (default), edges are added in the
	/// sequence as they are explored by TopoDS_Iterator
	/// Else, if <chained> is False, wire is explored by
	/// BRepTools_WireExplorer and it is guaranteed that edges will
	/// be sequentially connected.
	/// Remark : In the latter case it can happen that not all edges
	/// will be found (because of limitations of
	/// BRepTools_WireExplorer for disconnected wires and wires
	/// with seam edges).
	/// </summary>
	bool Init(Macad::Occt::TopoDS_Wire^ wire, bool chained, bool theManifoldMode);
	/// <summary>
	/// Loads an already existing wire
	/// If <chained> is True (default), edges are added in the
	/// sequence as they are explored by TopoDS_Iterator
	/// Else, if <chained> is False, wire is explored by
	/// BRepTools_WireExplorer and it is guaranteed that edges will
	/// be sequentially connected.
	/// Remark : In the latter case it can happen that not all edges
	/// will be found (because of limitations of
	/// BRepTools_WireExplorer for disconnected wires and wires
	/// with seam edges).
	/// </summary>
	bool Init(Macad::Occt::TopoDS_Wire^ wire, bool chained);
	/// <summary>
	/// Loads an already existing wire
	/// If <chained> is True (default), edges are added in the
	/// sequence as they are explored by TopoDS_Iterator
	/// Else, if <chained> is False, wire is explored by
	/// BRepTools_WireExplorer and it is guaranteed that edges will
	/// be sequentially connected.
	/// Remark : In the latter case it can happen that not all edges
	/// will be found (because of limitations of
	/// BRepTools_WireExplorer for disconnected wires and wires
	/// with seam edges).
	/// </summary>
	bool Init(Macad::Occt::TopoDS_Wire^ wire);
	/// <summary>
	/// Clears data about Wire.
	/// </summary>
	void Clear();
	/// <summary>
	/// Computes the list of seam edges
	/// By default (direct call), computing is enforced
	/// For indirect call (from IsSeam) it is redone only if not yet
	/// already done or if the list of edges has changed
	/// Remark : A Seam Edge is an Edge present twice in the list, once as
	/// FORWARD and once as REVERSED
	/// Each sense has its own PCurve, the one for FORWARD
	/// must be set in first
	/// </summary>
	void ComputeSeams(bool enforce);
	/// <summary>
	/// Computes the list of seam edges
	/// By default (direct call), computing is enforced
	/// For indirect call (from IsSeam) it is redone only if not yet
	/// already done or if the list of edges has changed
	/// Remark : A Seam Edge is an Edge present twice in the list, once as
	/// FORWARD and once as REVERSED
	/// Each sense has its own PCurve, the one for FORWARD
	/// must be set in first
	/// </summary>
	void ComputeSeams();
	/// <summary>
	/// Does a circular permutation in order to set <num>th edge last
	/// </summary>
	void SetLast(int num);
	/// <summary>
	/// When the wire contains at least one degenerated edge, sets it
	/// as last one
	/// Note   : It is useful to process pcurves, for instance, while the pcurve
	/// of a DGNR may not be computed from its 3D part (there is none)
	/// it is computed after the other edges have been computed and
	/// chained.
	/// </summary>
	void SetDegeneratedLast();
	/// <summary>
	/// Adds an edge to a wire, being defined (not yet ended)
	/// This is the plain, basic, function to add an edge
	/// <num> = 0 (D): Appends at end
	/// <num> = 1: Preprends at start
	/// else, Insert before <num>
	/// Remark : Null Edge is simply ignored
	/// </summary>
	void Add(Macad::Occt::TopoDS_Edge^ edge, int atnum);
	/// <summary>
	/// Adds an edge to a wire, being defined (not yet ended)
	/// This is the plain, basic, function to add an edge
	/// <num> = 0 (D): Appends at end
	/// <num> = 1: Preprends at start
	/// else, Insert before <num>
	/// Remark : Null Edge is simply ignored
	/// </summary>
	void Add(Macad::Occt::TopoDS_Edge^ edge);
	/// <summary>
	/// Adds an entire wire, considered as a list of edges
	/// Remark : The wire is assumed to be ordered (TopoDS_Iterator
	/// is used)
	/// </summary>
	void Add(Macad::Occt::TopoDS_Wire^ wire, int atnum);
	/// <summary>
	/// Adds an entire wire, considered as a list of edges
	/// Remark : The wire is assumed to be ordered (TopoDS_Iterator
	/// is used)
	/// </summary>
	void Add(Macad::Occt::TopoDS_Wire^ wire);
	/// <summary>
	/// Adds a wire in the form of WireData
	/// </summary>
	void Add(Macad::Occt::ShapeExtend_WireData^ wire, int atnum);
	/// <summary>
	/// Adds a wire in the form of WireData
	/// </summary>
	void Add(Macad::Occt::ShapeExtend_WireData^ wire);
	/// <summary>
	/// Adds an edge or a wire invoking corresponding method Add
	/// </summary>
	void Add(Macad::Occt::TopoDS_Shape^ shape, int atnum);
	/// <summary>
	/// Adds an edge or a wire invoking corresponding method Add
	/// </summary>
	void Add(Macad::Occt::TopoDS_Shape^ shape);
	/// <summary>
	/// Adds an edge to start or end of <me>, according to <mode>
	/// 0: at end, as direct
	/// 1: at end, as reversed
	/// 2: at start, as direct
	/// 3: at start, as reversed
	/// < 0: no adding
	/// </summary>
	void AddOriented(Macad::Occt::TopoDS_Edge^ edge, int mode);
	/// <summary>
	/// Adds a wire to start or end of <me>, according to <mode>
	/// 0: at end, as direct
	/// 1: at end, as reversed
	/// 2: at start, as direct
	/// 3: at start, as reversed
	/// < 0: no adding
	/// </summary>
	void AddOriented(Macad::Occt::TopoDS_Wire^ wire, int mode);
	/// <summary>
	/// Adds an edge or a wire invoking corresponding method
	/// AddOriented
	/// </summary>
	void AddOriented(Macad::Occt::TopoDS_Shape^ shape, int mode);
	/// <summary>
	/// Removes an Edge, given its rank. By default removes the last edge.
	/// </summary>
	void Remove(int num);
	/// <summary>
	/// Removes an Edge, given its rank. By default removes the last edge.
	/// </summary>
	void Remove();
	/// <summary>
	/// Replaces an edge at the given
	/// rank number <num> with new one. Default is last edge (<num> = 0).
	/// </summary>
	void Set(Macad::Occt::TopoDS_Edge^ edge, int num);
	/// <summary>
	/// Replaces an edge at the given
	/// rank number <num> with new one. Default is last edge (<num> = 0).
	/// </summary>
	void Set(Macad::Occt::TopoDS_Edge^ edge);
	/// <summary>
	/// Reverses the sense of the list and the orientation of each Edge
	/// This method should be called when either wire has no seam edges
	/// or face is not available
	/// </summary>
	void Reverse();
	/// <summary>
	/// Reverses the sense of the list and the orientation of each Edge
	/// The face is necessary for swapping pcurves for seam edges
	/// (first pcurve corresponds to orientation FORWARD, and second to
	/// REVERSED; when edge is reversed, pcurves must be swapped)
	/// If face is NULL, no swapping is performed
	/// </summary>
	void Reverse(Macad::Occt::TopoDS_Face^ face);
	/// <summary>
	/// Returns the count of currently recorded edges
	/// </summary>
	int NbEdges();
	/// <summary>
	/// Returns the count of currently recorded non-manifold edges
	/// </summary>
	int NbNonManifoldEdges();
	/// <summary>
	/// Returns <num>th nonmanifold Edge
	/// </summary>
	Macad::Occt::TopoDS_Edge^ NonmanifoldEdge(int num);
	/// <summary>
	/// Returns sequence of non-manifold edges
	/// This sequence can be not empty if wire data set in manifold mode but
	/// initial wire has INTERNAL orientation or contains INTERNAL edges
	/// </summary>
	Macad::Occt::TopTools_HSequenceOfShape^ NonmanifoldEdges();
	/// <summary>
	/// Returns mode defining manifold wire data or not.
	/// If manifold that nonmanifold edges will not be not
	/// consider during operations(previous behaviour)
	/// and they will be added only in result wire
	/// else non-manifold edges will consider during operations
	/// </summary>
	bool ManifoldMode();
	/// <summary>
	/// Returns <num>th Edge
	/// </summary>
	Macad::Occt::TopoDS_Edge^ Edge(int num);
	/// <summary>
	/// Returns the index of the edge
	/// If the edge is a seam the orientation is also checked
	/// Returns 0 if the edge is not found in the list
	/// </summary>
	int Index(Macad::Occt::TopoDS_Edge^ edge);
	/// <summary>
	/// Tells if an Edge is seam (see ComputeSeams)
	/// An edge is considered as seam if it presents twice in
	/// the edge list, once as FORWARD and once as REVERSED.
	/// </summary>
	bool IsSeam(int num);
	/// <summary>
	/// Makes TopoDS_Wire using
	/// BRep_Builder (just creates the TopoDS_Wire object and adds
	/// all edges into it). This method should be called when
	/// the wire is correct (for example, after successful
	/// fixes by ShapeFix_Wire) and adjacent edges share common
	/// vertices. In case if adjacent edges do not share the same
	/// vertices the resulting TopoDS_Wire will be invalid.
	/// </summary>
	Macad::Occt::TopoDS_Wire^ Wire();
	/// <summary>
	/// Makes TopoDS_Wire using
	/// BRepAPI_MakeWire. Class BRepAPI_MakeWire merges
	/// geometrically coincided vertices and can disturb
	/// correct order of edges in the wire. If this class fails,
	/// null shape is returned.
	/// </summary>
	Macad::Occt::TopoDS_Wire^ WireAPIMake();
}; // class ShapeExtend_WireData

//---------------------------------------------------------------------
//  Class  ShapeExtend_BasicMsgRegistrator
//---------------------------------------------------------------------
/// <summary>
/// Abstract class that can be used for attaching messages
/// to the objects (e.g. shapes).
/// It is used by ShapeHealing algorithms to attach a message
/// describing encountered case (e.g. removing small edge from
/// a wire).
/// 
/// The methods of this class are empty and redefined, for instance,
/// in the classes for Data Exchange processors for attaching
/// messages to interface file entities or CAS.CADE shapes.
/// </summary>
public ref class ShapeExtend_BasicMsgRegistrator : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeExtend_BasicMsgRegistrator_h
public:
	Include_ShapeExtend_BasicMsgRegistrator_h
#endif

protected:
	ShapeExtend_BasicMsgRegistrator(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	ShapeExtend_BasicMsgRegistrator(::ShapeExtend_BasicMsgRegistrator* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeExtend_BasicMsgRegistrator(::ShapeExtend_BasicMsgRegistrator& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeExtend_BasicMsgRegistrator* NativeInstance
	{
		::ShapeExtend_BasicMsgRegistrator* get()
		{
			return static_cast<::ShapeExtend_BasicMsgRegistrator*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeExtend_BasicMsgRegistrator^ CreateDowncasted(::ShapeExtend_BasicMsgRegistrator* instance);

public:
	/// <summary>
	/// Empty constructor.
	/// </summary>
	ShapeExtend_BasicMsgRegistrator();
	ShapeExtend_BasicMsgRegistrator(Macad::Occt::ShapeExtend_BasicMsgRegistrator^ parameter1);
	/// <summary>
	/// Sends a message to be attached to the object.
	/// Object can be of any type interpreted by redefined MsgRegistrator.
	/// </summary>
	void Send(Macad::Occt::Standard_Transient^ object, Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity);
	/// <summary>
	/// Sends a message to be attached to the shape.
	/// </summary>
	void Send(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity);
	/// <summary>
	/// Calls Send method with Null Transient.
	/// </summary>
	void Send(Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity);
}; // class ShapeExtend_BasicMsgRegistrator

//---------------------------------------------------------------------
//  Class  ShapeExtend_MsgRegistrator
//---------------------------------------------------------------------
/// <summary>
/// Attaches messages to the objects (generic Transient or shape).
/// The objects of this class are transmitted to the Shape Healing
/// algorithms so that they could collect messages occurred during
/// processing.
/// 
/// Messages are added to the Maps (stored as a field) that can be
/// used, for instance, by Data Exchange processors to attach those
/// messages to initial file entities.
/// </summary>
public ref class ShapeExtend_MsgRegistrator sealed : public Macad::Occt::ShapeExtend_BasicMsgRegistrator
{

#ifdef Include_ShapeExtend_MsgRegistrator_h
public:
	Include_ShapeExtend_MsgRegistrator_h
#endif

public:
	ShapeExtend_MsgRegistrator(::ShapeExtend_MsgRegistrator* nativeInstance)
		: Macad::Occt::ShapeExtend_BasicMsgRegistrator( nativeInstance )
	{}

	ShapeExtend_MsgRegistrator(::ShapeExtend_MsgRegistrator& nativeInstance)
		: Macad::Occt::ShapeExtend_BasicMsgRegistrator( nativeInstance )
	{}

	property ::ShapeExtend_MsgRegistrator* NativeInstance
	{
		::ShapeExtend_MsgRegistrator* get()
		{
			return static_cast<::ShapeExtend_MsgRegistrator*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeExtend_MsgRegistrator^ CreateDowncasted(::ShapeExtend_MsgRegistrator* instance);

public:
	/// <summary>
	/// Creates an object.
	/// </summary>
	ShapeExtend_MsgRegistrator();
	ShapeExtend_MsgRegistrator(Macad::Occt::ShapeExtend_MsgRegistrator^ parameter1);
	/// <summary>
	/// Sends a message to be attached to the object.
	/// If the object is in the map then the message is added to the
	/// list, otherwise the object is firstly added to the map.
	/// </summary>
	void Send(Macad::Occt::Standard_Transient^ object, Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity);
	/// <summary>
	/// Sends a message to be attached to the shape.
	/// If the shape is in the map then the message is added to the
	/// list, otherwise the shape is firstly added to the map.
	/// </summary>
	void Send(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity);
	/// <summary>
	/// Returns a Map of objects and message list
	/// </summary>
	Macad::Occt::ShapeExtend_DataMapOfTransientListOfMsg^ MapTransient();
	/// <summary>
	/// Returns a Map of shapes and message list
	/// </summary>
	Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg^ MapShape();
}; // class ShapeExtend_MsgRegistrator

//---------------------------------------------------------------------
//  Class  ShapeExtend_Explorer
//---------------------------------------------------------------------
/// <summary>
/// This class is intended to
/// explore shapes and convert different representations
/// (list, sequence, compound) of complex shapes. It provides tools for:
/// - obtaining type of the shapes in context of TopoDS_Compound,
/// - exploring shapes in context of  TopoDS_Compound,
/// - converting different representations of shapes (list, sequence, compound).
/// </summary>
public ref class ShapeExtend_Explorer sealed : public BaseClass<::ShapeExtend_Explorer>
{

#ifdef Include_ShapeExtend_Explorer_h
public:
	Include_ShapeExtend_Explorer_h
#endif

public:
	ShapeExtend_Explorer(::ShapeExtend_Explorer* nativeInstance)
		: BaseClass<::ShapeExtend_Explorer>( nativeInstance, true )
	{}

	ShapeExtend_Explorer(::ShapeExtend_Explorer& nativeInstance)
		: BaseClass<::ShapeExtend_Explorer>( &nativeInstance, false )
	{}

	property ::ShapeExtend_Explorer* NativeInstance
	{
		::ShapeExtend_Explorer* get()
		{
			return static_cast<::ShapeExtend_Explorer*>(_NativeInstance);
		}
	}

public:
	/// <summary>
	/// Creates an object Explorer
	/// </summary>
	ShapeExtend_Explorer();
	ShapeExtend_Explorer(Macad::Occt::ShapeExtend_Explorer^ parameter1);
	/// <summary>
	/// Converts a sequence of Shapes to a Compound
	/// </summary>
	Macad::Occt::TopoDS_Shape^ CompoundFromSeq(Macad::Occt::TopTools_HSequenceOfShape^ seqval);
	/// <summary>
	/// Converts a Compound to a list of Shapes
	/// if <comp> is not a compound, the list contains only <comp>
	/// if <comp> is Null, the list is empty
	/// if <comp> is a Compound, its sub-shapes are put into the list
	/// then if <expcomp> is True, if a sub-shape is a Compound, it
	/// is not put to the list but its sub-shapes are (recursive)
	/// </summary>
	Macad::Occt::TopTools_HSequenceOfShape^ SeqFromCompound(Macad::Occt::TopoDS_Shape^ comp, bool expcomp);
	/// <summary>
	/// Converts a Sequence of Shapes to a List of Shapes
	/// <clear> if True (D), commands the list to start from scratch
	/// else, the list is cumulated
	/// </summary>
	void ListFromSeq(Macad::Occt::TopTools_HSequenceOfShape^ seqval, Macad::Occt::TopTools_ListOfShape^ lisval, bool clear);
	/// <summary>
	/// Converts a Sequence of Shapes to a List of Shapes
	/// <clear> if True (D), commands the list to start from scratch
	/// else, the list is cumulated
	/// </summary>
	void ListFromSeq(Macad::Occt::TopTools_HSequenceOfShape^ seqval, Macad::Occt::TopTools_ListOfShape^ lisval);
	/// <summary>
	/// Converts a List of Shapes to a Sequence of Shapes
	/// </summary>
	Macad::Occt::TopTools_HSequenceOfShape^ SeqFromList(Macad::Occt::TopTools_ListOfShape^ lisval);
	/// <summary>
	/// Returns the type of a Shape: true type if <compound> is False
	/// If <compound> is True and <shape> is a Compound, iterates on
	/// its items. If all are of the same type, returns this type.
	/// Else, returns COMPOUND. If it is empty, returns SHAPE
	/// For a Null Shape, returns SHAPE
	/// </summary>
	Macad::Occt::TopAbs_ShapeEnum ShapeType(Macad::Occt::TopoDS_Shape^ shape, bool compound);
	/// <summary>
	/// Builds a COMPOUND from the given shape.
	/// It explores the shape level by level, according to the
	/// <explore> argument. If <explore> is False, only COMPOUND
	/// items are explored, else all items are.
	/// The following shapes are added to resulting compound:
	/// - shapes which comply to <type>
	/// - if <type> is WIRE, considers also free edges (and makes wires)
	/// - if <type> is SHELL, considers also free faces (and makes shells)
	/// If <compound> is True, gathers items in compounds which
	/// correspond to starting COMPOUND,SOLID or SHELL containers, or
	/// items directly contained in a Compound
	/// </summary>
	Macad::Occt::TopoDS_Shape^ SortedCompound(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopAbs_ShapeEnum type, bool explore, bool compound);
	/// <summary>
	/// Dispatches starting list of shapes according to their type,
	/// to the appropriate resulting lists
	/// For each of these lists, if it is null, it is firstly created
	/// else, new items are appended to the already existing ones
	/// </summary>
	void DispatchList(Macad::Occt::TopTools_HSequenceOfShape^ list, Macad::Occt::TopTools_HSequenceOfShape^ vertices, Macad::Occt::TopTools_HSequenceOfShape^ edges, Macad::Occt::TopTools_HSequenceOfShape^ wires, Macad::Occt::TopTools_HSequenceOfShape^ faces, Macad::Occt::TopTools_HSequenceOfShape^ shells, Macad::Occt::TopTools_HSequenceOfShape^ solids, Macad::Occt::TopTools_HSequenceOfShape^ compsols, Macad::Occt::TopTools_HSequenceOfShape^ compounds);
}; // class ShapeExtend_Explorer

//---------------------------------------------------------------------
//  Class  ShapeExtend
//---------------------------------------------------------------------
/// <summary>
/// This package provides general tools and data structures common
/// for other packages in SHAPEWORKS and extending CAS.CADE
/// structures.
/// The following items are provided by this package:
/// - enumeration Status used for coding status flags in methods
/// inside the SHAPEWORKS
/// - enumeration Parametrisation used for setting global parametrisation
/// on the composite surface
/// - class CompositeSurface representing a composite surface
/// made of a grid of surface patches
/// - class WireData representing a wire in the form of ordered
/// list of edges
/// - class MsgRegistrator for attaching messages to the objects
/// - tools for exploring the shapes
/// -       tools for creating       new shapes.
/// </summary>
public ref class ShapeExtend sealed : public BaseClass<::ShapeExtend>
{

#ifdef Include_ShapeExtend_h
public:
	Include_ShapeExtend_h
#endif

public:
	ShapeExtend(::ShapeExtend* nativeInstance)
		: BaseClass<::ShapeExtend>( nativeInstance, true )
	{}

	ShapeExtend(::ShapeExtend& nativeInstance)
		: BaseClass<::ShapeExtend>( &nativeInstance, false )
	{}

	property ::ShapeExtend* NativeInstance
	{
		::ShapeExtend* get()
		{
			return static_cast<::ShapeExtend*>(_NativeInstance);
		}
	}

public:
	ShapeExtend();
	ShapeExtend(Macad::Occt::ShapeExtend^ parameter1);
	/// <summary>
	/// Inits using of ShapeExtend.
	/// Currently, loads messages output by ShapeHealing algorithms.
	/// </summary>
	static void Init();
	/// <summary>
	/// Encodes status (enumeration) to a bit flag
	/// </summary>
	static int EncodeStatus(Macad::Occt::ShapeExtend_Status status);
	/// <summary>
	/// Tells if a bit flag contains bit corresponding to enumerated status
	/// </summary>
	static bool DecodeStatus(int flag, Macad::Occt::ShapeExtend_Status status);
}; // class ShapeExtend

}; // namespace Occt
}; // namespace Macad
