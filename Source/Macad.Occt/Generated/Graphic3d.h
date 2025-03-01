// Generated wrapper code for package Graphic3d

#pragma once

#include "NCollection.h"
#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  Graphic3d_AlphaMode
//---------------------------------------------------------------------
/// <summary>
/// Defines how alpha value of base color / texture should be treated.
/// </summary>
public enum class Graphic3d_AlphaMode
{
    Opaque = 0,
    Mask = 1,
    Blend = 2,
    MaskBlend = 3,
    BlendAuto = -1
}; // enum  class Graphic3d_AlphaMode

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfAttribute
//---------------------------------------------------------------------
/// <summary>
/// Type of attribute in Vertex Buffer
/// </summary>
public enum class Graphic3d_TypeOfAttribute
{
    POS = 0,
    NORM = 1,
    UV = 2,
    COLOR = 3,
    CUSTOM = 4
}; // enum  class Graphic3d_TypeOfAttribute

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfData
//---------------------------------------------------------------------
/// <summary>
/// Type of the element in Vertex or Index Buffer
/// </summary>
public enum class Graphic3d_TypeOfData
{
    USHORT = 0,
    UINT = 1,
    VEC2 = 2,
    VEC3 = 3,
    VEC4 = 4,
    VEC4UB = 5,
    FLOAT = 6
}; // enum  class Graphic3d_TypeOfData

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfPrimitiveArray
//---------------------------------------------------------------------
/// <summary>
/// The type of primitive array in a group in a structure.
/// </summary>
public enum class Graphic3d_TypeOfPrimitiveArray
{
    UNDEFINED = 0,
    POINTS = 1,
    SEGMENTS = 2,
    POLYLINES = 3,
    TRIANGLES = 4,
    TRIANGLESTRIPS = 5,
    TRIANGLEFANS = 6,
    LINES_ADJACENCY = 7,
    LINE_STRIP_ADJACENCY = 8,
    TRIANGLES_ADJACENCY = 9,
    TRIANGLE_STRIP_ADJACENCY = 10,
    QUADRANGLES = 11,
    QUADRANGLESTRIPS = 12,
    POLYGONS = 13
}; // enum  class Graphic3d_TypeOfPrimitiveArray

//---------------------------------------------------------------------
//  Enum  Graphic3d_FresnelModel
//---------------------------------------------------------------------
/// <summary>
/// Type of the Fresnel model.
/// </summary>
public enum class Graphic3d_FresnelModel
{
    SCHLICK = 0,
    CONSTANT = 1,
    CONDUCTOR = 2,
    DIELECTRIC = 3
}; // enum  class Graphic3d_FresnelModel

//---------------------------------------------------------------------
//  Enum  Graphic3d_NameOfMaterial
//---------------------------------------------------------------------
/// <summary>
/// List of named materials (predefined presets).
/// Each preset defines either physical (having natural color) or generic (mutable color) material
/// (@sa Graphic3d_TypeOfMaterial).
/// </summary>
public enum class Graphic3d_NameOfMaterial
{
    Brass = 0,
    Bronze = 1,
    Copper = 2,
    Gold = 3,
    Pewter = 4,
    Plastered = 5,
    Plastified = 6,
    Silver = 7,
    Steel = 8,
    Stone = 9,
    ShinyPlastified = 10,
    Satin = 11,
    Metalized = 12,
    Ionized = 13,
    Chrome = 14,
    Aluminum = 15,
    Obsidian = 16,
    Neon = 17,
    Jade = 18,
    Charcoal = 19,
    Water = 20,
    Glass = 21,
    Diamond = 22,
    Transparent = 23,
    DEFAULT = 24,
    UserDefined = 25,
    BRASS = 0,
    BRONZE = 1,
    COPPER = 2,
    GOLD = 3,
    PEWTER = 4,
    PLASTER = 5,
    PLASTIC = 6,
    SILVER = 7,
    STEEL = 8,
    STONE = 9,
    SHINY_PLASTIC = 10,
    SATIN = 11,
    METALIZED = 12,
    NEON_GNC = 13,
    CHROME = 14,
    ALUMINIUM = 15,
    OBSIDIAN = 16,
    NEON_PHC = 17,
    JADE = 18,
    CHARCOAL = 19,
    WATER = 20,
    GLASS = 21,
    DIAMOND = 22,
    TRANSPARENT = 23
}; // enum  class Graphic3d_NameOfMaterial

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfMaterial
//---------------------------------------------------------------------
/// <summary>
/// Types of materials specifies if a material can change color.
/// </summary>
public enum class Graphic3d_TypeOfMaterial
{
    MATERIAL_ASPECT = 0,
    MATERIAL_PHYSIC = 1
}; // enum  class Graphic3d_TypeOfMaterial

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfReflection
//---------------------------------------------------------------------
/// <summary>
/// Nature of the reflection of a material.
/// </summary>
public enum class Graphic3d_TypeOfReflection
{
    AMBIENT = 0,
    DIFFUSE = 1,
    SPECULAR = 2,
    EMISSION = 3
}; // enum  class Graphic3d_TypeOfReflection

//---------------------------------------------------------------------
//  Enum  Graphic3d_RenderTransparentMethod
//---------------------------------------------------------------------
/// <summary>
/// Enumerates transparency rendering methods supported by rasterization mode.
/// </summary>
public enum class Graphic3d_RenderTransparentMethod
{
    BLEND_UNORDERED = 0,
    BLEND_OIT = 1,
    DEPTH_PEELING_OIT = 2
}; // enum  class Graphic3d_RenderTransparentMethod

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfShaderObject
//---------------------------------------------------------------------
/// <summary>
/// Type of the shader object.
/// </summary>
public enum class Graphic3d_TypeOfShaderObject
{
    TOS_VERTEX = 1,
    TOS_TESS_CONTROL = 2,
    TOS_TESS_EVALUATION = 4,
    TOS_GEOMETRY = 8,
    TOS_FRAGMENT = 16,
    TOS_COMPUTE = 32
}; // enum  class Graphic3d_TypeOfShaderObject

//---------------------------------------------------------------------
//  Enum  Graphic3d_LevelOfTextureAnisotropy
//---------------------------------------------------------------------
/// <summary>
/// Level of anisotropy filter.
/// Notice that actual quality depends on hardware capabilities!
/// </summary>
public enum class Graphic3d_LevelOfTextureAnisotropy
{
    OFF = 0,
    FAST = 1,
    MIDDLE = 2,
    QUALITY = 3
}; // enum  class Graphic3d_LevelOfTextureAnisotropy

//---------------------------------------------------------------------
//  Enum  Graphic3d_TextureUnit
//---------------------------------------------------------------------
/// <summary>
/// Texture unit.
/// </summary>
public enum class Graphic3d_TextureUnit
{
    TextureUnit_0 = 0,
    TextureUnit_1 = 1,
    TextureUnit_2 = 2,
    TextureUnit_3 = 3,
    TextureUnit_4 = 4,
    TextureUnit_5 = 5,
    TextureUnit_6 = 6,
    TextureUnit_7 = 7,
    TextureUnit_8 = 8,
    TextureUnit_9 = 9,
    TextureUnit_10 = 10,
    TextureUnit_11 = 11,
    TextureUnit_12 = 12,
    TextureUnit_13 = 13,
    TextureUnit_14 = 14,
    TextureUnit_15 = 15,
    BaseColor = 0,
    Emissive = 1,
    Occlusion = 2,
    Normal = 3,
    MetallicRoughness = 4,
    EnvMap = 0,
    PointSprite = 1,
    DepthPeelingDepth = -6,
    DepthPeelingFrontColor = -5,
    ShadowMap = -4,
    PbrEnvironmentLUT = -3,
    PbrIblDiffuseSH = -2,
    PbrIblSpecular = -1
}; // enum  class Graphic3d_TextureUnit

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfTextureFilter
//---------------------------------------------------------------------
/// <summary>
/// Type of the texture filter.
/// Notice that for textures without mipmaps linear interpolation will be used instead of
/// TOTF_BILINEAR and TOTF_TRILINEAR.
/// </summary>
public enum class Graphic3d_TypeOfTextureFilter
{
    NEAREST = 0,
    BILINEAR = 1,
    TRILINEAR = 2
}; // enum  class Graphic3d_TypeOfTextureFilter

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfTextureMode
//---------------------------------------------------------------------
/// <summary>
/// Type of the texture projection.
/// </summary>
public enum class Graphic3d_TypeOfTextureMode
{
    OBJECT = 0,
    SPHERE = 1,
    EYE = 2,
    MANUAL = 3,
    SPRITE = 4
}; // enum  class Graphic3d_TypeOfTextureMode

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfTexture
//---------------------------------------------------------------------
/// <summary>
/// Type of the texture file format.
/// </summary>
public enum class Graphic3d_TypeOfTexture
{
    TypeOfTexture_1D = 0,
    TypeOfTexture_2D = 1,
    TypeOfTexture_3D = 2,
    CUBEMAP = 3,
    TOT_2D_MIPMAP = 4,
    TOT_1D = 0,
    TOT_2D = 1
}; // enum  class Graphic3d_TypeOfTexture

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfBackfacingModel
//---------------------------------------------------------------------
/// <summary>
/// Modes of display of back faces in the view.
/// </summary>
public enum class Graphic3d_TypeOfBackfacingModel
{
    Auto = 0,
    DoubleSided = 1,
    BackCulled = 2,
    FrontCulled = 3,
    AUTOMATIC = 0,
    FORCE = 1,
    DISABLE = 2,
    V3d_TOBM_AUTOMATIC = 0,
    V3d_TOBM_ALWAYS_DISPLAYED = 1,
    V3d_TOBM_NEVER_DISPLAYED = 2
}; // enum  class Graphic3d_TypeOfBackfacingModel

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfShadingModel
//---------------------------------------------------------------------
/// <summary>
/// Definition of the color shading model.
/// </summary>
public enum class Graphic3d_TypeOfShadingModel
{
    DEFAULT = -1,
    Unlit = 0,
    PhongFacet = 1,
    Gouraud = 2,
    Phong = 3,
    Pbr = 4,
    PbrFacet = 5,
    UNLIT = 0,
    FACET = 1,
    VERTEX = 2,
    FRAGMENT = 3,
    PBR = 4,
    PBR_FACET = 5,
    NONE = 0,
    V3d_COLOR = 0,
    V3d_FLAT = 1,
    V3d_GOURAUD = 2,
    V3d_PHONG = 3
}; // enum  class Graphic3d_TypeOfShadingModel

//---------------------------------------------------------------------
//  Enum  Graphic3d_BufferType
//---------------------------------------------------------------------
/// <summary>
/// Define buffers available for dump
/// </summary>
public enum class Graphic3d_BufferType
{
    RGB = 0,
    RGBA = 1,
    Depth = 2,
    RGB_RayTraceHdrLeft = 3,
    Red = 4,
    ShadowMap = 5
}; // enum  class Graphic3d_BufferType

//---------------------------------------------------------------------
//  Enum  Graphic3d_CappingFlags
//---------------------------------------------------------------------
/// <summary>
/// Enumeration of capping flags.
/// </summary>
public enum class Graphic3d_CappingFlags
{
    None = 0,
    ObjectMaterial = 1,
    ObjectTexture = 2,
    ObjectShader = 8,
    ObjectAspect = 11
}; // enum  class Graphic3d_CappingFlags

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfLightSource
//---------------------------------------------------------------------
/// <summary>
/// Definition of all the type of light source.
/// </summary>
public enum class Graphic3d_TypeOfLightSource
{
    Ambient = 0,
    Directional = 1,
    Positional = 2,
    Spot = 3,
    AMBIENT = 0,
    DIRECTIONAL = 1,
    POSITIONAL = 2,
    SPOT = 3,
    V3d_AMBIENT = 0,
    V3d_DIRECTIONAL = 1,
    V3d_POSITIONAL = 2,
    V3d_SPOT = 3
}; // enum  class Graphic3d_TypeOfLightSource

//---------------------------------------------------------------------
//  Enum  Graphic3d_ClipState
//---------------------------------------------------------------------
/// <summary>
/// Clipping state.
/// </summary>
public enum class Graphic3d_ClipState
{
    Out = 0,
    In = 1,
    On = 2
}; // enum  class Graphic3d_ClipState

//---------------------------------------------------------------------
//  Enum  Graphic3d_DisplayPriority
//---------------------------------------------------------------------
/// <summary>
/// Structure priority - range (do not change this range!).
/// Values are between 0 and 10, with 5 used by default.
/// A structure of priority 10 is displayed the last and appears over the others (considering depth
/// test).
/// </summary>
public enum class Graphic3d_DisplayPriority
{
    INVALID = -1,
    Bottom = 0,
    AlmostBottom = 1,
    Below2 = 2,
    Below1 = 3,
    Below = 4,
    Normal = 5,
    Above = 6,
    Above1 = 7,
    Above2 = 8,
    Highlight = 9,
    Topmost = 10
}; // enum  class Graphic3d_DisplayPriority

//---------------------------------------------------------------------
//  Enum  Graphic3d_TextPath
//---------------------------------------------------------------------
/// <summary>
/// Direction in which text is displayed.
/// </summary>
public enum class Graphic3d_TextPath
{
    UP = 0,
    DOWN = 1,
    LEFT = 2,
    RIGHT = 3
}; // enum  class Graphic3d_TextPath

//---------------------------------------------------------------------
//  Enum  Graphic3d_HorizontalTextAlignment
//---------------------------------------------------------------------
/// <summary>
/// Defines the horizontal position of the text
/// relative to its anchor.
/// </summary>
public enum class Graphic3d_HorizontalTextAlignment
{
    LEFT = 0,
    CENTER = 1,
    RIGHT = 2
}; // enum  class Graphic3d_HorizontalTextAlignment

//---------------------------------------------------------------------
//  Enum  Graphic3d_VerticalTextAlignment
//---------------------------------------------------------------------
/// <summary>
/// Defines the vertical position of the text
/// relative to its anchor.
/// </summary>
public enum class Graphic3d_VerticalTextAlignment
{
    BOTTOM = 0,
    CENTER = 1,
    TOP = 2,
    TOPFIRSTLINE = 3
}; // enum  class Graphic3d_VerticalTextAlignment

//---------------------------------------------------------------------
//  Enum  Graphic3d_TransModeFlags
//---------------------------------------------------------------------
/// <summary>
/// Transform Persistence Mode defining whether to lock in object position, rotation and / or
/// zooming relative to camera position.
/// </summary>
public enum class Graphic3d_TransModeFlags
{
    None = 0,
    ZoomPers = 2,
    RotatePers = 8,
    TriedronPers = 32,
    TMF_2d = 64,
    CameraPers = 128,
    OrthoPers = 256,
    AxialScalePers = 512,
    ZoomRotatePers = 10,
    AxialZoomPers = 514
}; // enum  class Graphic3d_TransModeFlags

//---------------------------------------------------------------------
//  Enum  Graphic3d_CubeMapSide
//---------------------------------------------------------------------
/// <summary>
/// Sides of cubemap in order of OpenGL rules
/// </summary>
public enum class Graphic3d_CubeMapSide
{
    POS_X = 0,
    NEG_X = 1,
    POS_Y = 2,
    NEG_Y = 3,
    POS_Z = 4,
    NEG_Z = 5
}; // enum  class Graphic3d_CubeMapSide

//---------------------------------------------------------------------
//  Enum  Graphic3d_DiagnosticInfo
//---------------------------------------------------------------------
/// <summary>
/// Diagnostic info categories bit flags.
/// </summary>
public enum class Graphic3d_DiagnosticInfo
{
    Device = 1,
    FrameBuffer = 2,
    Limits = 4,
    Memory = 8,
    NativePlatform = 16,
    Extensions = 32,
    Short = 7,
    Basic = 31,
    Complete = 63
}; // enum  class Graphic3d_DiagnosticInfo

//---------------------------------------------------------------------
//  Enum  Graphic3d_RenderingMode
//---------------------------------------------------------------------
/// <summary>
/// Describes rendering modes.
/// - RM_RASTERIZATION: enables OpenGL rasterization mode;
/// - RM_RAYTRACING: enables GPU ray-tracing mode.
/// </summary>
public enum class Graphic3d_RenderingMode
{
    RASTERIZATION = 0,
    RAYTRACING = 1
}; // enum  class Graphic3d_RenderingMode

//---------------------------------------------------------------------
//  Enum  Graphic3d_StereoMode
//---------------------------------------------------------------------
/// <summary>
/// This enumeration defines the list of stereoscopic output modes.
/// </summary>
public enum class Graphic3d_StereoMode
{
    QuadBuffer = 0,
    Anaglyph = 1,
    RowInterlaced = 2,
    ColumnInterlaced = 3,
    ChessBoard = 4,
    SideBySide = 5,
    OverUnder = 6,
    SoftPageFlip = 7,
    OpenVR = 8
}; // enum  class Graphic3d_StereoMode

//---------------------------------------------------------------------
//  Enum  Graphic3d_ToneMappingMethod
//---------------------------------------------------------------------
/// <summary>
/// Enumerates tone mapping methods.
/// </summary>
public enum class Graphic3d_ToneMappingMethod
{
    Disabled = 0,
    Filmic = 1
}; // enum  class Graphic3d_ToneMappingMethod

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfConnection
//---------------------------------------------------------------------
/// <summary>
/// To manage the connections between the structures.
/// </summary>
public enum class Graphic3d_TypeOfConnection
{
    ANCESTOR = 0,
    DESCENDANT = 1
}; // enum  class Graphic3d_TypeOfConnection

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfStructure
//---------------------------------------------------------------------
/// <summary>
/// Structural attribute indicating if it can be displayed
/// in wireframe, shadow mode, or both.
/// </summary>
public enum class Graphic3d_TypeOfStructure
{
    WIREFRAME = 0,
    SHADING = 1,
    COMPUTED = 2,
    ALL = 3
}; // enum  class Graphic3d_TypeOfStructure

//---------------------------------------------------------------------
//  Enum  Graphic3d_NameOfTextureEnv
//---------------------------------------------------------------------
/// <summary>
/// Types of standard textures.
/// </summary>
public enum class Graphic3d_NameOfTextureEnv
{
    NOT_ENV_CLOUDS = 0,
    NOT_ENV_CV = 1,
    NOT_ENV_MEDIT = 2,
    NOT_ENV_PEARL = 3,
    NOT_ENV_SKY1 = 4,
    NOT_ENV_SKY2 = 5,
    NOT_ENV_LINES = 6,
    NOT_ENV_ROAD = 7,
    NOT_ENV_UNKNOWN = 8
}; // enum  class Graphic3d_NameOfTextureEnv

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfAnswer
//---------------------------------------------------------------------
/// <summary>
/// The answer of the method AcceptDisplay
/// AcceptDisplay  means is it possible to display the
/// specified structure in the specified view ?
/// TOA_YES yes
/// TOA_NO  no
/// TOA_COMPUTE yes but we have to compute the representation
/// </summary>
public enum class Graphic3d_TypeOfAnswer
{
    YES = 0,
    NO = 1,
    COMPUTE = 2
}; // enum  class Graphic3d_TypeOfAnswer

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfBackground
//---------------------------------------------------------------------
/// <summary>
/// Describes type of view background.
/// </summary>
public enum class Graphic3d_TypeOfBackground
{
    NONE = -1,
    GRADIENT = 0,
    TEXTURE = 1,
    CUBEMAP = 2
}; // enum  class Graphic3d_TypeOfBackground

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfVisualization
//---------------------------------------------------------------------
/// <summary>
/// Modes of visualisation of objects in a view
/// 
/// TOV_WIREFRAME   wireframe visualisation
/// TOV_SHADING     shaded visualisation
/// </summary>
public enum class Graphic3d_TypeOfVisualization
{
    WIREFRAME = 0,
    SHADING = 1
}; // enum  class Graphic3d_TypeOfVisualization

//---------------------------------------------------------------------
//  Enum  Graphic3d_FrameStatsCounter
//---------------------------------------------------------------------
/// <summary>
/// Stats counter.
/// </summary>
public enum class Graphic3d_FrameStatsCounter
{
    NbLayers = 0,
    NbStructs = 1,
    EstimatedBytesGeom = 2,
    EstimatedBytesFbos = 3,
    EstimatedBytesTextures = 4,
    NbLayersNotCulled = 5,
    NbStructsNotCulled = 6,
    NbGroupsNotCulled = 7,
    NbElemsNotCulled = 8,
    NbElemsFillNotCulled = 9,
    NbElemsLineNotCulled = 10,
    NbElemsPointNotCulled = 11,
    NbElemsTextNotCulled = 12,
    NbTrianglesNotCulled = 13,
    NbLinesNotCulled = 14,
    NbPointsNotCulled = 15,
    NbLayersImmediate = 16,
    NbStructsImmediate = 17,
    NbGroupsImmediate = 18,
    NbElemsImmediate = 19,
    NbElemsFillImmediate = 20,
    NbElemsLineImmediate = 21,
    NbElemsPointImmediate = 22,
    NbElemsTextImmediate = 23,
    NbTrianglesImmediate = 24,
    NbLinesImmediate = 25,
    NbPointsImmediate = 26
}; // enum  class Graphic3d_FrameStatsCounter

//---------------------------------------------------------------------
//  Enum  Graphic3d_FrameStatsTimer
//---------------------------------------------------------------------
/// <summary>
/// Timers for collecting frame performance statistics.
/// </summary>
public enum class Graphic3d_FrameStatsTimer
{
    ElapsedFrame = 0,
    CpuFrame = 1,
    CpuCulling = 2,
    CpuPicking = 3,
    CpuDynamics = 4
}; // enum  class Graphic3d_FrameStatsTimer

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfLimit
//---------------------------------------------------------------------
/// <summary>
/// Type of graphic resource limit.
/// </summary>
public enum class Graphic3d_TypeOfLimit
{
    MaxNbLights = 0,
    MaxNbClipPlanes = 1,
    MaxNbViews = 2,
    MaxTextureSize = 3,
    MaxViewDumpSizeX = 4,
    MaxViewDumpSizeY = 5,
    MaxCombinedTextureUnits = 6,
    MaxMsaa = 7,
    HasPBR = 8,
    HasRayTracing = 9,
    HasRayTracingTextures = 10,
    HasRayTracingAdaptiveSampling = 11,
    HasRayTracingAdaptiveSamplingAtomic = 12,
    HasSRGB = 13,
    HasBlendedOit = 14,
    HasBlendedOitMsaa = 15,
    HasFlatShading = 16,
    HasMeshEdges = 17,
    IsWorkaroundFBO = 18,
    NB = 19
}; // enum  class Graphic3d_TypeOfLimit

//---------------------------------------------------------------------
//  Enum  Graphic3d_GroupAspect
//---------------------------------------------------------------------
/// <summary>
/// Identifies primitives aspects defined per group.
/// - ASPECT_LINE: aspect for line primitives;
/// - ASPECT_TEXT: aspect for text primitives;
/// - ASPECT_MARKER: aspect for marker primitives;
/// - ASPECT_FILL_AREA: aspect for face primitives.
/// </summary>
public enum class Graphic3d_GroupAspect
{
    ASPECT_LINE = 0,
    ASPECT_TEXT = 1,
    ASPECT_MARKER = 2,
    ASPECT_FILL_AREA = 3
}; // enum  class Graphic3d_GroupAspect

//---------------------------------------------------------------------
//  Enum  Graphic3d_NameOfTexture2D
//---------------------------------------------------------------------
/// <summary>
/// Types of standard textures.
/// </summary>
public enum class Graphic3d_NameOfTexture2D
{
    NOT_2D_MATRA = 0,
    NOT_2D_ALIENSKIN = 1,
    NOT_2D_BLUE_ROCK = 2,
    NOT_2D_BLUEWHITE_PAPER = 3,
    NOT_2D_BRUSHED = 4,
    NOT_2D_BUBBLES = 5,
    NOT_2D_BUMP = 6,
    NOT_2D_CAST = 7,
    NOT_2D_CHIPBD = 8,
    NOT_2D_CLOUDS = 9,
    NOT_2D_FLESH = 10,
    NOT_2D_FLOOR = 11,
    NOT_2D_GALVNISD = 12,
    NOT_2D_GRASS = 13,
    NOT_2D_ALUMINUM = 14,
    NOT_2D_ROCK = 15,
    NOT_2D_KNURL = 16,
    NOT_2D_MAPLE = 17,
    NOT_2D_MARBLE = 18,
    NOT_2D_MOTTLED = 19,
    NOT_2D_RAIN = 20,
    NOT_2D_CHESS = 21,
    NOT_2D_UNKNOWN = 22
}; // enum  class Graphic3d_NameOfTexture2D

//---------------------------------------------------------------------
//  Enum  Graphic3d_NameOfTexture1D
//---------------------------------------------------------------------
/// <summary>
/// Types of standard textures.
/// </summary>
public enum class Graphic3d_NameOfTexture1D
{
    NOT_1D_ELEVATION = 0,
    NOT_1D_UNKNOWN = 1
}; // enum  class Graphic3d_NameOfTexture1D

//---------------------------------------------------------------------
//  Enum  Graphic3d_NameOfTexturePlane
//---------------------------------------------------------------------
/// <summary>
/// Type of the texture projection plane for both S and T texture coordinate.
/// </summary>
public enum class Graphic3d_NameOfTexturePlane
{
    XY = 0,
    YZ = 1,
    ZX = 2,
    UNKNOWN = 3
}; // enum  class Graphic3d_NameOfTexturePlane

//---------------------------------------------------------------------
//  Enum  Graphic3d_ShaderFlags
//---------------------------------------------------------------------
/// <summary>
/// Standard GLSL program combination bits.
/// </summary>
public enum class Graphic3d_ShaderFlags
{
    VertColor = 1,
    TextureRGB = 2,
    TextureEnv = 4,
    TextureNormal = 6,
    PointSimple = 8,
    PointSprite = 16,
    PointSpriteA = 24,
    StippleLine = 32,
    ClipPlanes1 = 64,
    ClipPlanes2 = 128,
    ClipPlanesN = 192,
    ClipChains = 256,
    MeshEdges = 512,
    AlphaTest = 1024,
    WriteOit = 2048,
    OitDepthPeeling = 4096,
    NB = 8192,
    IsPoint = 24,
    HasTextures = 6,
    NeedsGeomShader = 512
}; // enum  class Graphic3d_ShaderFlags

//---------------------------------------------------------------------
//  Enum  Graphic3d_GlslExtension
//---------------------------------------------------------------------
/// <summary>
/// GLSL syntax extensions.
/// </summary>
public enum class Graphic3d_GlslExtension
{
    GL_OES_standard_derivatives = 0,
    GL_EXT_shader_texture_lod = 1,
    GL_EXT_frag_depth = 2,
    GL_EXT_gpu_shader4 = 3
}; // enum  class Graphic3d_GlslExtension

//---------------------------------------------------------------------
//  Enum  Graphic3d_TextureSetBits
//---------------------------------------------------------------------
/// <summary>
/// Standard texture units combination bits.
/// </summary>
public enum class Graphic3d_TextureSetBits
{
    NONE = 0,
    BaseColor = 1,
    Emissive = 2,
    Occlusion = 4,
    Normal = 8,
    MetallicRoughness = 16
}; // enum  class Graphic3d_TextureSetBits

//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2
//---------------------------------------------------------------------
public ref class Graphic3d_Vec2 sealed
    : public Macad::Occt::BaseClass<::Graphic3d_Vec2>
{

#ifdef Include_Graphic3d_Vec2_h
public:
    Include_Graphic3d_Vec2_h
#endif

public:
    Graphic3d_Vec2(::Graphic3d_Vec2* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec2>( nativeInstance, true )
    {}

    Graphic3d_Vec2(::Graphic3d_Vec2& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec2>( &nativeInstance, false )
    {}

    property ::Graphic3d_Vec2* NativeInstance
    {
        ::Graphic3d_Vec2* get()
        {
            return static_cast<::Graphic3d_Vec2*>(_NativeInstance);
        }
    }

public:
    Graphic3d_Vec2(float theXY);
    Graphic3d_Vec2(float theX, float theY);
    static int Length();
    void SetValues(float theX, float theY);
    float x();
    float y();
    Macad::Occt::Graphic3d_Vec2^ xy();
    Macad::Occt::Graphic3d_Vec2^ yx();
    bool IsEqual(Macad::Occt::Graphic3d_Vec2^ theOther);
    float GetData();
    float ChangeData();
    void Multiply(float theFactor);
    Macad::Occt::Graphic3d_Vec2^ Multiplied(float theFactor);
    Macad::Occt::Graphic3d_Vec2^ cwiseMin(Macad::Occt::Graphic3d_Vec2^ theVec);
    Macad::Occt::Graphic3d_Vec2^ cwiseMax(Macad::Occt::Graphic3d_Vec2^ theVec);
    Macad::Occt::Graphic3d_Vec2^ cwiseAbs();
    float maxComp();
    float minComp();
    float Dot(Macad::Occt::Graphic3d_Vec2^ theOther);
    float Modulus();
    float SquareModulus();
    static Macad::Occt::Graphic3d_Vec2^ DX();
    static Macad::Occt::Graphic3d_Vec2^ DY();
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    bool Equals(System::Object^ obj) override;
}; // class Graphic3d_Vec2

//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2d
//---------------------------------------------------------------------
public ref class Graphic3d_Vec2d sealed
    : public Macad::Occt::BaseClass<::Graphic3d_Vec2d>
{

#ifdef Include_Graphic3d_Vec2d_h
public:
    Include_Graphic3d_Vec2d_h
#endif

public:
    Graphic3d_Vec2d(::Graphic3d_Vec2d* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec2d>( nativeInstance, true )
    {}

    Graphic3d_Vec2d(::Graphic3d_Vec2d& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec2d>( &nativeInstance, false )
    {}

    property ::Graphic3d_Vec2d* NativeInstance
    {
        ::Graphic3d_Vec2d* get()
        {
            return static_cast<::Graphic3d_Vec2d*>(_NativeInstance);
        }
    }

public:
    Graphic3d_Vec2d();
    Graphic3d_Vec2d(double theXY);
    Graphic3d_Vec2d(double theX, double theY);
    static int Length();
    void SetValues(double theX, double theY);
    double x();
    double y();
    Macad::Occt::Graphic3d_Vec2d^ xy();
    Macad::Occt::Graphic3d_Vec2d^ yx();
    bool IsEqual(Macad::Occt::Graphic3d_Vec2d^ theOther);
    double GetData();
    double ChangeData();
    void Multiply(double theFactor);
    Macad::Occt::Graphic3d_Vec2d^ Multiplied(double theFactor);
    Macad::Occt::Graphic3d_Vec2d^ cwiseMin(Macad::Occt::Graphic3d_Vec2d^ theVec);
    Macad::Occt::Graphic3d_Vec2d^ cwiseMax(Macad::Occt::Graphic3d_Vec2d^ theVec);
    Macad::Occt::Graphic3d_Vec2d^ cwiseAbs();
    double maxComp();
    double minComp();
    double Dot(Macad::Occt::Graphic3d_Vec2d^ theOther);
    double Modulus();
    double SquareModulus();
    static Macad::Occt::Graphic3d_Vec2d^ DX();
    static Macad::Occt::Graphic3d_Vec2d^ DY();
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    bool Equals(System::Object^ obj) override;
}; // class Graphic3d_Vec2d

//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2i
//---------------------------------------------------------------------
public ref class Graphic3d_Vec2i sealed
    : public Macad::Occt::BaseClass<::Graphic3d_Vec2i>
{

#ifdef Include_Graphic3d_Vec2i_h
public:
    Include_Graphic3d_Vec2i_h
#endif

public:
    Graphic3d_Vec2i(::Graphic3d_Vec2i* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec2i>( nativeInstance, true )
    {}

    Graphic3d_Vec2i(::Graphic3d_Vec2i& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec2i>( &nativeInstance, false )
    {}

    property ::Graphic3d_Vec2i* NativeInstance
    {
        ::Graphic3d_Vec2i* get()
        {
            return static_cast<::Graphic3d_Vec2i*>(_NativeInstance);
        }
    }

public:
    Graphic3d_Vec2i();
    Graphic3d_Vec2i(int theXY);
    Graphic3d_Vec2i(int theX, int theY);
    static int Length();
    void SetValues(int theX, int theY);
    int x();
    int y();
    Macad::Occt::Graphic3d_Vec2i^ xy();
    Macad::Occt::Graphic3d_Vec2i^ yx();
    bool IsEqual(Macad::Occt::Graphic3d_Vec2i^ theOther);
    int GetData();
    int ChangeData();
    void Multiply(int theFactor);
    Macad::Occt::Graphic3d_Vec2i^ Multiplied(int theFactor);
    Macad::Occt::Graphic3d_Vec2i^ cwiseMin(Macad::Occt::Graphic3d_Vec2i^ theVec);
    Macad::Occt::Graphic3d_Vec2i^ cwiseMax(Macad::Occt::Graphic3d_Vec2i^ theVec);
    Macad::Occt::Graphic3d_Vec2i^ cwiseAbs();
    int maxComp();
    int minComp();
    int Dot(Macad::Occt::Graphic3d_Vec2i^ theOther);
    int Modulus();
    int SquareModulus();
    static Macad::Occt::Graphic3d_Vec2i^ DX();
    static Macad::Occt::Graphic3d_Vec2i^ DY();
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    bool Equals(System::Object^ obj) override;
}; // class Graphic3d_Vec2i

//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2u
//---------------------------------------------------------------------
public ref class Graphic3d_Vec2u sealed
    : public Macad::Occt::BaseClass<::Graphic3d_Vec2u>
{

#ifdef Include_Graphic3d_Vec2u_h
public:
    Include_Graphic3d_Vec2u_h
#endif

public:
    Graphic3d_Vec2u(::Graphic3d_Vec2u* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec2u>( nativeInstance, true )
    {}

    Graphic3d_Vec2u(::Graphic3d_Vec2u& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec2u>( &nativeInstance, false )
    {}

    property ::Graphic3d_Vec2u* NativeInstance
    {
        ::Graphic3d_Vec2u* get()
        {
            return static_cast<::Graphic3d_Vec2u*>(_NativeInstance);
        }
    }

public:
    Graphic3d_Vec2u(unsigned int theXY);
    Graphic3d_Vec2u(unsigned int theX, unsigned int theY);
    static int Length();
    void SetValues(unsigned int theX, unsigned int theY);
    unsigned int x();
    unsigned int y();
    Macad::Occt::Graphic3d_Vec2u^ xy();
    Macad::Occt::Graphic3d_Vec2u^ yx();
    bool IsEqual(Macad::Occt::Graphic3d_Vec2u^ theOther);
    unsigned int GetData();
    unsigned int ChangeData();
    void Multiply(unsigned int theFactor);
    Macad::Occt::Graphic3d_Vec2u^ Multiplied(unsigned int theFactor);
    Macad::Occt::Graphic3d_Vec2u^ cwiseMin(Macad::Occt::Graphic3d_Vec2u^ theVec);
    Macad::Occt::Graphic3d_Vec2u^ cwiseMax(Macad::Occt::Graphic3d_Vec2u^ theVec);
    Macad::Occt::Graphic3d_Vec2u^ cwiseAbs();
    unsigned int maxComp();
    unsigned int minComp();
    unsigned int Dot(Macad::Occt::Graphic3d_Vec2u^ theOther);
    unsigned int Modulus();
    unsigned int SquareModulus();
    static Macad::Occt::Graphic3d_Vec2u^ DX();
    static Macad::Occt::Graphic3d_Vec2u^ DY();
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    bool Equals(System::Object^ obj) override;
}; // class Graphic3d_Vec2u

//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2ub
//---------------------------------------------------------------------
public ref class Graphic3d_Vec2ub sealed
    : public Macad::Occt::BaseClass<::Graphic3d_Vec2ub>
{

#ifdef Include_Graphic3d_Vec2ub_h
public:
    Include_Graphic3d_Vec2ub_h
#endif

public:
    Graphic3d_Vec2ub(::Graphic3d_Vec2ub* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec2ub>( nativeInstance, true )
    {}

    Graphic3d_Vec2ub(::Graphic3d_Vec2ub& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec2ub>( &nativeInstance, false )
    {}

    property ::Graphic3d_Vec2ub* NativeInstance
    {
        ::Graphic3d_Vec2ub* get()
        {
            return static_cast<::Graphic3d_Vec2ub*>(_NativeInstance);
        }
    }

public:
    Graphic3d_Vec2ub(unsigned char theXY);
    Graphic3d_Vec2ub(unsigned char theX, unsigned char theY);
    static int Length();
    void SetValues(unsigned char theX, unsigned char theY);
    unsigned char x();
    unsigned char y();
    Macad::Occt::Graphic3d_Vec2ub^ xy();
    Macad::Occt::Graphic3d_Vec2ub^ yx();
    bool IsEqual(Macad::Occt::Graphic3d_Vec2ub^ theOther);
    unsigned char GetData();
    unsigned char ChangeData();
    void Multiply(unsigned char theFactor);
    Macad::Occt::Graphic3d_Vec2ub^ Multiplied(unsigned char theFactor);
    Macad::Occt::Graphic3d_Vec2ub^ cwiseMin(Macad::Occt::Graphic3d_Vec2ub^ theVec);
    Macad::Occt::Graphic3d_Vec2ub^ cwiseMax(Macad::Occt::Graphic3d_Vec2ub^ theVec);
    Macad::Occt::Graphic3d_Vec2ub^ cwiseAbs();
    unsigned char maxComp();
    unsigned char minComp();
    unsigned char Dot(Macad::Occt::Graphic3d_Vec2ub^ theOther);
    unsigned char Modulus();
    unsigned char SquareModulus();
    static Macad::Occt::Graphic3d_Vec2ub^ DX();
    static Macad::Occt::Graphic3d_Vec2ub^ DY();
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    bool Equals(System::Object^ obj) override;
}; // class Graphic3d_Vec2ub

//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2b
//---------------------------------------------------------------------
public ref class Graphic3d_Vec2b sealed
    : public Macad::Occt::BaseClass<::Graphic3d_Vec2b>
{

#ifdef Include_Graphic3d_Vec2b_h
public:
    Include_Graphic3d_Vec2b_h
#endif

public:
    Graphic3d_Vec2b(::Graphic3d_Vec2b* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec2b>( nativeInstance, true )
    {}

    Graphic3d_Vec2b(::Graphic3d_Vec2b& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec2b>( &nativeInstance, false )
    {}

    property ::Graphic3d_Vec2b* NativeInstance
    {
        ::Graphic3d_Vec2b* get()
        {
            return static_cast<::Graphic3d_Vec2b*>(_NativeInstance);
        }
    }

public:
    Graphic3d_Vec2b(char theXY);
    Graphic3d_Vec2b(char theX, char theY);
    static int Length();
    void SetValues(char theX, char theY);
    char x();
    char y();
    Macad::Occt::Graphic3d_Vec2b^ xy();
    Macad::Occt::Graphic3d_Vec2b^ yx();
    bool IsEqual(Macad::Occt::Graphic3d_Vec2b^ theOther);
    char GetData();
    char ChangeData();
    void Multiply(char theFactor);
    Macad::Occt::Graphic3d_Vec2b^ Multiplied(char theFactor);
    Macad::Occt::Graphic3d_Vec2b^ cwiseMin(Macad::Occt::Graphic3d_Vec2b^ theVec);
    Macad::Occt::Graphic3d_Vec2b^ cwiseMax(Macad::Occt::Graphic3d_Vec2b^ theVec);
    Macad::Occt::Graphic3d_Vec2b^ cwiseAbs();
    char maxComp();
    char minComp();
    char Dot(Macad::Occt::Graphic3d_Vec2b^ theOther);
    char Modulus();
    char SquareModulus();
    static Macad::Occt::Graphic3d_Vec2b^ DX();
    static Macad::Occt::Graphic3d_Vec2b^ DY();
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    bool Equals(System::Object^ obj) override;
}; // class Graphic3d_Vec2b

//---------------------------------------------------------------------
//  Class  Graphic3d_Vec3
//---------------------------------------------------------------------
public ref class Graphic3d_Vec3 sealed
    : public Macad::Occt::BaseClass<::Graphic3d_Vec3>
{

#ifdef Include_Graphic3d_Vec3_h
public:
    Include_Graphic3d_Vec3_h
#endif

public:
    Graphic3d_Vec3(::Graphic3d_Vec3* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec3>( nativeInstance, true )
    {}

    Graphic3d_Vec3(::Graphic3d_Vec3& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec3>( &nativeInstance, false )
    {}

    property ::Graphic3d_Vec3* NativeInstance
    {
        ::Graphic3d_Vec3* get()
        {
            return static_cast<::Graphic3d_Vec3*>(_NativeInstance);
        }
    }

public:
    Graphic3d_Vec3();
    Graphic3d_Vec3(float theValue);
    Graphic3d_Vec3(float theX, float theY, float theZ);
    Graphic3d_Vec3(Macad::Occt::gp_Vec2f^ theVec2, float theZ);
    Graphic3d_Vec3(Macad::Occt::gp_Vec2f^ theVec2);
    static int Length();
    void SetValues(float theX, float theY, float theZ);
    float x();
    float r();
    float y();
    float g();
    float z();
    float b();
    Macad::Occt::gp_Vec2f^ xy();
    Macad::Occt::gp_Vec2f^ yx();
    Macad::Occt::gp_Vec2f^ xz();
    Macad::Occt::gp_Vec2f^ zx();
    Macad::Occt::gp_Vec2f^ yz();
    Macad::Occt::gp_Vec2f^ zy();
    Macad::Occt::Graphic3d_Vec3^ xyz();
    Macad::Occt::Graphic3d_Vec3^ xzy();
    Macad::Occt::Graphic3d_Vec3^ yxz();
    Macad::Occt::Graphic3d_Vec3^ yzx();
    Macad::Occt::Graphic3d_Vec3^ zyx();
    Macad::Occt::Graphic3d_Vec3^ zxy();
    bool IsEqual(Macad::Occt::Graphic3d_Vec3^ theOther);
    float GetData();
    float ChangeData();
    void Multiply(float theFactor);
    Macad::Occt::Graphic3d_Vec3^ Multiplied(float theFactor);
    Macad::Occt::Graphic3d_Vec3^ cwiseMin(Macad::Occt::Graphic3d_Vec3^ theVec);
    Macad::Occt::Graphic3d_Vec3^ cwiseMax(Macad::Occt::Graphic3d_Vec3^ theVec);
    Macad::Occt::Graphic3d_Vec3^ cwiseAbs();
    float maxComp();
    float minComp();
    float Dot(Macad::Occt::Graphic3d_Vec3^ theOther);
    float Modulus();
    float SquareModulus();
    void Normalize();
    Macad::Occt::Graphic3d_Vec3^ Normalized();
    static Macad::Occt::Graphic3d_Vec3^ Cross(Macad::Occt::Graphic3d_Vec3^ theVec1, Macad::Occt::Graphic3d_Vec3^ theVec2);
    static Macad::Occt::Graphic3d_Vec3^ GetLERP(Macad::Occt::Graphic3d_Vec3^ theFrom, Macad::Occt::Graphic3d_Vec3^ theTo, float theT);
    static Macad::Occt::Graphic3d_Vec3^ DX();
    static Macad::Occt::Graphic3d_Vec3^ DY();
    static Macad::Occt::Graphic3d_Vec3^ DZ();
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    bool Equals(System::Object^ obj) override;
}; // class Graphic3d_Vec3

//---------------------------------------------------------------------
//  Class  Graphic3d_Vec3d
//---------------------------------------------------------------------
public ref class Graphic3d_Vec3d sealed
    : public Macad::Occt::BaseClass<::Graphic3d_Vec3d>
{

#ifdef Include_Graphic3d_Vec3d_h
public:
    Include_Graphic3d_Vec3d_h
#endif

public:
    Graphic3d_Vec3d(::Graphic3d_Vec3d* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec3d>( nativeInstance, true )
    {}

    Graphic3d_Vec3d(::Graphic3d_Vec3d& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec3d>( &nativeInstance, false )
    {}

    property ::Graphic3d_Vec3d* NativeInstance
    {
        ::Graphic3d_Vec3d* get()
        {
            return static_cast<::Graphic3d_Vec3d*>(_NativeInstance);
        }
    }

public:
    Graphic3d_Vec3d();
    Graphic3d_Vec3d(double theValue);
    Graphic3d_Vec3d(double theX, double theY, double theZ);
    Graphic3d_Vec3d(Macad::Occt::Graphic3d_Vec2d^ theVec2, double theZ);
    Graphic3d_Vec3d(Macad::Occt::Graphic3d_Vec2d^ theVec2);
    static int Length();
    void SetValues(double theX, double theY, double theZ);
    double x();
    double r();
    double y();
    double g();
    double z();
    double b();
    Macad::Occt::Graphic3d_Vec2d^ xy();
    Macad::Occt::Graphic3d_Vec2d^ yx();
    Macad::Occt::Graphic3d_Vec2d^ xz();
    Macad::Occt::Graphic3d_Vec2d^ zx();
    Macad::Occt::Graphic3d_Vec2d^ yz();
    Macad::Occt::Graphic3d_Vec2d^ zy();
    Macad::Occt::Graphic3d_Vec3d^ xyz();
    Macad::Occt::Graphic3d_Vec3d^ xzy();
    Macad::Occt::Graphic3d_Vec3d^ yxz();
    Macad::Occt::Graphic3d_Vec3d^ yzx();
    Macad::Occt::Graphic3d_Vec3d^ zyx();
    Macad::Occt::Graphic3d_Vec3d^ zxy();
    bool IsEqual(Macad::Occt::Graphic3d_Vec3d^ theOther);
    double GetData();
    double ChangeData();
    void Multiply(double theFactor);
    Macad::Occt::Graphic3d_Vec3d^ Multiplied(double theFactor);
    Macad::Occt::Graphic3d_Vec3d^ cwiseMin(Macad::Occt::Graphic3d_Vec3d^ theVec);
    Macad::Occt::Graphic3d_Vec3d^ cwiseMax(Macad::Occt::Graphic3d_Vec3d^ theVec);
    Macad::Occt::Graphic3d_Vec3d^ cwiseAbs();
    double maxComp();
    double minComp();
    double Dot(Macad::Occt::Graphic3d_Vec3d^ theOther);
    double Modulus();
    double SquareModulus();
    void Normalize();
    Macad::Occt::Graphic3d_Vec3d^ Normalized();
    static Macad::Occt::Graphic3d_Vec3d^ Cross(Macad::Occt::Graphic3d_Vec3d^ theVec1, Macad::Occt::Graphic3d_Vec3d^ theVec2);
    static Macad::Occt::Graphic3d_Vec3d^ GetLERP(Macad::Occt::Graphic3d_Vec3d^ theFrom, Macad::Occt::Graphic3d_Vec3d^ theTo, double theT);
    static Macad::Occt::Graphic3d_Vec3d^ DX();
    static Macad::Occt::Graphic3d_Vec3d^ DY();
    static Macad::Occt::Graphic3d_Vec3d^ DZ();
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    bool Equals(System::Object^ obj) override;
}; // class Graphic3d_Vec3d

//---------------------------------------------------------------------
//  Class  Graphic3d_Vec3i
//---------------------------------------------------------------------
public ref class Graphic3d_Vec3i sealed
    : public Macad::Occt::BaseClass<::Graphic3d_Vec3i>
{

#ifdef Include_Graphic3d_Vec3i_h
public:
    Include_Graphic3d_Vec3i_h
#endif

public:
    Graphic3d_Vec3i(::Graphic3d_Vec3i* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec3i>( nativeInstance, true )
    {}

    Graphic3d_Vec3i(::Graphic3d_Vec3i& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec3i>( &nativeInstance, false )
    {}

    property ::Graphic3d_Vec3i* NativeInstance
    {
        ::Graphic3d_Vec3i* get()
        {
            return static_cast<::Graphic3d_Vec3i*>(_NativeInstance);
        }
    }

public:
    Graphic3d_Vec3i();
    Graphic3d_Vec3i(int theValue);
    Graphic3d_Vec3i(int theX, int theY, int theZ);
    Graphic3d_Vec3i(Macad::Occt::Graphic3d_Vec2i^ theVec2, int theZ);
    Graphic3d_Vec3i(Macad::Occt::Graphic3d_Vec2i^ theVec2);
    Graphic3d_Vec3i(Macad::Occt::gp_Vec3f^ theOtherVec3);
    static int Length();
    void SetValues(int theX, int theY, int theZ);
    int x();
    int r();
    int y();
    int g();
    int z();
    int b();
    Macad::Occt::Graphic3d_Vec2i^ xy();
    Macad::Occt::Graphic3d_Vec2i^ yx();
    Macad::Occt::Graphic3d_Vec2i^ xz();
    Macad::Occt::Graphic3d_Vec2i^ zx();
    Macad::Occt::Graphic3d_Vec2i^ yz();
    Macad::Occt::Graphic3d_Vec2i^ zy();
    Macad::Occt::Graphic3d_Vec3i^ xyz();
    Macad::Occt::Graphic3d_Vec3i^ xzy();
    Macad::Occt::Graphic3d_Vec3i^ yxz();
    Macad::Occt::Graphic3d_Vec3i^ yzx();
    Macad::Occt::Graphic3d_Vec3i^ zyx();
    Macad::Occt::Graphic3d_Vec3i^ zxy();
    bool IsEqual(Macad::Occt::Graphic3d_Vec3i^ theOther);
    int GetData();
    int ChangeData();
    void Multiply(int theFactor);
    Macad::Occt::Graphic3d_Vec3i^ Multiplied(int theFactor);
    Macad::Occt::Graphic3d_Vec3i^ cwiseMin(Macad::Occt::Graphic3d_Vec3i^ theVec);
    Macad::Occt::Graphic3d_Vec3i^ cwiseMax(Macad::Occt::Graphic3d_Vec3i^ theVec);
    Macad::Occt::Graphic3d_Vec3i^ cwiseAbs();
    int maxComp();
    int minComp();
    int Dot(Macad::Occt::Graphic3d_Vec3i^ theOther);
    int Modulus();
    int SquareModulus();
    void Normalize();
    Macad::Occt::Graphic3d_Vec3i^ Normalized();
    static Macad::Occt::Graphic3d_Vec3i^ Cross(Macad::Occt::Graphic3d_Vec3i^ theVec1, Macad::Occt::Graphic3d_Vec3i^ theVec2);
    static Macad::Occt::Graphic3d_Vec3i^ GetLERP(Macad::Occt::Graphic3d_Vec3i^ theFrom, Macad::Occt::Graphic3d_Vec3i^ theTo, int theT);
    static Macad::Occt::Graphic3d_Vec3i^ DX();
    static Macad::Occt::Graphic3d_Vec3i^ DY();
    static Macad::Occt::Graphic3d_Vec3i^ DZ();
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    bool Equals(System::Object^ obj) override;
}; // class Graphic3d_Vec3i

//---------------------------------------------------------------------
//  Class  Graphic3d_Vec4
//---------------------------------------------------------------------
public ref class Graphic3d_Vec4 sealed
    : public Macad::Occt::BaseClass<::Graphic3d_Vec4>
{

#ifdef Include_Graphic3d_Vec4_h
public:
    Include_Graphic3d_Vec4_h
#endif

public:
    Graphic3d_Vec4(::Graphic3d_Vec4* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec4>( nativeInstance, true )
    {}

    Graphic3d_Vec4(::Graphic3d_Vec4& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec4>( &nativeInstance, false )
    {}

    property ::Graphic3d_Vec4* NativeInstance
    {
        ::Graphic3d_Vec4* get()
        {
            return static_cast<::Graphic3d_Vec4*>(_NativeInstance);
        }
    }

public:
    Graphic3d_Vec4();
    Graphic3d_Vec4(float theValue);
    Graphic3d_Vec4(float theX, float theY, float theZ, float theW);
    Graphic3d_Vec4(Macad::Occt::gp_Vec2f^ theVec2);
    Graphic3d_Vec4(Macad::Occt::gp_Vec3f^ theVec3, float theW);
    Graphic3d_Vec4(Macad::Occt::gp_Vec3f^ theVec3);
    static int Length();
    void SetValues(float theX, float theY, float theZ, float theW);
    float x();
    float r();
    float y();
    float g();
    float z();
    float b();
    float w();
    float a();
    Macad::Occt::gp_Vec2f^ xy();
    Macad::Occt::gp_Vec2f^ yx();
    Macad::Occt::gp_Vec2f^ xz();
    Macad::Occt::gp_Vec2f^ zx();
    Macad::Occt::gp_Vec2f^ xw();
    Macad::Occt::gp_Vec2f^ wx();
    Macad::Occt::gp_Vec2f^ yz();
    Macad::Occt::gp_Vec2f^ zy();
    Macad::Occt::gp_Vec2f^ yw();
    Macad::Occt::gp_Vec2f^ wy();
    Macad::Occt::gp_Vec2f^ zw();
    Macad::Occt::gp_Vec2f^ wz();
    Macad::Occt::gp_Vec3f^ xyz();
    Macad::Occt::gp_Vec3f^ xzy();
    Macad::Occt::gp_Vec3f^ yxz();
    Macad::Occt::gp_Vec3f^ yzx();
    Macad::Occt::gp_Vec3f^ zyx();
    Macad::Occt::gp_Vec3f^ zxy();
    Macad::Occt::gp_Vec3f^ xyw();
    Macad::Occt::gp_Vec3f^ xwy();
    Macad::Occt::gp_Vec3f^ yxw();
    Macad::Occt::gp_Vec3f^ ywx();
    Macad::Occt::gp_Vec3f^ wyx();
    Macad::Occt::gp_Vec3f^ wxy();
    Macad::Occt::gp_Vec3f^ xzw();
    Macad::Occt::gp_Vec3f^ xwz();
    Macad::Occt::gp_Vec3f^ zxw();
    Macad::Occt::gp_Vec3f^ zwx();
    Macad::Occt::gp_Vec3f^ wzx();
    Macad::Occt::gp_Vec3f^ wxz();
    Macad::Occt::gp_Vec3f^ yzw();
    Macad::Occt::gp_Vec3f^ ywz();
    Macad::Occt::gp_Vec3f^ zyw();
    Macad::Occt::gp_Vec3f^ zwy();
    Macad::Occt::gp_Vec3f^ wzy();
    Macad::Occt::gp_Vec3f^ wyz();
    Macad::Occt::gp_Vec3f^ rgb();
    Macad::Occt::gp_Vec3f^ rbg();
    Macad::Occt::gp_Vec3f^ grb();
    Macad::Occt::gp_Vec3f^ gbr();
    Macad::Occt::gp_Vec3f^ bgr();
    Macad::Occt::gp_Vec3f^ brg();
    bool IsEqual(Macad::Occt::Graphic3d_Vec4^ theOther);
    float GetData();
    float ChangeData();
    void Multiply(float theFactor);
    Macad::Occt::Graphic3d_Vec4^ Multiplied(float theFactor);
    Macad::Occt::Graphic3d_Vec4^ cwiseMin(Macad::Occt::Graphic3d_Vec4^ theVec);
    Macad::Occt::Graphic3d_Vec4^ cwiseMax(Macad::Occt::Graphic3d_Vec4^ theVec);
    Macad::Occt::Graphic3d_Vec4^ cwiseAbs();
    float maxComp();
    float minComp();
    float Dot(Macad::Occt::Graphic3d_Vec4^ theOther);
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    bool Equals(System::Object^ obj) override;
}; // class Graphic3d_Vec4

//---------------------------------------------------------------------
//  Class  Graphic3d_Vec4d
//---------------------------------------------------------------------
public ref class Graphic3d_Vec4d sealed
    : public Macad::Occt::BaseClass<::Graphic3d_Vec4d>
{

#ifdef Include_Graphic3d_Vec4d_h
public:
    Include_Graphic3d_Vec4d_h
#endif

public:
    Graphic3d_Vec4d(::Graphic3d_Vec4d* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec4d>( nativeInstance, true )
    {}

    Graphic3d_Vec4d(::Graphic3d_Vec4d& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec4d>( &nativeInstance, false )
    {}

    property ::Graphic3d_Vec4d* NativeInstance
    {
        ::Graphic3d_Vec4d* get()
        {
            return static_cast<::Graphic3d_Vec4d*>(_NativeInstance);
        }
    }

public:
    Graphic3d_Vec4d();
    Graphic3d_Vec4d(double theValue);
    Graphic3d_Vec4d(double theX, double theY, double theZ, double theW);
    Graphic3d_Vec4d(Macad::Occt::Graphic3d_Vec2d^ theVec2);
    Graphic3d_Vec4d(Macad::Occt::Graphic3d_Vec3d^ theVec3, double theW);
    Graphic3d_Vec4d(Macad::Occt::Graphic3d_Vec3d^ theVec3);
    static int Length();
    void SetValues(double theX, double theY, double theZ, double theW);
    double x();
    double r();
    double y();
    double g();
    double z();
    double b();
    double w();
    double a();
    Macad::Occt::Graphic3d_Vec2d^ xy();
    Macad::Occt::Graphic3d_Vec2d^ yx();
    Macad::Occt::Graphic3d_Vec2d^ xz();
    Macad::Occt::Graphic3d_Vec2d^ zx();
    Macad::Occt::Graphic3d_Vec2d^ xw();
    Macad::Occt::Graphic3d_Vec2d^ wx();
    Macad::Occt::Graphic3d_Vec2d^ yz();
    Macad::Occt::Graphic3d_Vec2d^ zy();
    Macad::Occt::Graphic3d_Vec2d^ yw();
    Macad::Occt::Graphic3d_Vec2d^ wy();
    Macad::Occt::Graphic3d_Vec2d^ zw();
    Macad::Occt::Graphic3d_Vec2d^ wz();
    Macad::Occt::Graphic3d_Vec3d^ xyz();
    Macad::Occt::Graphic3d_Vec3d^ xzy();
    Macad::Occt::Graphic3d_Vec3d^ yxz();
    Macad::Occt::Graphic3d_Vec3d^ yzx();
    Macad::Occt::Graphic3d_Vec3d^ zyx();
    Macad::Occt::Graphic3d_Vec3d^ zxy();
    Macad::Occt::Graphic3d_Vec3d^ xyw();
    Macad::Occt::Graphic3d_Vec3d^ xwy();
    Macad::Occt::Graphic3d_Vec3d^ yxw();
    Macad::Occt::Graphic3d_Vec3d^ ywx();
    Macad::Occt::Graphic3d_Vec3d^ wyx();
    Macad::Occt::Graphic3d_Vec3d^ wxy();
    Macad::Occt::Graphic3d_Vec3d^ xzw();
    Macad::Occt::Graphic3d_Vec3d^ xwz();
    Macad::Occt::Graphic3d_Vec3d^ zxw();
    Macad::Occt::Graphic3d_Vec3d^ zwx();
    Macad::Occt::Graphic3d_Vec3d^ wzx();
    Macad::Occt::Graphic3d_Vec3d^ wxz();
    Macad::Occt::Graphic3d_Vec3d^ yzw();
    Macad::Occt::Graphic3d_Vec3d^ ywz();
    Macad::Occt::Graphic3d_Vec3d^ zyw();
    Macad::Occt::Graphic3d_Vec3d^ zwy();
    Macad::Occt::Graphic3d_Vec3d^ wzy();
    Macad::Occt::Graphic3d_Vec3d^ wyz();
    Macad::Occt::Graphic3d_Vec3d^ rgb();
    Macad::Occt::Graphic3d_Vec3d^ rbg();
    Macad::Occt::Graphic3d_Vec3d^ grb();
    Macad::Occt::Graphic3d_Vec3d^ gbr();
    Macad::Occt::Graphic3d_Vec3d^ bgr();
    Macad::Occt::Graphic3d_Vec3d^ brg();
    bool IsEqual(Macad::Occt::Graphic3d_Vec4d^ theOther);
    double GetData();
    double ChangeData();
    void Multiply(double theFactor);
    Macad::Occt::Graphic3d_Vec4d^ Multiplied(double theFactor);
    Macad::Occt::Graphic3d_Vec4d^ cwiseMin(Macad::Occt::Graphic3d_Vec4d^ theVec);
    Macad::Occt::Graphic3d_Vec4d^ cwiseMax(Macad::Occt::Graphic3d_Vec4d^ theVec);
    Macad::Occt::Graphic3d_Vec4d^ cwiseAbs();
    double maxComp();
    double minComp();
    double Dot(Macad::Occt::Graphic3d_Vec4d^ theOther);
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    bool Equals(System::Object^ obj) override;
}; // class Graphic3d_Vec4d

//---------------------------------------------------------------------
//  Class  Graphic3d_Vec4i
//---------------------------------------------------------------------
public ref class Graphic3d_Vec4i sealed
    : public Macad::Occt::BaseClass<::Graphic3d_Vec4i>
{

#ifdef Include_Graphic3d_Vec4i_h
public:
    Include_Graphic3d_Vec4i_h
#endif

public:
    Graphic3d_Vec4i(::Graphic3d_Vec4i* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec4i>( nativeInstance, true )
    {}

    Graphic3d_Vec4i(::Graphic3d_Vec4i& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec4i>( &nativeInstance, false )
    {}

    property ::Graphic3d_Vec4i* NativeInstance
    {
        ::Graphic3d_Vec4i* get()
        {
            return static_cast<::Graphic3d_Vec4i*>(_NativeInstance);
        }
    }

public:
    Graphic3d_Vec4i();
    Graphic3d_Vec4i(int theValue);
    Graphic3d_Vec4i(int theX, int theY, int theZ, int theW);
    Graphic3d_Vec4i(Macad::Occt::Graphic3d_Vec2i^ theVec2);
    Graphic3d_Vec4i(Macad::Occt::Graphic3d_Vec3i^ theVec3, int theW);
    Graphic3d_Vec4i(Macad::Occt::Graphic3d_Vec3i^ theVec3);
    Graphic3d_Vec4i(Macad::Occt::Graphic3d_Vec4^ theOtherVec4);
    static int Length();
    void SetValues(int theX, int theY, int theZ, int theW);
    int x();
    int r();
    int y();
    int g();
    int z();
    int b();
    int w();
    int a();
    Macad::Occt::Graphic3d_Vec2i^ xy();
    Macad::Occt::Graphic3d_Vec2i^ yx();
    Macad::Occt::Graphic3d_Vec2i^ xz();
    Macad::Occt::Graphic3d_Vec2i^ zx();
    Macad::Occt::Graphic3d_Vec2i^ xw();
    Macad::Occt::Graphic3d_Vec2i^ wx();
    Macad::Occt::Graphic3d_Vec2i^ yz();
    Macad::Occt::Graphic3d_Vec2i^ zy();
    Macad::Occt::Graphic3d_Vec2i^ yw();
    Macad::Occt::Graphic3d_Vec2i^ wy();
    Macad::Occt::Graphic3d_Vec2i^ zw();
    Macad::Occt::Graphic3d_Vec2i^ wz();
    Macad::Occt::Graphic3d_Vec3i^ xyz();
    Macad::Occt::Graphic3d_Vec3i^ xzy();
    Macad::Occt::Graphic3d_Vec3i^ yxz();
    Macad::Occt::Graphic3d_Vec3i^ yzx();
    Macad::Occt::Graphic3d_Vec3i^ zyx();
    Macad::Occt::Graphic3d_Vec3i^ zxy();
    Macad::Occt::Graphic3d_Vec3i^ xyw();
    Macad::Occt::Graphic3d_Vec3i^ xwy();
    Macad::Occt::Graphic3d_Vec3i^ yxw();
    Macad::Occt::Graphic3d_Vec3i^ ywx();
    Macad::Occt::Graphic3d_Vec3i^ wyx();
    Macad::Occt::Graphic3d_Vec3i^ wxy();
    Macad::Occt::Graphic3d_Vec3i^ xzw();
    Macad::Occt::Graphic3d_Vec3i^ xwz();
    Macad::Occt::Graphic3d_Vec3i^ zxw();
    Macad::Occt::Graphic3d_Vec3i^ zwx();
    Macad::Occt::Graphic3d_Vec3i^ wzx();
    Macad::Occt::Graphic3d_Vec3i^ wxz();
    Macad::Occt::Graphic3d_Vec3i^ yzw();
    Macad::Occt::Graphic3d_Vec3i^ ywz();
    Macad::Occt::Graphic3d_Vec3i^ zyw();
    Macad::Occt::Graphic3d_Vec3i^ zwy();
    Macad::Occt::Graphic3d_Vec3i^ wzy();
    Macad::Occt::Graphic3d_Vec3i^ wyz();
    Macad::Occt::Graphic3d_Vec3i^ rgb();
    Macad::Occt::Graphic3d_Vec3i^ rbg();
    Macad::Occt::Graphic3d_Vec3i^ grb();
    Macad::Occt::Graphic3d_Vec3i^ gbr();
    Macad::Occt::Graphic3d_Vec3i^ bgr();
    Macad::Occt::Graphic3d_Vec3i^ brg();
    bool IsEqual(Macad::Occt::Graphic3d_Vec4i^ theOther);
    int GetData();
    int ChangeData();
    void Multiply(int theFactor);
    Macad::Occt::Graphic3d_Vec4i^ Multiplied(int theFactor);
    Macad::Occt::Graphic3d_Vec4i^ cwiseMin(Macad::Occt::Graphic3d_Vec4i^ theVec);
    Macad::Occt::Graphic3d_Vec4i^ cwiseMax(Macad::Occt::Graphic3d_Vec4i^ theVec);
    Macad::Occt::Graphic3d_Vec4i^ cwiseAbs();
    int maxComp();
    int minComp();
    int Dot(Macad::Occt::Graphic3d_Vec4i^ theOther);
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    bool Equals(System::Object^ obj) override;
}; // class Graphic3d_Vec4i

//---------------------------------------------------------------------
//  Class  Graphic3d_Vec4ub
//---------------------------------------------------------------------
public ref class Graphic3d_Vec4ub sealed
    : public Macad::Occt::BaseClass<::Graphic3d_Vec4ub>
{

#ifdef Include_Graphic3d_Vec4ub_h
public:
    Include_Graphic3d_Vec4ub_h
#endif

public:
    Graphic3d_Vec4ub(::Graphic3d_Vec4ub* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec4ub>( nativeInstance, true )
    {}

    Graphic3d_Vec4ub(::Graphic3d_Vec4ub& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vec4ub>( &nativeInstance, false )
    {}

    property ::Graphic3d_Vec4ub* NativeInstance
    {
        ::Graphic3d_Vec4ub* get()
        {
            return static_cast<::Graphic3d_Vec4ub*>(_NativeInstance);
        }
    }

public:
    Graphic3d_Vec4ub();
    Graphic3d_Vec4ub(unsigned char theValue);
    Graphic3d_Vec4ub(unsigned char theX, unsigned char theY, unsigned char theZ, unsigned char theW);
    Graphic3d_Vec4ub(Macad::Occt::Graphic3d_Vec2ub^ theVec2);
    /* Method skipped due to unknown mapping: void Graphic3d_Vec4ub(Graphic3d_Vec3ub theVec3, unsigned char theW, ) */
    /* Method skipped due to unknown mapping: void Graphic3d_Vec4ub(Graphic3d_Vec3ub theVec3, unsigned char theW, ) */
    static int Length();
    void SetValues(unsigned char theX, unsigned char theY, unsigned char theZ, unsigned char theW);
    unsigned char x();
    unsigned char r();
    unsigned char y();
    unsigned char g();
    unsigned char z();
    unsigned char b();
    unsigned char w();
    unsigned char a();
    Macad::Occt::Graphic3d_Vec2ub^ xy();
    Macad::Occt::Graphic3d_Vec2ub^ yx();
    Macad::Occt::Graphic3d_Vec2ub^ xz();
    Macad::Occt::Graphic3d_Vec2ub^ zx();
    Macad::Occt::Graphic3d_Vec2ub^ xw();
    Macad::Occt::Graphic3d_Vec2ub^ wx();
    Macad::Occt::Graphic3d_Vec2ub^ yz();
    Macad::Occt::Graphic3d_Vec2ub^ zy();
    Macad::Occt::Graphic3d_Vec2ub^ yw();
    Macad::Occt::Graphic3d_Vec2ub^ wy();
    Macad::Occt::Graphic3d_Vec2ub^ zw();
    Macad::Occt::Graphic3d_Vec2ub^ wz();
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub xyz() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub xzy() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub yxz() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub yzx() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub zyx() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub zxy() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub xyw() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub xwy() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub yxw() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub ywx() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub wyx() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub wxy() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub xzw() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub xwz() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub zxw() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub zwx() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub wzx() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub wxz() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub yzw() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub ywz() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub zyw() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub zwy() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub wzy() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub wyz() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub rgb() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub rbg() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub grb() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub gbr() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub bgr() */
    /* Method skipped due to unknown mapping: Graphic3d_Vec3ub brg() */
    bool IsEqual(Macad::Occt::Graphic3d_Vec4ub^ theOther);
    unsigned char GetData();
    unsigned char ChangeData();
    void Multiply(unsigned char theFactor);
    Macad::Occt::Graphic3d_Vec4ub^ Multiplied(unsigned char theFactor);
    Macad::Occt::Graphic3d_Vec4ub^ cwiseMin(Macad::Occt::Graphic3d_Vec4ub^ theVec);
    Macad::Occt::Graphic3d_Vec4ub^ cwiseMax(Macad::Occt::Graphic3d_Vec4ub^ theVec);
    Macad::Occt::Graphic3d_Vec4ub^ cwiseAbs();
    unsigned char maxComp();
    unsigned char minComp();
    unsigned char Dot(Macad::Occt::Graphic3d_Vec4ub^ theOther);
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    bool Equals(System::Object^ obj) override;
}; // class Graphic3d_Vec4ub

//---------------------------------------------------------------------
//  Class  Graphic3d_Mat4
//---------------------------------------------------------------------
public ref class Graphic3d_Mat4 sealed
    : public Macad::Occt::BaseClass<::Graphic3d_Mat4>
{

#ifdef Include_Graphic3d_Mat4_h
public:
    Include_Graphic3d_Mat4_h
#endif

public:
    Graphic3d_Mat4(::Graphic3d_Mat4* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Mat4>( nativeInstance, true )
    {}

    Graphic3d_Mat4(::Graphic3d_Mat4& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Mat4>( &nativeInstance, false )
    {}

    property ::Graphic3d_Mat4* NativeInstance
    {
        ::Graphic3d_Mat4* get()
        {
            return static_cast<::Graphic3d_Mat4*>(_NativeInstance);
        }
    }

public:
    Graphic3d_Mat4();
    static long long unsigned int Rows();
    static long long unsigned int Cols();
    static Macad::Occt::Graphic3d_Mat4^ Identity();
    static Macad::Occt::Graphic3d_Mat4^ Zero();
    float GetValue(long long unsigned int theRow, long long unsigned int theCol);
    float ChangeValue(long long unsigned int theRow, long long unsigned int theCol);
    void SetValue(long long unsigned int theRow, long long unsigned int theCol, float theValue);
    Macad::Occt::Graphic3d_Vec4^ GetRow(long long unsigned int theRow);
    void SetRow(long long unsigned int theRow, Macad::Occt::gp_Vec3f^ theVec);
    Macad::Occt::Graphic3d_Vec4^ GetColumn(long long unsigned int theCol);
    void SetColumn(long long unsigned int theCol, Macad::Occt::gp_Vec3f^ theVec);
    Macad::Occt::Graphic3d_Vec4^ GetDiagonal();
    void SetDiagonal(Macad::Occt::gp_Vec3f^ theVec);
    /* Method skipped due to unknown mapping: NCollection_Mat3<float> GetMat3() */
    void InitZero();
    bool IsZero();
    void InitIdentity();
    bool IsIdentity();
    bool IsEqual(Macad::Occt::Graphic3d_Mat4^ theOther);
    float GetData();
    float ChangeData();
    static Macad::Occt::Graphic3d_Mat4^ Multiply(Macad::Occt::Graphic3d_Mat4^ theMatA, Macad::Occt::Graphic3d_Mat4^ theMatB);
    Macad::Occt::Graphic3d_Mat4^ Multiplied(Macad::Occt::Graphic3d_Mat4^ theMat);
    void Divide(float theFactor);
    Macad::Occt::Graphic3d_Mat4^ Divided(float theScalar);
    void Add(Macad::Occt::Graphic3d_Mat4^ theMat);
    void Subtract(Macad::Occt::Graphic3d_Mat4^ theMat);
    Macad::Occt::Graphic3d_Mat4^ Added(Macad::Occt::Graphic3d_Mat4^ theMat);
    Macad::Occt::Graphic3d_Mat4^ Subtracted(Macad::Occt::Graphic3d_Mat4^ theMat);
    Macad::Occt::Graphic3d_Mat4^ Negated();
    void Translate(Macad::Occt::gp_Vec3f^ theVec);
    Macad::Occt::Graphic3d_Mat4^ Transposed();
    void Transpose();
    bool Inverted(Macad::Occt::Graphic3d_Mat4^ theOutMx, float% theDet);
    float DeterminantMat3();
    Macad::Occt::Graphic3d_Mat4^ Adjoint();
    static Macad::Occt::Graphic3d_Mat4^ Map(float% theData);
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int parameter1, ) */
    bool Equals(System::Object^ obj) override;
}; // class Graphic3d_Mat4

//---------------------------------------------------------------------
//  Class  Graphic3d_Mat4d
//---------------------------------------------------------------------
public ref class Graphic3d_Mat4d sealed
    : public Macad::Occt::BaseClass<::Graphic3d_Mat4d>
{

#ifdef Include_Graphic3d_Mat4d_h
public:
    Include_Graphic3d_Mat4d_h
#endif

public:
    Graphic3d_Mat4d(::Graphic3d_Mat4d* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Mat4d>( nativeInstance, true )
    {}

    Graphic3d_Mat4d(::Graphic3d_Mat4d& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Mat4d>( &nativeInstance, false )
    {}

    property ::Graphic3d_Mat4d* NativeInstance
    {
        ::Graphic3d_Mat4d* get()
        {
            return static_cast<::Graphic3d_Mat4d*>(_NativeInstance);
        }
    }

public:
    Graphic3d_Mat4d();
    static long long unsigned int Rows();
    static long long unsigned int Cols();
    static Macad::Occt::Graphic3d_Mat4d^ Identity();
    static Macad::Occt::Graphic3d_Mat4d^ Zero();
    double GetValue(long long unsigned int theRow, long long unsigned int theCol);
    double ChangeValue(long long unsigned int theRow, long long unsigned int theCol);
    void SetValue(long long unsigned int theRow, long long unsigned int theCol, double theValue);
    Macad::Occt::Graphic3d_Vec4d^ GetRow(long long unsigned int theRow);
    void SetRow(long long unsigned int theRow, Macad::Occt::Graphic3d_Vec3d^ theVec);
    Macad::Occt::Graphic3d_Vec4d^ GetColumn(long long unsigned int theCol);
    void SetColumn(long long unsigned int theCol, Macad::Occt::Graphic3d_Vec3d^ theVec);
    Macad::Occt::Graphic3d_Vec4d^ GetDiagonal();
    void SetDiagonal(Macad::Occt::Graphic3d_Vec3d^ theVec);
    /* Method skipped due to unknown mapping: NCollection_Mat3<double> GetMat3() */
    void InitZero();
    bool IsZero();
    void InitIdentity();
    bool IsIdentity();
    bool IsEqual(Macad::Occt::Graphic3d_Mat4d^ theOther);
    double GetData();
    double ChangeData();
    static Macad::Occt::Graphic3d_Mat4d^ Multiply(Macad::Occt::Graphic3d_Mat4d^ theMatA, Macad::Occt::Graphic3d_Mat4d^ theMatB);
    Macad::Occt::Graphic3d_Mat4d^ Multiplied(Macad::Occt::Graphic3d_Mat4d^ theMat);
    void Divide(double theFactor);
    Macad::Occt::Graphic3d_Mat4d^ Divided(double theScalar);
    void Add(Macad::Occt::Graphic3d_Mat4d^ theMat);
    void Subtract(Macad::Occt::Graphic3d_Mat4d^ theMat);
    Macad::Occt::Graphic3d_Mat4d^ Added(Macad::Occt::Graphic3d_Mat4d^ theMat);
    Macad::Occt::Graphic3d_Mat4d^ Subtracted(Macad::Occt::Graphic3d_Mat4d^ theMat);
    Macad::Occt::Graphic3d_Mat4d^ Negated();
    void Translate(Macad::Occt::Graphic3d_Vec3d^ theVec);
    Macad::Occt::Graphic3d_Mat4d^ Transposed();
    void Transpose();
    bool Inverted(Macad::Occt::Graphic3d_Mat4d^ theOutMx, double% theDet);
    double DeterminantMat3();
    Macad::Occt::Graphic3d_Mat4d^ Adjoint();
    static Macad::Occt::Graphic3d_Mat4d^ Map(double% theData);
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int parameter1, ) */
    bool Equals(System::Object^ obj) override;
}; // class Graphic3d_Mat4d

//---------------------------------------------------------------------
//  Class  Graphic3d_Array1OfAttribute
//---------------------------------------------------------------------
public ref class Graphic3d_Array1OfAttribute sealed
    : public Macad::Occt::BaseClass<::Graphic3d_Array1OfAttribute>
    , public IIndexEnumerable<Macad::Occt::Graphic3d_Attribute^>
{

#ifdef Include_Graphic3d_Array1OfAttribute_h
public:
    Include_Graphic3d_Array1OfAttribute_h
#endif

public:
    Graphic3d_Array1OfAttribute(::Graphic3d_Array1OfAttribute* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Array1OfAttribute>( nativeInstance, true )
    {}

    Graphic3d_Array1OfAttribute(::Graphic3d_Array1OfAttribute& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Array1OfAttribute>( &nativeInstance, false )
    {}

    property ::Graphic3d_Array1OfAttribute* NativeInstance
    {
        ::Graphic3d_Array1OfAttribute* get()
        {
            return static_cast<::Graphic3d_Array1OfAttribute*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Graphic3d_Array1OfAttribute::Iterator>
    {

#ifdef Include_Graphic3d_Array1OfAttribute_Iterator_h
    public:
        Include_Graphic3d_Array1OfAttribute_Iterator_h
#endif

    public:
        Iterator(::Graphic3d_Array1OfAttribute::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_Array1OfAttribute::Iterator>( nativeInstance, true )
        {}

        Iterator(::Graphic3d_Array1OfAttribute::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_Array1OfAttribute::Iterator>( &nativeInstance, false )
        {}

        property ::Graphic3d_Array1OfAttribute::Iterator* NativeInstance
        {
            ::Graphic3d_Array1OfAttribute::Iterator* get()
            {
                return static_cast<::Graphic3d_Array1OfAttribute::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Graphic3d_Array1OfAttribute();
    Graphic3d_Array1OfAttribute(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void Graphic3d_Array1OfAttribute(allocator_type theAlloc, int theLower, int theUpper, ) */
    Graphic3d_Array1OfAttribute(Macad::Occt::Graphic3d_Attribute^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    Graphic3d_Array1OfAttribute(Macad::Occt::Graphic3d_Attribute^ theBegin, int theLower, int theUpper);
    void Init(Macad::Occt::Graphic3d_Attribute^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Graphic3d_Array1OfAttribute^ Assign(Macad::Occt::Graphic3d_Array1OfAttribute^ theOther);
    Macad::Occt::Graphic3d_Array1OfAttribute^ Move(Macad::Occt::Graphic3d_Array1OfAttribute^ theOther);
    Macad::Occt::Graphic3d_Attribute^ First();
    Macad::Occt::Graphic3d_Attribute^ ChangeFirst();
    Macad::Occt::Graphic3d_Attribute^ Last();
    Macad::Occt::Graphic3d_Attribute^ ChangeLast();
    virtual Macad::Occt::Graphic3d_Attribute^ Value(int theIndex);
    Macad::Occt::Graphic3d_Attribute^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Graphic3d_Attribute^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Graphic3d_Attribute^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Graphic3d_Array1OfAttribute

//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderObjectList
//---------------------------------------------------------------------
/// <summary>
/// List of shader objects.
/// </summary>
public ref class Graphic3d_ShaderObjectList sealed
    : public Macad::Occt::BaseClass<::Graphic3d_ShaderObjectList>
    , public IIndexEnumerable<Macad::Occt::Graphic3d_ShaderObject^>
{

#ifdef Include_Graphic3d_ShaderObjectList_h
public:
    Include_Graphic3d_ShaderObjectList_h
#endif

public:
    Graphic3d_ShaderObjectList(::Graphic3d_ShaderObjectList* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_ShaderObjectList>( nativeInstance, true )
    {}

    Graphic3d_ShaderObjectList(::Graphic3d_ShaderObjectList& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_ShaderObjectList>( &nativeInstance, false )
    {}

    property ::Graphic3d_ShaderObjectList* NativeInstance
    {
        ::Graphic3d_ShaderObjectList* get()
        {
            return static_cast<::Graphic3d_ShaderObjectList*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Graphic3d_ShaderObjectList::Iterator>
    {

#ifdef Include_Graphic3d_ShaderObjectList_Iterator_h
    public:
        Include_Graphic3d_ShaderObjectList_Iterator_h
#endif

    public:
        Iterator(::Graphic3d_ShaderObjectList::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_ShaderObjectList::Iterator>( nativeInstance, true )
        {}

        Iterator(::Graphic3d_ShaderObjectList::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_ShaderObjectList::Iterator>( &nativeInstance, false )
        {}

        property ::Graphic3d_ShaderObjectList::Iterator* NativeInstance
        {
            ::Graphic3d_ShaderObjectList::Iterator* get()
            {
                return static_cast<::Graphic3d_ShaderObjectList::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Graphic3d_ShaderObject^ Value();
        Macad::Occt::Graphic3d_ShaderObject^ ChangeValue();
        bool IsEqual(Macad::Occt::Graphic3d_ShaderObjectList::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    Graphic3d_ShaderObjectList();
    Graphic3d_ShaderObjectList(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    int Length();
    int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::Graphic3d_ShaderObjectList^ Assign(Macad::Occt::Graphic3d_ShaderObjectList^ theOther);
    void Remove(Macad::Occt::Graphic3d_ShaderObjectList::Iterator^ thePosition);
    void Append(Macad::Occt::Graphic3d_ShaderObject^ theItem);
    void Prepend(Macad::Occt::Graphic3d_ShaderObject^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::Graphic3d_ShaderObject^ theItem);
    void InsertAfter(Macad::Occt::Graphic3d_ShaderObjectList::Iterator^ thePosition, Macad::Occt::Graphic3d_ShaderObject^ theItem);
    void Split(int theIndex, Macad::Occt::Graphic3d_ShaderObjectList^ theSeq);
    Macad::Occt::Graphic3d_ShaderObject^ First();
    Macad::Occt::Graphic3d_ShaderObject^ ChangeFirst();
    Macad::Occt::Graphic3d_ShaderObject^ Last();
    Macad::Occt::Graphic3d_ShaderObject^ ChangeLast();
    virtual Macad::Occt::Graphic3d_ShaderObject^ Value(int theIndex);
    Macad::Occt::Graphic3d_ShaderObject^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Graphic3d_ShaderObject^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Graphic3d_ShaderObject^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Graphic3d_ShaderObjectList

//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderVariableList
//---------------------------------------------------------------------
/// <summary>
/// List of custom uniform shader variables.
/// </summary>
public ref class Graphic3d_ShaderVariableList sealed
    : public Macad::Occt::BaseClass<::Graphic3d_ShaderVariableList>
    , public IIndexEnumerable<Macad::Occt::Graphic3d_ShaderVariable^>
{

#ifdef Include_Graphic3d_ShaderVariableList_h
public:
    Include_Graphic3d_ShaderVariableList_h
#endif

public:
    Graphic3d_ShaderVariableList(::Graphic3d_ShaderVariableList* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_ShaderVariableList>( nativeInstance, true )
    {}

    Graphic3d_ShaderVariableList(::Graphic3d_ShaderVariableList& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_ShaderVariableList>( &nativeInstance, false )
    {}

    property ::Graphic3d_ShaderVariableList* NativeInstance
    {
        ::Graphic3d_ShaderVariableList* get()
        {
            return static_cast<::Graphic3d_ShaderVariableList*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Graphic3d_ShaderVariableList::Iterator>
    {

#ifdef Include_Graphic3d_ShaderVariableList_Iterator_h
    public:
        Include_Graphic3d_ShaderVariableList_Iterator_h
#endif

    public:
        Iterator(::Graphic3d_ShaderVariableList::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_ShaderVariableList::Iterator>( nativeInstance, true )
        {}

        Iterator(::Graphic3d_ShaderVariableList::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_ShaderVariableList::Iterator>( &nativeInstance, false )
        {}

        property ::Graphic3d_ShaderVariableList::Iterator* NativeInstance
        {
            ::Graphic3d_ShaderVariableList::Iterator* get()
            {
                return static_cast<::Graphic3d_ShaderVariableList::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Graphic3d_ShaderVariable^ Value();
        Macad::Occt::Graphic3d_ShaderVariable^ ChangeValue();
        bool IsEqual(Macad::Occt::Graphic3d_ShaderVariableList::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    Graphic3d_ShaderVariableList();
    Graphic3d_ShaderVariableList(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    int Length();
    int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::Graphic3d_ShaderVariableList^ Assign(Macad::Occt::Graphic3d_ShaderVariableList^ theOther);
    void Remove(Macad::Occt::Graphic3d_ShaderVariableList::Iterator^ thePosition);
    void Append(Macad::Occt::Graphic3d_ShaderVariable^ theItem);
    void Prepend(Macad::Occt::Graphic3d_ShaderVariable^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::Graphic3d_ShaderVariable^ theItem);
    void InsertAfter(Macad::Occt::Graphic3d_ShaderVariableList::Iterator^ thePosition, Macad::Occt::Graphic3d_ShaderVariable^ theItem);
    void Split(int theIndex, Macad::Occt::Graphic3d_ShaderVariableList^ theSeq);
    Macad::Occt::Graphic3d_ShaderVariable^ First();
    Macad::Occt::Graphic3d_ShaderVariable^ ChangeFirst();
    Macad::Occt::Graphic3d_ShaderVariable^ Last();
    Macad::Occt::Graphic3d_ShaderVariable^ ChangeLast();
    virtual Macad::Occt::Graphic3d_ShaderVariable^ Value(int theIndex);
    Macad::Occt::Graphic3d_ShaderVariable^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Graphic3d_ShaderVariable^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Graphic3d_ShaderVariable^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Graphic3d_ShaderVariableList

//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderAttributeList
//---------------------------------------------------------------------
/// <summary>
/// List of custom vertex shader attributes
/// </summary>
public ref class Graphic3d_ShaderAttributeList sealed
    : public Macad::Occt::BaseClass<::Graphic3d_ShaderAttributeList>
    , public IIndexEnumerable<Macad::Occt::Graphic3d_ShaderAttribute^>
{

#ifdef Include_Graphic3d_ShaderAttributeList_h
public:
    Include_Graphic3d_ShaderAttributeList_h
#endif

public:
    Graphic3d_ShaderAttributeList(::Graphic3d_ShaderAttributeList* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_ShaderAttributeList>( nativeInstance, true )
    {}

    Graphic3d_ShaderAttributeList(::Graphic3d_ShaderAttributeList& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_ShaderAttributeList>( &nativeInstance, false )
    {}

    property ::Graphic3d_ShaderAttributeList* NativeInstance
    {
        ::Graphic3d_ShaderAttributeList* get()
        {
            return static_cast<::Graphic3d_ShaderAttributeList*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Graphic3d_ShaderAttributeList::Iterator>
    {

#ifdef Include_Graphic3d_ShaderAttributeList_Iterator_h
    public:
        Include_Graphic3d_ShaderAttributeList_Iterator_h
#endif

    public:
        Iterator(::Graphic3d_ShaderAttributeList::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_ShaderAttributeList::Iterator>( nativeInstance, true )
        {}

        Iterator(::Graphic3d_ShaderAttributeList::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_ShaderAttributeList::Iterator>( &nativeInstance, false )
        {}

        property ::Graphic3d_ShaderAttributeList::Iterator* NativeInstance
        {
            ::Graphic3d_ShaderAttributeList::Iterator* get()
            {
                return static_cast<::Graphic3d_ShaderAttributeList::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Graphic3d_ShaderAttribute^ Value();
        Macad::Occt::Graphic3d_ShaderAttribute^ ChangeValue();
        bool IsEqual(Macad::Occt::Graphic3d_ShaderAttributeList::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    Graphic3d_ShaderAttributeList();
    Graphic3d_ShaderAttributeList(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    int Length();
    int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::Graphic3d_ShaderAttributeList^ Assign(Macad::Occt::Graphic3d_ShaderAttributeList^ theOther);
    void Remove(Macad::Occt::Graphic3d_ShaderAttributeList::Iterator^ thePosition);
    void Append(Macad::Occt::Graphic3d_ShaderAttribute^ theItem);
    void Prepend(Macad::Occt::Graphic3d_ShaderAttribute^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::Graphic3d_ShaderAttribute^ theItem);
    void InsertAfter(Macad::Occt::Graphic3d_ShaderAttributeList::Iterator^ thePosition, Macad::Occt::Graphic3d_ShaderAttribute^ theItem);
    void Split(int theIndex, Macad::Occt::Graphic3d_ShaderAttributeList^ theSeq);
    Macad::Occt::Graphic3d_ShaderAttribute^ First();
    Macad::Occt::Graphic3d_ShaderAttribute^ ChangeFirst();
    Macad::Occt::Graphic3d_ShaderAttribute^ Last();
    Macad::Occt::Graphic3d_ShaderAttribute^ ChangeLast();
    virtual Macad::Occt::Graphic3d_ShaderAttribute^ Value(int theIndex);
    Macad::Occt::Graphic3d_ShaderAttribute^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Graphic3d_ShaderAttribute^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Graphic3d_ShaderAttribute^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Graphic3d_ShaderAttributeList

//---------------------------------------------------------------------
//  Class  Graphic3d_CameraLerp
//---------------------------------------------------------------------
/// <summary>
/// Linear interpolation tool for camera orientation and position.
/// This tool interpolates camera parameters scale, eye, center, rotation (up and direction vectors)
/// independently.
/// </summary>
/// @sa Graphic3d_Camera::Interpolate()
public ref class Graphic3d_CameraLerp sealed
    : public Macad::Occt::BaseClass<::Graphic3d_CameraLerp>
{

#ifdef Include_Graphic3d_CameraLerp_h
public:
    Include_Graphic3d_CameraLerp_h
#endif

public:
    Graphic3d_CameraLerp(::Graphic3d_CameraLerp* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_CameraLerp>( nativeInstance, true )
    {}

    Graphic3d_CameraLerp(::Graphic3d_CameraLerp& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_CameraLerp>( &nativeInstance, false )
    {}

    property ::Graphic3d_CameraLerp* NativeInstance
    {
        ::Graphic3d_CameraLerp* get()
        {
            return static_cast<::Graphic3d_CameraLerp*>(_NativeInstance);
        }
    }

public:
    Graphic3d_CameraLerp();
    Graphic3d_CameraLerp(Macad::Occt::Graphic3d_Camera^ theStart, Macad::Occt::Graphic3d_Camera^ theEnd);
    static Macad::Occt::Graphic3d_Camera^ Interpolate(Macad::Occt::Graphic3d_Camera^ theStart, Macad::Occt::Graphic3d_Camera^ theEnd, double theT);
    void Init(Macad::Occt::Graphic3d_Camera^ theStart, Macad::Occt::Graphic3d_Camera^ theEnd);
}; // class Graphic3d_CameraLerp

//---------------------------------------------------------------------
//  Class  Graphic3d_SequenceOfGroup
//---------------------------------------------------------------------
public ref class Graphic3d_SequenceOfGroup sealed
    : public Macad::Occt::BaseClass<::Graphic3d_SequenceOfGroup>
    , public IIndexEnumerable<Macad::Occt::Graphic3d_Group^>
{

#ifdef Include_Graphic3d_SequenceOfGroup_h
public:
    Include_Graphic3d_SequenceOfGroup_h
#endif

public:
    Graphic3d_SequenceOfGroup(::Graphic3d_SequenceOfGroup* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_SequenceOfGroup>( nativeInstance, true )
    {}

    Graphic3d_SequenceOfGroup(::Graphic3d_SequenceOfGroup& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_SequenceOfGroup>( &nativeInstance, false )
    {}

    property ::Graphic3d_SequenceOfGroup* NativeInstance
    {
        ::Graphic3d_SequenceOfGroup* get()
        {
            return static_cast<::Graphic3d_SequenceOfGroup*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Graphic3d_SequenceOfGroup::Iterator>
    {

#ifdef Include_Graphic3d_SequenceOfGroup_Iterator_h
    public:
        Include_Graphic3d_SequenceOfGroup_Iterator_h
#endif

    public:
        Iterator(::Graphic3d_SequenceOfGroup::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_SequenceOfGroup::Iterator>( nativeInstance, true )
        {}

        Iterator(::Graphic3d_SequenceOfGroup::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_SequenceOfGroup::Iterator>( &nativeInstance, false )
        {}

        property ::Graphic3d_SequenceOfGroup::Iterator* NativeInstance
        {
            ::Graphic3d_SequenceOfGroup::Iterator* get()
            {
                return static_cast<::Graphic3d_SequenceOfGroup::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Graphic3d_Group^ Value();
        Macad::Occt::Graphic3d_Group^ ChangeValue();
        bool IsEqual(Macad::Occt::Graphic3d_SequenceOfGroup::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    Graphic3d_SequenceOfGroup();
    Graphic3d_SequenceOfGroup(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    int Length();
    int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::Graphic3d_SequenceOfGroup^ Assign(Macad::Occt::Graphic3d_SequenceOfGroup^ theOther);
    void Remove(Macad::Occt::Graphic3d_SequenceOfGroup::Iterator^ thePosition);
    void Append(Macad::Occt::Graphic3d_Group^ theItem);
    void Prepend(Macad::Occt::Graphic3d_Group^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::Graphic3d_Group^ theItem);
    void InsertAfter(Macad::Occt::Graphic3d_SequenceOfGroup::Iterator^ thePosition, Macad::Occt::Graphic3d_Group^ theItem);
    void Split(int theIndex, Macad::Occt::Graphic3d_SequenceOfGroup^ theSeq);
    Macad::Occt::Graphic3d_Group^ First();
    Macad::Occt::Graphic3d_Group^ ChangeFirst();
    Macad::Occt::Graphic3d_Group^ Last();
    Macad::Occt::Graphic3d_Group^ ChangeLast();
    virtual Macad::Occt::Graphic3d_Group^ Value(int theIndex);
    Macad::Occt::Graphic3d_Group^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Graphic3d_Group^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Graphic3d_Group^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Graphic3d_SequenceOfGroup

//---------------------------------------------------------------------
//  Class  Graphic3d_MapOfStructure
//---------------------------------------------------------------------
public ref class Graphic3d_MapOfStructure sealed
    : public Macad::Occt::BaseClass<::Graphic3d_MapOfStructure>
{

#ifdef Include_Graphic3d_MapOfStructure_h
public:
    Include_Graphic3d_MapOfStructure_h
#endif

public:
    Graphic3d_MapOfStructure(::Graphic3d_MapOfStructure* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_MapOfStructure>( nativeInstance, true )
    {}

    Graphic3d_MapOfStructure(::Graphic3d_MapOfStructure& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_MapOfStructure>( &nativeInstance, false )
    {}

    property ::Graphic3d_MapOfStructure* NativeInstance
    {
        ::Graphic3d_MapOfStructure* get()
        {
            return static_cast<::Graphic3d_MapOfStructure*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Graphic3d_MapOfStructure::Iterator>
    {

#ifdef Include_Graphic3d_MapOfStructure_Iterator_h
    public:
        Include_Graphic3d_MapOfStructure_Iterator_h
#endif

    public:
        Iterator(::Graphic3d_MapOfStructure::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_MapOfStructure::Iterator>( nativeInstance, true )
        {}

        Iterator(::Graphic3d_MapOfStructure::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_MapOfStructure::Iterator>( &nativeInstance, false )
        {}

        property ::Graphic3d_MapOfStructure::Iterator* NativeInstance
        {
            ::Graphic3d_MapOfStructure::Iterator* get()
            {
                return static_cast<::Graphic3d_MapOfStructure::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Graphic3d_Structure^ Value();
        Macad::Occt::Graphic3d_Structure^ Key();
    }; // class Iterator

    Graphic3d_MapOfStructure();
    Graphic3d_MapOfStructure(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    Graphic3d_MapOfStructure(int theNbBuckets);
    void Exchange(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
    Macad::Occt::Graphic3d_MapOfStructure^ Assign(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
    void ReSize(int N);
    bool Add(Macad::Occt::Graphic3d_Structure^ theKey);
    Macad::Occt::Graphic3d_Structure^ Added(Macad::Occt::Graphic3d_Structure^ theKey);
    bool Contains(Macad::Occt::Graphic3d_Structure^ theKey);
    bool Remove(Macad::Occt::Graphic3d_Structure^ K);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
    bool IsEqual(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
    void Union(Macad::Occt::Graphic3d_MapOfStructure^ theLeft, Macad::Occt::Graphic3d_MapOfStructure^ theRight);
    bool Unite(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
    bool HasIntersection(Macad::Occt::Graphic3d_MapOfStructure^ theMap);
    void Intersection(Macad::Occt::Graphic3d_MapOfStructure^ theLeft, Macad::Occt::Graphic3d_MapOfStructure^ theRight);
    bool Intersect(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
    void Subtraction(Macad::Occt::Graphic3d_MapOfStructure^ theLeft, Macad::Occt::Graphic3d_MapOfStructure^ theRight);
    bool Subtract(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
    void Difference(Macad::Occt::Graphic3d_MapOfStructure^ theLeft, Macad::Occt::Graphic3d_MapOfStructure^ theRight);
    bool Differ(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
    bool Equals(System::Object^ obj) override;
}; // class Graphic3d_MapOfStructure

//---------------------------------------------------------------------
//  Class  Graphic3d_SequenceOfStructure
//---------------------------------------------------------------------
public ref class Graphic3d_SequenceOfStructure sealed
    : public Macad::Occt::BaseClass<::Graphic3d_SequenceOfStructure>
    , public IIndexEnumerable<Macad::Occt::Graphic3d_Structure^>
{

#ifdef Include_Graphic3d_SequenceOfStructure_h
public:
    Include_Graphic3d_SequenceOfStructure_h
#endif

public:
    Graphic3d_SequenceOfStructure(::Graphic3d_SequenceOfStructure* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_SequenceOfStructure>( nativeInstance, true )
    {}

    Graphic3d_SequenceOfStructure(::Graphic3d_SequenceOfStructure& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_SequenceOfStructure>( &nativeInstance, false )
    {}

    property ::Graphic3d_SequenceOfStructure* NativeInstance
    {
        ::Graphic3d_SequenceOfStructure* get()
        {
            return static_cast<::Graphic3d_SequenceOfStructure*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Graphic3d_SequenceOfStructure::Iterator>
    {

#ifdef Include_Graphic3d_SequenceOfStructure_Iterator_h
    public:
        Include_Graphic3d_SequenceOfStructure_Iterator_h
#endif

    public:
        Iterator(::Graphic3d_SequenceOfStructure::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_SequenceOfStructure::Iterator>( nativeInstance, true )
        {}

        Iterator(::Graphic3d_SequenceOfStructure::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_SequenceOfStructure::Iterator>( &nativeInstance, false )
        {}

        property ::Graphic3d_SequenceOfStructure::Iterator* NativeInstance
        {
            ::Graphic3d_SequenceOfStructure::Iterator* get()
            {
                return static_cast<::Graphic3d_SequenceOfStructure::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Graphic3d_Structure^ Value();
        Macad::Occt::Graphic3d_Structure^ ChangeValue();
        bool IsEqual(Macad::Occt::Graphic3d_SequenceOfStructure::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    Graphic3d_SequenceOfStructure();
    Graphic3d_SequenceOfStructure(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    int Length();
    int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::Graphic3d_SequenceOfStructure^ Assign(Macad::Occt::Graphic3d_SequenceOfStructure^ theOther);
    void Remove(Macad::Occt::Graphic3d_SequenceOfStructure::Iterator^ thePosition);
    void Append(Macad::Occt::Graphic3d_Structure^ theItem);
    void Prepend(Macad::Occt::Graphic3d_Structure^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::Graphic3d_Structure^ theItem);
    void InsertAfter(Macad::Occt::Graphic3d_SequenceOfStructure::Iterator^ thePosition, Macad::Occt::Graphic3d_Structure^ theItem);
    void Split(int theIndex, Macad::Occt::Graphic3d_SequenceOfStructure^ theSeq);
    Macad::Occt::Graphic3d_Structure^ First();
    Macad::Occt::Graphic3d_Structure^ ChangeFirst();
    Macad::Occt::Graphic3d_Structure^ Last();
    Macad::Occt::Graphic3d_Structure^ ChangeLast();
    virtual Macad::Occt::Graphic3d_Structure^ Value(int theIndex);
    Macad::Occt::Graphic3d_Structure^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Graphic3d_Structure^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Graphic3d_Structure^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Graphic3d_SequenceOfStructure

//---------------------------------------------------------------------
//  Class  Graphic3d_GraphicDriverFactoryList
//---------------------------------------------------------------------
public ref class Graphic3d_GraphicDriverFactoryList sealed
    : public Macad::Occt::NCollection_BaseList
{

#ifdef Include_Graphic3d_GraphicDriverFactoryList_h
public:
    Include_Graphic3d_GraphicDriverFactoryList_h
#endif

public:
    Graphic3d_GraphicDriverFactoryList(::Graphic3d_GraphicDriverFactoryList* nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    Graphic3d_GraphicDriverFactoryList(::Graphic3d_GraphicDriverFactoryList& nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    property ::Graphic3d_GraphicDriverFactoryList* NativeInstance
    {
        ::Graphic3d_GraphicDriverFactoryList* get()
        {
            return static_cast<::Graphic3d_GraphicDriverFactoryList*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Graphic3d_GraphicDriverFactoryList::Iterator>
    {

#ifdef Include_Graphic3d_GraphicDriverFactoryList_Iterator_h
    public:
        Include_Graphic3d_GraphicDriverFactoryList_Iterator_h
#endif

    public:
        Iterator(::Graphic3d_GraphicDriverFactoryList::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_GraphicDriverFactoryList::Iterator>( nativeInstance, true )
        {}

        Iterator(::Graphic3d_GraphicDriverFactoryList::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_GraphicDriverFactoryList::Iterator>( &nativeInstance, false )
        {}

        property ::Graphic3d_GraphicDriverFactoryList::Iterator* NativeInstance
        {
            ::Graphic3d_GraphicDriverFactoryList::Iterator* get()
            {
                return static_cast<::Graphic3d_GraphicDriverFactoryList::Iterator*>(_NativeInstance);
            }
        }

    public:
        bool More();
        void Next();
        Macad::Occt::Graphic3d_GraphicDriverFactory^ Value();
        Macad::Occt::Graphic3d_GraphicDriverFactory^ ChangeValue();
    }; // class Iterator

    Graphic3d_GraphicDriverFactoryList();
    Graphic3d_GraphicDriverFactoryList(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    Macad::Occt::Graphic3d_GraphicDriverFactoryList^ Assign(Macad::Occt::Graphic3d_GraphicDriverFactoryList^ theOther);
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::Graphic3d_GraphicDriverFactory^ First();
    Macad::Occt::Graphic3d_GraphicDriverFactory^ Last();
    Macad::Occt::Graphic3d_GraphicDriverFactory^ Append(Macad::Occt::Graphic3d_GraphicDriverFactory^ theItem);
    Macad::Occt::Graphic3d_GraphicDriverFactory^ Prepend(Macad::Occt::Graphic3d_GraphicDriverFactory^ theItem);
    void RemoveFirst();
    void Remove(Macad::Occt::Graphic3d_GraphicDriverFactoryList::Iterator^ theIter);
    Macad::Occt::Graphic3d_GraphicDriverFactory^ InsertBefore(Macad::Occt::Graphic3d_GraphicDriverFactory^ theItem, Macad::Occt::Graphic3d_GraphicDriverFactoryList::Iterator^ theIter);
    Macad::Occt::Graphic3d_GraphicDriverFactory^ InsertAfter(Macad::Occt::Graphic3d_GraphicDriverFactory^ theItem, Macad::Occt::Graphic3d_GraphicDriverFactoryList::Iterator^ theIter);
    void Reverse();
}; // class Graphic3d_GraphicDriverFactoryList

//---------------------------------------------------------------------
//  Class  Graphic3d_IndexedMapOfStructure
//---------------------------------------------------------------------
/// <summary>
/// Defines index map of structures.
/// </summary>
public ref class Graphic3d_IndexedMapOfStructure sealed
    : public Macad::Occt::BaseClass<::Graphic3d_IndexedMapOfStructure>
{

#ifdef Include_Graphic3d_IndexedMapOfStructure_h
public:
    Include_Graphic3d_IndexedMapOfStructure_h
#endif

public:
    Graphic3d_IndexedMapOfStructure(::Graphic3d_IndexedMapOfStructure* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_IndexedMapOfStructure>( nativeInstance, true )
    {}

    Graphic3d_IndexedMapOfStructure(::Graphic3d_IndexedMapOfStructure& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_IndexedMapOfStructure>( &nativeInstance, false )
    {}

    property ::Graphic3d_IndexedMapOfStructure* NativeInstance
    {
        ::Graphic3d_IndexedMapOfStructure* get()
        {
            return static_cast<::Graphic3d_IndexedMapOfStructure*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Graphic3d_IndexedMapOfStructure::Iterator>
    {

#ifdef Include_Graphic3d_IndexedMapOfStructure_Iterator_h
    public:
        Include_Graphic3d_IndexedMapOfStructure_Iterator_h
#endif

    public:
        Iterator(::Graphic3d_IndexedMapOfStructure::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_IndexedMapOfStructure::Iterator>( nativeInstance, true )
        {}

        Iterator(::Graphic3d_IndexedMapOfStructure::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_IndexedMapOfStructure::Iterator>( &nativeInstance, false )
        {}

        property ::Graphic3d_IndexedMapOfStructure::Iterator* NativeInstance
        {
            ::Graphic3d_IndexedMapOfStructure::Iterator* get()
            {
                return static_cast<::Graphic3d_IndexedMapOfStructure::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Graphic3d_CStructure^ Value();
        bool IsEqual(Macad::Occt::Graphic3d_IndexedMapOfStructure::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    Graphic3d_IndexedMapOfStructure();
    Graphic3d_IndexedMapOfStructure(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    Graphic3d_IndexedMapOfStructure(int theNbBuckets);
    void Exchange(Macad::Occt::Graphic3d_IndexedMapOfStructure^ theOther);
    Macad::Occt::Graphic3d_IndexedMapOfStructure^ Assign(Macad::Occt::Graphic3d_IndexedMapOfStructure^ theOther);
    void ReSize(int theExtent);
    int Add(Macad::Occt::Graphic3d_CStructure^ theKey1);
    bool Contains(Macad::Occt::Graphic3d_CStructure^ theKey1);
    void Substitute(int theIndex, Macad::Occt::Graphic3d_CStructure^ theKey1);
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    bool RemoveKey(Macad::Occt::Graphic3d_CStructure^ theKey1);
    Macad::Occt::Graphic3d_CStructure^ FindKey(int theIndex);
    int FindIndex(Macad::Occt::Graphic3d_CStructure^ theKey1);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class Graphic3d_IndexedMapOfStructure

//---------------------------------------------------------------------
//  Class  Graphic3d_MapOfObject
//---------------------------------------------------------------------
public ref class Graphic3d_MapOfObject sealed
    : public Macad::Occt::BaseClass<::Graphic3d_MapOfObject>
{

#ifdef Include_Graphic3d_MapOfObject_h
public:
    Include_Graphic3d_MapOfObject_h
#endif

public:
    Graphic3d_MapOfObject(::Graphic3d_MapOfObject* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_MapOfObject>( nativeInstance, true )
    {}

    Graphic3d_MapOfObject(::Graphic3d_MapOfObject& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_MapOfObject>( &nativeInstance, false )
    {}

    property ::Graphic3d_MapOfObject* NativeInstance
    {
        ::Graphic3d_MapOfObject* get()
        {
            return static_cast<::Graphic3d_MapOfObject*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Graphic3d_MapOfObject::Iterator>
    {

#ifdef Include_Graphic3d_MapOfObject_Iterator_h
    public:
        Include_Graphic3d_MapOfObject_Iterator_h
#endif

    public:
        Iterator(::Graphic3d_MapOfObject::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_MapOfObject::Iterator>( nativeInstance, true )
        {}

        Iterator(::Graphic3d_MapOfObject::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_MapOfObject::Iterator>( &nativeInstance, false )
        {}

        property ::Graphic3d_MapOfObject::Iterator* NativeInstance
        {
            ::Graphic3d_MapOfObject::Iterator* get()
            {
                return static_cast<::Graphic3d_MapOfObject::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Graphic3d_ViewAffinity^ Value();
        Macad::Occt::Graphic3d_ViewAffinity^ ChangeValue();
        Macad::Occt::Standard_Transient^ Key();
    }; // class Iterator

    Graphic3d_MapOfObject();
    Graphic3d_MapOfObject(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    Graphic3d_MapOfObject(int theNbBuckets);
    void Exchange(Macad::Occt::Graphic3d_MapOfObject^ theOther);
    Macad::Occt::Graphic3d_MapOfObject^ Assign(Macad::Occt::Graphic3d_MapOfObject^ theOther);
    void ReSize(int N);
    bool Bind(Macad::Occt::Standard_Transient^ theKey, Macad::Occt::Graphic3d_ViewAffinity^ theItem);
    Macad::Occt::Graphic3d_ViewAffinity^ Bound(Macad::Occt::Standard_Transient^ theKey, Macad::Occt::Graphic3d_ViewAffinity^ theItem);
    bool IsBound(Macad::Occt::Standard_Transient^ theKey);
    bool UnBind(Macad::Occt::Standard_Transient^ theKey);
    Macad::Occt::Graphic3d_ViewAffinity^ Seek(Macad::Occt::Standard_Transient^ theKey);
    Macad::Occt::Graphic3d_ViewAffinity^ Find(Macad::Occt::Standard_Transient^ theKey);
    Macad::Occt::Graphic3d_ViewAffinity^ ChangeSeek(Macad::Occt::Standard_Transient^ theKey);
    Macad::Occt::Graphic3d_ViewAffinity^ ChangeFind(Macad::Occt::Standard_Transient^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class Graphic3d_MapOfObject

//---------------------------------------------------------------------
//  Class  Graphic3d_IndexedMapOfView
//---------------------------------------------------------------------
public ref class Graphic3d_IndexedMapOfView sealed
    : public Macad::Occt::BaseClass<::Graphic3d_IndexedMapOfView>
{

#ifdef Include_Graphic3d_IndexedMapOfView_h
public:
    Include_Graphic3d_IndexedMapOfView_h
#endif

public:
    Graphic3d_IndexedMapOfView(::Graphic3d_IndexedMapOfView* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_IndexedMapOfView>( nativeInstance, true )
    {}

    Graphic3d_IndexedMapOfView(::Graphic3d_IndexedMapOfView& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_IndexedMapOfView>( &nativeInstance, false )
    {}

    property ::Graphic3d_IndexedMapOfView* NativeInstance
    {
        ::Graphic3d_IndexedMapOfView* get()
        {
            return static_cast<::Graphic3d_IndexedMapOfView*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Graphic3d_IndexedMapOfView::Iterator>
    {

#ifdef Include_Graphic3d_IndexedMapOfView_Iterator_h
    public:
        Include_Graphic3d_IndexedMapOfView_Iterator_h
#endif

    public:
        Iterator(::Graphic3d_IndexedMapOfView::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_IndexedMapOfView::Iterator>( nativeInstance, true )
        {}

        Iterator(::Graphic3d_IndexedMapOfView::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_IndexedMapOfView::Iterator>( &nativeInstance, false )
        {}

        property ::Graphic3d_IndexedMapOfView::Iterator* NativeInstance
        {
            ::Graphic3d_IndexedMapOfView::Iterator* get()
            {
                return static_cast<::Graphic3d_IndexedMapOfView::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Graphic3d_IndexedMapOfView();
    Graphic3d_IndexedMapOfView(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    Graphic3d_IndexedMapOfView(int theNbBuckets);
    void Exchange(Macad::Occt::Graphic3d_IndexedMapOfView^ theOther);
    Macad::Occt::Graphic3d_IndexedMapOfView^ Assign(Macad::Occt::Graphic3d_IndexedMapOfView^ theOther);
    void ReSize(int theExtent);
    int Add(Macad::Occt::Graphic3d_CView^ theKey1);
    bool Contains(Macad::Occt::Graphic3d_CView^ theKey1);
    void Substitute(int theIndex, Macad::Occt::Graphic3d_CView^ theKey1);
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    bool RemoveKey(Macad::Occt::Graphic3d_CView^ theKey1);
    Macad::Occt::Graphic3d_CView^ FindKey(int theIndex);
    int FindIndex(Macad::Occt::Graphic3d_CView^ theKey1);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class Graphic3d_IndexedMapOfView

//---------------------------------------------------------------------
//  Class  Graphic3d_BufferRange
//---------------------------------------------------------------------
/// <summary>
/// Range of values defined as Start + Length pair.
/// </summary>
public ref class Graphic3d_BufferRange sealed
    : public Macad::Occt::BaseClass<::Graphic3d_BufferRange>
{

#ifdef Include_Graphic3d_BufferRange_h
public:
    Include_Graphic3d_BufferRange_h
#endif

public:
    Graphic3d_BufferRange(::Graphic3d_BufferRange* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_BufferRange>( nativeInstance, true )
    {}

    Graphic3d_BufferRange(::Graphic3d_BufferRange& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_BufferRange>( &nativeInstance, false )
    {}

    property ::Graphic3d_BufferRange* NativeInstance
    {
        ::Graphic3d_BufferRange* get()
        {
            return static_cast<::Graphic3d_BufferRange*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// < first element within the range
    /// </summary>
    property int Start {
        int get() {
            return ((::Graphic3d_BufferRange*)_NativeInstance)->Start;
        }
        void set(int value) {
            ((::Graphic3d_BufferRange*)_NativeInstance)->Start = value;
        }
    }

    /// <summary>
    /// < number of elements within the range
    /// </summary>
    property int Length {
        int get() {
            return ((::Graphic3d_BufferRange*)_NativeInstance)->Length;
        }
        void set(int value) {
            ((::Graphic3d_BufferRange*)_NativeInstance)->Length = value;
        }
    }

    /// <summary>
    /// Empty constructor.
    /// </summary>
    Graphic3d_BufferRange();
    /// <summary>
    /// Constructor.
    /// </summary>
    Graphic3d_BufferRange(int theStart, int theLength);
    /// <summary>
    /// Return TRUE if range is empty.
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// Return the Upper element within the range
    /// </summary>
    int Upper();
    /// <summary>
    /// Clear the range.
    /// </summary>
    void Clear();
    /// <summary>
    /// Add another range to this one.
    /// </summary>
    void Unite(Macad::Occt::Graphic3d_BufferRange^ theRange);
}; // class Graphic3d_BufferRange

//---------------------------------------------------------------------
//  Class  Graphic3d_Attribute
//---------------------------------------------------------------------
/// <summary>
/// Vertex attribute definition.
/// </summary>
public ref class Graphic3d_Attribute sealed
    : public Macad::Occt::BaseClass<::Graphic3d_Attribute>
{

#ifdef Include_Graphic3d_Attribute_h
public:
    Include_Graphic3d_Attribute_h
#endif

public:
    Graphic3d_Attribute(::Graphic3d_Attribute* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Attribute>( nativeInstance, true )
    {}

    Graphic3d_Attribute(::Graphic3d_Attribute& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Attribute>( &nativeInstance, false )
    {}

    property ::Graphic3d_Attribute* NativeInstance
    {
        ::Graphic3d_Attribute* get()
        {
            return static_cast<::Graphic3d_Attribute*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// < attribute identifier in vertex shader, 0 is reserved for vertex position
    /// </summary>
    property Macad::Occt::Graphic3d_TypeOfAttribute Id {
        Macad::Occt::Graphic3d_TypeOfAttribute get() {
            return (Macad::Occt::Graphic3d_TypeOfAttribute)(((::Graphic3d_Attribute*)_NativeInstance)->Id);
        }
        void set(Macad::Occt::Graphic3d_TypeOfAttribute value) {
            ((::Graphic3d_Attribute*)_NativeInstance)->Id = (::Graphic3d_TypeOfAttribute)value;
        }
    }

    /// <summary>
    /// < vec2,vec3,vec4,vec4ub
    /// </summary>
    property Macad::Occt::Graphic3d_TypeOfData DataType {
        Macad::Occt::Graphic3d_TypeOfData get() {
            return (Macad::Occt::Graphic3d_TypeOfData)(((::Graphic3d_Attribute*)_NativeInstance)->DataType);
        }
        void set(Macad::Occt::Graphic3d_TypeOfData value) {
            ((::Graphic3d_Attribute*)_NativeInstance)->DataType = (::Graphic3d_TypeOfData)value;
        }
    }

    Graphic3d_Attribute();
    int Stride();
    /// <summary>
    /// </summary>
    /// <returns>
    /// size of attribute of specified data type
    /// </returns>
    static int Stride(Macad::Occt::Graphic3d_TypeOfData theType);
}; // class Graphic3d_Attribute

//---------------------------------------------------------------------
//  Class  Graphic3d_PolygonOffset
//---------------------------------------------------------------------
/// <summary>
/// Polygon offset parameters.
/// </summary>
public ref class Graphic3d_PolygonOffset sealed
    : public Macad::Occt::BaseClass<::Graphic3d_PolygonOffset>
{

#ifdef Include_Graphic3d_PolygonOffset_h
public:
    Include_Graphic3d_PolygonOffset_h
#endif

public:
    Graphic3d_PolygonOffset(::Graphic3d_PolygonOffset* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_PolygonOffset>( nativeInstance, true )
    {}

    Graphic3d_PolygonOffset(::Graphic3d_PolygonOffset& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_PolygonOffset>( &nativeInstance, false )
    {}

    property ::Graphic3d_PolygonOffset* NativeInstance
    {
        ::Graphic3d_PolygonOffset* get()
        {
            return static_cast<::Graphic3d_PolygonOffset*>(_NativeInstance);
        }
    }

public:
    property Macad::Occt::Aspect_PolygonOffsetMode Mode {
        Macad::Occt::Aspect_PolygonOffsetMode get() {
            return (Macad::Occt::Aspect_PolygonOffsetMode)(((::Graphic3d_PolygonOffset*)_NativeInstance)->Mode);
        }
        void set(Macad::Occt::Aspect_PolygonOffsetMode value) {
            ((::Graphic3d_PolygonOffset*)_NativeInstance)->Mode = (::Aspect_PolygonOffsetMode)value;
        }
    }

    property float Factor {
        float get() {
            return ((::Graphic3d_PolygonOffset*)_NativeInstance)->Factor;
        }
        void set(float value) {
            ((::Graphic3d_PolygonOffset*)_NativeInstance)->Factor = value;
        }
    }

    property float Units {
        float get() {
            return ((::Graphic3d_PolygonOffset*)_NativeInstance)->Units;
        }
        void set(float value) {
            ((::Graphic3d_PolygonOffset*)_NativeInstance)->Units = value;
        }
    }

    /// <summary>
    /// Empty constructor.
    /// </summary>
    Graphic3d_PolygonOffset();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
}; // class Graphic3d_PolygonOffset

//---------------------------------------------------------------------
//  Class  Graphic3d_ValueInterface
//---------------------------------------------------------------------
/// <summary>
/// Interface for generic variable value.
/// </summary>
public ref class Graphic3d_ValueInterface
    : public Macad::Occt::BaseClass<::Graphic3d_ValueInterface>
{

#ifdef Include_Graphic3d_ValueInterface_h
public:
    Include_Graphic3d_ValueInterface_h
#endif

public:
    Graphic3d_ValueInterface(::Graphic3d_ValueInterface* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_ValueInterface>( nativeInstance, true )
    {}

    Graphic3d_ValueInterface(::Graphic3d_ValueInterface& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_ValueInterface>( &nativeInstance, false )
    {}

    property ::Graphic3d_ValueInterface* NativeInstance
    {
        ::Graphic3d_ValueInterface* get()
        {
            return static_cast<::Graphic3d_ValueInterface*>(_NativeInstance);
        }
    }

public:
    Graphic3d_ValueInterface();
    /// <summary>
    /// Returns unique identifier of value type.
    /// </summary>
    long long unsigned int TypeID();
}; // class Graphic3d_ValueInterface

//---------------------------------------------------------------------
//  Class  Graphic3d_ZLayerSettings
//---------------------------------------------------------------------
/// <summary>
/// Structure defines list of ZLayer properties.
/// </summary>
public ref class Graphic3d_ZLayerSettings sealed
    : public Macad::Occt::BaseClass<::Graphic3d_ZLayerSettings>
{

#ifdef Include_Graphic3d_ZLayerSettings_h
public:
    Include_Graphic3d_ZLayerSettings_h
#endif

public:
    Graphic3d_ZLayerSettings(::Graphic3d_ZLayerSettings* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_ZLayerSettings>( nativeInstance, true )
    {}

    Graphic3d_ZLayerSettings(::Graphic3d_ZLayerSettings& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_ZLayerSettings>( &nativeInstance, false )
    {}

    property ::Graphic3d_ZLayerSettings* NativeInstance
    {
        ::Graphic3d_ZLayerSettings* get()
        {
            return static_cast<::Graphic3d_ZLayerSettings*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Default settings.
    /// </summary>
    Graphic3d_ZLayerSettings();
    /// <summary>
    /// Return user-provided name.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ Name();
    /// <summary>
    /// Set custom name.
    /// </summary>
    void SetName(Macad::Occt::TCollection_AsciiString^ theName);
    /// <summary>
    /// Return lights list to be used for rendering presentations within this Z-Layer; NULL by
    /// default. NULL list (but not empty list!) means that default lights assigned to the View should
    /// be used instead of per-layer lights.
    /// </summary>
    Macad::Occt::Graphic3d_LightSet^ Lights();
    /// <summary>
    /// Assign lights list to be used.
    /// </summary>
    void SetLights(Macad::Occt::Graphic3d_LightSet^ theLights);
    /// <summary>
    /// Return the origin of all objects within the layer.
    /// </summary>
    Macad::Occt::XYZ Origin();
    /// <summary>
    /// Return the transformation to the origin.
    /// </summary>
    Macad::Occt::TopLoc_Datum3D^ OriginTransformation();
    /// <summary>
    /// Set the origin of all objects within the layer.
    /// </summary>
    void SetOrigin(Macad::Occt::XYZ theOrigin);
    /// <summary>
    /// Return TRUE, if culling of distant objects (distance culling) should be performed; FALSE by
    /// default.
    /// </summary>
    /// @sa CullingDistance()
    bool HasCullingDistance();
    /// <summary>
    /// Return the distance to discard drawing of distant objects (distance from camera Eye point); by
    /// default it is Infinite (distance culling is disabled). Since camera eye definition has no
    /// strong meaning within orthographic projection, option is considered only within perspective
    /// projection. Note also that this option has effect only when frustum culling is enabled.
    /// </summary>
    double CullingDistance();
    /// <summary>
    /// Set the distance to discard drawing objects.
    /// </summary>
    void SetCullingDistance(double theDistance);
    /// <summary>
    /// Return TRUE, if culling of small objects (size culling) should be performed; FALSE by default.
    /// </summary>
    /// @sa CullingSize()
    bool HasCullingSize();
    /// <summary>
    /// Return the size to discard drawing of small objects; by default it is Infinite (size culling
    /// is disabled). Current implementation checks the length of projected diagonal of bounding box
    /// in pixels for discarding. Note that this option has effect only when frustum culling is
    /// enabled.
    /// </summary>
    double CullingSize();
    /// <summary>
    /// Set the distance to discard drawing objects.
    /// </summary>
    void SetCullingSize(double theSize);
    /// <summary>
    /// Return true if this layer should be drawn after all normal (non-immediate) layers.
    /// </summary>
    bool IsImmediate();
    /// <summary>
    /// Set the flag indicating the immediate layer, which should be drawn after all normal
    /// (non-immediate) layers.
    /// </summary>
    void SetImmediate(bool theValue);
    /// <summary>
    /// Returns TRUE if layer should be processed by ray-tracing renderer; TRUE by default.
    /// Note that this flag is IGNORED for layers with IsImmediate() flag.
    /// </summary>
    bool IsRaytracable();
    /// <summary>
    /// Sets if layer should be processed by ray-tracing renderer.
    /// </summary>
    void SetRaytracable(bool theToRaytrace);
    /// <summary>
    /// Return flag to allow/prevent environment texture mapping usage for specific layer.
    /// </summary>
    bool UseEnvironmentTexture();
    /// <summary>
    /// Set the flag to allow/prevent environment texture mapping usage for specific layer.
    /// </summary>
    void SetEnvironmentTexture(bool theValue);
    /// <summary>
    /// Return true if depth test should be enabled.
    /// </summary>
    bool ToEnableDepthTest();
    /// <summary>
    /// Set if depth test should be enabled.
    /// </summary>
    void SetEnableDepthTest(bool theValue);
    /// <summary>
    /// Return true depth values should be written during rendering.
    /// </summary>
    bool ToEnableDepthWrite();
    /// <summary>
    /// Set if depth values should be written during rendering.
    /// </summary>
    void SetEnableDepthWrite(bool theValue);
    /// <summary>
    /// Return true if depth values should be cleared before drawing the layer.
    /// </summary>
    bool ToClearDepth();
    /// <summary>
    /// Set if depth values should be cleared before drawing the layer.
    /// </summary>
    void SetClearDepth(bool theValue);
    /// <summary>
    /// Return TRUE if layer should be rendered within depth pre-pass; TRUE by default.
    /// </summary>
    bool ToRenderInDepthPrepass();
    /// <summary>
    /// Set if layer should be rendered within depth pre-pass.
    /// </summary>
    void SetRenderInDepthPrepass(bool theToRender);
    /// <summary>
    /// Return glPolygonOffset() arguments.
    /// </summary>
    Macad::Occt::Graphic3d_PolygonOffset^ PolygonOffset();
    /// <summary>
    /// Setup glPolygonOffset() arguments.
    /// </summary>
    void SetPolygonOffset(Macad::Occt::Graphic3d_PolygonOffset^ theParams);
    /// <summary>
    /// Modify glPolygonOffset() arguments.
    /// </summary>
    Macad::Occt::Graphic3d_PolygonOffset^ ChangePolygonOffset();
    /// <summary>
    /// Sets minimal possible positive depth offset.
    /// </summary>
    void SetDepthOffsetPositive();
    /// <summary>
    /// Sets minimal possible negative depth offset.
    /// </summary>
    void SetDepthOffsetNegative();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
}; // class Graphic3d_ZLayerSettings

//---------------------------------------------------------------------
//  Class  Graphic3d_BoundBuffer
//---------------------------------------------------------------------
/// <summary>
/// Bounds buffer.
/// </summary>
public ref class Graphic3d_BoundBuffer sealed
    : public Macad::Occt::NCollection_Buffer
{

#ifdef Include_Graphic3d_BoundBuffer_h
public:
    Include_Graphic3d_BoundBuffer_h
#endif

public:
    Graphic3d_BoundBuffer(::Graphic3d_BoundBuffer* nativeInstance)
        : Macad::Occt::NCollection_Buffer( nativeInstance )
    {}

    Graphic3d_BoundBuffer(::Graphic3d_BoundBuffer& nativeInstance)
        : Macad::Occt::NCollection_Buffer( nativeInstance )
    {}

    property ::Graphic3d_BoundBuffer* NativeInstance
    {
        ::Graphic3d_BoundBuffer* get()
        {
            return static_cast<::Graphic3d_BoundBuffer*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// < number of bounds
    /// </summary>
    property int NbBounds {
        int get() {
            return ((::Graphic3d_BoundBuffer*)_NativeInstance)->NbBounds;
        }
        void set(int value) {
            ((::Graphic3d_BoundBuffer*)_NativeInstance)->NbBounds = value;
        }
    }

    /// <summary>
    /// < number of allocated bounds
    /// </summary>
    property int NbMaxBounds {
        int get() {
            return ((::Graphic3d_BoundBuffer*)_NativeInstance)->NbMaxBounds;
        }
        void set(int value) {
            ((::Graphic3d_BoundBuffer*)_NativeInstance)->NbMaxBounds = value;
        }
    }

    /// <summary>
    /// Empty constructor.
    /// </summary>
    Graphic3d_BoundBuffer(Macad::Occt::NCollection_BaseAllocator^ theAlloc);
    /// <summary>
    /// Allocates new empty array
    /// </summary>
    bool Init(int theNbBounds, bool theHasColors);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Graphic3d_BoundBuffer^ CreateDowncasted(::Graphic3d_BoundBuffer* instance);
}; // class Graphic3d_BoundBuffer

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfPrimitives
//---------------------------------------------------------------------
/// <summary>
/// This class furnish services to defined and fill an array of primitives
/// which can be passed directly to graphics rendering API.
/// 
/// The basic interface consists of the following parts:
/// 1) Specifying primitive type.
/// WARNING! Particular primitive types might be unsupported by specific hardware/graphics API
/// (like quads and polygons).
/// It is always preferred using one of basic types having maximum compatibility:
/// Point, Triangle (or Triangle strip), Segment aka Lines (or Polyline aka Line Strip).
/// Primitive strip types can be used to reduce memory usage as alternative to Indexed arrays.
/// 2) Vertex array.
/// - Specifying the (maximum) number of vertexes within array.
/// - Specifying the vertex attributes, complementary to mandatory vertex Position (normal,
/// color, UV texture coordinates).
/// - Defining vertex values by using various versions of AddVertex() or SetVertex*() methods.
/// 3) Index array (optional).
/// - Specifying the (maximum) number of indexes (edges).
/// - Defining index values by using AddEdge() method; the index value should be within number of
/// defined Vertexes.
/// 
/// Indexed array allows sharing vertex data across Primitives and thus reducing memory usage,
/// since index size is much smaller then size of vertex with all its attributes.
/// It is a preferred way for defining primitive array and main alternative to Primitive Strips
/// for optimal memory usage, although it is also possible (but unusual) defining Indexed
/// Primitive Strip. Note that it is NOT possible sharing Vertex Attributes partially (e.g. share
/// Position, but have different Normals); in such cases Vertex should be entirely duplicated
/// with all Attributes.
/// 4) Bounds array (optional).
/// - Specifying the (maximum) number of bounds.
/// - Defining bounds using AddBound() methods.
/// 
/// Bounds allow splitting Primitive Array into sub-groups.
/// This is useful only in two cases - for specifying per-group color and for restarting
/// Primitive Strips. WARNING! Bounds within Primitive Array break rendering batches into parts
/// (additional for loops),
/// affecting rendering performance negatively (increasing CPU load).
/// </summary>
public ref class Graphic3d_ArrayOfPrimitives
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_ArrayOfPrimitives_h
public:
    Include_Graphic3d_ArrayOfPrimitives_h
#endif

protected:
    Graphic3d_ArrayOfPrimitives(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    Graphic3d_ArrayOfPrimitives(::Graphic3d_ArrayOfPrimitives* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_ArrayOfPrimitives(::Graphic3d_ArrayOfPrimitives& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_ArrayOfPrimitives* NativeInstance
    {
        ::Graphic3d_ArrayOfPrimitives* get()
        {
            return static_cast<::Graphic3d_ArrayOfPrimitives*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Create an array of specified type.
    /// </summary>
    static Macad::Occt::Graphic3d_ArrayOfPrimitives^ CreateArray(Macad::Occt::Graphic3d_TypeOfPrimitiveArray theType, int theMaxVertexs, int theMaxEdges, int theArrayFlags);
    /// <summary>
    /// Create an array of specified type.
    /// </summary>
    static Macad::Occt::Graphic3d_ArrayOfPrimitives^ CreateArray(Macad::Occt::Graphic3d_TypeOfPrimitiveArray theType, int theMaxVertexs, int theMaxBounds, int theMaxEdges, int theArrayFlags);
    /* Method skipped due to unknown mapping: Graphic3d_Buffer Attributes() */
    /// <summary>
    /// Returns the type of this primitive
    /// </summary>
    Macad::Occt::Graphic3d_TypeOfPrimitiveArray Type();
    /// <summary>
    /// Returns the string type of this primitive
    /// </summary>
    System::String^ StringType();
    /// <summary>
    /// Returns TRUE when vertex normals array is defined.
    /// </summary>
    bool HasVertexNormals();
    /// <summary>
    /// Returns TRUE when vertex colors array is defined.
    /// </summary>
    bool HasVertexColors();
    /// <summary>
    /// Returns TRUE when vertex texels array is defined.
    /// </summary>
    bool HasVertexTexels();
    /// <summary>
    /// Returns the number of defined vertex
    /// </summary>
    int VertexNumber();
    /// <summary>
    /// Returns the number of allocated vertex
    /// </summary>
    int VertexNumberAllocated();
    /// <summary>
    /// Returns the number of total items according to the array type.
    /// </summary>
    int ItemNumber();
    /// <summary>
    /// Returns TRUE only when the contains of this array is available.
    /// </summary>
    bool IsValid();
    /// <summary>
    /// Adds a vertice in the array.
    /// </summary>
    /// <returns>
    /// the actual vertex number
    /// </returns>
    int AddVertex(Macad::Occt::Pnt theVertex);
    /// <summary>
    /// Adds a vertice in the array.
    /// </summary>
    /// <returns>
    /// the actual vertex number
    /// </returns>
    int AddVertex(Macad::Occt::Graphic3d_Vec3^ theVertex);
    /// <summary>
    /// Adds a vertice in the array.
    /// </summary>
    /// <returns>
    /// the actual vertex number
    /// </returns>
    int AddVertex(double theX, double theY, double theZ);
    /// <summary>
    /// Adds a vertice in the array.
    /// </summary>
    /// <returns>
    /// the actual vertex number.
    /// </returns>
    int AddVertex(float theX, float theY, float theZ);
    /// <summary>
    /// Adds a vertice and vertex color in the vertex array.
    /// Warning: theColor is ignored when the hasVColors constructor parameter is FALSE
    /// </summary>
    /// <returns>
    /// the actual vertex number
    /// </returns>
    int AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Adds a vertice and vertex color in the vertex array.
    /// Warning: theColor is ignored when the hasVColors constructor parameter is FALSE
    /// </summary>
    /// @code
    /// theColor32 = Alpha << 24 + Blue << 16 + Green << 8 + Red
    /// @endcode
    /// <returns>
    /// the actual vertex number
    /// </returns>
    int AddVertex(Macad::Occt::Pnt theVertex, int theColor32);
    /// <summary>
    /// Adds a vertice and vertex color in the vertex array.
    /// Warning: theColor is ignored when the hasVColors constructor parameter is FALSE
    /// </summary>
    /// <returns>
    /// the actual vertex number
    /// </returns>
    int AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Graphic3d_Vec4ub^ theColor);
    /// <summary>
    /// Adds a vertice and vertex normal in the vertex array.
    /// Warning: theNormal is ignored when the hasVNormals constructor parameter is FALSE.
    /// </summary>
    /// <returns>
    /// the actual vertex number
    /// </returns>
    int AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Dir theNormal);
    /// <summary>
    /// Adds a vertice and vertex normal in the vertex array.
    /// Warning: Normal is ignored when the hasVNormals constructor parameter is FALSE.
    /// </summary>
    /// <returns>
    /// the actual vertex number
    /// </returns>
    int AddVertex(double theX, double theY, double theZ, double theNX, double theNY, double theNZ);
    /// <summary>
    /// Adds a vertice and vertex normal in the vertex array.
    /// Warning: Normal is ignored when the hasVNormals constructor parameter is FALSE.
    /// </summary>
    /// <returns>
    /// the actual vertex number
    /// </returns>
    int AddVertex(float theX, float theY, float theZ, float theNX, float theNY, float theNZ);
    /// <summary>
    /// Adds a vertice,vertex normal and color in the vertex array.
    /// Warning: theNormal is ignored when the hasVNormals constructor parameter is FALSE
    /// and      theColor  is ignored when the hasVColors  constructor parameter is FALSE.
    /// </summary>
    /// <returns>
    /// the actual vertex number
    /// </returns>
    int AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Dir theNormal, Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Adds a vertice,vertex normal and color in the vertex array.
    /// Warning: theNormal is ignored when the hasVNormals constructor parameter is FALSE
    /// and      theColor  is ignored when the hasVColors  constructor parameter is FALSE.
    /// </summary>
    /// @code
    /// theColor32 = Alpha << 24 + Blue << 16 + Green << 8 + Red
    /// @endcode
    /// <returns>
    /// the actual vertex number
    /// </returns>
    int AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Dir theNormal, int theColor32);
    /// <summary>
    /// Adds a vertice and vertex texture in the vertex array.
    /// theTexel is ignored when the hasVTexels constructor parameter is FALSE.
    /// </summary>
    /// <returns>
    /// the actual vertex number
    /// </returns>
    int AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Pnt2d theTexel);
    /// <summary>
    /// Adds a vertice and vertex texture coordinates in the vertex array.
    /// Texel is ignored when the hasVTexels constructor parameter is FALSE.
    /// </summary>
    /// <returns>
    /// the actual vertex number
    /// </returns>
    int AddVertex(double theX, double theY, double theZ, double theTX, double theTY);
    /// <summary>
    /// Adds a vertice and vertex texture coordinates in the vertex array.
    /// Texel is ignored when the hasVTexels constructor parameter is FALSE.
    /// </summary>
    /// <returns>
    /// the actual vertex number
    /// </returns>
    int AddVertex(float theX, float theY, float theZ, float theTX, float theTY);
    /// <summary>
    /// Adds a vertice,vertex normal and texture in the vertex array.
    /// Warning: theNormal is ignored when the hasVNormals constructor parameter is FALSE
    /// and      theTexel  is ignored when the hasVTexels  constructor parameter is FALSE.
    /// </summary>
    /// <returns>
    /// the actual vertex number
    /// </returns>
    int AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Dir theNormal, Macad::Occt::Pnt2d theTexel);
    /// <summary>
    /// Adds a vertice,vertex normal and texture in the vertex array.
    /// Warning: Normal is ignored when the hasVNormals constructor parameter is FALSE
    /// and      Texel  is ignored when the hasVTexels  constructor parameter is FALSE.
    /// </summary>
    /// <returns>
    /// the actual vertex number
    /// </returns>
    int AddVertex(double theX, double theY, double theZ, double theNX, double theNY, double theNZ, double theTX, double theTY);
    /// <summary>
    /// Adds a vertice,vertex normal and texture in the vertex array.
    /// Warning: Normal is ignored when the hasVNormals constructor parameter is FALSE
    /// and  Texel  is ignored when the hasVTexels  constructor parameter is FALSE.
    /// </summary>
    /// <returns>
    /// the actual vertex number
    /// </returns>
    int AddVertex(float theX, float theY, float theZ, float theNX, float theNY, float theNZ, float theTX, float theTY);
    /// <summary>
    /// Change the vertice of rank theIndex in the array.
    /// </summary>
    /// <param name="in]">
    /// theIndex  node index within [1, VertexNumberAllocated()] range
    /// </param>
    /// <param name="in]">
    /// theVertex 3D coordinates
    /// </param>
    void SetVertice(int theIndex, Macad::Occt::Pnt theVertex);
    /// <summary>
    /// Change the vertice in the array.
    /// </summary>
    /// <param name="in]">
    /// theIndex node index within [1, VertexNumberAllocated()] range
    /// </param>
    /// <param name="in]">
    /// theX coordinate X
    /// </param>
    /// <param name="in]">
    /// theY coordinate Y
    /// </param>
    /// <param name="in]">
    /// theZ coordinate Z
    /// </param>
    void SetVertice(int theIndex, float theX, float theY, float theZ);
    /// <summary>
    /// Change the vertex color in the array.
    /// </summary>
    /// <param name="in]">
    /// theIndex node index within [1, VertexNumberAllocated()] range
    /// </param>
    /// <param name="in]">
    /// theColor node color
    /// </param>
    void SetVertexColor(int theIndex, Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Change the vertex color in the array.
    /// </summary>
    /// <param name="in]">
    /// theIndex node index within [1, VertexNumberAllocated()] range
    /// </param>
    /// <param name="in]">
    /// theR red   color value within [0, 1] range
    /// </param>
    /// <param name="in]">
    /// theG green color value within [0, 1] range
    /// </param>
    /// <param name="in]">
    /// theB blue  color value within [0, 1] range
    /// </param>
    void SetVertexColor(int theIndex, double theR, double theG, double theB);
    /// <summary>
    /// Change the vertex color in the array.
    /// </summary>
    /// <param name="in]">
    /// theIndex node index within [1, VertexNumberAllocated()] range
    /// </param>
    /// <param name="in]">
    /// theColor node RGBA color values within [0, 255] range
    /// </param>
    void SetVertexColor(int theIndex, Macad::Occt::Graphic3d_Vec4ub^ theColor);
    /// <summary>
    /// Change the vertex color in the array.
    /// </summary>
    /// @code
    /// theColor32 = Alpha << 24 + Blue << 16 + Green << 8 + Red
    /// @endcode
    /// <param name="in]">
    /// theIndex   node index within [1, VertexNumberAllocated()] range
    /// </param>
    /// <param name="in]">
    /// theColor32 packed RGBA color values
    /// </param>
    void SetVertexColor(int theIndex, int theColor32);
    /// <summary>
    /// Change the vertex normal in the array.
    /// </summary>
    /// <param name="in]">
    /// theIndex  node index within [1, VertexNumberAllocated()] range
    /// </param>
    /// <param name="in]">
    /// theNormal normalized surface normal
    /// </param>
    void SetVertexNormal(int theIndex, Macad::Occt::Dir theNormal);
    /// <summary>
    /// Change the vertex normal in the array.
    /// </summary>
    /// <param name="in]">
    /// theIndex node index within [1, VertexNumberAllocated()] range
    /// </param>
    /// <param name="in]">
    /// theNX surface normal X component
    /// </param>
    /// <param name="in]">
    /// theNY surface normal Y component
    /// </param>
    /// <param name="in]">
    /// theNZ surface normal Z component
    /// </param>
    void SetVertexNormal(int theIndex, double theNX, double theNY, double theNZ);
    /// <summary>
    /// Change the vertex texel in the array.
    /// </summary>
    /// <param name="in]">
    /// theIndex node index within [1, VertexNumberAllocated()] range
    /// </param>
    /// <param name="in]">
    /// theTexel node UV coordinates
    /// </param>
    void SetVertexTexel(int theIndex, Macad::Occt::Pnt2d theTexel);
    /// <summary>
    /// Change the vertex texel in the array.
    /// </summary>
    /// <param name="in]">
    /// theIndex node index within [1, VertexNumberAllocated()] range
    /// </param>
    /// <param name="in]">
    /// theTX node U coordinate
    /// </param>
    /// <param name="in]">
    /// theTY node V coordinate
    /// </param>
    void SetVertexTexel(int theIndex, double theTX, double theTY);
    /// <summary>
    /// Returns the vertice from the vertex table if defined.
    /// </summary>
    /// <param name="in]">
    /// theRank node index within [1, VertexNumber()] range
    /// </param>
    /// <returns>
    /// node 3D coordinates
    /// </returns>
    Macad::Occt::Pnt Vertice(int theRank);
    /// <summary>
    /// Returns the vertice coordinates at rank theRank from the vertex table if defined.
    /// </summary>
    /// <param name="in]">
    ///  theRank node index within [1, VertexNumber()] range
    /// </param>
    /// <param name="out]">
    /// theX node X coordinate value
    /// </param>
    /// <param name="out]">
    /// theY node Y coordinate value
    /// </param>
    /// <param name="out]">
    /// theZ node Z coordinate value
    /// </param>
    void Vertice(int theRank, double% theX, double% theY, double% theZ);
    /// <summary>
    /// Returns the vertex color at rank theRank from the vertex table if defined.
    /// </summary>
    /// <param name="in]">
    /// theRank node index within [1, VertexNumber()] range
    /// </param>
    /// <returns>
    /// node color RGB value
    /// </returns>
    Macad::Occt::Quantity_Color^ VertexColor(int theRank);
    /// <summary>
    /// Returns the vertex color from the vertex table if defined.
    /// </summary>
    /// <param name="in]">
    ///  theIndex node index within [1, VertexNumber()] range
    /// </param>
    /// <param name="out]">
    /// theColor node RGBA color values within [0, 255] range
    /// </param>
    void VertexColor(int theIndex, Macad::Occt::Graphic3d_Vec4ub^ theColor);
    /// <summary>
    /// Returns the vertex color values from the vertex table if defined.
    /// </summary>
    /// <param name="in]">
    ///  theRank node index within [1, VertexNumber()] range
    /// </param>
    /// <param name="out]">
    /// theR node red   color component value within [0, 1] range
    /// </param>
    /// <param name="out]">
    /// theG node green color component value within [0, 1] range
    /// </param>
    /// <param name="out]">
    /// theB node blue  color component value within [0, 1] range
    /// </param>
    void VertexColor(int theRank, double% theR, double% theG, double% theB);
    /// <summary>
    /// Returns the vertex color values from the vertex table if defined.
    /// </summary>
    /// <param name="in]">
    ///  theRank  node index within [1, VertexNumber()] range
    /// </param>
    /// <param name="out]">
    /// theColor node RGBA color packed into 32-bit integer
    /// </param>
    void VertexColor(int theRank, int% theColor);
    /// <summary>
    /// Returns the vertex normal from the vertex table if defined.
    /// </summary>
    /// <param name="in]">
    /// theRank node index within [1, VertexNumber()] range
    /// </param>
    /// <returns>
    /// normalized 3D vector defining surface normal
    /// </returns>
    Macad::Occt::Dir VertexNormal(int theRank);
    /// <summary>
    /// Returns the vertex normal coordinates at rank theRank from the vertex table if defined.
    /// </summary>
    /// <param name="in]">
    ///  theRank node index within [1, VertexNumber()] range
    /// </param>
    /// <param name="out]">
    /// theNX   normal X coordinate
    /// </param>
    /// <param name="out]">
    /// theNY   normal Y coordinate
    /// </param>
    /// <param name="out]">
    /// theNZ   normal Z coordinate
    /// </param>
    void VertexNormal(int theRank, double% theNX, double% theNY, double% theNZ);
    /// <summary>
    /// Returns the vertex texture at rank theRank from the vertex table if defined.
    /// </summary>
    /// <param name="in]">
    /// theRank node index within [1, VertexNumber()] range
    /// </param>
    /// <returns>
    /// UV coordinates
    /// </returns>
    Macad::Occt::Pnt2d VertexTexel(int theRank);
    /// <summary>
    /// Returns the vertex texture coordinates at rank theRank from the vertex table if defined.
    /// </summary>
    /// <param name="in]">
    ///  theRank node index within [1, VertexNumber()] range
    /// </param>
    /// <param name="out]">
    /// theTX texel U coordinate value
    /// </param>
    /// <param name="out]">
    /// theTY texel V coordinate value
    /// </param>
    void VertexTexel(int theRank, double% theTX, double% theTY);
    /* Method skipped due to unknown mapping: Graphic3d_IndexBuffer Indices() */
    /// <summary>
    /// Returns the number of defined edges
    /// </summary>
    int EdgeNumber();
    /// <summary>
    /// Returns the number of allocated edges
    /// </summary>
    int EdgeNumberAllocated();
    /// <summary>
    /// Returns the vertex index at rank theRank in the range [1,EdgeNumber()]
    /// </summary>
    int Edge(int theRank);
    /// <summary>
    /// Adds an edge in the range [1,VertexNumber()] in the array.
    /// </summary>
    /// <returns>
    /// the actual edges number
    /// </returns>
    int AddEdge(int theVertexIndex);
    /// <summary>
    /// Convenience method, adds two vertex indices (a segment) in the range [1,VertexNumber()] in the
    /// array.
    /// </summary>
    /// <returns>
    /// the actual edges number
    /// </returns>
    int AddEdges(int theVertexIndex1, int theVertexIndex2);
    /// <summary>
    /// Convenience method, adds two vertex indices (a segment) in the range [1,VertexNumber()] in the
    /// array of segments (Graphic3d_TOPA_SEGMENTS). Raises exception if array is not of type
    /// Graphic3d_TOPA_SEGMENTS.
    /// </summary>
    /// <returns>
    /// the actual edges number
    /// </returns>
    int AddSegmentEdges(int theVertexIndex1, int theVertexIndex2);
    /// <summary>
    /// Convenience method, adds three vertex indices (a triangle) in the range [1,VertexNumber()] in
    /// the array.
    /// </summary>
    /// <returns>
    /// the actual edges number
    /// </returns>
    int AddEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3);
    /// <summary>
    /// Convenience method, adds three vertex indices of triangle in the range [1,VertexNumber()] in
    /// the array of triangles. Raises exception if array is not of type Graphic3d_TOPA_TRIANGLES.
    /// </summary>
    /// <returns>
    /// the actual edges number
    /// </returns>
    int AddTriangleEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3);
    /// <summary>
    /// Convenience method, adds three vertex indices of triangle in the range [1,VertexNumber()] in
    /// the array of triangles. Raises exception if array is not of type Graphic3d_TOPA_TRIANGLES.
    /// </summary>
    /// <returns>
    /// the actual edges number
    /// </returns>
    int AddTriangleEdges(Macad::Occt::Graphic3d_Vec3i^ theIndexes);
    /// <summary>
    /// Convenience method, adds three vertex indices (4th component is ignored) of triangle in the
    /// range [1,VertexNumber()] in the array of triangles. Raises exception if array is not of type
    /// Graphic3d_TOPA_TRIANGLES.
    /// </summary>
    /// <returns>
    /// the actual edges number
    /// </returns>
    int AddTriangleEdges(Macad::Occt::Graphic3d_Vec4i^ theIndexes);
    /// <summary>
    /// Convenience method, adds four vertex indices (a quad) in the range [1,VertexNumber()] in the
    /// array.
    /// </summary>
    /// <returns>
    /// the actual edges number
    /// </returns>
    int AddEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3, int theVertexIndex4);
    /// <summary>
    /// Convenience method, adds four vertex indices (a quad) in the range [1,VertexNumber()] in the
    /// array of quads. Raises exception if array is not of type Graphic3d_TOPA_QUADRANGLES.
    /// </summary>
    /// <returns>
    /// the actual edges number
    /// </returns>
    int AddQuadEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3, int theVertexIndex4);
    /// <summary>
    /// Convenience method, adds quad indices in the range [1,VertexNumber()] into array or triangles
    /// as two triangles. Raises exception if array is not of type Graphic3d_TOPA_TRIANGLES.
    /// </summary>
    /// <returns>
    /// the actual edges number
    /// </returns>
    int AddQuadTriangleEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3, int theVertexIndex4);
    /// <summary>
    /// Convenience method, adds quad indices in the range [1,VertexNumber()] into array or triangles
    /// as two triangles. Raises exception if array is not of type Graphic3d_TOPA_TRIANGLES.
    /// </summary>
    /// <returns>
    /// the actual edges number
    /// </returns>
    int AddQuadTriangleEdges(Macad::Occt::Graphic3d_Vec4i^ theIndexes);
    /// <summary>
    /// Add triangle strip into indexed triangulation array.
    /// N-2 triangles are added from N input nodes.
    /// Raises exception if array is not of type Graphic3d_TOPA_TRIANGLES.
    /// </summary>
    /// <param name="in]">
    /// theVertexLower  index of first node defining triangle strip
    /// </param>
    /// <param name="in]">
    /// theVertexUpper  index of last  node defining triangle strip
    /// </param>
    void AddTriangleStripEdges(int theVertexLower, int theVertexUpper);
    /// <summary>
    /// Add triangle fan into indexed triangulation array.
    /// N-2 triangles are added from N input nodes (or N-1 with closed flag).
    /// Raises exception if array is not of type Graphic3d_TOPA_TRIANGLES.
    /// </summary>
    /// <param name="in]">
    /// theVertexLower  index of first node defining triangle fun (center)
    /// </param>
    /// <param name="in]">
    /// theVertexUpper  index of last  node defining triangle fun
    /// </param>
    /// <param name="in]">
    /// theToClose  close triangle fan (connect first and last points)
    /// </param>
    void AddTriangleFanEdges(int theVertexLower, int theVertexUpper, bool theToClose);
    /// <summary>
    /// Add line strip (polyline) into indexed segments array.
    /// N-1 segments are added from N input nodes (or N with closed flag).
    /// Raises exception if array is not of type Graphic3d_TOPA_SEGMENTS.
    /// </summary>
    /// <param name="in]">
    /// theVertexLower  index of first node defining line strip fun (center)
    /// </param>
    /// <param name="in]">
    /// theVertexUpper  index of last  node defining triangle fun
    /// </param>
    /// <param name="in]">
    /// theToClose  close triangle fan (connect first and last points)
    /// </param>
    void AddPolylineEdges(int theVertexLower, int theVertexUpper, bool theToClose);
    /// <summary>
    /// </summary>
    /// @name optional array of Bounds/Subgroups within primitive array (e.g. restarting
    /// primitives / assigning colors)
    /// Returns optional bounds buffer.
    Macad::Occt::Graphic3d_BoundBuffer^ Bounds();
    /// <summary>
    /// Returns TRUE when bound colors array is defined.
    /// </summary>
    bool HasBoundColors();
    /// <summary>
    /// Returns the number of defined bounds
    /// </summary>
    int BoundNumber();
    /// <summary>
    /// Returns the number of allocated bounds
    /// </summary>
    int BoundNumberAllocated();
    /// <summary>
    /// Returns the edge number at rank theRank.
    /// </summary>
    int Bound(int theRank);
    /// <summary>
    /// Returns the bound color at rank theRank from the bound table if defined.
    /// </summary>
    Macad::Occt::Quantity_Color^ BoundColor(int theRank);
    /// <summary>
    /// Returns the bound color values at rank theRank from the bound table if defined.
    /// </summary>
    void BoundColor(int theRank, double% theR, double% theG, double% theB);
    /// <summary>
    /// Adds a bound of length theEdgeNumber in the bound array
    /// </summary>
    /// <returns>
    /// the actual bounds number
    /// </returns>
    int AddBound(int theEdgeNumber);
    /// <summary>
    /// Adds a bound of length theEdgeNumber and bound color theBColor in the bound array.
    /// Warning: theBColor is ignored when the hasBColors constructor parameter is FALSE
    /// </summary>
    /// <returns>
    /// the actual bounds number
    /// </returns>
    int AddBound(int theEdgeNumber, Macad::Occt::Quantity_Color^ theBColor);
    /// <summary>
    /// Adds a bound of length theEdgeNumber and bound color coordinates in the bound array.
    /// Warning: <theR,theG,theB> are ignored when the hasBColors constructor parameter is FALSE
    /// </summary>
    /// <returns>
    /// the actual bounds number
    /// </returns>
    int AddBound(int theEdgeNumber, double theR, double theG, double theB);
    /// <summary>
    /// Change the bound color of rank theIndex in the array.
    /// </summary>
    void SetBoundColor(int theIndex, Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Change the bound color of rank theIndex in the array.
    /// </summary>
    void SetBoundColor(int theIndex, double theR, double theG, double theB);
    static Macad::Occt::Graphic3d_ArrayOfPrimitives^ CreateDowncasted(::Graphic3d_ArrayOfPrimitives* instance);
}; // class Graphic3d_ArrayOfPrimitives

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfPoints
//---------------------------------------------------------------------
/// <summary>
/// Contains points array definition.
/// </summary>
public ref class Graphic3d_ArrayOfPoints sealed
    : public Macad::Occt::Graphic3d_ArrayOfPrimitives
{

#ifdef Include_Graphic3d_ArrayOfPoints_h
public:
    Include_Graphic3d_ArrayOfPoints_h
#endif

public:
    Graphic3d_ArrayOfPoints(::Graphic3d_ArrayOfPoints* nativeInstance)
        : Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
    {}

    Graphic3d_ArrayOfPoints(::Graphic3d_ArrayOfPoints& nativeInstance)
        : Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
    {}

    property ::Graphic3d_ArrayOfPoints* NativeInstance
    {
        ::Graphic3d_ArrayOfPoints* get()
        {
            return static_cast<::Graphic3d_ArrayOfPoints*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an array of points (Graphic3d_TOPA_POINTS).
    /// The array must be filled using the AddVertex(Point) method.
    /// </summary>
    /// <param name="theMaxVertexs">
    /// maximum number of points
    /// </param>
    /// <param name="theArrayFlags">
    /// array flags
    /// </param>
    Graphic3d_ArrayOfPoints(int theMaxVertexs, int theArrayFlags);
    /// <summary>
    /// Creates an array of points (Graphic3d_TOPA_POINTS).
    /// The array must be filled using the AddVertex(Point) method.
    /// </summary>
    /// <param name="theMaxVertexs">
    ///  maximum number of points
    /// </param>
    /// <param name="theHasVColors">
    ///  when TRUE, AddVertex(Point,Color)  should be used for specifying vertex
    /// color
    /// </param>
    /// <param name="theHasVNormals">
    /// when TRUE, AddVertex(Point,Normal) should be used for specifying vertex
    /// normal
    /// </param>
    Graphic3d_ArrayOfPoints(int theMaxVertexs, bool theHasVColors, bool theHasVNormals);
    /// <summary>
    /// Creates an array of points (Graphic3d_TOPA_POINTS).
    /// The array must be filled using the AddVertex(Point) method.
    /// </summary>
    /// <param name="theMaxVertexs">
    ///  maximum number of points
    /// </param>
    /// <param name="theHasVColors">
    ///  when TRUE, AddVertex(Point,Color)  should be used for specifying vertex
    /// color
    /// </param>
    /// <param name="theHasVNormals">
    /// when TRUE, AddVertex(Point,Normal) should be used for specifying vertex
    /// normal
    /// </param>
    Graphic3d_ArrayOfPoints(int theMaxVertexs, bool theHasVColors);
    /// <summary>
    /// Creates an array of points (Graphic3d_TOPA_POINTS).
    /// The array must be filled using the AddVertex(Point) method.
    /// </summary>
    /// <param name="theMaxVertexs">
    ///  maximum number of points
    /// </param>
    /// <param name="theHasVColors">
    ///  when TRUE, AddVertex(Point,Color)  should be used for specifying vertex
    /// color
    /// </param>
    /// <param name="theHasVNormals">
    /// when TRUE, AddVertex(Point,Normal) should be used for specifying vertex
    /// normal
    /// </param>
    Graphic3d_ArrayOfPoints(int theMaxVertexs);
    static Macad::Occt::Graphic3d_ArrayOfPoints^ CreateDowncasted(::Graphic3d_ArrayOfPoints* instance);
}; // class Graphic3d_ArrayOfPoints

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfPolygons
//---------------------------------------------------------------------
/// <summary>
/// Contains polygons array definition.
/// WARNING! Polygon primitives might be unsupported by graphics library.
/// Triangulation should be used instead of quads for better compatibility.
/// </summary>
public ref class Graphic3d_ArrayOfPolygons sealed
    : public Macad::Occt::Graphic3d_ArrayOfPrimitives
{

#ifdef Include_Graphic3d_ArrayOfPolygons_h
public:
    Include_Graphic3d_ArrayOfPolygons_h
#endif

public:
    Graphic3d_ArrayOfPolygons(::Graphic3d_ArrayOfPolygons* nativeInstance)
        : Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
    {}

    Graphic3d_ArrayOfPolygons(::Graphic3d_ArrayOfPolygons& nativeInstance)
        : Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
    {}

    property ::Graphic3d_ArrayOfPolygons* NativeInstance
    {
        ::Graphic3d_ArrayOfPolygons* get()
        {
            return static_cast<::Graphic3d_ArrayOfPolygons*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an array of polygons (Graphic3d_TOPA_POLYGONS), a polygon can be filled as:
    /// 1) Creating a single polygon defined with his vertexes, i.e:
    /// </summary>
    /// @code
    /// myArray = Graphic3d_ArrayOfPolygons (7);
    /// myArray->AddVertex (x1, y1, z1);
    /// ....
    /// myArray->AddVertex (x7, y7, z7);
    /// @endcode
    /// 2) Creating separate polygons defined with a predefined number of bounds and the number of
    /// vertex per bound, i.e:
    /// @code
    /// myArray = Graphic3d_ArrayOfPolygons (7, 2);
    /// myArray->AddBound (4);
    /// myArray->AddVertex (x1, y1, z1);
    /// ....
    /// myArray->AddVertex (x4, y4, z4);
    /// myArray->AddBound (3);
    /// myArray->AddVertex (x5, y5, z5);
    /// ....
    /// myArray->AddVertex (x7, y7, z7);
    /// @endcode
    /// 3) Creating a single indexed polygon defined with his vertex ans edges, i.e:
    /// @code
    /// myArray = Graphic3d_ArrayOfPolygons (4, 0, 6);
    /// myArray->AddVertex (x1, y1, z1);
    /// ....
    /// myArray->AddVertex (x4, y4, z4);
    /// myArray->AddEdge (1);
    /// myArray->AddEdge (2);
    /// myArray->AddEdge (3);
    /// myArray->AddEdge (1);
    /// myArray->AddEdge (2);
    /// myArray->AddEdge (4);
    /// @endcode
    /// 4) Creating separate polygons defined with a predefined number of bounds and the number of
    /// edges per bound, i.e:
    /// @code
    /// myArray = Graphic3d_ArrayOfPolygons (6, 4, 14);
    /// myArray->AddBound (3);
    /// myArray->AddVertex (x1, y1, z1);
    /// myArray->AddVertex (x2, y2, z2);
    /// myArray->AddVertex (x3, y3, z3);
    /// myArray->AddEdge (1);
    /// myArray->AddEdge (2);
    /// myArray->AddEdge (3);
    /// myArray->AddBound (3);
    /// myArray->AddVertex (x4, y4, z4);
    /// myArray->AddVertex (x5, y5, z5);
    /// myArray->AddVertex (x6, y6, z6);
    /// myArray->AddEdge (4);
    /// myArray->AddEdge (5);
    /// myArray->AddEdge (6);
    /// myArray->AddBound (4);
    /// myArray->AddEdge (2);
    /// myArray->AddEdge (3);
    /// myArray->AddEdge (5);
    /// myArray->AddEdge (6);
    /// myArray->AddBound (4);
    /// myArray->AddEdge (1);
    /// myArray->AddEdge (3);
    /// myArray->AddEdge (5);
    /// myArray->AddEdge (4);
    /// @endcode
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxBounds">
    ///  defines the maximum allowed bound  number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array
    /// </param>
    /// <param name="theArrayFlags">
    /// array flags
    /// </param>
    Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges, int theArrayFlags);
    /// <summary>
    /// Creates an array of polygons (Graphic3d_TOPA_POLYGONS):
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxBounds">
    ///  defines the maximum allowed bound  number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array
    /// </param>
    Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVNormals, bool theHasVColors, bool theHasBColors, bool theHasVTexels);
    /// <summary>
    /// Creates an array of polygons (Graphic3d_TOPA_POLYGONS):
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxBounds">
    ///  defines the maximum allowed bound  number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array
    /// </param>
    Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVNormals, bool theHasVColors, bool theHasBColors);
    /// <summary>
    /// Creates an array of polygons (Graphic3d_TOPA_POLYGONS):
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxBounds">
    ///  defines the maximum allowed bound  number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array
    /// </param>
    Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVNormals, bool theHasVColors);
    /// <summary>
    /// Creates an array of polygons (Graphic3d_TOPA_POLYGONS):
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxBounds">
    ///  defines the maximum allowed bound  number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array
    /// </param>
    Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVNormals);
    /// <summary>
    /// Creates an array of polygons (Graphic3d_TOPA_POLYGONS):
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxBounds">
    ///  defines the maximum allowed bound  number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array
    /// </param>
    Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges);
    /// <summary>
    /// Creates an array of polygons (Graphic3d_TOPA_POLYGONS):
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxBounds">
    ///  defines the maximum allowed bound  number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array
    /// </param>
    Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds);
    /// <summary>
    /// Creates an array of polygons (Graphic3d_TOPA_POLYGONS):
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxBounds">
    ///  defines the maximum allowed bound  number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array
    /// </param>
    Graphic3d_ArrayOfPolygons(int theMaxVertexs);
    static Macad::Occt::Graphic3d_ArrayOfPolygons^ CreateDowncasted(::Graphic3d_ArrayOfPolygons* instance);
}; // class Graphic3d_ArrayOfPolygons

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfPolylines
//---------------------------------------------------------------------
/// <summary>
/// Contains polylines array definition.
/// </summary>
public ref class Graphic3d_ArrayOfPolylines sealed
    : public Macad::Occt::Graphic3d_ArrayOfPrimitives
{

#ifdef Include_Graphic3d_ArrayOfPolylines_h
public:
    Include_Graphic3d_ArrayOfPolylines_h
#endif

public:
    Graphic3d_ArrayOfPolylines(::Graphic3d_ArrayOfPolylines* nativeInstance)
        : Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
    {}

    Graphic3d_ArrayOfPolylines(::Graphic3d_ArrayOfPolylines& nativeInstance)
        : Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
    {}

    property ::Graphic3d_ArrayOfPolylines* NativeInstance
    {
        ::Graphic3d_ArrayOfPolylines* get()
        {
            return static_cast<::Graphic3d_ArrayOfPolylines*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an array of polylines (Graphic3d_TOPA_POLYLINES), a polyline can be filled as:
    /// 1) Creating a single polyline defined with his vertexes, i.e:
    /// </summary>
    /// @code
    /// myArray = Graphic3d_ArrayOfPolylines (7);
    /// myArray->AddVertex (x1, y1, z1);
    /// ....
    /// myArray->AddVertex (x7, y7, z7);
    /// @endcode
    /// 2) Creating separate polylines defined with a predefined number of bounds and the number of
    /// vertex per bound, i.e:
    /// @code
    /// myArray = Graphic3d_ArrayOfPolylines (7, 2);
    /// myArray->AddBound (4);
    /// myArray->AddVertex (x1, y1, z1);
    /// ....
    /// myArray->AddVertex (x4, y4, z4);
    /// myArray->AddBound (3);
    /// myArray->AddVertex (x5, y5, z5);
    /// ....
    /// myArray->AddVertex (x7, y7, z7);
    /// @endcode
    /// 3) Creating a single indexed polyline defined with his vertex and edges, i.e:
    /// @code
    /// myArray = Graphic3d_ArrayOfPolylines (4, 0, 6);
    /// myArray->AddVertex (x1, y1, z1);
    /// ....
    /// myArray->AddVertex (x4, y4, z4);
    /// myArray->AddEdge (1);
    /// myArray->AddEdge (2);
    /// myArray->AddEdge (3);
    /// myArray->AddEdge (1);
    /// myArray->AddEdge (2);
    /// myArray->AddEdge (4);
    /// @endcode
    /// 4) creating separate polylines defined with a predefined number of bounds and the number of
    /// edges per bound, i.e:
    /// @code
    /// myArray = Graphic3d_ArrayOfPolylines (6, 4, 14);
    /// myArray->AddBound (3);
    /// myArray->AddVertex (x1, y1, z1);
    /// myArray->AddVertex (x2, y2, z2);
    /// myArray->AddVertex (x3, y3, z3);
    /// myArray->AddEdge (1);
    /// myArray->AddEdge (2);
    /// myArray->AddEdge (3);
    /// myArray->AddBound (3);
    /// myArray->AddVertex (x4, y4, z4);
    /// myArray->AddVertex (x5, y5, z5);
    /// myArray->AddVertex (x6, y6, z6);
    /// myArray->AddEdge (4);
    /// myArray->AddEdge (5);
    /// myArray->AddEdge (6);
    /// myArray->AddBound (4);
    /// myArray->AddEdge (2);
    /// myArray->AddEdge (3);
    /// myArray->AddEdge (5);
    /// myArray->AddEdge (6);
    /// myArray->AddBound (4);
    /// myArray->AddEdge (1);
    /// myArray->AddEdge (3);
    /// myArray->AddEdge (5);
    /// myArray->AddEdge (4);
    /// @endcode
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxBounds">
    ///  defines the maximum allowed bound  number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array
    /// </param>
    /// <param name="theArrayFlags">
    /// array flags
    /// </param>
    Graphic3d_ArrayOfPolylines(int theMaxVertexs, int theMaxBounds, int theMaxEdges, int theArrayFlags);
    /// <summary>
    /// Creates an array of polylines (Graphic3d_TOPA_POLYLINES).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxBounds">
    ///  defines the maximum allowed bound  number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array
    /// </param>
    /// <param name="theHasVColors">
    /// when TRUE AddVertex(Point,Color) or AddVertex(Point,Normal,Color) should
    /// be used to specify per-vertex color values
    /// </param>
    /// <param name="theHasBColors">
    /// when TRUE AddBound(number,Color) should be used to specify sub-group
    /// color
    /// </param>
    Graphic3d_ArrayOfPolylines(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVColors, bool theHasBColors);
    /// <summary>
    /// Creates an array of polylines (Graphic3d_TOPA_POLYLINES).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxBounds">
    ///  defines the maximum allowed bound  number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array
    /// </param>
    /// <param name="theHasVColors">
    /// when TRUE AddVertex(Point,Color) or AddVertex(Point,Normal,Color) should
    /// be used to specify per-vertex color values
    /// </param>
    /// <param name="theHasBColors">
    /// when TRUE AddBound(number,Color) should be used to specify sub-group
    /// color
    /// </param>
    Graphic3d_ArrayOfPolylines(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVColors);
    /// <summary>
    /// Creates an array of polylines (Graphic3d_TOPA_POLYLINES).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxBounds">
    ///  defines the maximum allowed bound  number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array
    /// </param>
    /// <param name="theHasVColors">
    /// when TRUE AddVertex(Point,Color) or AddVertex(Point,Normal,Color) should
    /// be used to specify per-vertex color values
    /// </param>
    /// <param name="theHasBColors">
    /// when TRUE AddBound(number,Color) should be used to specify sub-group
    /// color
    /// </param>
    Graphic3d_ArrayOfPolylines(int theMaxVertexs, int theMaxBounds, int theMaxEdges);
    /// <summary>
    /// Creates an array of polylines (Graphic3d_TOPA_POLYLINES).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxBounds">
    ///  defines the maximum allowed bound  number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array
    /// </param>
    /// <param name="theHasVColors">
    /// when TRUE AddVertex(Point,Color) or AddVertex(Point,Normal,Color) should
    /// be used to specify per-vertex color values
    /// </param>
    /// <param name="theHasBColors">
    /// when TRUE AddBound(number,Color) should be used to specify sub-group
    /// color
    /// </param>
    Graphic3d_ArrayOfPolylines(int theMaxVertexs, int theMaxBounds);
    /// <summary>
    /// Creates an array of polylines (Graphic3d_TOPA_POLYLINES).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxBounds">
    ///  defines the maximum allowed bound  number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array
    /// </param>
    /// <param name="theHasVColors">
    /// when TRUE AddVertex(Point,Color) or AddVertex(Point,Normal,Color) should
    /// be used to specify per-vertex color values
    /// </param>
    /// <param name="theHasBColors">
    /// when TRUE AddBound(number,Color) should be used to specify sub-group
    /// color
    /// </param>
    Graphic3d_ArrayOfPolylines(int theMaxVertexs);
    static Macad::Occt::Graphic3d_ArrayOfPolylines^ CreateDowncasted(::Graphic3d_ArrayOfPolylines* instance);
}; // class Graphic3d_ArrayOfPolylines

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfQuadrangles
//---------------------------------------------------------------------
/// <summary>
/// Contains quadrangles array definition.
/// WARNING! Quadrangle primitives might be unsupported by graphics library.
/// Triangulation should be used instead of quads for better compatibility.
/// </summary>
public ref class Graphic3d_ArrayOfQuadrangles sealed
    : public Macad::Occt::Graphic3d_ArrayOfPrimitives
{

#ifdef Include_Graphic3d_ArrayOfQuadrangles_h
public:
    Include_Graphic3d_ArrayOfQuadrangles_h
#endif

public:
    Graphic3d_ArrayOfQuadrangles(::Graphic3d_ArrayOfQuadrangles* nativeInstance)
        : Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
    {}

    Graphic3d_ArrayOfQuadrangles(::Graphic3d_ArrayOfQuadrangles& nativeInstance)
        : Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
    {}

    property ::Graphic3d_ArrayOfQuadrangles* NativeInstance
    {
        ::Graphic3d_ArrayOfQuadrangles* get()
        {
            return static_cast<::Graphic3d_ArrayOfQuadrangles*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an array of quadrangles (Graphic3d_TOPA_QUADRANGLES), a quadrangle can be filled as:
    /// 1) Creating a set of quadrangles defined with his vertexes, i.e:
    /// </summary>
    /// @code
    /// myArray = Graphic3d_ArrayOfQuadrangles (8);
    /// myArray->AddVertex (x1, y1, z1);
    /// ....
    /// myArray->AddVertex (x8, y8, z8);
    /// @endcode
    /// 2) Creating a set of indexed quadrangles defined with his vertex ans edges, i.e:
    /// @code
    /// myArray = Graphic3d_ArrayOfQuadrangles (6, 8);
    /// myArray->AddVertex (x1, y1, z1);
    /// ....
    /// myArray->AddVertex (x6, y6, z6);
    /// myArray->AddEdges (1, 2, 3, 4);
    /// myArray->AddEdges (3, 4, 5, 6);
    /// @endcode
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array (for indexed
    /// array)
    /// </param>
    /// <param name="theArrayFlags">
    /// array flags
    /// </param>
    Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges, int theArrayFlags);
    /// <summary>
    /// Creates an array of quadrangles (Graphic3d_TOPA_QUADRANGLES).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array (for indexed
    /// array)
    /// </param>
    Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals, bool theHasVColors, bool theHasVTexels);
    /// <summary>
    /// Creates an array of quadrangles (Graphic3d_TOPA_QUADRANGLES).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array (for indexed
    /// array)
    /// </param>
    Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals, bool theHasVColors);
    /// <summary>
    /// Creates an array of quadrangles (Graphic3d_TOPA_QUADRANGLES).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array (for indexed
    /// array)
    /// </param>
    Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals);
    /// <summary>
    /// Creates an array of quadrangles (Graphic3d_TOPA_QUADRANGLES).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array (for indexed
    /// array)
    /// </param>
    Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges);
    /// <summary>
    /// Creates an array of quadrangles (Graphic3d_TOPA_QUADRANGLES).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array (for indexed
    /// array)
    /// </param>
    Graphic3d_ArrayOfQuadrangles(int theMaxVertexs);
    static Macad::Occt::Graphic3d_ArrayOfQuadrangles^ CreateDowncasted(::Graphic3d_ArrayOfQuadrangles* instance);
}; // class Graphic3d_ArrayOfQuadrangles

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfQuadrangleStrips
//---------------------------------------------------------------------
/// <summary>
/// Contains quadrangles strip array definition.
/// WARNING! Quadrangle primitives might be unsupported by graphics library.
/// Triangulation should be used instead of quads for better compatibility.
/// </summary>
public ref class Graphic3d_ArrayOfQuadrangleStrips sealed
    : public Macad::Occt::Graphic3d_ArrayOfPrimitives
{

#ifdef Include_Graphic3d_ArrayOfQuadrangleStrips_h
public:
    Include_Graphic3d_ArrayOfQuadrangleStrips_h
#endif

public:
    Graphic3d_ArrayOfQuadrangleStrips(::Graphic3d_ArrayOfQuadrangleStrips* nativeInstance)
        : Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
    {}

    Graphic3d_ArrayOfQuadrangleStrips(::Graphic3d_ArrayOfQuadrangleStrips& nativeInstance)
        : Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
    {}

    property ::Graphic3d_ArrayOfQuadrangleStrips* NativeInstance
    {
        ::Graphic3d_ArrayOfQuadrangleStrips* get()
        {
            return static_cast<::Graphic3d_ArrayOfQuadrangleStrips*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an array of quadrangle strips (Graphic3d_TOPA_QUADRANGLESTRIPS), a polygon can be
    /// filled as: 1) Creating a single strip defined with his vertexes, i.e:
    /// </summary>
    /// @code
    /// myArray = Graphic3d_ArrayOfQuadrangleStrips (7);
    /// myArray->AddVertex (x1, y1, z1);
    /// ....
    /// myArray->AddVertex (x7, y7, z7);
    /// @endcode
    /// 2) Creating separate strips defined with a predefined number of strips and the number of
    /// vertex per strip, i.e:
    /// @code
    /// myArray = Graphic3d_ArrayOfQuadrangleStrips (8, 2);
    /// myArray->AddBound (4);
    /// myArray->AddVertex (x1, y1, z1);
    /// ....
    /// myArray->AddVertex (x4, y4, z4);
    /// myArray->AddBound (4);
    /// myArray->AddVertex (x5, y5, z5);
    /// ....
    /// myArray->AddVertex (x8, y8, z8);
    /// @endcode
    /// The number of quadrangle really drawn is: VertexNumber()/2 - Min(1, BoundNumber()).
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxStrips">
    ///  defines the maximum allowed strip  number in the array
    /// </param>
    /// <param name="theArrayFlags">
    /// array flags
    /// </param>
    Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips, int theArrayFlags);
    /// <summary>
    /// Creates an array of quadrangle strips (Graphic3d_TOPA_QUADRANGLESTRIPS).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxStrips">
    ///  defines the maximum allowed strip  number in the array
    /// </param>
    Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors, bool theHasSColors, bool theHasVTexels);
    /// <summary>
    /// Creates an array of quadrangle strips (Graphic3d_TOPA_QUADRANGLESTRIPS).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxStrips">
    ///  defines the maximum allowed strip  number in the array
    /// </param>
    Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors, bool theHasSColors);
    /// <summary>
    /// Creates an array of quadrangle strips (Graphic3d_TOPA_QUADRANGLESTRIPS).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxStrips">
    ///  defines the maximum allowed strip  number in the array
    /// </param>
    Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors);
    /// <summary>
    /// Creates an array of quadrangle strips (Graphic3d_TOPA_QUADRANGLESTRIPS).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxStrips">
    ///  defines the maximum allowed strip  number in the array
    /// </param>
    Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals);
    /// <summary>
    /// Creates an array of quadrangle strips (Graphic3d_TOPA_QUADRANGLESTRIPS).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxStrips">
    ///  defines the maximum allowed strip  number in the array
    /// </param>
    Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips);
    /// <summary>
    /// Creates an array of quadrangle strips (Graphic3d_TOPA_QUADRANGLESTRIPS).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxStrips">
    ///  defines the maximum allowed strip  number in the array
    /// </param>
    Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs);
    static Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips^ CreateDowncasted(::Graphic3d_ArrayOfQuadrangleStrips* instance);
}; // class Graphic3d_ArrayOfQuadrangleStrips

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfSegments
//---------------------------------------------------------------------
/// <summary>
/// Contains segments array definition.
/// </summary>
public ref class Graphic3d_ArrayOfSegments sealed
    : public Macad::Occt::Graphic3d_ArrayOfPrimitives
{

#ifdef Include_Graphic3d_ArrayOfSegments_h
public:
    Include_Graphic3d_ArrayOfSegments_h
#endif

public:
    Graphic3d_ArrayOfSegments(::Graphic3d_ArrayOfSegments* nativeInstance)
        : Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
    {}

    Graphic3d_ArrayOfSegments(::Graphic3d_ArrayOfSegments& nativeInstance)
        : Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
    {}

    property ::Graphic3d_ArrayOfSegments* NativeInstance
    {
        ::Graphic3d_ArrayOfSegments* get()
        {
            return static_cast<::Graphic3d_ArrayOfSegments*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an array of segments (Graphic3d_TOPA_SEGMENTS), a segment can be filled as:
    /// 1) Creating a set of segments defined with his vertexes, i.e:
    /// </summary>
    /// @code
    /// myArray = Graphic3d_ArrayOfSegments (4);
    /// myArray->AddVertex (x1, y1, z1);
    /// ....
    /// myArray->AddVertex (x4, y4, z4);
    /// @endcode
    /// 2) Creating a set of indexed segments defined with his vertex and edges, i.e:
    /// @code
    /// myArray = Graphic3d_ArrayOfSegments (4, 8);
    /// myArray->AddVertex (x1, y1, z1);
    /// ....
    /// myArray->AddVertex (x4, y4, z4);
    /// myArray->AddEdges (1, 2);
    /// myArray->AddEdges (3, 4);
    /// myArray->AddEdges (2, 4);
    /// myArray->AddEdges (1, 3);
    /// @endcode
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array
    /// </param>
    /// <param name="theArrayFlags">
    /// array flags
    /// </param>
    Graphic3d_ArrayOfSegments(int theMaxVertexs, int theMaxEdges, int theArrayFlags);
    /// <summary>
    /// Creates an array of segments (Graphic3d_TOPA_SEGMENTS).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array
    /// </param>
    /// <param name="theHasVColors">
    /// when TRUE, AddVertex(Point,Color) should be used for specifying vertex
    /// color
    /// </param>
    Graphic3d_ArrayOfSegments(int theMaxVertexs, int theMaxEdges, bool theHasVColors);
    /// <summary>
    /// Creates an array of segments (Graphic3d_TOPA_SEGMENTS).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array
    /// </param>
    /// <param name="theHasVColors">
    /// when TRUE, AddVertex(Point,Color) should be used for specifying vertex
    /// color
    /// </param>
    Graphic3d_ArrayOfSegments(int theMaxVertexs, int theMaxEdges);
    /// <summary>
    /// Creates an array of segments (Graphic3d_TOPA_SEGMENTS).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///   defines the maximum allowed edge   number in the array
    /// </param>
    /// <param name="theHasVColors">
    /// when TRUE, AddVertex(Point,Color) should be used for specifying vertex
    /// color
    /// </param>
    Graphic3d_ArrayOfSegments(int theMaxVertexs);
    static Macad::Occt::Graphic3d_ArrayOfSegments^ CreateDowncasted(::Graphic3d_ArrayOfSegments* instance);
}; // class Graphic3d_ArrayOfSegments

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfTriangleFans
//---------------------------------------------------------------------
/// <summary>
/// Contains triangles fan array definition
/// </summary>
public ref class Graphic3d_ArrayOfTriangleFans sealed
    : public Macad::Occt::Graphic3d_ArrayOfPrimitives
{

#ifdef Include_Graphic3d_ArrayOfTriangleFans_h
public:
    Include_Graphic3d_ArrayOfTriangleFans_h
#endif

public:
    Graphic3d_ArrayOfTriangleFans(::Graphic3d_ArrayOfTriangleFans* nativeInstance)
        : Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
    {}

    Graphic3d_ArrayOfTriangleFans(::Graphic3d_ArrayOfTriangleFans& nativeInstance)
        : Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
    {}

    property ::Graphic3d_ArrayOfTriangleFans* NativeInstance
    {
        ::Graphic3d_ArrayOfTriangleFans* get()
        {
            return static_cast<::Graphic3d_ArrayOfTriangleFans*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an array of triangle fans (Graphic3d_TOPA_TRIANGLEFANS), a polygon can be filled as:
    /// 1) Creating a single fan defined with his vertexes, i.e:
    /// </summary>
    /// @code
    /// myArray = Graphic3d_ArrayOfTriangleFans (7);
    /// myArray->AddVertex (x1, y1, z1);
    /// ....
    /// myArray->AddVertex (x7, y7, z7);
    /// @endcode
    /// 2) creating separate fans defined with a predefined number of fans and the number of vertex
    /// per fan, i.e:
    /// @code
    /// myArray = Graphic3d_ArrayOfTriangleFans (8, 2);
    /// myArray->AddBound (4);
    /// myArray->AddVertex (x1, y1, z1);
    /// ....
    /// myArray->AddVertex (x4, y4, z4);
    /// myArray->AddBound (4);
    /// myArray->AddVertex (x5, y5, z5);
    /// ....
    /// myArray->AddVertex (x8, y8, z8);
    /// @endcode
    /// The number of triangle really drawn is: VertexNumber() - 2 * Min(1, BoundNumber())
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxFans">
    ///    defines the maximum allowed fan    number in the array
    /// </param>
    /// <param name="theArrayFlags">
    /// array flags
    /// </param>
    Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans, int theArrayFlags);
    /// <summary>
    /// Creates an array of triangle fans (Graphic3d_TOPA_TRIANGLEFANS).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxFans">
    ///    defines the maximum allowed fan    number in the array
    /// </param>
    Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans, bool theHasVNormals, bool theHasVColors, bool theHasBColors, bool theHasVTexels);
    /// <summary>
    /// Creates an array of triangle fans (Graphic3d_TOPA_TRIANGLEFANS).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxFans">
    ///    defines the maximum allowed fan    number in the array
    /// </param>
    Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans, bool theHasVNormals, bool theHasVColors, bool theHasBColors);
    /// <summary>
    /// Creates an array of triangle fans (Graphic3d_TOPA_TRIANGLEFANS).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxFans">
    ///    defines the maximum allowed fan    number in the array
    /// </param>
    Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans, bool theHasVNormals, bool theHasVColors);
    /// <summary>
    /// Creates an array of triangle fans (Graphic3d_TOPA_TRIANGLEFANS).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxFans">
    ///    defines the maximum allowed fan    number in the array
    /// </param>
    Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans, bool theHasVNormals);
    /// <summary>
    /// Creates an array of triangle fans (Graphic3d_TOPA_TRIANGLEFANS).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxFans">
    ///    defines the maximum allowed fan    number in the array
    /// </param>
    Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans);
    /// <summary>
    /// Creates an array of triangle fans (Graphic3d_TOPA_TRIANGLEFANS).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxFans">
    ///    defines the maximum allowed fan    number in the array
    /// </param>
    Graphic3d_ArrayOfTriangleFans(int theMaxVertexs);
    static Macad::Occt::Graphic3d_ArrayOfTriangleFans^ CreateDowncasted(::Graphic3d_ArrayOfTriangleFans* instance);
}; // class Graphic3d_ArrayOfTriangleFans

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfTriangles
//---------------------------------------------------------------------
/// <summary>
/// Contains triangles array definition
/// </summary>
public ref class Graphic3d_ArrayOfTriangles sealed
    : public Macad::Occt::Graphic3d_ArrayOfPrimitives
{

#ifdef Include_Graphic3d_ArrayOfTriangles_h
public:
    Include_Graphic3d_ArrayOfTriangles_h
#endif

public:
    Graphic3d_ArrayOfTriangles(::Graphic3d_ArrayOfTriangles* nativeInstance)
        : Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
    {}

    Graphic3d_ArrayOfTriangles(::Graphic3d_ArrayOfTriangles& nativeInstance)
        : Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
    {}

    property ::Graphic3d_ArrayOfTriangles* NativeInstance
    {
        ::Graphic3d_ArrayOfTriangles* get()
        {
            return static_cast<::Graphic3d_ArrayOfTriangles*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an array of triangles (Graphic3d_TOPA_TRIANGLES), a triangle can be filled as:
    /// 1) Creating a set of triangles defined with his vertexes, i.e:
    /// </summary>
    /// @code
    /// myArray = Graphic3d_ArrayOfTriangles (6);
    /// myArray->AddVertex (x1, y1, z1);
    /// ....
    /// myArray->AddVertex (x6, y6, z6);
    /// @endcode
    /// 3) Creating a set of indexed triangles defined with his vertex and edges, i.e:
    /// @code
    /// myArray = Graphic3d_ArrayOfTriangles (4, 6);
    /// myArray->AddVertex (x1, y1, z1);
    /// ....
    /// myArray->AddVertex (x4, y4, z4);
    /// myArray->AddEdges (1, 2, 3);
    /// myArray->AddEdges (2, 3, 4);
    /// @endcode
    /// <param name="theMaxVertexs">
    ///  defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///    defines the maximum allowed edge   number in the array
    /// </param>
    /// <param name="theArrayFlags">
    /// array flags
    /// </param>
    Graphic3d_ArrayOfTriangles(int theMaxVertexs, int theMaxEdges, int theArrayFlags);
    /// <summary>
    /// Creates an array of triangles (Graphic3d_TOPA_TRIANGLES).
    /// </summary>
    /// <param name="theMaxVertexs">
    ///  defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///    defines the maximum allowed edge   number in the array
    /// </param>
    /// <param name="theHasVNormals">
    /// when TRUE,  AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or
    /// AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
    /// vertex normals should be specified coherent to triangle orientation
    /// (defined by order of vertexes within triangle) for proper rendering
    /// </param>
    /// <param name="theHasVColors">
    ///  when TRUE,  AddVertex(Point,Color) or AddVertex(Point,Normal,Color)
    /// should be used to specify vertex color
    /// </param>
    /// <param name="theHasVTexels">
    ///  when TRUE,  AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel)
    /// should be used to specify vertex UV coordinates
    /// </param>
    Graphic3d_ArrayOfTriangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals, bool theHasVColors, bool theHasVTexels);
    /// <summary>
    /// Creates an array of triangles (Graphic3d_TOPA_TRIANGLES).
    /// </summary>
    /// <param name="theMaxVertexs">
    ///  defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///    defines the maximum allowed edge   number in the array
    /// </param>
    /// <param name="theHasVNormals">
    /// when TRUE,  AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or
    /// AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
    /// vertex normals should be specified coherent to triangle orientation
    /// (defined by order of vertexes within triangle) for proper rendering
    /// </param>
    /// <param name="theHasVColors">
    ///  when TRUE,  AddVertex(Point,Color) or AddVertex(Point,Normal,Color)
    /// should be used to specify vertex color
    /// </param>
    /// <param name="theHasVTexels">
    ///  when TRUE,  AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel)
    /// should be used to specify vertex UV coordinates
    /// </param>
    Graphic3d_ArrayOfTriangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals, bool theHasVColors);
    /// <summary>
    /// Creates an array of triangles (Graphic3d_TOPA_TRIANGLES).
    /// </summary>
    /// <param name="theMaxVertexs">
    ///  defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///    defines the maximum allowed edge   number in the array
    /// </param>
    /// <param name="theHasVNormals">
    /// when TRUE,  AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or
    /// AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
    /// vertex normals should be specified coherent to triangle orientation
    /// (defined by order of vertexes within triangle) for proper rendering
    /// </param>
    /// <param name="theHasVColors">
    ///  when TRUE,  AddVertex(Point,Color) or AddVertex(Point,Normal,Color)
    /// should be used to specify vertex color
    /// </param>
    /// <param name="theHasVTexels">
    ///  when TRUE,  AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel)
    /// should be used to specify vertex UV coordinates
    /// </param>
    Graphic3d_ArrayOfTriangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals);
    /// <summary>
    /// Creates an array of triangles (Graphic3d_TOPA_TRIANGLES).
    /// </summary>
    /// <param name="theMaxVertexs">
    ///  defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///    defines the maximum allowed edge   number in the array
    /// </param>
    /// <param name="theHasVNormals">
    /// when TRUE,  AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or
    /// AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
    /// vertex normals should be specified coherent to triangle orientation
    /// (defined by order of vertexes within triangle) for proper rendering
    /// </param>
    /// <param name="theHasVColors">
    ///  when TRUE,  AddVertex(Point,Color) or AddVertex(Point,Normal,Color)
    /// should be used to specify vertex color
    /// </param>
    /// <param name="theHasVTexels">
    ///  when TRUE,  AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel)
    /// should be used to specify vertex UV coordinates
    /// </param>
    Graphic3d_ArrayOfTriangles(int theMaxVertexs, int theMaxEdges);
    /// <summary>
    /// Creates an array of triangles (Graphic3d_TOPA_TRIANGLES).
    /// </summary>
    /// <param name="theMaxVertexs">
    ///  defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxEdges">
    ///    defines the maximum allowed edge   number in the array
    /// </param>
    /// <param name="theHasVNormals">
    /// when TRUE,  AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or
    /// AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
    /// vertex normals should be specified coherent to triangle orientation
    /// (defined by order of vertexes within triangle) for proper rendering
    /// </param>
    /// <param name="theHasVColors">
    ///  when TRUE,  AddVertex(Point,Color) or AddVertex(Point,Normal,Color)
    /// should be used to specify vertex color
    /// </param>
    /// <param name="theHasVTexels">
    ///  when TRUE,  AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel)
    /// should be used to specify vertex UV coordinates
    /// </param>
    Graphic3d_ArrayOfTriangles(int theMaxVertexs);
    static Macad::Occt::Graphic3d_ArrayOfTriangles^ CreateDowncasted(::Graphic3d_ArrayOfTriangles* instance);
}; // class Graphic3d_ArrayOfTriangles

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfTriangleStrips
//---------------------------------------------------------------------
/// <summary>
/// Contains triangles strip array definition.
/// </summary>
public ref class Graphic3d_ArrayOfTriangleStrips sealed
    : public Macad::Occt::Graphic3d_ArrayOfPrimitives
{

#ifdef Include_Graphic3d_ArrayOfTriangleStrips_h
public:
    Include_Graphic3d_ArrayOfTriangleStrips_h
#endif

public:
    Graphic3d_ArrayOfTriangleStrips(::Graphic3d_ArrayOfTriangleStrips* nativeInstance)
        : Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
    {}

    Graphic3d_ArrayOfTriangleStrips(::Graphic3d_ArrayOfTriangleStrips& nativeInstance)
        : Macad::Occt::Graphic3d_ArrayOfPrimitives( nativeInstance )
    {}

    property ::Graphic3d_ArrayOfTriangleStrips* NativeInstance
    {
        ::Graphic3d_ArrayOfTriangleStrips* get()
        {
            return static_cast<::Graphic3d_ArrayOfTriangleStrips*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an array of triangle strips (Graphic3d_TOPA_TRIANGLESTRIPS), a polygon can be filled
    /// as: 1) Creating a single strip defined with his vertexes, i.e:
    /// </summary>
    /// @code
    /// myArray = Graphic3d_ArrayOfTriangleStrips (7);
    /// myArray->AddVertex (x1, y1, z1);
    /// ....
    /// myArray->AddVertex (x7, y7, z7);
    /// @endcode
    /// 2) Creating separate strips defined with a predefined number of strips and the number of
    /// vertex per strip, i.e:
    /// @code
    /// myArray = Graphic3d_ArrayOfTriangleStrips (8, 2);
    /// myArray->AddBound (4);
    /// myArray->AddVertex (x1, y1, z1);
    /// ....
    /// myArray->AddVertex (x4, y4, z4);
    /// myArray->AddBound (4);
    /// myArray->AddVertex (x5, y5, z5);
    /// ....
    /// myArray->AddVertex (x8, y8, z8);
    /// @endcode
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxStrips">
    ///  defines the maximum allowed strip  number in the array;
    /// the number of triangle really drawn is: VertexNumber() - 2 * Min(1,
    /// BoundNumber())
    /// </param>
    /// <param name="theArrayFlags">
    /// array flags
    /// </param>
    Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips, int theArrayFlags);
    /// <summary>
    /// Creates an array of triangle strips (Graphic3d_TOPA_TRIANGLESTRIPS).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxStrips">
    ///  defines the maximum allowed strip  number in the array;
    /// the number of triangle really drawn is: VertexNumber() - 2 * Min(1,
    /// BoundNumber())
    /// </param>
    /// <param name="theHasVNormals">
    /// when TRUE, AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or
    /// AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
    /// vertex normals should be specified coherent to triangle orientation
    /// (defined by order of vertexes within triangle) for proper rendering
    /// </param>
    /// <param name="theHasVColors">
    ///  when TRUE, AddVertex(Point,Color) or AddVertex(Point,Normal,Color)
    /// should be used to specify vertex color
    /// </param>
    /// <param name="theHasBColors">
    ///  when TRUE, AddBound(number,Color) should be used to specify sub-group
    /// color
    /// </param>
    /// <param name="theHasVTexels">
    ///  when TRUE, AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel)
    /// should be used to specify vertex UV coordinates
    /// </param>
    Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors, bool theHasBColors, bool theHasVTexels);
    /// <summary>
    /// Creates an array of triangle strips (Graphic3d_TOPA_TRIANGLESTRIPS).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxStrips">
    ///  defines the maximum allowed strip  number in the array;
    /// the number of triangle really drawn is: VertexNumber() - 2 * Min(1,
    /// BoundNumber())
    /// </param>
    /// <param name="theHasVNormals">
    /// when TRUE, AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or
    /// AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
    /// vertex normals should be specified coherent to triangle orientation
    /// (defined by order of vertexes within triangle) for proper rendering
    /// </param>
    /// <param name="theHasVColors">
    ///  when TRUE, AddVertex(Point,Color) or AddVertex(Point,Normal,Color)
    /// should be used to specify vertex color
    /// </param>
    /// <param name="theHasBColors">
    ///  when TRUE, AddBound(number,Color) should be used to specify sub-group
    /// color
    /// </param>
    /// <param name="theHasVTexels">
    ///  when TRUE, AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel)
    /// should be used to specify vertex UV coordinates
    /// </param>
    Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors, bool theHasBColors);
    /// <summary>
    /// Creates an array of triangle strips (Graphic3d_TOPA_TRIANGLESTRIPS).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxStrips">
    ///  defines the maximum allowed strip  number in the array;
    /// the number of triangle really drawn is: VertexNumber() - 2 * Min(1,
    /// BoundNumber())
    /// </param>
    /// <param name="theHasVNormals">
    /// when TRUE, AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or
    /// AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
    /// vertex normals should be specified coherent to triangle orientation
    /// (defined by order of vertexes within triangle) for proper rendering
    /// </param>
    /// <param name="theHasVColors">
    ///  when TRUE, AddVertex(Point,Color) or AddVertex(Point,Normal,Color)
    /// should be used to specify vertex color
    /// </param>
    /// <param name="theHasBColors">
    ///  when TRUE, AddBound(number,Color) should be used to specify sub-group
    /// color
    /// </param>
    /// <param name="theHasVTexels">
    ///  when TRUE, AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel)
    /// should be used to specify vertex UV coordinates
    /// </param>
    Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors);
    /// <summary>
    /// Creates an array of triangle strips (Graphic3d_TOPA_TRIANGLESTRIPS).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxStrips">
    ///  defines the maximum allowed strip  number in the array;
    /// the number of triangle really drawn is: VertexNumber() - 2 * Min(1,
    /// BoundNumber())
    /// </param>
    /// <param name="theHasVNormals">
    /// when TRUE, AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or
    /// AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
    /// vertex normals should be specified coherent to triangle orientation
    /// (defined by order of vertexes within triangle) for proper rendering
    /// </param>
    /// <param name="theHasVColors">
    ///  when TRUE, AddVertex(Point,Color) or AddVertex(Point,Normal,Color)
    /// should be used to specify vertex color
    /// </param>
    /// <param name="theHasBColors">
    ///  when TRUE, AddBound(number,Color) should be used to specify sub-group
    /// color
    /// </param>
    /// <param name="theHasVTexels">
    ///  when TRUE, AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel)
    /// should be used to specify vertex UV coordinates
    /// </param>
    Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals);
    /// <summary>
    /// Creates an array of triangle strips (Graphic3d_TOPA_TRIANGLESTRIPS).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxStrips">
    ///  defines the maximum allowed strip  number in the array;
    /// the number of triangle really drawn is: VertexNumber() - 2 * Min(1,
    /// BoundNumber())
    /// </param>
    /// <param name="theHasVNormals">
    /// when TRUE, AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or
    /// AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
    /// vertex normals should be specified coherent to triangle orientation
    /// (defined by order of vertexes within triangle) for proper rendering
    /// </param>
    /// <param name="theHasVColors">
    ///  when TRUE, AddVertex(Point,Color) or AddVertex(Point,Normal,Color)
    /// should be used to specify vertex color
    /// </param>
    /// <param name="theHasBColors">
    ///  when TRUE, AddBound(number,Color) should be used to specify sub-group
    /// color
    /// </param>
    /// <param name="theHasVTexels">
    ///  when TRUE, AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel)
    /// should be used to specify vertex UV coordinates
    /// </param>
    Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips);
    /// <summary>
    /// Creates an array of triangle strips (Graphic3d_TOPA_TRIANGLESTRIPS).
    /// </summary>
    /// <param name="theMaxVertexs">
    /// defines the maximum allowed vertex number in the array
    /// </param>
    /// <param name="theMaxStrips">
    ///  defines the maximum allowed strip  number in the array;
    /// the number of triangle really drawn is: VertexNumber() - 2 * Min(1,
    /// BoundNumber())
    /// </param>
    /// <param name="theHasVNormals">
    /// when TRUE, AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or
    /// AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
    /// vertex normals should be specified coherent to triangle orientation
    /// (defined by order of vertexes within triangle) for proper rendering
    /// </param>
    /// <param name="theHasVColors">
    ///  when TRUE, AddVertex(Point,Color) or AddVertex(Point,Normal,Color)
    /// should be used to specify vertex color
    /// </param>
    /// <param name="theHasBColors">
    ///  when TRUE, AddBound(number,Color) should be used to specify sub-group
    /// color
    /// </param>
    /// <param name="theHasVTexels">
    ///  when TRUE, AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel)
    /// should be used to specify vertex UV coordinates
    /// </param>
    Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs);
    static Macad::Occt::Graphic3d_ArrayOfTriangleStrips^ CreateDowncasted(::Graphic3d_ArrayOfTriangleStrips* instance);
}; // class Graphic3d_ArrayOfTriangleStrips

//---------------------------------------------------------------------
//  Class  Graphic3d_MarkerImage
//---------------------------------------------------------------------
/// <summary>
/// This class is used to store bitmaps and images for markers rendering.
/// It can convert bitmap texture stored in TColStd_HArray1OfByte to Image_PixMap and vice versa.
/// </summary>
public ref class Graphic3d_MarkerImage sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_MarkerImage_h
public:
    Include_Graphic3d_MarkerImage_h
#endif

public:
    Graphic3d_MarkerImage(::Graphic3d_MarkerImage* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_MarkerImage(::Graphic3d_MarkerImage& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_MarkerImage* NativeInstance
    {
        ::Graphic3d_MarkerImage* get()
        {
            return static_cast<::Graphic3d_MarkerImage*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor from existing pixmap.
    /// </summary>
    /// <param name="in]">
    /// theImage  source image
    /// </param>
    /// <param name="in]">
    /// theImageAlpha  colorless image
    /// </param>
    Graphic3d_MarkerImage(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::Image_PixMap^ theImageAlpha);
    /// <summary>
    /// Constructor from existing pixmap.
    /// </summary>
    /// <param name="in]">
    /// theImage  source image
    /// </param>
    /// <param name="in]">
    /// theImageAlpha  colorless image
    /// </param>
    Graphic3d_MarkerImage(Macad::Occt::Image_PixMap^ theImage);
    /// <summary>
    /// Creates marker image from array of bytes
    /// (method for compatibility with old markers definition).
    /// </summary>
    /// <param name="in]">
    /// theBitMap  source bitmap stored as array of bytes
    /// </param>
    /// <param name="in]">
    /// theWidth   number of bits in a row
    /// </param>
    /// <param name="in]">
    /// theHeight  number of bits in a column
    /// </param>
    Graphic3d_MarkerImage(Macad::Occt::TColStd_HArray1OfByte^ theBitMap, int theWidth, int theHeight);
    /// <summary>
    /// Returns a marker image for the marker of the specified type, scale and color.
    /// </summary>
    static Macad::Occt::Graphic3d_MarkerImage^ StandardMarker(Macad::Occt::Aspect_TypeOfMarker theMarkerType, float theScale, Macad::Occt::Graphic3d_Vec4^ theColor);
    /// <summary>
    /// Return marker image.
    /// If an instance of the class has been initialized with a bitmap, it will be converted to image.
    /// </summary>
    Macad::Occt::Image_PixMap^ GetImage();
    /// <summary>
    /// Return image alpha as grayscale image.
    /// Note that if an instance of the class has been initialized with a bitmap
    /// or with grayscale image this method will return exactly the same image as GetImage()
    /// </summary>
    Macad::Occt::Image_PixMap^ GetImageAlpha();
    /// <summary>
    /// Return an unique ID.
    /// This ID will be used to manage resource in graphic driver.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ GetImageId();
    /// <summary>
    /// Return an unique ID.
    /// This ID will be used to manage resource in graphic driver.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ GetImageAlphaId();
    /// <summary>
    /// Return texture size
    /// </summary>
    void GetTextureSize(int% theWidth, int% theHeight);
    /// <summary>
    /// Return TRUE if marker image has colors (e.g. RGBA and not grayscale).
    /// </summary>
    bool IsColoredImage();
    /// <summary>
    /// Return marker image as array of bytes.
    /// If an instance of the class has been initialized with image, it will be converted to bitmap
    /// based on the parameter theAlphaValue.
    /// </summary>
    /// <param name="theAlphaValue">
    /// pixels in the image that have alpha value greater than
    /// or equal to this parameter will be stored in bitmap as "1",
    /// others will be stored as "0"
    /// </param>
    /// <param name="in]">
    /// theIsTopDown  flag indicating expected rows order in returned bitmap, which is
    /// bottom-up by default
    /// </param>
    Macad::Occt::TColStd_HArray1OfByte^ GetBitMapArray(double theAlphaValue, bool theIsTopDown);
    /// <summary>
    /// Return marker image as array of bytes.
    /// If an instance of the class has been initialized with image, it will be converted to bitmap
    /// based on the parameter theAlphaValue.
    /// </summary>
    /// <param name="theAlphaValue">
    /// pixels in the image that have alpha value greater than
    /// or equal to this parameter will be stored in bitmap as "1",
    /// others will be stored as "0"
    /// </param>
    /// <param name="in]">
    /// theIsTopDown  flag indicating expected rows order in returned bitmap, which is
    /// bottom-up by default
    /// </param>
    Macad::Occt::TColStd_HArray1OfByte^ GetBitMapArray(double theAlphaValue);
    /// <summary>
    /// Return marker image as array of bytes.
    /// If an instance of the class has been initialized with image, it will be converted to bitmap
    /// based on the parameter theAlphaValue.
    /// </summary>
    /// <param name="theAlphaValue">
    /// pixels in the image that have alpha value greater than
    /// or equal to this parameter will be stored in bitmap as "1",
    /// others will be stored as "0"
    /// </param>
    /// <param name="in]">
    /// theIsTopDown  flag indicating expected rows order in returned bitmap, which is
    /// bottom-up by default
    /// </param>
    Macad::Occt::TColStd_HArray1OfByte^ GetBitMapArray();
    static Macad::Occt::Graphic3d_MarkerImage^ CreateDowncasted(::Graphic3d_MarkerImage* instance);
}; // class Graphic3d_MarkerImage

//---------------------------------------------------------------------
//  Class  Graphic3d_PBRMaterial
//---------------------------------------------------------------------
/// <summary>
/// Class implementing Metallic-Roughness physically based material definition
/// </summary>
public ref class Graphic3d_PBRMaterial sealed
    : public Macad::Occt::BaseClass<::Graphic3d_PBRMaterial>
{

#ifdef Include_Graphic3d_PBRMaterial_h
public:
    Include_Graphic3d_PBRMaterial_h
#endif

public:
    Graphic3d_PBRMaterial(::Graphic3d_PBRMaterial* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_PBRMaterial>( nativeInstance, true )
    {}

    Graphic3d_PBRMaterial(::Graphic3d_PBRMaterial& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_PBRMaterial>( &nativeInstance, false )
    {}

    property ::Graphic3d_PBRMaterial* NativeInstance
    {
        ::Graphic3d_PBRMaterial* get()
        {
            return static_cast<::Graphic3d_PBRMaterial*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates new physically based material in Metallic-Roughness system.
    /// 'metallic' parameter is 0 by default.
    /// 'roughness' parameter is 1 by default.
    /// 'color' parameter is (0, 0, 0) by default.
    /// 'alpha' parameter is 1 by default.
    /// 'IOR' parameter is 1.5 by default.
    /// 'emission' parameter is (0, 0, 0) by default.
    /// </summary>
    Graphic3d_PBRMaterial();
    /// <summary>
    /// Creates new physically based material in Metallic-Roughness system from Graphic3d_BSDF.
    /// </summary>
    Graphic3d_PBRMaterial(Macad::Occt::Graphic3d_BSDF^ theBSDF);
    /// <summary>
    /// Returns material's metallic coefficient in [0, 1] range.
    /// 1 for metals and 0 for dielectrics.
    /// It is preferable to be exactly 0 or 1. Average values are needed for textures mixing in
    /// shader.
    /// </summary>
    float Metallic();
    /// <summary>
    /// Modifies metallic coefficient of material in [0, 1] range.
    /// </summary>
    void SetMetallic(float theMetallic);
    /// <summary>
    /// Maps roughness from [0, 1] to [MinRoughness, 1] for calculations.
    /// </summary>
    static float Roughness(float theNormalizedRoughness);
    /// <summary>
    /// Returns real value of roughness in [MinRoughness, 1] range for calculations.
    /// </summary>
    float Roughness();
    /// <summary>
    /// Returns roughness mapping parameter in [0, 1] range.
    /// Roughness is defined in [0, 1] for handful material settings
    /// and is mapped to [MinRoughness, 1] for calculations.
    /// </summary>
    float NormalizedRoughness();
    /// <summary>
    /// Modifies roughness coefficient of material in [0, 1] range.
    /// </summary>
    void SetRoughness(float theRoughness);
    /// <summary>
    /// Returns index of refraction in [1, 3] range.
    /// </summary>
    float IOR();
    /// <summary>
    /// Modifies index of refraction in [1, 3] range.
    /// In practice affects only on non-metal materials reflection possibilities.
    /// </summary>
    void SetIOR(float theIOR);
    /// <summary>
    /// Returns albedo color with alpha component of material.
    /// </summary>
    Macad::Occt::Quantity_ColorRGBA^ Color();
    /// <summary>
    /// Modifies albedo color with alpha component.
    /// </summary>
    void SetColor(Macad::Occt::Quantity_ColorRGBA^ theColor);
    /// <summary>
    /// Modifies only albedo color.
    /// </summary>
    void SetColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Returns alpha component in range [0, 1].
    /// </summary>
    float Alpha();
    /// <summary>
    /// Modifies alpha component.
    /// </summary>
    void SetAlpha(float theAlpha);
    /// <summary>
    /// Returns light intensity emitted by material.
    /// Values are greater or equal 0.
    /// </summary>
    Macad::Occt::Graphic3d_Vec3^ Emission();
    /// <summary>
    /// Modifies light intensity emitted by material.
    /// </summary>
    void SetEmission(Macad::Occt::Graphic3d_Vec3^ theEmission);
    /// <summary>
    /// Generates material in Metallic-Roughness system from Graphic3d_BSDF.
    /// </summary>
    void SetBSDF(Macad::Occt::Graphic3d_BSDF^ theBSDF);
    /// <summary>
    /// Generates 2D look up table of scale and bias for fresnell zero coefficient.
    /// It is needed for calculation reflectance part of environment lighting.
    /// </summary>
    /// <param name="out]">
    ///  theLUT table storage (must be Image_Format_RGF).
    /// </param>
    /// <param name="in]">
    ///  theNbIntegralSamples number of importance samples in hemisphere integral
    /// calculation for every table item.
    /// </param>
    static void GenerateEnvLUT(Macad::Occt::Image_PixMap^ theLUT, unsigned int theNbIntegralSamples);
    /// <summary>
    /// Generates 2D look up table of scale and bias for fresnell zero coefficient.
    /// It is needed for calculation reflectance part of environment lighting.
    /// </summary>
    /// <param name="out]">
    ///  theLUT table storage (must be Image_Format_RGF).
    /// </param>
    /// <param name="in]">
    ///  theNbIntegralSamples number of importance samples in hemisphere integral
    /// calculation for every table item.
    /// </param>
    static void GenerateEnvLUT(Macad::Occt::Image_PixMap^ theLUT);
    /// <summary>
    /// Compute material roughness from common material (specular color + shininess).
    /// </summary>
    /// <param name="in]">
    /// theSpecular  specular color
    /// </param>
    /// <param name="in]">
    /// theShiness   normalized shininess coefficient within [0..1] range
    /// </param>
    /// <returns>
    /// roughness within [0..1] range
    /// </returns>
    static float RoughnessFromSpecular(Macad::Occt::Quantity_Color^ theSpecular, double theShiness);
    /// <summary>
    /// Compute material metallicity from common material (specular color).
    /// </summary>
    /// <param name="in]">
    /// theSpecular  specular color
    /// </param>
    /// <returns>
    /// metallicity within [0..1] range
    /// </returns>
    static float MetallicFromSpecular(Macad::Occt::Quantity_Color^ theSpecular);
    /// <summary>
    /// Roughness cannot be 0 in real calculations, so it returns minimal achievable level of
    /// roughness in practice
    /// </summary>
    static float MinRoughness();
    /// <summary>
    /// Shows how much times less samples can be used in certain roughness value specular IBL map
    /// generation in compare with samples number for map with roughness of 1. Specular IBL maps with
    /// less roughness values have higher resolution but require less samples for the same quality of
    /// baking. So that reducing samples number is good strategy to improve performance of baking. The
    /// samples number for specular IBL map with roughness of 1 (the maximum possible samples number)
    /// is expected to be defined as baking parameter. Samples number for other roughness values can
    /// be calculated by multiplication origin samples number by this factor.
    /// </summary>
    /// <param name="theProbability">
    /// value from 0 to 1 controlling strength of samples reducing.
    /// Bigger values result in slower reduction to provide better quality but worse performance.
    /// Value of 1 doesn't affect at all so that 1 will be returned (it can be used to disable
    /// reduction strategy).
    /// </param>
    /// <param name="theRoughness">
    /// roughness value of current generated specular IBL map (from 0 to 1).
    /// </param>
    /// <returns>
    /// factor to calculate number of samples for current specular IBL map baking.
    /// Be aware! It has no obligation to return 1 in case of roughness of 1.
    /// Be aware! It produces poor quality with small number of origin samples. In that case it is
    /// recommended to be disabled.
    /// </returns>
    static float SpecIBLMapSamplesFactor(float theProbability, float theRoughness);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
}; // class Graphic3d_PBRMaterial

//---------------------------------------------------------------------
//  Class  Graphic3d_Fresnel
//---------------------------------------------------------------------
/// <summary>
/// Describes Fresnel reflectance parameters.
/// </summary>
public ref class Graphic3d_Fresnel sealed
    : public Macad::Occt::BaseClass<::Graphic3d_Fresnel>
{

#ifdef Include_Graphic3d_Fresnel_h
public:
    Include_Graphic3d_Fresnel_h
#endif

public:
    Graphic3d_Fresnel(::Graphic3d_Fresnel* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Fresnel>( nativeInstance, true )
    {}

    Graphic3d_Fresnel(::Graphic3d_Fresnel& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Fresnel>( &nativeInstance, false )
    {}

    property ::Graphic3d_Fresnel* NativeInstance
    {
        ::Graphic3d_Fresnel* get()
        {
            return static_cast<::Graphic3d_Fresnel*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates uninitialized Fresnel factor.
    /// </summary>
    Graphic3d_Fresnel();
    /// <summary>
    /// Creates Schlick's approximation of Fresnel factor.
    /// </summary>
    static Macad::Occt::Graphic3d_Fresnel^ CreateSchlick(Macad::Occt::Graphic3d_Vec3^ theSpecularColor);
    /// <summary>
    /// Creates Fresnel factor for constant reflection.
    /// </summary>
    static Macad::Occt::Graphic3d_Fresnel^ CreateConstant(float theReflection);
    /// <summary>
    /// Creates Fresnel factor for physical-based dielectric model.
    /// </summary>
    static Macad::Occt::Graphic3d_Fresnel^ CreateDielectric(float theRefractionIndex);
    /// <summary>
    /// Creates Fresnel factor for physical-based conductor model.
    /// </summary>
    static Macad::Occt::Graphic3d_Fresnel^ CreateConductor(float theRefractionIndex, float theAbsorptionIndex);
    /// <summary>
    /// Creates Fresnel factor for physical-based conductor model (spectral version).
    /// </summary>
    static Macad::Occt::Graphic3d_Fresnel^ CreateConductor(Macad::Occt::Graphic3d_Vec3^ theRefractionIndex, Macad::Occt::Graphic3d_Vec3^ theAbsorptionIndex);
    /// <summary>
    /// Returns serialized representation of Fresnel factor.
    /// </summary>
    Macad::Occt::Graphic3d_Vec4^ Serialize();
    /// <summary>
    /// Returns type of Fresnel.
    /// </summary>
    Macad::Occt::Graphic3d_FresnelModel FresnelType();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
}; // class Graphic3d_Fresnel

//---------------------------------------------------------------------
//  Class  Graphic3d_BSDF
//---------------------------------------------------------------------
/// <summary>
/// Describes material's BSDF (Bidirectional Scattering Distribution Function) used
/// for physically-based rendering (in path tracing engine). BSDF is represented as
/// weighted mixture of basic BRDFs/BTDFs (Bidirectional Reflectance (Transmittance)
/// Distribution Functions).
/// 
/// NOTE: OCCT uses two-layer material model. We have base diffuse, glossy, or transmissive
/// layer, covered by one glossy/specular coat. In the current model, the layers themselves
/// have no thickness; they can simply reflect light or transmits it to the layer under it.
/// We use actual BRDF model only for direct reflection by the coat layer. For transmission
/// through this layer, we approximate it as a flat specular surface.
/// </summary>
public ref class Graphic3d_BSDF sealed
    : public Macad::Occt::BaseClass<::Graphic3d_BSDF>
{

#ifdef Include_Graphic3d_BSDF_h
public:
    Include_Graphic3d_BSDF_h
#endif

public:
    Graphic3d_BSDF(::Graphic3d_BSDF* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_BSDF>( nativeInstance, true )
    {}

    Graphic3d_BSDF(::Graphic3d_BSDF& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_BSDF>( &nativeInstance, false )
    {}

    property ::Graphic3d_BSDF* NativeInstance
    {
        ::Graphic3d_BSDF* get()
        {
            return static_cast<::Graphic3d_BSDF*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates uninitialized BSDF.
    /// </summary>
    Graphic3d_BSDF();
    /// <summary>
    /// Creates BSDF describing diffuse (Lambertian) surface.
    /// </summary>
    static Macad::Occt::Graphic3d_BSDF^ CreateDiffuse(Macad::Occt::Graphic3d_Vec3^ theWeight);
    /// <summary>
    /// Creates BSDF describing polished metallic-like surface.
    /// </summary>
    static Macad::Occt::Graphic3d_BSDF^ CreateMetallic(Macad::Occt::Graphic3d_Vec3^ theWeight, Macad::Occt::Graphic3d_Fresnel^ theFresnel, float theRoughness);
    /// <summary>
    /// Creates BSDF describing transparent object.
    /// Transparent BSDF models simple transparency without
    /// refraction (the ray passes straight through the surface).
    /// </summary>
    static Macad::Occt::Graphic3d_BSDF^ CreateTransparent(Macad::Occt::Graphic3d_Vec3^ theWeight, Macad::Occt::Graphic3d_Vec3^ theAbsorptionColor, float theAbsorptionCoeff);
    /// <summary>
    /// Creates BSDF describing glass-like object.
    /// Glass-like BSDF mixes refraction and reflection effects at
    /// grazing angles using physically-based Fresnel dielectric model.
    /// </summary>
    static Macad::Occt::Graphic3d_BSDF^ CreateGlass(Macad::Occt::Graphic3d_Vec3^ theWeight, Macad::Occt::Graphic3d_Vec3^ theAbsorptionColor, float theAbsorptionCoeff, float theRefractionIndex);
    /// <summary>
    /// Creates BSDF from PBR metallic-roughness material.
    /// </summary>
    static Macad::Occt::Graphic3d_BSDF^ CreateMetallicRoughness(Macad::Occt::Graphic3d_PBRMaterial^ thePbr);
    /// <summary>
    /// Normalizes BSDF components.
    /// </summary>
    void Normalize();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
}; // class Graphic3d_BSDF

//---------------------------------------------------------------------
//  Class  Graphic3d_MaterialAspect
//---------------------------------------------------------------------
/// <summary>
/// This class allows the definition of the type of a surface.
/// Aspect attributes of a 3d face.
/// Keywords: Material, FillArea, Shininess, Ambient, Color, Diffuse,
/// Specular, Transparency, Emissive, ReflectionMode,
/// BackFace, FrontFace, Reflection, Absorption
/// </summary>
public ref class Graphic3d_MaterialAspect sealed
    : public Macad::Occt::BaseClass<::Graphic3d_MaterialAspect>
{

#ifdef Include_Graphic3d_MaterialAspect_h
public:
    Include_Graphic3d_MaterialAspect_h
#endif

public:
    Graphic3d_MaterialAspect(::Graphic3d_MaterialAspect* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_MaterialAspect>( nativeInstance, true )
    {}

    Graphic3d_MaterialAspect(::Graphic3d_MaterialAspect& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_MaterialAspect>( &nativeInstance, false )
    {}

    property ::Graphic3d_MaterialAspect* NativeInstance
    {
        ::Graphic3d_MaterialAspect* get()
        {
            return static_cast<::Graphic3d_MaterialAspect*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a material from default values.
    /// </summary>
    Graphic3d_MaterialAspect();
    /// <summary>
    /// Creates a generic material.
    /// </summary>
    Graphic3d_MaterialAspect(Macad::Occt::Graphic3d_NameOfMaterial theName);
    /// <summary>
    /// Returns the number of predefined textures.
    /// </summary>
    static int NumberOfMaterials();
    /// <summary>
    /// Returns the name of the predefined material of specified rank within range [1,
    /// NumberOfMaterials()].
    /// </summary>
    static System::String^ MaterialName(int theRank);
    /// <summary>
    /// Returns the type of the predefined material of specified rank within range [1,
    /// NumberOfMaterials()].
    /// </summary>
    static Macad::Occt::Graphic3d_TypeOfMaterial MaterialType(int theRank);
    /// <summary>
    /// Finds the material for specified name.
    /// </summary>
    /// <param name="in]">
    /// theName   name to find
    /// </param>
    /// <param name="out]">
    /// theMat   found material
    /// </param>
    /// <returns>
    /// FALSE if name was unrecognized
    /// </returns>
    static bool MaterialFromName(System::String^ theName, Macad::Occt::Graphic3d_NameOfMaterial% theMat);
    /// <summary>
    /// Returns the material for specified name or Graphic3d_NameOfMaterial_DEFAULT if name is
    /// unknown.
    /// </summary>
    static Macad::Occt::Graphic3d_NameOfMaterial MaterialFromName(System::String^ theName);
    /// <summary>
    /// Returns the material name (within predefined enumeration).
    /// </summary>
    Macad::Occt::Graphic3d_NameOfMaterial Name();
    /// <summary>
    /// Returns the material name within predefined enumeration which has been requested (before
    /// modifications).
    /// </summary>
    Macad::Occt::Graphic3d_NameOfMaterial RequestedName();
    /// <summary>
    /// Returns the given name of this material. This might be:
    /// - given name set by method ::SetMaterialName()
    /// - standard name for a material within enumeration
    /// - "UserDefined" for non-standard material without name specified externally.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ StringName();
    /// <summary>
    /// Returns the given name of this material. This might be:
    /// </summary>
    System::String^ MaterialName();
    /// <summary>
    /// The current material become a "UserDefined" material.
    /// Set the name of the "UserDefined" material.
    /// </summary>
    void SetMaterialName(Macad::Occt::TCollection_AsciiString^ theName);
    /// <summary>
    /// Resets the material with the original values according to
    /// the material name but leave the current color values untouched
    /// for the material of type ASPECT.
    /// </summary>
    void Reset();
    /// <summary>
    /// Returns the diffuse color of the surface.
    /// WARNING! This method does NOT return color for Graphic3d_MATERIAL_ASPECT material (color is
    /// defined by Graphic3d_Aspects::InteriorColor()).
    /// </summary>
    Macad::Occt::Quantity_Color^ Color();
    /// <summary>
    /// Modifies the ambient and diffuse color of the surface.
    /// WARNING! Has no effect for Graphic3d_MATERIAL_ASPECT material (color should be set to
    /// Graphic3d_Aspects::SetInteriorColor()).
    /// </summary>
    void SetColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Returns the transparency coefficient of the surface (1.0 - Alpha); 0.0 means opaque.
    /// </summary>
    float Transparency();
    /// <summary>
    /// Returns the alpha coefficient of the surface (1.0 - Transparency); 1.0 means opaque.
    /// </summary>
    float Alpha();
    /// <summary>
    /// Modifies the transparency coefficient of the surface, where 0 is opaque and 1 is fully
    /// transparent. Transparency is applicable to materials that have at least one of reflection
    /// modes (ambient, diffuse, specular or emissive) enabled. See also SetReflectionModeOn() and
    /// SetReflectionModeOff() methods.
    /// 
    /// Warning: Raises MaterialDefinitionError if given value is a negative value or greater
    /// than 1.0.
    /// </summary>
    void SetTransparency(float theValue);
    /// <summary>
    /// Modifies the alpha coefficient of the surface, where 1.0 is opaque and 0.0 is fully
    /// transparent.
    /// </summary>
    void SetAlpha(float theValue);
    /// <summary>
    /// Returns the ambient color of the surface.
    /// </summary>
    Macad::Occt::Quantity_Color^ AmbientColor();
    /// <summary>
    /// Modifies the ambient color of the surface.
    /// </summary>
    void SetAmbientColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Returns the diffuse color of the surface.
    /// </summary>
    Macad::Occt::Quantity_Color^ DiffuseColor();
    /// <summary>
    /// Modifies the diffuse color of the surface.
    /// </summary>
    void SetDiffuseColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Returns the specular color of the surface.
    /// </summary>
    Macad::Occt::Quantity_Color^ SpecularColor();
    /// <summary>
    /// Modifies the specular color of the surface.
    /// </summary>
    void SetSpecularColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Returns the emissive color of the surface.
    /// </summary>
    Macad::Occt::Quantity_Color^ EmissiveColor();
    /// <summary>
    /// Modifies the emissive color of the surface.
    /// </summary>
    void SetEmissiveColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Returns the luminosity of the surface.
    /// </summary>
    float Shininess();
    /// <summary>
    /// Modifies the luminosity of the surface.
    /// Warning: Raises MaterialDefinitionError if given value is a negative value or greater
    /// than 1.0.
    /// </summary>
    void SetShininess(float theValue);
    /// <summary>
    /// Increases or decreases the luminosity.
    /// </summary>
    /// <param name="theDelta">
    /// a signed percentage
    /// </param>
    void IncreaseShine(float theDelta);
    /// <summary>
    /// Returns the refraction index of the material
    /// </summary>
    float RefractionIndex();
    /// <summary>
    /// Modifies the refraction index of the material.
    /// Warning: Raises MaterialDefinitionError if given value is a lesser than 1.0.
    /// </summary>
    void SetRefractionIndex(float theValue);
    /// <summary>
    /// Returns BSDF (bidirectional scattering distribution function).
    /// </summary>
    Macad::Occt::Graphic3d_BSDF^ BSDF();
    /// <summary>
    /// Modifies the BSDF (bidirectional scattering distribution function).
    /// </summary>
    void SetBSDF(Macad::Occt::Graphic3d_BSDF^ theBSDF);
    /// <summary>
    /// Returns physically based representation of material
    /// </summary>
    Macad::Occt::Graphic3d_PBRMaterial^ PBRMaterial();
    /// <summary>
    /// Modifies the physically based representation of material
    /// </summary>
    void SetPBRMaterial(Macad::Occt::Graphic3d_PBRMaterial^ thePBRMaterial);
    /// <summary>
    /// Returns TRUE if the reflection mode is active, FALSE otherwise.
    /// </summary>
    bool ReflectionMode(Macad::Occt::Graphic3d_TypeOfReflection theType);
    /// <summary>
    /// Returns material type.
    /// </summary>
    Macad::Occt::Graphic3d_TypeOfMaterial MaterialType();
    /// <summary>
    /// Returns TRUE if type of this material is equal to specified type.
    /// </summary>
    bool MaterialType(Macad::Occt::Graphic3d_TypeOfMaterial theType);
    /// <summary>
    /// Set material type.
    /// </summary>
    void SetMaterialType(Macad::Occt::Graphic3d_TypeOfMaterial theType);
    /// <summary>
    /// Returns TRUE if this material differs from specified one.
    /// </summary>
    bool IsDifferent(Macad::Occt::Graphic3d_MaterialAspect^ theOther);
    /// <summary>
    /// Returns TRUE if this material is identical to specified one.
    /// </summary>
    bool IsEqual(Macad::Occt::Graphic3d_MaterialAspect^ theOther);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    /// <summary>
    /// Deactivates the reflective properties of the surface with specified reflection type.
    /// </summary>
    void SetReflectionModeOff(Macad::Occt::Graphic3d_TypeOfReflection theType);
    bool Equals(System::Object^ obj) override;
}; // class Graphic3d_MaterialAspect

//---------------------------------------------------------------------
//  Class  Graphic3d_HatchStyle
//---------------------------------------------------------------------
/// <summary>
/// A class that provides an API to use standard OCCT hatch styles
/// defined in Aspect_HatchStyle enum or to create custom styles
/// from a user-defined bitmap
/// </summary>
public ref class Graphic3d_HatchStyle sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_HatchStyle_h
public:
    Include_Graphic3d_HatchStyle_h
#endif

public:
    Graphic3d_HatchStyle(::Graphic3d_HatchStyle* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_HatchStyle(::Graphic3d_HatchStyle& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_HatchStyle* NativeInstance
    {
        ::Graphic3d_HatchStyle* get()
        {
            return static_cast<::Graphic3d_HatchStyle*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a new custom hatch style with the given pattern and unique style id
    /// </summary>
    /// @warning Raises a program error if given pattern image is not a valid 32*32 bitmap
    Graphic3d_HatchStyle(Macad::Occt::Image_PixMap^ thePattern);
    /// <summary>
    /// Creates a new predefined hatch style with the given id in Aspect_HatchStyle enum.
    /// GPU memory for the pattern will not be allocated.
    /// </summary>
    Graphic3d_HatchStyle(Macad::Occt::Aspect_HatchStyle theType);
    /// <summary>
    /// Returns the pattern of custom hatch style
    /// </summary>
    unsigned char Pattern();
    /// <summary>
    /// In case if predefined OCCT style is used, returns
    /// index in Aspect_HatchStyle enumeration. If the style
    /// is custom, returns unique index of the style
    /// </summary>
    int HatchType();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Graphic3d_HatchStyle^ CreateDowncasted(::Graphic3d_HatchStyle* instance);
}; // class Graphic3d_HatchStyle

//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderAttribute
//---------------------------------------------------------------------
/// <summary>
/// Describes custom vertex shader attribute.
/// </summary>
public ref class Graphic3d_ShaderAttribute sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_ShaderAttribute_h
public:
    Include_Graphic3d_ShaderAttribute_h
#endif

public:
    Graphic3d_ShaderAttribute(::Graphic3d_ShaderAttribute* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_ShaderAttribute(::Graphic3d_ShaderAttribute& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_ShaderAttribute* NativeInstance
    {
        ::Graphic3d_ShaderAttribute* get()
        {
            return static_cast<::Graphic3d_ShaderAttribute*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates new attribute.
    /// </summary>
    Graphic3d_ShaderAttribute(Macad::Occt::TCollection_AsciiString^ theName, int theLocation);
    /// <summary>
    /// Returns name of shader variable.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ Name();
    /// <summary>
    /// Returns attribute location to be bound on GLSL program linkage stage.
    /// </summary>
    int Location();
    static Macad::Occt::Graphic3d_ShaderAttribute^ CreateDowncasted(::Graphic3d_ShaderAttribute* instance);
}; // class Graphic3d_ShaderAttribute

//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderObject
//---------------------------------------------------------------------
/// <summary>
/// This class is responsible for managing shader objects.
/// </summary>
public ref class Graphic3d_ShaderObject sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_ShaderObject_h
public:
    Include_Graphic3d_ShaderObject_h
#endif

public:
    Graphic3d_ShaderObject(::Graphic3d_ShaderObject* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_ShaderObject(::Graphic3d_ShaderObject& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_ShaderObject* NativeInstance
    {
        ::Graphic3d_ShaderObject* get()
        {
            return static_cast<::Graphic3d_ShaderObject*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates new shader object from specified file.
    /// </summary>
    static Macad::Occt::Graphic3d_ShaderObject^ CreateFromFile(Macad::Occt::Graphic3d_TypeOfShaderObject theType, Macad::Occt::TCollection_AsciiString^ thePath);
    /// <summary>
    /// Creates new shader object from specified source.
    /// </summary>
    static Macad::Occt::Graphic3d_ShaderObject^ CreateFromSource(Macad::Occt::Graphic3d_TypeOfShaderObject theType, Macad::Occt::TCollection_AsciiString^ theSource);
    /* Method skipped due to unknown mapping: Graphic3d_ShaderObject CreateFromSource(TCollection_AsciiString theSource, Graphic3d_TypeOfShaderObject theType, ShaderVariableList theUniforms, ShaderVariableList theStageInOuts, TCollection_AsciiString theInName, TCollection_AsciiString theOutName, int theNbGeomInputVerts, ) */
    /* Method skipped due to unknown mapping: Graphic3d_ShaderObject CreateFromSource(TCollection_AsciiString theSource, Graphic3d_TypeOfShaderObject theType, ShaderVariableList theUniforms, ShaderVariableList theStageInOuts, TCollection_AsciiString theInName, TCollection_AsciiString theOutName, int theNbGeomInputVerts, ) */
    /* Method skipped due to unknown mapping: Graphic3d_ShaderObject CreateFromSource(TCollection_AsciiString theSource, Graphic3d_TypeOfShaderObject theType, ShaderVariableList theUniforms, ShaderVariableList theStageInOuts, TCollection_AsciiString theInName, TCollection_AsciiString theOutName, int theNbGeomInputVerts, ) */
    /* Method skipped due to unknown mapping: Graphic3d_ShaderObject CreateFromSource(TCollection_AsciiString theSource, Graphic3d_TypeOfShaderObject theType, ShaderVariableList theUniforms, ShaderVariableList theStageInOuts, TCollection_AsciiString theInName, TCollection_AsciiString theOutName, int theNbGeomInputVerts, ) */
    /// <summary>
    /// Checks if the shader object is valid or not.
    /// </summary>
    bool IsDone();
    /* Method skipped due to unknown mapping: OSD_Path Path() */
    /// <summary>
    /// Returns the source code of the shader object.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ Source();
    /// <summary>
    /// Returns type of the shader object.
    /// </summary>
    Macad::Occt::Graphic3d_TypeOfShaderObject Type();
    /// <summary>
    /// Returns unique ID used to manage resource in graphic driver.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ GetId();
    static Macad::Occt::Graphic3d_ShaderObject^ CreateDowncasted(::Graphic3d_ShaderObject* instance);
}; // class Graphic3d_ShaderObject

//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderVariable
//---------------------------------------------------------------------
/// <summary>
/// Describes custom uniform shader variable.
/// </summary>
public ref class Graphic3d_ShaderVariable sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_ShaderVariable_h
public:
    Include_Graphic3d_ShaderVariable_h
#endif

public:
    Graphic3d_ShaderVariable(::Graphic3d_ShaderVariable* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_ShaderVariable(::Graphic3d_ShaderVariable& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_ShaderVariable* NativeInstance
    {
        ::Graphic3d_ShaderVariable* get()
        {
            return static_cast<::Graphic3d_ShaderVariable*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns name of shader variable.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ Name();
    /// <summary>
    /// Checks if the shader variable is valid or not.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns interface of shader variable value.
    /// </summary>
    Macad::Occt::Graphic3d_ValueInterface^ Value();
    static Macad::Occt::Graphic3d_ShaderVariable^ Create(Macad::Occt::TCollection_AsciiString^ theName, float theValue);
    static Macad::Occt::Graphic3d_ShaderVariable^ Create(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::gp_Vec2f^ theValue);
    static Macad::Occt::Graphic3d_ShaderVariable^ Create(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::gp_Vec3f^ theValue);
    static Macad::Occt::Graphic3d_ShaderVariable^ Create(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec4^ theValue);
    static Macad::Occt::Graphic3d_ShaderVariable^ Create(Macad::Occt::TCollection_AsciiString^ theName, int theValue);
    static Macad::Occt::Graphic3d_ShaderVariable^ Create(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec2i^ theValue);
    static Macad::Occt::Graphic3d_ShaderVariable^ Create(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec3i^ theValue);
    static Macad::Occt::Graphic3d_ShaderVariable^ Create(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec4i^ theValue);
    static Macad::Occt::Graphic3d_ShaderVariable^ CreateDowncasted(::Graphic3d_ShaderVariable* instance);
}; // class Graphic3d_ShaderVariable

//---------------------------------------------------------------------
//  Class  Graphic3d_TextureParams
//---------------------------------------------------------------------
/// <summary>
/// This class describes texture parameters.
/// </summary>
public ref class Graphic3d_TextureParams sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_TextureParams_h
public:
    Include_Graphic3d_TextureParams_h
#endif

public:
    Graphic3d_TextureParams(::Graphic3d_TextureParams* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_TextureParams(::Graphic3d_TextureParams& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_TextureParams* NativeInstance
    {
        ::Graphic3d_TextureParams* get()
        {
            return static_cast<::Graphic3d_TextureParams*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    Graphic3d_TextureParams();
    /// <summary>
    /// Default texture unit to be used, default is Graphic3d_TextureUnit_BaseColor.
    /// </summary>
    Macad::Occt::Graphic3d_TextureUnit TextureUnit();
    /// <summary>
    /// Setup default texture unit.
    /// </summary>
    void SetTextureUnit(Macad::Occt::Graphic3d_TextureUnit theUnit);
    /// <summary>
    /// </summary>
    /// <returns>
    /// TRUE if the texture is modulate.
    /// Default value is FALSE.
    /// </returns>
    bool IsModulate();
    /// <summary>
    /// </summary>
    /// <param name="theToModulate">
    /// turn modulation on/off.
    /// </param>
    void SetModulate(bool theToModulate);
    /// <summary>
    /// </summary>
    /// <returns>
    /// TRUE if the texture repeat is enabled.
    /// Default value is FALSE.
    /// </returns>
    bool IsRepeat();
    /// <summary>
    /// </summary>
    /// <param name="theToRepeat">
    /// turn texture repeat mode ON or OFF (clamping).
    /// </param>
    void SetRepeat(bool theToRepeat);
    /// <summary>
    /// </summary>
    /// <returns>
    /// texture interpolation filter.
    /// Default value is Graphic3d_TOTF_NEAREST.
    /// </returns>
    Macad::Occt::Graphic3d_TypeOfTextureFilter Filter();
    /// <summary>
    /// </summary>
    /// <param name="theFilter">
    /// texture interpolation filter.
    /// </param>
    void SetFilter(Macad::Occt::Graphic3d_TypeOfTextureFilter theFilter);
    /// <summary>
    /// </summary>
    /// <returns>
    /// level of anisontropy texture filter.
    /// Default value is Graphic3d_LOTA_OFF.
    /// </returns>
    Macad::Occt::Graphic3d_LevelOfTextureAnisotropy AnisoFilter();
    /// <summary>
    /// </summary>
    /// <param name="theLevel">
    /// level of anisontropy texture filter.
    /// </param>
    void SetAnisoFilter(Macad::Occt::Graphic3d_LevelOfTextureAnisotropy theLevel);
    /// <summary>
    /// Return rotation angle in degrees; 0 by default.
    /// Complete transformation matrix: Rotation -> Translation -> Scale.
    /// </summary>
    float Rotation();
    /// <summary>
    /// </summary>
    /// <param name="theAngleDegrees">
    /// rotation angle.
    /// </param>
    void SetRotation(float theAngleDegrees);
    /// <summary>
    /// Return scale factor; (1.0; 1.0) by default, which means no scaling.
    /// Complete transformation matrix: Rotation -> Translation -> Scale.
    /// </summary>
    Macad::Occt::Graphic3d_Vec2^ Scale();
    /// <summary>
    /// </summary>
    /// <param name="theScale">
    /// scale factor.
    /// </param>
    void SetScale(Macad::Occt::Graphic3d_Vec2^ theScale);
    /// <summary>
    /// Return translation vector; (0.0; 0.0), which means no translation.
    /// Complete transformation matrix: Rotation -> Translation -> Scale.
    /// </summary>
    Macad::Occt::Graphic3d_Vec2^ Translation();
    /// <summary>
    /// </summary>
    /// <param name="theVec">
    /// translation vector.
    /// </param>
    void SetTranslation(Macad::Occt::Graphic3d_Vec2^ theVec);
    /// <summary>
    /// </summary>
    /// <returns>
    /// texture coordinates generation mode.
    /// Default value is Graphic3d_TOTM_MANUAL.
    /// </returns>
    Macad::Occt::Graphic3d_TypeOfTextureMode GenMode();
    /// <summary>
    /// </summary>
    /// <returns>
    /// texture coordinates generation plane S.
    /// </returns>
    Macad::Occt::Graphic3d_Vec4^ GenPlaneS();
    /// <summary>
    /// </summary>
    /// <returns>
    /// texture coordinates generation plane T.
    /// </returns>
    Macad::Occt::Graphic3d_Vec4^ GenPlaneT();
    /// <summary>
    /// Setup texture coordinates generation mode.
    /// </summary>
    void SetGenMode(Macad::Occt::Graphic3d_TypeOfTextureMode theMode, Macad::Occt::Graphic3d_Vec4^ thePlaneS, Macad::Occt::Graphic3d_Vec4^ thePlaneT);
    /// <summary>
    /// </summary>
    /// <returns>
    /// base texture mipmap level; 0 by default.
    /// </returns>
    int BaseLevel();
    /// <summary>
    /// Return maximum texture mipmap array level; 1000 by default.
    /// Real rendering limit will take into account mipmap generation flags and presence of mipmaps in
    /// loaded image.
    /// </summary>
    int MaxLevel();
    /// <summary>
    /// Setups texture mipmap array levels range.
    /// The lowest value will be the base level.
    /// The remaining one will be the maximum level.
    /// </summary>
    void SetLevelsRange(int theFirstLevel, int theSecondLevel);
    /// <summary>
    /// Setups texture mipmap array levels range.
    /// The lowest value will be the base level.
    /// The remaining one will be the maximum level.
    /// </summary>
    void SetLevelsRange(int theFirstLevel);
    /// <summary>
    /// Return modification counter of parameters related to sampler state.
    /// </summary>
    unsigned int SamplerRevision();
    static Macad::Occt::Graphic3d_TextureParams^ CreateDowncasted(::Graphic3d_TextureParams* instance);
}; // class Graphic3d_TextureParams

//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderProgram
//---------------------------------------------------------------------
/// <summary>
/// This class is responsible for managing shader programs.
/// </summary>
public ref class Graphic3d_ShaderProgram sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_ShaderProgram_h
public:
    Include_Graphic3d_ShaderProgram_h
#endif

public:
    Graphic3d_ShaderProgram(::Graphic3d_ShaderProgram* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_ShaderProgram(::Graphic3d_ShaderProgram& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_ShaderProgram* NativeInstance
    {
        ::Graphic3d_ShaderProgram* get()
        {
            return static_cast<::Graphic3d_ShaderProgram*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates new empty program object.
    /// </summary>
    Graphic3d_ShaderProgram();
    /// <summary>
    /// Checks if the program object is valid or not.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns unique ID used to manage resource in graphic driver.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ GetId();
    /// <summary>
    /// Sets unique ID used to manage resource in graphic driver.
    /// WARNING! Graphic3d_ShaderProgram constructor generates a unique id for proper resource
    /// management; however if application overrides it, it is responsibility of application to avoid
    /// name collisions.
    /// </summary>
    void SetId(Macad::Occt::TCollection_AsciiString^ theId);
    /// <summary>
    /// Returns GLSL header (version code and extensions).
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ Header();
    /// <summary>
    /// Setup GLSL header containing language version code and used extensions.
    /// Will be prepended to the very beginning of the source code.
    /// Example:
    /// </summary>
    /// @code
    /// #version 300 es
    /// #extension GL_ARB_bindless_texture : require
    /// @endcode
    void SetHeader(Macad::Occt::TCollection_AsciiString^ theHeader);
    /// <summary>
    /// Append line to GLSL header.
    /// </summary>
    void AppendToHeader(Macad::Occt::TCollection_AsciiString^ theHeaderLine);
    /// <summary>
    /// Return the length of array of light sources (THE_MAX_LIGHTS),
    /// to be used for initialization occLightSources.
    /// Default value is THE_MAX_LIGHTS_DEFAULT.
    /// </summary>
    int NbLightsMax();
    /// <summary>
    /// Specify the length of array of light sources (THE_MAX_LIGHTS).
    /// </summary>
    void SetNbLightsMax(int theNbLights);
    /// <summary>
    /// Return the length of array of shadow maps (THE_NB_SHADOWMAPS); 0 by default.
    /// </summary>
    int NbShadowMaps();
    /// <summary>
    /// Specify the length of array of shadow maps (THE_NB_SHADOWMAPS).
    /// </summary>
    void SetNbShadowMaps(int theNbMaps);
    /// <summary>
    /// Return the length of array of clipping planes (THE_MAX_CLIP_PLANES),
    /// to be used for initialization occClipPlaneEquations.
    /// Default value is THE_MAX_CLIP_PLANES_DEFAULT.
    /// </summary>
    int NbClipPlanesMax();
    /// <summary>
    /// Specify the length of array of clipping planes (THE_MAX_CLIP_PLANES).
    /// </summary>
    void SetNbClipPlanesMax(int theNbPlanes);
    /// <summary>
    /// Attaches shader object to the program object.
    /// </summary>
    bool AttachShader(Macad::Occt::Graphic3d_ShaderObject^ theShader);
    /// <summary>
    /// Detaches shader object from the program object.
    /// </summary>
    bool DetachShader(Macad::Occt::Graphic3d_ShaderObject^ theShader);
    /// <summary>
    /// Returns list of attached shader objects.
    /// </summary>
    Macad::Occt::Graphic3d_ShaderObjectList^ ShaderObjects();
    /// <summary>
    /// The list of currently pushed but not applied custom uniform variables.
    /// This list is automatically cleared after applying to GLSL program.
    /// </summary>
    Macad::Occt::Graphic3d_ShaderVariableList^ Variables();
    /// <summary>
    /// Return the list of custom vertex attributes.
    /// </summary>
    Macad::Occt::Graphic3d_ShaderAttributeList^ VertexAttributes();
    /// <summary>
    /// Assign the list of custom vertex attributes.
    /// Should be done before GLSL program initialization.
    /// </summary>
    void SetVertexAttributes(Macad::Occt::Graphic3d_ShaderAttributeList^ theAttributes);
    /// <summary>
    /// Returns the number (1+) of Fragment Shader outputs to be written to
    /// (more than 1 can be in case of multiple draw buffers); 1 by default.
    /// </summary>
    int NbFragmentOutputs();
    /// <summary>
    /// Sets the number of Fragment Shader outputs to be written to.
    /// Should be done before GLSL program initialization.
    /// </summary>
    void SetNbFragmentOutputs(int theNbOutputs);
    /// <summary>
    /// Return true if Fragment Shader should perform alpha test; FALSE by default.
    /// </summary>
    bool HasAlphaTest();
    /// <summary>
    /// Set if Fragment Shader should perform alpha test.
    /// Note that this flag is designed for usage with - custom shader program may discard fragment
    /// regardless this flag.
    /// </summary>
    void SetAlphaTest(bool theAlphaTest);
    /// <summary>
    /// Return TRUE if standard program header should define default texture sampler occSampler0; TRUE
    /// by default for compatibility.
    /// </summary>
    bool HasDefaultSampler();
    /// <summary>
    /// Set if standard program header should define default texture sampler occSampler0.
    /// </summary>
    void SetDefaultSampler(bool theHasDefSampler);
    /// <summary>
    /// Return if Fragment Shader color should output to OIT buffers; OFF by default.
    /// </summary>
    Macad::Occt::Graphic3d_RenderTransparentMethod OitOutput();
    /// <summary>
    /// Set if Fragment Shader color should output to OIT buffers.
    /// Note that weighted OIT also requires at least 2 Fragment Outputs (color + coverage),
    /// and Depth Peeling requires at least 3 Fragment Outputs (depth + front color + back color),
    /// </summary>
    void SetOitOutput(Macad::Occt::Graphic3d_RenderTransparentMethod theOutput);
    /// <summary>
    /// Return TRUE if standard program header should define functions and variables used in PBR
    /// pipeline. FALSE by default.
    /// </summary>
    bool IsPBR();
    /// <summary>
    /// Sets whether standard program header should define functions and variables used in PBR
    /// pipeline.
    /// </summary>
    void SetPBR(bool theIsPBR);
    /// <summary>
    /// Return texture units declared within the program, @sa Graphic3d_TextureSetBits.
    /// </summary>
    int TextureSetBits();
    /// <summary>
    /// Set texture units declared within the program.
    /// </summary>
    void SetTextureSetBits(int theBits);
    bool PushVariable(Macad::Occt::TCollection_AsciiString^ theName, float theValue);
    bool PushVariable(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::gp_Vec2f^ theValue);
    bool PushVariable(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::gp_Vec3f^ theValue);
    bool PushVariable(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec4^ theValue);
    bool PushVariable(Macad::Occt::TCollection_AsciiString^ theName, int theValue);
    bool PushVariable(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec2i^ theValue);
    bool PushVariable(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec3i^ theValue);
    bool PushVariable(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec4i^ theValue);
    /// <summary>
    /// Removes all custom uniform variables from the program.
    /// </summary>
    void ClearVariables();
    /// <summary>
    /// Pushes float uniform.
    /// </summary>
    bool PushVariableFloat(Macad::Occt::TCollection_AsciiString^ theName, float theValue);
    /// <summary>
    /// Pushes vec2 uniform.
    /// </summary>
    bool PushVariableVec2(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec2^ theValue);
    /// <summary>
    /// Pushes vec3 uniform.
    /// </summary>
    bool PushVariableVec3(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec3^ theValue);
    /// <summary>
    /// Pushes vec4 uniform.
    /// </summary>
    bool PushVariableVec4(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec4^ theValue);
    /// <summary>
    /// Pushes int uniform.
    /// </summary>
    bool PushVariableInt(Macad::Occt::TCollection_AsciiString^ theName, int theValue);
    /// <summary>
    /// Pushes vec2i uniform.
    /// </summary>
    bool PushVariableVec2i(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec2i^ theValue);
    /// <summary>
    /// Pushes vec3i uniform.
    /// </summary>
    bool PushVariableVec3i(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec3i^ theValue);
    /// <summary>
    /// Pushes vec4i uniform.
    /// </summary>
    bool PushVariableVec4i(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec4i^ theValue);
    /// <summary>
    /// The path to GLSL programs determined from CSF_ShadersDirectory or CASROOT environment
    /// variables.
    /// </summary>
    /// <returns>
    /// the root folder with default GLSL programs.
    /// </returns>
    static Macad::Occt::TCollection_AsciiString^ ShadersFolder();
    static Macad::Occt::Graphic3d_ShaderProgram^ CreateDowncasted(::Graphic3d_ShaderProgram* instance);
}; // class Graphic3d_ShaderProgram

//---------------------------------------------------------------------
//  Class  Graphic3d_TextureRoot
//---------------------------------------------------------------------
/// <summary>
/// This is the texture root class enable the dialog with the GraphicDriver allows the loading of
/// texture.
/// </summary>
public ref class Graphic3d_TextureRoot
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_TextureRoot_h
public:
    Include_Graphic3d_TextureRoot_h
#endif

protected:
    Graphic3d_TextureRoot(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    Graphic3d_TextureRoot(::Graphic3d_TextureRoot* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_TextureRoot(::Graphic3d_TextureRoot& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_TextureRoot* NativeInstance
    {
        ::Graphic3d_TextureRoot* get()
        {
            return static_cast<::Graphic3d_TextureRoot*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// The path to textures determined from CSF_MDTVTexturesDirectory or CASROOT environment
    /// variables.
    /// </summary>
    /// <returns>
    /// the root folder with default textures.
    /// </returns>
    static Macad::Occt::TCollection_AsciiString^ TexturesFolder();
    /// <summary>
    /// Checks if a texture class is valid or not.
    /// </summary>
    /// <returns>
    /// true if the construction of the class is correct
    /// </returns>
    bool IsDone();
    /* Method skipped due to unknown mapping: OSD_Path Path() */
    /// <summary>
    /// </summary>
    /// <returns>
    /// the texture type.
    /// </returns>
    Macad::Occt::Graphic3d_TypeOfTexture Type();
    /// <summary>
    /// This ID will be used to manage resource in graphic driver.
    /// 
    /// Default implementation generates unique ID within constructor;
    /// inheritors may re-initialize it within their constructor,
    /// but should never modify it afterwards.
    /// 
    /// Multiple Graphic3d_TextureRoot instances with same ID
    /// will be treated as single texture with different parameters
    /// to optimize memory usage though this will be more natural
    /// to use same instance of Graphic3d_TextureRoot when possible.
    /// 
    /// If this ID is set to empty string by inheritor,
    /// then independent graphical resource will be created
    /// for each instance of Graphic3d_AspectFillArea3d where texture will be used.
    /// 
    /// </summary>
    /// <returns>
    /// texture identifier.
    /// </returns>
    Macad::Occt::TCollection_AsciiString^ GetId();
    /// <summary>
    /// Return image revision.
    /// </summary>
    long long unsigned int Revision();
    /// <summary>
    /// Update image revision.
    /// Can be used for signaling changes in the texture source (e.g. file update, pixmap update)
    /// without re-creating texture source itself (since unique id should be never modified).
    /// </summary>
    void UpdateRevision();
    /// <summary>
    /// This method will be called by graphic driver each time when texture resource should be
    /// created. It is called in front of GetImage() for uploading compressed image formats natively
    /// supported by GPU.
    /// </summary>
    /// <param name="in]">
    /// theSupported  the list of supported compressed texture formats;
    /// returning image in unsupported format will result in texture upload
    /// failure
    /// </param>
    /// <returns>
    /// compressed pixmap or NULL if image is not in supported compressed format
    /// </returns>
    Macad::Occt::Image_CompressedPixMap^ GetCompressedImage(Macad::Occt::Image_SupportedFormats^ theSupported);
    /// <summary>
    /// This method will be called by graphic driver each time when texture resource should be
    /// created. Default constructors allow defining the texture source as path to texture image or
    /// directly as pixmap. If the source is defined as path, then the image will be dynamically
    /// loaded when this method is called (and no copy will be preserved in this class instance).
    /// Inheritors may dynamically generate the image.
    /// Notice, image data should be in Bottom-Up order (see Image_PixMap::IsTopDown())!
    /// </summary>
    /// <returns>
    /// the image for texture.
    /// </returns>
    Macad::Occt::Image_PixMap^ GetImage(Macad::Occt::Image_SupportedFormats^ theSupported);
    /// <summary>
    /// </summary>
    /// <returns>
    /// low-level texture parameters
    /// </returns>
    Macad::Occt::Graphic3d_TextureParams^ GetParams();
    /// <summary>
    /// Return flag indicating color nature of values within the texture; TRUE by default.
    /// 
    /// This flag will be used to interpret 8-bit per channel RGB(A) images as sRGB(A) textures
    /// with implicit linearizion of color components.
    /// Has no effect on images with floating point values (always considered linearized).
    /// 
    /// When set to FALSE, such images will be interpreted as textures will be linear component
    /// values, which is useful for RGB(A) textures defining non-color properties (like
    /// Normalmap/Metalness/Roughness).
    /// </summary>
    bool IsColorMap();
    /// <summary>
    /// Set flag indicating color nature of values within the texture.
    /// </summary>
    void SetColorMap(bool theIsColor);
    /// <summary>
    /// Returns whether mipmaps should be generated or not.
    /// </summary>
    bool HasMipmaps();
    /// <summary>
    /// Sets whether to generate mipmaps or not.
    /// </summary>
    void SetMipmapsGeneration(bool theToGenerateMipmaps);
    /// <summary>
    /// Returns whether row's memory layout is top-down.
    /// </summary>
    bool IsTopDown();
    static Macad::Occt::Graphic3d_TextureRoot^ CreateDowncasted(::Graphic3d_TextureRoot* instance);
}; // class Graphic3d_TextureRoot

//---------------------------------------------------------------------
//  Class  Graphic3d_TextureMap
//---------------------------------------------------------------------
/// <summary>
/// This is an abstract class for managing texture applicable on polygons.
/// </summary>
public ref class Graphic3d_TextureMap
    : public Macad::Occt::Graphic3d_TextureRoot
{

#ifdef Include_Graphic3d_TextureMap_h
public:
    Include_Graphic3d_TextureMap_h
#endif

protected:
    Graphic3d_TextureMap(InitMode init)
        : Macad::Occt::Graphic3d_TextureRoot( init )
    {}

public:
    Graphic3d_TextureMap(::Graphic3d_TextureMap* nativeInstance)
        : Macad::Occt::Graphic3d_TextureRoot( nativeInstance )
    {}

    Graphic3d_TextureMap(::Graphic3d_TextureMap& nativeInstance)
        : Macad::Occt::Graphic3d_TextureRoot( nativeInstance )
    {}

    property ::Graphic3d_TextureMap* NativeInstance
    {
        ::Graphic3d_TextureMap* get()
        {
            return static_cast<::Graphic3d_TextureMap*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// enable texture smoothing
    /// </summary>
    void EnableSmooth();
    /// <summary>
    /// Returns TRUE if the texture is smoothed.
    /// </summary>
    bool IsSmoothed();
    /// <summary>
    /// disable texture smoothing
    /// </summary>
    void DisableSmooth();
    /// <summary>
    /// enable texture modulate mode.
    /// the image is modulate with the shading of the surface.
    /// </summary>
    void EnableModulate();
    /// <summary>
    /// disable texture modulate mode.
    /// the image is directly decal on the surface.
    /// </summary>
    void DisableModulate();
    /// <summary>
    /// Returns TRUE if the texture is modulate.
    /// </summary>
    bool IsModulate();
    /// <summary>
    /// use this methods if you want to enable
    /// texture repetition on your objects.
    /// </summary>
    void EnableRepeat();
    /// <summary>
    /// use this methods if you want to disable
    /// texture repetition on your objects.
    /// </summary>
    void DisableRepeat();
    /// <summary>
    /// Returns TRUE if the texture repeat is enable.
    /// </summary>
    bool IsRepeat();
    /// <summary>
    /// </summary>
    /// <returns>
    /// level of anisotropy texture filter.
    /// Default value is Graphic3d_LOTA_OFF.
    /// </returns>
    Macad::Occt::Graphic3d_LevelOfTextureAnisotropy AnisoFilter();
    /// <summary>
    /// </summary>
    /// <param name="theLevel">
    /// level of anisotropy texture filter.
    /// </param>
    void SetAnisoFilter(Macad::Occt::Graphic3d_LevelOfTextureAnisotropy theLevel);
    static Macad::Occt::Graphic3d_TextureMap^ CreateDowncasted(::Graphic3d_TextureMap* instance);
}; // class Graphic3d_TextureMap

//---------------------------------------------------------------------
//  Class  Graphic3d_TextureSet
//---------------------------------------------------------------------
/// <summary>
/// Class holding array of textures to be mapped as a set.
/// Textures should be defined in ascending order of texture units within the set.
/// </summary>
public ref class Graphic3d_TextureSet sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Graphic3d_TextureMap^>
{

#ifdef Include_Graphic3d_TextureSet_h
public:
    Include_Graphic3d_TextureSet_h
#endif

public:
    Graphic3d_TextureSet(::Graphic3d_TextureSet* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_TextureSet(::Graphic3d_TextureSet& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_TextureSet* NativeInstance
    {
        ::Graphic3d_TextureSet* get()
        {
            return static_cast<::Graphic3d_TextureSet*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    Graphic3d_TextureSet();
    /// <summary>
    /// Constructor.
    /// </summary>
    Graphic3d_TextureSet(int theNbTextures);
    /// <summary>
    /// Constructor for a single texture.
    /// </summary>
    Graphic3d_TextureSet(Macad::Occt::Graphic3d_TextureMap^ theTexture);
    /// <summary>
    /// Return TRUE if texture array is empty.
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// Return number of textures.
    /// </summary>
    int Size();
    /// <summary>
    /// Return the lower index in texture set.
    /// </summary>
    int Lower();
    /// <summary>
    /// Return the upper index in texture set.
    /// </summary>
    int Upper();
    /// <summary>
    /// Return the first texture.
    /// </summary>
    Macad::Occt::Graphic3d_TextureMap^ First();
    /// <summary>
    /// Return the first texture.
    /// </summary>
    void SetFirst(Macad::Occt::Graphic3d_TextureMap^ theTexture);
    /// <summary>
    /// Return the texture at specified position within [0, Size()) range.
    /// </summary>
    virtual Macad::Occt::Graphic3d_TextureMap^ Value(int theIndex);
    /// <summary>
    /// Return the texture at specified position within [0, Size()) range.
    /// </summary>
    void SetValue(int theIndex, Macad::Occt::Graphic3d_TextureMap^ theTexture);
    static Macad::Occt::Graphic3d_TextureSet^ CreateDowncasted(::Graphic3d_TextureSet* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Graphic3d_TextureMap^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Graphic3d_TextureSet

//---------------------------------------------------------------------
//  Class  Graphic3d_Aspects
//---------------------------------------------------------------------
/// <summary>
/// This class defines graphic attributes.
/// </summary>
public ref class Graphic3d_Aspects
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_Aspects_h
public:
    Include_Graphic3d_Aspects_h
#endif

protected:
    Graphic3d_Aspects(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    Graphic3d_Aspects(::Graphic3d_Aspects* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_Aspects(::Graphic3d_Aspects& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_Aspects* NativeInstance
    {
        ::Graphic3d_Aspects* get()
        {
            return static_cast<::Graphic3d_Aspects*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a context table for drawing primitives defined with the following default values:
    /// </summary>
    Graphic3d_Aspects();
    /// <summary>
    /// Return interior rendering style; Aspect_IS_SOLID by default.
    /// </summary>
    Macad::Occt::Aspect_InteriorStyle InteriorStyle();
    /// <summary>
    /// Modifies the interior type used for rendering
    /// </summary>
    void SetInteriorStyle(Macad::Occt::Aspect_InteriorStyle theStyle);
    /// <summary>
    /// Returns shading model; Graphic3d_TypeOfShadingModel_DEFAULT by default.
    /// Graphic3d_TOSM_DEFAULT means that Shading Model set as default for entire Viewer will be used.
    /// </summary>
    Macad::Occt::Graphic3d_TypeOfShadingModel ShadingModel();
    /// <summary>
    /// Sets shading model
    /// </summary>
    void SetShadingModel(Macad::Occt::Graphic3d_TypeOfShadingModel theShadingModel);
    /// <summary>
    /// Returns the way how alpha value should be treated (Graphic3d_AlphaMode_BlendAuto by default,
    /// for backward compatibility).
    /// </summary>
    Macad::Occt::Graphic3d_AlphaMode AlphaMode();
    /// <summary>
    /// Returns alpha cutoff threshold, for discarding fragments within Graphic3d_AlphaMode_Mask mode
    /// (0.5 by default). If the alpha value is greater than or equal to this value then it is
    /// rendered as fully opaque, otherwise, it is rendered as fully transparent.
    /// </summary>
    float AlphaCutoff();
    /// <summary>
    /// Defines the way how alpha value should be treated.
    /// </summary>
    void SetAlphaMode(Macad::Occt::Graphic3d_AlphaMode theMode, float theAlphaCutoff);
    /// <summary>
    /// Defines the way how alpha value should be treated.
    /// </summary>
    void SetAlphaMode(Macad::Occt::Graphic3d_AlphaMode theMode);
    /// <summary>
    /// Return color
    /// </summary>
    Macad::Occt::Quantity_ColorRGBA^ ColorRGBA();
    /// <summary>
    /// Return the color.
    /// </summary>
    Macad::Occt::Quantity_Color^ Color();
    /// <summary>
    /// Modifies the color.
    /// </summary>
    void SetColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Return interior color.
    /// </summary>
    Macad::Occt::Quantity_Color^ InteriorColor();
    /// <summary>
    /// Return interior color.
    /// </summary>
    Macad::Occt::Quantity_ColorRGBA^ InteriorColorRGBA();
    /// <summary>
    /// Modifies the color of the interior of the face
    /// </summary>
    void SetInteriorColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Modifies the color of the interior of the face
    /// </summary>
    void SetInteriorColor(Macad::Occt::Quantity_ColorRGBA^ theColor);
    /// <summary>
    /// Return back interior color.
    /// </summary>
    Macad::Occt::Quantity_Color^ BackInteriorColor();
    /// <summary>
    /// Return back interior color.
    /// </summary>
    Macad::Occt::Quantity_ColorRGBA^ BackInteriorColorRGBA();
    /// <summary>
    /// Modifies the color of the interior of the back face
    /// </summary>
    void SetBackInteriorColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Modifies the color of the interior of the back face
    /// </summary>
    void SetBackInteriorColor(Macad::Occt::Quantity_ColorRGBA^ theColor);
    /// <summary>
    /// Returns the surface material of external faces
    /// </summary>
    Macad::Occt::Graphic3d_MaterialAspect^ FrontMaterial();
    /// <summary>
    /// Returns the surface material of external faces
    /// </summary>
    Macad::Occt::Graphic3d_MaterialAspect^ ChangeFrontMaterial();
    /// <summary>
    /// Modifies the surface material of external faces
    /// </summary>
    void SetFrontMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theMaterial);
    /// <summary>
    /// Returns the surface material of internal faces
    /// </summary>
    Macad::Occt::Graphic3d_MaterialAspect^ BackMaterial();
    /// <summary>
    /// Returns the surface material of internal faces
    /// </summary>
    Macad::Occt::Graphic3d_MaterialAspect^ ChangeBackMaterial();
    /// <summary>
    /// Modifies the surface material of internal faces
    /// </summary>
    void SetBackMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theMaterial);
    /// <summary>
    /// Return face culling mode; Graphic3d_FaceCulling_BackClosed by default.
    /// A back-facing polygon is defined as a polygon whose
    /// vertices are in a clockwise order with respect to screen coordinates.
    /// </summary>
    Macad::Occt::Graphic3d_TypeOfBackfacingModel FaceCulling();
    /// <summary>
    /// Set face culling mode.
    /// </summary>
    void SetFaceCulling(Macad::Occt::Graphic3d_TypeOfBackfacingModel theCulling);
    /// <summary>
    /// Returns true if material properties should be distinguished for back and front faces (false by
    /// default).
    /// </summary>
    bool Distinguish();
    /// <summary>
    /// Set material distinction between front and back faces.
    /// </summary>
    void SetDistinguish(bool toDistinguish);
    /// <summary>
    /// Allows material distinction between front and back faces.
    /// </summary>
    void SetDistinguishOn();
    /// <summary>
    /// Forbids material distinction between front and back faces.
    /// </summary>
    void SetDistinguishOff();
    /// <summary>
    /// Return shader program.
    /// </summary>
    Macad::Occt::Graphic3d_ShaderProgram^ ShaderProgram();
    /// <summary>
    /// Sets up OpenGL/GLSL shader program.
    /// </summary>
    void SetShaderProgram(Macad::Occt::Graphic3d_ShaderProgram^ theProgram);
    /// <summary>
    /// Return texture array to be mapped.
    /// </summary>
    Macad::Occt::Graphic3d_TextureSet^ TextureSet();
    /// <summary>
    /// Setup texture array to be mapped.
    /// </summary>
    void SetTextureSet(Macad::Occt::Graphic3d_TextureSet^ theTextures);
    /// <summary>
    /// Return texture to be mapped.
    /// </summary>
    Macad::Occt::Graphic3d_TextureMap^ TextureMap();
    /// <summary>
    /// Assign texture to be mapped.
    /// See also SetTextureMapOn() to actually activate texture mapping.
    /// </summary>
    void SetTextureMap(Macad::Occt::Graphic3d_TextureMap^ theTexture);
    /// <summary>
    /// Return true if texture mapping is enabled (false by default).
    /// </summary>
    bool ToMapTexture();
    /// <summary>
    /// Return true if texture mapping is enabled (false by default).
    /// </summary>
    bool TextureMapState();
    /// <summary>
    /// Enable or disable texture mapping (has no effect if texture is not set).
    /// </summary>
    void SetTextureMapOn(bool theToMap);
    /// <summary>
    /// Enable texture mapping (has no effect if texture is not set).
    /// </summary>
    void SetTextureMapOn();
    /// <summary>
    /// Disable texture mapping.
    /// </summary>
    void SetTextureMapOff();
    /// <summary>
    /// Returns current polygon offsets settings.
    /// </summary>
    Macad::Occt::Graphic3d_PolygonOffset^ PolygonOffset();
    /// <summary>
    /// Sets polygon offsets settings.
    /// </summary>
    void SetPolygonOffset(Macad::Occt::Graphic3d_PolygonOffset^ theOffset);
    /// <summary>
    /// Returns current polygon offsets settings.
    /// </summary>
    void PolygonOffsets(int% theMode, float% theFactor, float% theUnits);
    /// <summary>
    /// Sets up OpenGL polygon offsets mechanism.
    /// <aMode> parameter can contain various combinations of
    /// Aspect_PolygonOffsetMode enumeration elements (Aspect_POM_None means
    /// that polygon offsets are not changed).
    /// If <aMode> is different from Aspect_POM_Off and Aspect_POM_None, then <aFactor> and <aUnits>
    /// arguments are used by graphic renderer to calculate a depth offset value:
    /// 
    /// offset = <aFactor> * m + <aUnits> * r, where
    /// m - maximum depth slope for the polygon currently being displayed,
    /// r - minimum window coordinates depth resolution (implementation-specific)
    /// 
    /// Default settings for OCC 3D viewer: mode = Aspect_POM_Fill, factor = 1., units = 0.
    /// 
    /// Negative offset values move polygons closer to the viewport,
    /// while positive values shift polygons away.
    /// Consult OpenGL reference for details (glPolygonOffset function description).
    /// </summary>
    void SetPolygonOffsets(int theMode, float theFactor, float theUnits);
    /// <summary>
    /// Sets up OpenGL polygon offsets mechanism.
    /// <aMode> parameter can contain various combinations of
    /// Aspect_PolygonOffsetMode enumeration elements (Aspect_POM_None means
    /// that polygon offsets are not changed).
    /// If <aMode> is different from Aspect_POM_Off and Aspect_POM_None, then <aFactor> and <aUnits>
    /// arguments are used by graphic renderer to calculate a depth offset value:
    /// 
    /// offset = <aFactor> * m + <aUnits> * r, where
    /// m - maximum depth slope for the polygon currently being displayed,
    /// r - minimum window coordinates depth resolution (implementation-specific)
    /// 
    /// Default settings for OCC 3D viewer: mode = Aspect_POM_Fill, factor = 1., units = 0.
    /// 
    /// Negative offset values move polygons closer to the viewport,
    /// while positive values shift polygons away.
    /// Consult OpenGL reference for details (glPolygonOffset function description).
    /// </summary>
    void SetPolygonOffsets(int theMode, float theFactor);
    /// <summary>
    /// Sets up OpenGL polygon offsets mechanism.
    /// <aMode> parameter can contain various combinations of
    /// Aspect_PolygonOffsetMode enumeration elements (Aspect_POM_None means
    /// that polygon offsets are not changed).
    /// If <aMode> is different from Aspect_POM_Off and Aspect_POM_None, then <aFactor> and <aUnits>
    /// arguments are used by graphic renderer to calculate a depth offset value:
    /// 
    /// offset = <aFactor> * m + <aUnits> * r, where
    /// m - maximum depth slope for the polygon currently being displayed,
    /// r - minimum window coordinates depth resolution (implementation-specific)
    /// 
    /// Default settings for OCC 3D viewer: mode = Aspect_POM_Fill, factor = 1., units = 0.
    /// 
    /// Negative offset values move polygons closer to the viewport,
    /// while positive values shift polygons away.
    /// Consult OpenGL reference for details (glPolygonOffset function description).
    /// </summary>
    void SetPolygonOffsets(int theMode);
    /// <summary>
    /// Return line type; Aspect_TOL_SOLID by default.
    /// </summary>
    Macad::Occt::Aspect_TypeOfLine LineType();
    /// <summary>
    /// Modifies the line type
    /// </summary>
    void SetLineType(Macad::Occt::Aspect_TypeOfLine theType);
    /// <summary>
    /// Return custom stipple line pattern; 0xFFFF by default.
    /// </summary>
    short unsigned int LinePattern();
    /// <summary>
    /// Modifies the stipple line pattern, and changes line type to Aspect_TOL_USERDEFINED for
    /// non-standard pattern.
    /// </summary>
    void SetLinePattern(short unsigned int thePattern);
    /// <summary>
    /// Return a multiplier for each bit in the line stipple pattern within [1, 256] range; 1 by
    /// default.
    /// </summary>
    short unsigned int LineStippleFactor();
    /// <summary>
    /// Set a multiplier for each bit in the line stipple pattern.
    /// </summary>
    void SetLineStippleFactor(short unsigned int theFactor);
    /// <summary>
    /// Return width for edges in pixels; 1.0 by default.
    /// </summary>
    float LineWidth();
    /// <summary>
    /// Modifies the line thickness
    /// Warning: Raises Standard_OutOfRange if the width is a negative value.
    /// </summary>
    void SetLineWidth(float theWidth);
    /// <summary>
    /// Return stipple line pattern for line type.
    /// </summary>
    static short unsigned int DefaultLinePatternForType(Macad::Occt::Aspect_TypeOfLine theType);
    /// <summary>
    /// Return line type for stipple line pattern.
    /// </summary>
    static Macad::Occt::Aspect_TypeOfLine DefaultLineTypeForPattern(short unsigned int thePattern);
    /// <summary>
    /// Return marker type; Aspect_TOM_POINT by default.
    /// </summary>
    Macad::Occt::Aspect_TypeOfMarker MarkerType();
    /// <summary>
    /// Modifies the type of marker.
    /// </summary>
    void SetMarkerType(Macad::Occt::Aspect_TypeOfMarker theType);
    /// <summary>
    /// Return marker scale factor; 1.0 by default.
    /// </summary>
    float MarkerScale();
    /// <summary>
    /// Modifies the scale factor.
    /// Marker type Aspect_TOM_POINT is not affected by the marker size scale factor.
    /// It is always the smallest displayable dot.
    /// Warning: Raises Standard_OutOfRange if the scale is a negative value.
    /// </summary>
    void SetMarkerScale(float theScale);
    /// <summary>
    /// Returns marker's image texture.
    /// Could be null handle if marker aspect has been initialized as default type of marker.
    /// </summary>
    Macad::Occt::Graphic3d_MarkerImage^ MarkerImage();
    /// <summary>
    /// Set marker's image texture.
    /// </summary>
    void SetMarkerImage(Macad::Occt::Graphic3d_MarkerImage^ theImage);
    /// <summary>
    /// Returns TRUE if marker should be drawn using marker sprite (either user-provided or
    /// generated).
    /// </summary>
    bool IsMarkerSprite();
    /// <summary>
    /// Returns the font; NULL string by default.
    /// </summary>
    Macad::Occt::TCollection_HAsciiString^ TextFont();
    /// <summary>
    /// Modifies the font.
    /// </summary>
    void SetTextFont(Macad::Occt::TCollection_HAsciiString^ theFont);
    /* Method skipped due to unknown mapping: Font_FontAspect TextFontAspect() */
    /* Method skipped due to unknown mapping: void SetTextFontAspect(Font_FontAspect theFontAspect, ) */
    /// <summary>
    /// Returns display type; Aspect_TODT_NORMAL by default.
    /// </summary>
    Macad::Occt::Aspect_TypeOfDisplayText TextDisplayType();
    /// <summary>
    /// Sets display type.
    /// </summary>
    void SetTextDisplayType(Macad::Occt::Aspect_TypeOfDisplayText theType);
    /// <summary>
    /// Returns text background/shadow color; equals to EdgeColor() property.
    /// </summary>
    Macad::Occt::Quantity_ColorRGBA^ ColorSubTitleRGBA();
    /// <summary>
    /// Return text background/shadow color; equals to EdgeColor() property.
    /// </summary>
    Macad::Occt::Quantity_Color^ ColorSubTitle();
    /// <summary>
    /// Modifies text background/shadow color; equals to EdgeColor() property.
    /// </summary>
    void SetColorSubTitle(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Modifies text background/shadow color; equals to EdgeColor() property.
    /// </summary>
    void SetColorSubTitle(Macad::Occt::Quantity_ColorRGBA^ theColor);
    /// <summary>
    /// Returns TRUE when the Text Zoomable is on.
    /// </summary>
    bool IsTextZoomable();
    /// <summary>
    /// Turns usage of text zoomable on/off
    /// </summary>
    void SetTextZoomable(bool theFlag);
    /// <summary>
    /// Returns the text style; Aspect_TOST_NORMAL by default.
    /// </summary>
    Macad::Occt::Aspect_TypeOfStyleText TextStyle();
    /// <summary>
    /// Modifies the style of the text.
    /// </summary>
    void SetTextStyle(Macad::Occt::Aspect_TypeOfStyleText theStyle);
    /// <summary>
    /// Returns Angle of degree
    /// </summary>
    float TextAngle();
    /// <summary>
    /// Turns usage of text rotated
    /// </summary>
    void SetTextAngle(float theAngle);
    /// <summary>
    /// Returns true if mesh edges should be drawn (false by default).
    /// </summary>
    bool ToDrawEdges();
    /// <summary>
    /// Set if mesh edges should be drawn or not.
    /// </summary>
    void SetDrawEdges(bool theToDraw);
    /// <summary>
    /// The edges of FillAreas are drawn.
    /// </summary>
    void SetEdgeOn();
    /// <summary>
    /// The edges of FillAreas are not drawn.
    /// </summary>
    void SetEdgeOff();
    /// <summary>
    /// Return color of edges.
    /// </summary>
    Macad::Occt::Quantity_Color^ EdgeColor();
    /// <summary>
    /// Return color of edges.
    /// </summary>
    Macad::Occt::Quantity_ColorRGBA^ EdgeColorRGBA();
    /// <summary>
    /// Modifies the color of the edge of the face
    /// </summary>
    void SetEdgeColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Modifies the color of the edge of the face
    /// </summary>
    void SetEdgeColor(Macad::Occt::Quantity_ColorRGBA^ theColor);
    /// <summary>
    /// Return edges line type (same as LineType()).
    /// </summary>
    Macad::Occt::Aspect_TypeOfLine EdgeLineType();
    /// <summary>
    /// Modifies the edge line type (same as SetLineType())
    /// </summary>
    void SetEdgeLineType(Macad::Occt::Aspect_TypeOfLine theType);
    /// <summary>
    /// Return width for edges in pixels (same as LineWidth()).
    /// </summary>
    float EdgeWidth();
    /// <summary>
    /// Modifies the edge thickness (same as SetLineWidth())
    /// </summary>
    void SetEdgeWidth(double theWidth);
    /// <summary>
    /// Returns TRUE if drawing element edges should discard first edge in triangle; FALSE by default.
    /// Graphics hardware works mostly with triangles, so that wireframe presentation will draw
    /// triangle edges by default. This flag allows rendering wireframe presentation of quad-only
    /// array split into triangles. For this, quads should be split in specific order, so that the
    /// quad diagonal (to be NOT rendered) goes first:
    /// 1------2
    /// /      /   Triangle #1: 2-0-1; Triangle #2: 0-2-3
    /// 0------3
    /// </summary>
    bool ToSkipFirstEdge();
    /// <summary>
    /// Set skip first triangle edge flag for drawing wireframe presentation of quads array split into
    /// triangles.
    /// </summary>
    void SetSkipFirstEdge(bool theToSkipFirstEdge);
    /// <summary>
    /// Returns TRUE if silhouette (outline) should be drawn (with edge color and width); FALSE by
    /// default.
    /// </summary>
    bool ToDrawSilhouette();
    /// <summary>
    /// Enables/disables drawing silhouette (outline).
    /// </summary>
    void SetDrawSilhouette(bool theToDraw);
    /// <summary>
    /// Returns the hatch type used when InteriorStyle is IS_HATCH
    /// </summary>
    Macad::Occt::Graphic3d_HatchStyle^ HatchStyle();
    /// <summary>
    /// Modifies the hatch type used when InteriorStyle is IS_HATCH
    /// </summary>
    void SetHatchStyle(Macad::Occt::Graphic3d_HatchStyle^ theStyle);
    /// <summary>
    /// Modifies the hatch type used when InteriorStyle is IS_HATCH
    /// </summary>
    /// @warning This method always creates a new handle for a given hatch style
    void SetHatchStyle(Macad::Occt::Aspect_HatchStyle theStyle);
    /// <summary>
    /// Check for equality with another aspects.
    /// </summary>
    bool IsEqual(Macad::Occt::Graphic3d_Aspects^ theOther);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    bool ToSuppressBackFaces();
    void SetSuppressBackFaces(bool theToSuppress);
    bool BackFace();
    void AllowBackFace();
    void SuppressBackFace();
    static Macad::Occt::Graphic3d_Aspects^ CreateDowncasted(::Graphic3d_Aspects* instance);
    bool Equals(System::Object^ obj) override;
}; // class Graphic3d_Aspects

//---------------------------------------------------------------------
//  Class  Graphic3d_AspectFillArea3d
//---------------------------------------------------------------------
/// <summary>
/// This class defines graphic attributes for opaque 3d primitives (polygons, triangles,
/// quadrilaterals).
/// </summary>
public ref class Graphic3d_AspectFillArea3d sealed
    : public Macad::Occt::Graphic3d_Aspects
{

#ifdef Include_Graphic3d_AspectFillArea3d_h
public:
    Include_Graphic3d_AspectFillArea3d_h
#endif

public:
    Graphic3d_AspectFillArea3d(::Graphic3d_AspectFillArea3d* nativeInstance)
        : Macad::Occt::Graphic3d_Aspects( nativeInstance )
    {}

    Graphic3d_AspectFillArea3d(::Graphic3d_AspectFillArea3d& nativeInstance)
        : Macad::Occt::Graphic3d_Aspects( nativeInstance )
    {}

    property ::Graphic3d_AspectFillArea3d* NativeInstance
    {
        ::Graphic3d_AspectFillArea3d* get()
        {
            return static_cast<::Graphic3d_AspectFillArea3d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a context table for fill area primitives defined with the following default values:
    /// 
    /// InteriorStyle : Aspect_IS_EMPTY
    /// InteriorColor : Quantity_NOC_CYAN1
    /// EdgeColor     : Quantity_NOC_WHITE
    /// EdgeLineType  : Aspect_TOL_SOLID
    /// EdgeWidth     : 1.0
    /// FrontMaterial : NOM_BRASS
    /// BackMaterial  : NOM_BRASS
    /// HatchStyle    : Aspect_HS_SOLID
    /// 
    /// Display of back-facing filled polygons.
    /// No distinction between external and internal faces of FillAreas.
    /// The edges are not drawn.
    /// Polygon offset parameters: mode = Aspect_POM_None, factor = 1., units = 0.
    /// </summary>
    Graphic3d_AspectFillArea3d();
    /// <summary>
    /// Creates a context table for fill area primitives defined with the specified values.
    /// Display of back-facing filled polygons.
    /// No distinction between external and internal faces of FillAreas.
    /// The edges are not drawn.
    /// Polygon offset parameters: mode = Aspect_POM_None, factor = 1., units = 0.
    /// </summary>
    Graphic3d_AspectFillArea3d(Macad::Occt::Aspect_InteriorStyle theInterior, Macad::Occt::Quantity_Color^ theInteriorColor, Macad::Occt::Quantity_Color^ theEdgeColor, Macad::Occt::Aspect_TypeOfLine theEdgeLineType, double theEdgeWidth, Macad::Occt::Graphic3d_MaterialAspect^ theFrontMaterial, Macad::Occt::Graphic3d_MaterialAspect^ theBackMaterial);
    bool Edge();
    static Macad::Occt::Graphic3d_AspectFillArea3d^ CreateDowncasted(::Graphic3d_AspectFillArea3d* instance);
}; // class Graphic3d_AspectFillArea3d

//---------------------------------------------------------------------
//  Class  Graphic3d_AspectLine3d
//---------------------------------------------------------------------
/// <summary>
/// Creates and updates a group of attributes for 3d line primitives.
/// This group contains the color, the type of line, and its thickness.
/// </summary>
public ref class Graphic3d_AspectLine3d sealed
    : public Macad::Occt::Graphic3d_Aspects
{

#ifdef Include_Graphic3d_AspectLine3d_h
public:
    Include_Graphic3d_AspectLine3d_h
#endif

public:
    Graphic3d_AspectLine3d(::Graphic3d_AspectLine3d* nativeInstance)
        : Macad::Occt::Graphic3d_Aspects( nativeInstance )
    {}

    Graphic3d_AspectLine3d(::Graphic3d_AspectLine3d& nativeInstance)
        : Macad::Occt::Graphic3d_Aspects( nativeInstance )
    {}

    property ::Graphic3d_AspectLine3d* NativeInstance
    {
        ::Graphic3d_AspectLine3d* get()
        {
            return static_cast<::Graphic3d_AspectLine3d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a context table for line primitives
    /// defined with the following default values:
    /// 
    /// Color = Quantity_NOC_YELLOW;
    /// Type  = Aspect_TOL_SOLID;
    /// Width = 1.0;
    /// </summary>
    Graphic3d_AspectLine3d();
    /// <summary>
    /// Creates a context table for line primitives defined with the specified values.
    /// Warning: theWidth is the "line width scale factor".
    /// The nominal line width is 1 pixel.
    /// The width of the line is determined by applying the line width scale factor to this nominal
    /// line width. The supported line widths vary by 1-pixel units.
    /// </summary>
    Graphic3d_AspectLine3d(Macad::Occt::Quantity_Color^ theColor, Macad::Occt::Aspect_TypeOfLine theType, double theWidth);
    /// <summary>
    /// Return line type.
    /// </summary>
    Macad::Occt::Aspect_TypeOfLine Type();
    /// <summary>
    /// Modifies the type of line.
    /// </summary>
    void SetType(Macad::Occt::Aspect_TypeOfLine theType);
    /// <summary>
    /// Return line width.
    /// </summary>
    float Width();
    /// <summary>
    /// Modifies the line thickness.
    /// Warning: Raises Standard_OutOfRange if the width is a negative value.
    /// </summary>
    void SetWidth(double theWidth);
    /// <summary>
    /// Modifies the line thickness.
    /// Warning: Raises Standard_OutOfRange if the width is a negative value.
    /// </summary>
    void SetWidth(float theWidth);
    static Macad::Occt::Graphic3d_AspectLine3d^ CreateDowncasted(::Graphic3d_AspectLine3d* instance);
}; // class Graphic3d_AspectLine3d

//---------------------------------------------------------------------
//  Class  Graphic3d_AspectMarker3d
//---------------------------------------------------------------------
/// <summary>
/// Creates and updates an attribute group for marker type primitives.
/// This group contains the type of marker, its color, and its scale factor.
/// </summary>
public ref class Graphic3d_AspectMarker3d sealed
    : public Macad::Occt::Graphic3d_Aspects
{

#ifdef Include_Graphic3d_AspectMarker3d_h
public:
    Include_Graphic3d_AspectMarker3d_h
#endif

public:
    Graphic3d_AspectMarker3d(::Graphic3d_AspectMarker3d* nativeInstance)
        : Macad::Occt::Graphic3d_Aspects( nativeInstance )
    {}

    Graphic3d_AspectMarker3d(::Graphic3d_AspectMarker3d& nativeInstance)
        : Macad::Occt::Graphic3d_Aspects( nativeInstance )
    {}

    property ::Graphic3d_AspectMarker3d* NativeInstance
    {
        ::Graphic3d_AspectMarker3d* get()
        {
            return static_cast<::Graphic3d_AspectMarker3d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a context table for marker primitives
    /// defined with the following default values:
    /// 
    /// Marker type : TOM_X
    /// Color       : YELLOW
    /// Scale factor: 1.0
    /// </summary>
    Graphic3d_AspectMarker3d();
    Graphic3d_AspectMarker3d(Macad::Occt::Aspect_TypeOfMarker theType, Macad::Occt::Quantity_Color^ theColor, double theScale);
    /// <summary>
    /// Creates a context table for marker primitives
    /// defined with the specified values.
    /// </summary>
    Graphic3d_AspectMarker3d(Macad::Occt::Quantity_Color^ theColor, int theWidth, int theHeight, Macad::Occt::TColStd_HArray1OfByte^ theTextureBitmap);
    /// <summary>
    /// Creates a context table for marker primitives
    /// defined with the specified values.
    /// </summary>
    Graphic3d_AspectMarker3d(Macad::Occt::Image_PixMap^ theTextureImage);
    /// <summary>
    /// Return scale factor.
    /// </summary>
    float Scale();
    /// <summary>
    /// Modifies the scale factor.
    /// Marker type Aspect_TOM_POINT is not affected by the marker size scale factor.
    /// It is always the smallest displayable dot.
    /// Warning: Raises Standard_OutOfRange if the scale is a negative value.
    /// </summary>
    void SetScale(float theScale);
    /// <summary>
    /// Assign scale factor.
    /// </summary>
    void SetScale(double theScale);
    /// <summary>
    /// Return marker type.
    /// </summary>
    Macad::Occt::Aspect_TypeOfMarker Type();
    /// <summary>
    /// Modifies the type of marker.
    /// </summary>
    void SetType(Macad::Occt::Aspect_TypeOfMarker theType);
    /// <summary>
    /// Returns marker's texture size.
    /// </summary>
    void GetTextureSize(int% theWidth, int% theHeight);
    /// <summary>
    /// Returns marker's image texture.
    /// Could be null handle if marker aspect has been initialized as default type of marker.
    /// </summary>
    Macad::Occt::Graphic3d_MarkerImage^ GetMarkerImage();
    void SetBitMap(int theWidth, int theHeight, Macad::Occt::TColStd_HArray1OfByte^ theTexture);
    static Macad::Occt::Graphic3d_AspectMarker3d^ CreateDowncasted(::Graphic3d_AspectMarker3d* instance);
}; // class Graphic3d_AspectMarker3d

//---------------------------------------------------------------------
//  Class  Graphic3d_AspectText3d
//---------------------------------------------------------------------
/// <summary>
/// Creates and updates a group of attributes for text primitives.
/// </summary>
public ref class Graphic3d_AspectText3d sealed
    : public Macad::Occt::Graphic3d_Aspects
{

#ifdef Include_Graphic3d_AspectText3d_h
public:
    Include_Graphic3d_AspectText3d_h
#endif

public:
    Graphic3d_AspectText3d(::Graphic3d_AspectText3d* nativeInstance)
        : Macad::Occt::Graphic3d_Aspects( nativeInstance )
    {}

    Graphic3d_AspectText3d(::Graphic3d_AspectText3d& nativeInstance)
        : Macad::Occt::Graphic3d_Aspects( nativeInstance )
    {}

    property ::Graphic3d_AspectText3d* NativeInstance
    {
        ::Graphic3d_AspectText3d* get()
        {
            return static_cast<::Graphic3d_AspectText3d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a context table for text primitives defined with the following default values:
    /// Color            : Quantity_NOC_YELLOW
    /// Font             : Font_NOF_ASCII_MONO
    /// The style        : Aspect_TOST_NORMAL
    /// The display type : Aspect_TODT_NORMAL
    /// </summary>
    Graphic3d_AspectText3d();
    /// <summary>
    /// Creates a context table for text primitives defined with the specified values.
    /// </summary>
    /// <param name="in]">
    /// theColor  text color
    /// </param>
    /// <param name="in]">
    /// theFont   font family name or alias like Font_NOF_ASCII_MONO
    /// </param>
    /// <param name="in]">
    /// theExpansionFactor  deprecated parameter, has no effect
    /// </param>
    /// <param name="in]">
    /// theSpace  deprecated parameter, has no effect
    /// </param>
    /// <param name="in]">
    /// theStyle  font style
    /// </param>
    /// <param name="in]">
    /// theDisplayType  display mode
    /// </param>
    Graphic3d_AspectText3d(Macad::Occt::Quantity_Color^ theColor, System::String^ theFont, double theExpansionFactor, double theSpace, Macad::Occt::Aspect_TypeOfStyleText theStyle, Macad::Occt::Aspect_TypeOfDisplayText theDisplayType);
    /// <summary>
    /// Creates a context table for text primitives defined with the specified values.
    /// </summary>
    /// <param name="in]">
    /// theColor  text color
    /// </param>
    /// <param name="in]">
    /// theFont   font family name or alias like Font_NOF_ASCII_MONO
    /// </param>
    /// <param name="in]">
    /// theExpansionFactor  deprecated parameter, has no effect
    /// </param>
    /// <param name="in]">
    /// theSpace  deprecated parameter, has no effect
    /// </param>
    /// <param name="in]">
    /// theStyle  font style
    /// </param>
    /// <param name="in]">
    /// theDisplayType  display mode
    /// </param>
    Graphic3d_AspectText3d(Macad::Occt::Quantity_Color^ theColor, System::String^ theFont, double theExpansionFactor, double theSpace, Macad::Occt::Aspect_TypeOfStyleText theStyle);
    /// <summary>
    /// Creates a context table for text primitives defined with the specified values.
    /// </summary>
    /// <param name="in]">
    /// theColor  text color
    /// </param>
    /// <param name="in]">
    /// theFont   font family name or alias like Font_NOF_ASCII_MONO
    /// </param>
    /// <param name="in]">
    /// theExpansionFactor  deprecated parameter, has no effect
    /// </param>
    /// <param name="in]">
    /// theSpace  deprecated parameter, has no effect
    /// </param>
    /// <param name="in]">
    /// theStyle  font style
    /// </param>
    /// <param name="in]">
    /// theDisplayType  display mode
    /// </param>
    Graphic3d_AspectText3d(Macad::Occt::Quantity_Color^ theColor, System::String^ theFont, double theExpansionFactor, double theSpace);
    /// <summary>
    /// Return the text color.
    /// </summary>
    Macad::Occt::Quantity_Color^ Color();
    /// <summary>
    /// Return the text color.
    /// </summary>
    Macad::Occt::Quantity_ColorRGBA^ ColorRGBA();
    /// <summary>
    /// Modifies the color.
    /// </summary>
    void SetColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Modifies the color.
    /// </summary>
    void SetColor(Macad::Occt::Quantity_ColorRGBA^ theColor);
    /// <summary>
    /// Return the font.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ Font();
    /// <summary>
    /// Modifies the font.
    /// </summary>
    void SetFont(Macad::Occt::TCollection_AsciiString^ theFont);
    /// <summary>
    /// Modifies the font.
    /// </summary>
    void SetFont(System::String^ theFont);
    /// <summary>
    /// Return the text style.
    /// </summary>
    Macad::Occt::Aspect_TypeOfStyleText Style();
    /// <summary>
    /// Modifies the style of the text.
    /// </summary>
    void SetStyle(Macad::Occt::Aspect_TypeOfStyleText theStyle);
    /// <summary>
    /// Return display type.
    /// </summary>
    Macad::Occt::Aspect_TypeOfDisplayText DisplayType();
    /// <summary>
    /// Define the display type of the text.
    /// </summary>
    void SetDisplayType(Macad::Occt::Aspect_TypeOfDisplayText theDisplayType);
    /// <summary>
    /// Returns TRUE when the Text Zoomable is on.
    /// </summary>
    bool GetTextZoomable();
    /// <summary>
    /// Returns Angle of degree
    /// </summary>
    float GetTextAngle();
    /// <summary>
    /// Turns usage of text rotated
    /// </summary>
    void SetTextAngle(double theAngle);
    /* Method skipped due to unknown mapping: Font_FontAspect GetTextFontAspect() */
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Graphic3d_AspectText3d^ CreateDowncasted(::Graphic3d_AspectText3d* instance);
}; // class Graphic3d_AspectText3d

//---------------------------------------------------------------------
//  Class  Graphic3d_CStructure
//---------------------------------------------------------------------
/// <summary>
/// Low-level graphic structure interface
/// </summary>
public ref class Graphic3d_CStructure
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_CStructure_h
public:
    Include_Graphic3d_CStructure_h
#endif

public:
    Graphic3d_CStructure(::Graphic3d_CStructure* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_CStructure(::Graphic3d_CStructure& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_CStructure* NativeInstance
    {
        ::Graphic3d_CStructure* get()
        {
            return static_cast<::Graphic3d_CStructure*>(_NativeInstance);
        }
    }

public:
    property unsigned int IsInfinite {
        unsigned int get() {
            return ((::Graphic3d_CStructure*)_NativeInstance)->IsInfinite;
        }
        void set(unsigned int value) {
            ((::Graphic3d_CStructure*)_NativeInstance)->IsInfinite = value;
        }
    }

    /// <summary>
    /// < displaying state - should be set when structure has been added to scene graph (but can be in hidden state)
    /// </summary>
    property unsigned int stick {
        unsigned int get() {
            return ((::Graphic3d_CStructure*)_NativeInstance)->stick;
        }
        void set(unsigned int value) {
            ((::Graphic3d_CStructure*)_NativeInstance)->stick = value;
        }
    }

    property unsigned int highlight {
        unsigned int get() {
            return ((::Graphic3d_CStructure*)_NativeInstance)->highlight;
        }
        void set(unsigned int value) {
            ((::Graphic3d_CStructure*)_NativeInstance)->highlight = value;
        }
    }

    /// <summary>
    /// < visibility flag - can be used to suppress structure while leaving it in the scene graph
    /// </summary>
    property unsigned int visible {
        unsigned int get() {
            return ((::Graphic3d_CStructure*)_NativeInstance)->visible;
        }
        void set(unsigned int value) {
            ((::Graphic3d_CStructure*)_NativeInstance)->visible = value;
        }
    }

    property unsigned int HLRValidation {
        unsigned int get() {
            return ((::Graphic3d_CStructure*)_NativeInstance)->HLRValidation;
        }
        void set(unsigned int value) {
            ((::Graphic3d_CStructure*)_NativeInstance)->HLRValidation = value;
        }
    }

    property unsigned int IsForHighlight {
        unsigned int get() {
            return ((::Graphic3d_CStructure*)_NativeInstance)->IsForHighlight;
        }
        void set(unsigned int value) {
            ((::Graphic3d_CStructure*)_NativeInstance)->IsForHighlight = value;
        }
    }

    property unsigned int IsMutable {
        unsigned int get() {
            return ((::Graphic3d_CStructure*)_NativeInstance)->IsMutable;
        }
        void set(unsigned int value) {
            ((::Graphic3d_CStructure*)_NativeInstance)->IsMutable = value;
        }
    }

    property unsigned int Is2dText {
        unsigned int get() {
            return ((::Graphic3d_CStructure*)_NativeInstance)->Is2dText;
        }
        void set(unsigned int value) {
            ((::Graphic3d_CStructure*)_NativeInstance)->Is2dText = value;
        }
    }

    /// <summary>
    /// </summary>
    /// <returns>
    /// graphic driver created this structure
    /// </returns>
    Macad::Occt::Graphic3d_GraphicDriver^ GraphicDriver();
    /// <summary>
    /// </summary>
    /// <returns>
    /// graphic groups
    /// </returns>
    Macad::Occt::Graphic3d_SequenceOfGroup^ Groups();
    /// <summary>
    /// Return transformation.
    /// </summary>
    Macad::Occt::TopLoc_Datum3D^ Transformation();
    /// <summary>
    /// Assign transformation.
    /// </summary>
    void SetTransformation(Macad::Occt::TopLoc_Datum3D^ theTrsf);
    /// <summary>
    /// Return transformation persistence.
    /// </summary>
    Macad::Occt::Graphic3d_TransformPers^ TransformPersistence();
    /// <summary>
    /// Set transformation persistence.
    /// </summary>
    void SetTransformPersistence(Macad::Occt::Graphic3d_TransformPers^ theTrsfPers);
    /// <summary>
    /// Return TRUE if some groups might have transform persistence; FALSE by default.
    /// </summary>
    bool HasGroupTransformPersistence();
    /// <summary>
    /// Set if some groups might have transform persistence.
    /// </summary>
    void SetGroupTransformPersistence(bool theValue);
    /// <summary>
    /// </summary>
    /// <returns>
    /// associated clip planes
    /// </returns>
    Macad::Occt::Graphic3d_SequenceOfHClipPlane^ ClipPlanes();
    /// <summary>
    /// Pass clip planes to the associated graphic driver structure
    /// </summary>
    void SetClipPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes);
    /* Method skipped due to unknown mapping: Graphic3d_BndBox3d BoundingBox() */
    /* Method skipped due to unknown mapping: Graphic3d_BndBox3d ChangeBoundingBox() */
    /// <summary>
    /// Return structure visibility flag
    /// </summary>
    bool IsVisible();
    /// <summary>
    /// Return structure visibility considering both View Affinity and global visibility state.
    /// </summary>
    bool IsVisible(int theViewId);
    /// <summary>
    /// Set z layer ID to display the structure in specified layer
    /// </summary>
    void SetZLayer(int theLayerIndex);
    /// <summary>
    /// Get z layer ID
    /// </summary>
    int ZLayer();
    /// <summary>
    /// Returns valid handle to highlight style of the structure in case if
    /// highlight flag is set to true
    /// </summary>
    Macad::Occt::Graphic3d_PresentationAttributes^ HighlightStyle();
    /// <summary>
    /// Return structure id (generated by Graphic3d_GraphicDriver::NewIdentification() during
    /// structure construction).
    /// </summary>
    int Identification();
    /// <summary>
    /// Return structure display priority.
    /// </summary>
    Macad::Occt::Graphic3d_DisplayPriority Priority();
    /// <summary>
    /// Set structure display priority.
    /// </summary>
    void SetPriority(Macad::Occt::Graphic3d_DisplayPriority thePriority);
    /// <summary>
    /// Return previous structure display priority.
    /// </summary>
    Macad::Occt::Graphic3d_DisplayPriority PreviousPriority();
    /// <summary>
    /// Set previous structure display priority.
    /// </summary>
    void SetPreviousPriority(Macad::Occt::Graphic3d_DisplayPriority thePriority);
    /// <summary>
    /// Returns FALSE if the structure hits the current view volume, otherwise returns TRUE.
    /// </summary>
    bool IsCulled();
    /// <summary>
    /// Marks structure as culled/not culled - note that IsAlwaysRendered() is ignored here!
    /// </summary>
    void SetCulled(bool theIsCulled);
    /// <summary>
    /// Marks structure as overlapping the current view volume one.
    /// The method is called during traverse of BVH tree.
    /// </summary>
    void MarkAsNotCulled();
    /// <summary>
    /// Returns whether check of object's bounding box clipping is enabled before drawing of object;
    /// TRUE by default.
    /// </summary>
    bool BndBoxClipCheck();
    /// <summary>
    /// Enable/disable check of object's bounding box clipping before drawing of object.
    /// </summary>
    void SetBndBoxClipCheck(bool theBndBoxClipCheck);
    /// <summary>
    /// Checks if the structure should be included into BVH tree or not.
    /// </summary>
    bool IsAlwaysRendered();
    /// <summary>
    /// Update structure visibility state
    /// </summary>
    void OnVisibilityChanged();
    /// <summary>
    /// Clear graphic data
    /// </summary>
    void Clear();
    /// <summary>
    /// Connect other structure to this one
    /// </summary>
    void Connect(Macad::Occt::Graphic3d_CStructure^ theStructure);
    /// <summary>
    /// Disconnect other structure to this one
    /// </summary>
    void Disconnect(Macad::Occt::Graphic3d_CStructure^ theStructure);
    /// <summary>
    /// Highlights structure with the given style
    /// </summary>
    void GraphicHighlight(Macad::Occt::Graphic3d_PresentationAttributes^ theStyle);
    /// <summary>
    /// Unhighlights the structure and invalidates pointer to structure's highlight style
    /// </summary>
    void GraphicUnhighlight();
    /// <summary>
    /// Create shadow link to this structure
    /// </summary>
    Macad::Occt::Graphic3d_CStructure^ ShadowLink(Macad::Occt::Graphic3d_StructureManager^ theManager);
    /// <summary>
    /// Create new group within this structure
    /// </summary>
    Macad::Occt::Graphic3d_Group^ NewGroup(Macad::Occt::Graphic3d_Structure^ theStruct);
    /// <summary>
    /// Remove group from this structure
    /// </summary>
    void RemoveGroup(Macad::Occt::Graphic3d_Group^ theGroup);
    /// <summary>
    /// Update render transformation matrix.
    /// </summary>
    void updateLayerTransformation();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Graphic3d_CStructure^ CreateDowncasted(::Graphic3d_CStructure* instance);
}; // class Graphic3d_CStructure

//---------------------------------------------------------------------
//  Class  Graphic3d_WorldViewProjState
//---------------------------------------------------------------------
/// <summary>
/// Helper class for keeping reference on world-view-projection state.
/// Helpful for synchronizing state of WVP dependent data structures.
/// </summary>
public ref class Graphic3d_WorldViewProjState sealed
    : public Macad::Occt::BaseClass<::Graphic3d_WorldViewProjState>
{

#ifdef Include_Graphic3d_WorldViewProjState_h
public:
    Include_Graphic3d_WorldViewProjState_h
#endif

public:
    Graphic3d_WorldViewProjState(::Graphic3d_WorldViewProjState* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_WorldViewProjState>( nativeInstance, true )
    {}

    Graphic3d_WorldViewProjState(::Graphic3d_WorldViewProjState& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_WorldViewProjState>( &nativeInstance, false )
    {}

    property ::Graphic3d_WorldViewProjState* NativeInstance
    {
        ::Graphic3d_WorldViewProjState* get()
        {
            return static_cast<::Graphic3d_WorldViewProjState*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// </summary>
    /// <returns>
    /// projection state counter.
    /// </returns>
    property long long unsigned int ProjectionState {
        long long unsigned int get() {
            return ((::Graphic3d_WorldViewProjState*)_NativeInstance)->ProjectionState();
        }
        void set(long long unsigned int value) {
            ((::Graphic3d_WorldViewProjState*)_NativeInstance)->ProjectionState() = value;
        }
    }

    /// <summary>
    /// </summary>
    /// <returns>
    /// world view state counter.
    /// </returns>
    property long long unsigned int WorldViewState {
        long long unsigned int get() {
            return ((::Graphic3d_WorldViewProjState*)_NativeInstance)->WorldViewState();
        }
        void set(long long unsigned int value) {
            ((::Graphic3d_WorldViewProjState*)_NativeInstance)->WorldViewState() = value;
        }
    }

    /// <summary>
    /// Default constructor.
    /// </summary>
    Graphic3d_WorldViewProjState();
    /// <summary>
    /// Constructor for custom projector type.
    /// </summary>
    /// <param name="in]">
    /// theProjectionState  the projection state.
    /// </param>
    /// <param name="in]">
    /// theWorldViewState  the world view state.
    /// </param>
    /// <param name="in]">
    /// theCamera  the pointer to the class supplying projection and
    /// world view matrices (camera).
    /// </param>
    Graphic3d_WorldViewProjState(long long unsigned int theProjectionState, long long unsigned int theWorldViewState, Macad::Occt::Standard_Transient^ theCamera);
    /// <summary>
    /// Constructor for custom projector type.
    /// </summary>
    /// <param name="in]">
    /// theProjectionState  the projection state.
    /// </param>
    /// <param name="in]">
    /// theWorldViewState  the world view state.
    /// </param>
    /// <param name="in]">
    /// theCamera  the pointer to the class supplying projection and
    /// world view matrices (camera).
    /// </param>
    Graphic3d_WorldViewProjState(long long unsigned int theProjectionState, long long unsigned int theWorldViewState);
    /// <summary>
    /// Check state validity.
    /// </summary>
    /// <returns>
    /// true if state is set.
    /// </returns>
    bool IsValid();
    /// <summary>
    /// Invalidate world view projection state.
    /// </summary>
    void Reset();
    /// <summary>
    /// Initialize world view projection state.
    /// </summary>
    void Initialize(long long unsigned int theProjectionState, long long unsigned int theWorldViewState, Macad::Occt::Standard_Transient^ theCamera);
    /// <summary>
    /// Initialize world view projection state.
    /// </summary>
    void Initialize(long long unsigned int theProjectionState, long long unsigned int theWorldViewState);
    /// <summary>
    /// Initialize world view projection state.
    /// </summary>
    void Initialize(Macad::Occt::Standard_Transient^ theCamera);
    /// <summary>
    /// Initialize world view projection state.
    /// </summary>
    void Initialize();
    /// <summary>
    /// Compare projection with other state.
    /// </summary>
    /// <returns>
    /// true when the projection of the given camera state differs from this one.
    /// </returns>
    bool IsProjectionChanged(Macad::Occt::Graphic3d_WorldViewProjState^ theState);
    /// <summary>
    /// Compare world view transformation with other state.
    /// </summary>
    /// <returns>
    /// true when the orientation of the given camera state differs from this one.
    /// </returns>
    bool IsWorldViewChanged(Macad::Occt::Graphic3d_WorldViewProjState^ theState);
    /// <summary>
    /// Compare with other world view projection state.
    /// </summary>
    /// <returns>
    /// true when the projection of the given camera state differs from this one.
    /// </returns>
    bool IsChanged(Macad::Occt::Graphic3d_WorldViewProjState^ theState);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int parameter1);
}; // class Graphic3d_WorldViewProjState

//---------------------------------------------------------------------
//  Class  Graphic3d_Camera
//---------------------------------------------------------------------
/// <summary>
/// Camera class provides object-oriented approach to setting up projection
/// and orientation properties of 3D view.
/// </summary>
public ref class Graphic3d_Camera sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_Camera_h
public:
    Include_Graphic3d_Camera_h
#endif

public:
    Graphic3d_Camera(::Graphic3d_Camera* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_Camera(::Graphic3d_Camera& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_Camera* NativeInstance
    {
        ::Graphic3d_Camera* get()
        {
            return static_cast<::Graphic3d_Camera*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  Projection
    //---------------------------------------------------------------------
    /// <summary>
    /// Enumerates supported monographic projections.
    /// - Projection_Orthographic : orthographic projection.
    /// - Projection_Perspective  : perspective projection.
    /// - Projection_Stereo       : stereographic projection.
    /// - Projection_MonoLeftEye  : mono projection for stereo left eye.
    /// - Projection_MonoRightEye : mono projection for stereo right eye.
    /// </summary>
    enum class Projection
    {
        Orthographic = 0,
        Perspective = 1,
        Stereo = 2,
        MonoLeftEye = 3,
        MonoRightEye = 4
    }; // enum  class Projection

    //---------------------------------------------------------------------
    //  Enum  FocusType
    //---------------------------------------------------------------------
    /// <summary>
    /// Enumerates approaches to define stereographic focus.
    /// - FocusType_Absolute : focus is specified as absolute value.
    /// - FocusType_Relative : focus is specified relative to
    /// (as coefficient of) camera focal length.
    /// </summary>
    enum class FocusType
    {
        Absolute = 0,
        Relative = 1
    }; // enum  class FocusType

    //---------------------------------------------------------------------
    //  Enum  IODType
    //---------------------------------------------------------------------
    /// <summary>
    /// Enumerates approaches to define Intraocular distance.
    /// - IODType_Absolute : Intraocular distance is defined as absolute value.
    /// - IODType_Relative : Intraocular distance is defined relative to
    /// (as coefficient of) camera focal length.
    /// </summary>
    enum class IODType
    {
        Absolute = 0,
        Relative = 1
    }; // enum  class IODType

    /// <summary>
    /// Default constructor.
    /// Initializes camera with the following properties:
    /// Eye (0, 0, -2); Center (0, 0, 0); Up (0, 1, 0);
    /// Type (Orthographic); FOVy (45); Scale (1000); IsStereo(false);
    /// ZNear (0.001); ZFar (3000.0); Aspect(1);
    /// ZFocus(1.0); ZFocusType(Relative); IOD(0.05); IODType(Relative)
    /// </summary>
    Graphic3d_Camera();
    /// <summary>
    /// Linear interpolation tool for camera orientation and position.
    /// This tool interpolates camera parameters scale, eye, center, rotation (up and direction
    /// vectors) independently.
    /// </summary>
    /// @sa Graphic3d_CameraLerp
    /// 
    /// Eye/Center interpolation is performed through defining an anchor point in-between Center and
    /// Eye. The anchor position is defined as point near to the camera point which has smaller
    /// translation part. The main idea is to keep the distance between Center and Eye (which will
    /// change if Center and Eye translation will be interpolated independently). E.g.:
    /// - When both Center and Eye are moved at the same vector -> both will be just translated by
    /// straight line;
    /// - When Center is not moved -> camera Eye    will move around Center through arc;
    /// - When Eye    is not moved -> camera Center will move around Eye    through arc;
    /// - When both Center and Eye are move by different vectors -> transformation will be something
    /// in between,
    /// and will try interpolate linearly the distance between Center and Eye.
    /// 
    /// This transformation might be not in line with user expectations.
    /// In this case, application might define intermediate camera positions for interpolation or
    /// implement own interpolation logic.
    /// 
    /// <param name="in]">
    /// theStart   initial camera position
    /// </param>
    /// <param name="in]">
    /// theEnd     final   camera position
    /// </param>
    /// <param name="in]">
    /// theT       step between initial and final positions within [0,1] range
    /// </param>
    /// <param name="out]">
    /// theCamera  interpolation result
    /// </param>
    static void Interpolate(Macad::Occt::Graphic3d_Camera^ theStart, Macad::Occt::Graphic3d_Camera^ theEnd, double theT, Macad::Occt::Graphic3d_Camera^ theCamera);
    /// <summary>
    /// Initialize mapping related parameters from other camera handle.
    /// </summary>
    void CopyMappingData(Macad::Occt::Graphic3d_Camera^ theOtherCamera);
    /// <summary>
    /// Initialize orientation related parameters from other camera handle.
    /// </summary>
    void CopyOrientationData(Macad::Occt::Graphic3d_Camera^ theOtherCamera);
    /// <summary>
    /// Copy properties of another camera.
    /// </summary>
    /// <param name="in]">
    /// theOther  the camera to copy from.
    /// </param>
    void Copy(Macad::Occt::Graphic3d_Camera^ theOther);
    /// <summary>
    /// Get camera look direction.
    /// </summary>
    /// <returns>
    /// camera look direction.
    /// </returns>
    Macad::Occt::Dir Direction();
    /// <summary>
    /// Sets camera look direction preserving the current Eye() position.
    /// WARNING! This method does NOT verify that the current Up() vector is orthogonal to the new
    /// Direction.
    /// </summary>
    /// <param name="in]">
    /// theDir  the direction.
    /// </param>
    void SetDirectionFromEye(Macad::Occt::Dir theDir);
    /// <summary>
    /// Sets camera look direction and computes the new Eye position relative to current Center.
    /// WARNING! This method does NOT verify that the current Up() vector is orthogonal to the new
    /// Direction.
    /// </summary>
    /// <param name="in]">
    /// theDir  the direction.
    /// </param>
    void SetDirection(Macad::Occt::Dir theDir);
    /// <summary>
    /// Get camera Up direction vector.
    /// </summary>
    /// <returns>
    /// Camera's Up direction vector.
    /// </returns>
    Macad::Occt::Dir Up();
    /// <summary>
    /// Sets camera Up direction vector, orthogonal to camera direction.
    /// WARNING! This method does NOT verify that the new Up vector is orthogonal to the current
    /// Direction().
    /// </summary>
    /// <param name="in]">
    /// theUp  the Up direction vector.
    /// </param>
    /// @sa OrthogonalizeUp().
    void SetUp(Macad::Occt::Dir theUp);
    /// <summary>
    /// Orthogonalize up direction vector.
    /// </summary>
    void OrthogonalizeUp();
    /// <summary>
    /// Return a copy of orthogonalized up direction vector.
    /// </summary>
    Macad::Occt::Dir OrthogonalizedUp();
    /// <summary>
    /// Right side direction.
    /// </summary>
    Macad::Occt::Dir SideRight();
    /// <summary>
    /// Get camera Eye position.
    /// </summary>
    /// <returns>
    /// camera eye location.
    /// </returns>
    Macad::Occt::Pnt Eye();
    /// <summary>
    /// Sets camera Eye position.
    /// Unlike SetEye(), this method only changes Eye point and preserves camera direction.
    /// </summary>
    /// <param name="in]">
    /// theEye  the location of camera's Eye.
    /// </param>
    /// @sa SetEye()
    void MoveEyeTo(Macad::Occt::Pnt theEye);
    /// <summary>
    /// Sets camera Eye and Center positions.
    /// </summary>
    /// <param name="in]">
    /// theEye     the location of camera's Eye
    /// </param>
    /// <param name="in]">
    /// theCenter  the location of camera's Center
    /// </param>
    void SetEyeAndCenter(Macad::Occt::Pnt theEye, Macad::Occt::Pnt theCenter);
    /// <summary>
    /// Sets camera Eye position.
    /// WARNING! For backward compatibility reasons, this method also changes view direction,
    /// so that the new direction is computed from new Eye position to old Center position.
    /// </summary>
    /// <param name="in]">
    /// theEye  the location of camera's Eye.
    /// </param>
    /// @sa MoveEyeTo(), SetEyeAndCenter()
    void SetEye(Macad::Occt::Pnt theEye);
    /// <summary>
    /// Get Center of the camera, e.g. the point where camera looks at.
    /// This point is computed as Eye() translated along Direction() at Distance().
    /// </summary>
    /// <returns>
    /// the point where the camera looks at.
    /// </returns>
    Macad::Occt::Pnt Center();
    /// <summary>
    /// Sets Center of the camera, e.g. the point where camera looks at.
    /// This methods changes camera direction, so that the new direction is computed
    /// from current Eye position to specified Center position.
    /// </summary>
    /// <param name="in]">
    /// theCenter  the point where the camera looks at.
    /// </param>
    void SetCenter(Macad::Occt::Pnt theCenter);
    /// <summary>
    /// Get distance of Eye from camera Center.
    /// </summary>
    /// <returns>
    /// the distance.
    /// </returns>
    double Distance();
    /// <summary>
    /// Set distance of Eye from camera Center.
    /// </summary>
    /// <param name="in]">
    /// theDistance  the distance.
    /// </param>
    void SetDistance(double theDistance);
    /// <summary>
    /// Get camera scale.
    /// </summary>
    /// <returns>
    /// camera scale factor.
    /// </returns>
    double Scale();
    /// <summary>
    /// Sets camera scale. For orthographic projection the scale factor
    /// corresponds to parallel scale of view mapping  (i.e. size
    /// of viewport). For perspective camera scale is converted to
    /// distance. The scale specifies equal size of the view projection in
    /// both dimensions assuming that the aspect is 1.0. The projection height
    /// and width are specified with the scale and correspondingly multiplied
    /// by the aspect.
    /// </summary>
    /// <param name="in]">
    /// theScale  the scale factor.
    /// </param>
    void SetScale(double theScale);
    /// <summary>
    /// Get camera axial scale.
    /// </summary>
    /// <returns>
    /// Camera's axial scale.
    /// </returns>
    Macad::Occt::XYZ AxialScale();
    /// <summary>
    /// Set camera axial scale.
    /// </summary>
    /// <param name="in]">
    /// theAxialScale  the axial scale vector.
    /// </param>
    void SetAxialScale(Macad::Occt::XYZ theAxialScale);
    /// <summary>
    /// Change camera projection type.
    /// When switching to perspective projection from orthographic one,
    /// the ZNear and ZFar are reset to default values (0.001, 3000.0)
    /// if less than 0.0.
    /// </summary>
    /// <param name="in]">
    /// theProjection the camera projection type.
    /// </param>
    void SetProjectionType(Macad::Occt::Graphic3d_Camera::Projection theProjection);
    /// <summary>
    /// </summary>
    /// <returns>
    /// camera projection type.
    /// </returns>
    Macad::Occt::Graphic3d_Camera::Projection ProjectionType();
    /// <summary>
    /// Check that the camera projection is orthographic.
    /// </summary>
    /// <returns>
    /// boolean flag that indicates whether the camera's projection is
    /// orthographic or not.
    /// </returns>
    bool IsOrthographic();
    /// <summary>
    /// Check whether the camera projection is stereo.
    /// Please note that stereo rendering is now implemented with support of
    /// Quad buffering.
    /// </summary>
    /// <returns>
    /// boolean flag indicating whether the stereographic L/R projection
    /// is chosen.
    /// </returns>
    bool IsStereo();
    /// <summary>
    /// Set Field Of View (FOV) in y axis for perspective projection.
    /// Field of View in x axis is automatically scaled from view aspect ratio.
    /// </summary>
    /// <param name="in]">
    /// theFOVy  the FOV in degrees.
    /// </param>
    void SetFOVy(double theFOVy);
    /// <summary>
    /// Get Field Of View (FOV) in y axis.
    /// </summary>
    /// <returns>
    /// the FOV value in degrees.
    /// </returns>
    double FOVy();
    /// <summary>
    /// Get Field Of View (FOV) in x axis.
    /// </summary>
    /// <returns>
    /// the FOV value in degrees.
    /// </returns>
    double FOVx();
    /// <summary>
    /// Get Field Of View (FOV) restriction for 2D on-screen elements; 180 degrees by default.
    /// When 2D FOV is smaller than FOVy or FOVx, 2D elements defined within offset from view corner
    /// will be extended to fit into specified 2D FOV.
    /// This can be useful to make 2D elements sharply visible, like in case of HMD normally having
    /// extra large FOVy.
    /// </summary>
    double FOV2d();
    /// <summary>
    /// Set Field Of View (FOV) restriction for 2D on-screen elements.
    /// </summary>
    void SetFOV2d(double theFOV);
    /// <summary>
    /// Adjust camera to fit in specified AABB.
    /// </summary>
    bool FitMinMax(Macad::Occt::Bnd_Box^ theBox, double theResolution, bool theToEnlargeIfLine);
    /// <summary>
    /// Estimate Z-min and Z-max planes of projection volume to match the
    /// displayed objects. The methods ensures that view volume will
    /// be close by depth range to the displayed objects. Fitting assumes that
    /// for orthogonal projection the view volume contains the displayed objects
    /// completely. For zoomed perspective view, the view volume is adjusted such
    /// that it contains the objects or their parts, located in front of the camera.
    /// </summary>
    /// <param name="in]">
    /// theScaleFactor the scale factor for Z-range.
    /// The range between Z-min, Z-max projection volume planes
    /// evaluated by z fitting method will be scaled using this coefficient.
    /// Program error exception is thrown if negative or zero value is passed.
    /// </param>
    /// <param name="in]">
    /// theMinMax applicative min max boundaries.
    /// </param>
    /// <param name="in]">
    /// theGraphicBB real graphical boundaries (not accounting infinite flag).
    /// </param>
    bool ZFitAll(double theScaleFactor, Macad::Occt::Bnd_Box^ theMinMax, Macad::Occt::Bnd_Box^ theGraphicBB, double% theZNear, double% theZFar);
    /// <summary>
    /// Change Z-min and Z-max planes of projection volume to match the displayed objects.
    /// </summary>
    void ZFitAll(double theScaleFactor, Macad::Occt::Bnd_Box^ theMinMax, Macad::Occt::Bnd_Box^ theGraphicBB);
    /// <summary>
    /// Change the Near and Far Z-clipping plane positions.
    /// For orthographic projection, theZNear, theZFar can be negative or positive.
    /// For perspective projection, only positive values are allowed.
    /// Program error exception is raised if non-positive values are
    /// specified for perspective projection or theZNear >= theZFar.
    /// </summary>
    /// <param name="in]">
    /// theZNear  the distance of the plane from the Eye.
    /// </param>
    /// <param name="in]">
    /// theZFar  the distance of the plane from the Eye.
    /// </param>
    void SetZRange(double theZNear, double theZFar);
    /// <summary>
    /// Get the Near Z-clipping plane position.
    /// </summary>
    /// <returns>
    /// the distance of the plane from the Eye.
    /// </returns>
    double ZNear();
    /// <summary>
    /// Get the Far Z-clipping plane position.
    /// </summary>
    /// <returns>
    /// the distance of the plane from the Eye.
    /// </returns>
    double ZFar();
    /// <summary>
    /// Return TRUE if camera should calculate projection matrix for [0, 1] depth range or for [-1, 1]
    /// range. FALSE by default.
    /// </summary>
    bool IsZeroToOneDepth();
    /// <summary>
    /// Set using [0, 1] depth range or [-1, 1] range.
    /// </summary>
    void SetZeroToOneDepth(bool theIsZeroToOne);
    /// <summary>
    /// Changes width / height display ratio.
    /// </summary>
    /// <param name="in]">
    /// theAspect  the display ratio.
    /// </param>
    void SetAspect(double theAspect);
    /// <summary>
    /// Get camera display ratio.
    /// </summary>
    /// <returns>
    /// display ratio.
    /// </returns>
    double Aspect();
    /// <summary>
    /// Sets stereographic focus distance.
    /// </summary>
    /// <param name="in]">
    /// theType  the focus definition type. Focus can be defined
    /// as absolute value or relatively to (as coefficient of) coefficient of
    /// camera focal length.
    /// </param>
    /// <param name="in]">
    /// theZFocus  the focus absolute value or coefficient depending
    /// on the passed definition type.
    /// </param>
    void SetZFocus(Macad::Occt::Graphic3d_Camera::FocusType theType, double theZFocus);
    /// <summary>
    /// Get stereographic focus value.
    /// </summary>
    /// <returns>
    /// absolute or relative stereographic focus value
    /// depending on its definition type.
    /// </returns>
    double ZFocus();
    /// <summary>
    /// Get stereographic focus definition type.
    /// </summary>
    /// <returns>
    /// definition type used for stereographic focus.
    /// </returns>
    Macad::Occt::Graphic3d_Camera::FocusType ZFocusType();
    /// <summary>
    /// Sets Intraocular distance.
    /// </summary>
    /// <param name="in]">
    /// theType  the IOD definition type. IOD can be defined as
    /// absolute value or relatively to (as coefficient of) camera focal length.
    /// </param>
    /// <param name="in]">
    /// theIOD  the Intraocular distance.
    /// </param>
    void SetIOD(Macad::Occt::Graphic3d_Camera::IODType theType, double theIOD);
    /// <summary>
    /// Get Intraocular distance value.
    /// </summary>
    /// <returns>
    /// absolute or relative IOD value depending on its definition type.
    /// </returns>
    double IOD();
    /// <summary>
    /// Get Intraocular distance definition type.
    /// </summary>
    /// <returns>
    /// definition type used for Intraocular distance.
    /// </returns>
    Macad::Occt::Graphic3d_Camera::IODType GetIODType();
    /// <summary>
    /// Get current tile.
    /// </summary>
    Macad::Occt::Graphic3d_CameraTile^ Tile();
    /// <summary>
    /// Sets the Tile defining the drawing sub-area within View.
    /// Note that tile defining a region outside the view boundaries is also valid - use method
    /// Graphic3d_CameraTile::Cropped() to assign a cropped copy.
    /// </summary>
    /// <param name="theTile">
    /// tile definition
    /// </param>
    void SetTile(Macad::Occt::Graphic3d_CameraTile^ theTile);
    /// <summary>
    /// Sets camera parameters to make current orientation matrix identity one.
    /// </summary>
    void SetIdentityOrientation();
    /// <summary>
    /// Transform orientation components of the camera:
    /// Eye, Up and Center points.
    /// </summary>
    /// <param name="in]">
    /// theTrsf  the transformation to apply.
    /// </param>
    void Transform(Macad::Occt::Trsf theTrsf);
    /// <summary>
    /// Calculate view plane size at center (target) point
    /// and distance between ZFar and ZNear planes.
    /// </summary>
    /// <returns>
    /// values in form of gp_Pnt (Width, Height, Depth).
    /// </returns>
    Macad::Occt::XYZ ViewDimensions();
    /// <summary>
    /// Calculate view plane size at center point with specified Z offset
    /// and distance between ZFar and ZNear planes.
    /// </summary>
    /// <param name="in]">
    /// theZValue  the distance from the eye in eye-to-center direction
    /// </param>
    /// <returns>
    /// values in form of gp_Pnt (Width, Height, Depth).
    /// </returns>
    Macad::Occt::XYZ ViewDimensions(double theZValue);
    /// <summary>
    /// Return offset to the view corner in NDC space within dimension X for 2d on-screen elements,
    /// which is normally 0.5. Can be clamped when FOVx exceeds FOV2d.
    /// </summary>
    double NDC2dOffsetX();
    /// <summary>
    /// Return offset to the view corner in NDC space within dimension X for 2d on-screen elements,
    /// which is normally 0.5. Can be clamped when FOVy exceeds FOV2d.
    /// </summary>
    double NDC2dOffsetY();
    /// <summary>
    /// Calculate WCS frustum planes for the camera projection volume.
    /// Frustum is a convex volume determined by six planes directing
    /// inwards.
    /// The frustum planes are usually used as inputs for camera algorithms.
    /// Thus, if any changes to projection matrix calculation are necessary,
    /// the frustum planes calculation should be also touched.
    /// </summary>
    /// <param name="out]">
    /// theLeft  the frustum plane for left side of view.
    /// </param>
    /// <param name="out]">
    /// theRight  the frustum plane for right side of view.
    /// </param>
    /// <param name="out]">
    /// theBottom  the frustum plane for bottom side of view.
    /// </param>
    /// <param name="out]">
    /// theTop  the frustum plane for top side of view.
    /// </param>
    /// <param name="out]">
    /// theNear  the frustum plane for near side of view.
    /// </param>
    /// <param name="out]">
    /// theFar  the frustum plane for far side of view.
    /// </param>
    void Frustum(Macad::Occt::Pln% theLeft, Macad::Occt::Pln% theRight, Macad::Occt::Pln% theBottom, Macad::Occt::Pln% theTop, Macad::Occt::Pln% theNear, Macad::Occt::Pln% theFar);
    /// <summary>
    /// Project point from world coordinate space to
    /// normalized device coordinates (mapping).
    /// </summary>
    /// <param name="in]">
    /// thePnt  the 3D point in WCS.
    /// </param>
    /// <returns>
    /// mapped point in NDC.
    /// </returns>
    Macad::Occt::Pnt Project(Macad::Occt::Pnt thePnt);
    /// <summary>
    /// Unproject point from normalized device coordinates
    /// to world coordinate space.
    /// </summary>
    /// <param name="in]">
    /// thePnt  the NDC point.
    /// </param>
    /// <returns>
    /// 3D point in WCS.
    /// </returns>
    Macad::Occt::Pnt UnProject(Macad::Occt::Pnt thePnt);
    /// <summary>
    /// Convert point from view coordinate space to
    /// projection coordinate space.
    /// </summary>
    /// <param name="in]">
    /// thePnt  the point in VCS.
    /// </param>
    /// <returns>
    /// point in NDC.
    /// </returns>
    Macad::Occt::Pnt ConvertView2Proj(Macad::Occt::Pnt thePnt);
    /// <summary>
    /// Convert point from projection coordinate space
    /// to view coordinate space.
    /// </summary>
    /// <param name="in]">
    /// thePnt  the point in NDC.
    /// </param>
    /// <returns>
    /// point in VCS.
    /// </returns>
    Macad::Occt::Pnt ConvertProj2View(Macad::Occt::Pnt thePnt);
    /// <summary>
    /// Convert point from world coordinate space to
    /// view coordinate space.
    /// </summary>
    /// <param name="in]">
    /// thePnt  the 3D point in WCS.
    /// </param>
    /// <returns>
    /// point in VCS.
    /// </returns>
    Macad::Occt::Pnt ConvertWorld2View(Macad::Occt::Pnt thePnt);
    /// <summary>
    /// Convert point from view coordinate space to
    /// world coordinates.
    /// </summary>
    /// <param name="in]">
    /// thePnt  the 3D point in VCS.
    /// </param>
    /// <returns>
    /// point in WCS.
    /// </returns>
    Macad::Occt::Pnt ConvertView2World(Macad::Occt::Pnt thePnt);
    /// <summary>
    /// </summary>
    /// <returns>
    /// projection modification state of the camera.
    /// </returns>
    Macad::Occt::Graphic3d_WorldViewProjState^ WorldViewProjState();
    /// <summary>
    /// Returns modification state of camera projection matrix
    /// </summary>
    long long unsigned int ProjectionState();
    /// <summary>
    /// Returns modification state of camera world view transformation matrix.
    /// </summary>
    long long unsigned int WorldViewState();
    /// <summary>
    /// Get orientation matrix.
    /// </summary>
    /// <returns>
    /// camera orientation matrix.
    /// </returns>
    Macad::Occt::Graphic3d_Mat4d^ OrientationMatrix();
    /// <summary>
    /// Get orientation matrix of Standard_ShortReal precision.
    /// </summary>
    /// <returns>
    /// camera orientation matrix.
    /// </returns>
    Macad::Occt::Graphic3d_Mat4^ OrientationMatrixF();
    /// <summary>
    /// Get monographic or middle point projection matrix used for monographic
    /// rendering and for point projection / unprojection.
    /// </summary>
    /// <returns>
    /// monographic projection matrix.
    /// </returns>
    Macad::Occt::Graphic3d_Mat4d^ ProjectionMatrix();
    /// <summary>
    /// Get monographic or middle point projection matrix of Standard_ShortReal precision used for
    /// monographic rendering and for point projection / unprojection.
    /// </summary>
    /// <returns>
    /// monographic projection matrix.
    /// </returns>
    Macad::Occt::Graphic3d_Mat4^ ProjectionMatrixF();
    /// <summary>
    /// </summary>
    /// <returns>
    /// stereographic matrix computed for left eye. Please note
    /// that this method is used for rendering for <i>Projection_Stereo</i>.
    /// </returns>
    Macad::Occt::Graphic3d_Mat4d^ ProjectionStereoLeft();
    /// <summary>
    /// </summary>
    /// <returns>
    /// stereographic matrix of Standard_ShortReal precision computed for left eye.
    /// Please note that this method is used for rendering for <i>Projection_Stereo</i>.
    /// </returns>
    Macad::Occt::Graphic3d_Mat4^ ProjectionStereoLeftF();
    /// <summary>
    /// </summary>
    /// <returns>
    /// stereographic matrix computed for right eye. Please note
    /// that this method is used for rendering for <i>Projection_Stereo</i>.
    /// </returns>
    Macad::Occt::Graphic3d_Mat4d^ ProjectionStereoRight();
    /// <summary>
    /// </summary>
    /// <returns>
    /// stereographic matrix of Standard_ShortReal precision computed for right eye.
    /// Please note that this method is used for rendering for <i>Projection_Stereo</i>.
    /// </returns>
    Macad::Occt::Graphic3d_Mat4^ ProjectionStereoRightF();
    /// <summary>
    /// Invalidate state of projection matrix.
    /// The matrix will be updated on request.
    /// </summary>
    void InvalidateProjection();
    /// <summary>
    /// Invalidate orientation matrix.
    /// The matrix will be updated on request.
    /// </summary>
    void InvalidateOrientation();
    /// <summary>
    /// Get stereo projection matrices.
    /// </summary>
    /// <param name="out]">
    /// theProjL       left  eye projection matrix
    /// </param>
    /// <param name="out]">
    /// theHeadToEyeL  left  head to eye translation matrix
    /// </param>
    /// <param name="out]">
    /// theProjR       right eye projection matrix
    /// </param>
    /// <param name="out]">
    /// theHeadToEyeR  right head to eye translation matrix
    /// </param>
    void StereoProjection(Macad::Occt::Graphic3d_Mat4d^ theProjL, Macad::Occt::Graphic3d_Mat4d^ theHeadToEyeL, Macad::Occt::Graphic3d_Mat4d^ theProjR, Macad::Occt::Graphic3d_Mat4d^ theHeadToEyeR);
    /// <summary>
    /// Get stereo projection matrices.
    /// </summary>
    /// <param name="out]">
    /// theProjL       left  eye projection matrix
    /// </param>
    /// <param name="out]">
    /// theHeadToEyeL  left  head to eye translation matrix
    /// </param>
    /// <param name="out]">
    /// theProjR       right eye projection matrix
    /// </param>
    /// <param name="out]">
    /// theHeadToEyeR  right head to eye translation matrix
    /// </param>
    void StereoProjectionF(Macad::Occt::Graphic3d_Mat4^ theProjL, Macad::Occt::Graphic3d_Mat4^ theHeadToEyeL, Macad::Occt::Graphic3d_Mat4^ theProjR, Macad::Occt::Graphic3d_Mat4^ theHeadToEyeR);
    /// <summary>
    /// Unset all custom frustums and projection matrices.
    /// </summary>
    void ResetCustomProjection();
    /// <summary>
    /// Return TRUE if custom stereo frustums are set.
    /// </summary>
    bool IsCustomStereoFrustum();
    /* Method skipped due to unknown mapping: void SetCustomStereoFrustums(Aspect_FrustumLRBT<double> theFrustumL, Aspect_FrustumLRBT<double> theFrustumR, ) */
    /// <summary>
    /// Return TRUE if custom stereo projection matrices are set.
    /// </summary>
    bool IsCustomStereoProjection();
    /// <summary>
    /// Set custom stereo projection matrices.
    /// </summary>
    /// <param name="in]">
    /// theProjL       left  eye projection matrix
    /// </param>
    /// <param name="in]">
    /// theHeadToEyeL  left  head to eye translation matrix
    /// </param>
    /// <param name="in]">
    /// theProjR       right eye projection matrix
    /// </param>
    /// <param name="in]">
    /// theHeadToEyeR  right head to eye translation matrix
    /// </param>
    void SetCustomStereoProjection(Macad::Occt::Graphic3d_Mat4d^ theProjL, Macad::Occt::Graphic3d_Mat4d^ theHeadToEyeL, Macad::Occt::Graphic3d_Mat4d^ theProjR, Macad::Occt::Graphic3d_Mat4d^ theHeadToEyeR);
    /// <summary>
    /// Return TRUE if custom projection matrix is set.
    /// </summary>
    bool IsCustomMonoProjection();
    /// <summary>
    /// Set custom projection matrix.
    /// </summary>
    void SetCustomMonoProjection(Macad::Occt::Graphic3d_Mat4d^ theProj);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    /* Method skipped due to unknown mapping: void FrustumPoints(NCollection_Array1<NCollection_Vec3<double>> thePoints, Graphic3d_Mat4d theModelWorld, ) */
    /* Method skipped due to unknown mapping: void FrustumPoints(NCollection_Array1<NCollection_Vec3<double>> thePoints, Graphic3d_Mat4d theModelWorld, ) */
    static Macad::Occt::Graphic3d_Camera^ CreateDowncasted(::Graphic3d_Camera* instance);
}; // class Graphic3d_Camera

//---------------------------------------------------------------------
//  Class  Graphic3d_CameraTile
//---------------------------------------------------------------------
/// <summary>
/// Class defines the area (Tile) inside a view.
/// </summary>
public ref class Graphic3d_CameraTile sealed
    : public Macad::Occt::BaseClass<::Graphic3d_CameraTile>
{

#ifdef Include_Graphic3d_CameraTile_h
public:
    Include_Graphic3d_CameraTile_h
#endif

public:
    Graphic3d_CameraTile(::Graphic3d_CameraTile* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_CameraTile>( nativeInstance, true )
    {}

    Graphic3d_CameraTile(::Graphic3d_CameraTile& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_CameraTile>( &nativeInstance, false )
    {}

    property ::Graphic3d_CameraTile* NativeInstance
    {
        ::Graphic3d_CameraTile* get()
        {
            return static_cast<::Graphic3d_CameraTile*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// < indicate the offset coordinate system - lower-left (default) or top-down
    /// </summary>
    property bool IsTopDown {
        bool get() {
            return ((::Graphic3d_CameraTile*)_NativeInstance)->IsTopDown;
        }
        void set(bool value) {
            ((::Graphic3d_CameraTile*)_NativeInstance)->IsTopDown = value;
        }
    }

    /// <summary>
    /// Default constructor.
    /// Initializes the empty Tile of zero size and lower-left offset orientation.
    /// Such Tile is considered uninitialized (invalid).
    /// </summary>
    Graphic3d_CameraTile();
    /// <summary>
    /// Return true if Tile has been defined.
    /// </summary>
    bool IsValid();
    /// <summary>
    /// Return offset position from lower-left corner.
    /// </summary>
    Macad::Occt::Graphic3d_Vec2i^ OffsetLowerLeft();
    /// <summary>
    /// Return the copy cropped by total size
    /// </summary>
    Macad::Occt::Graphic3d_CameraTile^ Cropped();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
}; // class Graphic3d_CameraTile

//---------------------------------------------------------------------
//  Class  Graphic3d_CLight
//---------------------------------------------------------------------
/// <summary>
/// Generic light source definition.
/// This class defines arbitrary light source - see Graphic3d_TypeOfLightSource enumeration.
/// Some parameters are applicable only to particular light type;
/// calling methods unrelated to current type will throw an exception.
/// </summary>
public ref class Graphic3d_CLight
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_CLight_h
public:
    Include_Graphic3d_CLight_h
#endif

protected:
    Graphic3d_CLight(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    Graphic3d_CLight(::Graphic3d_CLight* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_CLight(::Graphic3d_CLight& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_CLight* NativeInstance
    {
        ::Graphic3d_CLight* get()
        {
            return static_cast<::Graphic3d_CLight*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor, which should be followed by light source properties configuration.
    /// </summary>
    Graphic3d_CLight(Macad::Occt::Graphic3d_TypeOfLightSource theType);
    /// <summary>
    /// Copy parameters from another light source excluding source type.
    /// </summary>
    void CopyFrom(Macad::Occt::Graphic3d_CLight^ theLight);
    /// <summary>
    /// Returns the Type of the Light, cannot be changed after object construction.
    /// </summary>
    Macad::Occt::Graphic3d_TypeOfLightSource Type();
    /// <summary>
    /// Returns light source name; empty string by default.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ Name();
    /// <summary>
    /// Sets light source name.
    /// </summary>
    void SetName(Macad::Occt::TCollection_AsciiString^ theName);
    /// <summary>
    /// Returns the color of the light source; WHITE by default.
    /// </summary>
    Macad::Occt::Quantity_Color^ Color();
    /// <summary>
    /// Defines the color of a light source by giving the basic color.
    /// </summary>
    void SetColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Check that the light source is turned on; TRUE by default.
    /// This flag affects all occurrences of light sources, where it was registered and activated;
    /// so that it is possible defining an active light in View which is actually in disabled state.
    /// </summary>
    bool IsEnabled();
    /// <summary>
    /// Change enabled state of the light state.
    /// This call does not remove or deactivate light source in Views/Viewers;
    /// instead it turns it OFF so that it just have no effect.
    /// </summary>
    void SetEnabled(bool theIsOn);
    /// <summary>
    /// Return TRUE if shadow casting is enabled; FALSE by default.
    /// Has no effect in Ray-Tracing rendering mode.
    /// </summary>
    bool ToCastShadows();
    /// <summary>
    /// Enable/disable shadow casting.
    /// </summary>
    void SetCastShadows(bool theToCast);
    /// <summary>
    /// Returns true if the light is a headlight; FALSE by default.
    /// Headlight flag means that light position/direction are defined not in a World coordinate
    /// system, but relative to the camera orientation.
    /// </summary>
    bool IsHeadlight();
    /// <summary>
    /// Alias for IsHeadlight().
    /// </summary>
    bool Headlight();
    /// <summary>
    /// Setup headlight flag.
    /// </summary>
    void SetHeadlight(bool theValue);
    /// <summary>
    /// Returns location of positional/spot light; (0, 0, 0) by default.
    /// </summary>
    Macad::Occt::Pnt Position();
    /// <summary>
    /// Setup location of positional/spot light.
    /// </summary>
    void SetPosition(Macad::Occt::Pnt thePosition);
    /// <summary>
    /// Returns location of positional/spot light.
    /// </summary>
    void Position(double% theX, double% theY, double% theZ);
    /// <summary>
    /// Setup location of positional/spot light.
    /// </summary>
    void SetPosition(double theX, double theY, double theZ);
    /// <summary>
    /// Returns constant attenuation factor of positional/spot light source; 1.0f by default.
    /// Distance attenuation factors of reducing positional/spot light intensity depending on the
    /// distance from its position:
    /// </summary>
    /// @code
    /// float anAttenuation = 1.0 / (ConstAttenuation() + LinearAttenuation() * theDistance +
    /// QuadraticAttenuation() * theDistance * theDistance);
    /// @endcode
    float ConstAttenuation();
    /// <summary>
    /// Returns linear attenuation factor of positional/spot light source; 0.0 by default.
    /// Distance attenuation factors of reducing positional/spot light intensity depending on the
    /// distance from its position:
    /// </summary>
    /// @code
    /// float anAttenuation = 1.0 / (ConstAttenuation() + LinearAttenuation() * theDistance +
    /// QuadraticAttenuation() * theDistance * theDistance);
    /// @endcode
    float LinearAttenuation();
    /// <summary>
    /// Returns the attenuation factors.
    /// </summary>
    void Attenuation(double% theConstAttenuation, double% theLinearAttenuation);
    /// <summary>
    /// Defines the coefficients of attenuation; values should be >= 0.0 and their summ should not be
    /// equal to 0.
    /// </summary>
    void SetAttenuation(float theConstAttenuation, float theLinearAttenuation);
    /// <summary>
    /// Returns direction of directional/spot light.
    /// </summary>
    Macad::Occt::Dir Direction();
    /// <summary>
    /// Sets direction of directional/spot light.
    /// </summary>
    void SetDirection(Macad::Occt::Dir theDir);
    /// <summary>
    /// Returns the theVx, theVy, theVz direction of the light source.
    /// </summary>
    void Direction(double% theVx, double% theVy, double% theVz);
    /// <summary>
    /// Sets direction of directional/spot light.
    /// </summary>
    void SetDirection(double theVx, double theVy, double theVz);
    /// <summary>
    /// Returns location of positional/spot/directional light, which is the same as returned by
    /// Position().
    /// </summary>
    Macad::Occt::Pnt DisplayPosition();
    /// <summary>
    /// Setup location of positional/spot/directional light,
    /// which is the same as SetPosition() but allows directional light source
    /// (technically having no position, but this point can be used for displaying light source
    /// presentation).
    /// </summary>
    void SetDisplayPosition(Macad::Occt::Pnt thePosition);
    /// <summary>
    /// Returns an angle in radians of the cone created by the spot; 30 degrees by default.
    /// </summary>
    float Angle();
    /// <summary>
    /// Angle in radians of the cone created by the spot, should be within range (0.0, M_PI).
    /// </summary>
    void SetAngle(float theAngle);
    /// <summary>
    /// Returns intensity distribution of the spot light, within [0.0, 1.0] range; 1.0 by default.
    /// This coefficient should be converted into spotlight exponent within [0.0, 128.0] range:
    /// </summary>
    /// @code
    /// float aSpotExponent = Concentration() * 128.0;
    /// anAttenuation *= pow (aCosA, aSpotExponent);"
    /// @endcode
    /// The concentration factor determines the dispersion of the light on the surface, the default
    /// value (1.0) corresponds to a minimum of dispersion.
    float Concentration();
    /// <summary>
    /// Defines the coefficient of concentration; value should be within range [0.0, 1.0].
    /// </summary>
    void SetConcentration(float theConcentration);
    /// <summary>
    /// Returns the intensity of light source; 1.0 by default.
    /// </summary>
    float Intensity();
    /// <summary>
    /// Modifies the intensity of light source, which should be > 0.0.
    /// </summary>
    void SetIntensity(float theValue);
    /// <summary>
    /// Returns the smoothness of light source (either smoothing angle for directional light or
    /// smoothing radius in case of positional light); 0.0 by default.
    /// </summary>
    float Smoothness();
    /// <summary>
    /// Modifies the smoothing radius of positional/spot light; should be >= 0.0.
    /// </summary>
    void SetSmoothRadius(float theValue);
    /// <summary>
    /// Modifies the smoothing angle (in radians) of directional light source; should be within range
    /// [0.0, M_PI/2].
    /// </summary>
    void SetSmoothAngle(float theValue);
    /// <summary>
    /// Returns TRUE if maximum distance of point light source is defined.
    /// </summary>
    bool HasRange();
    /// <summary>
    /// Returns maximum distance on which point light source affects to objects and is considered
    /// during illumination calculations. 0.0 means disabling range considering at all without any
    /// distance limits. Has sense only for point light sources (positional and spot).
    /// </summary>
    float Range();
    /// <summary>
    /// Modifies maximum distance on which point light source affects to objects and is considered
    /// during illumination calculations. Positional and spot lights are only point light sources. 0.0
    /// means disabling range considering at all without any distance limits.
    /// </summary>
    void SetRange(float theValue);
    /// <summary>
    /// </summary>
    /// <returns>
    /// light resource identifier string
    /// </returns>
    Macad::Occt::TCollection_AsciiString^ GetId();
    /// <summary>
    /// Packed light parameters.
    /// </summary>
    Macad::Occt::Graphic3d_Vec4^ PackedParams();
    /// <summary>
    /// Returns the color of the light source with dummy Alpha component, which should be ignored.
    /// </summary>
    Macad::Occt::Graphic3d_Vec4^ PackedColor();
    /// <summary>
    /// Returns direction of directional/spot light and range for positional/spot light in alpha
    /// channel.
    /// </summary>
    Macad::Occt::Graphic3d_Vec4^ PackedDirectionRange();
    /// <summary>
    /// Returns direction of directional/spot light.
    /// </summary>
    Macad::Occt::Graphic3d_Vec3^ PackedDirection();
    /// <summary>
    /// </summary>
    /// <returns>
    /// modification counter
    /// </returns>
    long long unsigned int Revision();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Graphic3d_CLight^ CreateDowncasted(::Graphic3d_CLight* instance);
}; // class Graphic3d_CLight

//---------------------------------------------------------------------
//  Class  Graphic3d_ClipPlane
//---------------------------------------------------------------------
/// <summary>
/// Container for properties describing either a Clipping halfspace (single Clipping Plane),
/// or a chain of Clipping Planes defining logical AND (conjunction) operation.
/// The plane equation is specified in "world" coordinate system.
/// </summary>
public ref class Graphic3d_ClipPlane sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_ClipPlane_h
public:
    Include_Graphic3d_ClipPlane_h
#endif

public:
    Graphic3d_ClipPlane(::Graphic3d_ClipPlane* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_ClipPlane(::Graphic3d_ClipPlane& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_ClipPlane* NativeInstance
    {
        ::Graphic3d_ClipPlane* get()
        {
            return static_cast<::Graphic3d_ClipPlane*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Default constructor.
    /// Initializes clip plane container with the following properties:
    /// - Equation (0.0, 0.0, 1.0, 0)
    /// - IsOn (True),
    /// - IsCapping (False),
    /// - Material (Graphic3d_NameOfMaterial_DEFAULT),
    /// - Texture (NULL),
    /// - HatchStyle (Aspect_HS_HORIZONTAL),
    /// - IsHatchOn (False)
    /// </summary>
    Graphic3d_ClipPlane();
    /// <summary>
    /// Construct clip plane for the passed equation.
    /// By default the plane is on, capping is turned off.
    /// </summary>
    /// <param name="in]">
    /// theEquation  the plane equation.
    /// </param>
    Graphic3d_ClipPlane(Macad::Occt::Graphic3d_Vec4d^ theEquation);
    /// <summary>
    /// Construct clip plane from the passed geometrical definition.
    /// By default the plane is on, capping is turned off.
    /// </summary>
    /// <param name="in]">
    /// thePlane  the plane.
    /// </param>
    Graphic3d_ClipPlane(Macad::Occt::Pln thePlane);
    /// <summary>
    /// Set plane equation by its geometrical definition.
    /// The equation is specified in "world" coordinate system.
    /// </summary>
    /// <param name="in]">
    /// thePlane  the plane.
    /// </param>
    void SetEquation(Macad::Occt::Pln thePlane);
    /// <summary>
    /// Set 4-component equation vector for clipping plane.
    /// The equation is specified in "world" coordinate system.
    /// </summary>
    /// <param name="in]">
    /// theEquation  the XYZW (or "ABCD") equation vector.
    /// </param>
    void SetEquation(Macad::Occt::Graphic3d_Vec4d^ theEquation);
    /// <summary>
    /// Get 4-component equation vector for clipping plane.
    /// </summary>
    /// <returns>
    /// clipping plane equation vector.
    /// </returns>
    Macad::Occt::Graphic3d_Vec4d^ GetEquation();
    /// <summary>
    /// Get 4-component equation vector for clipping plane.
    /// </summary>
    /// <returns>
    /// clipping plane equation vector.
    /// </returns>
    Macad::Occt::Graphic3d_Vec4d^ ReversedEquation();
    /// <summary>
    /// Check that the clipping plane is turned on.
    /// </summary>
    /// <returns>
    /// boolean flag indicating whether the plane is in on or off state.
    /// </returns>
    bool IsOn();
    /// <summary>
    /// Change state of the clipping plane.
    /// </summary>
    /// <param name="in]">
    /// theIsOn  the flag specifying whether the graphic driver
    /// clipping by this plane should be turned on or off.
    /// </param>
    void SetOn(bool theIsOn);
    /// <summary>
    /// Change state of capping surface rendering.
    /// </summary>
    /// <param name="in]">
    /// theIsOn  the flag specifying whether the graphic driver should
    /// perform rendering of capping surface produced by this plane. The graphic
    /// driver produces this surface for convex graphics by means of stencil-test
    /// and multi-pass rendering.
    /// </param>
    void SetCapping(bool theIsOn);
    /// <summary>
    /// Check state of capping surface rendering.
    /// </summary>
    /// <returns>
    /// true (turned on) or false depending on the state.
    /// </returns>
    bool IsCapping();
    /// <summary>
    /// Get geometrical definition.
    /// </summary>
    /// <returns>
    /// geometrical definition of clipping plane
    /// </returns>
    Macad::Occt::Pln ToPlane();
    /// <summary>
    /// Clone plane. Virtual method to simplify copying procedure if plane
    /// class is redefined at application level to add specific fields to it
    /// e.g. id, name, etc.
    /// </summary>
    /// <returns>
    /// new instance of clipping plane with same properties and attributes.
    /// </returns>
    Macad::Occt::Graphic3d_ClipPlane^ Clone();
    /// <summary>
    /// Return TRUE if this item defines a conjunction (logical AND) between a set of Planes.
    /// Graphic3d_ClipPlane item defines either a Clipping halfspace (single Clipping Plane)
    /// or a Clipping volume defined by a logical AND (conjunction) operation between a set of Planes
    /// defined as a Chain (so that the volume cuts a space only in case if check fails for ALL Planes
    /// in the Chain).
    /// 
    /// Note that Graphic3d_ClipPlane item cannot:
    /// - Define a Chain with logical OR (disjunction) operation;
    /// this should be done through Graphic3d_SequenceOfHClipPlane.
    /// - Define nested Chains.
    /// - Disable Chain items; only entire Chain can be disabled (by disabled a head of Chain).
    /// 
    /// The head of a Chain defines all visual properties of the Chain,
    /// so that Graphic3d_ClipPlane of next items in a Chain merely defines only geometrical
    /// definition of the plane.
    /// </summary>
    bool IsChain();
    /// <summary>
    /// Return the previous plane in a Chain of Planes defining logical AND operation,
    /// or NULL if there is no Chain or it is a first element in Chain.
    /// When clipping is defined by a Chain of Planes,
    /// it cuts a space only in case if check fails for all Planes in Chain.
    /// </summary>
    Macad::Occt::Graphic3d_ClipPlane^ ChainPreviousPlane();
    /// <summary>
    /// Return the next plane in a Chain of Planes defining logical AND operation,
    /// or NULL if there is no chain or it is a last element in chain.
    /// </summary>
    Macad::Occt::Graphic3d_ClipPlane^ ChainNextPlane();
    /// <summary>
    /// Return the number of chains in forward direction (including this item, so it is always >= 1).
    /// For a head of Chain - returns the length of entire Chain.
    /// </summary>
    int NbChainNextPlanes();
    /// <summary>
    /// Set the next plane in a Chain of Planes.
    /// This operation also updates relationship between chains (Previous/Next items),
    /// so that the previously set Next plane is cut off.
    /// </summary>
    void SetChainNextPlane(Macad::Occt::Graphic3d_ClipPlane^ thePlane);
    /// <summary>
    /// Return color for rendering capping surface.
    /// </summary>
    Macad::Occt::Quantity_Color^ CappingColor();
    /// <summary>
    /// Set color for rendering capping surface.
    /// </summary>
    void SetCappingColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Set material for rendering capping surface.
    /// </summary>
    /// <param name="in]">
    /// theMat  the material.
    /// </param>
    void SetCappingMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theMat);
    /// <summary>
    /// </summary>
    /// <returns>
    /// capping material.
    /// </returns>
    Macad::Occt::Graphic3d_MaterialAspect^ CappingMaterial();
    /// <summary>
    /// Set texture to be applied on capping surface.
    /// </summary>
    /// <param name="in]">
    /// theTexture  the texture.
    /// </param>
    void SetCappingTexture(Macad::Occt::Graphic3d_TextureMap^ theTexture);
    /// <summary>
    /// </summary>
    /// <returns>
    /// capping texture map.
    /// </returns>
    Macad::Occt::Graphic3d_TextureMap^ CappingTexture();
    /// <summary>
    /// Set hatch style (stipple) and turn hatching on.
    /// </summary>
    /// <param name="in]">
    /// theStyle  the hatch style.
    /// </param>
    void SetCappingHatch(Macad::Occt::Aspect_HatchStyle theStyle);
    /// <summary>
    /// </summary>
    /// <returns>
    /// hatching style.
    /// </returns>
    Macad::Occt::Aspect_HatchStyle CappingHatch();
    /// <summary>
    /// Set custom hatch style (stipple) and turn hatching on.
    /// </summary>
    /// <param name="in]">
    /// theStyle  the hatch pattern.
    /// </param>
    void SetCappingCustomHatch(Macad::Occt::Graphic3d_HatchStyle^ theStyle);
    /// <summary>
    /// </summary>
    /// <returns>
    /// hatching style.
    /// </returns>
    Macad::Occt::Graphic3d_HatchStyle^ CappingCustomHatch();
    /// <summary>
    /// Turn on hatching.
    /// </summary>
    void SetCappingHatchOn();
    /// <summary>
    /// Turn off hatching.
    /// </summary>
    void SetCappingHatchOff();
    /// <summary>
    /// </summary>
    /// <returns>
    /// True if hatching mask is turned on.
    /// </returns>
    bool IsHatchOn();
    /// <summary>
    /// This ID is used for managing associated resources in graphical driver.
    /// The clip plane can be assigned within a range of IO which can be
    /// displayed in separate OpenGl contexts. For each of the context an associated
    /// OpenGl resource for graphical aspects should be created and kept.
    /// The resources are stored in graphical driver for each of individual groups
    /// of shared context under the clip plane identifier.
    /// </summary>
    /// <returns>
    /// clip plane resource identifier string.
    /// </returns>
    Macad::Occt::TCollection_AsciiString^ GetId();
    /// <summary>
    /// Return capping aspect.
    /// </summary>
    /// <returns>
    /// capping surface rendering aspect.
    /// </returns>
    Macad::Occt::Graphic3d_AspectFillArea3d^ CappingAspect();
    /// <summary>
    /// Assign capping aspect.
    /// </summary>
    void SetCappingAspect(Macad::Occt::Graphic3d_AspectFillArea3d^ theAspect);
    /// <summary>
    /// Flag indicating whether material for capping plane should be taken from object.
    /// Default value: FALSE (use dedicated capping plane material).
    /// </summary>
    bool ToUseObjectMaterial();
    /// <summary>
    /// Set flag for controlling the source of capping plane material.
    /// </summary>
    void SetUseObjectMaterial(bool theToUse);
    /// <summary>
    /// Flag indicating whether texture for capping plane should be taken from object.
    /// Default value: FALSE.
    /// </summary>
    bool ToUseObjectTexture();
    /// <summary>
    /// Set flag for controlling the source of capping plane texture.
    /// </summary>
    void SetUseObjectTexture(bool theToUse);
    /// <summary>
    /// Flag indicating whether shader program for capping plane should be taken from object.
    /// Default value: FALSE.
    /// </summary>
    bool ToUseObjectShader();
    /// <summary>
    /// Set flag for controlling the source of capping plane shader program.
    /// </summary>
    void SetUseObjectShader(bool theToUse);
    /// <summary>
    /// Return true if some fill area aspect properties should be taken from object.
    /// </summary>
    bool ToUseObjectProperties();
    /// <summary>
    /// Check if the given point is outside / inside / on section.
    /// </summary>
    Macad::Occt::Graphic3d_ClipState ProbePoint(Macad::Occt::Graphic3d_Vec4d^ thePoint);
    /* Method skipped due to unknown mapping: Graphic3d_ClipState ProbeBox(Graphic3d_BndBox3d theBox, ) */
    /* Method skipped due to unknown mapping: bool ProbeBoxTouch(Graphic3d_BndBox3d theBox, ) */
    /// <summary>
    /// Check if the given point is outside of the half-space (e.g. should be discarded by clipping
    /// plane).
    /// </summary>
    Macad::Occt::Graphic3d_ClipState ProbePointHalfspace(Macad::Occt::Graphic3d_Vec4d^ thePoint);
    /* Method skipped due to unknown mapping: Graphic3d_ClipState ProbeBoxHalfspace(Graphic3d_BndBox3d theBox, ) */
    /// <summary>
    /// Check if the given point is outside of the half-space (e.g. should be discarded by clipping
    /// plane).
    /// </summary>
    bool IsPointOutHalfspace(Macad::Occt::Graphic3d_Vec4d^ thePoint);
    /* Method skipped due to unknown mapping: bool IsBoxFullOutHalfspace(Graphic3d_BndBox3d theBox, ) */
    /* Method skipped due to unknown mapping: Graphic3d_ClipState ProbeBoxMaxPointHalfspace(Graphic3d_BndBox3d theBox, ) */
    /* Method skipped due to unknown mapping: bool IsBoxFullInHalfspace(Graphic3d_BndBox3d theBox, ) */
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    /// <summary>
    /// </summary>
    /// <returns>
    /// modification counter for equation.
    /// </returns>
    unsigned int MCountEquation();
    /// <summary>
    /// </summary>
    /// <returns>
    /// modification counter for aspect.
    /// </returns>
    unsigned int MCountAspect();
    static Macad::Occt::Graphic3d_ClipPlane^ CreateDowncasted(::Graphic3d_ClipPlane* instance);
}; // class Graphic3d_ClipPlane

//---------------------------------------------------------------------
//  Class  Graphic3d_PresentationAttributes
//---------------------------------------------------------------------
/// <summary>
/// Class defines presentation properties.
/// </summary>
public ref class Graphic3d_PresentationAttributes
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_PresentationAttributes_h
public:
    Include_Graphic3d_PresentationAttributes_h
#endif

protected:
    Graphic3d_PresentationAttributes(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    Graphic3d_PresentationAttributes(::Graphic3d_PresentationAttributes* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_PresentationAttributes(::Graphic3d_PresentationAttributes& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_PresentationAttributes* NativeInstance
    {
        ::Graphic3d_PresentationAttributes* get()
        {
            return static_cast<::Graphic3d_PresentationAttributes*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    Graphic3d_PresentationAttributes();
    /// <summary>
    /// Returns highlight method, Aspect_TOHM_COLOR by default.
    /// </summary>
    Macad::Occt::Aspect_TypeOfHighlightMethod Method();
    /// <summary>
    /// Changes highlight method to the given one.
    /// </summary>
    void SetMethod(Macad::Occt::Aspect_TypeOfHighlightMethod theMethod);
    /// <summary>
    /// Returns basic presentation color (including alpha channel).
    /// </summary>
    Macad::Occt::Quantity_ColorRGBA^ ColorRGBA();
    /// <summary>
    /// Returns basic presentation color, Quantity_NOC_WHITE by default.
    /// </summary>
    Macad::Occt::Quantity_Color^ Color();
    /// <summary>
    /// Sets basic presentation color (RGB components, does not modifies transparency).
    /// </summary>
    void SetColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Returns basic presentation transparency (0 - opaque, 1 - fully transparent), 0 by default
    /// (opaque).
    /// </summary>
    float Transparency();
    /// <summary>
    /// Sets basic presentation transparency (0 - opaque, 1 - fully transparent).
    /// </summary>
    void SetTransparency(float theTranspCoef);
    /// <summary>
    /// Returns presentation Zlayer, Graphic3d_ZLayerId_Default by default.
    /// Graphic3d_ZLayerId_UNKNOWN means undefined (a layer of main presentation to be used).
    /// </summary>
    int ZLayer();
    /// <summary>
    /// Sets presentation Zlayer.
    /// </summary>
    void SetZLayer(int theLayer);
    /// <summary>
    /// Returns display mode, 0 by default.
    /// -1 means undefined (main display mode of presentation to be used).
    /// </summary>
    int DisplayMode();
    /// <summary>
    /// Sets display mode.
    /// </summary>
    void SetDisplayMode(int theMode);
    /// <summary>
    /// Return basic presentation fill area aspect, NULL by default.
    /// When set, might be used instead of Color() property.
    /// </summary>
    Macad::Occt::Graphic3d_AspectFillArea3d^ BasicFillAreaAspect();
    /// <summary>
    /// Sets basic presentation fill area aspect.
    /// </summary>
    void SetBasicFillAreaAspect(Macad::Occt::Graphic3d_AspectFillArea3d^ theAspect);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Graphic3d_PresentationAttributes^ CreateDowncasted(::Graphic3d_PresentationAttributes* instance);
}; // class Graphic3d_PresentationAttributes

//---------------------------------------------------------------------
//  Class  Graphic3d_Vertex
//---------------------------------------------------------------------
/// <summary>
/// This class represents a graphical 3D point.
/// </summary>
public ref class Graphic3d_Vertex sealed
    : public Macad::Occt::BaseClass<::Graphic3d_Vertex>
{

#ifdef Include_Graphic3d_Vertex_h
public:
    Include_Graphic3d_Vertex_h
#endif

public:
    Graphic3d_Vertex(::Graphic3d_Vertex* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vertex>( nativeInstance, true )
    {}

    Graphic3d_Vertex(::Graphic3d_Vertex& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_Vertex>( &nativeInstance, false )
    {}

    property ::Graphic3d_Vertex* NativeInstance
    {
        ::Graphic3d_Vertex* get()
        {
            return static_cast<::Graphic3d_Vertex*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a point with 0.0, 0.0, 0.0 coordinates.
    /// </summary>
    Graphic3d_Vertex();
    /// <summary>
    /// Creates a point with theX, theY and theZ coordinates.
    /// </summary>
    Graphic3d_Vertex(float theX, float theY, float theZ);
    /// <summary>
    /// Creates a point with theX, theY and theZ coordinates.
    /// </summary>
    Graphic3d_Vertex(double theX, double theY, double theZ);
    /// <summary>
    /// Modifies the coordinates.
    /// </summary>
    void SetCoord(float theX, float theY, float theZ);
    /// <summary>
    /// Modifies the coordinates.
    /// </summary>
    void SetCoord(double theX, double theY, double theZ);
    /// <summary>
    /// Returns the coordinates.
    /// </summary>
    void Coord(float% theX, float% theY, float% theZ);
    /// <summary>
    /// Returns the coordinates.
    /// </summary>
    void Coord(double% theX, double% theY, double% theZ);
    /// <summary>
    /// Returns the X coordinates.
    /// </summary>
    float X();
    /// <summary>
    /// Returns the Y coordinate.
    /// </summary>
    float Y();
    /// <summary>
    /// Returns the Z coordinate.
    /// </summary>
    float Z();
    /// <summary>
    /// Returns the distance between two points.
    /// </summary>
    float Distance(Macad::Occt::Graphic3d_Vertex^ theOther);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
}; // class Graphic3d_Vertex

//---------------------------------------------------------------------
//  Class  Graphic3d_Structure
//---------------------------------------------------------------------
/// <summary>
/// This class allows the definition a graphic object.
/// This graphic structure can be displayed, erased, or highlighted.
/// This graphic structure can be connected with another graphic structure.
/// </summary>
public ref class Graphic3d_Structure
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_Structure_h
public:
    Include_Graphic3d_Structure_h
#endif

protected:
    Graphic3d_Structure(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    Graphic3d_Structure(::Graphic3d_Structure* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_Structure(::Graphic3d_Structure& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_Structure* NativeInstance
    {
        ::Graphic3d_Structure* get()
        {
            return static_cast<::Graphic3d_Structure*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a graphic object in the manager theManager.
    /// It will appear in all the views of the visualiser.
    /// The structure is not displayed when it is created.
    /// </summary>
    /// <param name="theManager">
    /// structure manager holding this structure
    /// </param>
    /// <param name="theLinkPrs">
    /// another structure for creating a shadow (linked) structure
    /// </param>
    Graphic3d_Structure(Macad::Occt::Graphic3d_StructureManager^ theManager, Macad::Occt::Graphic3d_Structure^ theLinkPrs);
    /// <summary>
    /// Creates a graphic object in the manager theManager.
    /// It will appear in all the views of the visualiser.
    /// The structure is not displayed when it is created.
    /// </summary>
    /// <param name="theManager">
    /// structure manager holding this structure
    /// </param>
    /// <param name="theLinkPrs">
    /// another structure for creating a shadow (linked) structure
    /// </param>
    Graphic3d_Structure(Macad::Occt::Graphic3d_StructureManager^ theManager);
    /// <summary>
    /// if WithDestruction == Standard_True then
    /// suppress all the groups of primitives in the structure.
    /// and it is mandatory to create a new group in <me>.
    /// if WithDestruction == Standard_False then
    /// clears all the groups of primitives in the structure.
    /// and all the groups are conserved and empty.
    /// They will be erased at the next screen update.
    /// The structure itself is conserved.
    /// The transformation and the attributes of <me> are conserved.
    /// The childs of <me> are conserved.
    /// </summary>
    void Clear(bool WithDestruction);
    /// <summary>
    /// if WithDestruction == Standard_True then
    /// suppress all the groups of primitives in the structure.
    /// and it is mandatory to create a new group in <me>.
    /// if WithDestruction == Standard_False then
    /// clears all the groups of primitives in the structure.
    /// and all the groups are conserved and empty.
    /// They will be erased at the next screen update.
    /// The structure itself is conserved.
    /// The transformation and the attributes of <me> are conserved.
    /// The childs of <me> are conserved.
    /// </summary>
    void Clear();
    /// <summary>
    /// Displays the structure <me> in all the views of the visualiser.
    /// </summary>
    void Display();
    /// <summary>
    /// Returns the current display priority for this structure.
    /// </summary>
    Macad::Occt::Graphic3d_DisplayPriority DisplayPriority();
    /// <summary>
    /// Modifies the order of displaying the structure.
    /// Values are between 0 and 10.
    /// Structures are drawn according to their display priorities in ascending order.
    /// A structure of priority 10 is displayed the last and appears over the others.
    /// The default value is 5.
    /// Warning: If structure is displayed then the SetDisplayPriority method erases it and displays
    /// with the new priority. Raises Graphic3d_PriorityDefinitionError if Priority is greater than 10
    /// or a negative value.
    /// </summary>
    void SetDisplayPriority(Macad::Occt::Graphic3d_DisplayPriority thePriority);
    void SetDisplayPriority(int thePriority);
    /// <summary>
    /// Reset the current priority of the structure to the previous priority.
    /// Warning: If structure is displayed then the SetDisplayPriority() method erases it and displays
    /// with the previous priority.
    /// </summary>
    void ResetDisplayPriority();
    /// <summary>
    /// Erases this structure in all the views of the visualiser.
    /// </summary>
    void Erase();
    /// <summary>
    /// Highlights the structure in all the views with the given style
    /// </summary>
    /// <param name="in]">
    /// theStyle  the style (type of highlighting: box/color, color and opacity)
    /// </param>
    /// <param name="in]">
    /// theToUpdateMgr  defines whether related computed structures will be
    /// highlighted via structure manager or not
    /// </param>
    void Highlight(Macad::Occt::Graphic3d_PresentationAttributes^ theStyle, bool theToUpdateMgr);
    /// <summary>
    /// Highlights the structure in all the views with the given style
    /// </summary>
    /// <param name="in]">
    /// theStyle  the style (type of highlighting: box/color, color and opacity)
    /// </param>
    /// <param name="in]">
    /// theToUpdateMgr  defines whether related computed structures will be
    /// highlighted via structure manager or not
    /// </param>
    void Highlight(Macad::Occt::Graphic3d_PresentationAttributes^ theStyle);
    /// <summary>
    /// Suppress the structure <me>.
    /// It will be erased at the next screen update.
    /// Warning: No more graphic operations in <me> after this call.
    /// Category: Methods to modify the class definition
    /// </summary>
    void Remove();
    /// <summary>
    /// Computes axis-aligned bounding box of a structure.
    /// </summary>
    void CalculateBoundBox();
    /// <summary>
    /// Sets infinite flag.
    /// When TRUE, the MinMaxValues method returns:
    /// theXMin = theYMin = theZMin = RealFirst().
    /// theXMax = theYMax = theZMax = RealLast().
    /// By default, structure is created not infinite but empty.
    /// </summary>
    void SetInfiniteState(bool theToSet);
    /// <summary>
    /// Set Z layer ID for the structure. The Z layer mechanism
    /// allows to display structures presented in higher layers in overlay
    /// of structures in lower layers by switching off z buffer depth
    /// test between layers
    /// </summary>
    void SetZLayer(int theLayerId);
    /// <summary>
    /// Get Z layer ID of displayed structure.
    /// The method returns -1 if the structure has no ID (deleted from graphic driver).
    /// </summary>
    int GetZLayer();
    /// <summary>
    /// Changes a sequence of clip planes slicing the structure on rendering.
    /// </summary>
    /// <param name="in]">
    /// thePlanes  the set of clip planes.
    /// </param>
    void SetClipPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes);
    /// <summary>
    /// Get clip planes slicing the structure on rendering.
    /// </summary>
    /// <returns>
    /// set of clip planes.
    /// </returns>
    Macad::Occt::Graphic3d_SequenceOfHClipPlane^ ClipPlanes();
    /// <summary>
    /// Modifies the visibility indicator to Standard_True or
    /// Standard_False for the structure <me>.
    /// The default value at the definition of <me> is
    /// Standard_True.
    /// </summary>
    void SetVisible(bool AValue);
    /// <summary>
    /// Modifies the visualisation mode for the structure <me>.
    /// </summary>
    void SetVisual(Macad::Occt::Graphic3d_TypeOfStructure AVisual);
    /// <summary>
    /// Modifies the minimum and maximum zoom coefficients
    /// for the structure <me>.
    /// The default value at the definition of <me> is unlimited.
    /// Category: Methods to modify the class definition
    /// Warning: Raises StructureDefinitionError if <LimitInf> is
    /// greater than <LimitSup> or if <LimitInf> or
    /// <LimitSup> is a negative value.
    /// </summary>
    void SetZoomLimit(double LimitInf, double LimitSup);
    /// <summary>
    /// Marks the structure <me> representing wired structure needed for highlight only so it won't be
    /// added to BVH tree.
    /// </summary>
    void SetIsForHighlight(bool isForHighlight);
    /// <summary>
    /// Suppresses the highlight for the structure <me>
    /// in all the views of the visualiser.
    /// </summary>
    void UnHighlight();
    void Compute();
    /// <summary>
    /// Returns the new Structure defined for the new visualization
    /// </summary>
    void computeHLR(Macad::Occt::Graphic3d_Camera^ theProjector, Macad::Occt::Graphic3d_Structure^ theStructure);
    /// <summary>
    /// Calculates structure transformation for specific camera position
    /// </summary>
    void RecomputeTransformation(Macad::Occt::Graphic3d_Camera^ theProjector);
    /// <summary>
    /// Forces a new construction of the structure <me>
    /// if <me> is displayed and TOS_COMPUTED.
    /// </summary>
    void ReCompute();
    /// <summary>
    /// Forces a new construction of the structure <me>
    /// if <me> is displayed in <aProjetor> and TOS_COMPUTED.
    /// </summary>
    void ReCompute(Macad::Occt::Graphic3d_DataStructureManager^ aProjector);
    /// <summary>
    /// Returns the groups sequence included in this structure.
    /// </summary>
    Macad::Occt::Graphic3d_SequenceOfGroup^ Groups();
    /// <summary>
    /// Returns the current number of groups in this structure.
    /// </summary>
    int NumberOfGroups();
    /// <summary>
    /// Append new group to this structure.
    /// </summary>
    Macad::Occt::Graphic3d_Group^ NewGroup();
    /// <summary>
    /// Returns the last created group or creates new one if list is empty.
    /// </summary>
    Macad::Occt::Graphic3d_Group^ CurrentGroup();
    /// <summary>
    /// Returns the highlight attributes.
    /// </summary>
    Macad::Occt::Graphic3d_PresentationAttributes^ HighlightStyle();
    /// <summary>
    /// Returns TRUE if this structure is deleted (after Remove() call).
    /// </summary>
    bool IsDeleted();
    /// <summary>
    /// Returns the display indicator for this structure.
    /// </summary>
    bool IsDisplayed();
    /// <summary>
    /// Returns Standard_True if the structure <me> is empty.
    /// Warning: A structure is empty if :
    /// it do not have group or all the groups are empties
    /// and it do not have descendant or all the descendants
    /// are empties.
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// Returns Standard_True if the structure <me> is infinite.
    /// </summary>
    bool IsInfinite();
    /// <summary>
    /// Returns the highlight indicator for this structure.
    /// </summary>
    bool IsHighlighted();
    /// <summary>
    /// Returns TRUE if the structure is transformed.
    /// </summary>
    bool IsTransformed();
    /// <summary>
    /// Returns the visibility indicator for this structure.
    /// </summary>
    bool IsVisible();
    /// <summary>
    /// Returns the coordinates of the boundary box of the structure <me>.
    /// If <theToIgnoreInfiniteFlag> is TRUE, the method returns actual graphical
    /// boundaries of the Graphic3d_Group components. Otherwise, the
    /// method returns boundaries taking into account infinite state
    /// of the structure. This approach generally used for application
    /// specific fit operation (e.g. fitting the model into screen,
    /// not taking into account infinite helper elements).
    /// Warning: If the structure <me> is empty then the empty box is returned,
    /// If the structure <me> is infinite then the whole box is returned.
    /// </summary>
    Macad::Occt::Bnd_Box^ MinMaxValues(bool theToIgnoreInfiniteFlag);
    /// <summary>
    /// Returns the coordinates of the boundary box of the structure <me>.
    /// If <theToIgnoreInfiniteFlag> is TRUE, the method returns actual graphical
    /// boundaries of the Graphic3d_Group components. Otherwise, the
    /// method returns boundaries taking into account infinite state
    /// of the structure. This approach generally used for application
    /// specific fit operation (e.g. fitting the model into screen,
    /// not taking into account infinite helper elements).
    /// Warning: If the structure <me> is empty then the empty box is returned,
    /// If the structure <me> is infinite then the whole box is returned.
    /// </summary>
    Macad::Occt::Bnd_Box^ MinMaxValues();
    /// <summary>
    /// Returns the visualisation mode for the structure <me>.
    /// </summary>
    Macad::Occt::Graphic3d_TypeOfStructure Visual();
    /// <summary>
    /// Returns Standard_True if the connection is possible between
    /// <AStructure1> and <AStructure2> without a creation
    /// of a cycle.
    /// 
    /// It's not possible to call the method
    /// AStructure1->Connect (AStructure2, TypeOfConnection)
    /// if
    /// - the set of all ancestors of <AStructure1> contains
    /// <AStructure1> and if the
    /// TypeOfConnection == TOC_DESCENDANT
    /// - the set of all descendants of <AStructure1> contains
    /// <AStructure2> and if the
    /// TypeOfConnection == TOC_ANCESTOR
    /// </summary>
    static bool AcceptConnection(Macad::Occt::Graphic3d_Structure^ theStructure1, Macad::Occt::Graphic3d_Structure^ theStructure2, Macad::Occt::Graphic3d_TypeOfConnection theType);
    /// <summary>
    /// Returns the group of structures to which <me> is connected.
    /// </summary>
    void Ancestors(Macad::Occt::Graphic3d_MapOfStructure^ SG);
    /// <summary>
    /// If Atype is TOC_DESCENDANT then add <AStructure>
    /// as a child structure of  <me>.
    /// If Atype is TOC_ANCESTOR then add <AStructure>
    /// as a parent structure of <me>.
    /// The connection propagates Display, Highlight, Erase,
    /// Remove, and stacks the transformations.
    /// No connection if the graph of the structures
    /// contains a cycle and <WithCheck> is Standard_True;
    /// </summary>
    void Connect(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::Graphic3d_TypeOfConnection theType, bool theWithCheck);
    /// <summary>
    /// If Atype is TOC_DESCENDANT then add <AStructure>
    /// as a child structure of  <me>.
    /// If Atype is TOC_ANCESTOR then add <AStructure>
    /// as a parent structure of <me>.
    /// The connection propagates Display, Highlight, Erase,
    /// Remove, and stacks the transformations.
    /// No connection if the graph of the structures
    /// contains a cycle and <WithCheck> is Standard_True;
    /// </summary>
    void Connect(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::Graphic3d_TypeOfConnection theType);
    void Connect(Macad::Occt::Graphic3d_Structure^ thePrs);
    /// <summary>
    /// Returns the group of structures connected to <me>.
    /// </summary>
    void Descendants(Macad::Occt::Graphic3d_MapOfStructure^ SG);
    /// <summary>
    /// Suppress the connection between <AStructure> and <me>.
    /// </summary>
    void Disconnect(Macad::Occt::Graphic3d_Structure^ theStructure);
    void Remove(Macad::Occt::Graphic3d_Structure^ thePrs);
    /// <summary>
    /// If Atype is TOC_DESCENDANT then suppress all
    /// the connections with the child structures of <me>.
    /// If Atype is TOC_ANCESTOR then suppress all
    /// the connections with the parent structures of <me>.
    /// </summary>
    void DisconnectAll(Macad::Occt::Graphic3d_TypeOfConnection AType);
    void RemoveAll();
    /* Method skipped due to unknown mapping: void Network(Graphic3d_Structure theStructure, Graphic3d_TypeOfConnection theType, NCollection_Map<Graphic3d_Structure *> theSet, ) */
    void SetOwner(System::IntPtr theOwner);
    System::IntPtr Owner();
    void SetHLRValidation(bool theFlag);
    /// <summary>
    /// Hidden parts stored in this structure are valid if:
    /// 1) the owner is defined.
    /// 2) they are not invalid.
    /// </summary>
    bool HLRValidation();
    /// <summary>
    /// Return local transformation.
    /// </summary>
    Macad::Occt::TopLoc_Datum3D^ Transformation();
    /// <summary>
    /// Modifies the current local transformation
    /// </summary>
    void SetTransformation(Macad::Occt::TopLoc_Datum3D^ theTrsf);
    /// <summary>
    /// Modifies the current transform persistence (pan, zoom or rotate)
    /// </summary>
    void SetTransformPersistence(Macad::Occt::Graphic3d_TransformPers^ theTrsfPers);
    /// <summary>
    /// </summary>
    /// <returns>
    /// transform persistence of the presentable object.
    /// </returns>
    Macad::Occt::Graphic3d_TransformPers^ TransformPersistence();
    /// <summary>
    /// Sets if the structure location has mutable nature (content or location will be changed
    /// regularly).
    /// </summary>
    void SetMutable(bool theIsMutable);
    /// <summary>
    /// Returns true if structure has mutable nature (content or location are be changed regularly).
    /// Mutable structure will be managed in different way than static ones.
    /// </summary>
    bool IsMutable();
    Macad::Occt::Graphic3d_TypeOfStructure ComputeVisual();
    /// <summary>
    /// Clears the structure <me>.
    /// </summary>
    void GraphicClear(bool WithDestruction);
    void GraphicConnect(Macad::Occt::Graphic3d_Structure^ theDaughter);
    void GraphicDisconnect(Macad::Occt::Graphic3d_Structure^ theDaughter);
    /// <summary>
    /// Internal method which sets new transformation without calling graphic manager callbacks.
    /// </summary>
    void GraphicTransform(Macad::Occt::TopLoc_Datum3D^ theTrsf);
    /// <summary>
    /// Returns the identification number of this structure.
    /// </summary>
    int Identification();
    /// <summary>
    /// Prints information about the network associated
    /// with the structure <AStructure>.
    /// </summary>
    static void PrintNetwork(Macad::Occt::Graphic3d_Structure^ AStructure, Macad::Occt::Graphic3d_TypeOfConnection AType);
    /// <summary>
    /// Suppress the structure in the list of descendants or in the list of ancestors.
    /// </summary>
    void Remove(Macad::Occt::Graphic3d_Structure^ thePtr, Macad::Occt::Graphic3d_TypeOfConnection theType);
    void SetComputeVisual(Macad::Occt::Graphic3d_TypeOfStructure theVisual);
    /// <summary>
    /// Transforms theX, theY, theZ with the transformation theTrsf.
    /// </summary>
    static void Transforms(Macad::Occt::Trsf theTrsf, double theX, double theY, double theZ, double% theNewX, double% theNewY, double% theNewZ);
    /// <summary>
    /// Returns the low-level structure
    /// </summary>
    Macad::Occt::Graphic3d_CStructure^ CStructure();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Graphic3d_Structure^ CreateDowncasted(::Graphic3d_Structure* instance);
}; // class Graphic3d_Structure

//---------------------------------------------------------------------
//  Class  Graphic3d_Text
//---------------------------------------------------------------------
/// <summary>
/// This class allows the definition of a text object for display.
/// The text might be defined in one of ways, using:
/// - text value and position,
/// - text value, orientation and the state whether the text uses position as point of attach.
/// - text formatter. Formatter contains text, height and alignment parameter.
/// 
/// This class also has parameters of the text height and H/V alignments.
/// Custom formatting is available using Font_TextFormatter.
/// </summary>
public ref class Graphic3d_Text sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_Text_h
public:
    Include_Graphic3d_Text_h
#endif

public:
    Graphic3d_Text(::Graphic3d_Text* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_Text(::Graphic3d_Text& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_Text* NativeInstance
    {
        ::Graphic3d_Text* get()
        {
            return static_cast<::Graphic3d_Text*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates default text parameters.
    /// </summary>
    Graphic3d_Text(float theHeight);
    /* Method skipped due to unknown mapping: NCollection_Utf8String Text() */
    /* Method skipped due to unknown mapping: void SetText(NCollection_Utf8String theText, ) */
    /// <summary>
    /// Sets text value.
    /// </summary>
    void SetText(Macad::Occt::TCollection_AsciiString^ theText);
    /// <summary>
    /// Sets text value.
    /// </summary>
    void SetText(System::String^ theText);
    /* Method skipped due to unknown mapping: Font_TextFormatter TextFormatter() */
    /* Method skipped due to unknown mapping: void SetTextFormatter(Font_TextFormatter theFormatter, ) */
    /// <summary>
    /// The 3D point of attachment is projected.
    /// If the orientation is defined, the text is written in the plane of projection.
    /// </summary>
    Macad::Occt::Pnt Position();
    /// <summary>
    /// Sets text point.
    /// </summary>
    void SetPosition(Macad::Occt::Pnt thePoint);
    /// <summary>
    /// Returns text orientation in 3D space.
    /// </summary>
    Macad::Occt::Ax2 Orientation();
    /// <summary>
    /// Returns true if the text is filled by a point
    /// </summary>
    bool HasPlane();
    /// <summary>
    /// Sets text orientation in 3D space.
    /// </summary>
    void SetOrientation(Macad::Occt::Ax2 theOrientation);
    /// <summary>
    /// Reset text orientation in 3D space.
    /// </summary>
    void ResetOrientation();
    /// <summary>
    /// Returns true if the text has an anchor point
    /// </summary>
    bool HasOwnAnchorPoint();
    /// <summary>
    /// Returns true if the text has an anchor point
    /// </summary>
    void SetOwnAnchorPoint(bool theHasOwnAnchor);
    /// <summary>
    /// Sets height of text. (Relative to the Normalized Projection Coordinates (NPC) Space).
    /// </summary>
    float Height();
    /// <summary>
    /// Returns height of text
    /// </summary>
    void SetHeight(float theHeight);
    /// <summary>
    /// Returns horizontal alignment of text.
    /// </summary>
    Macad::Occt::Graphic3d_HorizontalTextAlignment HorizontalAlignment();
    /// <summary>
    /// Sets horizontal alignment of text.
    /// </summary>
    void SetHorizontalAlignment(Macad::Occt::Graphic3d_HorizontalTextAlignment theJustification);
    /// <summary>
    /// Returns vertical alignment of text.
    /// </summary>
    Macad::Occt::Graphic3d_VerticalTextAlignment VerticalAlignment();
    /// <summary>
    /// Sets vertical alignment of text.
    /// </summary>
    void SetVerticalAlignment(Macad::Occt::Graphic3d_VerticalTextAlignment theJustification);
    static Macad::Occt::Graphic3d_Text^ CreateDowncasted(::Graphic3d_Text* instance);
}; // class Graphic3d_Text

//---------------------------------------------------------------------
//  Class  Graphic3d_TransformPers
//---------------------------------------------------------------------
/// <summary>
/// Transformation Persistence definition.
/// 
/// Transformation Persistence defines a mutable Local Coordinate system which depends on camera
/// position, so that visual appearance of the object becomes partially immutable while camera
/// moves. Object visually preserves particular property such as size, placement, rotation or their
/// combination.
/// 
/// Graphic3d_TMF_ZoomPers, Graphic3d_TMF_RotatePers and Graphic3d_TMF_ZoomRotatePers define Local
/// Coordinate system having origin in specified anchor point defined in World Coordinate system,
/// while Graphic3d_TMF_TriedronPers and Graphic3d_TMF_2d define origin as 2D offset from screen
/// corner in pixels.
/// 
/// Graphic3d_TMF_2d, Graphic3d_TMF_TriedronPers and Graphic3d_TMF_ZoomPers defines Local Coordinate
/// system where length units are pixels. Beware that Graphic3d_RenderingParams::ResolutionRatio()
/// will be ignored! For other Persistence flags, normal (world) length units will apply.
/// 
/// Graphic3d_TMF_AxialPers and Graphic3d_TMF_AxialZoomPers defines persistence in the axial scale,
/// i.e., keeps the object visual coherence when the camera's axial scale is changed.
/// Meant to be used by objects such as Manipulators and trihedrons.
/// WARNING: Graphic3d_TMF_None is not permitted for defining instance of this class - NULL handle
/// should be used for this purpose!
/// </summary>
public ref class Graphic3d_TransformPers
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_TransformPers_h
public:
    Include_Graphic3d_TransformPers_h
#endif

protected:
    Graphic3d_TransformPers(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    Graphic3d_TransformPers(::Graphic3d_TransformPers* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_TransformPers(::Graphic3d_TransformPers& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_TransformPers* NativeInstance
    {
        ::Graphic3d_TransformPers* get()
        {
            return static_cast<::Graphic3d_TransformPers*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Set transformation persistence.
    /// </summary>
    Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransModeFlags theMode);
    /// <summary>
    /// Set Zoom/Rotate transformation persistence with an anchor 3D point.
    /// Anchor point defines the origin of Local Coordinate system within World Coordinate system.
    /// Throws an exception if persistence mode is not Graphic3d_TMF_ZoomPers,
    /// Graphic3d_TMF_ZoomRotatePers or Graphic3d_TMF_RotatePers.
    /// </summary>
    Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Pnt thePnt);
    /// <summary>
    /// Set 2d/trihedron transformation persistence with a corner and 2D offset.
    /// 2D offset defines the origin of Local Coordinate system as projection of 2D point on screen
    /// plane into World Coordinate system. Throws an exception if persistence mode is not
    /// Graphic3d_TMF_TriedronPers or Graphic3d_TMF_2d. The offset is a positive displacement from the
    /// view corner in pixels.
    /// </summary>
    Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Aspect_TypeOfTriedronPosition theCorner, Macad::Occt::Graphic3d_Vec2i^ theOffset);
    /// <summary>
    /// Set 2d/trihedron transformation persistence with a corner and 2D offset.
    /// 2D offset defines the origin of Local Coordinate system as projection of 2D point on screen
    /// plane into World Coordinate system. Throws an exception if persistence mode is not
    /// Graphic3d_TMF_TriedronPers or Graphic3d_TMF_2d. The offset is a positive displacement from the
    /// view corner in pixels.
    /// </summary>
    Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Aspect_TypeOfTriedronPosition theCorner);
    /// <summary>
    /// Return true if specified mode is zoom/rotate transformation persistence.
    /// </summary>
    static bool IsZoomOrRotate(Macad::Occt::Graphic3d_TransModeFlags theMode);
    /// <summary>
    /// Return true if specified mode is 2d/trihedron transformation persistence.
    /// </summary>
    static bool IsTrihedronOr2d(Macad::Occt::Graphic3d_TransModeFlags theMode);
    /// <summary>
    /// Return true if specified mode is orthographic projection transformation persistence.
    /// </summary>
    static bool IsOrthoPers(Macad::Occt::Graphic3d_TransModeFlags theMode);
    /// <summary>
    /// Return true if specified mode is axial transformation persistence.
    /// </summary>
    static bool IsAxial(Macad::Occt::Graphic3d_TransModeFlags theMode);
    /// <summary>
    /// Return true for Graphic3d_TMF_ZoomPers, Graphic3d_TMF_ZoomRotatePers or
    /// Graphic3d_TMF_RotatePers modes.
    /// </summary>
    bool IsZoomOrRotate();
    /// <summary>
    /// Return true for Graphic3d_TMF_TriedronPers and Graphic3d_TMF_2d modes.
    /// </summary>
    bool IsTrihedronOr2d();
    /// <summary>
    /// Return true for Graphic3d_TMF_OrthoPers mode.
    /// </summary>
    bool IsOrthoPers();
    /// <summary>
    /// Return true for Graphic3d_TMF_AxialScalePers modes.
    /// </summary>
    bool IsAxial();
    /// <summary>
    /// Transformation persistence mode flags.
    /// </summary>
    Macad::Occt::Graphic3d_TransModeFlags Mode();
    /// <summary>
    /// Transformation persistence mode flags.
    /// </summary>
    Macad::Occt::Graphic3d_TransModeFlags Flags();
    /// <summary>
    /// Set Zoom/Rotate transformation persistence with an anchor 3D point.
    /// Throws an exception if persistence mode is not Graphic3d_TMF_ZoomPers,
    /// Graphic3d_TMF_ZoomRotatePers or Graphic3d_TMF_RotatePers.
    /// </summary>
    void SetPersistence(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Pnt thePnt);
    /// <summary>
    /// Set 2d/trihedron transformation persistence with a corner and 2D offset.
    /// Throws an exception if persistence mode is not Graphic3d_TMF_TriedronPers or Graphic3d_TMF_2d.
    /// </summary>
    void SetPersistence(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Aspect_TypeOfTriedronPosition theCorner, Macad::Occt::Graphic3d_Vec2i^ theOffset);
    /// <summary>
    /// Return the anchor point for zoom/rotate transformation persistence.
    /// </summary>
    Macad::Occt::Pnt AnchorPoint();
    /// <summary>
    /// Set the anchor point for zoom/rotate transformation persistence.
    /// </summary>
    void SetAnchorPoint(Macad::Occt::Pnt thePnt);
    /// <summary>
    /// Return the corner for 2d/trihedron transformation persistence.
    /// </summary>
    Macad::Occt::Aspect_TypeOfTriedronPosition Corner2d();
    /// <summary>
    /// Set the corner for 2d/trihedron transformation persistence.
    /// </summary>
    void SetCorner2d(Macad::Occt::Aspect_TypeOfTriedronPosition thePos);
    /// <summary>
    /// Return the offset from the corner for 2d/trihedron transformation persistence.
    /// </summary>
    Macad::Occt::Graphic3d_Vec2i^ Offset2d();
    /// <summary>
    /// Set the offset from the corner for 2d/trihedron transformation persistence.
    /// </summary>
    void SetOffset2d(Macad::Occt::Graphic3d_Vec2i^ theOffset);
    /// <summary>
    /// Find scale value based on the camera position and view dimensions
    /// </summary>
    /// <param name="in]">
    /// theCamera  camera definition
    /// </param>
    /// <param name="in]">
    /// theViewportWidth  the width of viewport.
    /// </param>
    /// <param name="in]">
    /// theViewportHeight  the height of viewport.
    /// </param>
    double persistentScale(Macad::Occt::Graphic3d_Camera^ theCamera, int theViewportWidth, int theViewportHeight);
    /* Method skipped due to unknown mapping: NCollection_Mat3<double> persistentRotationMatrix(Graphic3d_Camera theCamera, int theViewportWidth, int theViewportHeight, ) */
    /// <summary>
    /// Perform computations for applying transformation persistence on specified matrices.
    /// </summary>
    /// <param name="in]">
    /// theCamera  camera definition
    /// </param>
    /// <param name="in]">
    /// theViewportWidth   viewport width
    /// </param>
    /// <param name="in]">
    /// theViewportHeight  viewport height
    /// </param>
    /// <param name="in]">
    /// theAnchor  if not NULL, overrides anchor point
    /// </param>
    Macad::Occt::Graphic3d_Mat4d^ ComputeApply(Macad::Occt::Graphic3d_Camera^ theCamera, int theViewportWidth, int theViewportHeight, Macad::Occt::Pnt theAnchor);
    /// <summary>
    /// Perform computations for applying transformation persistence on specified matrices.
    /// </summary>
    /// <param name="in]">
    /// theCamera  camera definition
    /// </param>
    /// <param name="in]">
    /// theViewportWidth   viewport width
    /// </param>
    /// <param name="in]">
    /// theViewportHeight  viewport height
    /// </param>
    /// <param name="in]">
    /// theAnchor  if not NULL, overrides anchor point
    /// </param>
    Macad::Occt::Graphic3d_Mat4d^ ComputeApply(Macad::Occt::Graphic3d_Camera^ theCamera, int theViewportWidth, int theViewportHeight);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Graphic3d_TransformPers^ CreateDowncasted(::Graphic3d_TransformPers* instance);
}; // class Graphic3d_TransformPers

//---------------------------------------------------------------------
//  Class  Graphic3d_Group
//---------------------------------------------------------------------
/// <summary>
/// This class allows the definition of groups
/// of primitives inside of graphic objects (presentations).
/// A group contains the primitives and attributes
/// for which the range is limited to this group.
/// The primitives of a group can be globally suppressed.
/// 
/// There are two main group usage models:
/// 
/// 1) Non-modifiable, or unbounded, group ('black box').
/// Developers can repeat a sequence of
/// SetPrimitivesAspect() with AddPrimitiveArray() methods arbitrary number of times
/// to define arbitrary number of primitive "blocks" each having individual aspect values.
/// Any modification of such a group is forbidden, as aspects and primitives are mixed
/// in memory without any high-level logical structure, and any modification is very likely to
/// result in corruption of the group internal data. It is necessary to recreate such a group as a
/// whole when some attribute should be changed. (for example, in terms of AIS it is necessary to
/// re-Compute() the whole presentation each time). 2) Bounded group. Developers should specify the
/// necessary group aspects with help of SetGroupPrimitivesAspect() and then add primitives to the
/// group. Such a group have simplified organization in memory (a single block of attributes
/// followed by a block of primitives) and therefore it can be modified, if it is necessary to
/// change parameters of some aspect that has already been set, using methods:
/// IsGroupPrimitivesAspectSet() to detect which aspect was set for primitives;
/// GroupPrimitivesAspect() to read current aspect values
/// and SetGroupPrimitivesAspect() to set new values.
/// 
/// Developers are strongly recommended to take all the above into account when filling
/// Graphic3d_Group with aspects and primitives and choose the group usage model beforehand out of
/// application needs. Note that some Graphic3d_Group class virtual methods contain only base
/// implementation that is extended by the descendant class in OpenGl package.
/// </summary>
public ref class Graphic3d_Group
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_Group_h
public:
    Include_Graphic3d_Group_h
#endif

public:
    Graphic3d_Group(::Graphic3d_Group* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_Group(::Graphic3d_Group& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_Group* NativeInstance
    {
        ::Graphic3d_Group* get()
        {
            return static_cast<::Graphic3d_Group*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Suppress all primitives and attributes of <me>.
    /// To clear group without update in Graphic3d_StructureManager
    /// pass Standard_False as <theUpdateStructureMgr>. This
    /// used on context and viewer destruction, when the pointer
    /// to structure manager in Graphic3d_Structure could be
    /// already released (pointers are used here to avoid handle
    /// cross-reference);
    /// </summary>
    void Clear(bool theUpdateStructureMgr);
    /// <summary>
    /// Suppress all primitives and attributes of <me>.
    /// To clear group without update in Graphic3d_StructureManager
    /// pass Standard_False as <theUpdateStructureMgr>. This
    /// used on context and viewer destruction, when the pointer
    /// to structure manager in Graphic3d_Structure could be
    /// already released (pointers are used here to avoid handle
    /// cross-reference);
    /// </summary>
    void Clear();
    /// <summary>
    /// Suppress the group <me> in the structure.
    /// Warning: No more graphic operations in <me> after this call.
    /// Modifies the current modelling transform persistence (pan, zoom or rotate)
    /// Get the current modelling transform persistence (pan, zoom or rotate)
    /// </summary>
    void Remove();
    /// <summary>
    /// Return fill area aspect.
    /// </summary>
    Macad::Occt::Graphic3d_Aspects^ Aspects();
    /// <summary>
    /// Modifies the context for all the face primitives of the group.
    /// </summary>
    void SetGroupPrimitivesAspect(Macad::Occt::Graphic3d_Aspects^ theAspect);
    /// <summary>
    /// Modifies the current context of the group to give another aspect for all the primitives
    /// created after this call in the group.
    /// </summary>
    void SetPrimitivesAspect(Macad::Occt::Graphic3d_Aspects^ theAspect);
    /// <summary>
    /// Update presentation aspects after their modification.
    /// </summary>
    void SynchronizeAspects();
    /* Method skipped due to unknown mapping: void ReplaceAspects(Graphic3d_MapOfAspectsToAspects theMap, ) */
    /// <summary>
    /// Adds a text for display
    /// </summary>
    void AddText(Macad::Occt::Graphic3d_Text^ theTextParams, bool theToEvalMinMax);
    /// <summary>
    /// Adds a text for display
    /// </summary>
    void AddText(Macad::Occt::Graphic3d_Text^ theTextParams);
    /* Method skipped due to unknown mapping: void AddPrimitiveArray(Graphic3d_TypeOfPrimitiveArray theType, Graphic3d_IndexBuffer theIndices, Graphic3d_Buffer theAttribs, Graphic3d_BoundBuffer theBounds, bool theToEvalMinMax, ) */
    /* Method skipped due to unknown mapping: void AddPrimitiveArray(Graphic3d_TypeOfPrimitiveArray theType, Graphic3d_IndexBuffer theIndices, Graphic3d_Buffer theAttribs, Graphic3d_BoundBuffer theBounds, bool theToEvalMinMax, ) */
    /// <summary>
    /// Adds an array of primitives for display
    /// </summary>
    void AddPrimitiveArray(Macad::Occt::Graphic3d_ArrayOfPrimitives^ thePrim, bool theToEvalMinMax);
    /// <summary>
    /// Adds an array of primitives for display
    /// </summary>
    void AddPrimitiveArray(Macad::Occt::Graphic3d_ArrayOfPrimitives^ thePrim);
    /// <summary>
    /// sets the stencil test to theIsEnabled state;
    /// </summary>
    void SetStencilTestOptions(bool theIsEnabled);
    /// <summary>
    /// sets the flipping to theIsEnabled state.
    /// </summary>
    void SetFlippingOptions(bool theIsEnabled, Macad::Occt::Ax2 theRefPlane);
    /// <summary>
    /// Return transformation.
    /// </summary>
    Macad::Occt::Trsf Transformation();
    /// <summary>
    /// Assign transformation.
    /// </summary>
    void SetTransformation(Macad::Occt::Trsf theTrsf);
    /// <summary>
    /// Return transformation persistence.
    /// </summary>
    Macad::Occt::Graphic3d_TransformPers^ TransformPersistence();
    /// <summary>
    /// Set transformation persistence.
    /// </summary>
    void SetTransformPersistence(Macad::Occt::Graphic3d_TransformPers^ theTrsfPers);
    /// <summary>
    /// Returns Standard_True if the group <me> is deleted.
    /// <me> is deleted after the call Remove (me) or the
    /// associated structure is deleted.
    /// </summary>
    bool IsDeleted();
    /// <summary>
    /// Returns Standard_True if the group <me> is empty.
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// Returns the coordinates of the boundary box of the group.
    /// </summary>
    void MinMaxValues(double% theXMin, double% theYMin, double% theZMin, double% theXMax, double% theYMax, double% theZMax);
    /// <summary>
    /// Sets the coordinates of the boundary box of the group.
    /// </summary>
    void SetMinMaxValues(double theXMin, double theYMin, double theZMin, double theXMax, double theYMax, double theZMax);
    /* Method skipped due to unknown mapping: Graphic3d_BndBox4f BoundingBox() */
    /* Method skipped due to unknown mapping: Graphic3d_BndBox4f ChangeBoundingBox() */
    /// <summary>
    /// Returns the structure containing the group <me>.
    /// </summary>
    Macad::Occt::Graphic3d_Structure^ Structure();
    /// <summary>
    /// Changes property shown that primitive arrays within this group form closed volume (do no
    /// contain open shells).
    /// </summary>
    void SetClosed(bool theIsClosed);
    /// <summary>
    /// Return true if primitive arrays within this graphic group form closed volume (do no contain
    /// open shells).
    /// </summary>
    bool IsClosed();
    /// <summary>
    /// </summary>
    /// @name obsolete methods
    void Marker(Macad::Occt::Graphic3d_Vertex^ thePoint, bool theToEvalMinMax);
    /// <summary>
    /// </summary>
    /// @name obsolete methods
    void Marker(Macad::Occt::Graphic3d_Vertex^ thePoint);
    /// <summary>
    /// Creates the string <AText> at position <APoint>.
    /// The 3D point of attachment is projected. The text is
    /// written in the plane of projection.
    /// The attributes are given with respect to the plane of
    /// projection.
    /// AHeight : Height of text.
    /// (Relative to the Normalized Projection
    /// Coordinates (NPC) Space).
    /// AAngle  : Orientation of the text
    /// (with respect to the horizontal).
    /// </summary>
    void Text(System::String^ AText, Macad::Occt::Graphic3d_Vertex^ APoint, double AHeight, double AAngle, Macad::Occt::Graphic3d_TextPath ATp, Macad::Occt::Graphic3d_HorizontalTextAlignment AHta, Macad::Occt::Graphic3d_VerticalTextAlignment AVta, bool EvalMinMax);
    /// <summary>
    /// Creates the string <AText> at position <APoint>.
    /// The 3D point of attachment is projected. The text is
    /// written in the plane of projection.
    /// The attributes are given with respect to the plane of
    /// projection.
    /// AHeight : Height of text.
    /// (Relative to the Normalized Projection
    /// Coordinates (NPC) Space).
    /// AAngle  : Orientation of the text
    /// (with respect to the horizontal).
    /// </summary>
    void Text(System::String^ AText, Macad::Occt::Graphic3d_Vertex^ APoint, double AHeight, double AAngle, Macad::Occt::Graphic3d_TextPath ATp, Macad::Occt::Graphic3d_HorizontalTextAlignment AHta, Macad::Occt::Graphic3d_VerticalTextAlignment AVta);
    /// <summary>
    /// Creates the string <AText> at position <APoint>.
    /// The 3D point of attachment is projected. The text is
    /// written in the plane of projection.
    /// The attributes are given with respect to the plane of
    /// projection.
    /// AHeight : Height of text.
    /// (Relative to the Normalized Projection
    /// Coordinates (NPC) Space).
    /// The other attributes have the following default values:
    /// AAngle  : PI / 2.
    /// ATp     : TP_RIGHT
    /// AHta    : HTA_LEFT
    /// AVta    : VTA_BOTTOM
    /// </summary>
    void Text(System::String^ AText, Macad::Occt::Graphic3d_Vertex^ APoint, double AHeight, bool EvalMinMax);
    /// <summary>
    /// Creates the string <AText> at position <APoint>.
    /// The 3D point of attachment is projected. The text is
    /// written in the plane of projection.
    /// The attributes are given with respect to the plane of
    /// projection.
    /// AHeight : Height of text.
    /// (Relative to the Normalized Projection
    /// Coordinates (NPC) Space).
    /// The other attributes have the following default values:
    /// AAngle  : PI / 2.
    /// ATp     : TP_RIGHT
    /// AHta    : HTA_LEFT
    /// AVta    : VTA_BOTTOM
    /// </summary>
    void Text(System::String^ AText, Macad::Occt::Graphic3d_Vertex^ APoint, double AHeight);
    /// <summary>
    /// Creates the string <AText> at position <APoint>.
    /// The 3D point of attachment is projected. The text is
    /// written in the plane of projection.
    /// The attributes are given with respect to the plane of
    /// projection.
    /// AHeight : Height of text.
    /// (Relative to the Normalized Projection
    /// Coordinates (NPC) Space).
    /// AAngle  : Orientation of the text
    /// (with respect to the horizontal).
    /// </summary>
    void Text(Macad::Occt::TCollection_ExtendedString^ AText, Macad::Occt::Graphic3d_Vertex^ APoint, double AHeight, double AAngle, Macad::Occt::Graphic3d_TextPath ATp, Macad::Occt::Graphic3d_HorizontalTextAlignment AHta, Macad::Occt::Graphic3d_VerticalTextAlignment AVta, bool EvalMinMax);
    /// <summary>
    /// Creates the string <AText> at position <APoint>.
    /// The 3D point of attachment is projected. The text is
    /// written in the plane of projection.
    /// The attributes are given with respect to the plane of
    /// projection.
    /// AHeight : Height of text.
    /// (Relative to the Normalized Projection
    /// Coordinates (NPC) Space).
    /// AAngle  : Orientation of the text
    /// (with respect to the horizontal).
    /// </summary>
    void Text(Macad::Occt::TCollection_ExtendedString^ AText, Macad::Occt::Graphic3d_Vertex^ APoint, double AHeight, double AAngle, Macad::Occt::Graphic3d_TextPath ATp, Macad::Occt::Graphic3d_HorizontalTextAlignment AHta, Macad::Occt::Graphic3d_VerticalTextAlignment AVta);
    /// <summary>
    /// Creates the string <AText> at position <APoint>.
    /// The 3D point of attachment is projected. The text is
    /// written in the plane of projection.
    /// The attributes are given with respect to the plane of
    /// projection.
    /// AHeight : Height of text.
    /// (Relative to the Normalized Projection
    /// Coordinates (NPC) Space).
    /// The other attributes have the following default values:
    /// AAngle  : PI / 2.
    /// ATp     : TP_RIGHT
    /// AHta    : HTA_LEFT
    /// AVta    : VTA_BOTTOM
    /// </summary>
    void Text(Macad::Occt::TCollection_ExtendedString^ AText, Macad::Occt::Graphic3d_Vertex^ APoint, double AHeight, bool EvalMinMax);
    /// <summary>
    /// Creates the string <AText> at position <APoint>.
    /// The 3D point of attachment is projected. The text is
    /// written in the plane of projection.
    /// The attributes are given with respect to the plane of
    /// projection.
    /// AHeight : Height of text.
    /// (Relative to the Normalized Projection
    /// Coordinates (NPC) Space).
    /// The other attributes have the following default values:
    /// AAngle  : PI / 2.
    /// ATp     : TP_RIGHT
    /// AHta    : HTA_LEFT
    /// AVta    : VTA_BOTTOM
    /// </summary>
    void Text(Macad::Occt::TCollection_ExtendedString^ AText, Macad::Occt::Graphic3d_Vertex^ APoint, double AHeight);
    /// <summary>
    /// Creates the string <theText> at orientation <theOrientation> in 3D space.
    /// </summary>
    void Text(System::String^ theTextUtf, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA, bool theToEvalMinMax, bool theHasOwnAnchor);
    /// <summary>
    /// Creates the string <theText> at orientation <theOrientation> in 3D space.
    /// </summary>
    void Text(System::String^ theTextUtf, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA, bool theToEvalMinMax);
    /// <summary>
    /// Creates the string <theText> at orientation <theOrientation> in 3D space.
    /// </summary>
    void Text(System::String^ theTextUtf, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA);
    /// <summary>
    /// Creates the string <theText> at orientation <theOrientation> in 3D space.
    /// </summary>
    void Text(Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA, bool theToEvalMinMax, bool theHasOwnAnchor);
    /// <summary>
    /// Creates the string <theText> at orientation <theOrientation> in 3D space.
    /// </summary>
    void Text(Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA, bool theToEvalMinMax);
    /// <summary>
    /// Creates the string <theText> at orientation <theOrientation> in 3D space.
    /// </summary>
    void Text(Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Graphic3d_Group^ CreateDowncasted(::Graphic3d_Group* instance);
}; // class Graphic3d_Group

//---------------------------------------------------------------------
//  Class  Graphic3d_SequenceOfHClipPlane
//---------------------------------------------------------------------
/// <summary>
/// Class defines a Clipping Volume as a logical OR (disjunction) operation between
/// Graphic3d_ClipPlane in sequence. Each Graphic3d_ClipPlane represents either a single Plane
/// clipping a halfspace (direction is specified by normal), or a sub-chain of planes defining a
/// logical AND (conjunction) operation. Therefore, this collection allows defining a Clipping
/// Volume through the limited set of Boolean operations between clipping Planes.
/// 
/// The Clipping Volume can be assigned either to entire View or to a specific Object;
/// in the latter case property ToOverrideGlobal() will specify if Object planes should override
/// (suppress) globally defined ones or extend their definition through logical OR (disjunction)
/// operation.
/// 
/// Note that defining (many) planes will lead to performance degradation, and Graphics Driver may
/// limit the overall number of simultaneously active clipping planes - but at least 6 planes should
/// be supported on all configurations.
/// </summary>
public ref class Graphic3d_SequenceOfHClipPlane sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_SequenceOfHClipPlane_h
public:
    Include_Graphic3d_SequenceOfHClipPlane_h
#endif

public:
    Graphic3d_SequenceOfHClipPlane(::Graphic3d_SequenceOfHClipPlane* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_SequenceOfHClipPlane(::Graphic3d_SequenceOfHClipPlane& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_SequenceOfHClipPlane* NativeInstance
    {
        ::Graphic3d_SequenceOfHClipPlane* get()
        {
            return static_cast<::Graphic3d_SequenceOfHClipPlane*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    Graphic3d_SequenceOfHClipPlane();
    /// <summary>
    /// Return true if local properties should override global properties.
    /// </summary>
    bool ToOverrideGlobal();
    /// <summary>
    /// Setup flag defining if local properties should override global properties.
    /// </summary>
    void SetOverrideGlobal(bool theToOverride);
    /// <summary>
    /// Return TRUE if sequence is empty.
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// Return the number of items in sequence.
    /// </summary>
    int Size();
    /// <summary>
    /// Append a plane.
    /// </summary>
    /// <returns>
    /// TRUE if new item has been added (FALSE if item already existed)
    /// </returns>
    bool Append(Macad::Occt::Graphic3d_ClipPlane^ theItem);
    /// <summary>
    /// Remove a plane.
    /// </summary>
    /// <returns>
    /// TRUE if item has been found and removed
    /// </returns>
    bool Remove(Macad::Occt::Graphic3d_ClipPlane^ theItem);
    /* Method skipped due to unknown mapping: void Remove(Iterator theItem, ) */
    /// <summary>
    /// Clear the items out.
    /// </summary>
    void Clear();
    /// <summary>
    /// Return the first item in sequence.
    /// </summary>
    Macad::Occt::Graphic3d_ClipPlane^ First();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Graphic3d_SequenceOfHClipPlane^ CreateDowncasted(::Graphic3d_SequenceOfHClipPlane* instance);
}; // class Graphic3d_SequenceOfHClipPlane

//---------------------------------------------------------------------
//  Class  Graphic3d_ViewAffinity
//---------------------------------------------------------------------
/// <summary>
/// Structure display state.
/// </summary>
public ref class Graphic3d_ViewAffinity sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_ViewAffinity_h
public:
    Include_Graphic3d_ViewAffinity_h
#endif

public:
    Graphic3d_ViewAffinity(::Graphic3d_ViewAffinity* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_ViewAffinity(::Graphic3d_ViewAffinity& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_ViewAffinity* NativeInstance
    {
        ::Graphic3d_ViewAffinity* get()
        {
            return static_cast<::Graphic3d_ViewAffinity*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    Graphic3d_ViewAffinity();
    /// <summary>
    /// Return visibility flag.
    /// </summary>
    bool IsVisible(int theViewId);
    /// <summary>
    /// Setup visibility flag for all views.
    /// </summary>
    void SetVisible(bool theIsVisible);
    /// <summary>
    /// Setup visibility flag.
    /// </summary>
    void SetVisible(int theViewId, bool theIsVisible);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Graphic3d_ViewAffinity^ CreateDowncasted(::Graphic3d_ViewAffinity* instance);
}; // class Graphic3d_ViewAffinity

//---------------------------------------------------------------------
//  Class  Graphic3d_GraphicDriver
//---------------------------------------------------------------------
/// <summary>
/// This class allows the definition of a graphic driver
/// for 3d interface (currently only OpenGl driver is used).
/// </summary>
public ref class Graphic3d_GraphicDriver
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_GraphicDriver_h
public:
    Include_Graphic3d_GraphicDriver_h
#endif

public:
    Graphic3d_GraphicDriver(::Graphic3d_GraphicDriver* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_GraphicDriver(::Graphic3d_GraphicDriver& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_GraphicDriver* NativeInstance
    {
        ::Graphic3d_GraphicDriver* get()
        {
            return static_cast<::Graphic3d_GraphicDriver*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Request limit of graphic resource of specific type.
    /// </summary>
    int InquireLimit(Macad::Occt::Graphic3d_TypeOfLimit theType);
    /// <summary>
    /// Request maximum number of active light sources supported by driver and hardware.
    /// </summary>
    int InquireLightLimit();
    /// <summary>
    /// Request maximum number of active clipping planes supported by driver and hardware.
    /// </summary>
    int InquirePlaneLimit();
    /// <summary>
    /// Request maximum number of views supported by driver.
    /// </summary>
    int InquireViewLimit();
    /// <summary>
    /// Creates new empty graphic structure
    /// </summary>
    Macad::Occt::Graphic3d_CStructure^ CreateStructure(Macad::Occt::Graphic3d_StructureManager^ theManager);
    /// <summary>
    /// Removes structure from graphic driver and releases its resources.
    /// </summary>
    void RemoveStructure(Macad::Occt::Graphic3d_CStructure^ theCStructure);
    /// <summary>
    /// Creates new view for this graphic driver.
    /// </summary>
    Macad::Occt::Graphic3d_CView^ CreateView(Macad::Occt::Graphic3d_StructureManager^ theMgr);
    /// <summary>
    /// Removes view from graphic driver and releases its resources.
    /// </summary>
    void RemoveView(Macad::Occt::Graphic3d_CView^ theView);
    /// <summary>
    /// enables/disables usage of OpenGL vertex buffer arrays while drawing primitive arrays
    /// </summary>
    void EnableVBO(bool status);
    /// <summary>
    /// Returns TRUE if vertical synchronization with display refresh rate (VSync) should be used;
    /// TRUE by default.
    /// </summary>
    bool IsVerticalSync();
    /// <summary>
    /// Set if vertical synchronization with display refresh rate (VSync) should be used.
    /// </summary>
    void SetVerticalSync(bool theToEnable);
    /// <summary>
    /// Returns information about GPU memory usage.
    /// </summary>
    bool MemoryInfo(long long unsigned int% theFreeBytes, Macad::Occt::TCollection_AsciiString^ theInfo);
    float DefaultTextHeight();
    /// <summary>
    /// Computes text width.
    /// </summary>
    void TextSize(Macad::Occt::Graphic3d_CView^ theView, System::String^ theText, float theHeight, float% theWidth, float% theAscent, float% theDescent);
    /// <summary>
    /// Adds a layer to all views.
    /// To add a structure to desired layer on display it is necessary to set the layer ID for the
    /// structure.
    /// </summary>
    /// <param name="in]">
    /// theNewLayerId  id of new layer, should be > 0 (negative values are reserved for
    /// default layers).
    /// </param>
    /// <param name="in]">
    /// theSettings    new layer settings
    /// </param>
    /// <param name="in]">
    /// theLayerAfter  id of layer to append new layer before
    /// </param>
    void InsertLayerBefore(int theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerAfter);
    /// <summary>
    /// Adds a layer to all views.
    /// </summary>
    /// <param name="in]">
    /// theNewLayerId   id of new layer, should be > 0 (negative values are reserved for
    /// default layers).
    /// </param>
    /// <param name="in]">
    /// theSettings     new layer settings
    /// </param>
    /// <param name="in]">
    /// theLayerBefore  id of layer to append new layer after
    /// </param>
    void InsertLayerAfter(int theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerBefore);
    /// <summary>
    /// Removes Z layer. All structures displayed at the moment in layer will be displayed in
    /// default layer (the bottom-level z layer). By default, there are always default
    /// bottom-level layer that can't be removed.  The passed theLayerId should be not less than 0
    /// (reserved for default layers that can not be removed).
    /// </summary>
    void RemoveZLayer(int theLayerId);
    /// <summary>
    /// Returns list of Z layers defined for the graphical driver.
    /// </summary>
    void ZLayers(Macad::Occt::TColStd_SequenceOfInteger^ theLayerSeq);
    /// <summary>
    /// Sets the settings for a single Z layer.
    /// </summary>
    void SetZLayerSettings(int theLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings);
    /// <summary>
    /// Returns the settings of a single Z layer.
    /// </summary>
    Macad::Occt::Graphic3d_ZLayerSettings^ ZLayerSettings(int theLayerId);
    /// <summary>
    /// Returns view associated with the window if it is exists and is activated.
    /// Returns Standard_True if the view associated to the window exists.
    /// </summary>
    bool ViewExists(Macad::Occt::Aspect_Window^ theWindow, Macad::Occt::Graphic3d_CView^ theView);
    /* Method skipped due to unknown mapping: Aspect_DisplayConnection GetDisplayConnection() */
    /// <summary>
    /// Returns a new identification number for a new structure.
    /// </summary>
    int NewIdentification();
    /// <summary>
    /// Frees the identifier of a structure.
    /// </summary>
    void RemoveIdentification(int theId);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Graphic3d_GraphicDriver^ CreateDowncasted(::Graphic3d_GraphicDriver* instance);
}; // class Graphic3d_GraphicDriver

//---------------------------------------------------------------------
//  Class  Graphic3d_StructureManager
//---------------------------------------------------------------------
/// <summary>
/// This class allows the definition of a manager to
/// which the graphic objects are associated.
/// It allows them to be globally manipulated.
/// It defines the global attributes.
/// Keywords: Structure, Structure Manager, Update Mode,
/// Destroy, Highlight, Visible
/// </summary>
public ref class Graphic3d_StructureManager sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_StructureManager_h
public:
    Include_Graphic3d_StructureManager_h
#endif

public:
    Graphic3d_StructureManager(::Graphic3d_StructureManager* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_StructureManager(::Graphic3d_StructureManager& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_StructureManager* NativeInstance
    {
        ::Graphic3d_StructureManager* get()
        {
            return static_cast<::Graphic3d_StructureManager*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes the ViewManager.
    /// Currently creating of more than 100 viewer instances
    /// is not supported and leads to InitializationError and
    /// initialization failure.
    /// This limitation might be addressed in some future OCCT releases.
    /// Warning: Raises InitialisationError if the initialization
    /// of the ViewManager failed.
    /// </summary>
    Graphic3d_StructureManager(Macad::Occt::Graphic3d_GraphicDriver^ theDriver);
    /// <summary>
    /// Invalidates bounding box of specified ZLayerId.
    /// </summary>
    void Update(int theLayerId);
    /// <summary>
    /// Invalidates bounding box of specified ZLayerId.
    /// </summary>
    void Update();
    /// <summary>
    /// Deletes and erases the 3D structure manager.
    /// </summary>
    void Remove();
    /// <summary>
    /// Erases all the structures.
    /// </summary>
    void Erase();
    /// <summary>
    /// Returns the set of structures displayed in
    /// visualiser <me>.
    /// </summary>
    void DisplayedStructures(Macad::Occt::Graphic3d_MapOfStructure^ SG);
    /// <summary>
    /// Returns the set of highlighted structures
    /// in a visualiser <me>.
    /// </summary>
    void HighlightedStructures(Macad::Occt::Graphic3d_MapOfStructure^ SG);
    /// <summary>
    /// Forces a new construction of the structure.
    /// if <theStructure> is displayed and TOS_COMPUTED.
    /// </summary>
    void ReCompute(Macad::Occt::Graphic3d_Structure^ theStructure);
    /// <summary>
    /// Forces a new construction of the structure.
    /// if <theStructure> is displayed in <theProjector> and TOS_COMPUTED.
    /// </summary>
    void ReCompute(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::Graphic3d_DataStructureManager^ theProjector);
    /// <summary>
    /// Clears the structure.
    /// </summary>
    void Clear(Macad::Occt::Graphic3d_Structure^ theStructure, bool theWithDestruction);
    /// <summary>
    /// Connects the structures.
    /// </summary>
    void Connect(Macad::Occt::Graphic3d_Structure^ theMother, Macad::Occt::Graphic3d_Structure^ theDaughter);
    /// <summary>
    /// Disconnects the structures.
    /// </summary>
    void Disconnect(Macad::Occt::Graphic3d_Structure^ theMother, Macad::Occt::Graphic3d_Structure^ theDaughter);
    /// <summary>
    /// Display the structure.
    /// </summary>
    void Display(Macad::Occt::Graphic3d_Structure^ theStructure);
    /// <summary>
    /// Erases the structure.
    /// </summary>
    void Erase(Macad::Occt::Graphic3d_Structure^ theStructure);
    /// <summary>
    /// Highlights the structure.
    /// </summary>
    void Highlight(Macad::Occt::Graphic3d_Structure^ theStructure);
    /// <summary>
    /// Transforms the structure.
    /// </summary>
    void SetTransform(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::TopLoc_Datum3D^ theTrsf);
    /// <summary>
    /// Changes the display priority of the structure <AStructure>.
    /// </summary>
    void ChangeDisplayPriority(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::Graphic3d_DisplayPriority theOldPriority, Macad::Occt::Graphic3d_DisplayPriority theNewPriority);
    /// <summary>
    /// Change Z layer for structure. The Z layer mechanism allows to display structures in higher
    /// layers in overlay of structures in lower layers.
    /// </summary>
    void ChangeZLayer(Macad::Occt::Graphic3d_Structure^ theStructure, int theLayerId);
    /// <summary>
    /// Returns the graphic driver of <me>.
    /// </summary>
    Macad::Occt::Graphic3d_GraphicDriver^ GraphicDriver();
    /// <summary>
    /// Attaches the view to this structure manager and sets its identification number within the
    /// manager.
    /// </summary>
    int Identification(Macad::Occt::Graphic3d_CView^ theView);
    /// <summary>
    /// Detach the view from this structure manager and release its identification.
    /// </summary>
    void UnIdentification(Macad::Occt::Graphic3d_CView^ theView);
    /// <summary>
    /// Returns the group of views defined in the structure manager.
    /// </summary>
    Macad::Occt::Graphic3d_IndexedMapOfView^ DefinedViews();
    /// <summary>
    /// Returns the theoretical maximum number of definable views in the manager.
    /// Warning: It's not possible to accept an infinite number of definable views because each
    /// view must have an identification and we have different managers.
    /// </summary>
    int MaxNumOfViews();
    /// <summary>
    /// Returns the structure with the identification number <AId>.
    /// </summary>
    Macad::Occt::Graphic3d_Structure^ Identification(int AId);
    /// <summary>
    /// Suppress the highlighting on the structure <AStructure>.
    /// </summary>
    void UnHighlight(Macad::Occt::Graphic3d_Structure^ AStructure);
    /// <summary>
    /// Suppresses the highlighting on all the structures in <me>.
    /// </summary>
    void UnHighlight();
    /// <summary>
    /// Recomputes all structures in the manager.
    /// Resets Device Lost flag.
    /// </summary>
    void RecomputeStructures();
    /* Method skipped due to unknown mapping: void RecomputeStructures(NCollection_Map<Graphic3d_Structure *> theStructures, ) */
    void RegisterObject(Macad::Occt::Standard_Transient^ theObject, Macad::Occt::Graphic3d_ViewAffinity^ theAffinity);
    void UnregisterObject(Macad::Occt::Standard_Transient^ theObject);
    Macad::Occt::Graphic3d_ViewAffinity^ ObjectAffinity(Macad::Occt::Standard_Transient^ theObject);
    /// <summary>
    /// Returns TRUE if Device Lost flag has been set and presentation data should be reuploaded onto
    /// graphics driver.
    /// </summary>
    bool IsDeviceLost();
    /// <summary>
    /// Sets Device Lost flag.
    /// </summary>
    void SetDeviceLost();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Graphic3d_StructureManager^ CreateDowncasted(::Graphic3d_StructureManager* instance);
}; // class Graphic3d_StructureManager

//---------------------------------------------------------------------
//  Class  Graphic3d_ValidatedCubeMapOrder
//---------------------------------------------------------------------
/// <summary>
/// Graphic3d_ValidatedCubeMapOrder contains completely valid order object.
/// The only way to create this class except copy constructor is 'Validated' method of
/// Graphic3d_CubeMapOrder. This class can initialize Graphic3d_CubeMapOrder. It is supposed to be
/// used in case of necessity of completely valid order (in function argument as example). It helps
/// to automate order's valid checks.
/// </summary>
public ref class Graphic3d_ValidatedCubeMapOrder sealed
    : public Macad::Occt::BaseClass<::Graphic3d_ValidatedCubeMapOrder>
{

#ifdef Include_Graphic3d_ValidatedCubeMapOrder_h
public:
    Include_Graphic3d_ValidatedCubeMapOrder_h
#endif

public:
    Graphic3d_ValidatedCubeMapOrder(::Graphic3d_ValidatedCubeMapOrder* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_ValidatedCubeMapOrder>( nativeInstance, true )
    {}

    Graphic3d_ValidatedCubeMapOrder(::Graphic3d_ValidatedCubeMapOrder& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_ValidatedCubeMapOrder>( &nativeInstance, false )
    {}

    property ::Graphic3d_ValidatedCubeMapOrder* NativeInstance
    {
        ::Graphic3d_ValidatedCubeMapOrder* get()
        {
            return static_cast<::Graphic3d_ValidatedCubeMapOrder*>(_NativeInstance);
        }
    }

public:
}; // class Graphic3d_ValidatedCubeMapOrder

//---------------------------------------------------------------------
//  Class  Graphic3d_CubeMapOrder
//---------------------------------------------------------------------
/// <summary>
/// Graphic3d_CubeMapOrder maps sides of cubemap on tiles in packed cubemap image
/// to support different tiles order in such images.
/// Also it can be considered as permutation of numbers from 0 to 5.
/// It stores permutation in one integer as convolution.
/// </summary>
public ref class Graphic3d_CubeMapOrder sealed
    : public Macad::Occt::BaseClass<::Graphic3d_CubeMapOrder>
{

#ifdef Include_Graphic3d_CubeMapOrder_h
public:
    Include_Graphic3d_CubeMapOrder_h
#endif

public:
    Graphic3d_CubeMapOrder(::Graphic3d_CubeMapOrder* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_CubeMapOrder>( nativeInstance, true )
    {}

    Graphic3d_CubeMapOrder(::Graphic3d_CubeMapOrder& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_CubeMapOrder>( &nativeInstance, false )
    {}

    property ::Graphic3d_CubeMapOrder* NativeInstance
    {
        ::Graphic3d_CubeMapOrder* get()
        {
            return static_cast<::Graphic3d_CubeMapOrder*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Default constructor.
    /// Creates empty order with zero convolution.
    /// </summary>
    Graphic3d_CubeMapOrder();
    /// <summary>
    /// Initializes order with values.
    /// </summary>
    Graphic3d_CubeMapOrder(unsigned char thePosXLocation, unsigned char theNegXLocation, unsigned char thePosYLocation, unsigned char theNegYLocation, unsigned char thePosZLocation, unsigned char theNegZLocation);
    /// <summary>
    /// Creates Graphic3d_CubeMapOrder using Graphic3d_ValidatedCubeMapOrder.
    /// </summary>
    Graphic3d_CubeMapOrder(Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ theOrder);
    /// <summary>
    /// Alias of 'operator='.
    /// </summary>
    Macad::Occt::Graphic3d_CubeMapOrder^ Set(Macad::Occt::Graphic3d_CubeMapOrder^ theOrder);
    /// <summary>
    /// Checks whether order is valid and returns object containing it.
    /// If order is invalid then exception will be thrown.
    /// This method is only way to create Graphic3d_ValidatedCubeMapOrder except copy constructor.
    /// </summary>
    Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ Validated();
    /// <summary>
    /// Sets number of tile in packed cubemap image according passed cubemap side.
    /// </summary>
    Macad::Occt::Graphic3d_CubeMapOrder^ Set(Macad::Occt::Graphic3d_CubeMapSide theCubeMapSide, unsigned char theValue);
    /// <summary>
    /// Sets default order (just from 0 to 5)
    /// </summary>
    Macad::Occt::Graphic3d_CubeMapOrder^ SetDefault();
    /// <summary>
    /// Applies another cubemap order as permutation for the current one.
    /// </summary>
    Macad::Occt::Graphic3d_CubeMapOrder^ Permute(Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ anOrder);
    /// <summary>
    /// Returns permuted by other cubemap order copy of current one.
    /// </summary>
    Macad::Occt::Graphic3d_CubeMapOrder^ Permuted(Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ anOrder);
    /// <summary>
    /// Swaps values of two cubemap sides.
    /// </summary>
    Macad::Occt::Graphic3d_CubeMapOrder^ Swap(Macad::Occt::Graphic3d_CubeMapSide theFirstSide, Macad::Occt::Graphic3d_CubeMapSide theSecondSide);
    /// <summary>
    /// Returns copy of current order with swapped values of two cubemap sides.
    /// </summary>
    Macad::Occt::Graphic3d_CubeMapOrder^ Swapped(Macad::Occt::Graphic3d_CubeMapSide theFirstSide, Macad::Occt::Graphic3d_CubeMapSide theSecondSide);
    /// <summary>
    /// Returns value of passed cubemap side.
    /// </summary>
    unsigned char Get(Macad::Occt::Graphic3d_CubeMapSide theCubeMapSide);
    /// <summary>
    /// Makes order empty.
    /// </summary>
    Macad::Occt::Graphic3d_CubeMapOrder^ Clear();
    /// <summary>
    /// Checks whether order is empty.
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// Checks whether order has repetitions.
    /// </summary>
    bool HasRepetitions();
    /// <summary>
    /// Checks whether attempts to assign index greater than 5 to any side happed.
    /// </summary>
    bool HasOverflows();
    /// <summary>
    /// Checks whether order is valid.
    /// Order is valid when it doesn't have repetitions
    /// and there were not attempts to assign indexes greater than 5.
    /// </summary>
    bool IsValid();
    /// <summary>
    /// Returns default order in protector container class.
    /// It is guaranteed to be valid.
    /// </summary>
    static Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ Default();
}; // class Graphic3d_CubeMapOrder

//---------------------------------------------------------------------
//  Class  Graphic3d_CubeMap
//---------------------------------------------------------------------
/// <summary>
/// Base class for cubemaps.
/// It is iterator over cubemap sides.
/// </summary>
public ref class Graphic3d_CubeMap
    : public Macad::Occt::Graphic3d_TextureMap
{

#ifdef Include_Graphic3d_CubeMap_h
public:
    Include_Graphic3d_CubeMap_h
#endif

protected:
    Graphic3d_CubeMap(InitMode init)
        : Macad::Occt::Graphic3d_TextureMap( init )
    {}

public:
    Graphic3d_CubeMap(::Graphic3d_CubeMap* nativeInstance)
        : Macad::Occt::Graphic3d_TextureMap( nativeInstance )
    {}

    Graphic3d_CubeMap(::Graphic3d_CubeMap& nativeInstance)
        : Macad::Occt::Graphic3d_TextureMap( nativeInstance )
    {}

    property ::Graphic3d_CubeMap* NativeInstance
    {
        ::Graphic3d_CubeMap* get()
        {
            return static_cast<::Graphic3d_CubeMap*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor defining loading cubemap from file.
    /// </summary>
    Graphic3d_CubeMap(Macad::Occt::TCollection_AsciiString^ theFileName, bool theToGenerateMipmaps);
    /// <summary>
    /// Constructor defining loading cubemap from file.
    /// </summary>
    Graphic3d_CubeMap(Macad::Occt::TCollection_AsciiString^ theFileName);
    /// <summary>
    /// Constructor defining direct cubemap initialization from PixMap.
    /// </summary>
    Graphic3d_CubeMap(Macad::Occt::Image_PixMap^ thePixmap, bool theToGenerateMipmaps);
    /// <summary>
    /// Constructor defining direct cubemap initialization from PixMap.
    /// </summary>
    Graphic3d_CubeMap(Macad::Occt::Image_PixMap^ thePixmap);
    /// <summary>
    /// Constructor defining direct cubemap initialization from PixMap.
    /// </summary>
    Graphic3d_CubeMap();
    /// <summary>
    /// Returns whether the iterator has reached the end (true if it hasn't).
    /// </summary>
    bool More();
    /// <summary>
    /// Returns current cubemap side (iterator state).
    /// </summary>
    Macad::Occt::Graphic3d_CubeMapSide CurrentSide();
    /// <summary>
    /// Moves iterator to the next cubemap side.
    /// Uses OpenGL cubemap sides order +X -> -X -> +Y -> -Y -> +Z -> -Z.
    /// </summary>
    void Next();
    /// <summary>
    /// Sets Z axis inversion (vertical flipping).
    /// </summary>
    void SetZInversion(bool theZIsInverted);
    /// <summary>
    /// Returns whether Z axis is inverted.
    /// </summary>
    bool ZIsInverted();
    /// <summary>
    /// Returns whether mipmaps of cubemap will be generated or not.
    /// </summary>
    bool HasMipmaps();
    /// <summary>
    /// Sets whether to generate mipmaps of cubemap or not.
    /// </summary>
    void SetMipmapsGeneration(bool theToGenerateMipmaps);
    /// <summary>
    /// Returns current cubemap side as compressed PixMap.
    /// Returns null handle if current side is invalid or if image is not in supported compressed
    /// format.
    /// </summary>
    Macad::Occt::Image_CompressedPixMap^ CompressedValue(Macad::Occt::Image_SupportedFormats^ theSupported);
    /// <summary>
    /// Returns PixMap containing current side of cubemap.
    /// Returns null handle if current side is invalid.
    /// </summary>
    Macad::Occt::Image_PixMap^ Value(Macad::Occt::Image_SupportedFormats^ theSupported);
    /// <summary>
    /// Sets iterator state to +X cubemap side.
    /// </summary>
    Macad::Occt::Graphic3d_CubeMap^ Reset();
    static Macad::Occt::Graphic3d_CubeMap^ CreateDowncasted(::Graphic3d_CubeMap* instance);
}; // class Graphic3d_CubeMap

//---------------------------------------------------------------------
//  Class  Graphic3d_CubeMapPacked
//---------------------------------------------------------------------
/// <summary>
/// Class is intended to process cubemap packed into single image plane.
/// </summary>
public ref class Graphic3d_CubeMapPacked sealed
    : public Macad::Occt::Graphic3d_CubeMap
{

#ifdef Include_Graphic3d_CubeMapPacked_h
public:
    Include_Graphic3d_CubeMapPacked_h
#endif

public:
    Graphic3d_CubeMapPacked(::Graphic3d_CubeMapPacked* nativeInstance)
        : Macad::Occt::Graphic3d_CubeMap( nativeInstance )
    {}

    Graphic3d_CubeMapPacked(::Graphic3d_CubeMapPacked& nativeInstance)
        : Macad::Occt::Graphic3d_CubeMap( nativeInstance )
    {}

    property ::Graphic3d_CubeMapPacked* NativeInstance
    {
        ::Graphic3d_CubeMapPacked* get()
        {
            return static_cast<::Graphic3d_CubeMapPacked*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initialization to load cubemap from file.
    /// </summary>
    /// @theFileName - path to the cubemap image
    /// @theOrder - array containing six different indexes of cubemap sides which maps tile grid to
    /// cubemap sides
    Graphic3d_CubeMapPacked(Macad::Occt::TCollection_AsciiString^ theFileName, Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ theOrder);
    /// <summary>
    /// Initialization to load cubemap from file.
    /// </summary>
    /// @theFileName - path to the cubemap image
    /// @theOrder - array containing six different indexes of cubemap sides which maps tile grid to
    /// cubemap sides
    Graphic3d_CubeMapPacked(Macad::Occt::TCollection_AsciiString^ theFileName);
    /// <summary>
    /// Initialization to set cubemap directly by PixMap.
    /// </summary>
    /// @thePixMap - origin PixMap
    /// @theOrder - array containing six different indexes of cubemap sides which maps tile grid to
    /// cubemap sides
    Graphic3d_CubeMapPacked(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ theOrder);
    /// <summary>
    /// Initialization to set cubemap directly by PixMap.
    /// </summary>
    /// @thePixMap - origin PixMap
    /// @theOrder - array containing six different indexes of cubemap sides which maps tile grid to
    /// cubemap sides
    Graphic3d_CubeMapPacked(Macad::Occt::Image_PixMap^ theImage);
    /// <summary>
    /// Returns current cubemap side as compressed PixMap.
    /// </summary>
    Macad::Occt::Image_CompressedPixMap^ CompressedValue(Macad::Occt::Image_SupportedFormats^ theSupported);
    /// <summary>
    /// Returns current cubemap side as PixMap.
    /// Resulting PixMap is memory wrapper over original image.
    /// Returns null handle if current side or whole cubemap is invalid.
    /// Origin image has to contain six quad tiles having one sizes without any gaps to be valid.
    /// </summary>
    Macad::Occt::Image_PixMap^ Value(Macad::Occt::Image_SupportedFormats^ theSupported);
    static Macad::Occt::Graphic3d_CubeMapPacked^ CreateDowncasted(::Graphic3d_CubeMapPacked* instance);
}; // class Graphic3d_CubeMapPacked

//---------------------------------------------------------------------
//  Class  Graphic3d_CubeMapSeparate
//---------------------------------------------------------------------
/// <summary>
/// Class to manage cubemap located in six different images.
/// </summary>
public ref class Graphic3d_CubeMapSeparate sealed
    : public Macad::Occt::Graphic3d_CubeMap
{

#ifdef Include_Graphic3d_CubeMapSeparate_h
public:
    Include_Graphic3d_CubeMapSeparate_h
#endif

public:
    Graphic3d_CubeMapSeparate(::Graphic3d_CubeMapSeparate* nativeInstance)
        : Macad::Occt::Graphic3d_CubeMap( nativeInstance )
    {}

    Graphic3d_CubeMapSeparate(::Graphic3d_CubeMapSeparate& nativeInstance)
        : Macad::Occt::Graphic3d_CubeMap( nativeInstance )
    {}

    property ::Graphic3d_CubeMapSeparate* NativeInstance
    {
        ::Graphic3d_CubeMapSeparate* get()
        {
            return static_cast<::Graphic3d_CubeMapSeparate*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes cubemap to be loaded from file.
    /// </summary>
    /// @thePaths - array of paths to separate image files (has to have size equal 6).
    Graphic3d_CubeMapSeparate(Macad::Occt::TColStd_Array1OfAsciiString^ thePaths);
    /* Method skipped due to unknown mapping: void Graphic3d_CubeMapSeparate(NCollection_Array1<opencascade::handle<Image_PixMap>> theImages, ) */
    /// <summary>
    /// Returns current cubemap side as compressed PixMap.
    /// </summary>
    Macad::Occt::Image_CompressedPixMap^ CompressedValue(Macad::Occt::Image_SupportedFormats^ theSupported);
    /// <summary>
    /// Returns current side of cubemap as PixMap.
    /// Returns null handle if current side or whole cubemap is invalid.
    /// All origin images have to have the same sizes, format and quad shapes to form valid cubemap.
    /// </summary>
    Macad::Occt::Image_PixMap^ Value(Macad::Occt::Image_SupportedFormats^ theSupported);
    /// <summary>
    /// Returns NULL.
    /// </summary>
    Macad::Occt::Image_PixMap^ GetImage(Macad::Occt::Image_SupportedFormats^ parameter1);
    /// <summary>
    /// Checks if a texture class is valid or not.
    /// Returns true if the construction of the class is correct.
    /// </summary>
    bool IsDone();
    static Macad::Occt::Graphic3d_CubeMapSeparate^ CreateDowncasted(::Graphic3d_CubeMapSeparate* instance);
}; // class Graphic3d_CubeMapSeparate

//---------------------------------------------------------------------
//  Class  Graphic3d_CullingTool
//---------------------------------------------------------------------
/// <summary>
/// Graphic3d_CullingTool class provides a possibility to store parameters of view volume,
/// such as its vertices and equations, and contains methods detecting if given AABB overlaps view
/// volume.
/// </summary>
public ref class Graphic3d_CullingTool sealed
    : public Macad::Occt::BaseClass<::Graphic3d_CullingTool>
{

#ifdef Include_Graphic3d_CullingTool_h
public:
    Include_Graphic3d_CullingTool_h
#endif

public:
    Graphic3d_CullingTool(::Graphic3d_CullingTool* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_CullingTool>( nativeInstance, true )
    {}

    Graphic3d_CullingTool(::Graphic3d_CullingTool& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_CullingTool>( &nativeInstance, false )
    {}

    property ::Graphic3d_CullingTool* NativeInstance
    {
        ::Graphic3d_CullingTool* get()
        {
            return static_cast<::Graphic3d_CullingTool*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an empty selector object with parallel projection type by default.
    /// </summary>
    Graphic3d_CullingTool();
    /// <summary>
    /// Retrieves view volume's planes equations and its vertices from projection and world-view
    /// matrices.
    /// </summary>
    /// <param name="in]">
    /// theCamera  camera definition
    /// </param>
    /// <param name="in]">
    /// theModelWorld  optional object transformation for computing frustum in object local
    /// coordinate system
    /// </param>
    void SetViewVolume(Macad::Occt::Graphic3d_Camera^ theCamera, Macad::Occt::Graphic3d_Mat4d^ theModelWorld);
    /// <summary>
    /// Retrieves view volume's planes equations and its vertices from projection and world-view
    /// matrices.
    /// </summary>
    /// <param name="in]">
    /// theCamera  camera definition
    /// </param>
    /// <param name="in]">
    /// theModelWorld  optional object transformation for computing frustum in object local
    /// coordinate system
    /// </param>
    void SetViewVolume(Macad::Occt::Graphic3d_Camera^ theCamera);
    void SetViewportSize(int theViewportWidth, int theViewportHeight, double theResolutionRatio);
    /* Method skipped due to unknown mapping: void SetCullingDistance(CullingContext theCtx, double theDistance, ) */
    /* Method skipped due to unknown mapping: void SetCullingSize(CullingContext theCtx, double theSize, ) */
    /// <summary>
    /// Caches view volume's vertices projections along its normals and AABBs dimensions.
    /// Must be called at the beginning of each BVH tree traverse loop.
    /// </summary>
    void CacheClipPtsProjections();
    /* Method skipped due to unknown mapping: bool IsCulled(CullingContext theCtx, Graphic3d_Vec3d theMinPnt, Graphic3d_Vec3d theMaxPnt, bool theIsInside, ) */
    /* Method skipped due to unknown mapping: bool IsCulled(CullingContext theCtx, Graphic3d_Vec3d theMinPnt, Graphic3d_Vec3d theMaxPnt, bool theIsInside, ) */
    /// <summary>
    /// Return the camera definition.
    /// </summary>
    Macad::Occt::Graphic3d_Camera^ Camera();
    /// <summary>
    /// Returns current projection matrix.
    /// </summary>
    Macad::Occt::Graphic3d_Mat4d^ ProjectionMatrix();
    /// <summary>
    /// Returns current world view transformation matrix.
    /// </summary>
    Macad::Occt::Graphic3d_Mat4d^ WorldViewMatrix();
    int ViewportWidth();
    int ViewportHeight();
    /// <summary>
    /// Returns state of current world view projection transformation matrices.
    /// </summary>
    Macad::Occt::Graphic3d_WorldViewProjState^ WorldViewProjState();
    /// <summary>
    /// Returns camera eye position.
    /// </summary>
    Macad::Occt::Graphic3d_Vec3d^ CameraEye();
    /// <summary>
    /// Returns camera direction.
    /// </summary>
    Macad::Occt::Graphic3d_Vec3d^ CameraDirection();
    /// <summary>
    /// Calculates signed distance from plane to point.
    /// </summary>
    /// <param name="in]">
    /// theNormal  the plane's normal.
    /// </param>
    /// <param name="in]">
    /// thePnt
    /// </param>
    double SignedPlanePointDistance(Macad::Occt::Graphic3d_Vec4d^ theNormal, Macad::Occt::Graphic3d_Vec4d^ thePnt);
    /// <summary>
    /// Detects if AABB overlaps view volume using separating axis theorem (SAT).
    /// </summary>
    /// <param name="in]">
    /// theMinPnt    maximum point of AABB
    /// </param>
    /// <param name="in]">
    /// theMaxPnt    minimum point of AABB
    /// </param>
    /// <param name="out]">
    /// theIsInside  flag indicating if AABB is fully inside; initial value should be set
    /// to TRUE
    /// </param>
    /// <returns>
    /// TRUE if AABB is completely outside of view frustum;
    /// FALSE in case of partial or complete overlap (use theIsInside to distinguish)
    /// </returns>
    /// @sa SelectMgr_Frustum::hasOverlap()
    bool IsOutFrustum(Macad::Occt::Graphic3d_Vec3d^ theMinPnt, Macad::Occt::Graphic3d_Vec3d^ theMaxPnt, bool% theIsInside);
    /// <summary>
    /// Detects if AABB overlaps view volume using separating axis theorem (SAT).
    /// </summary>
    /// <param name="in]">
    /// theMinPnt    maximum point of AABB
    /// </param>
    /// <param name="in]">
    /// theMaxPnt    minimum point of AABB
    /// </param>
    /// <param name="out]">
    /// theIsInside  flag indicating if AABB is fully inside; initial value should be set
    /// to TRUE
    /// </param>
    /// <returns>
    /// TRUE if AABB is completely outside of view frustum;
    /// FALSE in case of partial or complete overlap (use theIsInside to distinguish)
    /// </returns>
    /// @sa SelectMgr_Frustum::hasOverlap()
    bool IsOutFrustum(Macad::Occt::Graphic3d_Vec3d^ theMinPnt, Macad::Occt::Graphic3d_Vec3d^ theMaxPnt);
    /* Method skipped due to unknown mapping: bool IsTooDistant(CullingContext theCtx, Graphic3d_Vec3d theMinPnt, Graphic3d_Vec3d theMaxPnt, bool theIsInside, ) */
    /* Method skipped due to unknown mapping: bool IsTooDistant(CullingContext theCtx, Graphic3d_Vec3d theMinPnt, Graphic3d_Vec3d theMaxPnt, bool theIsInside, ) */
    /* Method skipped due to unknown mapping: bool IsTooSmall(CullingContext theCtx, Graphic3d_Vec3d theMinPnt, Graphic3d_Vec3d theMaxPnt, ) */
}; // class Graphic3d_CullingTool

//---------------------------------------------------------------------
//  Class  Graphic3d_DataStructureManager
//---------------------------------------------------------------------
/// <summary>
/// This class allows the definition of a manager to
/// which the graphic objects are associated.
/// It allows them to be globally manipulated.
/// It defines the global attributes.
/// </summary>
public ref class Graphic3d_DataStructureManager
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_DataStructureManager_h
public:
    Include_Graphic3d_DataStructureManager_h
#endif

protected:
    Graphic3d_DataStructureManager(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    Graphic3d_DataStructureManager(::Graphic3d_DataStructureManager* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_DataStructureManager(::Graphic3d_DataStructureManager& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_DataStructureManager* NativeInstance
    {
        ::Graphic3d_DataStructureManager* get()
        {
            return static_cast<::Graphic3d_DataStructureManager*>(_NativeInstance);
        }
    }

public:
    static Macad::Occt::Graphic3d_DataStructureManager^ CreateDowncasted(::Graphic3d_DataStructureManager* instance);
}; // class Graphic3d_DataStructureManager

//---------------------------------------------------------------------
//  Class  Graphic3d_CView
//---------------------------------------------------------------------
/// <summary>
/// Base class of a graphical view that carries out rendering process for a concrete
/// implementation of graphical driver. Provides virtual interfaces for redrawing its
/// contents, management of displayed structures and render settings. The source code
/// of the class itself implements functionality related to management of
/// computed (HLR or "view-dependent") structures.
/// </summary>
public ref class Graphic3d_CView
    : public Macad::Occt::Graphic3d_DataStructureManager
{

#ifdef Include_Graphic3d_CView_h
public:
    Include_Graphic3d_CView_h
#endif

public:
    Graphic3d_CView(::Graphic3d_CView* nativeInstance)
        : Macad::Occt::Graphic3d_DataStructureManager( nativeInstance )
    {}

    Graphic3d_CView(::Graphic3d_CView& nativeInstance)
        : Macad::Occt::Graphic3d_DataStructureManager( nativeInstance )
    {}

    property ::Graphic3d_CView* NativeInstance
    {
        ::Graphic3d_CView* get()
        {
            return static_cast<::Graphic3d_CView*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor.
    /// </summary>
    Graphic3d_CView(Macad::Occt::Graphic3d_StructureManager^ theMgr);
    /// <summary>
    /// Returns the identification number of the view.
    /// </summary>
    int Identification();
    /// <summary>
    /// Activates the view. Maps presentations defined within structure manager onto this view.
    /// </summary>
    void Activate();
    /// <summary>
    /// Deactivates the view. Unmaps presentations defined within structure manager.
    /// The view in deactivated state will ignore actions on structures such as Display().
    /// </summary>
    void Deactivate();
    /// <summary>
    /// Returns the activity flag of the view.
    /// </summary>
    bool IsActive();
    /// <summary>
    /// Erases the view and removes from graphic driver.
    /// No more graphic operations are allowed in this view after the call.
    /// </summary>
    void Remove();
    /// <summary>
    /// Returns true if the view was removed.
    /// </summary>
    bool IsRemoved();
    /// <summary>
    /// Returns camera object of the view.
    /// </summary>
    Macad::Occt::Graphic3d_Camera^ Camera();
    /// <summary>
    /// Sets camera used by the view.
    /// </summary>
    void SetCamera(Macad::Occt::Graphic3d_Camera^ theCamera);
    /// <summary>
    /// Returns necessity to flip OY in projection matrix
    /// </summary>
    bool ToFlipOutput();
    /// <summary>
    /// Sets state of flip OY necessity in projection matrix
    /// </summary>
    void SetToFlipOutput(bool parameter1);
    /// <summary>
    /// Returns default Shading Model of the view; Graphic3d_TypeOfShadingModel_Phong by default.
    /// </summary>
    Macad::Occt::Graphic3d_TypeOfShadingModel ShadingModel();
    /// <summary>
    /// Sets default Shading Model of the view.
    /// Will throw an exception on attempt to set Graphic3d_TypeOfShadingModel_DEFAULT.
    /// </summary>
    void SetShadingModel(Macad::Occt::Graphic3d_TypeOfShadingModel theModel);
    /// <summary>
    /// Return backfacing model used for the view; Graphic3d_TypeOfBackfacingModel_Auto by default,
    /// which means that backface culling is defined by each presentation.
    /// </summary>
    Macad::Occt::Graphic3d_TypeOfBackfacingModel BackfacingModel();
    /// <summary>
    /// Sets backfacing model for the view.
    /// </summary>
    void SetBackfacingModel(Macad::Occt::Graphic3d_TypeOfBackfacingModel theModel);
    /// <summary>
    /// Returns visualization type of the view.
    /// </summary>
    Macad::Occt::Graphic3d_TypeOfVisualization VisualizationType();
    /// <summary>
    /// Sets visualization type of the view.
    /// </summary>
    void SetVisualizationType(Macad::Occt::Graphic3d_TypeOfVisualization theType);
    /// <summary>
    /// Returns ZLayerId target
    /// </summary>
    int ZLayerTarget();
    /// <summary>
    /// Sets ZLayerId target.
    /// </summary>
    void SetZLayerTarget(int theTarget);
    /// <summary>
    /// Returns ZLayerId redraw mode
    /// </summary>
    bool ZLayerRedrawMode();
    /// <summary>
    /// Sets ZLayerId redraw mode.
    /// </summary>
    void SetZLayerRedrawMode(bool theMode);
    /// <summary>
    /// Switches computed HLR mode in the view
    /// </summary>
    void SetComputedMode(bool theMode);
    /// <summary>
    /// Returns the computed HLR mode state
    /// </summary>
    bool ComputedMode();
    /// <summary>
    /// Computes the new presentation of the structure  displayed in this view with the type
    /// Graphic3d_TOS_COMPUTED.
    /// </summary>
    void ReCompute(Macad::Occt::Graphic3d_Structure^ theStructure);
    /// <summary>
    /// Invalidates bounding box of specified ZLayerId.
    /// </summary>
    void Update(int theLayerId);
    /// <summary>
    /// Invalidates bounding box of specified ZLayerId.
    /// </summary>
    void Update();
    /// <summary>
    /// Computes the new presentation of the structures displayed in this view with the type
    /// Graphic3d_TOS_COMPUTED.
    /// </summary>
    void Compute();
    /// <summary>
    /// Returns the set of structures displayed in this view.
    /// </summary>
    void DisplayedStructures(Macad::Occt::Graphic3d_MapOfStructure^ theStructures);
    /// <summary>
    /// Returns number of displayed structures in the view.
    /// </summary>
    int NumberOfDisplayedStructures();
    /// <summary>
    /// Returns Standard_True in case if the structure with the given <theStructId> is
    /// in list of structures to be computed and stores computed struct to <theComputedStruct>.
    /// </summary>
    bool IsComputed(int theStructId, Macad::Occt::Graphic3d_Structure^ theComputedStruct);
    /// <summary>
    /// Returns the bounding box of all structures displayed in the view.
    /// If theToIncludeAuxiliary is TRUE, then the boundary box also includes minimum and maximum
    /// limits of graphical elements forming parts of infinite and other auxiliary structures.
    /// </summary>
    /// <param name="theToIncludeAuxiliary">
    /// consider also auxiliary presentations (with infinite flag or with
    /// trihedron transformation persistence)
    /// </param>
    /// <returns>
    /// computed bounding box
    /// </returns>
    Macad::Occt::Bnd_Box^ MinMaxValues(bool theToIncludeAuxiliary);
    /// <summary>
    /// Returns the bounding box of all structures displayed in the view.
    /// If theToIncludeAuxiliary is TRUE, then the boundary box also includes minimum and maximum
    /// limits of graphical elements forming parts of infinite and other auxiliary structures.
    /// </summary>
    /// <param name="theToIncludeAuxiliary">
    /// consider also auxiliary presentations (with infinite flag or with
    /// trihedron transformation persistence)
    /// </param>
    /// <returns>
    /// computed bounding box
    /// </returns>
    Macad::Occt::Bnd_Box^ MinMaxValues();
    /// <summary>
    /// Returns the coordinates of the boundary box of all structures in the set <theSet>.
    /// If <theToIgnoreInfiniteFlag> is TRUE, then the boundary box
    /// also includes minimum and maximum limits of graphical elements
    /// forming parts of infinite structures.
    /// </summary>
    Macad::Occt::Bnd_Box^ MinMaxValues(Macad::Occt::Graphic3d_MapOfStructure^ theSet, bool theToIncludeAuxiliary);
    /// <summary>
    /// Returns the coordinates of the boundary box of all structures in the set <theSet>.
    /// If <theToIgnoreInfiniteFlag> is TRUE, then the boundary box
    /// also includes minimum and maximum limits of graphical elements
    /// forming parts of infinite structures.
    /// </summary>
    Macad::Occt::Bnd_Box^ MinMaxValues(Macad::Occt::Graphic3d_MapOfStructure^ theSet);
    /// <summary>
    /// Returns the structure manager handle which manage structures associated with this view.
    /// </summary>
    Macad::Occt::Graphic3d_StructureManager^ StructureManager();
    /// <summary>
    /// Redraw content of the view.
    /// </summary>
    void Redraw();
    /// <summary>
    /// Redraw immediate content of the view.
    /// </summary>
    void RedrawImmediate();
    /// <summary>
    /// Invalidates content of the view but does not redraw it.
    /// </summary>
    void Invalidate();
    /// <summary>
    /// Return true if view content cache has been invalidated.
    /// </summary>
    bool IsInvalidated();
    /// <summary>
    /// Handle changing size of the rendering window.
    /// </summary>
    void Resized();
    /// <summary>
    /// </summary>
    /// <param name="theDrawToFrontBuffer">
    /// Advanced option to modify rendering mode:
    /// 1. TRUE.  Drawing immediate mode structures directly to the front buffer over the scene image.
    /// Fast, so preferred for interactive work (used by default).
    /// However these extra drawings will be missed in image dump since it is performed from back
    /// buffer. Notice that since no pre-buffering used the V-Sync will be ignored and rendering could
    /// be seen in run-time (in case of slow hardware) and/or tearing may appear. So this is strongly
    /// recommended to draw only simple (fast) structures.
    /// 2. FALSE. Drawing immediate mode structures to the back buffer.
    /// The complete scene is redrawn first, so this mode is slower if scene contains complex data
    /// and/or V-Sync is turned on. But it works in any case and is especially useful for view dump
    /// because the dump image is read from the back buffer.
    /// </param>
    /// <returns>
    /// previous mode.
    /// </returns>
    bool SetImmediateModeDrawToFront(bool theDrawToFrontBuffer);
    /// <summary>
    /// Creates and maps rendering window to the view.
    /// </summary>
    /// <param name="in]">
    /// theParentVIew parent view or NULL
    /// </param>
    /// <param name="in]">
    /// theWindow the window
    /// </param>
    /// <param name="in]">
    /// theContext the rendering context; if NULL the context will be created internally
    /// </param>
    void SetWindow(Macad::Occt::Graphic3d_CView^ theParentVIew, Macad::Occt::Aspect_Window^ theWindow, System::IntPtr theContext);
    /// <summary>
    /// Returns the window associated to the view.
    /// </summary>
    Macad::Occt::Aspect_Window^ Window();
    /// <summary>
    /// Returns True if the window associated to the view is defined.
    /// </summary>
    bool IsDefined();
    /// <summary>
    /// Dump active rendering buffer into specified memory buffer.
    /// </summary>
    bool BufferDump(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::Graphic3d_BufferType theBufferType);
    /// <summary>
    /// Dumps the graphical contents of a shadowmap framebuffer into an image.
    /// </summary>
    /// <param name="theImage">
    /// the image to store the shadow map.
    /// </param>
    /// <param name="in]">
    /// theLightName  name of the light used to generate the shadow map.
    /// </param>
    bool ShadowMapDump(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::TCollection_AsciiString^ theLightName);
    /// <summary>
    /// Marks BVH tree and the set of BVH primitives of correspondent priority list with id theLayerId
    /// as outdated.
    /// </summary>
    void InvalidateBVHData(int theLayerId);
    /// <summary>
    /// Add a layer to the view.
    /// </summary>
    /// <param name="in]">
    /// theNewLayerId  id of new layer, should be > 0 (negative values are reserved for
    /// default layers).
    /// </param>
    /// <param name="in]">
    /// theSettings    new layer settings
    /// </param>
    /// <param name="in]">
    /// theLayerAfter  id of layer to append new layer before
    /// </param>
    void InsertLayerBefore(int theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerAfter);
    /// <summary>
    /// Add a layer to the view.
    /// </summary>
    /// <param name="in]">
    /// theNewLayerId   id of new layer, should be > 0 (negative values are reserved for
    /// default layers).
    /// </param>
    /// <param name="in]">
    /// theSettings     new layer settings
    /// </param>
    /// <param name="in]">
    /// theLayerBefore  id of layer to append new layer after
    /// </param>
    void InsertLayerAfter(int theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerBefore);
    /// <summary>
    /// Returns the maximum Z layer ID.
    /// First layer ID is Graphic3d_ZLayerId_Default, last ID is ZLayerMax().
    /// </summary>
    int ZLayerMax();
    /* Method skipped due to unknown mapping: NCollection_List<opencascade::handle<Graphic3d_Layer>> Layers() */
    /* Method skipped due to unknown mapping: Graphic3d_Layer Layer(int theLayerId, ) */
    /// <summary>
    /// Returns the bounding box of all structures displayed in the Z layer.
    /// </summary>
    void InvalidateZLayerBoundingBox(int theLayerId);
    /// <summary>
    /// Remove Z layer from the specified view. All structures
    /// displayed at the moment in layer will be displayed in default layer
    /// ( the bottom-level z layer ). To unset layer ID from associated
    /// structures use method UnsetZLayer (...).
    /// </summary>
    void RemoveZLayer(int theLayerId);
    /// <summary>
    /// Sets the settings for a single Z layer of specified view.
    /// </summary>
    void SetZLayerSettings(int theLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings);
    /// <summary>
    /// Returns zoom-scale factor.
    /// </summary>
    double ConsiderZoomPersistenceObjects();
    /// <summary>
    /// Returns pointer to an assigned framebuffer object.
    /// </summary>
    Macad::Occt::Standard_Transient^ FBO();
    /// <summary>
    /// Sets framebuffer object for offscreen rendering.
    /// </summary>
    void SetFBO(Macad::Occt::Standard_Transient^ theFbo);
    /// <summary>
    /// Generate offscreen FBO in the graphic library.
    /// If not supported on hardware returns NULL.
    /// </summary>
    Macad::Occt::Standard_Transient^ FBOCreate(int theWidth, int theHeight);
    /// <summary>
    /// Remove offscreen FBO from the graphic library
    /// </summary>
    void FBORelease(Macad::Occt::Standard_Transient^ theFbo);
    /// <summary>
    /// Read offscreen FBO configuration.
    /// </summary>
    void FBOGetDimensions(Macad::Occt::Standard_Transient^ theFbo, int% theWidth, int% theHeight, int% theWidthMax, int% theHeightMax);
    /// <summary>
    /// Change offscreen FBO viewport.
    /// </summary>
    void FBOChangeViewport(Macad::Occt::Standard_Transient^ theFbo, int theWidth, int theHeight);
    /// <summary>
    /// Copy visualization settings from another view.
    /// Method is used for cloning views in viewer when its required to create view
    /// with same view properties.
    /// </summary>
    void CopySettings(Macad::Occt::Graphic3d_CView^ theOther);
    /// <summary>
    /// Returns current rendering parameters and effect settings.
    /// </summary>
    Macad::Occt::Graphic3d_RenderingParams^ RenderingParams();
    /// <summary>
    /// Returns reference to current rendering parameters and effect settings.
    /// </summary>
    Macad::Occt::Graphic3d_RenderingParams^ ChangeRenderingParams();
    /// <summary>
    /// Returns background  fill color.
    /// </summary>
    Macad::Occt::Aspect_Background^ Background();
    /// <summary>
    /// Sets background fill color.
    /// </summary>
    void SetBackground(Macad::Occt::Aspect_Background^ theBackground);
    /// <summary>
    /// Returns gradient background fill colors.
    /// </summary>
    Macad::Occt::Aspect_GradientBackground^ GradientBackground();
    /// <summary>
    /// Sets gradient background fill colors.
    /// </summary>
    void SetGradientBackground(Macad::Occt::Aspect_GradientBackground^ theBackground);
    /// <summary>
    /// Returns background image texture map.
    /// </summary>
    Macad::Occt::Graphic3d_TextureMap^ BackgroundImage();
    /// <summary>
    /// Returns cubemap being set last time on background.
    /// </summary>
    Macad::Occt::Graphic3d_CubeMap^ BackgroundCubeMap();
    /// <summary>
    /// Returns cubemap being set last time on background.
    /// </summary>
    Macad::Occt::Graphic3d_CubeMap^ IBLCubeMap();
    /// <summary>
    /// Sets image texture or environment cubemap as background.
    /// </summary>
    /// <param name="in]">
    /// theTextureMap  source to set a background;
    /// should be either Graphic3d_Texture2D or Graphic3d_CubeMap
    /// </param>
    /// <param name="in]">
    /// theToUpdatePBREnv  defines whether IBL maps will be generated or not
    /// (see GeneratePBREnvironment())
    /// </param>
    void SetBackgroundImage(Macad::Occt::Graphic3d_TextureMap^ theTextureMap, bool theToUpdatePBREnv);
    /// <summary>
    /// Sets image texture or environment cubemap as background.
    /// </summary>
    /// <param name="in]">
    /// theTextureMap  source to set a background;
    /// should be either Graphic3d_Texture2D or Graphic3d_CubeMap
    /// </param>
    /// <param name="in]">
    /// theToUpdatePBREnv  defines whether IBL maps will be generated or not
    /// (see GeneratePBREnvironment())
    /// </param>
    void SetBackgroundImage(Macad::Occt::Graphic3d_TextureMap^ theTextureMap);
    /// <summary>
    /// Returns background image fill style.
    /// </summary>
    Macad::Occt::Aspect_FillMethod BackgroundImageStyle();
    /// <summary>
    /// Sets background image fill style.
    /// </summary>
    void SetBackgroundImageStyle(Macad::Occt::Aspect_FillMethod theFillStyle);
    /// <summary>
    /// Returns background type.
    /// </summary>
    Macad::Occt::Graphic3d_TypeOfBackground BackgroundType();
    /// <summary>
    /// Sets background type.
    /// </summary>
    void SetBackgroundType(Macad::Occt::Graphic3d_TypeOfBackground theType);
    /// <summary>
    /// Returns skydome aspect;
    /// </summary>
    Macad::Occt::Aspect_SkydomeBackground^ BackgroundSkydome();
    /// <summary>
    /// Sets skydome aspect
    /// </summary>
    void SetBackgroundSkydome(Macad::Occt::Aspect_SkydomeBackground^ theAspect, bool theToUpdatePBREnv);
    /// <summary>
    /// Sets skydome aspect
    /// </summary>
    void SetBackgroundSkydome(Macad::Occt::Aspect_SkydomeBackground^ theAspect);
    /// <summary>
    /// Enables or disables IBL (Image Based Lighting) from background cubemap.
    /// Has no effect if PBR is not used.
    /// </summary>
    /// <param name="in]">
    /// theToEnableIBL enable or disable IBL from background cubemap
    /// </param>
    void SetImageBasedLighting(bool theToEnableIBL);
    /// <summary>
    /// Returns environment texture set for the view.
    /// </summary>
    Macad::Occt::Graphic3d_TextureEnv^ TextureEnv();
    /// <summary>
    /// Sets environment texture for the view.
    /// </summary>
    void SetTextureEnv(Macad::Occt::Graphic3d_TextureEnv^ theTextureEnv);
    /// <summary>
    /// Returns list of lights of the view.
    /// </summary>
    Macad::Occt::Graphic3d_LightSet^ Lights();
    /// <summary>
    /// Sets list of lights for the view.
    /// </summary>
    void SetLights(Macad::Occt::Graphic3d_LightSet^ theLights);
    /// <summary>
    /// Returns list of clip planes set for the view.
    /// </summary>
    Macad::Occt::Graphic3d_SequenceOfHClipPlane^ ClipPlanes();
    /// <summary>
    /// Sets list of clip planes for the view.
    /// </summary>
    void SetClipPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes);
    /* Method skipped due to unknown mapping: void DiagnosticInformation(TColStd_IndexedDataMapOfStringString theDict, Graphic3d_DiagnosticInfo theFlags, ) */
    /// <summary>
    /// Returns string with statistic performance info.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ StatisticInformation();
    /* Method skipped due to unknown mapping: void StatisticInformation(TColStd_IndexedDataMapOfStringString theDict, ) */
    /// <summary>
    /// Return unit scale factor defined as scale factor for m (meters); 1.0 by default.
    /// Normally, view definition is unitless, however some operations like VR input requires proper
    /// units mapping.
    /// </summary>
    double UnitFactor();
    /// <summary>
    /// Set unit scale factor.
    /// </summary>
    void SetUnitFactor(double theFactor);
    /// <summary>
    /// Return XR session.
    /// </summary>
    Macad::Occt::Aspect_XRSession^ XRSession();
    /// <summary>
    /// Set XR session.
    /// </summary>
    void SetXRSession(Macad::Occt::Aspect_XRSession^ theSession);
    /// <summary>
    /// Return TRUE if there is active XR session.
    /// </summary>
    bool IsActiveXR();
    /// <summary>
    /// Initialize XR session.
    /// </summary>
    bool InitXR();
    /// <summary>
    /// Release XR session.
    /// </summary>
    void ReleaseXR();
    /// <summary>
    /// Process input.
    /// </summary>
    void ProcessXRInput();
    /// <summary>
    /// Compute PosedXRCamera() based on current XR head pose and make it active.
    /// </summary>
    void SetupXRPosedCamera();
    /// <summary>
    /// Set current camera back to BaseXRCamera() and copy temporary modifications of PosedXRCamera().
    /// Calls SynchronizeXRPosedToBaseCamera() beforehand.
    /// </summary>
    void UnsetXRPosedCamera();
    /// <summary>
    /// Returns transient XR camera position with tracked head orientation applied.
    /// </summary>
    Macad::Occt::Graphic3d_Camera^ PosedXRCamera();
    /// <summary>
    /// Sets transient XR camera position with tracked head orientation applied.
    /// </summary>
    void SetPosedXRCamera(Macad::Occt::Graphic3d_Camera^ theCamera);
    /// <summary>
    /// Returns anchor camera definition (without tracked head orientation).
    /// </summary>
    Macad::Occt::Graphic3d_Camera^ BaseXRCamera();
    /// <summary>
    /// Sets anchor camera definition.
    /// </summary>
    void SetBaseXRCamera(Macad::Occt::Graphic3d_Camera^ theCamera);
    /// <summary>
    /// Convert XR pose to world space.
    /// </summary>
    /// <param name="in]">
    /// thePoseXR  transformation defined in VR local coordinate system,
    /// oriented as Y-up, X-right and -Z-forward
    /// </param>
    /// <returns>
    /// transformation defining orientation of XR pose in world space
    /// </returns>
    Macad::Occt::Trsf PoseXRToWorld(Macad::Occt::Trsf thePoseXR);
    /// <summary>
    /// Returns view direction in the world space based on XR pose.
    /// </summary>
    /// <param name="in]">
    /// thePoseXR  transformation defined in VR local coordinate system,
    /// oriented as Y-up, X-right and -Z-forward
    /// </param>
    Macad::Occt::Ax1 ViewAxisInWorld(Macad::Occt::Trsf thePoseXR);
    /// <summary>
    /// Recomputes PosedXRCamera() based on BaseXRCamera() and head orientation.
    /// </summary>
    void SynchronizeXRBaseToPosedCamera();
    /// <summary>
    /// Checks if PosedXRCamera() has been modified since SetupXRPosedCamera()
    /// and copies these modifications to BaseXRCamera().
    /// </summary>
    void SynchronizeXRPosedToBaseCamera();
    /// <summary>
    /// Compute camera position based on XR pose.
    /// </summary>
    void ComputeXRPosedCameraFromBase(Macad::Occt::Graphic3d_Camera^ theCam, Macad::Occt::Trsf theXRTrsf);
    /// <summary>
    /// Update based camera from posed camera by applying reversed transformation.
    /// </summary>
    void ComputeXRBaseCameraFromPosed(Macad::Occt::Graphic3d_Camera^ theCamPosed, Macad::Occt::Trsf thePoseTrsf);
    /// <summary>
    /// Turn XR camera direction using current (head) eye position as anchor.
    /// </summary>
    void TurnViewXRCamera(Macad::Occt::Trsf theTrsfTurn);
    /// <summary>
    /// </summary>
    /// @name obsolete Graduated Trihedron functionality
    /// Returns data of a graduated trihedron
    Macad::Occt::Graphic3d_GraduatedTrihedron^ GetGraduatedTrihedron();
    /// <summary>
    /// Displays Graduated Trihedron.
    /// </summary>
    void GraduatedTrihedronDisplay(Macad::Occt::Graphic3d_GraduatedTrihedron^ theTrihedronData);
    /// <summary>
    /// Erases Graduated Trihedron.
    /// </summary>
    void GraduatedTrihedronErase();
    /// <summary>
    /// Sets minimum and maximum points of scene bounding box for Graduated Trihedron stored in
    /// graphic view object.
    /// </summary>
    /// <param name="in]">
    /// theMin  the minimum point of scene.
    /// </param>
    /// <param name="in]">
    /// theMax  the maximum point of scene.
    /// </param>
    void GraduatedTrihedronMinMaxValues(Macad::Occt::Graphic3d_Vec3^ theMin, Macad::Occt::Graphic3d_Vec3^ theMax);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    /// <summary>
    /// </summary>
    /// @name subview properties
    /// Return TRUE if this is a subview of another view.
    bool IsSubview();
    /// <summary>
    /// Return parent View or NULL if this is not a subview.
    /// </summary>
    Macad::Occt::Graphic3d_CView^ ParentView();
    /// <summary>
    /// Return TRUE if this is view performs rendering of subviews and nothing else; FALSE by default.
    /// By default, view with subviews will render main scene and blit subviews on top of it.
    /// Rendering of main scene might become redundant in case if subviews cover entire window of
    /// parent view. This flag allows to disable rendering of the main scene in such scenarios without
    /// creation of a dedicated V3d_Viewer instance just for composing subviews.
    /// </summary>
    bool IsSubviewComposer();
    /// <summary>
    /// Set if this view should perform composing of subviews and nothing else.
    /// </summary>
    void SetSubviewComposer(bool theIsComposer);
    /* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<Graphic3d_CView>> Subviews() */
    /// <summary>
    /// Add subview to the list.
    /// </summary>
    void AddSubview(Macad::Occt::Graphic3d_CView^ theView);
    /// <summary>
    /// Remove subview from the list.
    /// </summary>
    bool RemoveSubview(Macad::Occt::Graphic3d_CView^ theView);
    /// <summary>
    /// Return subview position within parent view; Aspect_TOTP_LEFT_UPPER by default.
    /// </summary>
    Macad::Occt::Aspect_TypeOfTriedronPosition SubviewCorner();
    /// <summary>
    /// Set subview position within parent view.
    /// </summary>
    void SetSubviewCorner(Macad::Occt::Aspect_TypeOfTriedronPosition thePos);
    /// <summary>
    /// Return subview top-left position relative to parent view in pixels.
    /// </summary>
    Macad::Occt::Graphic3d_Vec2i^ SubviewTopLeft();
    /// <summary>
    /// Return TRUE if subview size is set as proportions relative to parent view.
    /// </summary>
    bool IsSubViewRelativeSize();
    /// <summary>
    /// Return subview dimensions; (1.0, 1.0) by default.
    /// Values >= 2   define size in pixels;
    /// Values <= 1.0 define size as fraction of parent view.
    /// </summary>
    Macad::Occt::Graphic3d_Vec2d^ SubviewSize();
    /// <summary>
    /// Set subview size relative to parent view.
    /// </summary>
    void SetSubviewSize(Macad::Occt::Graphic3d_Vec2d^ theSize);
    /// <summary>
    /// Return corner offset within parent view; (0.0,0.0) by default.
    /// Values >= 2   define offset in pixels;
    /// Values <= 1.0 define offset as fraction of parent view dimensions.
    /// </summary>
    Macad::Occt::Graphic3d_Vec2d^ SubviewOffset();
    /// <summary>
    /// Set corner offset within parent view.
    /// </summary>
    void SetSubviewOffset(Macad::Occt::Graphic3d_Vec2d^ theOffset);
    /// <summary>
    /// Return subview margins in pixels; (0,0) by default
    /// </summary>
    Macad::Occt::Graphic3d_Vec2i^ SubviewMargins();
    /// <summary>
    /// Set subview margins in pixels.
    /// </summary>
    void SetSubviewMargins(Macad::Occt::Graphic3d_Vec2i^ theMargins);
    /* Method skipped due to unknown mapping: void SubviewResized(Aspect_NeutralWindow theWindow, ) */
    static Macad::Occt::Graphic3d_CView^ CreateDowncasted(::Graphic3d_CView* instance);
}; // class Graphic3d_CView

//---------------------------------------------------------------------
//  Class  Graphic3d_GraduatedTrihedron
//---------------------------------------------------------------------
/// <summary>
/// Defines the class of a graduated trihedron.
/// It contains main style parameters for implementation of graduated trihedron
/// </summary>
/// @sa OpenGl_GraduatedTrihedron
public ref class Graphic3d_GraduatedTrihedron sealed
    : public Macad::Occt::BaseClass<::Graphic3d_GraduatedTrihedron>
{

#ifdef Include_Graphic3d_GraduatedTrihedron_h
public:
    Include_Graphic3d_GraduatedTrihedron_h
#endif

public:
    Graphic3d_GraduatedTrihedron(::Graphic3d_GraduatedTrihedron* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_GraduatedTrihedron>( nativeInstance, true )
    {}

    Graphic3d_GraduatedTrihedron(::Graphic3d_GraduatedTrihedron& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_GraduatedTrihedron>( &nativeInstance, false )
    {}

    property ::Graphic3d_GraduatedTrihedron* NativeInstance
    {
        ::Graphic3d_GraduatedTrihedron* get()
        {
            return static_cast<::Graphic3d_GraduatedTrihedron*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Class that stores style for one graduated trihedron axis such as colors, lengths and
    /// customization flags. It is used in Graphic3d_GraduatedTrihedron.
    /// </summary>
    ref class AxisAspect sealed
        : public Macad::Occt::BaseClass<::Graphic3d_GraduatedTrihedron::AxisAspect>
    {

#ifdef Include_Graphic3d_GraduatedTrihedron_AxisAspect_h
    public:
        Include_Graphic3d_GraduatedTrihedron_AxisAspect_h
#endif

    public:
        AxisAspect(::Graphic3d_GraduatedTrihedron::AxisAspect* nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_GraduatedTrihedron::AxisAspect>( nativeInstance, true )
        {}

        AxisAspect(::Graphic3d_GraduatedTrihedron::AxisAspect& nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_GraduatedTrihedron::AxisAspect>( &nativeInstance, false )
        {}

        property ::Graphic3d_GraduatedTrihedron::AxisAspect* NativeInstance
        {
            ::Graphic3d_GraduatedTrihedron::AxisAspect* get()
            {
                return static_cast<::Graphic3d_GraduatedTrihedron::AxisAspect*>(_NativeInstance);
            }
        }

    public:
        AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor, int theValuesOffset, int theNameOffset, int theTickmarksNumber, int theTickmarksLength, bool theToDrawName, bool theToDrawValues, bool theToDrawTickmarks);
        AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor, int theValuesOffset, int theNameOffset, int theTickmarksNumber, int theTickmarksLength, bool theToDrawName, bool theToDrawValues);
        AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor, int theValuesOffset, int theNameOffset, int theTickmarksNumber, int theTickmarksLength, bool theToDrawName);
        AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor, int theValuesOffset, int theNameOffset, int theTickmarksNumber, int theTickmarksLength);
        AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor, int theValuesOffset, int theNameOffset, int theTickmarksNumber);
        AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor, int theValuesOffset, int theNameOffset);
        AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor, int theValuesOffset);
        AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor);
        AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor);
        AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName);
        AxisAspect();
        void SetName(Macad::Occt::TCollection_ExtendedString^ theName);
        Macad::Occt::TCollection_ExtendedString^ Name();
        bool ToDrawName();
        void SetDrawName(bool theToDraw);
        bool ToDrawTickmarks();
        void SetDrawTickmarks(bool theToDraw);
        bool ToDrawValues();
        void SetDrawValues(bool theToDraw);
        Macad::Occt::Quantity_Color^ NameColor();
        void SetNameColor(Macad::Occt::Quantity_Color^ theColor);
        /// <summary>
        /// Color of axis and values
        /// </summary>
        Macad::Occt::Quantity_Color^ Color();
        /// <summary>
        /// Sets color of axis and values
        /// </summary>
        void SetColor(Macad::Occt::Quantity_Color^ theColor);
        int TickmarksNumber();
        void SetTickmarksNumber(int theValue);
        int TickmarksLength();
        void SetTickmarksLength(int theValue);
        int ValuesOffset();
        void SetValuesOffset(int theValue);
        int NameOffset();
        void SetNameOffset(int theValue);
    }; // class AxisAspect

    /* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, int theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, int theValuesSize, float theArrowsLength, Quantity_Color theGridColor, bool theToDrawGrid, bool theToDrawAxes, ) */
    /* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, int theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, int theValuesSize, float theArrowsLength, Quantity_Color theGridColor, bool theToDrawGrid, bool theToDrawAxes, ) */
    /* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, int theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, int theValuesSize, float theArrowsLength, Quantity_Color theGridColor, bool theToDrawGrid, bool theToDrawAxes, ) */
    /* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, int theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, int theValuesSize, float theArrowsLength, Quantity_Color theGridColor, bool theToDrawGrid, bool theToDrawAxes, ) */
    /* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, int theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, int theValuesSize, float theArrowsLength, Quantity_Color theGridColor, bool theToDrawGrid, bool theToDrawAxes, ) */
    /* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, int theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, int theValuesSize, float theArrowsLength, Quantity_Color theGridColor, bool theToDrawGrid, bool theToDrawAxes, ) */
    /* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, int theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, int theValuesSize, float theArrowsLength, Quantity_Color theGridColor, bool theToDrawGrid, bool theToDrawAxes, ) */
    /* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, int theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, int theValuesSize, float theArrowsLength, Quantity_Color theGridColor, bool theToDrawGrid, bool theToDrawAxes, ) */
    /* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, int theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, int theValuesSize, float theArrowsLength, Quantity_Color theGridColor, bool theToDrawGrid, bool theToDrawAxes, ) */
    /// <summary>
    /// Default constructor
    /// Constructs the default graduated trihedron with grid, X, Y, Z axes, and tickmarks
    /// </summary>
    Graphic3d_GraduatedTrihedron(Macad::Occt::TCollection_AsciiString^ theNamesFont);
    /// <summary>
    /// Default constructor
    /// Constructs the default graduated trihedron with grid, X, Y, Z axes, and tickmarks
    /// </summary>
    Graphic3d_GraduatedTrihedron();
    Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect^ ChangeXAxisAspect();
    Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect^ ChangeYAxisAspect();
    Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect^ ChangeZAxisAspect();
    Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect^ ChangeAxisAspect(int theIndex);
    Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect^ XAxisAspect();
    Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect^ YAxisAspect();
    Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect^ ZAxisAspect();
    Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect^ AxisAspectAt(int theIndex);
    float ArrowsLength();
    void SetArrowsLength(float theValue);
    Macad::Occt::Quantity_Color^ GridColor();
    void SetGridColor(Macad::Occt::Quantity_Color^ theColor);
    bool ToDrawGrid();
    void SetDrawGrid(bool theToDraw);
    bool ToDrawAxes();
    void SetDrawAxes(bool theToDraw);
    Macad::Occt::TCollection_AsciiString^ NamesFont();
    void SetNamesFont(Macad::Occt::TCollection_AsciiString^ theFont);
    /* Method skipped due to unknown mapping: Font_FontAspect NamesFontAspect() */
    /* Method skipped due to unknown mapping: void SetNamesFontAspect(Font_FontAspect theAspect, ) */
    int NamesSize();
    void SetNamesSize(int theValue);
    Macad::Occt::TCollection_AsciiString^ ValuesFont();
    void SetValuesFont(Macad::Occt::TCollection_AsciiString^ theFont);
    /* Method skipped due to unknown mapping: Font_FontAspect ValuesFontAspect() */
    /* Method skipped due to unknown mapping: void SetValuesFontAspect(Font_FontAspect theAspect, ) */
    int ValuesSize();
    void SetValuesSize(int theValue);
    bool CubicAxesCallback(Macad::Occt::Graphic3d_CView^ theView);
}; // class Graphic3d_GraduatedTrihedron

//---------------------------------------------------------------------
//  Class  Graphic3d_RenderingParams
//---------------------------------------------------------------------
/// <summary>
/// Helper class to store rendering parameters.
/// </summary>
public ref class Graphic3d_RenderingParams sealed
    : public Macad::Occt::BaseClass<::Graphic3d_RenderingParams>
{

#ifdef Include_Graphic3d_RenderingParams_h
public:
    Include_Graphic3d_RenderingParams_h
#endif

public:
    Graphic3d_RenderingParams(::Graphic3d_RenderingParams* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_RenderingParams>( nativeInstance, true )
    {}

    Graphic3d_RenderingParams(::Graphic3d_RenderingParams& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_RenderingParams>( &nativeInstance, false )
    {}

    property ::Graphic3d_RenderingParams* NativeInstance
    {
        ::Graphic3d_RenderingParams* get()
        {
            return static_cast<::Graphic3d_RenderingParams*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  Anaglyph
    //---------------------------------------------------------------------
    /// <summary>
    /// Anaglyph filter presets.
    /// </summary>
    enum class Anaglyph
    {
        RedCyan_Simple = 0,
        RedCyan_Optimized = 1,
        YellowBlue_Simple = 2,
        YellowBlue_Optimized = 3,
        GreenMagenta_Simple = 4,
        UserDefined = 5
    }; // enum  class Anaglyph

    //---------------------------------------------------------------------
    //  Enum  PerfCounters
    //---------------------------------------------------------------------
    /// <summary>
    /// Statistics display flags.
    /// If not specified otherwise, the counter value is computed for a single rendered frame.
    /// </summary>
    enum class PerfCounters
    {
        NONE = 0,
        FrameRate = 1,
        CPU = 2,
        Layers = 4,
        Structures = 8,
        Groups = 16,
        GroupArrays = 32,
        Triangles = 64,
        Points = 128,
        Lines = 256,
        EstimMem = 512,
        FrameTime = 1024,
        FrameTimeMax = 2048,
        SkipImmediate = 4096,
        Basic = 15,
        Extended = 1023,
        All = 4095
    }; // enum  class PerfCounters

    //---------------------------------------------------------------------
    //  Enum  FrustumCulling
    //---------------------------------------------------------------------
    /// <summary>
    /// State of frustum culling optimization.
    /// </summary>
    enum class FrustumCulling
    {
        Off = 0,
        On = 1,
        NoUpdate = 2
    }; // enum  class FrustumCulling

    /// <summary>
    /// < specifies rendering mode, Graphic3d_RM_RASTERIZATION by default
    /// </summary>
    property Macad::Occt::Graphic3d_RenderingMode Method {
        Macad::Occt::Graphic3d_RenderingMode get() {
            return (Macad::Occt::Graphic3d_RenderingMode)(((::Graphic3d_RenderingParams*)_NativeInstance)->Method);
        }
        void set(Macad::Occt::Graphic3d_RenderingMode value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->Method = (::Graphic3d_RenderingMode)value;
        }
    }

    /// <summary>
    /// < specified default shading model, Graphic3d_TypeOfShadingModel_Phong by default
    /// </summary>
    property Macad::Occt::Graphic3d_TypeOfShadingModel ShadingModel {
        Macad::Occt::Graphic3d_TypeOfShadingModel get() {
            return (Macad::Occt::Graphic3d_TypeOfShadingModel)(((::Graphic3d_RenderingParams*)_NativeInstance)->ShadingModel);
        }
        void set(Macad::Occt::Graphic3d_TypeOfShadingModel value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->ShadingModel = (::Graphic3d_TypeOfShadingModel)value;
        }
    }

    /// <summary>
    /// < specifies rendering method for transparent graphics
    /// </summary>
    property Macad::Occt::Graphic3d_RenderTransparentMethod TransparencyMethod {
        Macad::Occt::Graphic3d_RenderTransparentMethod get() {
            return (Macad::Occt::Graphic3d_RenderTransparentMethod)(((::Graphic3d_RenderingParams*)_NativeInstance)->TransparencyMethod);
        }
        void set(Macad::Occt::Graphic3d_RenderTransparentMethod value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->TransparencyMethod = (::Graphic3d_RenderTransparentMethod)value;
        }
    }

    /// <summary>
    /// < Pixels density (PPI), defines scaling factor for parameters like text size
    /// </summary>
    property unsigned int Resolution {
        unsigned int get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->Resolution;
        }
        void set(unsigned int value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->Resolution = value;
        }
    }

    /// <summary>
    /// < line feather width in pixels (> 0.0), 1.0 by default;
    /// </summary>
    property float LineFeather {
        float get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->LineFeather;
        }
        void set(float value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->LineFeather = value;
        }
    }

    /// <summary>
    /// < size of IBL maps side can be calculated as 2^PbrEnvPow2Size (> 0), 9 by default
    /// </summary>
    property int PbrEnvPow2Size {
        int get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->PbrEnvPow2Size;
        }
        void set(int value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->PbrEnvPow2Size = value;
        }
    }

    /// <summary>
    /// < number of levels used in specular IBL map (> 1), 6 by default
    /// </summary>
    property int PbrEnvSpecMapNbLevels {
        int get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->PbrEnvSpecMapNbLevels;
        }
        void set(int value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->PbrEnvSpecMapNbLevels = value;
        }
    }

    /// <summary>
    /// < number of samples used in Monte-Carlo integration during diffuse IBL map's
    /// </summary>
    property int PbrEnvBakingDiffNbSamples {
        int get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->PbrEnvBakingDiffNbSamples;
        }
        void set(int value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->PbrEnvBakingDiffNbSamples = value;
        }
    }

    /// <summary>
    /// < number of samples used in Monte-Carlo integration during specular IBL map's generation (> 0), 256 by default
    /// </summary>
    property int PbrEnvBakingSpecNbSamples {
        int get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->PbrEnvBakingSpecNbSamples;
        }
        void set(int value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->PbrEnvBakingSpecNbSamples = value;
        }
    }

    /// <summary>
    /// < controls strength of samples reducing strategy during specular IBL map's generation
    /// </summary>
    property float PbrEnvBakingProbability {
        float get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->PbrEnvBakingProbability;
        }
        void set(float value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->PbrEnvBakingProbability = value;
        }
    }

    /// <summary>
    /// < scalar factor [0-1] controlling influence of depth of a fragment to its final coverage (Graphic3d_RTM_BLEND_OIT), 0.0 by default
    /// </summary>
    property float OitDepthFactor {
        float get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->OitDepthFactor;
        }
        void set(float value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->OitDepthFactor = value;
        }
    }

    /// <summary>
    /// < number of depth peeling (Graphic3d_RTM_DEPTH_PEELING_OIT) layers, 4 by default
    /// </summary>
    property int NbOitDepthPeelingLayers {
        int get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->NbOitDepthPeelingLayers;
        }
        void set(int value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->NbOitDepthPeelingLayers = value;
        }
    }

    /// <summary>
    /// < number of MSAA samples (should be within 0..GL_MAX_SAMPLES, power-of-two number), 0 by default
    /// </summary>
    property int NbMsaaSamples {
        int get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->NbMsaaSamples;
        }
        void set(int value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->NbMsaaSamples = value;
        }
    }

    /// <summary>
    /// < rendering resolution scale factor, 1 by default;
    /// </summary>
    property float RenderResolutionScale {
        float get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->RenderResolutionScale;
        }
        void set(float value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->RenderResolutionScale = value;
        }
    }

    /// <summary>
    /// < shadow texture map resolution, 1024 by default
    /// </summary>
    property int ShadowMapResolution {
        int get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->ShadowMapResolution;
        }
        void set(int value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->ShadowMapResolution = value;
        }
    }

    /// <summary>
    /// < shadowmap bias, 0.005 by default;
    /// </summary>
    property float ShadowMapBias {
        float get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->ShadowMapBias;
        }
        void set(float value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->ShadowMapBias = value;
        }
    }

    /// <summary>
    /// < enables/disables depth pre-pass, False by default
    /// </summary>
    property bool ToEnableDepthPrepass {
        bool get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->ToEnableDepthPrepass;
        }
        void set(bool value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->ToEnableDepthPrepass = value;
        }
    }

    /// <summary>
    /// < enables/disables alpha to coverage, True by default
    /// </summary>
    property bool ToEnableAlphaToCoverage {
        bool get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->ToEnableAlphaToCoverage;
        }
        void set(bool value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->ToEnableAlphaToCoverage = value;
        }
    }

    /// <summary>
    /// < enables/disables global illumination effects (path tracing)
    /// </summary>
    property bool IsGlobalIlluminationEnabled {
        bool get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->IsGlobalIlluminationEnabled;
        }
        void set(bool value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->IsGlobalIlluminationEnabled = value;
        }
    }

    /// <summary>
    /// < number of samples per pixel (SPP)
    /// </summary>
    property int SamplesPerPixel {
        int get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->SamplesPerPixel;
        }
        void set(int value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->SamplesPerPixel = value;
        }
    }

    /// <summary>
    /// < maximum ray-tracing depth, 3 by default
    /// </summary>
    property int RaytracingDepth {
        int get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->RaytracingDepth;
        }
        void set(int value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->RaytracingDepth = value;
        }
    }

    /// <summary>
    /// < enables/disables shadows rendering, True by default
    /// </summary>
    property bool IsShadowEnabled {
        bool get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->IsShadowEnabled;
        }
        void set(bool value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->IsShadowEnabled = value;
        }
    }

    /// <summary>
    /// < enables/disables specular reflections, False by default
    /// </summary>
    property bool IsReflectionEnabled {
        bool get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->IsReflectionEnabled;
        }
        void set(bool value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->IsReflectionEnabled = value;
        }
    }

    /// <summary>
    /// < enables/disables adaptive anti-aliasing, False by default
    /// </summary>
    property bool IsAntialiasingEnabled {
        bool get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->IsAntialiasingEnabled;
        }
        void set(bool value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->IsAntialiasingEnabled = value;
        }
    }

    /// <summary>
    /// < enables/disables light propagation through transparent media, False by default
    /// </summary>
    property bool IsTransparentShadowEnabled {
        bool get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->IsTransparentShadowEnabled;
        }
        void set(bool value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->IsTransparentShadowEnabled = value;
        }
    }

    /// <summary>
    /// < enables/disables environment map background
    /// </summary>
    property bool UseEnvironmentMapBackground {
        bool get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->UseEnvironmentMapBackground;
        }
        void set(bool value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->UseEnvironmentMapBackground = value;
        }
    }

    /// <summary>
    /// < enables/disables normal map ignoring during path tracing; FALSE by default
    /// </summary>
    property bool ToIgnoreNormalMapInRayTracing {
        bool get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->ToIgnoreNormalMapInRayTracing;
        }
        void set(bool value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->ToIgnoreNormalMapInRayTracing = value;
        }
    }

    /// <summary>
    /// < enables/disables 'coherent' tracing mode (single RNG seed within 16x16 image blocks)
    /// </summary>
    property bool CoherentPathTracingMode {
        bool get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->CoherentPathTracingMode;
        }
        void set(bool value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->CoherentPathTracingMode = value;
        }
    }

    /// <summary>
    /// < enables/disables adaptive screen sampling mode for path tracing, FALSE by default
    /// </summary>
    property bool AdaptiveScreenSampling {
        bool get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->AdaptiveScreenSampling;
        }
        void set(bool value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->AdaptiveScreenSampling = value;
        }
    }

    /// <summary>
    /// < enables/disables usage of atomic float operations within adaptive screen sampling, FALSE by default
    /// </summary>
    property bool AdaptiveScreenSamplingAtomic {
        bool get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->AdaptiveScreenSamplingAtomic;
        }
        void set(bool value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->AdaptiveScreenSamplingAtomic = value;
        }
    }

    /// <summary>
    /// < enables/disables debug mode for adaptive screen sampling, FALSE by default
    /// </summary>
    property bool ShowSamplingTiles {
        bool get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->ShowSamplingTiles;
        }
        void set(bool value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->ShowSamplingTiles = value;
        }
    }

    /// <summary>
    /// < forces path tracing to use two-sided versions of original one-sided scattering models
    /// </summary>
    property bool TwoSidedBsdfModels {
        bool get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->TwoSidedBsdfModels;
        }
        void set(bool value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->TwoSidedBsdfModels = value;
        }
    }

    /// <summary>
    /// < maximum radiance value used for clamping radiance estimation.
    /// </summary>
    property float RadianceClampingValue {
        float get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->RadianceClampingValue;
        }
        void set(float value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->RadianceClampingValue = value;
        }
    }

    /// <summary>
    /// < forces rebuilding ray tracing shaders at the next frame
    /// </summary>
    property bool RebuildRayTracingShaders {
        bool get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->RebuildRayTracingShaders;
        }
        void set(bool value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->RebuildRayTracingShaders = value;
        }
    }

    /// <summary>
    /// < screen tile size, 32 by default (adaptive sampling mode of path tracing);
    /// </summary>
    property int RayTracingTileSize {
        int get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->RayTracingTileSize;
        }
        void set(int value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->RayTracingTileSize = value;
        }
    }

    /// <summary>
    /// < maximum number of screen tiles per frame, 256 by default (adaptive sampling mode of path tracing);
    /// </summary>
    property int NbRayTracingTiles {
        int get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->NbRayTracingTiles;
        }
        void set(int value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->NbRayTracingTiles = value;
        }
    }

    /// <summary>
    /// < aperture radius of perspective camera used for depth-of-field, 0.0 by default (no DOF) (path tracing only)
    /// </summary>
    property float CameraApertureRadius {
        float get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->CameraApertureRadius;
        }
        void set(float value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->CameraApertureRadius = value;
        }
    }

    /// <summary>
    /// < focal  distance of perspective camera used for depth-of field, 1.0 by default (path tracing only)
    /// </summary>
    property float CameraFocalPlaneDist {
        float get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->CameraFocalPlaneDist;
        }
        void set(float value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->CameraFocalPlaneDist = value;
        }
    }

    /// <summary>
    /// < state of frustum culling optimization; FrustumCulling_On by default
    /// </summary>
    property Macad::Occt::Graphic3d_RenderingParams::FrustumCulling FrustumCullingState {
        Macad::Occt::Graphic3d_RenderingParams::FrustumCulling get() {
            return (Macad::Occt::Graphic3d_RenderingParams::FrustumCulling)(((::Graphic3d_RenderingParams*)_NativeInstance)->FrustumCullingState);
        }
        void set(Macad::Occt::Graphic3d_RenderingParams::FrustumCulling value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->FrustumCullingState = (::Graphic3d_RenderingParams::FrustumCulling)value;
        }
    }

    /// <summary>
    /// < specifies tone mapping method for path tracing, Graphic3d_ToneMappingMethod_Disabled by default
    /// </summary>
    property Macad::Occt::Graphic3d_ToneMappingMethod ToneMappingMethod {
        Macad::Occt::Graphic3d_ToneMappingMethod get() {
            return (Macad::Occt::Graphic3d_ToneMappingMethod)(((::Graphic3d_RenderingParams*)_NativeInstance)->ToneMappingMethod);
        }
        void set(Macad::Occt::Graphic3d_ToneMappingMethod value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->ToneMappingMethod = (::Graphic3d_ToneMappingMethod)value;
        }
    }

    /// <summary>
    /// < exposure value used for tone mapping (path tracing), 0.0 by default
    /// </summary>
    property float Exposure {
        float get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->Exposure;
        }
        void set(float value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->Exposure = value;
        }
    }

    /// <summary>
    /// < white point value used in filmic tone mapping (path tracing), 1.0 by default
    /// </summary>
    property float WhitePoint {
        float get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->WhitePoint;
        }
        void set(float value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->WhitePoint = value;
        }
    }

    /// <summary>
    /// < stereoscopic output mode, Graphic3d_StereoMode_QuadBuffer by default
    /// </summary>
    property Macad::Occt::Graphic3d_StereoMode StereoMode {
        Macad::Occt::Graphic3d_StereoMode get() {
            return (Macad::Occt::Graphic3d_StereoMode)(((::Graphic3d_RenderingParams*)_NativeInstance)->StereoMode);
        }
        void set(Macad::Occt::Graphic3d_StereoMode value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->StereoMode = (::Graphic3d_StereoMode)value;
        }
    }

    /// <summary>
    /// < sharp field of view range in degrees for displaying on-screen 2D elements, 30.0 by default;
    /// </summary>
    property float HmdFov2d {
        float get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->HmdFov2d;
        }
        void set(float value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->HmdFov2d = value;
        }
    }

    /// <summary>
    /// < filter for anaglyph output, Anaglyph_RedCyan_Optimized by default
    /// </summary>
    property Macad::Occt::Graphic3d_RenderingParams::Anaglyph AnaglyphFilter {
        Macad::Occt::Graphic3d_RenderingParams::Anaglyph get() {
            return (Macad::Occt::Graphic3d_RenderingParams::Anaglyph)(((::Graphic3d_RenderingParams*)_NativeInstance)->AnaglyphFilter);
        }
        void set(Macad::Occt::Graphic3d_RenderingParams::Anaglyph value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->AnaglyphFilter = (::Graphic3d_RenderingParams::Anaglyph)value;
        }
    }

    /// <summary>
    /// < flag to reverse stereo pair, FALSE by default
    /// </summary>
    property bool ToReverseStereo {
        bool get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->ToReverseStereo;
        }
        void set(bool value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->ToReverseStereo = value;
        }
    }

    /// <summary>
    /// < flag to smooth output on interlaced displays (improves text readability / reduces line aliasing), TRUE by default
    /// </summary>
    property bool ToSmoothInterlacing {
        bool get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->ToSmoothInterlacing;
        }
        void set(bool value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->ToSmoothInterlacing = value;
        }
    }

    /// <summary>
    /// < if output device is an external composer - mirror rendering results in window in addition to sending frame to composer, TRUE by default
    /// </summary>
    property bool ToMirrorComposer {
        bool get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->ToMirrorComposer;
        }
        void set(bool value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->ToMirrorComposer = value;
        }
    }

    /// <summary>
    /// < time interval between stats updates in seconds, 1.0 second by default;
    /// </summary>
    property float StatsUpdateInterval {
        float get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->StatsUpdateInterval;
        }
        void set(float value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->StatsUpdateInterval = value;
        }
    }

    /// <summary>
    /// < stats text size; 16 by default
    /// </summary>
    property int StatsTextHeight {
        int get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->StatsTextHeight;
        }
        void set(int value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->StatsTextHeight = value;
        }
    }

    /// <summary>
    /// < number of data frames to collect history; 1 by default
    /// </summary>
    property int StatsNbFrames {
        int get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->StatsNbFrames;
        }
        void set(int value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->StatsNbFrames = value;
        }
    }

    /// <summary>
    /// < upper time limit within frame chart in seconds; 0.1 seconds by default (100 ms or 10 FPS)
    /// </summary>
    property float StatsMaxChartTime {
        float get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->StatsMaxChartTime;
        }
        void set(float value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->StatsMaxChartTime = value;
        }
    }

    /// <summary>
    /// < performance counters to collect, PerfCounters_Basic by default;
    /// </summary>
    property Macad::Occt::Graphic3d_RenderingParams::PerfCounters CollectedStats {
        Macad::Occt::Graphic3d_RenderingParams::PerfCounters get() {
            return (Macad::Occt::Graphic3d_RenderingParams::PerfCounters)(((::Graphic3d_RenderingParams*)_NativeInstance)->CollectedStats);
        }
        void set(Macad::Occt::Graphic3d_RenderingParams::PerfCounters value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->CollectedStats = (::Graphic3d_RenderingParams::PerfCounters)value;
        }
    }

    /// <summary>
    /// < display performance statistics, FALSE by default;
    /// </summary>
    property bool ToShowStats {
        bool get() {
            return ((::Graphic3d_RenderingParams*)_NativeInstance)->ToShowStats;
        }
        void set(bool value) {
            ((::Graphic3d_RenderingParams*)_NativeInstance)->ToShowStats = value;
        }
    }

    /// <summary>
    /// Creates default rendering parameters.
    /// </summary>
    Graphic3d_RenderingParams();
    /// <summary>
    /// Returns resolution ratio.
    /// </summary>
    float ResolutionRatio();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
}; // class Graphic3d_RenderingParams

//---------------------------------------------------------------------
//  Class  Graphic3d_TextureEnv
//---------------------------------------------------------------------
/// <summary>
/// This class provides environment texture.
/// </summary>
public ref class Graphic3d_TextureEnv sealed
    : public Macad::Occt::Graphic3d_TextureRoot
{

#ifdef Include_Graphic3d_TextureEnv_h
public:
    Include_Graphic3d_TextureEnv_h
#endif

public:
    Graphic3d_TextureEnv(::Graphic3d_TextureEnv* nativeInstance)
        : Macad::Occt::Graphic3d_TextureRoot( nativeInstance )
    {}

    Graphic3d_TextureEnv(::Graphic3d_TextureEnv& nativeInstance)
        : Macad::Occt::Graphic3d_TextureRoot( nativeInstance )
    {}

    property ::Graphic3d_TextureEnv* NativeInstance
    {
        ::Graphic3d_TextureEnv* get()
        {
            return static_cast<::Graphic3d_TextureEnv*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an environment texture from a file.
    /// </summary>
    Graphic3d_TextureEnv(Macad::Occt::TCollection_AsciiString^ theFileName);
    /// <summary>
    /// Creates an environment texture from a predefined texture name set.
    /// </summary>
    Graphic3d_TextureEnv(Macad::Occt::Graphic3d_NameOfTextureEnv theName);
    /// <summary>
    /// Creates an environment texture from the pixmap.
    /// </summary>
    Graphic3d_TextureEnv(Macad::Occt::Image_PixMap^ thePixMap);
    /// <summary>
    /// Returns the name of the predefined textures or NOT_ENV_UNKNOWN
    /// when the name is given as a filename.
    /// </summary>
    Macad::Occt::Graphic3d_NameOfTextureEnv Name();
    /// <summary>
    /// Returns the number of predefined textures.
    /// </summary>
    static int NumberOfTextures();
    /// <summary>
    /// Returns the name of the predefined texture of rank <aRank>
    /// </summary>
    static Macad::Occt::TCollection_AsciiString^ TextureName(int theRank);
    static Macad::Occt::Graphic3d_TextureEnv^ CreateDowncasted(::Graphic3d_TextureEnv* instance);
}; // class Graphic3d_TextureEnv

//---------------------------------------------------------------------
//  Class  Graphic3d_LightSet
//---------------------------------------------------------------------
/// <summary>
/// Class defining the set of light sources.
/// </summary>
public ref class Graphic3d_LightSet sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Graphic3d_CLight^>
{

#ifdef Include_Graphic3d_LightSet_h
public:
    Include_Graphic3d_LightSet_h
#endif

public:
    Graphic3d_LightSet(::Graphic3d_LightSet* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_LightSet(::Graphic3d_LightSet& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_LightSet* NativeInstance
    {
        ::Graphic3d_LightSet* get()
        {
            return static_cast<::Graphic3d_LightSet*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  IterationFilter
    //---------------------------------------------------------------------
    /// <summary>
    /// Iteration filter flags.
    /// </summary>
    enum class IterationFilter
    {
        None = 0,
        ExcludeAmbient = 2,
        ExcludeDisabled = 4,
        ExcludeNoShadow = 8,
        ExcludeDisabledAndAmbient = 6,
        ActiveShadowCasters = 14
    }; // enum  class IterationFilter

    /// <summary>
    /// Iterator through light sources.
    /// </summary>
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Graphic3d_LightSet::Iterator>
    {

#ifdef Include_Graphic3d_LightSet_Iterator_h
    public:
        Include_Graphic3d_LightSet_Iterator_h
#endif

    public:
        Iterator(::Graphic3d_LightSet::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_LightSet::Iterator>( nativeInstance, true )
        {}

        Iterator(::Graphic3d_LightSet::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Graphic3d_LightSet::Iterator>( &nativeInstance, false )
        {}

        property ::Graphic3d_LightSet::Iterator* NativeInstance
        {
            ::Graphic3d_LightSet::Iterator* get()
            {
                return static_cast<::Graphic3d_LightSet::Iterator*>(_NativeInstance);
            }
        }

    public:
        /// <summary>
        /// Empty constructor.
        /// </summary>
        Iterator();
        /// <summary>
        /// Constructor with initialization.
        /// </summary>
        Iterator(Macad::Occt::Graphic3d_LightSet^ theSet, Macad::Occt::Graphic3d_LightSet::IterationFilter theFilter);
        /// <summary>
        /// Constructor with initialization.
        /// </summary>
        Iterator(Macad::Occt::Graphic3d_LightSet^ theSet);
        /// <summary>
        /// Returns TRUE if iterator points to a valid item.
        /// </summary>
        bool More();
        /// <summary>
        /// Returns current item.
        /// </summary>
        Macad::Occt::Graphic3d_CLight^ Value();
        /// <summary>
        /// Moves to the next item.
        /// </summary>
        void Next();
    }; // class Iterator

    /// <summary>
    /// Empty constructor.
    /// </summary>
    Graphic3d_LightSet();
    /// <summary>
    /// Return lower light index.
    /// </summary>
    int Lower();
    /// <summary>
    /// Return upper light index.
    /// </summary>
    int Upper();
    /// <summary>
    /// Return TRUE if lights list is empty.
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// Return number of light sources.
    /// </summary>
    int Extent();
    /// <summary>
    /// Return the light source for specified index within range [Lower(), Upper()].
    /// </summary>
    virtual Macad::Occt::Graphic3d_CLight^ Value(int theIndex);
    /// <summary>
    /// Return TRUE if light source is defined in this set.
    /// </summary>
    bool Contains(Macad::Occt::Graphic3d_CLight^ theLight);
    /// <summary>
    /// Append new light source.
    /// </summary>
    bool Add(Macad::Occt::Graphic3d_CLight^ theLight);
    /// <summary>
    /// Remove light source.
    /// </summary>
    bool Remove(Macad::Occt::Graphic3d_CLight^ theLight);
    /// <summary>
    /// Returns total amount of lights of specified type.
    /// </summary>
    int NbLightsOfType(Macad::Occt::Graphic3d_TypeOfLightSource theType);
    /// <summary>
    /// Update light sources revision.
    /// </summary>
    long long unsigned int UpdateRevision();
    /// <summary>
    /// Return light sources revision.
    /// </summary>
    /// @sa UpdateRevision()
    long long unsigned int Revision();
    /// <summary>
    /// Returns total amount of enabled lights EXCLUDING ambient.
    /// </summary>
    /// @sa UpdateRevision()
    int NbEnabled();
    /// <summary>
    /// Returns total amount of enabled lights of specified type.
    /// </summary>
    /// @sa UpdateRevision()
    int NbEnabledLightsOfType(Macad::Occt::Graphic3d_TypeOfLightSource theType);
    /// <summary>
    /// Returns total amount of enabled lights castings shadows.
    /// </summary>
    /// @sa UpdateRevision()
    int NbCastShadows();
    /// <summary>
    /// Returns cumulative ambient color, which is computed as sum of all enabled ambient light
    /// sources. Values are NOT clamped (can be greater than 1.0f) and alpha component is fixed
    /// to 1.0f.
    /// </summary>
    /// @sa UpdateRevision()
    Macad::Occt::Graphic3d_Vec4^ AmbientColor();
    /// <summary>
    /// Returns a string defining a list of enabled light sources as concatenation of letters 'd'
    /// (Directional), 'p' (Point), 's' (Spot) depending on the type of light source in the list.
    /// Example: "dppp".
    /// </summary>
    /// @sa UpdateRevision()
    Macad::Occt::TCollection_AsciiString^ KeyEnabledLong();
    /// <summary>
    /// Returns a string defining a list of enabled light sources as concatenation of letters 'd'
    /// (Directional), 'p' (Point), 's' (Spot) depending on the type of light source in the list,
    /// specified only once. Example: "dp".
    /// </summary>
    /// @sa UpdateRevision()
    Macad::Occt::TCollection_AsciiString^ KeyEnabledShort();
    static Macad::Occt::Graphic3d_LightSet^ CreateDowncasted(::Graphic3d_LightSet* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Graphic3d_CLight^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Graphic3d_LightSet

//---------------------------------------------------------------------
//  Class  Graphic3d_FrameStatsData
//---------------------------------------------------------------------
/// <summary>
/// Data frame definition.
/// </summary>
public ref class Graphic3d_FrameStatsData
    : public Macad::Occt::BaseClass<::Graphic3d_FrameStatsData>
{

#ifdef Include_Graphic3d_FrameStatsData_h
public:
    Include_Graphic3d_FrameStatsData_h
#endif

protected:
    Graphic3d_FrameStatsData(InitMode init)
        : Macad::Occt::BaseClass<::Graphic3d_FrameStatsData>( init )
    {}

public:
    Graphic3d_FrameStatsData(::Graphic3d_FrameStatsData* nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_FrameStatsData>( nativeInstance, true )
    {}

    Graphic3d_FrameStatsData(::Graphic3d_FrameStatsData& nativeInstance)
        : Macad::Occt::BaseClass<::Graphic3d_FrameStatsData>( &nativeInstance, false )
    {}

    property ::Graphic3d_FrameStatsData* NativeInstance
    {
        ::Graphic3d_FrameStatsData* get()
        {
            return static_cast<::Graphic3d_FrameStatsData*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    Graphic3d_FrameStatsData();
    /// <summary>
    /// Returns FPS (frames per seconds, elapsed time).
    /// This number indicates an actual frame rate averaged for several frames within UpdateInterval()
    /// duration, basing on a real elapsed time between updates.
    /// </summary>
    double FrameRate();
    /// <summary>
    /// Returns CPU FPS (frames per seconds, CPU time).
    /// This number indicates a PREDICTED frame rate,
    /// basing on CPU elapsed time between updates and NOT real elapsed time (which might include
    /// periods of CPU inactivity). Number is expected to be greater then actual frame rate returned
    /// by FrameRate(). Values significantly greater actual frame rate indicate that rendering is
    /// limited by GPU performance (CPU is stalled in-between), while values around actual frame rate
    /// indicate rendering being limited by CPU performance (GPU is stalled in-between).
    /// </summary>
    double FrameRateCpu();
    /// <summary>
    /// Returns FPS for immediate redraws.
    /// </summary>
    double ImmediateFrameRate();
    /// <summary>
    /// Returns CPU FPS for immediate redraws.
    /// </summary>
    double ImmediateFrameRateCpu();
    /// <summary>
    /// Get counter value.
    /// </summary>
    long long unsigned int CounterValue(Macad::Occt::Graphic3d_FrameStatsCounter theIndex);
    /// <summary>
    /// Get timer value.
    /// </summary>
    double TimerValue(Macad::Occt::Graphic3d_FrameStatsTimer theIndex);
    /// <summary>
    /// Reset data.
    /// </summary>
    void Reset();
    /// <summary>
    /// Fill with maximum values.
    /// </summary>
    void FillMax(Macad::Occt::Graphic3d_FrameStatsData^ theOther);
}; // class Graphic3d_FrameStatsData

//---------------------------------------------------------------------
//  Class  Graphic3d_FrameStatsDataTmp
//---------------------------------------------------------------------
/// <summary>
/// Temporary data frame definition.
/// </summary>
public ref class Graphic3d_FrameStatsDataTmp sealed
    : public Macad::Occt::Graphic3d_FrameStatsData
{

#ifdef Include_Graphic3d_FrameStatsDataTmp_h
public:
    Include_Graphic3d_FrameStatsDataTmp_h
#endif

public:
    Graphic3d_FrameStatsDataTmp(::Graphic3d_FrameStatsDataTmp* nativeInstance)
        : Macad::Occt::Graphic3d_FrameStatsData( nativeInstance )
    {}

    Graphic3d_FrameStatsDataTmp(::Graphic3d_FrameStatsDataTmp& nativeInstance)
        : Macad::Occt::Graphic3d_FrameStatsData( nativeInstance )
    {}

    property ::Graphic3d_FrameStatsDataTmp* NativeInstance
    {
        ::Graphic3d_FrameStatsDataTmp* get()
        {
            return static_cast<::Graphic3d_FrameStatsDataTmp*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns FPS (frames per seconds, elapsed time).
    /// </summary>
    property double ChangeFrameRate {
        double get() {
            return ((::Graphic3d_FrameStatsDataTmp*)_NativeInstance)->ChangeFrameRate();
        }
        void set(double value) {
            ((::Graphic3d_FrameStatsDataTmp*)_NativeInstance)->ChangeFrameRate() = value;
        }
    }

    /// <summary>
    /// Returns CPU FPS (frames per seconds, CPU time).
    /// </summary>
    property double ChangeFrameRateCpu {
        double get() {
            return ((::Graphic3d_FrameStatsDataTmp*)_NativeInstance)->ChangeFrameRateCpu();
        }
        void set(double value) {
            ((::Graphic3d_FrameStatsDataTmp*)_NativeInstance)->ChangeFrameRateCpu() = value;
        }
    }

    /// <summary>
    /// Returns FPS for immediate redraws.
    /// </summary>
    property double ChangeImmediateFrameRate {
        double get() {
            return ((::Graphic3d_FrameStatsDataTmp*)_NativeInstance)->ChangeImmediateFrameRate();
        }
        void set(double value) {
            ((::Graphic3d_FrameStatsDataTmp*)_NativeInstance)->ChangeImmediateFrameRate() = value;
        }
    }

    /// <summary>
    /// Returns CPU FPS for immediate redraws.
    /// </summary>
    property double ChangeImmediateFrameRateCpu {
        double get() {
            return ((::Graphic3d_FrameStatsDataTmp*)_NativeInstance)->ChangeImmediateFrameRateCpu();
        }
        void set(double value) {
            ((::Graphic3d_FrameStatsDataTmp*)_NativeInstance)->ChangeImmediateFrameRateCpu() = value;
        }
    }

    /// <summary>
    /// Empty constructor.
    /// </summary>
    Graphic3d_FrameStatsDataTmp();
    /// <summary>
    /// Compute average data considering the amount of rendered frames.
    /// </summary>
    void FlushTimers(long long unsigned int theNbFrames, bool theIsFinal);
    /// <summary>
    /// Reset data.
    /// </summary>
    void Reset();
    /* Method skipped due to unknown mapping: OSD_Timer ChangeTimer(Graphic3d_FrameStatsTimer theTimer, ) */
    /// <summary>
    /// Get counter value.
    /// </summary>
    long long unsigned int ChangeCounterValue(Macad::Occt::Graphic3d_FrameStatsCounter theIndex);
    /// <summary>
    /// Modify timer value.
    /// </summary>
    double ChangeTimerValue(Macad::Occt::Graphic3d_FrameStatsTimer theIndex);
}; // class Graphic3d_FrameStatsDataTmp

//---------------------------------------------------------------------
//  Class  Graphic3d_FrameStats
//---------------------------------------------------------------------
/// <summary>
/// Class storing the frame statistics.
/// </summary>
public ref class Graphic3d_FrameStats
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_FrameStats_h
public:
    Include_Graphic3d_FrameStats_h
#endif

public:
    Graphic3d_FrameStats(::Graphic3d_FrameStats* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_FrameStats(::Graphic3d_FrameStats& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_FrameStats* NativeInstance
    {
        ::Graphic3d_FrameStats* get()
        {
            return static_cast<::Graphic3d_FrameStats*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    Graphic3d_FrameStats();
    /// <summary>
    /// Returns interval in seconds for updating meters across several frames; 1 second by default.
    /// </summary>
    double UpdateInterval();
    /// <summary>
    /// Sets interval in seconds for updating values.
    /// </summary>
    void SetUpdateInterval(double theInterval);
    /// <summary>
    /// Prefer longer lines over more greater of lines.
    /// </summary>
    bool IsLongLineFormat();
    /// <summary>
    /// Set if format should prefer longer lines over greater number of lines.
    /// </summary>
    void SetLongLineFormat(bool theValue);
    /// <summary>
    /// Frame redraw started.
    /// </summary>
    void FrameStart(Macad::Occt::Graphic3d_CView^ theView, bool theIsImmediateOnly);
    /// <summary>
    /// Frame redraw finished.
    /// </summary>
    void FrameEnd(Macad::Occt::Graphic3d_CView^ theView, bool theIsImmediateOnly);
    /// <summary>
    /// Returns formatted string.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ FormatStats(Macad::Occt::Graphic3d_RenderingParams::PerfCounters theFlags);
    /* Method skipped due to unknown mapping: void FormatStats(TColStd_IndexedDataMapOfStringString theDict, PerfCounters theFlags, ) */
    /// <summary>
    /// Returns duration of the last frame in seconds.
    /// </summary>
    double FrameDuration();
    /// <summary>
    /// Returns FPS (frames per seconds, elapsed time).
    /// This number indicates an actual frame rate averaged for several frames within UpdateInterval()
    /// duration, basing on a real elapsed time between updates.
    /// </summary>
    double FrameRate();
    /// <summary>
    /// Returns CPU FPS (frames per seconds, CPU time).
    /// This number indicates a PREDICTED frame rate,
    /// basing on CPU elapsed time between updates and NOT real elapsed time (which might include
    /// periods of CPU inactivity). Number is expected to be greater then actual frame rate returned
    /// by FrameRate(). Values significantly greater actual frame rate indicate that rendering is
    /// limited by GPU performance (CPU is stalled in-between), while values around actual frame rate
    /// indicate rendering being limited by CPU performance (GPU is stalled in-between).
    /// </summary>
    double FrameRateCpu();
    /// <summary>
    /// Returns value of specified counter, cached between stats updates.
    /// Should NOT be called between ::FrameStart() and ::FrameEnd() calls.
    /// </summary>
    long long unsigned int CounterValue(Macad::Occt::Graphic3d_FrameStatsCounter theCounter);
    /// <summary>
    /// Returns value of specified timer for modification, should be called between ::FrameStart() and
    /// ::FrameEnd() calls. Should NOT be called between ::FrameStart() and ::FrameEnd() calls.
    /// </summary>
    double TimerValue(Macad::Occt::Graphic3d_FrameStatsTimer theTimer);
    /// <summary>
    /// Returns TRUE if some Layers have been culled.
    /// </summary>
    bool HasCulledLayers();
    /// <summary>
    /// Returns TRUE if some structures have been culled.
    /// </summary>
    bool HasCulledStructs();
    /// <summary>
    /// Returns last data frame, cached between stats updates.
    /// Should NOT be called between ::FrameStart() and ::FrameEnd() calls.
    /// </summary>
    Macad::Occt::Graphic3d_FrameStatsData^ LastDataFrame();
    /// <summary>
    /// Returns last data frame index.
    /// </summary>
    int LastDataFrameIndex();
    /* Method skipped due to unknown mapping: NCollection_Array1<Graphic3d_FrameStatsData> DataFrames() */
    /* Method skipped due to unknown mapping: NCollection_Array1<Graphic3d_FrameStatsData> ChangeDataFrames() */
    /// <summary>
    /// Returns value of specified counter for modification, should be called between ::FrameStart()
    /// and ::FrameEnd() calls.
    /// </summary>
    long long unsigned int ChangeCounter(Macad::Occt::Graphic3d_FrameStatsCounter theCounter);
    /// <summary>
    /// Returns value of specified timer for modification, should be called between ::FrameStart() and
    /// ::FrameEnd() calls.
    /// </summary>
    double ChangeTimer(Macad::Occt::Graphic3d_FrameStatsTimer theTimer);
    /// <summary>
    /// Returns currently filling data frame for modification, should be called between ::FrameStart()
    /// and ::FrameEnd() calls.
    /// </summary>
    Macad::Occt::Graphic3d_FrameStatsDataTmp^ ActiveDataFrame();
    static Macad::Occt::Graphic3d_FrameStats^ CreateDowncasted(::Graphic3d_FrameStats* instance);
}; // class Graphic3d_FrameStats

//---------------------------------------------------------------------
//  Class  Graphic3d_GraphicDriverFactory
//---------------------------------------------------------------------
/// <summary>
/// This class for creation of Graphic3d_GraphicDriver.
/// </summary>
public ref class Graphic3d_GraphicDriverFactory
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_GraphicDriverFactory_h
public:
    Include_Graphic3d_GraphicDriverFactory_h
#endif

public:
    Graphic3d_GraphicDriverFactory(::Graphic3d_GraphicDriverFactory* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_GraphicDriverFactory(::Graphic3d_GraphicDriverFactory& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_GraphicDriverFactory* NativeInstance
    {
        ::Graphic3d_GraphicDriverFactory* get()
        {
            return static_cast<::Graphic3d_GraphicDriverFactory*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Registers factory.
    /// </summary>
    /// <param name="in]">
    /// theFactory      factory to register
    /// </param>
    /// <param name="in]">
    /// theIsPreferred  add to the beginning of the list when TRUE, or add to the end
    /// otherwise
    /// </param>
    static void RegisterFactory(Macad::Occt::Graphic3d_GraphicDriverFactory^ theFactory, bool theIsPreferred);
    /// <summary>
    /// Registers factory.
    /// </summary>
    /// <param name="in]">
    /// theFactory      factory to register
    /// </param>
    /// <param name="in]">
    /// theIsPreferred  add to the beginning of the list when TRUE, or add to the end
    /// otherwise
    /// </param>
    static void RegisterFactory(Macad::Occt::Graphic3d_GraphicDriverFactory^ theFactory);
    /// <summary>
    /// Unregisters factory.
    /// </summary>
    static void UnregisterFactory(Macad::Occt::TCollection_AsciiString^ theName);
    /// <summary>
    /// Return default driver factory or NULL if no one was registered.
    /// </summary>
    static Macad::Occt::Graphic3d_GraphicDriverFactory^ DefaultDriverFactory();
    /// <summary>
    /// Return the global map of registered driver factories.
    /// </summary>
    static Macad::Occt::Graphic3d_GraphicDriverFactoryList^ DriverFactories();
    /* Method skipped due to unknown mapping: Graphic3d_GraphicDriver CreateDriver(Aspect_DisplayConnection theDisp, ) */
    /// <summary>
    /// Return driver factory name.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ Name();
    static Macad::Occt::Graphic3d_GraphicDriverFactory^ CreateDowncasted(::Graphic3d_GraphicDriverFactory* instance);
}; // class Graphic3d_GraphicDriverFactory

//---------------------------------------------------------------------
//  Class  Graphic3d_GroupDefinitionError
//---------------------------------------------------------------------
public ref class Graphic3d_GroupDefinitionError sealed
    : public Macad::Occt::Standard_OutOfRange
{

#ifdef Include_Graphic3d_GroupDefinitionError_h
public:
    Include_Graphic3d_GroupDefinitionError_h
#endif

public:
    Graphic3d_GroupDefinitionError(::Graphic3d_GroupDefinitionError* nativeInstance)
        : Macad::Occt::Standard_OutOfRange( nativeInstance )
    {}

    Graphic3d_GroupDefinitionError(::Graphic3d_GroupDefinitionError& nativeInstance)
        : Macad::Occt::Standard_OutOfRange( nativeInstance )
    {}

    property ::Graphic3d_GroupDefinitionError* NativeInstance
    {
        ::Graphic3d_GroupDefinitionError* get()
        {
            return static_cast<::Graphic3d_GroupDefinitionError*>(_NativeInstance);
        }
    }

public:
    Graphic3d_GroupDefinitionError();
    Graphic3d_GroupDefinitionError(System::String^ theMessage);
    Graphic3d_GroupDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Graphic3d_GroupDefinitionError^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Graphic3d_GroupDefinitionError^ NewInstance();
    static Macad::Occt::Graphic3d_GroupDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Graphic3d_GroupDefinitionError^ CreateDowncasted(::Graphic3d_GroupDefinitionError* instance);
}; // class Graphic3d_GroupDefinitionError

//---------------------------------------------------------------------
//  Class  Graphic3d_MaterialDefinitionError
//---------------------------------------------------------------------
public ref class Graphic3d_MaterialDefinitionError sealed
    : public Macad::Occt::Standard_OutOfRange
{

#ifdef Include_Graphic3d_MaterialDefinitionError_h
public:
    Include_Graphic3d_MaterialDefinitionError_h
#endif

public:
    Graphic3d_MaterialDefinitionError(::Graphic3d_MaterialDefinitionError* nativeInstance)
        : Macad::Occt::Standard_OutOfRange( nativeInstance )
    {}

    Graphic3d_MaterialDefinitionError(::Graphic3d_MaterialDefinitionError& nativeInstance)
        : Macad::Occt::Standard_OutOfRange( nativeInstance )
    {}

    property ::Graphic3d_MaterialDefinitionError* NativeInstance
    {
        ::Graphic3d_MaterialDefinitionError* get()
        {
            return static_cast<::Graphic3d_MaterialDefinitionError*>(_NativeInstance);
        }
    }

public:
    Graphic3d_MaterialDefinitionError();
    Graphic3d_MaterialDefinitionError(System::String^ theMessage);
    Graphic3d_MaterialDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Graphic3d_MaterialDefinitionError^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Graphic3d_MaterialDefinitionError^ NewInstance();
    static Macad::Occt::Graphic3d_MaterialDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Graphic3d_MaterialDefinitionError^ CreateDowncasted(::Graphic3d_MaterialDefinitionError* instance);
}; // class Graphic3d_MaterialDefinitionError

//---------------------------------------------------------------------
//  Class  Graphic3d_Texture2D
//---------------------------------------------------------------------
/// <summary>
/// This abstract class for managing 2D textures
/// </summary>
public ref class Graphic3d_Texture2D
    : public Macad::Occt::Graphic3d_TextureMap
{

#ifdef Include_Graphic3d_Texture2D_h
public:
    Include_Graphic3d_Texture2D_h
#endif

protected:
    Graphic3d_Texture2D(InitMode init)
        : Macad::Occt::Graphic3d_TextureMap( init )
    {}

public:
    Graphic3d_Texture2D(::Graphic3d_Texture2D* nativeInstance)
        : Macad::Occt::Graphic3d_TextureMap( nativeInstance )
    {}

    Graphic3d_Texture2D(::Graphic3d_Texture2D& nativeInstance)
        : Macad::Occt::Graphic3d_TextureMap( nativeInstance )
    {}

    property ::Graphic3d_Texture2D* NativeInstance
    {
        ::Graphic3d_Texture2D* get()
        {
            return static_cast<::Graphic3d_Texture2D*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a texture from a file.
    /// MipMaps levels will be automatically generated if needed.
    /// </summary>
    Graphic3d_Texture2D(Macad::Occt::TCollection_AsciiString^ theFileName);
    /// <summary>
    /// Creates a texture from a predefined texture name set.
    /// MipMaps levels will be automatically generated if needed.
    /// </summary>
    Graphic3d_Texture2D(Macad::Occt::Graphic3d_NameOfTexture2D theNOT);
    /// <summary>
    /// Creates a texture from the pixmap.
    /// MipMaps levels will be automatically generated if needed.
    /// </summary>
    Graphic3d_Texture2D(Macad::Occt::Image_PixMap^ thePixMap);
    /// <summary>
    /// Returns the number of predefined textures.
    /// </summary>
    static int NumberOfTextures();
    /// <summary>
    /// Returns the name of the predefined texture of rank <aRank>
    /// </summary>
    static Macad::Occt::TCollection_AsciiString^ TextureName(int theRank);
    /// <summary>
    /// Returns the name of the predefined textures or NOT_2D_UNKNOWN
    /// when the name is given as a filename.
    /// </summary>
    Macad::Occt::Graphic3d_NameOfTexture2D Name();
    /// <summary>
    /// Assign new image to the texture.
    /// Note that this method does not invalidate already uploaded resources - consider calling
    /// ::UpdateRevision() if needed.
    /// </summary>
    void SetImage(Macad::Occt::Image_PixMap^ thePixMap);
    static Macad::Occt::Graphic3d_Texture2D^ CreateDowncasted(::Graphic3d_Texture2D* instance);
}; // class Graphic3d_Texture2D

//---------------------------------------------------------------------
//  Class  Graphic3d_MediaTexture
//---------------------------------------------------------------------
/// <summary>
/// Texture adapter for Media_Frame.
/// </summary>
public ref class Graphic3d_MediaTexture sealed
    : public Macad::Occt::Graphic3d_Texture2D
{

#ifdef Include_Graphic3d_MediaTexture_h
public:
    Include_Graphic3d_MediaTexture_h
#endif

public:
    Graphic3d_MediaTexture(::Graphic3d_MediaTexture* nativeInstance)
        : Macad::Occt::Graphic3d_Texture2D( nativeInstance )
    {}

    Graphic3d_MediaTexture(::Graphic3d_MediaTexture& nativeInstance)
        : Macad::Occt::Graphic3d_Texture2D( nativeInstance )
    {}

    property ::Graphic3d_MediaTexture* NativeInstance
    {
        ::Graphic3d_MediaTexture* get()
        {
            return static_cast<::Graphic3d_MediaTexture*>(_NativeInstance);
        }
    }

public:
    /* Method skipped due to unknown mapping: void Graphic3d_MediaTexture(NCollection_Shared<Standard_Mutex theMutex, int thePlane, ) */
    /* Method skipped due to unknown mapping: void Graphic3d_MediaTexture(NCollection_Shared<Standard_Mutex theMutex, int thePlane, ) */
    /// <summary>
    /// Image reader.
    /// </summary>
    Macad::Occt::Image_PixMap^ GetImage(Macad::Occt::Image_SupportedFormats^ theSupported);
    /* Method skipped due to unknown mapping: Media_Frame Frame() */
    /* Method skipped due to unknown mapping: void SetFrame(Media_Frame theFrame, ) */
    /// <summary>
    /// Regenerate a new texture id
    /// </summary>
    void GenerateNewId();
    static Macad::Occt::Graphic3d_MediaTexture^ CreateDowncasted(::Graphic3d_MediaTexture* instance);
}; // class Graphic3d_MediaTexture

//---------------------------------------------------------------------
//  Class  Graphic3d_PriorityDefinitionError
//---------------------------------------------------------------------
public ref class Graphic3d_PriorityDefinitionError sealed
    : public Macad::Occt::Standard_OutOfRange
{

#ifdef Include_Graphic3d_PriorityDefinitionError_h
public:
    Include_Graphic3d_PriorityDefinitionError_h
#endif

public:
    Graphic3d_PriorityDefinitionError(::Graphic3d_PriorityDefinitionError* nativeInstance)
        : Macad::Occt::Standard_OutOfRange( nativeInstance )
    {}

    Graphic3d_PriorityDefinitionError(::Graphic3d_PriorityDefinitionError& nativeInstance)
        : Macad::Occt::Standard_OutOfRange( nativeInstance )
    {}

    property ::Graphic3d_PriorityDefinitionError* NativeInstance
    {
        ::Graphic3d_PriorityDefinitionError* get()
        {
            return static_cast<::Graphic3d_PriorityDefinitionError*>(_NativeInstance);
        }
    }

public:
    Graphic3d_PriorityDefinitionError();
    Graphic3d_PriorityDefinitionError(System::String^ theMessage);
    Graphic3d_PriorityDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Graphic3d_PriorityDefinitionError^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Graphic3d_PriorityDefinitionError^ NewInstance();
    static Macad::Occt::Graphic3d_PriorityDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Graphic3d_PriorityDefinitionError^ CreateDowncasted(::Graphic3d_PriorityDefinitionError* instance);
}; // class Graphic3d_PriorityDefinitionError

//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderManager
//---------------------------------------------------------------------
/// <summary>
/// This class is responsible for generation of shader programs.
/// </summary>
public ref class Graphic3d_ShaderManager sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Graphic3d_ShaderManager_h
public:
    Include_Graphic3d_ShaderManager_h
#endif

public:
    Graphic3d_ShaderManager(::Graphic3d_ShaderManager* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Graphic3d_ShaderManager(::Graphic3d_ShaderManager& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Graphic3d_ShaderManager* NativeInstance
    {
        ::Graphic3d_ShaderManager* get()
        {
            return static_cast<::Graphic3d_ShaderManager*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates new empty shader manager.
    /// </summary>
    Graphic3d_ShaderManager(Macad::Occt::Aspect_GraphicsLibrary theGapi);
    /// <summary>
    /// </summary>
    /// <returns>
    /// true if detected GL version is greater or equal to requested one.
    /// </returns>
    bool IsGapiGreaterEqual(int theVerMajor, int theVerMinor);
    /// <summary>
    /// Return GAPI version major number.
    /// </summary>
    int GapiVersionMajor();
    /// <summary>
    /// Return GAPI version minor number.
    /// </summary>
    int GapiVersionMinor();
    /// <summary>
    /// Return GAPI version major number.
    /// </summary>
    void SetGapiVersion(int theVerMajor, int theVerMinor);
    /// <summary>
    /// Return TRUE if RED channel should be used instead of ALPHA for single-channel textures
    /// (e.g. GAPI supports only GL_RED textures and not GL_ALPHA).
    /// </summary>
    bool UseRedAlpha();
    /// <summary>
    /// Set if RED channel should be used instead of ALPHA for single-channel textures.
    /// </summary>
    void SetUseRedAlpha(bool theUseRedAlpha);
    /// <summary>
    /// Return flag indicating flat shading usage; TRUE by default.
    /// </summary>
    bool HasFlatShading();
    /// <summary>
    /// Return flag indicating flat shading should reverse normal flag; FALSE by default.
    /// </summary>
    bool ToReverseDFdxSign();
    /// <summary>
    /// Set flag indicating flat shading usage.
    /// </summary>
    void SetFlatShading(bool theToUse, bool theToReverseSign);
    /// <summary>
    /// Return TRUE if depth clamping should be emulated by GLSL program; TRUE by default.
    /// </summary>
    bool ToEmulateDepthClamp();
    /// <summary>
    /// Set if depth clamping should be emulated by GLSL program.
    /// </summary>
    void SetEmulateDepthClamp(bool theToEmulate);
    /// <summary>
    /// Return TRUE if specified extension is available.
    /// </summary>
    bool HasGlslExtension(Macad::Occt::Graphic3d_GlslExtension theExt);
    /// <summary>
    /// Set if specified extension is available or not.
    /// </summary>
    void EnableGlslExtension(Macad::Occt::Graphic3d_GlslExtension theExt, bool theToEnable);
    /// <summary>
    /// Set if specified extension is available or not.
    /// </summary>
    void EnableGlslExtension(Macad::Occt::Graphic3d_GlslExtension theExt);
    static Macad::Occt::Graphic3d_ShaderManager^ CreateDowncasted(::Graphic3d_ShaderManager* instance);
}; // class Graphic3d_ShaderManager

//---------------------------------------------------------------------
//  Class  Graphic3d_StructureDefinitionError
//---------------------------------------------------------------------
public ref class Graphic3d_StructureDefinitionError sealed
    : public Macad::Occt::Standard_OutOfRange
{

#ifdef Include_Graphic3d_StructureDefinitionError_h
public:
    Include_Graphic3d_StructureDefinitionError_h
#endif

public:
    Graphic3d_StructureDefinitionError(::Graphic3d_StructureDefinitionError* nativeInstance)
        : Macad::Occt::Standard_OutOfRange( nativeInstance )
    {}

    Graphic3d_StructureDefinitionError(::Graphic3d_StructureDefinitionError& nativeInstance)
        : Macad::Occt::Standard_OutOfRange( nativeInstance )
    {}

    property ::Graphic3d_StructureDefinitionError* NativeInstance
    {
        ::Graphic3d_StructureDefinitionError* get()
        {
            return static_cast<::Graphic3d_StructureDefinitionError*>(_NativeInstance);
        }
    }

public:
    Graphic3d_StructureDefinitionError();
    Graphic3d_StructureDefinitionError(System::String^ theMessage);
    Graphic3d_StructureDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Graphic3d_StructureDefinitionError^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Graphic3d_StructureDefinitionError^ NewInstance();
    static Macad::Occt::Graphic3d_StructureDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Graphic3d_StructureDefinitionError^ CreateDowncasted(::Graphic3d_StructureDefinitionError* instance);
}; // class Graphic3d_StructureDefinitionError

//---------------------------------------------------------------------
//  Class  Graphic3d_Texture1D
//---------------------------------------------------------------------
/// <summary>
/// This is an abstract class for managing 1D textures.
/// </summary>
public ref class Graphic3d_Texture1D
    : public Macad::Occt::Graphic3d_TextureMap
{

#ifdef Include_Graphic3d_Texture1D_h
public:
    Include_Graphic3d_Texture1D_h
#endif

protected:
    Graphic3d_Texture1D(InitMode init)
        : Macad::Occt::Graphic3d_TextureMap( init )
    {}

public:
    Graphic3d_Texture1D(::Graphic3d_Texture1D* nativeInstance)
        : Macad::Occt::Graphic3d_TextureMap( nativeInstance )
    {}

    Graphic3d_Texture1D(::Graphic3d_Texture1D& nativeInstance)
        : Macad::Occt::Graphic3d_TextureMap( nativeInstance )
    {}

    property ::Graphic3d_Texture1D* NativeInstance
    {
        ::Graphic3d_Texture1D* get()
        {
            return static_cast<::Graphic3d_Texture1D*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns the name of the predefined textures or NOT_1D_UNKNOWN
    /// when the name is given as a filename.
    /// </summary>
    Macad::Occt::Graphic3d_NameOfTexture1D Name();
    /// <summary>
    /// Returns the number of predefined textures.
    /// </summary>
    static int NumberOfTextures();
    /// <summary>
    /// Returns the name of the predefined texture of rank <aRank>
    /// </summary>
    static Macad::Occt::TCollection_AsciiString^ TextureName(int aRank);
    static Macad::Occt::Graphic3d_Texture1D^ CreateDowncasted(::Graphic3d_Texture1D* instance);
}; // class Graphic3d_Texture1D

//---------------------------------------------------------------------
//  Class  Graphic3d_Texture1Dmanual
//---------------------------------------------------------------------
/// <summary>
/// This class provides the implementation of a manual 1D texture.
/// you MUST provide texture coordinates on your facets if you want to see your texture.
/// </summary>
public ref class Graphic3d_Texture1Dmanual sealed
    : public Macad::Occt::Graphic3d_Texture1D
{

#ifdef Include_Graphic3d_Texture1Dmanual_h
public:
    Include_Graphic3d_Texture1Dmanual_h
#endif

public:
    Graphic3d_Texture1Dmanual(::Graphic3d_Texture1Dmanual* nativeInstance)
        : Macad::Occt::Graphic3d_Texture1D( nativeInstance )
    {}

    Graphic3d_Texture1Dmanual(::Graphic3d_Texture1Dmanual& nativeInstance)
        : Macad::Occt::Graphic3d_Texture1D( nativeInstance )
    {}

    property ::Graphic3d_Texture1Dmanual* NativeInstance
    {
        ::Graphic3d_Texture1Dmanual* get()
        {
            return static_cast<::Graphic3d_Texture1Dmanual*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a texture from the file FileName.
    /// </summary>
    Graphic3d_Texture1Dmanual(Macad::Occt::TCollection_AsciiString^ theFileName);
    /// <summary>
    /// Create a texture from a predefined texture name set.
    /// </summary>
    Graphic3d_Texture1Dmanual(Macad::Occt::Graphic3d_NameOfTexture1D theNOT);
    /// <summary>
    /// Creates a texture from the pixmap.
    /// </summary>
    Graphic3d_Texture1Dmanual(Macad::Occt::Image_PixMap^ thePixMap);
    static Macad::Occt::Graphic3d_Texture1Dmanual^ CreateDowncasted(::Graphic3d_Texture1Dmanual* instance);
}; // class Graphic3d_Texture1Dmanual

//---------------------------------------------------------------------
//  Class  Graphic3d_Texture1Dsegment
//---------------------------------------------------------------------
/// <summary>
/// This class provides the implementation
/// of a 1D texture applicable along a segment.
/// You might use the SetSegment() method
/// to set the way the texture is "stretched" on facets.
/// </summary>
public ref class Graphic3d_Texture1Dsegment sealed
    : public Macad::Occt::Graphic3d_Texture1D
{

#ifdef Include_Graphic3d_Texture1Dsegment_h
public:
    Include_Graphic3d_Texture1Dsegment_h
#endif

public:
    Graphic3d_Texture1Dsegment(::Graphic3d_Texture1Dsegment* nativeInstance)
        : Macad::Occt::Graphic3d_Texture1D( nativeInstance )
    {}

    Graphic3d_Texture1Dsegment(::Graphic3d_Texture1Dsegment& nativeInstance)
        : Macad::Occt::Graphic3d_Texture1D( nativeInstance )
    {}

    property ::Graphic3d_Texture1Dsegment* NativeInstance
    {
        ::Graphic3d_Texture1Dsegment* get()
        {
            return static_cast<::Graphic3d_Texture1Dsegment*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a texture from a file
    /// </summary>
    Graphic3d_Texture1Dsegment(Macad::Occt::TCollection_AsciiString^ theFileName);
    /// <summary>
    /// Creates a texture from a predefined texture name set.
    /// </summary>
    Graphic3d_Texture1Dsegment(Macad::Occt::Graphic3d_NameOfTexture1D theNOT);
    /// <summary>
    /// Creates a texture from the pixmap.
    /// </summary>
    Graphic3d_Texture1Dsegment(Macad::Occt::Image_PixMap^ thePixMap);
    /// <summary>
    /// Sets the texture application bounds. Defines the way
    /// the texture is stretched across facets.
    /// Default values are <0.0, 0.0, 0.0> , <0.0, 0.0, 1.0>
    /// </summary>
    void SetSegment(float theX1, float theY1, float theZ1, float theX2, float theY2, float theZ2);
    /// <summary>
    /// Returns the values of the current segment X1, Y1, Z1 , X2, Y2, Z2.
    /// </summary>
    void Segment(float% theX1, float% theY1, float% theZ1, float% theX2, float% theY2, float% theZ2);
    static Macad::Occt::Graphic3d_Texture1Dsegment^ CreateDowncasted(::Graphic3d_Texture1Dsegment* instance);
}; // class Graphic3d_Texture1Dsegment

//---------------------------------------------------------------------
//  Class  Graphic3d_Texture2Dplane
//---------------------------------------------------------------------
/// <summary>
/// This class allows the management of a 2D texture defined from a plane equation
/// Use the SetXXX() methods for positioning the texture as you want.
/// </summary>
public ref class Graphic3d_Texture2Dplane sealed
    : public Macad::Occt::Graphic3d_Texture2D
{

#ifdef Include_Graphic3d_Texture2Dplane_h
public:
    Include_Graphic3d_Texture2Dplane_h
#endif

public:
    Graphic3d_Texture2Dplane(::Graphic3d_Texture2Dplane* nativeInstance)
        : Macad::Occt::Graphic3d_Texture2D( nativeInstance )
    {}

    Graphic3d_Texture2Dplane(::Graphic3d_Texture2Dplane& nativeInstance)
        : Macad::Occt::Graphic3d_Texture2D( nativeInstance )
    {}

    property ::Graphic3d_Texture2Dplane* NativeInstance
    {
        ::Graphic3d_Texture2Dplane* get()
        {
            return static_cast<::Graphic3d_Texture2Dplane*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a texture from a file
    /// </summary>
    Graphic3d_Texture2Dplane(Macad::Occt::TCollection_AsciiString^ theFileName);
    /// <summary>
    /// Creates a texture from a predefined texture name set.
    /// </summary>
    Graphic3d_Texture2Dplane(Macad::Occt::Graphic3d_NameOfTexture2D theNOT);
    /// <summary>
    /// Creates a texture from the pixmap.
    /// </summary>
    Graphic3d_Texture2Dplane(Macad::Occt::Image_PixMap^ thePixMap);
    /// <summary>
    /// Defines the texture projection plane for texture coordinate S
    /// default is <1.0, 0.0, 0.0, 0.0>
    /// </summary>
    void SetPlaneS(float A, float B, float C, float D);
    /// <summary>
    /// Defines the texture projection plane for texture coordinate T
    /// default is <0.0, 1.0, 0.0, 0.0>
    /// </summary>
    void SetPlaneT(float A, float B, float C, float D);
    /// <summary>
    /// Defines the texture projection plane for both S and T texture coordinate
    /// default is NOTP_XY meaning:
    /// <1.0, 0.0, 0.0, 0.0> for S
    /// and  <0.0, 1.0, 0.0, 0.0> for T
    /// </summary>
    void SetPlane(Macad::Occt::Graphic3d_NameOfTexturePlane thePlane);
    /// <summary>
    /// Defines the texture scale for the S texture coordinate
    /// much easier than recomputing the S plane equation
    /// but the result is the same
    /// default to 1.0
    /// </summary>
    void SetScaleS(float theVal);
    /// <summary>
    /// Defines the texture scale for the T texture coordinate
    /// much easier than recompution the T plane equation
    /// but the result is the same
    /// default to 1.0
    /// </summary>
    void SetScaleT(float theVal);
    /// <summary>
    /// Defines the texture translation for the S texture coordinate
    /// you can obtain the same effect by modifying the S plane
    /// equation but its not easier.
    /// default to 0.0
    /// </summary>
    void SetTranslateS(float theVal);
    /// <summary>
    /// Defines the texture translation for the T texture coordinate
    /// you can obtain the same effect by modifying the T plane
    /// equation but its not easier.
    /// default to 0.0
    /// </summary>
    void SetTranslateT(float theVal);
    /// <summary>
    /// Sets the rotation angle of the whole texture.
    /// the same result might be achieved by recomputing the
    /// S and T plane equation but it's not the easiest way...
    /// the angle is expressed in degrees
    /// default is 0.0
    /// </summary>
    void SetRotation(float theVal);
    /// <summary>
    /// Returns the current texture plane name or NOTP_UNKNOWN
    /// when the plane is user defined.
    /// </summary>
    Macad::Occt::Graphic3d_NameOfTexturePlane Plane();
    /// <summary>
    /// Returns the current texture plane S equation
    /// </summary>
    void PlaneS(float% A, float% B, float% C, float% D);
    /// <summary>
    /// Returns   the current texture plane T equation
    /// </summary>
    void PlaneT(float% A, float% B, float% C, float% D);
    /// <summary>
    /// Returns  the current texture S translation value
    /// </summary>
    void TranslateS(float% theVal);
    /// <summary>
    /// Returns the current texture T translation value
    /// </summary>
    void TranslateT(float% theVal);
    /// <summary>
    /// Returns the current texture S scale value
    /// </summary>
    void ScaleS(float% theVal);
    /// <summary>
    /// Returns the current texture T scale value
    /// </summary>
    void ScaleT(float% theVal);
    /// <summary>
    /// Returns the current texture rotation angle
    /// </summary>
    void Rotation(float% theVal);
    static Macad::Occt::Graphic3d_Texture2Dplane^ CreateDowncasted(::Graphic3d_Texture2Dplane* instance);
}; // class Graphic3d_Texture2Dplane

//---------------------------------------------------------------------
//  Class  Graphic3d_Texture3D
//---------------------------------------------------------------------
/// <summary>
/// This abstract class for managing 3D textures.
/// </summary>
public ref class Graphic3d_Texture3D sealed
    : public Macad::Occt::Graphic3d_TextureMap
{

#ifdef Include_Graphic3d_Texture3D_h
public:
    Include_Graphic3d_Texture3D_h
#endif

public:
    Graphic3d_Texture3D(::Graphic3d_Texture3D* nativeInstance)
        : Macad::Occt::Graphic3d_TextureMap( nativeInstance )
    {}

    Graphic3d_Texture3D(::Graphic3d_Texture3D& nativeInstance)
        : Macad::Occt::Graphic3d_TextureMap( nativeInstance )
    {}

    property ::Graphic3d_Texture3D* NativeInstance
    {
        ::Graphic3d_Texture3D* get()
        {
            return static_cast<::Graphic3d_Texture3D*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a texture from a file.
    /// </summary>
    Graphic3d_Texture3D(Macad::Occt::TCollection_AsciiString^ theFileName);
    /// <summary>
    /// Creates a texture from the pixmap.
    /// </summary>
    Graphic3d_Texture3D(Macad::Occt::Image_PixMap^ thePixMap);
    /// <summary>
    /// Creates a texture from a file.
    /// </summary>
    Graphic3d_Texture3D(Macad::Occt::TColStd_Array1OfAsciiString^ theFiles);
    /// <summary>
    /// Assign new image to the texture.
    /// Note that this method does not invalidate already uploaded resources - consider calling
    /// ::UpdateRevision() if needed.
    /// </summary>
    void SetImage(Macad::Occt::Image_PixMap^ thePixMap);
    /// <summary>
    /// Load and return image.
    /// </summary>
    Macad::Occt::Image_PixMap^ GetImage(Macad::Occt::Image_SupportedFormats^ theSupported);
    static Macad::Occt::Graphic3d_Texture3D^ CreateDowncasted(::Graphic3d_Texture3D* instance);
}; // class Graphic3d_Texture3D

//---------------------------------------------------------------------
//  Class  Graphic3d_TransformPersScaledAbove
//---------------------------------------------------------------------
/// <summary>
/// Transformation Zoom persistence with the above boundary of scale.
/// This persistence works only when the camera scale value is below the scale value of this
/// persistence. Otherwise, no persistence is applied.
/// </summary>
public ref class Graphic3d_TransformPersScaledAbove sealed
    : public Macad::Occt::Graphic3d_TransformPers
{

#ifdef Include_Graphic3d_TransformPersScaledAbove_h
public:
    Include_Graphic3d_TransformPersScaledAbove_h
#endif

public:
    Graphic3d_TransformPersScaledAbove(::Graphic3d_TransformPersScaledAbove* nativeInstance)
        : Macad::Occt::Graphic3d_TransformPers( nativeInstance )
    {}

    Graphic3d_TransformPersScaledAbove(::Graphic3d_TransformPersScaledAbove& nativeInstance)
        : Macad::Occt::Graphic3d_TransformPers( nativeInstance )
    {}

    property ::Graphic3d_TransformPersScaledAbove* NativeInstance
    {
        ::Graphic3d_TransformPersScaledAbove* get()
        {
            return static_cast<::Graphic3d_TransformPersScaledAbove*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Create a Zoom transformation persistence with an anchor 3D point and a scale value
    /// </summary>
    Graphic3d_TransformPersScaledAbove(double theScale, Macad::Occt::Pnt thePnt);
    /// <summary>
    /// Find scale value based on the camera position and view dimensions
    /// If the camera scale value less than the persistence scale, zoom persistence is not applied.
    /// </summary>
    /// <param name="in]">
    /// theCamera  camera definition
    /// </param>
    /// <param name="in]">
    /// theViewportWidth  the width of viewport.
    /// </param>
    /// <param name="in]">
    /// theViewportHeight  the height of viewport.
    /// </param>
    double persistentScale(Macad::Occt::Graphic3d_Camera^ theCamera, int theViewportWidth, int theViewportHeight);
    static Macad::Occt::Graphic3d_TransformPersScaledAbove^ CreateDowncasted(::Graphic3d_TransformPersScaledAbove* instance);
}; // class Graphic3d_TransformPersScaledAbove

}; // namespace Occt
}; // namespace Macad
