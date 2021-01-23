using System.Collections.Generic;

namespace Macad.Occt.Generator
{
    public static class Configuration
    {
        public static string Output = "";
        public static string OcctIncludePath = "";
        public static string CastXmlPath = "";
        public static string VisualCppPath = "";
        public static string UcrtPath = "";
        public static string WinSDKPath = "";
        public static string Namespace = "Macad::Occt";
        public static string CachePath = "";

        #region Package List

        public static List<string> PackageList = new()
        {
            /*** FoundationClasses ***/
            /* -- TKKernel -- */
            /* "Storage", */ "Standard", "MMgt", "Dico", "Quantity", "StdFail", "TCollection", "TShort", "Units", "UnitsAPI", "NCollection", "TColStd", "Message",
            /* -- TKMath -- */
            /* "BVH", "PLib", "Poly", "math", */ "BSplCLib", "BSplSLib", "Bnd", "CSLib", "Convert", "ElCLib", "ElSLib", "GeomAbs",  "gp", "Precision", "TopLoc", "TColgp",

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
            "ShapeAlgo", "ShapeAnalysis", "ShapeBuild", "ShapeConstruct", "ShapeCustom", "ShapeExtend", "ShapeFix", "ShapeProcess", "ShapeProcessAPI", "ShapeUpgrade",
            /* -- TKFillet -- */
            /*"Blend", "BRepBlend", "BlendFunc", "ChFi2d", "ChFiDS", "FilletSurf", /* Doesn't work: "ChFiKPart",*/ "BRepFilletAPI", "ChFi3d", 
            /* -- TKOffset -- */
            /*"BiTgte", "Draft",*/ "BRepOffset", "BRepOffsetAPI",

            /*** Visualization ***/
            /* -- TKService -- */
            /*"Font",*/ "Aspect", "Image", "SelectBasics", "TColQuantity", "WNT",
            /* -- TKV3d -- */
            /* "DsgPrs", "Select3D", "StdPrs",*/ "Graphic3d", "PrsMgr", "SelectMgr", "StdSelect", "Prs3d", "AIS", "V3d",
        };

        /*
         * If a package is listed here, it is completely ignored except the listed classes.
         */

        public static Dictionary<string, List<string>> ClassOptInList = new()
        {
            {
                "PrsMgr", new List<string>()
                {
                    "PrsMgr_PresentableObject",
                }
            },
            {
                "ChFi3d", new List<string>()
                {
                    "ChFi3d_FilletShape"
                }
            },
            {
                "Extrema", new List<string>()
                {
                    "Extrema_POnCurv",
                    "Extrema_ExtPC"
                }
            },            
            {
                "BOPAlgo", new List<string>()
                {
                    "BOPAlgo_Algo",
                    "BOPAlgo_BuilderShape",
                    "BOPAlgo_Builder",
                    "BOPAlgo_BOP",
                    "BOPAlgo_Options",
                    "BOPAlgo_GlueEnum",
                    "BOPAlgo_Operation",
                    "BOPAlgo_Tools",
                    "BOPAlgo_ToolsProvider",
                }
            },
            {
                "GeomPlate", new List<string>
                {
                    "GeomPlate_BuildAveragePlane",
                }
            }
        };

        #endregion

        #region Known Types

        public static List<Definitions.KnownTypeDefinition> KnownTypes = new()
        {
            new Definitions.KnownTypeDefinition("void", "void", true, Definitions.KnownTypes.Void),
            new Definitions.KnownTypeDefinition("bool", "bool", true, Definitions.KnownTypes.Boolean),
            new Definitions.KnownTypeDefinition("Standard_Real", "double", true, Definitions.KnownTypes.Double),
            new Definitions.KnownTypeDefinition("Standard_ShortReal", "float", true, Definitions.KnownTypes.Double),
            new Definitions.KnownTypeDefinition("doublereal", "double", true, Definitions.KnownTypes.Double),
            new Definitions.KnownTypeDefinition("float", "float", true, Definitions.KnownTypes.Double),
            new Definitions.KnownTypeDefinition("double", "double", true, Definitions.KnownTypes.Double),
            new Definitions.KnownTypeDefinition("Standard_Boolean", "bool", true, Definitions.KnownTypes.Boolean),
            new Definitions.KnownTypeDefinition("Standard_Integer", "int", true, Definitions.KnownTypes.Integer),
            new Definitions.KnownTypeDefinition("Standard_Byte", "unsigned char", true, Definitions.KnownTypes.Integer),
            new Definitions.KnownTypeDefinition("Standard_Size", "size_t", true, Definitions.KnownTypes.Integer),
            new Definitions.KnownTypeDefinition("short", "short", true, Definitions.KnownTypes.Integer),
            new Definitions.KnownTypeDefinition("char", "char", true, Definitions.KnownTypes.Integer),
            new Definitions.KnownTypeDefinition("unsigned char", "unsigned char", true, Definitions.KnownTypes.Integer),
            new Definitions.KnownTypeDefinition("int", "int", true, Definitions.KnownTypes.Integer),
            new Definitions.KnownTypeDefinition("integer", "int", true, Definitions.KnownTypes.Integer),
            new Definitions.KnownTypeDefinition("long", "long", true, Definitions.KnownTypes.Integer),
            new Definitions.KnownTypeDefinition("unsigned int", "unsigned int", true, Definitions.KnownTypes.Integer),
            new Definitions.KnownTypeDefinition("unsigned __int64", "unsigned __int64", true, Definitions.KnownTypes.Integer),
            new Definitions.KnownTypeDefinition("size_t", "unsigned __int64", true, Definitions.KnownTypes.Integer),
            new Definitions.KnownTypeDefinition("WNT_Uint", "UINT", true, Definitions.KnownTypes.Integer),
            new Definitions.KnownTypeDefinition("WNT_Dword", "DWORD", true, Definitions.KnownTypes.Integer),
            new Definitions.KnownTypeDefinition("Standard_Character", "char", true, Definitions.KnownTypes.Character),
            new Definitions.KnownTypeDefinition("Standard_ExtCharacter", "char16_t", true, Definitions.KnownTypes.Standard_ExtCharacter),
            new Definitions.KnownTypeDefinition("Standard_CString", "System::String", false, Definitions.KnownTypes.Standard_CString),
            new Definitions.KnownTypeDefinition("Standard_ExtString", "System::String", false, Definitions.KnownTypes.Standard_ExtString),
            new Definitions.KnownTypeDefinition("HANDLE", "System::IntPtr", true, Definitions.KnownTypes.VoidPtr),
            new Definitions.KnownTypeDefinition("Standard_Transient", "Macad::Occt::Standard_Transient", false, Definitions.KnownTypes.WrappedClass),
            new Definitions.KnownTypeDefinition("gp_XYZ", "Macad::Occt::XYZ", true, Definitions.KnownTypes.WrappedStruct),
            new Definitions.KnownTypeDefinition("gp_Pnt", "Macad::Occt::Pnt", true, Definitions.KnownTypes.WrappedStruct),
            new Definitions.KnownTypeDefinition("gp_Vec", "Macad::Occt::Vec", true, Definitions.KnownTypes.WrappedStruct),
            new Definitions.KnownTypeDefinition("gp_Dir", "Macad::Occt::Dir", true, Definitions.KnownTypes.WrappedStruct),
            new Definitions.KnownTypeDefinition("gp_Ax1", "Macad::Occt::Ax1", true, Definitions.KnownTypes.WrappedStruct),
            new Definitions.KnownTypeDefinition("gp_Ax2", "Macad::Occt::Ax2", true, Definitions.KnownTypes.WrappedStruct),
            new Definitions.KnownTypeDefinition("gp_Ax3", "Macad::Occt::Ax3", true, Definitions.KnownTypes.WrappedStruct),
            new Definitions.KnownTypeDefinition("gp_Pln", "Macad::Occt::Pln", true, Definitions.KnownTypes.WrappedStruct),
            new Definitions.KnownTypeDefinition("gp_Mat", "Macad::Occt::Mat", true, Definitions.KnownTypes.WrappedStruct),
            new Definitions.KnownTypeDefinition("gp_Trsf", "Macad::Occt::Trsf", true, Definitions.KnownTypes.WrappedStruct),
            new Definitions.KnownTypeDefinition("gp_Quaternion", "Macad::Occt::Quaternion", true, Definitions.KnownTypes.WrappedStruct),
            new Definitions.KnownTypeDefinition("gp_EulerSequence", "Macad::Occt::EulerSequence", true, Definitions.KnownTypes.Enum),
            new Definitions.KnownTypeDefinition("gp_TrsfForm", "Macad::Occt::TrsfForm", true, Definitions.KnownTypes.Enum),
            new Definitions.KnownTypeDefinition("gp_XY", "Macad::Occt::XY", true, Definitions.KnownTypes.WrappedStruct),
            new Definitions.KnownTypeDefinition("gp_Pnt2d", "Macad::Occt::Pnt2d", true, Definitions.KnownTypes.WrappedStruct),
            new Definitions.KnownTypeDefinition("gp_Vec2d", "Macad::Occt::Vec2d", true, Definitions.KnownTypes.WrappedStruct),
            new Definitions.KnownTypeDefinition("gp_Dir2d", "Macad::Occt::Dir2d", true, Definitions.KnownTypes.WrappedStruct),
            new Definitions.KnownTypeDefinition("gp_Ax2d", "Macad::Occt::Ax2d", true, Definitions.KnownTypes.WrappedStruct),
            new Definitions.KnownTypeDefinition("gp_Ax22d", "Macad::Occt::Ax22d", true, Definitions.KnownTypes.WrappedStruct),
            new Definitions.KnownTypeDefinition("gp_Trsf2d", "Macad::Occt::Trsf2d", true, Definitions.KnownTypes.WrappedStruct),
            new Definitions.KnownTypeDefinition("gp_Mat2d", "Macad::Occt::Mat2d", true, Definitions.KnownTypes.WrappedStruct),
        };

        #endregion

        public static List<string> UnknownTypes = new();

        #region Ignores

        public static List<string> Ignore = new()
        {
            "gp", // Manually wrapped
            "Standard_OutOfMemory", // unresolved external Standard_OutOfMemory::Throw(void)
            "Standard_AncestorIterator::Iterator",
            "Standard_ErrorHandler::Label", // unknown sigjmp_buf
            "TCollection_ExtendedString::ToUTF8CString", // Not needed, conversion of character unknown
            "Standard", // Failed to map Standard::Free
            "Standard_Type", // could not deduce template argument for 'T'
            "Storage_Schema", // 
            "Storage_Bucket", // unresolved external destructor
            "Storage_BucketIterator", // unresolved external destructor
            "Storage_BucketOfPersistent", // unresolved external destructor
            "Storage_InternalData", // uses Storage_BucketOfPersistent, which has an unresolved external destructor
            "NCollection_Handle", // Base class is Handle()
            "NCollection_ListNode", // overridden delete operator
            "NCollection_SeqNode", // overridden delete operator
            "NCollection_BaseMap", // protected destructor
            "NCollection_BaseSequence", // protected destructor
            "NCollection_BaseVector", // protected destructor
            "NCollection_SparseArrayBase", // protected destructor
            "NCollection_Buffer::Data", // uses unmapped unsigned char pointer typ
            "NCollection_Buffer::ChangeData", // uses unmapped unsigned char pointer typ
            "TCollection_SeqNode", // No senseful interpretion
            "TColStd_PackedMapOfInteger", // Base class conversion is inaccessible
            "Poly_CoherentTriangulation::FindTriangle", // second param is const Poly_CoherentTriangle *[]
            "Poly_CoherentTriPtr", // Invisible delete operator
            "BSplCLib_EvaluatorFunction::BSplCLib_EvaluatorFunction", // Constructor not valid for pure abstract class
            "BSplSLib_EvaluatorFunction::BSplSLib_EvaluatorFunction", // Constructor not valid for pure abstract class
            "AdvApp2Var_SysBase", // Uses unmapped type intptr_t *
            "AdvApprox_EvaluatorFunction::Evaluate", // array parameter not supported yet
            "ProjLib_PrjFunc", // cannot convert from 'Adaptor3d_Curve' to 'const Adaptor3d_CurvePtr'
            "gp_XYZ::GetData", // Return value is double*, unclear behaviour
            "gp_XYZ::ChangeData", // Return value is double*, unclear behaviour
            "BRepGProp_Gauss::Compute", // uses const Standard_Real []
            "BOPAlgo_Tools::PerformCommonBlocks", // NCollection_Vector referencing 
            "TopOpeBRep_traceSIFF", // Only available when OCCT_DEBUG is defined
            "TopOpeBRepDS_traceDS", // Only available when OCCT_DEBUG is defined
            "TopOpeBRepDS_traceCURVE", // Only available when OCCT_DEBUG is defined
            "TopOpeBRepDS_traceSHAPE", // Only available when OCCT_DEBUG is defined
            "TopOpeBRepTool_STATE", // Only available when OCCT_DEBUG is defined
            "TopOpeBRepDS_DSS", // Many, many unresolved externals
            "Image_PixMapData", // Uses base class NCollection_Buffer
            "Image_PixMap::Value", // indirections on a generic type parameter are not allowed, needs handcrafted wrapping
            "Image_PixMap::ChangeValue", // indirections on a generic type parameter are not allowed, needs handcrafted wrapping
            "Graphic3d_BoundBuffer", // uses base class NCollection_Buffer
            "Graphic3d_Buffer", // uses base class NCollection_Buffer
            "Graphic3d_Vertex", // uses base class TEL_POINT
            "BVH_Builder", // Template class
            "Graphic3d_ShaderProgram", // indirections on a generic type parameter are not allowed
            "Graphic3d_ShaderVariable", // indirections on a generic type parameter are not allowed
            "SelectMgr_BaseFrustum", // Derived classes are template classes.
            "Image_PixMap::Data", // uses char* as return value
            "Image_PixMap::ChangeData", // uses char* as return value
            "Image_PixMap::Row", // uses char* as return value
            "Image_PixMap::ChangeRow", // uses char* as return value
            "Graphic3d_AspectText3d::Values", // cannot convert argument 2 from 'Occ::Standard_CString_Wrapper' to 'Standard_CString &'
            "Graphic3d_ClipPlane::GetEquation", // Unknown result type Equation
            "Graphic3d_ValueInterface::As", // indirections on a generic type parameter
            "Graphic3d_UniformValue", // Template class
            "Graphic3d_UniformValueTypeID", // Template class
            "Graphic3d_GraphicDriver::FBOCreate", // Not usable
            "Graphic3d_GraphicDriver::FBOChangeViewport", // Not usable
            "Graphic3d_GraphicDriver::FBOGetDimensions", // Not usable
            "Graphic3d_GraphicDriver::FBORelease", // Not usable
            "Visual3d_View::FBOCreate", // Not usable
            "Visual3d_View::FBOChangeViewport", // Not usable
            "Visual3d_View::FBOGetDimensions", // Not usable
            "Visual3d_View::FBORelease", // Not usable
            "Visual3d_View::HiddenObjects", // Irregular template definition
            "Visual3d_View::ChangeHiddenObjects", // Irregular template definition
            "SelectMgr_ToleranceMap", // Missing constructor
            "SelectMgr_FrustumBuilder", // many unresolved externals
            "SelectMgr_SelectableObject::BndBoxOfSelected", // Uses NCollection template
            "AIS_InteractiveContext::EntityOwners", // Uses NCollection template
            "StdPrs_DeflectionCurve::Match", // ambiguous call to overloaded function

            "AIS_ColorScale", // Missing export AIS_ColorScale::Compute
            "AIS_Manipulator", // Unused, and problematic enum OptionsForAttach
            "BOPCol_Box2DBndTreeSelector", // Base class not present (NCollection_UBTree< TheObjType, TheBndType >::Selector)
            "BOPCol_BoxBndTreeSelector", // Base class not present (NCollection_UBTree< TheObjType, TheBndType >::Selector)
            "BOPDS_Iterator::SetDS", // cannot convert argument 1 from 'BOPDS_DS' to 'const BOPDS_PDS &'
            "BOPDS_SubIterator::SetDS", // cannot convert argument 1 from 'BOPDS_DS' to 'const BOPDS_PDS &'
            "BRepExtrema_SelfIntersection", // Unresolved external PreCheckElements
            "BRepExtrema_TriangleSet", // Too many unresolved externals
            "BRepBuilderAPI_BndBoxTreeSelector", // Base class not present (NCollection_UBTree< TheObjType, TheBndType >::Selector)
            "Font_BRepFont", // 'type cast' : conversion from 'Font_BRepFont *' to 'Standard_Transient *' exists, but is inaccessible
            "Font_BRepFont::Font_BRepFont", // 'operator new' not accessible because 'Font_BRepFont' uses 'protected' to inherit from 'Font_FTFont'
            "Font_BRepFont::Mutex", // 'Standard_Mutex::operator =' : cannot access private member declared in class 'Standard_Mutex'
            "Font_BRepTextBuilder::Perform", // Default value of third parameter is mismapped (from 'Macad::Occt::gp_Ax3' to 'const gp_Ax3 &')
            "Font_FTFont::GlyphImage", // Image_PixMap result is declared const 
            "IntAna_ListOfCurve::Remove", // Leads to compilation error in NCollection_List.hxx
            "IntAna_ListOfCurve::Contains", // Leads to compilation error in NCollection_List.hxx
            "PrsMgr_Prs::PrsMgr_Prs", // cannot convert argument 2 from 'PrsMgr_Presentation' to 'const PrsMgr_PresentationPointer &'
            "Select3D_SensitiveGroup", // Unresolved externals
            "Select3D_SensitiveTriangulation", // Unresolved externals
            "SelectMgr_SensitiveEntitySet", // Base class is not detected as transient
            "ShapeAnalysis_BoxBndTreeSelector", // Base class not present (NCollection_UBTree< TheObjType, TheBndType >::Selector)
            "TopOpeBRep_FacesFiller::SetPShapeClassifier", // cannot convert argument 1 from 'TopOpeBRepTool_ShapeClassifier' to 'const TopOpeBRepTool_PShapeClassifier &'
            "TopOpeBRep_FFDumper::TopOpeBRep_FFDumper", // cannot convert argument 1 from 'TopOpeBRep_FacesFiller' to 'const TopOpeBRep_PFacesFiller &'
            "TopOpeBRep_FFDumper::Init", // cannot convert argument 1 from 'TopOpeBRep_FacesFiller' to 'const TopOpeBRep_PFacesFiller &'
            "TopOpeBRepBuild_BuilderON", // Generates compiler error, cannot convert argument 1 from 'TopOpeBRepBuild_Builder' to 'const TopOpeBRepBuild_PBuilder &'
            "TopOpeBRepDS_DataMapOfShapeState", // Returns pointer to enum
            "TopOpeBRepDS_FaceInterferenceTool::TopOpeBRepDS_FaceInterferenceTool", // cannot convert argument 1 from 'TopOpeBRepDS_DataStructure' to 'const TopOpeBRepDS_PDataStructure &'
            "TopOpeBRepDS_Filter::TopOpeBRepDS_Filter", // cannot convert argument 2 from 'TopOpeBRepTool_ShapeClassifier' to 'const TopOpeBRepTool_PShapeClassifier &'
            "V3d_RectangularGrid::V3d_RectangularGrid", // cannot convert argument 1 from 'V3d_Viewer' to 'const V3d_ViewerPointer &'
            "V3d_CircularGrid::V3d_CircularGrid", // cannot convert argument 1 from 'V3d_Viewer' to 'const V3d_ViewerPointer &'

            /*
             * Deprecated
             */
            "Standard_Persistent",
            "Graphic3d_Structure::Transform",
            "AIS_InteractiveContext::Hilight",
            "PrsMgr_PresentableObject::GetTransformPersistencePoint",

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
             * Classes which baseclass is unwanted
             */
            "CSLib_NormalPolyDef",
            "Adaptor3d_InterFunc",
            "BRepGProp_UFunction",
            "BRepGProp_TFunction",
            "Standard_Mutex",

            /*
             * Classes which baseclass can not be wrapped
             */
            "BRepClass3d_BndBoxTreeSelectorPoint",
            "BRepClass3d_BndBoxTreeSelectorLine",

            /*
             * Compilation Errors
             */
            "Graphic3d_ListOfCLight", // error C2678: binary '==' : no operator found which takes a left-hand operand of type 'Graphic3d_CLight' (or there is no acceptable conversion)
            "Image_VideoRecorder", // Image_VideoRecorder::ChangeFrame() returns pixmap, this cannot be wrapped, because Image_PixMap defines an private assignment operator
            "Message_ProgressIndicator", // error C2668: 'Message_ProgressIndicator::NewScope': ambiguous call to overloaded function
            "Message_ProgressSentry", // error C2668: 'Message_ProgressIndicator::NewScope': ambiguous call to overloaded function
            "BRepAlgoAPI_BuilderAlgo::Builder", // typedef BOPAlgo_PBuilder is used, which is defined as BOPAlgo_Builder*. Leads to C2679
            "SelectMgr_TriangularFrustum", // multiple error C2664, Types pointed to are unrelated; conversion requires reinterpret_cast, C-style cast or function-style cast
            "SelectMgr_RectangularFrustum", // error C2440: '<function-style-cast>': cannot convert from 'const gp_Pnt *' to 'Macad::Occt::Pnt'
            "SelectMgr_SelectingVolumeManager", // error C2440: '<function-style-cast>': cannot convert from 'const gp_Pnt *' to 'Macad::Occt::Pnt'
            "BRepExtrema_OverlapTool", // error C2882:  'BVH': illegal use of namespace identifier in expression (in BVH_Traverse.hxx(322))
            "AIS_ViewController::Keys", // error C2280:  'Aspect_VKeySet &Aspect_VKeySet::operator =(const Aspect_VKeySet &)': attempting to reference a deleted function
            "AIS_ViewController::ChangeKeys", // error C2280:  'Aspect_VKeySet &Aspect_VKeySet::operator =(const Aspect_VKeySet &)': attempting to reference a deleted function

            /*
             * Missing External
             */
            "BRepOffset_MakeSimpleOffset::GetSafeOffset",
            "Graphic3d_BvhCStructureSet",
            "Graphic3d_BvhCStructureSetTrsfPers",
            "Graphic3d_MediaTextureSet",
            "Graphic3d_Layer", // Missing exports in Graphic3d_BvhCStructureSet, Graphic3d_BvhCStructureSetTrsfPers
            "SelectMgr_SelectionImageFiller", // unresolved external SelectMgr_SelectionImageFiller::CreateFiller

            /*
             * Replaced with hand-wrapped code
             */
            "V3d_View::ChangeRenderingParams",
        };

        #endregion

        #region Missing Exports

        public static List<string> MissingExports = new()
        {
            "math_NewtonMinimum::IsConvex()",
            "math_NewtonFunctionSetRoot::StateNumber()",
            "math_GlobOptMin::isDone()",
            "BSplCLib::DN(Standard_Real,Standard_Integer,TColgp_Array1OfPnt,TColStd_Array1OfReal,gp_Pnt,gp_Vec)",
            "BSplCLib::DN(Standard_Real,Standard_Integer,TColgp_Array1OfPnt2d,TColStd_Array1OfReal,gp_Pnt2d,gp_Vec2d)",
            "AdvApp2Var_Iso::AdvApp2Var_Iso(GeomAbs_IsoType,Standard_Integer,Standard_Integer)",
            "AppDef_MultiLine::SetParameter(Standard_Integer,Standard_Real)",
            "AppDef_ResConstraintOfMyGradientbisOfBSplineCompute::Error()",
            "AppDef_ResConstraintOfMyGradientOfCompute::Error()",
            "AppDef_ResConstraintOfTheGradient::Error()",
            "AppDef_TheResol::Error()",
            "ProjLib_ProjectedCurve::Load(Standard_Real)",
            "ProjLib_ProjectOnSurface::Load(Adaptor3d_HSurface)",
            "BinTools_Curve2dSet::Dump(std::ostream)",
            "Geom2dAPI_Interpolate::ClearTangents()",
            "Geom2dGcc_Lin2dTanObl::IsParallel2()",
            "Geom2dGcc_FunctionTanCuCuCu::Geom2dGcc_FunctionTanCuCuCu(Geom2dAdaptor_Curve,gp_Pnt2d,gp_Pnt2d)",
            "Geom2dGcc_FunctionTanCuCuCu::Geom2dGcc_FunctionTanCuCuCu(gp_Lin2d,Geom2dAdaptor_Curve,gp_Pnt2d)",
            "Geom2dGcc_FunctionTanCuCuCu::Geom2dGcc_FunctionTanCuCuCu(gp_Circ2d,Geom2dAdaptor_Curve,gp_Pnt2d)",
            "Geom2dHatch_Hatcher::IsDone()",
            "Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter::Locate(Adaptor2d_Curve2d,Adaptor2d_Curve2d,Standard_Integer,Standard_Integer,Extrema_POnCurv2d,Extrema_POnCurv2d)",
            "Geom2dInt_Geom2dCurveTool::IsComposite(Adaptor2d_Curve2d)",
            "GeomAPI_Interpolate::ClearTangents()",
            "GeomFill_SweepSectionGenerator::Init(Geom_Curve,Geom_Curve,Geom_Curve,Standard_Real)",
            "GeomFill_SweepSectionGenerator::GeomFill_SweepSectionGenerator(Geom_Curve,Geom_Curve,Geom_Curve,Standard_Real)",
            "GeomFill_NSections::GeomFill_NSections(TColGeom_SequenceOfCurve,TColStd_SequenceOfReal,Standard_Real,Standard_Real)",
            "GeomFill_FunctionGuide::Deriv2T(gp_XYZ,gp_XYZ,math_Vector,math_Vector)",
            "GeomInt_WLApprox::Perform()",
            "GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox::Error()",
            "GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox::Error()",
            "GeomInt_IntSS::TolFixTangents(Standard_Real,Standard_Real)",
            "GeomInt_IntSS::SetTolFixTangents(Standard_Real,Standard_Real)",
            "IntCurveSurface_ThePolyhedronOfHInter::HasVMaxSingularity()",
            "IntCurveSurface_ThePolyhedronOfHInter::HasVMinSingularity()",
            "IntCurveSurface_ThePolyhedronOfHInter::HasUMaxSingularity()",
            "IntCurveSurface_ThePolyhedronOfHInter::HasUMinSingularity()",
            "IntCurveSurface_ThePolyhedronOfHInter::VMaxSingularity(Standard_Boolean)",
            "IntCurveSurface_ThePolyhedronOfHInter::VMinSingularity(Standard_Boolean)",
            "IntCurveSurface_ThePolyhedronOfHInter::UMaxSingularity(Standard_Boolean)",
            "IntCurveSurface_ThePolyhedronOfHInter::UMinSingularity(Standard_Boolean)",
            "IntImpParGen_ImpTool::FindParameter(gp_Pnt2d)",
            "IntImpParGen_ImpTool::GradDistance(gp_Pnt2d)",
            "IntImpParGen_ImpTool::Distance(gp_Pnt2d)",
            "IntImpParGen_ImpTool::D2(Standard_Real,gp_Pnt2d,gp_Vec2d,gp_Vec2d)",
            "IntImpParGen_ImpTool::D1(Standard_Real,gp_Pnt2d,gp_Vec2d)",
            "IntImpParGen_ImpTool::Value(Standard_Real)",
            "IntPatch_RLine::SetParamOnS2(Standard_Real,Standard_Real)",
            "IntPatch_RLine::SetParamOnS1(Standard_Real,Standard_Real)",
            "IntPatch_Polyhedron::HasVMaxSingularity()",
            "IntPatch_Polyhedron::HasVMinSingularity()",
            "IntPatch_Polyhedron::HasUMaxSingularity()",
            "IntPatch_Polyhedron::HasUMinSingularity()",
            "IntPatch_Polyhedron::VMaxSingularity(Standard_Boolean)",
            "IntPatch_Polyhedron::VMinSingularity(Standard_Boolean)",
            "IntPatch_Polyhedron::UMaxSingularity(Standard_Boolean)",
            "IntPatch_Polyhedron::UMinSingularity(Standard_Boolean)",
            "IntPatch_Polyhedron::Perform(Adaptor3d_HSurface,Standard_Integer,Standard_Integer)",
            "IntPolyh_Triangle::GetNextChainTriangle(IntPolyh_StartPoint,Standard_Integer,IntPolyh_Array<IntPolyh_Couple>,IntPolyh_Array<IntPolyh_Triangle>,IntPolyh_Array<IntPolyh_Triangle>,Standard_Integer,Standard_Integer)", //
            "IntPolyh_MaillageAffinage::GetFinTT(Standard_Integer)",
            "IntPolyh_MaillageAffinage::GetFinTE(Standard_Integer)",
            "Law_Interpolate::ClearTangents()",
            "BOPAlgo_PaveFiller::Iterator()",
            "BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox::Error()",
            "BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox::Error()",
            "BRepApprox_Approx::Perform()",
            "BRepExtrema_OverlapTool::BRepExtrema_OverlapTool()",
            "BRepExtrema_OverlapTool::BRepExtrema_OverlapTool(BRepExtrema_TriangleSet,BRepExtrema_TriangleSet)",
            "BRepExtrema_OverlapTool::Perform(Standard_Real)",
            "BRepExtrema_OverlapTool::LoadTriangleSets(BRepExtrema_TriangleSet,BRepExtrema_TriangleSet)",
            "BRepExtrema_TriangleSet::Box(Standard_Integer)",
            "BRepExtrema_TriangleSet::Center(Standard_Integer,Standard_Integer)",
            "BRepExtrema_TriangleSet::Size()",
            "BRepExtrema_TriangleSet::Swap(Standard_Integer,Standard_Integer)",
            "BRepExtrema_SelfIntersection::PreCheckElements(Standard_Integer,Standard_Integer)",
            "BRepExtrema_ElementFilter::PreCheckElements(Standard_Integer,Standard_Integer)",
            "BRepGProp_VinertGK::GetAbsolutError()",
            "BRepLib_CheckCurveOnSurface::ErrorStatus()",
            "MAT2d_SketchExplorer::Value()",
            "MAT2d_SketchExplorer::Next()",
            "MAT2d_SketchExplorer::More()",
            "MAT2d_SketchExplorer::Init(Standard_Integer)",
            "MAT2d_SketchExplorer::NumberOfContours()",
            "MAT2d_CutCurve::PerformInf(Geom2d_Curve)",
            "MAT2d_CutCurve::Perform(Geom2d_Curve,MAT_Side)",
            "IntTools_PntOnFace::IsValid()",
            "BRepAlgo_DSAccess::IsDeleted(TopoDS_Shape)",
            "BRepFeat_MakeLinearForm::TransformShapeFU(Standard_Integer)",
            "BRepFeat::IsInOut(BRepTopAdaptor_FClass2d,Geom2dAdaptor_Curve)",
            "LocOpe_RevolutionForm::LocOpe_RevolutionForm(TopoDS_Shape,gp_Ax1,Standard_Real)",
            "LocOpe_Revol::LocOpe_Revol(TopoDS_Shape,gp_Ax1,Standard_Real)",
            "LocOpe_Revol::LocOpe_Revol(TopoDS_Shape,gp_Ax1,Standard_Real,Standard_Real)",
            "TopOpeBRep_GeomTool::MakePrivateCurves(Standard_Real,Standard_Real,TopOpeBRep_LineInter,TopoDS_Shape,TopoDS_Shape,Geom_Curve,Geom2d_Curve,Geom2d_Curve,Standard_Boolean,Standard_Real,Standard_Real)",
            "TopOpeBRep_FacesFiller::EqualpP(TopOpeBRep_LineInter,Standard_Integer,Standard_Integer)",
            "TopOpeBRep_EdgesIntersector::Tolerance2()",
            "TopOpeBRepBuild_Builder1::GFillSplitsPVS(TopoDS_Shape,TopOpeBRepBuild_GTopo,TopOpeBRepBuild_PaveSet)",
            "TopOpeBRepDS_HDataStructure::RemoveShape(Standard_Integer)",
            "TopOpeBRepDS_HDataStructure::Complete()",
            "TopOpeBRepTool_mkTondgE::Ei(Standard_Integer,TopoDS_Edge)",
            "TopOpeBRepTool_mkTondgE::Par(Standard_Integer,Standard_Real)",
            "ShapeFix_WireSegment::ShapeFix_WireSegment(TopoDS_Wire,TopAbs_Orientation)",
            "ShapeAnalysis_BoxBndTreeSelector::Reject(Bnd_Box)",
            "ShapeAnalysis_BoxBndTreeSelector::Accept(Standard_Integer)",
            "BlendFunc::Mults(BlendFunc_SectionShape,TColStd_Array1OfInteger)",
            "BlendFunc::Knots(BlendFunc_SectionShape,TColStd_Array1OfReal)",
            "BRepOffset_MakeOffset::GetAnalyse()",
            "BRepOffsetAPI_FindContigousEdges::NbEdges()",
            "AIS_LocalContext::Reactivate()",
            "AIS_ColorScale::Compute(PrsMgr_PresentationManager3d,Prs3d_Presentation,Standard_Integer)",
            "DsgPrs_RadiusPresentation::Add(Prs3d_Presentation,Prs3d_Drawer,TCollection_ExtendedString,gp_Pnt,gp_Circ,Standard_Real,Standard_Real,DsgPrs_ArrowSide,Standard_Boolean,Standard_Boolean)",
            "Select3D_SensitiveBox::Box()",
            "Select3D_BVHPrimitiveContent::Select3D_BVHPrimitiveContent(Select3D_SensitiveSet)",
            "Select3D_SensitiveTriangulation::overlapsElement(SelectBasics_SelectingVolumeManager,Standard_Integer,Standard_Real)",
            "Select3D_SensitiveTriangulation::elementIsInside(SelectBasics_SelectingVolumeManager,Standard_Integer)",
            "Select3D_SensitiveTriangulation::distanceToCOG(SelectBasics_SelectingVolumeManager)",
            "Select3D_SensitiveGroup::overlapsElement(SelectBasics_SelectingVolumeManager,Standard_Integer,Standard_Real)",
            "Select3D_SensitiveGroup::elementIsInside(SelectBasics_SelectingVolumeManager,Standard_Integer)",
            "Select3D_SensitiveGroup::distanceToCOG(SelectBasics_SelectingVolumeManager)",
            "SelectMgr_ToleranceMap::SelectMgr_ToleranceMap()",
            "StdSelect_Shape::Shape(TopoDS_Shape)",
            "StdSelect_Shape::Shape()",
            "StdSelect_BRepOwner::Set(TopoDS_Shape,Standard_Boolean)",
            "FilletPoint::remove(Standard_Integer)",
            "FilletPoint::hasSolution(Standard_Real)",
            "FilletPoint::Copy()",
            "FilletPoint::FilterPoints(FilletPoint)",
            "FilletPoint::calculateDiff(FilletPoint)",
            "FilletPoint::appendValue(Standard_Real,Standard_Boolean)",
            "FilletPoint::FilletPoint(Standard_Real)",
            "MyDirectPolynomialRoots::MyDirectPolynomialRoots(Standard_Real,Standard_Real,Standard_Real)",
            "MyDirectPolynomialRoots::MyDirectPolynomialRoots(Standard_Real,Standard_Real,Standard_Real,Standard_Real,Standard_Real)",
            "PeriodicInterval::SecondIntersection(PeriodicInterval)",
            "PeriodicInterval::FirstIntersection(PeriodicInterval)",
            "Interval::IntersectionWithBounded(Interval)",
            "Interval::Length()",
            "Interval::Interval(Standard_Real,Standard_Boolean,Standard_Real,Standard_Boolean)",
            "Interval::Interval(IntRes2d_Domain)",
            "Interval::Interval(Standard_Real,Standard_Real)",
            "Interval::Interval()",
            "IntPolyh_Triangle::GetNextChainTriangle(IntPolyh_StartPoint,Standard_Integer,IntPolyh_ArrayOfCouples,IntPolyh_ArrayOfTriangles,IntPolyh_ArrayOfTriangles,Standard_Integer,Standard_Integer)",
        };

        #endregion

        #region Unseal

        public static List<string> Unseal = new()
        {
            "AIS_ViewCube",
            "AIS_Point"
        };

        #endregion

        #region Name Replacements

        public static Dictionary<string, string> NameReplacements = new()
        {
            {"GetType", "GetGeomType"},
            {"IN", "_IN"},

            // Replace collection names with template types as template parameter, which are already resolved by Clang
            {"NCollection_DataMap<TopoDS_Shape, NCollection_List<Standard_Integer>, TopTools_ShapeMapHasher>", "NCollection_DataMap<TopoDS_Shape, TColStd_ListOfInteger, TopTools_ShapeMapHasher>"},
            {"NCollection_DataMap<Standard_Integer, NCollection_List<TopoDS_Shape>, TopTools_ShapeMapHasher>", "NCollection_DataMap<Standard_Integer, TopTools_ListOfShape, TopTools_ShapeMapHasher>"},
            {"NCollection_IndexedDataMap<TopoDS_Shape, NCollection_List<TopoDS_Shape>, TopTools_ShapeMapHasher>", "NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher>"},
        };

        #endregion

        #region Source file header

        // We need to define an in
        public static string SourceFileHeader = @"
            // clang does not define the __MACHINEARM in its intrinsic.h
            #undef __clang__
                #include <intrin0.h> 
            #define __clang__

            // The following header file can not be compiled, it seems to be obsolete
            #define AIS_DataMapOfSelStat_HeaderFile

            struct TI_0 {};
            struct TI_1 {};
            struct TI_2 {};
            struct TI_3 {};
            struct TI_4 {};

            #include ""NCollection_Array1.hxx""
            #include ""NCollection_Array2.hxx""
            #include ""NCollection_List.hxx""
            #include ""NCollection_Map.hxx""
            #include ""NCollection_IndexedMap.hxx""
            #include ""NCollection_DataMap.hxx""
            #include ""NCollection_IndexedDataMap.hxx""
            #include ""NCollection_Sequence.hxx""
            #include ""NCollection_Vec2.hxx""

            #include ""gp_XY.hxx""
            #include ""gp_XYZ.hxx""

            class TI_NCollection_Array1 : public NCollection_Array1<TI_0> {};
            class TI_NCollection_Array2 : public NCollection_Array2<TI_0> {};
            class TI_NCollection_List : public NCollection_List<TI_0> {};
            class TI_NCollection_Map : public NCollection_Map<TI_0,TI_1> {};
            class TI_NCollection_IndexedMap : public NCollection_IndexedMap<TI_0,TI_1> {};
            class TI_NCollection_DataMap : public NCollection_DataMap<TI_0,TI_1,TI_2> {};
            class TI_NCollection_IndexedDataMap : public NCollection_IndexedDataMap<TI_0,TI_1,TI_2> {};
            class TI_NCollection_Sequence : public NCollection_Sequence<TI_0> {};
            class TI_NCollection_Vec2 : public NCollection_Vec2<TI_0> {};
            class TI_NCollection_DefaultHasher : public NCollection_DefaultHasher<TI_0> {};
           ";

        #endregion

    }

}

