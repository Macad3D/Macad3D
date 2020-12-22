#include "OcctPCH.h"
#include "..\Generated\TopTools.h"
#include "..\Generated\TopoDS.h"

System::Collections::Generic::List<Macad::Occt::TopoDS_Shape^>^ Macad::Occt::TopTools_ListOfShape::ToList()
{
	auto list = gcnew System::Collections::Generic::List<Macad::Occt::TopoDS_Shape^>(Size());
	TopTools_ListIteratorOfListOfShape it;
	for (it.Initialize(*NativeInstance); it.More(); it.Next())
		list->Add(gcnew Macad::Occt::TopoDS_Shape(new ::TopoDS_Shape(it.Value())));
	return list;
}

