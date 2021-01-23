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
	int NbCurves();
	Macad::Occt::Geom_Curve^ Curve(int index);
	int LocateParameter(double U, double% UOut);
	double LocalToGlobal(int index, double Ulocal);
	void Transform(Macad::Occt::Trsf T);
	double ReversedParameter(double U);
	double FirstParameter();
	double LastParameter();
	bool IsClosed();
	bool IsPeriodic();
	Macad::Occt::GeomAbs_Shape Continuity();
	bool IsCN(int N);
	void D0(double U, Macad::Occt::Pnt% P);
	void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	Macad::Occt::Vec DN(double U, int N);
	double GetScaleFactor(int ind);
	bool CheckConnectivity(double Preci);
}; // class ShapeExtend_ComplexCurve

//---------------------------------------------------------------------
//  Class  ShapeExtend_CompositeSurface
//---------------------------------------------------------------------
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
	ShapeExtend_CompositeSurface();
	/* Method skipped due to unknown mapping: void ShapeExtend_CompositeSurface(TColGeom_HArray2OfSurface GridSurf, ShapeExtend_Parametrisation param, ) */
	/* Method skipped due to unknown mapping: void ShapeExtend_CompositeSurface(TColGeom_HArray2OfSurface GridSurf, ShapeExtend_Parametrisation param, ) */
	/* Method skipped due to unknown mapping: void ShapeExtend_CompositeSurface(TColGeom_HArray2OfSurface GridSurf, TColStd_Array1OfReal UJoints, TColStd_Array1OfReal VJoints, ) */
	ShapeExtend_CompositeSurface(Macad::Occt::ShapeExtend_CompositeSurface^ parameter1);
	/* Method skipped due to unknown mapping: Standard_Boolean Init(TColGeom_HArray2OfSurface GridSurf, ShapeExtend_Parametrisation param, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Init(TColGeom_HArray2OfSurface GridSurf, ShapeExtend_Parametrisation param, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Init(TColGeom_HArray2OfSurface GridSurf, TColStd_Array1OfReal UJoints, TColStd_Array1OfReal VJoints, ) */
	int NbUPatches();
	int NbVPatches();
	Macad::Occt::Geom_Surface^ Patch(int i, int j);
	/* Method skipped due to unknown mapping: TColGeom_HArray2OfSurface Patches() */
	Macad::Occt::TColStd_HArray1OfReal^ UJointValues();
	Macad::Occt::TColStd_HArray1OfReal^ VJointValues();
	double UJointValue(int i);
	double VJointValue(int j);
	bool SetUJointValues(Macad::Occt::TColStd_Array1OfReal^ UJoints);
	bool SetVJointValues(Macad::Occt::TColStd_Array1OfReal^ VJoints);
	void SetUFirstValue(double UFirst);
	void SetVFirstValue(double VFirst);
	int LocateUParameter(double U);
	int LocateVParameter(double V);
	void LocateUVPoint(Macad::Occt::Pnt2d pnt, int% i, int% j);
	Macad::Occt::Geom_Surface^ Patch(double U, double V);
	Macad::Occt::Geom_Surface^ Patch(Macad::Occt::Pnt2d pnt);
	double ULocalToGlobal(int i, int j, double u);
	double VLocalToGlobal(int i, int j, double v);
	Macad::Occt::Pnt2d LocalToGlobal(int i, int j, Macad::Occt::Pnt2d uv);
	double UGlobalToLocal(int i, int j, double U);
	double VGlobalToLocal(int i, int j, double V);
	Macad::Occt::Pnt2d GlobalToLocal(int i, int j, Macad::Occt::Pnt2d UV);
	bool GlobalToLocalTransformation(int i, int j, double% uFact, Macad::Occt::Trsf2d% Trsf);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
	void UReverse();
	double UReversedParameter(double U);
	void VReverse();
	double VReversedParameter(double V);
	void Bounds(double% U1, double% U2, double% V1, double% V2);
	bool IsUClosed();
	bool IsVClosed();
	bool IsUPeriodic();
	bool IsVPeriodic();
	Macad::Occt::Geom_Curve^ UIso(double U);
	Macad::Occt::Geom_Curve^ VIso(double V);
	Macad::Occt::GeomAbs_Shape Continuity();
	bool IsCNu(int N);
	bool IsCNv(int N);
	void D0(double U, double V, Macad::Occt::Pnt% P);
	void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
	void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
	void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
	Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
	Macad::Occt::Pnt Value(Macad::Occt::Pnt2d pnt);
	void ComputeJointValues(Macad::Occt::ShapeExtend_Parametrisation param);
	void ComputeJointValues();
	bool CheckConnectivity(double prec);
}; // class ShapeExtend_CompositeSurface

//---------------------------------------------------------------------
//  Class  ShapeExtend_WireData
//---------------------------------------------------------------------
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
	ShapeExtend_WireData();
	ShapeExtend_WireData(Macad::Occt::TopoDS_Wire^ wire, bool chained, bool theManifoldMode);
	ShapeExtend_WireData(Macad::Occt::TopoDS_Wire^ wire, bool chained);
	ShapeExtend_WireData(Macad::Occt::TopoDS_Wire^ wire);
	ShapeExtend_WireData(Macad::Occt::ShapeExtend_WireData^ parameter1);
	void Init(Macad::Occt::ShapeExtend_WireData^ other);
	bool Init(Macad::Occt::TopoDS_Wire^ wire, bool chained, bool theManifoldMode);
	bool Init(Macad::Occt::TopoDS_Wire^ wire, bool chained);
	bool Init(Macad::Occt::TopoDS_Wire^ wire);
	void Clear();
	void ComputeSeams(bool enforce);
	void ComputeSeams();
	void SetLast(int num);
	void SetDegeneratedLast();
	void Add(Macad::Occt::TopoDS_Edge^ edge, int atnum);
	void Add(Macad::Occt::TopoDS_Edge^ edge);
	void Add(Macad::Occt::TopoDS_Wire^ wire, int atnum);
	void Add(Macad::Occt::TopoDS_Wire^ wire);
	void Add(Macad::Occt::ShapeExtend_WireData^ wire, int atnum);
	void Add(Macad::Occt::ShapeExtend_WireData^ wire);
	void Add(Macad::Occt::TopoDS_Shape^ shape, int atnum);
	void Add(Macad::Occt::TopoDS_Shape^ shape);
	void AddOriented(Macad::Occt::TopoDS_Edge^ edge, int mode);
	void AddOriented(Macad::Occt::TopoDS_Wire^ wire, int mode);
	void AddOriented(Macad::Occt::TopoDS_Shape^ shape, int mode);
	void Remove(int num);
	void Remove();
	void Set(Macad::Occt::TopoDS_Edge^ edge, int num);
	void Set(Macad::Occt::TopoDS_Edge^ edge);
	void Reverse();
	void Reverse(Macad::Occt::TopoDS_Face^ face);
	int NbEdges();
	int NbNonManifoldEdges();
	Macad::Occt::TopoDS_Edge^ NonmanifoldEdge(int num);
	Macad::Occt::TopTools_HSequenceOfShape^ NonmanifoldEdges();
	bool ManifoldMode();
	Macad::Occt::TopoDS_Edge^ Edge(int num);
	int Index(Macad::Occt::TopoDS_Edge^ edge);
	bool IsSeam(int num);
	Macad::Occt::TopoDS_Wire^ Wire();
	Macad::Occt::TopoDS_Wire^ WireAPIMake();
}; // class ShapeExtend_WireData

//---------------------------------------------------------------------
//  Class  ShapeExtend_BasicMsgRegistrator
//---------------------------------------------------------------------
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
	ShapeExtend_BasicMsgRegistrator();
	ShapeExtend_BasicMsgRegistrator(Macad::Occt::ShapeExtend_BasicMsgRegistrator^ parameter1);
	void Send(Macad::Occt::Standard_Transient^ object, Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity);
	void Send(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity);
	void Send(Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity);
}; // class ShapeExtend_BasicMsgRegistrator

//---------------------------------------------------------------------
//  Class  ShapeExtend_MsgRegistrator
//---------------------------------------------------------------------
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
	ShapeExtend_MsgRegistrator();
	ShapeExtend_MsgRegistrator(Macad::Occt::ShapeExtend_MsgRegistrator^ parameter1);
	void Send(Macad::Occt::Standard_Transient^ object, Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity);
	void Send(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity);
	Macad::Occt::ShapeExtend_DataMapOfTransientListOfMsg^ MapTransient();
	Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg^ MapShape();
}; // class ShapeExtend_MsgRegistrator

//---------------------------------------------------------------------
//  Class  ShapeExtend_Explorer
//---------------------------------------------------------------------
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
	ShapeExtend_Explorer();
	ShapeExtend_Explorer(Macad::Occt::ShapeExtend_Explorer^ parameter1);
	Macad::Occt::TopoDS_Shape^ CompoundFromSeq(Macad::Occt::TopTools_HSequenceOfShape^ seqval);
	Macad::Occt::TopTools_HSequenceOfShape^ SeqFromCompound(Macad::Occt::TopoDS_Shape^ comp, bool expcomp);
	void ListFromSeq(Macad::Occt::TopTools_HSequenceOfShape^ seqval, Macad::Occt::TopTools_ListOfShape^ lisval, bool clear);
	void ListFromSeq(Macad::Occt::TopTools_HSequenceOfShape^ seqval, Macad::Occt::TopTools_ListOfShape^ lisval);
	Macad::Occt::TopTools_HSequenceOfShape^ SeqFromList(Macad::Occt::TopTools_ListOfShape^ lisval);
	Macad::Occt::TopAbs_ShapeEnum ShapeType(Macad::Occt::TopoDS_Shape^ shape, bool compound);
	Macad::Occt::TopoDS_Shape^ SortedCompound(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopAbs_ShapeEnum type, bool explore, bool compound);
	void DispatchList(Macad::Occt::TopTools_HSequenceOfShape^ list, Macad::Occt::TopTools_HSequenceOfShape^ vertices, Macad::Occt::TopTools_HSequenceOfShape^ edges, Macad::Occt::TopTools_HSequenceOfShape^ wires, Macad::Occt::TopTools_HSequenceOfShape^ faces, Macad::Occt::TopTools_HSequenceOfShape^ shells, Macad::Occt::TopTools_HSequenceOfShape^ solids, Macad::Occt::TopTools_HSequenceOfShape^ compsols, Macad::Occt::TopTools_HSequenceOfShape^ compounds);
}; // class ShapeExtend_Explorer

//---------------------------------------------------------------------
//  Class  ShapeExtend
//---------------------------------------------------------------------
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
	static void Init();
	static int EncodeStatus(Macad::Occt::ShapeExtend_Status status);
	static bool DecodeStatus(int flag, Macad::Occt::ShapeExtend_Status status);
}; // class ShapeExtend

}; // namespace Occt
}; // namespace Macad
