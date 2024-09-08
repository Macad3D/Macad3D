using System.Collections.Generic;

namespace Macad.Occt.Generator;

public partial class Configuration
{
    public static List<string> Packages = new()
    {
        /*** FoundationClasses ***/
        /* -- TKKernel -- */
        /* "Storage",*/ "Standard", "Quantity", "StdFail", "TCollection", "NCollection", "TShort", /*"Units", "UnitsAPI",*/ "TColStd", "Message",
        /* -- TKMath -- */
        /* "BVH", "PLib", "Poly", "math", */ "BSplCLib", "BSplSLib", "Bnd", "CSLib", "Convert", "ElCLib", "ElSLib", "GeomAbs", "gp", "Precision", "TopLoc", "TColgp",

        /*** ModelingData ***/
        /* -- TKG2d -- */
        /* "LProp", "Geom2dLProp", "TColGeom2d", */ "Adaptor2d", "Geom2d", "Geom2dAdaptor",
        /* -- TKG3d -- */
        /* "AdvApprox", "GeomLProp", "LProp3d", "TColGeom", */ "Adaptor3d", "GProp", "Geom", "GeomAdaptor", "TopAbs",
        /* -- TKGeomBase -- */
        /* "AdvApp2Var", "AppCont", "AppParCurves", "AppDef", "Approx",  "CPnts", "FEmTool", "GC", "GCE2d", "GCPnts", 
         "GeomLib",  "GeomTools", "Hermit",*/
        "IntAna2d", "BndLib", "Geom2dConvert", "GeomConvert", "GeomProjLib", "ProjLib", "gce", "IntAna", "Extrema",
        /* -- TKBRep -- */
        "TopoDS", "BRep", "BRepAdaptor", "BRepLProp", "TopTools", "BRepTools", "BinTools", "TopExp",

        /*** ModelingAlgorithms ***/
        /* -- TKGeomAlgo -- */
        /*"AppBlend", "ApproxInt", "FairCurve", "GccAna", "GccEnt", "GccInt", "Geom2dGcc", "IntRes2d", "Intf", "Geom2dInt", "Geom2dHatch", 
        "GeomFill", "GeomInt", "Hatch", "HatchGen", "IntCurve", "IntCurveSurface", "IntImp", "IntImpParGen", "IntPatch", "IntPolyh", "IntStart",
        "IntSurf", "IntWalk", "Law", "LocalAnalysis", "NLPlate", "Plate", "TopClass", "TopTrans",*/ "Geom2dAPI", "GeomAPI", "GeomPlate",
        /* -- TKTopAlgo -- */
        /*"BRepApprox", "BRepClass", "BRepMAT2d", "BRepTopAdaptor", "Bisector", "MAT", "MAT2d", */
        "BRepClass3d", "BRepBndLib", "BRepBuilderAPI", "BRepGProp", "BRepCheck", "BRepExtrema", "BRepIntCurveSurface", "BRepLib", "IntCurvesFace",
        /* -- TKPrim -- */
        /*"BRepPrim", "BRepSweep", "Sweep",*/ "BRepPrimAPI",
        /* -- TKBO -- */
        /*"BOPCol", "BOPDS", "BOPTools", "IntTools",*/ "BOPAlgo", "BRepAlgoAPI",
        /* -- TKBool -- */
        /*"BRepAlgo", "BRepFill", "BRepProj", "TopOpeBRep", "TopOpeBRepBuild", "TopOpeBRepDS", "TopOpeBRepTool",*/
        /* -- TKFeat -- */
        /*"LocOpe", */ "BRepFeat",
        /* -- TKShHealing -- */
        /*"ShapeAlgo",*/ "ShapeAnalysis", "ShapeBuild", "ShapeConstruct", /*"ShapeCustom", "ShapeExtend",*/ "ShapeFix", /*"ShapeProcess", "ShapeProcessAPI",*/ "ShapeUpgrade",
        /* -- TKFillet -- */
        /*"Blend", "BRepBlend", "BlendFunc", "ChFi2d", "ChFiDS", "FilletSurf", /* "ChFiKPart",*/ "BRepFilletAPI", "ChFi3d",
        /* -- TKOffset -- */
        /*"BiTgte", "Draft",*/ "BRepOffset", "BRepOffsetAPI",

        /*** Visualization ***/
        /* -- TKService -- */
        /*"Font",*/ "Aspect", "Image", "WNT",
        /* -- TKV3d -- */
        "SelectBasics", /* "DsgPrs", "Select3D", "StdPrs",*/ "Graphic3d", "PrsMgr", "SelectMgr", "StdSelect", "Prs3d", "AIS", "V3d",
    };

    
}