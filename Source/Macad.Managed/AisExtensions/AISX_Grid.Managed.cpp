#include "ManagedPCH.h"

#include "AISX_Grid.h"

#using "Macad.Occt.dll" as_friend

namespace Macad
{
    namespace Occt
    {
        namespace Extensions
        {
            public ref class AISX_Grid sealed : public AIS_InteractiveObject
            {
            public:

                void SetExtents(double x, double y)
                {
                    NativeInstance->SetExtents(x, y);
                }

                //--------------------------------------------------------------------------------------------------

                void SetPosition(Ax3 position)
                {
                    pin_ptr<Macad::Occt::Ax3> pp_position = &position;
                    NativeInstance->SetPosition(*(gp_Ax3*)pp_position);
                }

                //--------------------------------------------------------------------------------------------------

                void SetDivisions(double linearStep, int angularCount)
                {
                    NativeInstance->SetDivisions(linearStep, angularCount);
                }

                //--------------------------------------------------------------------------------------------------

            public:
                IMPLEMENT_TRANSIENT(AISX_Grid, AIS_InteractiveObject)

                AISX_Grid()
                    : AIS_InteractiveObject(InitMode::Uninitialized)
                {
                    NativeInstance = new ::AISX_Grid();
                }

                //--------------------------------------------------------------------------------------------------
            };

        } // namespace Extensions
    } // namespace Occt
} // namespace Macad
