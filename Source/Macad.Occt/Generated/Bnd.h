// Generated wrapper code for package Bnd

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  Bnd_Array1OfBox
//---------------------------------------------------------------------
public ref class Bnd_Array1OfBox sealed : public BaseClass<::Bnd_Array1OfBox>
{

#ifdef Include_Bnd_Array1OfBox_h
public:
	Include_Bnd_Array1OfBox_h
#endif

public:
	Bnd_Array1OfBox(::Bnd_Array1OfBox* nativeInstance)
		: BaseClass<::Bnd_Array1OfBox>( nativeInstance, true )
	{}

	Bnd_Array1OfBox(::Bnd_Array1OfBox& nativeInstance)
		: BaseClass<::Bnd_Array1OfBox>( &nativeInstance, false )
	{}

	property ::Bnd_Array1OfBox* NativeInstance
	{
		::Bnd_Array1OfBox* get()
		{
			return static_cast<::Bnd_Array1OfBox*>(_NativeInstance);
		}
	}

public:
	Bnd_Array1OfBox();
	Bnd_Array1OfBox(int theLower, int theUpper);
	Bnd_Array1OfBox(Macad::Occt::Bnd_Array1OfBox^ theOther);
	Bnd_Array1OfBox(Macad::Occt::Bnd_Box^ theBegin, int theLower, int theUpper);
	void Init(Macad::Occt::Bnd_Box^ theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	Macad::Occt::Bnd_Array1OfBox^ Assign(Macad::Occt::Bnd_Array1OfBox^ theOther);
	Macad::Occt::Bnd_Array1OfBox^ Move(Macad::Occt::Bnd_Array1OfBox^ theOther);
	Macad::Occt::Bnd_Box^ First();
	Macad::Occt::Bnd_Box^ ChangeFirst();
	Macad::Occt::Bnd_Box^ Last();
	Macad::Occt::Bnd_Box^ ChangeLast();
	Macad::Occt::Bnd_Box^ Value(int theIndex);
	Macad::Occt::Bnd_Box^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Bnd_Box^ theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class Bnd_Array1OfBox

//---------------------------------------------------------------------
//  Class  Bnd_Array1OfBox2d
//---------------------------------------------------------------------
public ref class Bnd_Array1OfBox2d sealed : public BaseClass<::Bnd_Array1OfBox2d>
{

#ifdef Include_Bnd_Array1OfBox2d_h
public:
	Include_Bnd_Array1OfBox2d_h
#endif

public:
	Bnd_Array1OfBox2d(::Bnd_Array1OfBox2d* nativeInstance)
		: BaseClass<::Bnd_Array1OfBox2d>( nativeInstance, true )
	{}

	Bnd_Array1OfBox2d(::Bnd_Array1OfBox2d& nativeInstance)
		: BaseClass<::Bnd_Array1OfBox2d>( &nativeInstance, false )
	{}

	property ::Bnd_Array1OfBox2d* NativeInstance
	{
		::Bnd_Array1OfBox2d* get()
		{
			return static_cast<::Bnd_Array1OfBox2d*>(_NativeInstance);
		}
	}

public:
	Bnd_Array1OfBox2d();
	Bnd_Array1OfBox2d(int theLower, int theUpper);
	Bnd_Array1OfBox2d(Macad::Occt::Bnd_Array1OfBox2d^ theOther);
	Bnd_Array1OfBox2d(Macad::Occt::Bnd_Box2d^ theBegin, int theLower, int theUpper);
	void Init(Macad::Occt::Bnd_Box2d^ theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	Macad::Occt::Bnd_Array1OfBox2d^ Assign(Macad::Occt::Bnd_Array1OfBox2d^ theOther);
	Macad::Occt::Bnd_Array1OfBox2d^ Move(Macad::Occt::Bnd_Array1OfBox2d^ theOther);
	Macad::Occt::Bnd_Box2d^ First();
	Macad::Occt::Bnd_Box2d^ ChangeFirst();
	Macad::Occt::Bnd_Box2d^ Last();
	Macad::Occt::Bnd_Box2d^ ChangeLast();
	Macad::Occt::Bnd_Box2d^ Value(int theIndex);
	Macad::Occt::Bnd_Box2d^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Bnd_Box2d^ theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class Bnd_Array1OfBox2d

//---------------------------------------------------------------------
//  Class  Bnd_Array1OfSphere
//---------------------------------------------------------------------
public ref class Bnd_Array1OfSphere sealed : public BaseClass<::Bnd_Array1OfSphere>
{

#ifdef Include_Bnd_Array1OfSphere_h
public:
	Include_Bnd_Array1OfSphere_h
#endif

public:
	Bnd_Array1OfSphere(::Bnd_Array1OfSphere* nativeInstance)
		: BaseClass<::Bnd_Array1OfSphere>( nativeInstance, true )
	{}

	Bnd_Array1OfSphere(::Bnd_Array1OfSphere& nativeInstance)
		: BaseClass<::Bnd_Array1OfSphere>( &nativeInstance, false )
	{}

	property ::Bnd_Array1OfSphere* NativeInstance
	{
		::Bnd_Array1OfSphere* get()
		{
			return static_cast<::Bnd_Array1OfSphere*>(_NativeInstance);
		}
	}

public:
	Bnd_Array1OfSphere();
	Bnd_Array1OfSphere(int theLower, int theUpper);
	Bnd_Array1OfSphere(Macad::Occt::Bnd_Array1OfSphere^ theOther);
	Bnd_Array1OfSphere(Macad::Occt::Bnd_Sphere^ theBegin, int theLower, int theUpper);
	void Init(Macad::Occt::Bnd_Sphere^ theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	Macad::Occt::Bnd_Array1OfSphere^ Assign(Macad::Occt::Bnd_Array1OfSphere^ theOther);
	Macad::Occt::Bnd_Array1OfSphere^ Move(Macad::Occt::Bnd_Array1OfSphere^ theOther);
	Macad::Occt::Bnd_Sphere^ First();
	Macad::Occt::Bnd_Sphere^ ChangeFirst();
	Macad::Occt::Bnd_Sphere^ Last();
	Macad::Occt::Bnd_Sphere^ ChangeLast();
	Macad::Occt::Bnd_Sphere^ Value(int theIndex);
	Macad::Occt::Bnd_Sphere^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Bnd_Sphere^ theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class Bnd_Array1OfSphere

//---------------------------------------------------------------------
//  Class  Bnd_SeqOfBox
//---------------------------------------------------------------------
public ref class Bnd_SeqOfBox sealed : public BaseClass<::Bnd_SeqOfBox>
{

#ifdef Include_Bnd_SeqOfBox_h
public:
	Include_Bnd_SeqOfBox_h
#endif

public:
	Bnd_SeqOfBox(::Bnd_SeqOfBox* nativeInstance)
		: BaseClass<::Bnd_SeqOfBox>( nativeInstance, true )
	{}

	Bnd_SeqOfBox(::Bnd_SeqOfBox& nativeInstance)
		: BaseClass<::Bnd_SeqOfBox>( &nativeInstance, false )
	{}

	property ::Bnd_SeqOfBox* NativeInstance
	{
		::Bnd_SeqOfBox* get()
		{
			return static_cast<::Bnd_SeqOfBox*>(_NativeInstance);
		}
	}

public:
	Bnd_SeqOfBox();
	Bnd_SeqOfBox(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Bnd_SeqOfBox(Macad::Occt::Bnd_SeqOfBox^ theOther);
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
	Macad::Occt::Bnd_SeqOfBox^ Assign(Macad::Occt::Bnd_SeqOfBox^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::Bnd_Box^ theItem);
	void Append(Macad::Occt::Bnd_SeqOfBox^ theSeq);
	void Prepend(Macad::Occt::Bnd_Box^ theItem);
	void Prepend(Macad::Occt::Bnd_SeqOfBox^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::Bnd_Box^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::Bnd_SeqOfBox^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Bnd_Box theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::Bnd_SeqOfBox^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::Bnd_Box^ theItem);
	void Split(int theIndex, Macad::Occt::Bnd_SeqOfBox^ theSeq);
	Macad::Occt::Bnd_Box^ First();
	Macad::Occt::Bnd_Box^ ChangeFirst();
	Macad::Occt::Bnd_Box^ Last();
	Macad::Occt::Bnd_Box^ ChangeLast();
	Macad::Occt::Bnd_Box^ Value(int theIndex);
	Macad::Occt::Bnd_Box^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Bnd_Box^ theItem);
}; // class Bnd_SeqOfBox

//---------------------------------------------------------------------
//  Class  Bnd_Box
//---------------------------------------------------------------------
public ref class Bnd_Box sealed : public BaseClass<::Bnd_Box>
{

#ifdef Include_Bnd_Box_h
public:
	Include_Bnd_Box_h
#endif

public:
	Bnd_Box(::Bnd_Box* nativeInstance)
		: BaseClass<::Bnd_Box>( nativeInstance, true )
	{}

	Bnd_Box(::Bnd_Box& nativeInstance)
		: BaseClass<::Bnd_Box>( &nativeInstance, false )
	{}

	property ::Bnd_Box* NativeInstance
	{
		::Bnd_Box* get()
		{
			return static_cast<::Bnd_Box*>(_NativeInstance);
		}
	}

public:
	//---------------------------------------------------------------------
	//  Enum  MaskFlags
	//---------------------------------------------------------------------
	enum class MaskFlags
	{
		VoidMask = 1,
		XminMask = 2,
		XmaxMask = 4,
		YminMask = 8,
		YmaxMask = 16,
		ZminMask = 32,
		ZmaxMask = 64,
		WholeMask = 126
	}; // enum  class MaskFlags

	Bnd_Box();
	Bnd_Box(Macad::Occt::Pnt theMin, Macad::Occt::Pnt theMax);
	Bnd_Box(Macad::Occt::Bnd_Box^ parameter1);
	void SetWhole();
	void SetVoid();
	void Set(Macad::Occt::Pnt P);
	void Set(Macad::Occt::Pnt P, Macad::Occt::Dir D);
	void Update(double aXmin, double aYmin, double aZmin, double aXmax, double aYmax, double aZmax);
	void Update(double X, double Y, double Z);
	double GetGap();
	void SetGap(double Tol);
	void Enlarge(double Tol);
	void Get(double% theXmin, double% theYmin, double% theZmin, double% theXmax, double% theYmax, double% theZmax);
	Macad::Occt::Pnt CornerMin();
	Macad::Occt::Pnt CornerMax();
	void OpenXmin();
	void OpenXmax();
	void OpenYmin();
	void OpenYmax();
	void OpenZmin();
	void OpenZmax();
	bool IsOpen();
	bool IsOpenXmin();
	bool IsOpenXmax();
	bool IsOpenYmin();
	bool IsOpenYmax();
	bool IsOpenZmin();
	bool IsOpenZmax();
	bool IsWhole();
	bool IsVoid();
	bool IsXThin(double tol);
	bool IsYThin(double tol);
	bool IsZThin(double tol);
	bool IsThin(double tol);
	Macad::Occt::Bnd_Box^ Transformed(Macad::Occt::Trsf T);
	void Add(Macad::Occt::Bnd_Box^ Other);
	void Add(Macad::Occt::Pnt P);
	void Add(Macad::Occt::Pnt P, Macad::Occt::Dir D);
	void Add(Macad::Occt::Dir D);
	bool IsOut(Macad::Occt::Pnt P);
	bool IsOut(Macad::Occt::gp_Lin^ L);
	bool IsOut(Macad::Occt::Pln P);
	bool IsOut(Macad::Occt::Bnd_Box^ Other);
	bool IsOut(Macad::Occt::Bnd_Box^ Other, Macad::Occt::Trsf T);
	bool IsOut(Macad::Occt::Trsf T1, Macad::Occt::Bnd_Box^ Other, Macad::Occt::Trsf T2);
	bool IsOut(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Dir D);
	double Distance(Macad::Occt::Bnd_Box^ Other);
	void Dump();
	double SquareExtent();
	Macad::Occt::Bnd_Box^ FinitePart();
	bool HasFinitePart();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean InitFromJson(stringstream theSStream, Standard_Integer theStreamPos, ) */
}; // class Bnd_Box

//---------------------------------------------------------------------
//  Class  Bnd_Box2d
//---------------------------------------------------------------------
public ref class Bnd_Box2d sealed : public BaseClass<::Bnd_Box2d>
{

#ifdef Include_Bnd_Box2d_h
public:
	Include_Bnd_Box2d_h
#endif

public:
	Bnd_Box2d(::Bnd_Box2d* nativeInstance)
		: BaseClass<::Bnd_Box2d>( nativeInstance, true )
	{}

	Bnd_Box2d(::Bnd_Box2d& nativeInstance)
		: BaseClass<::Bnd_Box2d>( &nativeInstance, false )
	{}

	property ::Bnd_Box2d* NativeInstance
	{
		::Bnd_Box2d* get()
		{
			return static_cast<::Bnd_Box2d*>(_NativeInstance);
		}
	}

public:
	//---------------------------------------------------------------------
	//  Enum  MaskFlags
	//---------------------------------------------------------------------
	enum class MaskFlags
	{
		VoidMask = 1,
		XminMask = 2,
		XmaxMask = 4,
		YminMask = 8,
		YmaxMask = 16,
		WholeMask = 30
	}; // enum  class MaskFlags

	Bnd_Box2d();
	Bnd_Box2d(Macad::Occt::Bnd_Box2d^ parameter1);
	void SetWhole();
	void SetVoid();
	void Set(Macad::Occt::Pnt2d thePnt);
	void Set(Macad::Occt::Pnt2d thePnt, Macad::Occt::Dir2d theDir);
	void Update(double aXmin, double aYmin, double aXmax, double aYmax);
	void Update(double X, double Y);
	double GetGap();
	void SetGap(double Tol);
	void Enlarge(double theTol);
	void Get(double% aXmin, double% aYmin, double% aXmax, double% aYmax);
	void OpenXmin();
	void OpenXmax();
	void OpenYmin();
	void OpenYmax();
	bool IsOpenXmin();
	bool IsOpenXmax();
	bool IsOpenYmin();
	bool IsOpenYmax();
	bool IsWhole();
	bool IsVoid();
	Macad::Occt::Bnd_Box2d^ Transformed(Macad::Occt::Trsf2d T);
	void Add(Macad::Occt::Bnd_Box2d^ Other);
	void Add(Macad::Occt::Pnt2d thePnt);
	void Add(Macad::Occt::Pnt2d thePnt, Macad::Occt::Dir2d theDir);
	void Add(Macad::Occt::Dir2d D);
	bool IsOut(Macad::Occt::Pnt2d P);
	bool IsOut(Macad::Occt::gp_Lin2d^ theL);
	bool IsOut(Macad::Occt::Pnt2d theP0, Macad::Occt::Pnt2d theP1);
	bool IsOut(Macad::Occt::Bnd_Box2d^ Other);
	bool IsOut(Macad::Occt::Bnd_Box2d^ theOther, Macad::Occt::Trsf2d theTrsf);
	bool IsOut(Macad::Occt::Trsf2d T1, Macad::Occt::Bnd_Box2d^ Other, Macad::Occt::Trsf2d T2);
	void Dump();
	double SquareExtent();
}; // class Bnd_Box2d

//---------------------------------------------------------------------
//  Class  Bnd_Sphere
//---------------------------------------------------------------------
public ref class Bnd_Sphere sealed : public BaseClass<::Bnd_Sphere>
{

#ifdef Include_Bnd_Sphere_h
public:
	Include_Bnd_Sphere_h
#endif

public:
	Bnd_Sphere(::Bnd_Sphere* nativeInstance)
		: BaseClass<::Bnd_Sphere>( nativeInstance, true )
	{}

	Bnd_Sphere(::Bnd_Sphere& nativeInstance)
		: BaseClass<::Bnd_Sphere>( &nativeInstance, false )
	{}

	property ::Bnd_Sphere* NativeInstance
	{
		::Bnd_Sphere* get()
		{
			return static_cast<::Bnd_Sphere*>(_NativeInstance);
		}
	}

public:
	Bnd_Sphere();
	Bnd_Sphere(Macad::Occt::XYZ theCntr, double theRad, int theU, int theV);
	Bnd_Sphere(Macad::Occt::Bnd_Sphere^ parameter1);
	int U();
	int V();
	bool IsValid();
	void SetValid(bool isValid);
	Macad::Occt::XYZ Center();
	double Radius();
	void Distances(Macad::Occt::XYZ theXYZ, double% theMin, double% theMax);
	void SquareDistances(Macad::Occt::XYZ theXYZ, double% theMin, double% theMax);
	bool Project(Macad::Occt::XYZ theNode, Macad::Occt::XYZ% theProjNode, double% theDist, bool% theInside);
	double Distance(Macad::Occt::XYZ theNode);
	double SquareDistance(Macad::Occt::XYZ theNode);
	void Add(Macad::Occt::Bnd_Sphere^ theOther);
	bool IsOut(Macad::Occt::Bnd_Sphere^ theOther);
	bool IsOut(Macad::Occt::XYZ thePnt, double% theMaxDist);
	double SquareExtent();
}; // class Bnd_Sphere

//---------------------------------------------------------------------
//  Class  Bnd_B2d
//---------------------------------------------------------------------
public ref class Bnd_B2d sealed : public BaseClass<::Bnd_B2d>
{

#ifdef Include_Bnd_B2d_h
public:
	Include_Bnd_B2d_h
#endif

public:
	Bnd_B2d(::Bnd_B2d* nativeInstance)
		: BaseClass<::Bnd_B2d>( nativeInstance, true )
	{}

	Bnd_B2d(::Bnd_B2d& nativeInstance)
		: BaseClass<::Bnd_B2d>( &nativeInstance, false )
	{}

	property ::Bnd_B2d* NativeInstance
	{
		::Bnd_B2d* get()
		{
			return static_cast<::Bnd_B2d*>(_NativeInstance);
		}
	}

public:
	Bnd_B2d();
	Bnd_B2d(Macad::Occt::XY theCenter, Macad::Occt::XY theHSize);
	Bnd_B2d(Macad::Occt::Bnd_B2d^ parameter1);
	bool IsVoid();
	void Clear();
	void Add(Macad::Occt::XY thePnt);
	void Add(Macad::Occt::Pnt2d thePnt);
	void Add(Macad::Occt::Bnd_B2d^ theBox);
	Macad::Occt::XY CornerMin();
	Macad::Occt::XY CornerMax();
	double SquareExtent();
	void Enlarge(double theDiff);
	bool Limit(Macad::Occt::Bnd_B2d^ theOtherBox);
	Macad::Occt::Bnd_B2d^ Transformed(Macad::Occt::Trsf2d theTrsf);
	bool IsOut(Macad::Occt::XY thePnt);
	bool IsOut(Macad::Occt::XY theCenter, double theRadius, bool isCircleHollow);
	bool IsOut(Macad::Occt::XY theCenter, double theRadius);
	bool IsOut(Macad::Occt::Bnd_B2d^ theOtherBox);
	bool IsOut(Macad::Occt::Bnd_B2d^ theOtherBox, Macad::Occt::Trsf2d theTrsf);
	bool IsOut(Macad::Occt::Ax2d theLine);
	bool IsOut(Macad::Occt::XY theP0, Macad::Occt::XY theP1);
	bool IsIn(Macad::Occt::Bnd_B2d^ theBox);
	bool IsIn(Macad::Occt::Bnd_B2d^ theBox, Macad::Occt::Trsf2d theTrsf);
	void SetCenter(Macad::Occt::XY theCenter);
	void SetHSize(Macad::Occt::XY theHSize);
}; // class Bnd_B2d

//---------------------------------------------------------------------
//  Class  Bnd_B2f
//---------------------------------------------------------------------
public ref class Bnd_B2f sealed : public BaseClass<::Bnd_B2f>
{

#ifdef Include_Bnd_B2f_h
public:
	Include_Bnd_B2f_h
#endif

public:
	Bnd_B2f(::Bnd_B2f* nativeInstance)
		: BaseClass<::Bnd_B2f>( nativeInstance, true )
	{}

	Bnd_B2f(::Bnd_B2f& nativeInstance)
		: BaseClass<::Bnd_B2f>( &nativeInstance, false )
	{}

	property ::Bnd_B2f* NativeInstance
	{
		::Bnd_B2f* get()
		{
			return static_cast<::Bnd_B2f*>(_NativeInstance);
		}
	}

public:
	Bnd_B2f();
	Bnd_B2f(Macad::Occt::XY theCenter, Macad::Occt::XY theHSize);
	Bnd_B2f(Macad::Occt::Bnd_B2f^ parameter1);
	bool IsVoid();
	void Clear();
	void Add(Macad::Occt::XY thePnt);
	void Add(Macad::Occt::Pnt2d thePnt);
	void Add(Macad::Occt::Bnd_B2f^ theBox);
	Macad::Occt::XY CornerMin();
	Macad::Occt::XY CornerMax();
	double SquareExtent();
	void Enlarge(double theDiff);
	bool Limit(Macad::Occt::Bnd_B2f^ theOtherBox);
	Macad::Occt::Bnd_B2f^ Transformed(Macad::Occt::Trsf2d theTrsf);
	bool IsOut(Macad::Occt::XY thePnt);
	bool IsOut(Macad::Occt::XY theCenter, double theRadius, bool isCircleHollow);
	bool IsOut(Macad::Occt::XY theCenter, double theRadius);
	bool IsOut(Macad::Occt::Bnd_B2f^ theOtherBox);
	bool IsOut(Macad::Occt::Bnd_B2f^ theOtherBox, Macad::Occt::Trsf2d theTrsf);
	bool IsOut(Macad::Occt::Ax2d theLine);
	bool IsOut(Macad::Occt::XY theP0, Macad::Occt::XY theP1);
	bool IsIn(Macad::Occt::Bnd_B2f^ theBox);
	bool IsIn(Macad::Occt::Bnd_B2f^ theBox, Macad::Occt::Trsf2d theTrsf);
	void SetCenter(Macad::Occt::XY theCenter);
	void SetHSize(Macad::Occt::XY theHSize);
}; // class Bnd_B2f

//---------------------------------------------------------------------
//  Class  Bnd_B3d
//---------------------------------------------------------------------
public ref class Bnd_B3d sealed : public BaseClass<::Bnd_B3d>
{

#ifdef Include_Bnd_B3d_h
public:
	Include_Bnd_B3d_h
#endif

public:
	Bnd_B3d(::Bnd_B3d* nativeInstance)
		: BaseClass<::Bnd_B3d>( nativeInstance, true )
	{}

	Bnd_B3d(::Bnd_B3d& nativeInstance)
		: BaseClass<::Bnd_B3d>( &nativeInstance, false )
	{}

	property ::Bnd_B3d* NativeInstance
	{
		::Bnd_B3d* get()
		{
			return static_cast<::Bnd_B3d*>(_NativeInstance);
		}
	}

public:
	Bnd_B3d();
	Bnd_B3d(Macad::Occt::XYZ theCenter, Macad::Occt::XYZ theHSize);
	Bnd_B3d(Macad::Occt::Bnd_B3d^ parameter1);
	bool IsVoid();
	void Clear();
	void Add(Macad::Occt::XYZ thePnt);
	void Add(Macad::Occt::Pnt thePnt);
	void Add(Macad::Occt::Bnd_B3d^ theBox);
	Macad::Occt::XYZ CornerMin();
	Macad::Occt::XYZ CornerMax();
	double SquareExtent();
	void Enlarge(double theDiff);
	bool Limit(Macad::Occt::Bnd_B3d^ theOtherBox);
	Macad::Occt::Bnd_B3d^ Transformed(Macad::Occt::Trsf theTrsf);
	bool IsOut(Macad::Occt::XYZ thePnt);
	bool IsOut(Macad::Occt::XYZ theCenter, double theRadius, bool isSphereHollow);
	bool IsOut(Macad::Occt::XYZ theCenter, double theRadius);
	bool IsOut(Macad::Occt::Bnd_B3d^ theOtherBox);
	bool IsOut(Macad::Occt::Bnd_B3d^ theOtherBox, Macad::Occt::Trsf theTrsf);
	bool IsOut(Macad::Occt::Ax1 theLine, bool isRay, double theOverthickness);
	bool IsOut(Macad::Occt::Ax1 theLine, bool isRay);
	bool IsOut(Macad::Occt::Ax1 theLine);
	bool IsOut(Macad::Occt::Ax3 thePlane);
	bool IsIn(Macad::Occt::Bnd_B3d^ theBox);
	bool IsIn(Macad::Occt::Bnd_B3d^ theBox, Macad::Occt::Trsf theTrsf);
	void SetCenter(Macad::Occt::XYZ theCenter);
	void SetHSize(Macad::Occt::XYZ theHSize);
}; // class Bnd_B3d

//---------------------------------------------------------------------
//  Class  Bnd_B3f
//---------------------------------------------------------------------
public ref class Bnd_B3f sealed : public BaseClass<::Bnd_B3f>
{

#ifdef Include_Bnd_B3f_h
public:
	Include_Bnd_B3f_h
#endif

public:
	Bnd_B3f(::Bnd_B3f* nativeInstance)
		: BaseClass<::Bnd_B3f>( nativeInstance, true )
	{}

	Bnd_B3f(::Bnd_B3f& nativeInstance)
		: BaseClass<::Bnd_B3f>( &nativeInstance, false )
	{}

	property ::Bnd_B3f* NativeInstance
	{
		::Bnd_B3f* get()
		{
			return static_cast<::Bnd_B3f*>(_NativeInstance);
		}
	}

public:
	Bnd_B3f();
	Bnd_B3f(Macad::Occt::XYZ theCenter, Macad::Occt::XYZ theHSize);
	Bnd_B3f(Macad::Occt::Bnd_B3f^ parameter1);
	bool IsVoid();
	void Clear();
	void Add(Macad::Occt::XYZ thePnt);
	void Add(Macad::Occt::Pnt thePnt);
	void Add(Macad::Occt::Bnd_B3f^ theBox);
	Macad::Occt::XYZ CornerMin();
	Macad::Occt::XYZ CornerMax();
	double SquareExtent();
	void Enlarge(double theDiff);
	bool Limit(Macad::Occt::Bnd_B3f^ theOtherBox);
	Macad::Occt::Bnd_B3f^ Transformed(Macad::Occt::Trsf theTrsf);
	bool IsOut(Macad::Occt::XYZ thePnt);
	bool IsOut(Macad::Occt::XYZ theCenter, double theRadius, bool isSphereHollow);
	bool IsOut(Macad::Occt::XYZ theCenter, double theRadius);
	bool IsOut(Macad::Occt::Bnd_B3f^ theOtherBox);
	bool IsOut(Macad::Occt::Bnd_B3f^ theOtherBox, Macad::Occt::Trsf theTrsf);
	bool IsOut(Macad::Occt::Ax1 theLine, bool isRay, double theOverthickness);
	bool IsOut(Macad::Occt::Ax1 theLine, bool isRay);
	bool IsOut(Macad::Occt::Ax1 theLine);
	bool IsOut(Macad::Occt::Ax3 thePlane);
	bool IsIn(Macad::Occt::Bnd_B3f^ theBox);
	bool IsIn(Macad::Occt::Bnd_B3f^ theBox, Macad::Occt::Trsf theTrsf);
	void SetCenter(Macad::Occt::XYZ theCenter);
	void SetHSize(Macad::Occt::XYZ theHSize);
}; // class Bnd_B3f

//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfBox
//---------------------------------------------------------------------
public ref class Bnd_HArray1OfBox sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Bnd_HArray1OfBox_h
public:
	Include_Bnd_HArray1OfBox_h
#endif

public:
	Bnd_HArray1OfBox(::Bnd_HArray1OfBox* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Bnd_HArray1OfBox(::Bnd_HArray1OfBox& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Bnd_HArray1OfBox* NativeInstance
	{
		::Bnd_HArray1OfBox* get()
		{
			return static_cast<::Bnd_HArray1OfBox*>(_NativeInstance);
		}
	}

	static Macad::Occt::Bnd_HArray1OfBox^ CreateDowncasted(::Bnd_HArray1OfBox* instance);

public:
	Bnd_HArray1OfBox();
	Bnd_HArray1OfBox(int theLower, int theUpper);
	Bnd_HArray1OfBox(int theLower, int theUpper, Macad::Occt::Bnd_Box^ theValue);
	Bnd_HArray1OfBox(Macad::Occt::Bnd_Array1OfBox^ theOther);
	Bnd_HArray1OfBox(Macad::Occt::Bnd_HArray1OfBox^ parameter1);
	Macad::Occt::Bnd_Array1OfBox^ Array1();
	Macad::Occt::Bnd_Array1OfBox^ ChangeArray1();
	void Init(Macad::Occt::Bnd_Box^ theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	/* Method skipped due to unknown mapping: NCollection_Array1<Bnd_Box> Assign(NCollection_Array1<Bnd_Box> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array1<Bnd_Box> Move(NCollection_Array1<Bnd_Box> theOther, ) */
	Macad::Occt::Bnd_Box^ First();
	Macad::Occt::Bnd_Box^ ChangeFirst();
	Macad::Occt::Bnd_Box^ Last();
	Macad::Occt::Bnd_Box^ ChangeLast();
	Macad::Occt::Bnd_Box^ Value(int theIndex);
	Macad::Occt::Bnd_Box^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Bnd_Box^ theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class Bnd_HArray1OfBox

//---------------------------------------------------------------------
//  Class  Bnd_BoundSortBox
//---------------------------------------------------------------------
public ref class Bnd_BoundSortBox sealed : public BaseClass<::Bnd_BoundSortBox>
{

#ifdef Include_Bnd_BoundSortBox_h
public:
	Include_Bnd_BoundSortBox_h
#endif

public:
	Bnd_BoundSortBox(::Bnd_BoundSortBox* nativeInstance)
		: BaseClass<::Bnd_BoundSortBox>( nativeInstance, true )
	{}

	Bnd_BoundSortBox(::Bnd_BoundSortBox& nativeInstance)
		: BaseClass<::Bnd_BoundSortBox>( &nativeInstance, false )
	{}

	property ::Bnd_BoundSortBox* NativeInstance
	{
		::Bnd_BoundSortBox* get()
		{
			return static_cast<::Bnd_BoundSortBox*>(_NativeInstance);
		}
	}

public:
	Bnd_BoundSortBox();
	Bnd_BoundSortBox(Macad::Occt::Bnd_BoundSortBox^ parameter1);
	void Initialize(Macad::Occt::Bnd_Box^ CompleteBox, Macad::Occt::Bnd_HArray1OfBox^ SetOfBox);
	void Initialize(Macad::Occt::Bnd_HArray1OfBox^ SetOfBox);
	void Initialize(Macad::Occt::Bnd_Box^ CompleteBox, int nbComponents);
	void Add(Macad::Occt::Bnd_Box^ theBox, int boxIndex);
	Macad::Occt::TColStd_ListOfInteger^ Compare(Macad::Occt::Bnd_Box^ theBox);
	Macad::Occt::TColStd_ListOfInteger^ Compare(Macad::Occt::Pln P);
	void Dump();
	void Destroy();
}; // class Bnd_BoundSortBox

//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfBox2d
//---------------------------------------------------------------------
public ref class Bnd_HArray1OfBox2d sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Bnd_HArray1OfBox2d_h
public:
	Include_Bnd_HArray1OfBox2d_h
#endif

public:
	Bnd_HArray1OfBox2d(::Bnd_HArray1OfBox2d* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Bnd_HArray1OfBox2d(::Bnd_HArray1OfBox2d& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Bnd_HArray1OfBox2d* NativeInstance
	{
		::Bnd_HArray1OfBox2d* get()
		{
			return static_cast<::Bnd_HArray1OfBox2d*>(_NativeInstance);
		}
	}

	static Macad::Occt::Bnd_HArray1OfBox2d^ CreateDowncasted(::Bnd_HArray1OfBox2d* instance);

public:
	Bnd_HArray1OfBox2d();
	Bnd_HArray1OfBox2d(int theLower, int theUpper);
	Bnd_HArray1OfBox2d(int theLower, int theUpper, Macad::Occt::Bnd_Box2d^ theValue);
	Bnd_HArray1OfBox2d(Macad::Occt::Bnd_Array1OfBox2d^ theOther);
	Bnd_HArray1OfBox2d(Macad::Occt::Bnd_HArray1OfBox2d^ parameter1);
	Macad::Occt::Bnd_Array1OfBox2d^ Array1();
	Macad::Occt::Bnd_Array1OfBox2d^ ChangeArray1();
	void Init(Macad::Occt::Bnd_Box2d^ theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	/* Method skipped due to unknown mapping: NCollection_Array1<Bnd_Box2d> Assign(NCollection_Array1<Bnd_Box2d> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array1<Bnd_Box2d> Move(NCollection_Array1<Bnd_Box2d> theOther, ) */
	Macad::Occt::Bnd_Box2d^ First();
	Macad::Occt::Bnd_Box2d^ ChangeFirst();
	Macad::Occt::Bnd_Box2d^ Last();
	Macad::Occt::Bnd_Box2d^ ChangeLast();
	Macad::Occt::Bnd_Box2d^ Value(int theIndex);
	Macad::Occt::Bnd_Box2d^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Bnd_Box2d^ theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class Bnd_HArray1OfBox2d

//---------------------------------------------------------------------
//  Class  Bnd_BoundSortBox2d
//---------------------------------------------------------------------
public ref class Bnd_BoundSortBox2d sealed : public BaseClass<::Bnd_BoundSortBox2d>
{

#ifdef Include_Bnd_BoundSortBox2d_h
public:
	Include_Bnd_BoundSortBox2d_h
#endif

public:
	Bnd_BoundSortBox2d(::Bnd_BoundSortBox2d* nativeInstance)
		: BaseClass<::Bnd_BoundSortBox2d>( nativeInstance, true )
	{}

	Bnd_BoundSortBox2d(::Bnd_BoundSortBox2d& nativeInstance)
		: BaseClass<::Bnd_BoundSortBox2d>( &nativeInstance, false )
	{}

	property ::Bnd_BoundSortBox2d* NativeInstance
	{
		::Bnd_BoundSortBox2d* get()
		{
			return static_cast<::Bnd_BoundSortBox2d*>(_NativeInstance);
		}
	}

public:
	Bnd_BoundSortBox2d();
	Bnd_BoundSortBox2d(Macad::Occt::Bnd_BoundSortBox2d^ parameter1);
	void Initialize(Macad::Occt::Bnd_Box2d^ CompleteBox, Macad::Occt::Bnd_HArray1OfBox2d^ SetOfBox);
	void Initialize(Macad::Occt::Bnd_HArray1OfBox2d^ SetOfBox);
	void Initialize(Macad::Occt::Bnd_Box2d^ CompleteBox, int nbComponents);
	void Add(Macad::Occt::Bnd_Box2d^ theBox, int boxIndex);
	Macad::Occt::TColStd_ListOfInteger^ Compare(Macad::Occt::Bnd_Box2d^ theBox);
	void Dump();
}; // class Bnd_BoundSortBox2d

//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfSphere
//---------------------------------------------------------------------
public ref class Bnd_HArray1OfSphere sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Bnd_HArray1OfSphere_h
public:
	Include_Bnd_HArray1OfSphere_h
#endif

public:
	Bnd_HArray1OfSphere(::Bnd_HArray1OfSphere* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Bnd_HArray1OfSphere(::Bnd_HArray1OfSphere& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Bnd_HArray1OfSphere* NativeInstance
	{
		::Bnd_HArray1OfSphere* get()
		{
			return static_cast<::Bnd_HArray1OfSphere*>(_NativeInstance);
		}
	}

	static Macad::Occt::Bnd_HArray1OfSphere^ CreateDowncasted(::Bnd_HArray1OfSphere* instance);

public:
	Bnd_HArray1OfSphere();
	Bnd_HArray1OfSphere(int theLower, int theUpper);
	Bnd_HArray1OfSphere(int theLower, int theUpper, Macad::Occt::Bnd_Sphere^ theValue);
	Bnd_HArray1OfSphere(Macad::Occt::Bnd_Array1OfSphere^ theOther);
	Bnd_HArray1OfSphere(Macad::Occt::Bnd_HArray1OfSphere^ parameter1);
	Macad::Occt::Bnd_Array1OfSphere^ Array1();
	Macad::Occt::Bnd_Array1OfSphere^ ChangeArray1();
	void Init(Macad::Occt::Bnd_Sphere^ theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	/* Method skipped due to unknown mapping: NCollection_Array1<Bnd_Sphere> Assign(NCollection_Array1<Bnd_Sphere> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array1<Bnd_Sphere> Move(NCollection_Array1<Bnd_Sphere> theOther, ) */
	Macad::Occt::Bnd_Sphere^ First();
	Macad::Occt::Bnd_Sphere^ ChangeFirst();
	Macad::Occt::Bnd_Sphere^ Last();
	Macad::Occt::Bnd_Sphere^ ChangeLast();
	Macad::Occt::Bnd_Sphere^ Value(int theIndex);
	Macad::Occt::Bnd_Sphere^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Bnd_Sphere^ theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class Bnd_HArray1OfSphere

//---------------------------------------------------------------------
//  Class  Bnd_OBB
//---------------------------------------------------------------------
public ref class Bnd_OBB sealed : public BaseClass<::Bnd_OBB>
{

#ifdef Include_Bnd_OBB_h
public:
	Include_Bnd_OBB_h
#endif

public:
	Bnd_OBB(::Bnd_OBB* nativeInstance)
		: BaseClass<::Bnd_OBB>( nativeInstance, true )
	{}

	Bnd_OBB(::Bnd_OBB& nativeInstance)
		: BaseClass<::Bnd_OBB>( &nativeInstance, false )
	{}

	property ::Bnd_OBB* NativeInstance
	{
		::Bnd_OBB* get()
		{
			return static_cast<::Bnd_OBB*>(_NativeInstance);
		}
	}

public:
	Bnd_OBB();
	Bnd_OBB(Macad::Occt::Pnt theCenter, Macad::Occt::Dir theXDirection, Macad::Occt::Dir theYDirection, Macad::Occt::Dir theZDirection, double theHXSize, double theHYSize, double theHZSize);
	Bnd_OBB(Macad::Occt::Bnd_Box^ theBox);
	Bnd_OBB(Macad::Occt::Bnd_OBB^ parameter1);
	void ReBuild(Macad::Occt::TColgp_Array1OfPnt^ theListOfPoints, Macad::Occt::TColStd_Array1OfReal^ theListOfTolerances, bool theIsOptimal);
	void ReBuild(Macad::Occt::TColgp_Array1OfPnt^ theListOfPoints, Macad::Occt::TColStd_Array1OfReal^ theListOfTolerances);
	void ReBuild(Macad::Occt::TColgp_Array1OfPnt^ theListOfPoints);
	void SetCenter(Macad::Occt::Pnt theCenter);
	void SetXComponent(Macad::Occt::Dir theXDirection, double theHXSize);
	void SetYComponent(Macad::Occt::Dir theYDirection, double theHYSize);
	void SetZComponent(Macad::Occt::Dir theZDirection, double theHZSize);
	Macad::Occt::Ax3 Position();
	Macad::Occt::XYZ Center();
	Macad::Occt::XYZ XDirection();
	Macad::Occt::XYZ YDirection();
	Macad::Occt::XYZ ZDirection();
	double XHSize();
	double YHSize();
	double ZHSize();
	bool IsVoid();
	void SetVoid();
	void SetAABox(bool theFlag);
	bool IsAABox();
	void Enlarge(double theGapAdd);
	bool GetVertex(Macad::Occt::Pnt% theP);
	double SquareExtent();
	bool IsOut(Macad::Occt::Bnd_OBB^ theOther);
	bool IsOut(Macad::Occt::Pnt theP);
	bool IsCompletelyInside(Macad::Occt::Bnd_OBB^ theOther);
	void Add(Macad::Occt::Bnd_OBB^ theOther);
	void Add(Macad::Occt::Pnt theP);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Bnd_OBB

//---------------------------------------------------------------------
//  Class  Bnd_Range
//---------------------------------------------------------------------
public ref class Bnd_Range sealed : public BaseClass<::Bnd_Range>
{

#ifdef Include_Bnd_Range_h
public:
	Include_Bnd_Range_h
#endif

public:
	Bnd_Range(::Bnd_Range* nativeInstance)
		: BaseClass<::Bnd_Range>( nativeInstance, true )
	{}

	Bnd_Range(::Bnd_Range& nativeInstance)
		: BaseClass<::Bnd_Range>( &nativeInstance, false )
	{}

	property ::Bnd_Range* NativeInstance
	{
		::Bnd_Range* get()
		{
			return static_cast<::Bnd_Range*>(_NativeInstance);
		}
	}

public:
	Bnd_Range();
	Bnd_Range(double theMin, double theMax);
	Bnd_Range(Macad::Occt::Bnd_Range^ parameter1);
	void Common(Macad::Occt::Bnd_Range^ theOther);
	bool Union(Macad::Occt::Bnd_Range^ theOther);
	/* Method skipped due to unknown mapping: void Split(Standard_Real theVal, NCollection_List<Bnd_Range> theList, Standard_Real thePeriod, ) */
	/* Method skipped due to unknown mapping: void Split(Standard_Real theVal, NCollection_List<Bnd_Range> theList, Standard_Real thePeriod, ) */
	int IsIntersected(double theVal, double thePeriod);
	int IsIntersected(double theVal);
	void Add(double theParameter);
	void Add(Macad::Occt::Bnd_Range^ theRange);
	bool GetMin(double% thePar);
	bool GetMax(double% thePar);
	bool GetBounds(double% theFirstPar, double% theLastPar);
	bool GetIntermediatePoint(double theLambda, double% theParameter);
	double Delta();
	bool IsVoid();
	void SetVoid();
	void Enlarge(double theDelta);
	Macad::Occt::Bnd_Range^ Shifted(double theVal);
	void Shift(double theVal);
	void TrimFrom(double theValLower);
	void TrimTo(double theValUpper);
	bool IsOut(double theValue);
	bool IsOut(Macad::Occt::Bnd_Range^ theRange);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Bnd_Range

//---------------------------------------------------------------------
//  Class  Bnd_Tools
//---------------------------------------------------------------------
public ref class Bnd_Tools sealed : public BaseClass<::Bnd_Tools>
{

#ifdef Include_Bnd_Tools_h
public:
	Include_Bnd_Tools_h
#endif

public:
	Bnd_Tools(::Bnd_Tools* nativeInstance)
		: BaseClass<::Bnd_Tools>( nativeInstance, true )
	{}

	Bnd_Tools(::Bnd_Tools& nativeInstance)
		: BaseClass<::Bnd_Tools>( &nativeInstance, false )
	{}

	property ::Bnd_Tools* NativeInstance
	{
		::Bnd_Tools* get()
		{
			return static_cast<::Bnd_Tools*>(_NativeInstance);
		}
	}

public:
	Bnd_Tools();
	Bnd_Tools(Macad::Occt::Bnd_Tools^ parameter1);
	/* Method skipped due to unknown mapping: BVH_Box<double, 2> Bnd2BVH(Bnd_Box2d theBox, ) */
	/* Method skipped due to unknown mapping: BVH_Box<double, 3> Bnd2BVH(Bnd_Box theBox, ) */
}; // class Bnd_Tools

}; // namespace Occt
}; // namespace Macad
