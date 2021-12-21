
#include "ManagedPCH.h"

#using "Macad.Occt.dll" as_friend

using namespace System;
using namespace System::Collections::Generic;

namespace Macad
{
	namespace Occt
	{
		namespace Helper
		{
			public ref class Ais
			{
				//--------------------------------------------------------------------------------------------------

			public:
				static Macad::Occt::TopoDS_Shape^ GetDetectedShapeFromContext(Macad::Occt::AIS_InteractiveContext^ aisContext )
				{
					auto owner = aisContext->NativeInstance->DetectedOwner();
					if (owner.IsNull())
						return nullptr;

					auto brepOwner = Handle(::StdSelect_BRepOwner)::DownCast(owner);
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

					return _PickFromSelector(*selector, interactives, shapes);
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

					return _PickFromSelector(*selector, interactives, shapes);
				}

				//--------------------------------------------------------------------------------------------------

			private:
				static int _PickFromSelector(::StdSelect_ViewerSelector3d& selector, 
											 List<Macad::Occt::AIS_InteractiveObject^>^ interactives,
											 List<Macad::Occt::TopoDS_Shape^>^ shapes)
				{
					int count = 0;
					for (Standard_Integer aPickIter = 1; aPickIter <= selector.NbPicked(); ++aPickIter)
					{
						auto owner = selector.Picked (aPickIter);
						if (owner.IsNull() || !owner->HasSelectable()) // || !filters.IsOk (owner))
							continue;

						count++;

						if(interactives != nullptr)
						{
							Handle(::AIS_InteractiveObject) interactive = Handle(::AIS_InteractiveObject)::DownCast (owner->Selectable());
							if (!interactive.IsNull())
								interactives->Add(Macad::Occt::AIS_InteractiveObject::CreateDowncasted(interactive.get()));
						}

						if(shapes != nullptr)
						{
							auto brepOwner = Handle(::StdSelect_BRepOwner)::DownCast(owner);
							if (!brepOwner.IsNull() && brepOwner->HasShape())
								shapes->Add(gcnew Macad::Occt::TopoDS_Shape(new ::TopoDS_Shape(brepOwner->Shape())));
						}
					}
					return count;
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
			};
		}
	}
}