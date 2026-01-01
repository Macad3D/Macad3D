#include "ManagedPCH.h"

#include "AISX_OutlinePostProcess.h"

#using "Macad.Occt.dll" as_friend

namespace Macad
{
    namespace Occt
    {
        namespace Extensions
        {
            /// <summary>
            /// AISX_OutlinePostProcess performs an outline/highlight post-processing pass 
            /// by rendering a layer containing highlights into an off-screen framebuffer 
            /// and applying a shader-based outline effect.
            /// </summary>
            public ref class AISX_OutlinePostProcess sealed : public AIS_InteractiveObject
            {
            public:

                /// <summary>
                /// Renders the highlight layer into an own framebuffer object.
                /// </summary>
                /// <param name="layer">Index of the layer with the highlights applied.</param>
                /// <returns>true on success, otherwise false.</returns>
                bool UpdateHighlights(int layer)
                {
                    return NativeInstance->UpdateHighlights(layer);
                }

                //--------------------------------------------------------------------------------------------------

                /// <summary>
                /// Checks whether the object reports a render error.
                /// </summary>
                /// <returns>true if the object a render error; otherwise false.</returns>
                bool HasError()
                {
                    return NativeInstance->HasError();
                }

                //--------------------------------------------------------------------------------------------------

                IMPLEMENT_TRANSIENT(AISX_OutlinePostProcess, AIS_InteractiveObject)

                /// <summary>
                /// Constructs a post processor for a single V3d_View.
                /// </summary>
                /// <param name="View">V3d_View to receive this post processing effect.</param>
                AISX_OutlinePostProcess(Macad::Occt::V3d_View^ View)
                    : AISX_OutlinePostProcess(new ::AISX_OutlinePostProcess(View->NativeInstance))
                {
                }

                //--------------------------------------------------------------------------------------------------

                ~AISX_OutlinePostProcess()
                {
                    if (!IsDisposed())
                    {
                        NativeInstance->Release();
                    }
                }

                //--------------------------------------------------------------------------------------------------

            };

        } // namespace Extensions
    } // namespace Occt
} // namespace Macad
