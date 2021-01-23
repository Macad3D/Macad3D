
#include "ManagedPCH.h"

#include "AIS_TranslationGizmo.h"

namespace Macad
{
	namespace Occt
	{
		namespace Ext
		{
			public ref class AIS_TranslationGizmo sealed : Macad::Occt::AIS_InteractiveObject
			{
			public:
				IMPLEMENT_TRANSIENT(AIS_TranslationGizmo, AIS_InteractiveObject);

				enum class Part {
					Part_XAxis,
					Part_YAxis,
					Part_ZAxis,
					Part_XYPlane,
					Part_XZPlane,
					Part_YZPlane
				};

				AIS_TranslationGizmo(Ax3 aCoordinateSystem);
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
					return NativeInstance->IsPartDetected((::AIS_TranslationGizmo::Part)part);
				}

				void ForcePartHilighting(Part part)
				{
					NativeInstance->ForcePartHilighting((::AIS_TranslationGizmo::Part)part);
				}
			}; // class AIS_TranslationGizmo
		};
	}
}
