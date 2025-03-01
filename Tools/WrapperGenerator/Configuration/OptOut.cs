using System.Collections.Generic;

namespace Macad.Occt.Generator;

public static partial class Configuration
{
    public static List<string> Ignore = new()
    {
        /*
         * Iterator functions unusable
         */
        "*::begin",
        "*::end",
        "*::cbegin",
        "*::cend",

        /*
         * Type functions
         */
        "*::get_type_descriptor",
        "*::DynamicType",
        "*::get_type_name",

        /*
         * Classes with platform specific functionality
         */
        "Standard_CLocaleSentry",
        "Standard_MMgrOpt",
        "Sentry",

        /*
         * Compilation Errors
         */
        "Aspect_VKeySet", // error C2280:  'Aspect_VKeySet &Aspect_VKeySet::operator =(const Aspect_VKeySet &)': attempting to reference a deleted function
        "Image_VideoRecorder::ChangeFrame", // Image_VideoRecorder::ChangeFrame() returns pixmap, this cannot be wrapped, because Image_PixMap defines an private assignment operator
        "Standard_Type", // could not deduce template argument for 'T'
        "Graphic3d_Buffer", // could not deduce template argument for 'Type_t'
        "BRepExtrema_CellFilter", // error C2039: 'IsEqual': is not a member of 'BRepExtrema_VertexInspector'
        "AIS_Manipulator", // error C2039: 'OptionsForAttach': is not a member of '`global namespace''

        /*
         * Missing External
         */
        "BRepOffset_MakeSimpleOffset::GetSafeOffset",
        "Graphic3d_BvhCStructureSet",
        "Graphic3d_BvhCStructureSetTrsfPers",
        "Graphic3d_MediaTextureSet",
        "Graphic3d_Layer", // Missing exports in Graphic3d_BvhCStructureSet, Graphic3d_BvhCStructureSetTrsfPers
        "SelectMgr_SelectionImageFiller", // unresolved external SelectMgr_SelectionImageFiller::CreateFiller
        "SelectMgr_TriangularFrustumSet", // unresolved external SelectMgr_TriangularFrustumSet::SelectMgr_TriangularFrustumSet(void)
        "BinTools_ShapeWriter", // unresolved external symbol "private: virtual void __cdecl BinTools_ShapeWriter::WriteShape(class BinTools_OStream &,class TopoDS_Shape const &)"
        "BinTools_Curve2dSet::Dump", // unresolved external symbol "public: void __cdecl BinTools_Curve2dSet::Dump
        "Aspect_DisplayConnection", // warning LNK4248: unresolved typeref token for '__GLXFBConfigRec'; 
        "Aspect_NeutralWindow", // warning LNK4248: unresolved typeref token for '__GLXFBConfigRec'; 
        "MyDirectPolynomialRoots", // unresolved external symbol
        "ShapeFix_WireSegment::ShapeFix_WireSegment", // unresolved external symbol
        "Bnd_BoundSortBox2d", // seems to be completely missing from the library (as of 7.7.0)

        /*
         * Only internally used
         */
        "VectorOfPoint",

        /*
         * Replaced with hand-wrapped code
         */
        "gp", 
        "V3d_View::ChangeRenderingParams",

        /*
         * Returns const references
         */
        "GeomAPI_ExtremaCurveCurve::Extrema",
        "GeomAPI_ExtremaCurveSurface::Extrema",
        "GeomAPI_ProjectPointOnSurf::Extrema",
    };

    //--------------------------------------------------------------------------------------------------

    /* If copied from linker message, remove the sequence $$F */
    public static List<string> MissingExports = new()
    {
        "?GetAnalyse@BRepOffset_MakeOffset@@QEBAAEBVBRepOffset_Analyse@@XZ",
        "?TransformShapeFU@BRepFeat_MakeLinearForm@@QEAAXH@Z",
        "?GetAbsolutError@BRepGProp_VinertGK@@QEBANXZ",
        "?NbEdges@BRepOffsetAPI_FindContigousEdges@@QEBAHXZ",
        "?ModifiedShape@BRepTools_PurgeLocations@@QEBA?AVTopoDS_Shape@@AEBV2@@Z",
        "?DN@BSplCLib@@SAXNHAEBV?$NCollection_Array1@Vgp_Pnt2d@@@@AEBV?$NCollection_Array1@N@@AEAVgp_Pnt2d@@AEAVgp_Vec2d@@@Z",
        "?DN@BSplCLib@@SAXNHAEBV?$NCollection_Array1@Vgp_Pnt@@@@AEBV?$NCollection_Array1@N@@AEAVgp_Pnt@@AEAVgp_Vec@@@Z",
        "?ClearTangents@Geom2dAPI_Interpolate@@QEAAXXZ",
        "?ClearTangents@GeomAPI_Interpolate@@QEAAXXZ",
        "??0SelectMgr_TriangularFrustumSet@@QEAA@XZ",
        "?SetExitIfToleranceExceeded@BRepLib_ValidateEdge@@QEAAXN@Z",
    };
}