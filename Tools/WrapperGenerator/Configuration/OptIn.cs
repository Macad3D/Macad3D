using System.Collections.Generic;

namespace Macad.Occt.Generator;

public partial class Configuration
{
    /*
     * If a package is listed here, it is completely ignored except the listed classes.
     */

    public static Dictionary<string, List<string>> OptInClasses = new()
    {
        {
            "BOPAlgo", new()
            {
                "BOPAlgo_Algo",
                "BOPAlgo_BOP",
                "BOPAlgo_Builder",
                "BOPAlgo_BuilderShape",
                "BOPAlgo_GlueEnum",
                "BOPAlgo_Operation",
                "BOPAlgo_Options",
                "BOPAlgo_Tools",
                "BOPAlgo_ToolsProvider",
            }
        },
        {
            "BRepOffset", new()
            {
                "BRepOffset_Error",
                "BRepOffset_MakeOffset",
                "BRepOffset_Mode",
            }
        },
        {
            "ChFi3d", new()
            {
                "ChFi3d_FilletShape"
            }
        },
        {
            "GeomPlate", new()
            {
                "GeomPlate_BuildAveragePlane",
            }
        },
        {
            "Message", new()
            {
                "Message",
                "Message_Gravity",
                "Message_Printer",
                "Message_Report",
                "Message_Messenger",
                "Message_MetricType",
                "Message_ProgressRange",
                "Message_ListOfAlert"
            }
        },        
        {
            "WNT", new()
            {
                "WNT_Window",
                "WNT_WClass",
            }
        },
    };
}