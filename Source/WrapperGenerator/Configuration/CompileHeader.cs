namespace Macad.Occt.Generator;

public static partial class Configuration
{
    public static string CompileHeader = @"
// clang does not define the __MACHINEARM in its intrinsic.h
#undef __clang__
    #include <intrin0.h> 
#define __clang__

// The following header files are not correctly included and will be missed in compilation
#include ""gp_XY.hxx""
#include ""gp_XYZ.hxx""
";
}