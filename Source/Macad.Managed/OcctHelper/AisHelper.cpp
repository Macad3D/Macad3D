#include "ManagedPCH.h"

#using "Macad.Occt.dll" as_friend

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Runtime::InteropServices;

namespace Macad {
namespace Occt {
namespace Helper {

    // Used by AisHelper::DisableGlobalClipPlanes
    Handle(::Graphic3d_SequenceOfHClipPlane) EmptySequenceOfClipPlanes = []
	{
        auto seq = new ::Graphic3d_SequenceOfHClipPlane();
        seq->SetOverrideGlobal(true);
        return seq;
    }();

	//--------------------------------------------------------------------------------------------------
	//--------------------------------------------------------------------------------------------------

    public ref class AisHelper
    {
	    //--------------------------------------------------------------------------------------------------

    public:
	    static Macad::Occt::TopoDS_Shape^ GetShapeFromEntityOwner(Macad::Occt::SelectMgr_EntityOwner^ owner)
	    {
		    if (owner == nullptr || owner->NativeInstance == nullptr)
			    return nullptr;

		    auto brepOwner = Handle(::StdSelect_BRepOwner)::DownCast(owner->NativeInstance);
		    if (brepOwner.IsNull() || !brepOwner->HasShape())
			    return nullptr;

		    return gcnew Macad::Occt::TopoDS_Shape(new ::TopoDS_Shape(brepOwner->Shape()));
	    }

	    //--------------------------------------------------------------------------------------------------

    public:
	    static int PickFromContext(Macad::Occt::AIS_InteractiveContext^ aisContext,
                                   List<ValueTuple<int,int>>^ pointList,
                                   bool bAllowOverlapDetection,
                                   Macad::Occt::V3d_View^ theView,
                                   List<Macad::Occt::AIS_InteractiveObject^>^ interactives,
                                   List<Macad::Occt::TopoDS_Shape^>^ shapes)
	    {
		    ::TColgp_Array1OfPnt2d points(1,pointList->Count);
		    for(int pointIndex=0; pointIndex < pointList->Count; pointIndex++)
		    {
			    auto tuple = pointList[pointIndex];
			    points.SetValue(pointIndex+1, ::gp_Pnt2d(tuple.Item1, tuple.Item2));
		    }

		    auto selector = aisContext->NativeInstance->MainSelector();
		    selector->AllowOverlapDetection(bAllowOverlapDetection);
		    selector->Pick(points, theView->NativeInstance);

		    return _GetPickedFromSelector(*selector, interactives, shapes);
	    }

	    //--------------------------------------------------------------------------------------------------
	    
    public:
	    static int PickFromContext(Macad::Occt::AIS_InteractiveContext^ aisContext,
                                   const Standard_Integer theXPMin, const Standard_Integer theYPMin, 
                                   const Standard_Integer theXPMax,const Standard_Integer  theYPMax,
                                   bool bAllowOverlapDetection,
                                   Macad::Occt::V3d_View^ theView,
                                   List<Macad::Occt::AIS_InteractiveObject^>^ interactives,
                                   List<Macad::Occt::TopoDS_Shape^>^ shapes)
	    {
		    auto selector = aisContext->NativeInstance->MainSelector();
		    selector->AllowOverlapDetection(bAllowOverlapDetection);
		    selector->Pick(theXPMin, theYPMin, theXPMax, theYPMax, theView->NativeInstance);

		    return _GetPickedFromSelector(*selector, interactives, shapes);
	    }
		
	    //--------------------------------------------------------------------------------------------------
		  
	    static int PickFromContext(Macad::Occt::AIS_InteractiveContext^ aisContext,
                                   const Standard_Integer theScreenX, const Standard_Integer theScreenY, 
                                   Macad::Occt::V3d_View^ theView,
                                   List<Macad::Occt::AIS_InteractiveObject^>^ interactives,
                                   List<Macad::Occt::TopoDS_Shape^>^ shapes)
	    {
		    auto selector = aisContext->NativeInstance->MainSelector();
		    selector->Pick(theScreenX, theScreenY, theView->NativeInstance);

		    return _GetPickedFromSelector(*selector, interactives, shapes);
	    }
				
	    //--------------------------------------------------------------------------------------------------
		  
	    static bool PickFromContext(Macad::Occt::AIS_InteractiveContext^ aisContext,
                                   const Standard_Integer theScreenX, const Standard_Integer theScreenY, 
                                   Macad::Occt::V3d_View^ theView,
                                   [Out] Macad::Occt::AIS_InteractiveObject^% interactive,
                                   [Out] Macad::Occt::TopoDS_Shape^% shape)
	    {
		    auto selector = aisContext->NativeInstance->MainSelector();
		    selector->Pick(theScreenX, theScreenY, theView->NativeInstance);

		    return _GetOnePickedFromSelector(*selector, interactive, shape);
	    }

	    //--------------------------------------------------------------------------------------------------

		static int GetPickedFromContext(Macad::Occt::AIS_InteractiveContext^ aisContext,
										 List<Macad::Occt::AIS_InteractiveObject^>^ aisObjects,
									     List<Macad::Occt::TopoDS_Shape^>^ shapes)
		{
			auto selector = aisContext->NativeInstance->MainSelector();
			return _GetPickedFromSelector(*selector, aisObjects, shapes);
		}

	    //--------------------------------------------------------------------------------------------------

	private:

	    static int _GetPickedFromSelector(::StdSelect_ViewerSelector3d& selector, 
									      List<Macad::Occt::AIS_InteractiveObject^>^ interactives,
									      List<Macad::Occt::TopoDS_Shape^>^ shapes)
	    {
		    int count = 0;
			bool doInteractives = interactives != nullptr;
			bool doShapes = shapes != nullptr;

			interactives->Clear();
			shapes->Clear();

		    for (Standard_Integer aPickIter = 1; aPickIter <= selector.NbPicked(); ++aPickIter)
		    {
			    auto owner = selector.Picked (aPickIter);
			    if (owner.IsNull() || !owner->HasSelectable()) // || !filters.IsOk (owner))
				    continue;

			    count++;

			    if(doInteractives)
			    {
				    Handle(::AIS_InteractiveObject) interactive = Handle(::AIS_InteractiveObject)::DownCast (owner->Selectable());
				    if (!interactive.IsNull())
					{
					    interactives->Add(Macad::Occt::AIS_InteractiveObject::CreateDowncasted(interactive.get()));
					} 
					else 
					{
						interactives->Add(nullptr);
					}
			    }

			    if(doShapes)
			    {
				    auto brepOwner = Handle(::StdSelect_BRepOwner)::DownCast(owner);
				    if (!brepOwner.IsNull() && brepOwner->HasShape())
					{
					    shapes->Add(gcnew Macad::Occt::TopoDS_Shape(new ::TopoDS_Shape(brepOwner->Shape())));
					}
					else 
					{
						shapes->Add(nullptr);
					}
			    }
		    }
		    return count;
	    }

	    //--------------------------------------------------------------------------------------------------

		static bool _GetOnePickedFromSelector(::StdSelect_ViewerSelector3d& selector, 
								 			 [Out] Macad::Occt::AIS_InteractiveObject^% interactive,
											 [Out] Macad::Occt::TopoDS_Shape^% shape)
	    {
			interactive = nullptr;
			shape = nullptr;

			if(selector.NbPicked() == 0)
			{
				return false;
			}

			auto owner = selector.OnePicked();
			if (owner.IsNull() || !owner->HasSelectable()) // || !filters.IsOk (owner))
				return false;

			Handle(::AIS_InteractiveObject) nativeInteractive = Handle(::AIS_InteractiveObject)::DownCast(owner->Selectable());
			if (!nativeInteractive.IsNull())
				interactive = Macad::Occt::AIS_InteractiveObject::CreateDowncasted(nativeInteractive.get());

			auto brepOwner = Handle(::StdSelect_BRepOwner)::DownCast(owner);
			if (!brepOwner.IsNull() && brepOwner->HasShape())
				shape = gcnew Macad::Occt::TopoDS_Shape(new ::TopoDS_Shape(brepOwner->Shape()));

			return true;
	    }

	    //--------------------------------------------------------------------------------------------------

    public:
	    static void SetRubberbandPoints(Macad::Occt::WNT_Window^ wntWindow, Macad::Occt::AIS_RubberBand^ aisRubberband, List<ValueTuple<int,int>>^ pointList)
	    {
		    Standard_Integer width, height;
		    wntWindow->Size(width, height);
		    auto rubberband = aisRubberband->NativeInstance;
		    rubberband->ClearPoints();
		    for each (auto point in pointList)
		    {
			    ::Graphic3d_Vec2i vec2i(point.Item1, height - point.Item2);
			    rubberband->AddPoint(vec2i);
		    }
	    }

	    //--------------------------------------------------------------------------------------------------

	    static void DisableGlobalClipPlanes(Macad::Occt::PrsMgr_PresentableObject^ obj)
	    {
            obj->NativeInstance->SetClipPlanes(EmptySequenceOfClipPlanes);
	    }

	    //--------------------------------------------------------------------------------------------------

    };

} // namespace Helper
} // namespace Occt
} // namespace Macad