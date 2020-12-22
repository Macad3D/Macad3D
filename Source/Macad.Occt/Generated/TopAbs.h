// Generated wrapper code for package TopAbs

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  TopAbs_Orientation
//---------------------------------------------------------------------
public enum class TopAbs_Orientation
{
	TopAbs_FORWARD = 0,
	TopAbs_REVERSED = 1,
	TopAbs_INTERNAL = 2,
	TopAbs_EXTERNAL = 3
}; // enum  class TopAbs_Orientation

//---------------------------------------------------------------------
//  Enum  TopAbs_ShapeEnum
//---------------------------------------------------------------------
public enum class TopAbs_ShapeEnum
{
	TopAbs_COMPOUND = 0,
	TopAbs_COMPSOLID = 1,
	TopAbs_SOLID = 2,
	TopAbs_SHELL = 3,
	TopAbs_FACE = 4,
	TopAbs_WIRE = 5,
	TopAbs_EDGE = 6,
	TopAbs_VERTEX = 7,
	TopAbs_SHAPE = 8
}; // enum  class TopAbs_ShapeEnum

//---------------------------------------------------------------------
//  Enum  TopAbs_State
//---------------------------------------------------------------------
public enum class TopAbs_State
{
	TopAbs_IN = 0,
	TopAbs_OUT = 1,
	TopAbs_ON = 2,
	TopAbs_UNKNOWN = 3
}; // enum  class TopAbs_State

//---------------------------------------------------------------------
//  Class  TopAbs
//---------------------------------------------------------------------
public ref class TopAbs sealed : public BaseClass<::TopAbs>
{

#ifdef Include_TopAbs_h
public:
	Include_TopAbs_h
#endif

public:
	TopAbs(::TopAbs* nativeInstance)
		: BaseClass<::TopAbs>( nativeInstance, true )
	{}

	TopAbs(::TopAbs& nativeInstance)
		: BaseClass<::TopAbs>( &nativeInstance, false )
	{}

	property ::TopAbs* NativeInstance
	{
		::TopAbs* get()
		{
			return static_cast<::TopAbs*>(_NativeInstance);
		}
	}

public:
	TopAbs();
	TopAbs(Macad::Occt::TopAbs^ parameter1);
	static Macad::Occt::TopAbs_Orientation Compose(Macad::Occt::TopAbs_Orientation Or1, Macad::Occt::TopAbs_Orientation Or2);
	static Macad::Occt::TopAbs_Orientation Reverse(Macad::Occt::TopAbs_Orientation Or);
	static Macad::Occt::TopAbs_Orientation Complement(Macad::Occt::TopAbs_Orientation Or);
	/* Method skipped due to unknown mapping: ostream Print(TopAbs_ShapeEnum theShapeType, ostream theStream, ) */
	/* Method skipped due to unknown mapping: ostream Print(TopAbs_Orientation theOrientation, ostream theStream, ) */
	/* Method skipped due to unknown mapping: ostream Print(TopAbs_State St, ostream S, ) */
	static System::String^ ShapeTypeToString(Macad::Occt::TopAbs_ShapeEnum theType);
	static Macad::Occt::TopAbs_ShapeEnum ShapeTypeFromString(System::String^ theTypeString);
	static bool ShapeTypeFromString(System::String^ theTypeString, Macad::Occt::TopAbs_ShapeEnum% theType);
	static System::String^ ShapeOrientationToString(Macad::Occt::TopAbs_Orientation theOrientation);
	static Macad::Occt::TopAbs_Orientation ShapeOrientationFromString(System::String^ theOrientationString);
	static bool ShapeOrientationFromString(System::String^ theOrientationString, Macad::Occt::TopAbs_Orientation% theOrientation);
}; // class TopAbs

}; // namespace Occt
}; // namespace Macad
