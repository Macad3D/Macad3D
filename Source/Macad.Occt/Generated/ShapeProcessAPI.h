// Generated wrapper code for package ShapeProcessAPI

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ShapeProcessAPI_ApplySequence
//---------------------------------------------------------------------
/// <summary>
/// Applies one of the sequence read from resource file.
/// </summary>
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
	/// <summary>
	/// Creates an object and loads resource file and sequence of
	/// operators given by their names.
	/// </summary>
	ShapeProcessAPI_ApplySequence(System::String^ rscName, System::String^ seqName);
	/// <summary>
	/// Creates an object and loads resource file and sequence of
	/// operators given by their names.
	/// </summary>
	ShapeProcessAPI_ApplySequence(System::String^ rscName);
	ShapeProcessAPI_ApplySequence(Macad::Occt::ShapeProcessAPI_ApplySequence^ parameter1);
	/// <summary>
	/// Returns object for managing resource file and sequence of
	/// operators.
	/// </summary>
	Macad::Occt::ShapeProcess_ShapeContext^ Context();
	/// <summary>
	/// Performs sequence of operators stored in myRsc.
	/// If <fillmap> is True adds history "shape-shape" into myMap
	/// for shape and its subshapes until level <until> (included).
	/// If <until> is TopAbs_SHAPE,  all the subshapes are considered.
	/// </summary>
	Macad::Occt::TopoDS_Shape^ PrepareShape(Macad::Occt::TopoDS_Shape^ shape, bool fillmap, Macad::Occt::TopAbs_ShapeEnum until, Macad::Occt::Message_ProgressRange^ theProgress);
	/// <summary>
	/// Performs sequence of operators stored in myRsc.
	/// If <fillmap> is True adds history "shape-shape" into myMap
	/// for shape and its subshapes until level <until> (included).
	/// If <until> is TopAbs_SHAPE,  all the subshapes are considered.
	/// </summary>
	Macad::Occt::TopoDS_Shape^ PrepareShape(Macad::Occt::TopoDS_Shape^ shape, bool fillmap, Macad::Occt::TopAbs_ShapeEnum until);
	/// <summary>
	/// Performs sequence of operators stored in myRsc.
	/// If <fillmap> is True adds history "shape-shape" into myMap
	/// for shape and its subshapes until level <until> (included).
	/// If <until> is TopAbs_SHAPE,  all the subshapes are considered.
	/// </summary>
	Macad::Occt::TopoDS_Shape^ PrepareShape(Macad::Occt::TopoDS_Shape^ shape, bool fillmap);
	/// <summary>
	/// Performs sequence of operators stored in myRsc.
	/// If <fillmap> is True adds history "shape-shape" into myMap
	/// for shape and its subshapes until level <until> (included).
	/// If <until> is TopAbs_SHAPE,  all the subshapes are considered.
	/// </summary>
	Macad::Occt::TopoDS_Shape^ PrepareShape(Macad::Occt::TopoDS_Shape^ shape);
	/// <summary>
	/// Clears myMap with accumulated history.
	/// </summary>
	void ClearMap();
	/// <summary>
	/// Returns myMap with accumulated history.
	/// </summary>
	Macad::Occt::TopTools_DataMapOfShapeShape^ Map();
	/// <summary>
	/// Prints result of preparation onto the messenger of the context.
	/// Note that results can be accumulated from previous preparations
	/// it method ClearMap was not called before PrepareShape.
	/// </summary>
	void PrintPreparationResult();
}; // class ShapeProcessAPI_ApplySequence

}; // namespace Occt
}; // namespace Macad
