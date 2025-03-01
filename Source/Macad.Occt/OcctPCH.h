#pragma once

#define WIN32_LEAN_AND_MEAN

#include <vcclr.h>
#include <sstream>

// Version check
#include "Standard_Version.hxx"
#include "Generated/VersionInfo.h"

#if REQUIRED_OCCT_VERSION_MAJOR != OCC_VERSION_MAJOR || REQUIRED_OCCT_VERSION_MINOR != OCC_VERSION_MINOR || REQUIRED_OCCT_VERSION_MAINTENANCE != OCC_VERSION_MAINTENANCE
    #pragma message( "ERROR: OCCT library has the wrong version. Please install the correct version or regenerate wrapper code." )
    #pragma message( "       Installed version: " OCC_VERSION_STRING_EXT )
    #pragma message( "       Required version: " REQUIRED_OCCT_VERSION_STRING )
    #error Incorrect OCCT library version.
#endif

// Native includes

#include "Standard_TypeDef.hxx"
#include "gp.hxx"
#include "gp_XY.hxx"
#include "gp_XYZ.hxx"
#include "Message_ProgressIndicator.hxx"
#include "Message_Msg.hxx"

// Define Aspect_FBConfig to pointer, otherwise it will be typerefed to a OpenGL type
// which cannot be found by the linker
#define _Aspect_FBConfig_HeaderFile
typedef void* Aspect_FBConfig;

#include "Generated/ForwardDeclarations.h"
#include "Generated/NativeIncludes.h"

// Managed includes

#include "BaseClass.h"
#include "IndexEnumerator.h"
#include "IteratorEnumerator.h"
#include "Standard_Transient.h"
#include "ValueTypes\ValueTypes.h"

#include "Extensions/BRep_Ex.h"
#include "Extensions/Graphic3d_Ex.h"
#include "Extensions/Geom2dAPI_Ex.h"
#include "Extensions/TopoDS_Ex.h"
#include "Extensions/TopTools_Ex.h"
#include "Extensions/V3d_Ex.h"
