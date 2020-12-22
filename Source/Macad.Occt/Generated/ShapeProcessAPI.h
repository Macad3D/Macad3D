// Generated wrapper code for package ShapeProcessAPI

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ShapeProcessAPI_ApplySequence
//---------------------------------------------------------------------
public ref class ShapeProcessAPI_ApplySequence sealed : public BaseClass<::ShapeProcessAPI_ApplySequence>
{

#ifdef Include_ShapeProcessAPI_ApplySequence_h
public:
	Include_ShapeProcessAPI_ApplySequence_h
#endif

public:
	ShapeProcessAPI_ApplySequence(::ShapeProcessAPI_ApplySequence* nativeInstance)
		: BaseClass<::ShapeProcessAPI_ApplySequence>( nativeInstance, true )
	{}

	ShapeProcessAPI_ApplySequence(::ShapeProcessAPI_ApplySequence& nativeInstance)
		: BaseClass<::ShapeProcessAPI_ApplySequence>( &nativeInstance, false )
	{}

	property ::ShapeProcessAPI_ApplySequence* NativeInstance
	{
		::ShapeProcessAPI_ApplySequence* get()
		{
			return static_cast<::ShapeProcessAPI_ApplySequence*>(_NativeInstance);
		}
	}

public:
	ShapeProcessAPI_ApplySequence(System::String^ rscName, System::String^ seqName);
	ShapeProcessAPI_ApplySequence(System::String^ rscName);
	ShapeProcessAPI_ApplySequence(Macad::Occt::ShapeProcessAPI_ApplySequence^ parameter1);
	Macad::Occt::ShapeProcess_ShapeContext^ Context();
	Macad::Occt::TopoDS_Shape^ PrepareShape(Macad::Occt::TopoDS_Shape^ shape, bool fillmap, Macad::Occt::TopAbs_ShapeEnum until);
	Macad::Occt::TopoDS_Shape^ PrepareShape(Macad::Occt::TopoDS_Shape^ shape, bool fillmap);
	Macad::Occt::TopoDS_Shape^ PrepareShape(Macad::Occt::TopoDS_Shape^ shape);
	void ClearMap();
	Macad::Occt::TopTools_DataMapOfShapeShape^ Map();
	void PrintPreparationResult();
}; // class ShapeProcessAPI_ApplySequence

}; // namespace Occt
}; // namespace Macad
