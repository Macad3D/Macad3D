#include "OcctPCH.h"
#include "..\Generated\V3d.h"
#include "..\Generated\Graphic3d.h"

Macad::Occt::Graphic3d_RenderingParams^ Macad::Occt::V3d_View::ChangeRenderingParams()
{
	return gcnew Macad::Occt::Graphic3d_RenderingParams(NativeInstance->ChangeRenderingParams());
}