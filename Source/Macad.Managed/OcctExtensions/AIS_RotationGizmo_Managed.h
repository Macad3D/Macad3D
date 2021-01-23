
#include "ManagedPCH.h"

#include "AIS_RotationGizmo.h"

namespace Macad
{
	namespace Occt
	{
		namespace Ext
		{
			public ref class AIS_RotationGizmo sealed : Macad::Occt::AIS_InteractiveObject
			{
			public:
				IMPLEMENT_TRANSIENT(AIS_RotationGizmo, AIS_InteractiveObject);

				enum class Part {
					Part_XAxis,
					Part_YAxis,
					Part_ZAxis
				};

				AIS_RotationGizmo(Ax3 aCoordinateSystem);
				Ax3 Component();
				void SetComponent(Ax3 aCoordinateSystem);
				void SetLength(double theLength);
				double GetLength();
				bool AcceptDisplayMode(int aMode);
				int Signature();
				Macad::Occt::AIS_KindOfInteractive Type();

				void Remove()
				{
					NativeInstance->Remove();
				}

				bool IsPartDetected(Part part)
				{
					return NativeInstance->IsPartDetected((::AIS_RotationGizmo::Part)part);
				}

				void ForcePartHilighting(Part part)
				{
					NativeInstance->ForcePartHilighting((::AIS_RotationGizmo::Part)part);
				}
			}; // class AIS_RotationGizmo
		};
	}
}
