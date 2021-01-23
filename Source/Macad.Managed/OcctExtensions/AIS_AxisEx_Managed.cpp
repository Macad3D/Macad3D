#include "ManagedPCH.h"

#include "AIS_AxisEx.h"

namespace Macad
{
	namespace Occt
	{
		namespace Ext
		{
			public ref class AIS_AxisEx sealed : Macad::Occt::AIS_InteractiveObject
			{
			public:
                IMPLEMENT_TRANSIENT(AIS_AxisEx, AIS_InteractiveObject);

				AIS_AxisEx(Macad::Occt::Geom_Line^ aComponent)
				    : Macad::Occt::AIS_InteractiveObject(InitMode::Uninitialized)
				{
					NativeInstance = new ::AIS_AxisEx(aComponent->NativeInstance);
				}

				Macad::Occt::Geom_Line^ Component()
				{
					return gcnew Macad::Occt::Geom_Line(*NativeInstance->Component());
				}

				void SetComponent(Macad::Occt::Geom_Line^ aComponent)
				{
					NativeInstance->SetComponent(aComponent->NativeInstance);
				}

				void SetLength(double theLength)
				{
					NativeInstance->SetLength(theLength);
				}

//				Macad::Occt::Geom_Axis2Placement^ Axis2Placement();
//				void SetAxis2Placement(Macad::Occt::Geom_Axis2Placement^ aComponent, Macad::Occt::AIS_TypeOfAxis anAxisType);
//				void SetAxis1Placement(Macad::Occt::Geom_Axis1Placement^ anAxis);
//				Macad::Occt::AIS_TypeOfAxis TypeOfAxis();
//				void SetTypeOfAxis(Macad::Occt::AIS_TypeOfAxis theTypeAxis);
//				bool IsXYZAxis();
//				bool AcceptDisplayMode(int aMode);
//				void Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Prs3d_Presentation^ aPresentation);
//				int Signature();
//				Macad::Occt::AIS_KindOfInteractive Type();
//				void SetColor(Macad::Occt::Quantity_Color^ aColor);

//				void SetWidth(double aValue);
//				void UnsetColor();
//				void UnsetWidth();
			};
		};
	}
}
