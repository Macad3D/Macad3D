#pragma once

#include <vcclr.h>

// Version check
#include "Standard_Version.hxx"
#include "Generated/VersionInfo.h"

#if REQUIRED_OCCT_VERSION_MAJOR != OCC_VERSION_MAJOR || REQUIRED_OCCT_VERSION_MINOR != OCC_VERSION_MINOR || REQUIRED_OCCT_VERSION_MAINTENANCE != OCC_VERSION_MAINTENANCE
    #pragma message( "ERROR: OCCT library has the wrong version. Please install the correct version or regenerate wrapper code." )
    #pragma message( "       Installed version: " OCC_VERSION_STRING_EXT )
    #pragma message( "       Required version: " REQUIRED_OCCT_VERSION_STRING )
    #error Incorrect OCCT library version.
#endif


#include "Standard_TypeDef.hxx"
#include "gp.hxx"
#include "gp_XY.hxx"
#include "gp_XYZ.hxx"
#include "Message_ProgressIndicator.hxx"
#include "Message_Msg.hxx"

typedef void* EAGLContext;

#include "BaseClass.h"
#include "Standard_Transient.h"
#include "ValueTypes\ValueTypes.h"

#include "Extensions/TColStd_Ex.h"
#include "Extensions/BRep_Ex.h"
#include "Extensions/BOPTools_Ex.h"
#include "Extensions/TopLoc_Ex.h"
#include "Extensions/TopoDS_Ex.h"
#include "Extensions/TopTools_Ex.h"
#include "Extensions/Graphic3d_Ex.h"
#include "Extensions/V3d_Ex.h"

#include "Generated/ForwardDeclarations.h"
#include "Generated/NativeIncludes.h"
#include "Generated/Precision.h"

