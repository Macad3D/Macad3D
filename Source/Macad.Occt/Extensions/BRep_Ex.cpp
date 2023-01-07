#include "OcctPCH.h"
#include "..\Generated\BRep.h"
#include "..\Generated\TopoDS.h"

System::Collections::Generic::List<Macad::Occt::BRep_CurveRepresentation^>^ Macad::Occt::BRep_TEdge::CurvesList()
{
    const auto curves = NativeInstance->Curves();
	auto list = gcnew System::Collections::Generic::List<Macad::Occt::BRep_CurveRepresentation^>(curves.Size());
	::BRep_ListIteratorOfListOfCurveRepresentation it;
	for (it.Initialize(curves); it.More(); it.Next())
		list->Add(Macad::Occt::BRep_CurveRepresentation::CreateDowncasted(it.Value().get()));
	return list;
}

