#pragma once

#define STRUCT_PIN(value, managed, native) pin_ptr<managed> value##_pinptr(&value); ::native* value##_ptr = reinterpret_cast<::native*>(value##_pinptr);
#define STRUCT_PINREF(value, managed, native) pin_ptr<managed> value##_pinptr(&*value); ::native* value##_ptr = reinterpret_cast<::native*>(value##_pinptr);

#include "Enums\EulerSequence.h"
#include "Enums\TrsfForm.h"

#include "2d\XY.h"
#include "2d\Pnt2d.h"
#include "2d\Vec2d.h"
#include "2d\Dir2d.h"
#include "2d\Ax2d.h"
#include "2d\Ax22d.h"
#include "2d\Mat2d.h"
#include "2d\Trsf2d.h"

#include "3d\XYZ.h"
#include "3d\Pnt.h"
#include "3d\Vec.h"
#include "3d\Dir.h"
#include "3d\Ax1.h"
#include "3d\Ax2.h"
#include "3d\Ax3.h"
#include "3d\Mat.h"
#include "3d\Quaternion.h"
#include "3d\Trsf.h"
#include "3d\Pln.h"
#include "gp.h"
