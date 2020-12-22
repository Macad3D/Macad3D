
#include "ManagedPCH.h"

#include "AIS_TranslationGizmo2D.h"

#using <Macad.Occt.dll> as_friend

namespace Macad
{
	namespace Occt
	{
		namespace Ext
		{
			public ref class AIS_TranslationGizmo2D sealed : Macad::Occt::AIS_InteractiveObject
			{
			public:
				IMPLEMENT_TRANSIENT(AIS_TranslationGizmo2D, AIS_InteractiveObject);

				enum class Part {
					Part_XAxis,
					Part_YAxis,
					Part_Plane
				};

				AIS_TranslationGizmo2D(Macad::Occt::Geom_Plane^ aPlane);
				Macad::Occt::Geom_Plane^ Component();
				void SetComponent(Macad::Occt::Geom_Plane^ aPlane);
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
					return NativeInstance->IsPartDetected((::AIS_TranslationGizmo2D::Part)part);
				}
			}; // class AIS_PlaneTrihedronEx
		};
	}
}
