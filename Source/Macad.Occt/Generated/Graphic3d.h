// Generated wrapper code for package Graphic3d

#pragma once

#include "Graphic3d.h"
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
	Graphic3d_AlphaMode_Opaque = 0,
	Graphic3d_AlphaMode_Mask = 1,
	Graphic3d_AlphaMode_Blend = 2,
	Graphic3d_AlphaMode_MaskBlend = 3,
	Graphic3d_AlphaMode_BlendAuto = -1
}; // enum  class Graphic3d_AlphaMode

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfAttribute
//---------------------------------------------------------------------
/// <summary>
/// Type of attribute in Vertex Buffer
/// </summary>
public enum class Graphic3d_TypeOfAttribute
{
	Graphic3d_TOA_POS = 0,
	Graphic3d_TOA_NORM = 1,
	Graphic3d_TOA_UV = 2,
	Graphic3d_TOA_COLOR = 3,
	Graphic3d_TOA_CUSTOM = 4
}; // enum  class Graphic3d_TypeOfAttribute

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfData
//---------------------------------------------------------------------
/// <summary>
/// Type of the element in Vertex or Index Buffer
/// </summary>
public enum class Graphic3d_TypeOfData
{
	Graphic3d_TOD_USHORT = 0,
	Graphic3d_TOD_UINT = 1,
	Graphic3d_TOD_VEC2 = 2,
	Graphic3d_TOD_VEC3 = 3,
	Graphic3d_TOD_VEC4 = 4,
	Graphic3d_TOD_VEC4UB = 5,
	Graphic3d_TOD_FLOAT = 6
}; // enum  class Graphic3d_TypeOfData

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfPrimitiveArray
//---------------------------------------------------------------------
/// <summary>
/// The type of primitive array in a group in a structure.
/// </summary>
public enum class Graphic3d_TypeOfPrimitiveArray
{
	Graphic3d_TOPA_UNDEFINED = 0,
	Graphic3d_TOPA_POINTS = 1,
	Graphic3d_TOPA_SEGMENTS = 2,
	Graphic3d_TOPA_POLYLINES = 3,
	Graphic3d_TOPA_TRIANGLES = 4,
	Graphic3d_TOPA_TRIANGLESTRIPS = 5,
	Graphic3d_TOPA_TRIANGLEFANS = 6,
	Graphic3d_TOPA_LINES_ADJACENCY = 7,
	Graphic3d_TOPA_LINE_STRIP_ADJACENCY = 8,
	Graphic3d_TOPA_TRIANGLES_ADJACENCY = 9,
	Graphic3d_TOPA_TRIANGLE_STRIP_ADJACENCY = 10,
	Graphic3d_TOPA_QUADRANGLES = 11,
	Graphic3d_TOPA_QUADRANGLESTRIPS = 12,
	Graphic3d_TOPA_POLYGONS = 13
}; // enum  class Graphic3d_TypeOfPrimitiveArray

//---------------------------------------------------------------------
//  Enum  Graphic3d_FresnelModel
//---------------------------------------------------------------------
/// <summary>
/// Type of the Fresnel model.
/// </summary>
public enum class Graphic3d_FresnelModel
{
	Graphic3d_FM_SCHLICK = 0,
	Graphic3d_FM_CONSTANT = 1,
	Graphic3d_FM_CONDUCTOR = 2,
	Graphic3d_FM_DIELECTRIC = 3
}; // enum  class Graphic3d_FresnelModel

//---------------------------------------------------------------------
//  Enum  Graphic3d_NameOfMaterial
//---------------------------------------------------------------------
/// <summary>
/// List of named materials (predefined presets).
/// Each preset defines either physical (having natural color) or generic (mutable color) material (@sa Graphic3d_TypeOfMaterial).
/// </summary>
public enum class Graphic3d_NameOfMaterial
{
	Graphic3d_NameOfMaterial_Brass = 0,
	Graphic3d_NameOfMaterial_Bronze = 1,
	Graphic3d_NameOfMaterial_Copper = 2,
	Graphic3d_NameOfMaterial_Gold = 3,
	Graphic3d_NameOfMaterial_Pewter = 4,
	Graphic3d_NameOfMaterial_Plastered = 5,
	Graphic3d_NameOfMaterial_Plastified = 6,
	Graphic3d_NameOfMaterial_Silver = 7,
	Graphic3d_NameOfMaterial_Steel = 8,
	Graphic3d_NameOfMaterial_Stone = 9,
	Graphic3d_NameOfMaterial_ShinyPlastified = 10,
	Graphic3d_NameOfMaterial_Satin = 11,
	Graphic3d_NameOfMaterial_Metalized = 12,
	Graphic3d_NameOfMaterial_Ionized = 13,
	Graphic3d_NameOfMaterial_Chrome = 14,
	Graphic3d_NameOfMaterial_Aluminum = 15,
	Graphic3d_NameOfMaterial_Obsidian = 16,
	Graphic3d_NameOfMaterial_Neon = 17,
	Graphic3d_NameOfMaterial_Jade = 18,
	Graphic3d_NameOfMaterial_Charcoal = 19,
	Graphic3d_NameOfMaterial_Water = 20,
	Graphic3d_NameOfMaterial_Glass = 21,
	Graphic3d_NameOfMaterial_Diamond = 22,
	Graphic3d_NameOfMaterial_Transparent = 23,
	Graphic3d_NameOfMaterial_DEFAULT = 24,
	Graphic3d_NameOfMaterial_UserDefined = 25,
	Graphic3d_NOM_BRASS = 0,
	Graphic3d_NOM_BRONZE = 1,
	Graphic3d_NOM_COPPER = 2,
	Graphic3d_NOM_GOLD = 3,
	Graphic3d_NOM_PEWTER = 4,
	Graphic3d_NOM_PLASTER = 5,
	Graphic3d_NOM_PLASTIC = 6,
	Graphic3d_NOM_SILVER = 7,
	Graphic3d_NOM_STEEL = 8,
	Graphic3d_NOM_STONE = 9,
	Graphic3d_NOM_SHINY_PLASTIC = 10,
	Graphic3d_NOM_SATIN = 11,
	Graphic3d_NOM_METALIZED = 12,
	Graphic3d_NOM_NEON_GNC = 13,
	Graphic3d_NOM_CHROME = 14,
	Graphic3d_NOM_ALUMINIUM = 15,
	Graphic3d_NOM_OBSIDIAN = 16,
	Graphic3d_NOM_NEON_PHC = 17,
	Graphic3d_NOM_JADE = 18,
	Graphic3d_NOM_CHARCOAL = 19,
	Graphic3d_NOM_WATER = 20,
	Graphic3d_NOM_GLASS = 21,
	Graphic3d_NOM_DIAMOND = 22,
	Graphic3d_NOM_TRANSPARENT = 23,
	Graphic3d_NOM_DEFAULT = 24,
	Graphic3d_NOM_UserDefined = 25
}; // enum  class Graphic3d_NameOfMaterial

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfMaterial
//---------------------------------------------------------------------
/// <summary>
/// Types of materials specifies if a material can change color.
/// </summary>
public enum class Graphic3d_TypeOfMaterial
{
	Graphic3d_MATERIAL_ASPECT = 0,
	Graphic3d_MATERIAL_PHYSIC = 1
}; // enum  class Graphic3d_TypeOfMaterial

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfReflection
//---------------------------------------------------------------------
/// <summary>
/// Nature of the reflection of a material.
/// </summary>
public enum class Graphic3d_TypeOfReflection
{
	Graphic3d_TOR_AMBIENT = 0,
	Graphic3d_TOR_DIFFUSE = 1,
	Graphic3d_TOR_SPECULAR = 2,
	Graphic3d_TOR_EMISSION = 3
}; // enum  class Graphic3d_TypeOfReflection

//---------------------------------------------------------------------
//  Enum  Graphic3d_RenderTransparentMethod
//---------------------------------------------------------------------
/// <summary>
/// Enumerates transparency rendering methods supported by rasterization mode.
/// </summary>
public enum class Graphic3d_RenderTransparentMethod
{
	Graphic3d_RTM_BLEND_UNORDERED = 0,
	Graphic3d_RTM_BLEND_OIT = 1,
	Graphic3d_RTM_DEPTH_PEELING_OIT = 2
}; // enum  class Graphic3d_RenderTransparentMethod

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfShaderObject
//---------------------------------------------------------------------
/// <summary>
/// Type of the shader object.
/// </summary>
public enum class Graphic3d_TypeOfShaderObject
{
	Graphic3d_TOS_VERTEX = 1,
	Graphic3d_TOS_TESS_CONTROL = 2,
	Graphic3d_TOS_TESS_EVALUATION = 4,
	Graphic3d_TOS_GEOMETRY = 8,
	Graphic3d_TOS_FRAGMENT = 16,
	Graphic3d_TOS_COMPUTE = 32
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
	Graphic3d_LOTA_OFF = 0,
	Graphic3d_LOTA_FAST = 1,
	Graphic3d_LOTA_MIDDLE = 2,
	Graphic3d_LOTA_QUALITY = 3
}; // enum  class Graphic3d_LevelOfTextureAnisotropy

//---------------------------------------------------------------------
//  Enum  Graphic3d_TextureUnit
//---------------------------------------------------------------------
/// <summary>
/// Texture unit.
/// </summary>
public enum class Graphic3d_TextureUnit
{
	Graphic3d_TextureUnit_0 = 0,
	Graphic3d_TextureUnit_1 = 1,
	Graphic3d_TextureUnit_2 = 2,
	Graphic3d_TextureUnit_3 = 3,
	Graphic3d_TextureUnit_4 = 4,
	Graphic3d_TextureUnit_5 = 5,
	Graphic3d_TextureUnit_6 = 6,
	Graphic3d_TextureUnit_7 = 7,
	Graphic3d_TextureUnit_8 = 8,
	Graphic3d_TextureUnit_9 = 9,
	Graphic3d_TextureUnit_10 = 10,
	Graphic3d_TextureUnit_11 = 11,
	Graphic3d_TextureUnit_12 = 12,
	Graphic3d_TextureUnit_13 = 13,
	Graphic3d_TextureUnit_14 = 14,
	Graphic3d_TextureUnit_15 = 15,
	Graphic3d_TextureUnit_BaseColor = 0,
	Graphic3d_TextureUnit_Emissive = 1,
	Graphic3d_TextureUnit_Occlusion = 2,
	Graphic3d_TextureUnit_Normal = 3,
	Graphic3d_TextureUnit_MetallicRoughness = 4,
	Graphic3d_TextureUnit_EnvMap = 0,
	Graphic3d_TextureUnit_PointSprite = 1,
	Graphic3d_TextureUnit_DepthPeelingDepth = -6,
	Graphic3d_TextureUnit_DepthPeelingFrontColor = -5,
	Graphic3d_TextureUnit_ShadowMap = -4,
	Graphic3d_TextureUnit_PbrEnvironmentLUT = -3,
	Graphic3d_TextureUnit_PbrIblDiffuseSH = -2,
	Graphic3d_TextureUnit_PbrIblSpecular = -1
}; // enum  class Graphic3d_TextureUnit

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfTextureFilter
//---------------------------------------------------------------------
/// <summary>
/// Type of the texture filter.
/// Notice that for textures without mipmaps linear interpolation will be used instead of TOTF_BILINEAR and TOTF_TRILINEAR.
/// </summary>
public enum class Graphic3d_TypeOfTextureFilter
{
	Graphic3d_TOTF_NEAREST = 0,
	Graphic3d_TOTF_BILINEAR = 1,
	Graphic3d_TOTF_TRILINEAR = 2
}; // enum  class Graphic3d_TypeOfTextureFilter

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfTextureMode
//---------------------------------------------------------------------
/// <summary>
/// Type of the texture projection.
/// </summary>
public enum class Graphic3d_TypeOfTextureMode
{
	Graphic3d_TOTM_OBJECT = 0,
	Graphic3d_TOTM_SPHERE = 1,
	Graphic3d_TOTM_EYE = 2,
	Graphic3d_TOTM_MANUAL = 3,
	Graphic3d_TOTM_SPRITE = 4
}; // enum  class Graphic3d_TypeOfTextureMode

//---------------------------------------------------------------------
//  Enum  Graphic3d_TextureSetBits
//---------------------------------------------------------------------
/// <summary>
/// Standard texture units combination bits.
/// </summary>
public enum class Graphic3d_TextureSetBits
{
	Graphic3d_TextureSetBits_NONE = 0,
	Graphic3d_TextureSetBits_BaseColor = 1,
	Graphic3d_TextureSetBits_Emissive = 2,
	Graphic3d_TextureSetBits_Occlusion = 4,
	Graphic3d_TextureSetBits_Normal = 8,
	Graphic3d_TextureSetBits_MetallicRoughness = 16
}; // enum  class Graphic3d_TextureSetBits

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfTexture
//---------------------------------------------------------------------
/// <summary>
/// Type of the texture file format.
/// </summary>
public enum class Graphic3d_TypeOfTexture
{
	Graphic3d_TOT_1D = 0,
	Graphic3d_TOT_2D = 1,
	Graphic3d_TOT_2D_MIPMAP = 2,
	Graphic3d_TOT_CUBEMAP = 3
}; // enum  class Graphic3d_TypeOfTexture

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfBackfacingModel
//---------------------------------------------------------------------
/// <summary>
/// Modes of display of back faces in the view.
/// </summary>
public enum class Graphic3d_TypeOfBackfacingModel
{
	Graphic3d_TypeOfBackfacingModel_Auto = 0,
	Graphic3d_TypeOfBackfacingModel_DoubleSided = 1,
	Graphic3d_TypeOfBackfacingModel_BackCulled = 2,
	Graphic3d_TOBM_AUTOMATIC = 0,
	Graphic3d_TOBM_FORCE = 1,
	Graphic3d_TOBM_DISABLE = 2,
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
	Graphic3d_TypeOfShadingModel_DEFAULT = -1,
	Graphic3d_TypeOfShadingModel_Unlit = 0,
	Graphic3d_TypeOfShadingModel_PhongFacet = 1,
	Graphic3d_TypeOfShadingModel_Gouraud = 2,
	Graphic3d_TypeOfShadingModel_Phong = 3,
	Graphic3d_TypeOfShadingModel_Pbr = 4,
	Graphic3d_TypeOfShadingModel_PbrFacet = 5,
	Graphic3d_TOSM_DEFAULT = -1,
	Graphic3d_TOSM_UNLIT = 0,
	Graphic3d_TOSM_FACET = 1,
	Graphic3d_TOSM_VERTEX = 2,
	Graphic3d_TOSM_FRAGMENT = 3,
	Graphic3d_TOSM_PBR = 4,
	Graphic3d_TOSM_PBR_FACET = 5,
	Graphic3d_TOSM_NONE = 0,
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
	Graphic3d_BT_RGB = 0,
	Graphic3d_BT_RGBA = 1,
	Graphic3d_BT_Depth = 2,
	Graphic3d_BT_RGB_RayTraceHdrLeft = 3,
	Graphic3d_BT_Red = 4
}; // enum  class Graphic3d_BufferType

//---------------------------------------------------------------------
//  Enum  Graphic3d_CappingFlags
//---------------------------------------------------------------------
/// <summary>
/// Enumeration of capping flags.
/// </summary>
public enum class Graphic3d_CappingFlags
{
	Graphic3d_CappingFlags_None = 0,
	Graphic3d_CappingFlags_ObjectMaterial = 1,
	Graphic3d_CappingFlags_ObjectTexture = 2,
	Graphic3d_CappingFlags_ObjectShader = 8,
	Graphic3d_CappingFlags_ObjectAspect = 11
}; // enum  class Graphic3d_CappingFlags

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfLightSource
//---------------------------------------------------------------------
/// <summary>
/// Definition of all the type of light source.
/// </summary>
public enum class Graphic3d_TypeOfLightSource
{
	Graphic3d_TypeOfLightSource_Ambient = 0,
	Graphic3d_TypeOfLightSource_Directional = 1,
	Graphic3d_TypeOfLightSource_Positional = 2,
	Graphic3d_TypeOfLightSource_Spot = 3,
	Graphic3d_TOLS_AMBIENT = 0,
	Graphic3d_TOLS_DIRECTIONAL = 1,
	Graphic3d_TOLS_POSITIONAL = 2,
	Graphic3d_TOLS_SPOT = 3,
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
	Graphic3d_ClipState_Out = 0,
	Graphic3d_ClipState_In = 1,
	Graphic3d_ClipState_On = 2
}; // enum  class Graphic3d_ClipState

//---------------------------------------------------------------------
//  Enum  Graphic3d_TextPath
//---------------------------------------------------------------------
/// <summary>
/// Direction in which text is displayed.
/// </summary>
public enum class Graphic3d_TextPath
{
	Graphic3d_TP_UP = 0,
	Graphic3d_TP_DOWN = 1,
	Graphic3d_TP_LEFT = 2,
	Graphic3d_TP_RIGHT = 3
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
	Graphic3d_HTA_LEFT = 0,
	Graphic3d_HTA_CENTER = 1,
	Graphic3d_HTA_RIGHT = 2
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
	Graphic3d_VTA_BOTTOM = 0,
	Graphic3d_VTA_CENTER = 1,
	Graphic3d_VTA_TOP = 2,
	Graphic3d_VTA_TOPFIRSTLINE = 3
}; // enum  class Graphic3d_VerticalTextAlignment

//---------------------------------------------------------------------
//  Enum  Graphic3d_TransModeFlags
//---------------------------------------------------------------------
/// <summary>
/// Transform Persistence Mode defining whether to lock in object position, rotation and / or zooming relative to camera position.
/// </summary>
public enum class Graphic3d_TransModeFlags
{
	Graphic3d_TMF_None = 0,
	Graphic3d_TMF_ZoomPers = 2,
	Graphic3d_TMF_RotatePers = 8,
	Graphic3d_TMF_TriedronPers = 32,
	Graphic3d_TMF_2d = 64,
	Graphic3d_TMF_CameraPers = 128,
	Graphic3d_TMF_ZoomRotatePers = 10
}; // enum  class Graphic3d_TransModeFlags

//---------------------------------------------------------------------
//  Enum  Graphic3d_CubeMapSide
//---------------------------------------------------------------------
/// <summary>
/// Sides of cubemap in order of OpenGL rules
/// </summary>
public enum class Graphic3d_CubeMapSide
{
	Graphic3d_CMS_POS_X = 0,
	Graphic3d_CMS_NEG_X = 1,
	Graphic3d_CMS_POS_Y = 2,
	Graphic3d_CMS_NEG_Y = 3,
	Graphic3d_CMS_POS_Z = 4,
	Graphic3d_CMS_NEG_Z = 5
}; // enum  class Graphic3d_CubeMapSide

//---------------------------------------------------------------------
//  Enum  Graphic3d_DiagnosticInfo
//---------------------------------------------------------------------
/// <summary>
/// Diagnostic info categories bit flags.
/// </summary>
public enum class Graphic3d_DiagnosticInfo
{
	Graphic3d_DiagnosticInfo_Device = 1,
	Graphic3d_DiagnosticInfo_FrameBuffer = 2,
	Graphic3d_DiagnosticInfo_Limits = 4,
	Graphic3d_DiagnosticInfo_Memory = 8,
	Graphic3d_DiagnosticInfo_NativePlatform = 16,
	Graphic3d_DiagnosticInfo_Extensions = 32,
	Graphic3d_DiagnosticInfo_Short = 7,
	Graphic3d_DiagnosticInfo_Basic = 31,
	Graphic3d_DiagnosticInfo_Complete = 63
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
	Graphic3d_RM_RASTERIZATION = 0,
	Graphic3d_RM_RAYTRACING = 1
}; // enum  class Graphic3d_RenderingMode

//---------------------------------------------------------------------
//  Enum  Graphic3d_StereoMode
//---------------------------------------------------------------------
/// <summary>
/// This enumeration defines the list of stereoscopic output modes.
/// </summary>
public enum class Graphic3d_StereoMode
{
	Graphic3d_StereoMode_QuadBuffer = 0,
	Graphic3d_StereoMode_Anaglyph = 1,
	Graphic3d_StereoMode_RowInterlaced = 2,
	Graphic3d_StereoMode_ColumnInterlaced = 3,
	Graphic3d_StereoMode_ChessBoard = 4,
	Graphic3d_StereoMode_SideBySide = 5,
	Graphic3d_StereoMode_OverUnder = 6,
	Graphic3d_StereoMode_SoftPageFlip = 7,
	Graphic3d_StereoMode_OpenVR = 8,
	Graphic3d_StereoMode_NB = 9
}; // enum  class Graphic3d_StereoMode

//---------------------------------------------------------------------
//  Enum  Graphic3d_ToneMappingMethod
//---------------------------------------------------------------------
/// <summary>
/// Enumerates tone mapping methods.
/// </summary>
public enum class Graphic3d_ToneMappingMethod
{
	Graphic3d_ToneMappingMethod_Disabled = 0,
	Graphic3d_ToneMappingMethod_Filmic = 1
}; // enum  class Graphic3d_ToneMappingMethod

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfConnection
//---------------------------------------------------------------------
/// <summary>
/// To manage the connections between the structures.
/// </summary>
public enum class Graphic3d_TypeOfConnection
{
	Graphic3d_TOC_ANCESTOR = 0,
	Graphic3d_TOC_DESCENDANT = 1
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
	Graphic3d_TOS_WIREFRAME = 0,
	Graphic3d_TOS_SHADING = 1,
	Graphic3d_TOS_COMPUTED = 2,
	Graphic3d_TOS_ALL = 3
}; // enum  class Graphic3d_TypeOfStructure

//---------------------------------------------------------------------
//  Enum  Graphic3d_NameOfTexture2D
//---------------------------------------------------------------------
/// <summary>
/// Types of standard textures.
/// </summary>
public enum class Graphic3d_NameOfTexture2D
{
	Graphic3d_NOT_2D_MATRA = 0,
	Graphic3d_NOT_2D_ALIENSKIN = 1,
	Graphic3d_NOT_2D_BLUE_ROCK = 2,
	Graphic3d_NOT_2D_BLUEWHITE_PAPER = 3,
	Graphic3d_NOT_2D_BRUSHED = 4,
	Graphic3d_NOT_2D_BUBBLES = 5,
	Graphic3d_NOT_2D_BUMP = 6,
	Graphic3d_NOT_2D_CAST = 7,
	Graphic3d_NOT_2D_CHIPBD = 8,
	Graphic3d_NOT_2D_CLOUDS = 9,
	Graphic3d_NOT_2D_FLESH = 10,
	Graphic3d_NOT_2D_FLOOR = 11,
	Graphic3d_NOT_2D_GALVNISD = 12,
	Graphic3d_NOT_2D_GRASS = 13,
	Graphic3d_NOT_2D_ALUMINUM = 14,
	Graphic3d_NOT_2D_ROCK = 15,
	Graphic3d_NOT_2D_KNURL = 16,
	Graphic3d_NOT_2D_MAPLE = 17,
	Graphic3d_NOT_2D_MARBLE = 18,
	Graphic3d_NOT_2D_MOTTLED = 19,
	Graphic3d_NOT_2D_RAIN = 20,
	Graphic3d_NOT_2D_CHESS = 21,
	Graphic3d_NOT_2D_UNKNOWN = 22
}; // enum  class Graphic3d_NameOfTexture2D

//---------------------------------------------------------------------
//  Enum  Graphic3d_NameOfTextureEnv
//---------------------------------------------------------------------
/// <summary>
/// Types of standard textures.
/// </summary>
public enum class Graphic3d_NameOfTextureEnv
{
	Graphic3d_NOT_ENV_CLOUDS = 0,
	Graphic3d_NOT_ENV_CV = 1,
	Graphic3d_NOT_ENV_MEDIT = 2,
	Graphic3d_NOT_ENV_PEARL = 3,
	Graphic3d_NOT_ENV_SKY1 = 4,
	Graphic3d_NOT_ENV_SKY2 = 5,
	Graphic3d_NOT_ENV_LINES = 6,
	Graphic3d_NOT_ENV_ROAD = 7,
	Graphic3d_NOT_ENV_UNKNOWN = 8
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
	Graphic3d_TOA_YES = 0,
	Graphic3d_TOA_NO = 1,
	Graphic3d_TOA_COMPUTE = 2
}; // enum  class Graphic3d_TypeOfAnswer

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfBackground
//---------------------------------------------------------------------
/// <summary>
/// Describes type of view background.
/// </summary>
public enum class Graphic3d_TypeOfBackground
{
	Graphic3d_TOB_NONE = -1,
	Graphic3d_TOB_GRADIENT = 0,
	Graphic3d_TOB_TEXTURE = 1,
	Graphic3d_TOB_CUBEMAP = 2
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
	Graphic3d_TOV_WIREFRAME = 0,
	Graphic3d_TOV_SHADING = 1
}; // enum  class Graphic3d_TypeOfVisualization

//---------------------------------------------------------------------
//  Enum  Graphic3d_FrameStatsCounter
//---------------------------------------------------------------------
/// <summary>
/// Stats counter.
/// </summary>
public enum class Graphic3d_FrameStatsCounter
{
	Graphic3d_FrameStatsCounter_NbLayers = 0,
	Graphic3d_FrameStatsCounter_NbStructs = 1,
	Graphic3d_FrameStatsCounter_EstimatedBytesGeom = 2,
	Graphic3d_FrameStatsCounter_EstimatedBytesFbos = 3,
	Graphic3d_FrameStatsCounter_EstimatedBytesTextures = 4,
	Graphic3d_FrameStatsCounter_NbLayersNotCulled = 5,
	Graphic3d_FrameStatsCounter_NbStructsNotCulled = 6,
	Graphic3d_FrameStatsCounter_NbGroupsNotCulled = 7,
	Graphic3d_FrameStatsCounter_NbElemsNotCulled = 8,
	Graphic3d_FrameStatsCounter_NbElemsFillNotCulled = 9,
	Graphic3d_FrameStatsCounter_NbElemsLineNotCulled = 10,
	Graphic3d_FrameStatsCounter_NbElemsPointNotCulled = 11,
	Graphic3d_FrameStatsCounter_NbElemsTextNotCulled = 12,
	Graphic3d_FrameStatsCounter_NbTrianglesNotCulled = 13,
	Graphic3d_FrameStatsCounter_NbLinesNotCulled = 14,
	Graphic3d_FrameStatsCounter_NbPointsNotCulled = 15,
	Graphic3d_FrameStatsCounter_NbLayersImmediate = 16,
	Graphic3d_FrameStatsCounter_NbStructsImmediate = 17,
	Graphic3d_FrameStatsCounter_NbGroupsImmediate = 18,
	Graphic3d_FrameStatsCounter_NbElemsImmediate = 19,
	Graphic3d_FrameStatsCounter_NbElemsFillImmediate = 20,
	Graphic3d_FrameStatsCounter_NbElemsLineImmediate = 21,
	Graphic3d_FrameStatsCounter_NbElemsPointImmediate = 22,
	Graphic3d_FrameStatsCounter_NbElemsTextImmediate = 23,
	Graphic3d_FrameStatsCounter_NbTrianglesImmediate = 24,
	Graphic3d_FrameStatsCounter_NbLinesImmediate = 25,
	Graphic3d_FrameStatsCounter_NbPointsImmediate = 26
}; // enum  class Graphic3d_FrameStatsCounter

//---------------------------------------------------------------------
//  Enum  Graphic3d_FrameStatsTimer
//---------------------------------------------------------------------
/// <summary>
/// Timers for collecting frame performance statistics.
/// </summary>
public enum class Graphic3d_FrameStatsTimer
{
	Graphic3d_FrameStatsTimer_ElapsedFrame = 0,
	Graphic3d_FrameStatsTimer_CpuFrame = 1,
	Graphic3d_FrameStatsTimer_CpuCulling = 2,
	Graphic3d_FrameStatsTimer_CpuPicking = 3,
	Graphic3d_FrameStatsTimer_CpuDynamics = 4
}; // enum  class Graphic3d_FrameStatsTimer

//---------------------------------------------------------------------
//  Enum  Graphic3d_TypeOfLimit
//---------------------------------------------------------------------
/// <summary>
/// Type of graphic resource limit.
/// </summary>
public enum class Graphic3d_TypeOfLimit
{
	Graphic3d_TypeOfLimit_MaxNbLights = 0,
	Graphic3d_TypeOfLimit_MaxNbClipPlanes = 1,
	Graphic3d_TypeOfLimit_MaxNbViews = 2,
	Graphic3d_TypeOfLimit_MaxTextureSize = 3,
	Graphic3d_TypeOfLimit_MaxViewDumpSizeX = 4,
	Graphic3d_TypeOfLimit_MaxViewDumpSizeY = 5,
	Graphic3d_TypeOfLimit_MaxCombinedTextureUnits = 6,
	Graphic3d_TypeOfLimit_MaxMsaa = 7,
	Graphic3d_TypeOfLimit_HasPBR = 8,
	Graphic3d_TypeOfLimit_HasRayTracing = 9,
	Graphic3d_TypeOfLimit_HasRayTracingTextures = 10,
	Graphic3d_TypeOfLimit_HasRayTracingAdaptiveSampling = 11,
	Graphic3d_TypeOfLimit_HasRayTracingAdaptiveSamplingAtomic = 12,
	Graphic3d_TypeOfLimit_HasSRGB = 13,
	Graphic3d_TypeOfLimit_HasBlendedOit = 14,
	Graphic3d_TypeOfLimit_HasBlendedOitMsaa = 15,
	Graphic3d_TypeOfLimit_HasFlatShading = 16,
	Graphic3d_TypeOfLimit_HasMeshEdges = 17,
	Graphic3d_TypeOfLimit_IsWorkaroundFBO = 18,
	Graphic3d_TypeOfLimit_NB = 19
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
	Graphic3d_ASPECT_LINE = 0,
	Graphic3d_ASPECT_TEXT = 1,
	Graphic3d_ASPECT_MARKER = 2,
	Graphic3d_ASPECT_FILL_AREA = 3
}; // enum  class Graphic3d_GroupAspect

//---------------------------------------------------------------------
//  Enum  Graphic3d_NameOfTexture1D
//---------------------------------------------------------------------
/// <summary>
/// Types of standard textures.
/// </summary>
public enum class Graphic3d_NameOfTexture1D
{
	Graphic3d_NOT_1D_ELEVATION = 0,
	Graphic3d_NOT_1D_UNKNOWN = 1
}; // enum  class Graphic3d_NameOfTexture1D

//---------------------------------------------------------------------
//  Enum  Graphic3d_NameOfTexturePlane
//---------------------------------------------------------------------
/// <summary>
/// Type of the texture projection plane for both S and T texture coordinate.
/// </summary>
public enum class Graphic3d_NameOfTexturePlane
{
	Graphic3d_NOTP_XY = 0,
	Graphic3d_NOTP_YZ = 1,
	Graphic3d_NOTP_ZX = 2,
	Graphic3d_NOTP_UNKNOWN = 3
}; // enum  class Graphic3d_NameOfTexturePlane

//---------------------------------------------------------------------
//  Enum  Graphic3d_ShaderFlags
//---------------------------------------------------------------------
/// <summary>
/// Standard GLSL program combination bits.
/// </summary>
public enum class Graphic3d_ShaderFlags
{
	Graphic3d_ShaderFlags_VertColor = 1,
	Graphic3d_ShaderFlags_TextureRGB = 2,
	Graphic3d_ShaderFlags_TextureEnv = 4,
	Graphic3d_ShaderFlags_TextureNormal = 6,
	Graphic3d_ShaderFlags_PointSimple = 8,
	Graphic3d_ShaderFlags_PointSprite = 16,
	Graphic3d_ShaderFlags_PointSpriteA = 24,
	Graphic3d_ShaderFlags_StippleLine = 32,
	Graphic3d_ShaderFlags_ClipPlanes1 = 64,
	Graphic3d_ShaderFlags_ClipPlanes2 = 128,
	Graphic3d_ShaderFlags_ClipPlanesN = 192,
	Graphic3d_ShaderFlags_ClipChains = 256,
	Graphic3d_ShaderFlags_MeshEdges = 512,
	Graphic3d_ShaderFlags_AlphaTest = 1024,
	Graphic3d_ShaderFlags_WriteOit = 2048,
	Graphic3d_ShaderFlags_OitDepthPeeling = 4096,
	Graphic3d_ShaderFlags_NB = 8192,
	Graphic3d_ShaderFlags_IsPoint = 24,
	Graphic3d_ShaderFlags_HasTextures = 6,
	Graphic3d_ShaderFlags_NeedsGeomShader = 512
}; // enum  class Graphic3d_ShaderFlags

//---------------------------------------------------------------------
//  Enum  Graphic3d_GlslExtension
//---------------------------------------------------------------------
/// <summary>
/// GLSL syntax extensions.
/// </summary>
public enum class Graphic3d_GlslExtension
{
	Graphic3d_GlslExtension_GL_OES_standard_derivatives = 0,
	Graphic3d_GlslExtension_GL_EXT_shader_texture_lod = 1,
	Graphic3d_GlslExtension_GL_EXT_frag_depth = 2,
	Graphic3d_GlslExtension_GL_EXT_gpu_shader4 = 3
}; // enum  class Graphic3d_GlslExtension

//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2
//---------------------------------------------------------------------
public ref class Graphic3d_Vec2 sealed : public BaseClass<::Graphic3d_Vec2>
{

#ifdef Include_Graphic3d_Vec2_h
public:
	Include_Graphic3d_Vec2_h
#endif

public:
	Graphic3d_Vec2(::Graphic3d_Vec2* nativeInstance)
		: BaseClass<::Graphic3d_Vec2>( nativeInstance, true )
	{}

	Graphic3d_Vec2(::Graphic3d_Vec2& nativeInstance)
		: BaseClass<::Graphic3d_Vec2>( &nativeInstance, false )
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
	Graphic3d_Vec2(Macad::Occt::Graphic3d_Vec2^ theOtherVec2);
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
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_Vec2

//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2d
//---------------------------------------------------------------------
public ref class Graphic3d_Vec2d sealed : public BaseClass<::Graphic3d_Vec2d>
{

#ifdef Include_Graphic3d_Vec2d_h
public:
	Include_Graphic3d_Vec2d_h
#endif

public:
	Graphic3d_Vec2d(::Graphic3d_Vec2d* nativeInstance)
		: BaseClass<::Graphic3d_Vec2d>( nativeInstance, true )
	{}

	Graphic3d_Vec2d(::Graphic3d_Vec2d& nativeInstance)
		: BaseClass<::Graphic3d_Vec2d>( &nativeInstance, false )
	{}

	property ::Graphic3d_Vec2d* NativeInstance
	{
		::Graphic3d_Vec2d* get()
		{
			return static_cast<::Graphic3d_Vec2d*>(_NativeInstance);
		}
	}

public:
	Graphic3d_Vec2d(double theXY);
	Graphic3d_Vec2d(double theX, double theY);
	Graphic3d_Vec2d(Macad::Occt::Graphic3d_Vec2d^ theOtherVec2);
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
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_Vec2d

//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2i
//---------------------------------------------------------------------
public ref class Graphic3d_Vec2i sealed : public BaseClass<::Graphic3d_Vec2i>
{

#ifdef Include_Graphic3d_Vec2i_h
public:
	Include_Graphic3d_Vec2i_h
#endif

public:
	Graphic3d_Vec2i(::Graphic3d_Vec2i* nativeInstance)
		: BaseClass<::Graphic3d_Vec2i>( nativeInstance, true )
	{}

	Graphic3d_Vec2i(::Graphic3d_Vec2i& nativeInstance)
		: BaseClass<::Graphic3d_Vec2i>( &nativeInstance, false )
	{}

	property ::Graphic3d_Vec2i* NativeInstance
	{
		::Graphic3d_Vec2i* get()
		{
			return static_cast<::Graphic3d_Vec2i*>(_NativeInstance);
		}
	}

public:
	Graphic3d_Vec2i(int theXY);
	Graphic3d_Vec2i(int theX, int theY);
	Graphic3d_Vec2i(Macad::Occt::Graphic3d_Vec2i^ theOtherVec2);
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
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_Vec2i

//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2b
//---------------------------------------------------------------------
public ref class Graphic3d_Vec2b sealed : public BaseClass<::Graphic3d_Vec2b>
{

#ifdef Include_Graphic3d_Vec2b_h
public:
	Include_Graphic3d_Vec2b_h
#endif

public:
	Graphic3d_Vec2b(::Graphic3d_Vec2b* nativeInstance)
		: BaseClass<::Graphic3d_Vec2b>( nativeInstance, true )
	{}

	Graphic3d_Vec2b(::Graphic3d_Vec2b& nativeInstance)
		: BaseClass<::Graphic3d_Vec2b>( &nativeInstance, false )
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
	Graphic3d_Vec2b(Macad::Occt::Graphic3d_Vec2b^ theOtherVec2);
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
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_Vec2b

//---------------------------------------------------------------------
//  Class  Graphic3d_Array1OfAttribute
//---------------------------------------------------------------------
public ref class Graphic3d_Array1OfAttribute sealed : public BaseClass<::Graphic3d_Array1OfAttribute>
{

#ifdef Include_Graphic3d_Array1OfAttribute_h
public:
	Include_Graphic3d_Array1OfAttribute_h
#endif

public:
	Graphic3d_Array1OfAttribute(::Graphic3d_Array1OfAttribute* nativeInstance)
		: BaseClass<::Graphic3d_Array1OfAttribute>( nativeInstance, true )
	{}

	Graphic3d_Array1OfAttribute(::Graphic3d_Array1OfAttribute& nativeInstance)
		: BaseClass<::Graphic3d_Array1OfAttribute>( &nativeInstance, false )
	{}

	property ::Graphic3d_Array1OfAttribute* NativeInstance
	{
		::Graphic3d_Array1OfAttribute* get()
		{
			return static_cast<::Graphic3d_Array1OfAttribute*>(_NativeInstance);
		}
	}

public:
	Graphic3d_Array1OfAttribute();
	Graphic3d_Array1OfAttribute(int theLower, int theUpper);
	Graphic3d_Array1OfAttribute(Macad::Occt::Graphic3d_Array1OfAttribute^ theOther);
	Graphic3d_Array1OfAttribute(Macad::Occt::Graphic3d_Attribute^ theBegin, int theLower, int theUpper);
	void Init(Macad::Occt::Graphic3d_Attribute^ theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	Macad::Occt::Graphic3d_Array1OfAttribute^ Assign(Macad::Occt::Graphic3d_Array1OfAttribute^ theOther);
	Macad::Occt::Graphic3d_Array1OfAttribute^ Move(Macad::Occt::Graphic3d_Array1OfAttribute^ theOther);
	Macad::Occt::Graphic3d_Attribute^ First();
	Macad::Occt::Graphic3d_Attribute^ ChangeFirst();
	Macad::Occt::Graphic3d_Attribute^ Last();
	Macad::Occt::Graphic3d_Attribute^ ChangeLast();
	Macad::Occt::Graphic3d_Attribute^ Value(int theIndex);
	Macad::Occt::Graphic3d_Attribute^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Graphic3d_Attribute^ theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class Graphic3d_Array1OfAttribute

//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderObjectList
//---------------------------------------------------------------------
public ref class Graphic3d_ShaderObjectList sealed : public BaseClass<::Graphic3d_ShaderObjectList>
{

#ifdef Include_Graphic3d_ShaderObjectList_h
public:
	Include_Graphic3d_ShaderObjectList_h
#endif

public:
	Graphic3d_ShaderObjectList(::Graphic3d_ShaderObjectList* nativeInstance)
		: BaseClass<::Graphic3d_ShaderObjectList>( nativeInstance, true )
	{}

	Graphic3d_ShaderObjectList(::Graphic3d_ShaderObjectList& nativeInstance)
		: BaseClass<::Graphic3d_ShaderObjectList>( &nativeInstance, false )
	{}

	property ::Graphic3d_ShaderObjectList* NativeInstance
	{
		::Graphic3d_ShaderObjectList* get()
		{
			return static_cast<::Graphic3d_ShaderObjectList*>(_NativeInstance);
		}
	}

public:
	Graphic3d_ShaderObjectList();
	Graphic3d_ShaderObjectList(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Graphic3d_ShaderObjectList(Macad::Occt::Graphic3d_ShaderObjectList^ theOther);
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
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::Graphic3d_ShaderObject^ theItem);
	void Append(Macad::Occt::Graphic3d_ShaderObjectList^ theSeq);
	void Prepend(Macad::Occt::Graphic3d_ShaderObject^ theItem);
	void Prepend(Macad::Occt::Graphic3d_ShaderObjectList^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::Graphic3d_ShaderObject^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::Graphic3d_ShaderObjectList^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Graphic3d_ShaderObject theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::Graphic3d_ShaderObjectList^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::Graphic3d_ShaderObject^ theItem);
	void Split(int theIndex, Macad::Occt::Graphic3d_ShaderObjectList^ theSeq);
	Macad::Occt::Graphic3d_ShaderObject^ First();
	Macad::Occt::Graphic3d_ShaderObject^ ChangeFirst();
	Macad::Occt::Graphic3d_ShaderObject^ Last();
	Macad::Occt::Graphic3d_ShaderObject^ ChangeLast();
	Macad::Occt::Graphic3d_ShaderObject^ Value(int theIndex);
	Macad::Occt::Graphic3d_ShaderObject^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Graphic3d_ShaderObject^ theItem);
}; // class Graphic3d_ShaderObjectList

//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderVariableList
//---------------------------------------------------------------------
public ref class Graphic3d_ShaderVariableList sealed : public BaseClass<::Graphic3d_ShaderVariableList>
{

#ifdef Include_Graphic3d_ShaderVariableList_h
public:
	Include_Graphic3d_ShaderVariableList_h
#endif

public:
	Graphic3d_ShaderVariableList(::Graphic3d_ShaderVariableList* nativeInstance)
		: BaseClass<::Graphic3d_ShaderVariableList>( nativeInstance, true )
	{}

	Graphic3d_ShaderVariableList(::Graphic3d_ShaderVariableList& nativeInstance)
		: BaseClass<::Graphic3d_ShaderVariableList>( &nativeInstance, false )
	{}

	property ::Graphic3d_ShaderVariableList* NativeInstance
	{
		::Graphic3d_ShaderVariableList* get()
		{
			return static_cast<::Graphic3d_ShaderVariableList*>(_NativeInstance);
		}
	}

public:
	Graphic3d_ShaderVariableList();
	Graphic3d_ShaderVariableList(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Graphic3d_ShaderVariableList(Macad::Occt::Graphic3d_ShaderVariableList^ theOther);
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
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(Graphic3d_ShaderVariable theItem, ) */
	void Append(Macad::Occt::Graphic3d_ShaderVariableList^ theSeq);
	/* Method skipped due to unknown mapping: void Prepend(Graphic3d_ShaderVariable theItem, ) */
	void Prepend(Macad::Occt::Graphic3d_ShaderVariableList^ theSeq);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, Graphic3d_ShaderVariable theItem, ) */
	void InsertBefore(int theIndex, Macad::Occt::Graphic3d_ShaderVariableList^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Graphic3d_ShaderVariable theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::Graphic3d_ShaderVariableList^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, Graphic3d_ShaderVariable theItem, ) */
	void Split(int theIndex, Macad::Occt::Graphic3d_ShaderVariableList^ theSeq);
	/* Method skipped due to unknown mapping: Graphic3d_ShaderVariable First() */
	/* Method skipped due to unknown mapping: Graphic3d_ShaderVariable ChangeFirst() */
	/* Method skipped due to unknown mapping: Graphic3d_ShaderVariable Last() */
	/* Method skipped due to unknown mapping: Graphic3d_ShaderVariable ChangeLast() */
	/* Method skipped due to unknown mapping: Graphic3d_ShaderVariable Value(Standard_Integer theIndex, ) */
	/* Method skipped due to unknown mapping: Graphic3d_ShaderVariable ChangeValue(Standard_Integer theIndex, ) */
	/* Method skipped due to unknown mapping: void SetValue(Standard_Integer theIndex, Graphic3d_ShaderVariable theItem, ) */
}; // class Graphic3d_ShaderVariableList

//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderAttributeList
//---------------------------------------------------------------------
public ref class Graphic3d_ShaderAttributeList sealed : public BaseClass<::Graphic3d_ShaderAttributeList>
{

#ifdef Include_Graphic3d_ShaderAttributeList_h
public:
	Include_Graphic3d_ShaderAttributeList_h
#endif

public:
	Graphic3d_ShaderAttributeList(::Graphic3d_ShaderAttributeList* nativeInstance)
		: BaseClass<::Graphic3d_ShaderAttributeList>( nativeInstance, true )
	{}

	Graphic3d_ShaderAttributeList(::Graphic3d_ShaderAttributeList& nativeInstance)
		: BaseClass<::Graphic3d_ShaderAttributeList>( &nativeInstance, false )
	{}

	property ::Graphic3d_ShaderAttributeList* NativeInstance
	{
		::Graphic3d_ShaderAttributeList* get()
		{
			return static_cast<::Graphic3d_ShaderAttributeList*>(_NativeInstance);
		}
	}

public:
	Graphic3d_ShaderAttributeList();
	Graphic3d_ShaderAttributeList(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Graphic3d_ShaderAttributeList(Macad::Occt::Graphic3d_ShaderAttributeList^ theOther);
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
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::Graphic3d_ShaderAttribute^ theItem);
	void Append(Macad::Occt::Graphic3d_ShaderAttributeList^ theSeq);
	void Prepend(Macad::Occt::Graphic3d_ShaderAttribute^ theItem);
	void Prepend(Macad::Occt::Graphic3d_ShaderAttributeList^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::Graphic3d_ShaderAttribute^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::Graphic3d_ShaderAttributeList^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Graphic3d_ShaderAttribute theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::Graphic3d_ShaderAttributeList^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::Graphic3d_ShaderAttribute^ theItem);
	void Split(int theIndex, Macad::Occt::Graphic3d_ShaderAttributeList^ theSeq);
	Macad::Occt::Graphic3d_ShaderAttribute^ First();
	Macad::Occt::Graphic3d_ShaderAttribute^ ChangeFirst();
	Macad::Occt::Graphic3d_ShaderAttribute^ Last();
	Macad::Occt::Graphic3d_ShaderAttribute^ ChangeLast();
	Macad::Occt::Graphic3d_ShaderAttribute^ Value(int theIndex);
	Macad::Occt::Graphic3d_ShaderAttribute^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Graphic3d_ShaderAttribute^ theItem);
}; // class Graphic3d_ShaderAttributeList

//---------------------------------------------------------------------
//  Class  Graphic3d_MapOfAspectsToAspects
//---------------------------------------------------------------------
public ref class Graphic3d_MapOfAspectsToAspects sealed : public BaseClass<::Graphic3d_MapOfAspectsToAspects>
{

#ifdef Include_Graphic3d_MapOfAspectsToAspects_h
public:
	Include_Graphic3d_MapOfAspectsToAspects_h
#endif

public:
	Graphic3d_MapOfAspectsToAspects(::Graphic3d_MapOfAspectsToAspects* nativeInstance)
		: BaseClass<::Graphic3d_MapOfAspectsToAspects>( nativeInstance, true )
	{}

	Graphic3d_MapOfAspectsToAspects(::Graphic3d_MapOfAspectsToAspects& nativeInstance)
		: BaseClass<::Graphic3d_MapOfAspectsToAspects>( &nativeInstance, false )
	{}

	property ::Graphic3d_MapOfAspectsToAspects* NativeInstance
	{
		::Graphic3d_MapOfAspectsToAspects* get()
		{
			return static_cast<::Graphic3d_MapOfAspectsToAspects*>(_NativeInstance);
		}
	}

public:
	Graphic3d_MapOfAspectsToAspects();
	Graphic3d_MapOfAspectsToAspects(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Graphic3d_MapOfAspectsToAspects(int theNbBuckets);
	Graphic3d_MapOfAspectsToAspects(Macad::Occt::Graphic3d_MapOfAspectsToAspects^ theOther);
	void Exchange(Macad::Occt::Graphic3d_MapOfAspectsToAspects^ theOther);
	Macad::Occt::Graphic3d_MapOfAspectsToAspects^ Assign(Macad::Occt::Graphic3d_MapOfAspectsToAspects^ theOther);
	Macad::Occt::Graphic3d_Aspects^ Bound(Macad::Occt::Graphic3d_Aspects^ theKey, Macad::Occt::Graphic3d_Aspects^ theItem);
	bool IsBound(Macad::Occt::Graphic3d_Aspects^ theKey);
	bool UnBind(Macad::Occt::Graphic3d_Aspects^ theKey);
	Macad::Occt::Graphic3d_Aspects^ Seek(Macad::Occt::Graphic3d_Aspects^ theKey);
	Macad::Occt::Graphic3d_Aspects^ Find(Macad::Occt::Graphic3d_Aspects^ theKey);
	bool Find(Macad::Occt::Graphic3d_Aspects^ theKey, Macad::Occt::Graphic3d_Aspects^ theValue);
	Macad::Occt::Graphic3d_Aspects^ ChangeSeek(Macad::Occt::Graphic3d_Aspects^ theKey);
	Macad::Occt::Graphic3d_Aspects^ ChangeFind(Macad::Occt::Graphic3d_Aspects^ theKey);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class Graphic3d_MapOfAspectsToAspects

//---------------------------------------------------------------------
//  Class  Graphic3d_SequenceOfGroup
//---------------------------------------------------------------------
public ref class Graphic3d_SequenceOfGroup sealed : public BaseClass<::Graphic3d_SequenceOfGroup>
{

#ifdef Include_Graphic3d_SequenceOfGroup_h
public:
	Include_Graphic3d_SequenceOfGroup_h
#endif

public:
	Graphic3d_SequenceOfGroup(::Graphic3d_SequenceOfGroup* nativeInstance)
		: BaseClass<::Graphic3d_SequenceOfGroup>( nativeInstance, true )
	{}

	Graphic3d_SequenceOfGroup(::Graphic3d_SequenceOfGroup& nativeInstance)
		: BaseClass<::Graphic3d_SequenceOfGroup>( &nativeInstance, false )
	{}

	property ::Graphic3d_SequenceOfGroup* NativeInstance
	{
		::Graphic3d_SequenceOfGroup* get()
		{
			return static_cast<::Graphic3d_SequenceOfGroup*>(_NativeInstance);
		}
	}

public:
	Graphic3d_SequenceOfGroup();
	Graphic3d_SequenceOfGroup(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Graphic3d_SequenceOfGroup(Macad::Occt::Graphic3d_SequenceOfGroup^ theOther);
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
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::Graphic3d_Group^ theItem);
	void Append(Macad::Occt::Graphic3d_SequenceOfGroup^ theSeq);
	void Prepend(Macad::Occt::Graphic3d_Group^ theItem);
	void Prepend(Macad::Occt::Graphic3d_SequenceOfGroup^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::Graphic3d_Group^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::Graphic3d_SequenceOfGroup^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Graphic3d_Group theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::Graphic3d_SequenceOfGroup^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::Graphic3d_Group^ theItem);
	void Split(int theIndex, Macad::Occt::Graphic3d_SequenceOfGroup^ theSeq);
	Macad::Occt::Graphic3d_Group^ First();
	Macad::Occt::Graphic3d_Group^ ChangeFirst();
	Macad::Occt::Graphic3d_Group^ Last();
	Macad::Occt::Graphic3d_Group^ ChangeLast();
	Macad::Occt::Graphic3d_Group^ Value(int theIndex);
	Macad::Occt::Graphic3d_Group^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Graphic3d_Group^ theItem);
}; // class Graphic3d_SequenceOfGroup

//---------------------------------------------------------------------
//  Class  Graphic3d_MapOfStructure
//---------------------------------------------------------------------
public ref class Graphic3d_MapOfStructure sealed : public BaseClass<::Graphic3d_MapOfStructure>
{

#ifdef Include_Graphic3d_MapOfStructure_h
public:
	Include_Graphic3d_MapOfStructure_h
#endif

public:
	Graphic3d_MapOfStructure(::Graphic3d_MapOfStructure* nativeInstance)
		: BaseClass<::Graphic3d_MapOfStructure>( nativeInstance, true )
	{}

	Graphic3d_MapOfStructure(::Graphic3d_MapOfStructure& nativeInstance)
		: BaseClass<::Graphic3d_MapOfStructure>( &nativeInstance, false )
	{}

	property ::Graphic3d_MapOfStructure* NativeInstance
	{
		::Graphic3d_MapOfStructure* get()
		{
			return static_cast<::Graphic3d_MapOfStructure*>(_NativeInstance);
		}
	}

public:
	Graphic3d_MapOfStructure();
	Graphic3d_MapOfStructure(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Graphic3d_MapOfStructure(int theNbBuckets);
	Graphic3d_MapOfStructure(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
	void Exchange(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
	Macad::Occt::Graphic3d_MapOfStructure^ Assign(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
	Macad::Occt::Graphic3d_Structure^ Added(Macad::Occt::Graphic3d_Structure^ K);
	bool Contains(Macad::Occt::Graphic3d_Structure^ K);
	bool Remove(Macad::Occt::Graphic3d_Structure^ K);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
	bool IsEqual(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
	bool Contains(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
	void Union(Macad::Occt::Graphic3d_MapOfStructure^ theLeft, Macad::Occt::Graphic3d_MapOfStructure^ theRight);
	bool Unite(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
	bool HasIntersection(Macad::Occt::Graphic3d_MapOfStructure^ theMap);
	void Intersection(Macad::Occt::Graphic3d_MapOfStructure^ theLeft, Macad::Occt::Graphic3d_MapOfStructure^ theRight);
	bool Intersect(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
	void Subtraction(Macad::Occt::Graphic3d_MapOfStructure^ theLeft, Macad::Occt::Graphic3d_MapOfStructure^ theRight);
	bool Subtract(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
	void Difference(Macad::Occt::Graphic3d_MapOfStructure^ theLeft, Macad::Occt::Graphic3d_MapOfStructure^ theRight);
	bool Differ(Macad::Occt::Graphic3d_MapOfStructure^ theOther);
}; // class Graphic3d_MapOfStructure

//---------------------------------------------------------------------
//  Class  Graphic3d_SequenceOfStructure
//---------------------------------------------------------------------
public ref class Graphic3d_SequenceOfStructure sealed : public BaseClass<::Graphic3d_SequenceOfStructure>
{

#ifdef Include_Graphic3d_SequenceOfStructure_h
public:
	Include_Graphic3d_SequenceOfStructure_h
#endif

public:
	Graphic3d_SequenceOfStructure(::Graphic3d_SequenceOfStructure* nativeInstance)
		: BaseClass<::Graphic3d_SequenceOfStructure>( nativeInstance, true )
	{}

	Graphic3d_SequenceOfStructure(::Graphic3d_SequenceOfStructure& nativeInstance)
		: BaseClass<::Graphic3d_SequenceOfStructure>( &nativeInstance, false )
	{}

	property ::Graphic3d_SequenceOfStructure* NativeInstance
	{
		::Graphic3d_SequenceOfStructure* get()
		{
			return static_cast<::Graphic3d_SequenceOfStructure*>(_NativeInstance);
		}
	}

public:
	Graphic3d_SequenceOfStructure();
	Graphic3d_SequenceOfStructure(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Graphic3d_SequenceOfStructure(Macad::Occt::Graphic3d_SequenceOfStructure^ theOther);
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
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::Graphic3d_Structure^ theItem);
	void Append(Macad::Occt::Graphic3d_SequenceOfStructure^ theSeq);
	void Prepend(Macad::Occt::Graphic3d_Structure^ theItem);
	void Prepend(Macad::Occt::Graphic3d_SequenceOfStructure^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::Graphic3d_Structure^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::Graphic3d_SequenceOfStructure^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Graphic3d_Structure theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::Graphic3d_SequenceOfStructure^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::Graphic3d_Structure^ theItem);
	void Split(int theIndex, Macad::Occt::Graphic3d_SequenceOfStructure^ theSeq);
	Macad::Occt::Graphic3d_Structure^ First();
	Macad::Occt::Graphic3d_Structure^ ChangeFirst();
	Macad::Occt::Graphic3d_Structure^ Last();
	Macad::Occt::Graphic3d_Structure^ ChangeLast();
	Macad::Occt::Graphic3d_Structure^ Value(int theIndex);
	Macad::Occt::Graphic3d_Structure^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Graphic3d_Structure^ theItem);
}; // class Graphic3d_SequenceOfStructure

//---------------------------------------------------------------------
//  Class  Graphic3d_GraphicDriverFactoryList
//---------------------------------------------------------------------
public ref class Graphic3d_GraphicDriverFactoryList sealed : public BaseClass<::Graphic3d_GraphicDriverFactoryList>
{

#ifdef Include_Graphic3d_GraphicDriverFactoryList_h
public:
	Include_Graphic3d_GraphicDriverFactoryList_h
#endif

public:
	Graphic3d_GraphicDriverFactoryList(::Graphic3d_GraphicDriverFactoryList* nativeInstance)
		: BaseClass<::Graphic3d_GraphicDriverFactoryList>( nativeInstance, true )
	{}

	Graphic3d_GraphicDriverFactoryList(::Graphic3d_GraphicDriverFactoryList& nativeInstance)
		: BaseClass<::Graphic3d_GraphicDriverFactoryList>( &nativeInstance, false )
	{}

	property ::Graphic3d_GraphicDriverFactoryList* NativeInstance
	{
		::Graphic3d_GraphicDriverFactoryList* get()
		{
			return static_cast<::Graphic3d_GraphicDriverFactoryList*>(_NativeInstance);
		}
	}

public:
	Graphic3d_GraphicDriverFactoryList();
	Graphic3d_GraphicDriverFactoryList(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Graphic3d_GraphicDriverFactoryList(Macad::Occt::Graphic3d_GraphicDriverFactoryList^ theOther);
	int Size();
	Macad::Occt::Graphic3d_GraphicDriverFactoryList^ Assign(Macad::Occt::Graphic3d_GraphicDriverFactoryList^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::Graphic3d_GraphicDriverFactory^ First();
	Macad::Occt::Graphic3d_GraphicDriverFactory^ Last();
	Macad::Occt::Graphic3d_GraphicDriverFactory^ Append(Macad::Occt::Graphic3d_GraphicDriverFactory^ theItem);
	/* Method skipped due to unknown mapping: void Append(Graphic3d_GraphicDriverFactory theItem, Iterator theIter, ) */
	void Append(Macad::Occt::Graphic3d_GraphicDriverFactoryList^ theOther);
	Macad::Occt::Graphic3d_GraphicDriverFactory^ Prepend(Macad::Occt::Graphic3d_GraphicDriverFactory^ theItem);
	void Prepend(Macad::Occt::Graphic3d_GraphicDriverFactoryList^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: Graphic3d_GraphicDriverFactory InsertBefore(Graphic3d_GraphicDriverFactory theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(Graphic3d_GraphicDriverFactoryList theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: Graphic3d_GraphicDriverFactory InsertAfter(Graphic3d_GraphicDriverFactory theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Graphic3d_GraphicDriverFactoryList theOther, Iterator theIter, ) */
	void Reverse();
}; // class Graphic3d_GraphicDriverFactoryList

//---------------------------------------------------------------------
//  Class  Graphic3d_BufferRange
//---------------------------------------------------------------------
/// <summary>
/// Range of values defined as Start + Length pair.
/// </summary>
public ref class Graphic3d_BufferRange sealed : public BaseClass<::Graphic3d_BufferRange>
{

#ifdef Include_Graphic3d_BufferRange_h
public:
	Include_Graphic3d_BufferRange_h
#endif

public:
	Graphic3d_BufferRange(::Graphic3d_BufferRange* nativeInstance)
		: BaseClass<::Graphic3d_BufferRange>( nativeInstance, true )
	{}

	Graphic3d_BufferRange(::Graphic3d_BufferRange& nativeInstance)
		: BaseClass<::Graphic3d_BufferRange>( &nativeInstance, false )
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
	/// Empty constructor.
	/// </summary>
	Graphic3d_BufferRange();
	/// <summary>
	/// Constructor.
	/// </summary>
	Graphic3d_BufferRange(int theStart, int theLength);
	Graphic3d_BufferRange(Macad::Occt::Graphic3d_BufferRange^ parameter1);
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
public ref class Graphic3d_Attribute sealed : public BaseClass<::Graphic3d_Attribute>
{

#ifdef Include_Graphic3d_Attribute_h
public:
	Include_Graphic3d_Attribute_h
#endif

public:
	Graphic3d_Attribute(::Graphic3d_Attribute* nativeInstance)
		: BaseClass<::Graphic3d_Attribute>( nativeInstance, true )
	{}

	Graphic3d_Attribute(::Graphic3d_Attribute& nativeInstance)
		: BaseClass<::Graphic3d_Attribute>( &nativeInstance, false )
	{}

	property ::Graphic3d_Attribute* NativeInstance
	{
		::Graphic3d_Attribute* get()
		{
			return static_cast<::Graphic3d_Attribute*>(_NativeInstance);
		}
	}

public:
	Graphic3d_Attribute();
	Graphic3d_Attribute(Macad::Occt::Graphic3d_Attribute^ parameter1);
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
public ref class Graphic3d_PolygonOffset sealed : public BaseClass<::Graphic3d_PolygonOffset>
{

#ifdef Include_Graphic3d_PolygonOffset_h
public:
	Include_Graphic3d_PolygonOffset_h
#endif

public:
	Graphic3d_PolygonOffset(::Graphic3d_PolygonOffset* nativeInstance)
		: BaseClass<::Graphic3d_PolygonOffset>( nativeInstance, true )
	{}

	Graphic3d_PolygonOffset(::Graphic3d_PolygonOffset& nativeInstance)
		: BaseClass<::Graphic3d_PolygonOffset>( &nativeInstance, false )
	{}

	property ::Graphic3d_PolygonOffset* NativeInstance
	{
		::Graphic3d_PolygonOffset* get()
		{
			return static_cast<::Graphic3d_PolygonOffset*>(_NativeInstance);
		}
	}

public:
	/// <summary>
	/// Empty constructor.
	/// </summary>
	Graphic3d_PolygonOffset();
	Graphic3d_PolygonOffset(Macad::Occt::Graphic3d_PolygonOffset^ parameter1);
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_PolygonOffset

//---------------------------------------------------------------------
//  Class  Graphic3d_ValueInterface
//---------------------------------------------------------------------
/// <summary>
/// Interface for generic variable value.
/// </summary>
public ref class Graphic3d_ValueInterface : public BaseClass<::Graphic3d_ValueInterface>
{

#ifdef Include_Graphic3d_ValueInterface_h
public:
	Include_Graphic3d_ValueInterface_h
#endif

public:
	Graphic3d_ValueInterface(::Graphic3d_ValueInterface* nativeInstance)
		: BaseClass<::Graphic3d_ValueInterface>( nativeInstance, true )
	{}

	Graphic3d_ValueInterface(::Graphic3d_ValueInterface& nativeInstance)
		: BaseClass<::Graphic3d_ValueInterface>( &nativeInstance, false )
	{}

	property ::Graphic3d_ValueInterface* NativeInstance
	{
		::Graphic3d_ValueInterface* get()
		{
			return static_cast<::Graphic3d_ValueInterface*>(_NativeInstance);
		}
	}

public:
	Graphic3d_ValueInterface(Macad::Occt::Graphic3d_ValueInterface^ parameter1);
	Graphic3d_ValueInterface();
	/// <summary>
	/// Returns unique identifier of value type.
	/// </summary>
	size_t TypeID();
}; // class Graphic3d_ValueInterface

//---------------------------------------------------------------------
//  Class  Graphic3d_ZLayerSettings
//---------------------------------------------------------------------
/// <summary>
/// Structure defines list of ZLayer properties.
/// </summary>
public ref class Graphic3d_ZLayerSettings sealed : public BaseClass<::Graphic3d_ZLayerSettings>
{

#ifdef Include_Graphic3d_ZLayerSettings_h
public:
	Include_Graphic3d_ZLayerSettings_h
#endif

public:
	Graphic3d_ZLayerSettings(::Graphic3d_ZLayerSettings* nativeInstance)
		: BaseClass<::Graphic3d_ZLayerSettings>( nativeInstance, true )
	{}

	Graphic3d_ZLayerSettings(::Graphic3d_ZLayerSettings& nativeInstance)
		: BaseClass<::Graphic3d_ZLayerSettings>( &nativeInstance, false )
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
	Graphic3d_ZLayerSettings(Macad::Occt::Graphic3d_ZLayerSettings^ parameter1);
	/// <summary>
	/// Return user-provided name.
	/// </summary>
	Macad::Occt::TCollection_AsciiString^ Name();
	/// <summary>
	/// Set custom name.
	/// </summary>
	void SetName(Macad::Occt::TCollection_AsciiString^ theName);
	/// <summary>
	/// Return lights list to be used for rendering presentations within this Z-Layer; NULL by default.
	/// NULL list (but not empty list!) means that default lights assigned to the View should be used instead of per-layer lights.
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
	/// Return TRUE, if culling of distant objects (distance culling) should be performed; FALSE by default.
	/// </summary>
	/// @sa CullingDistance()
	bool HasCullingDistance();
	/// <summary>
	/// Return the distance to discard drawing of distant objects (distance from camera Eye point); by default it is Infinite (distance culling is disabled).
	/// Since camera eye definition has no strong meaning within orthographic projection, option is considered only within perspective projection.
	/// Note also that this option has effect only when frustum culling is enabled.
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
	/// Return the size to discard drawing of small objects; by default it is Infinite (size culling is disabled).
	/// Current implementation checks the length of projected diagonal of bounding box in pixels for discarding.
	/// Note that this option has effect only when frustum culling is enabled.
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
	/// Set the flag indicating the immediate layer, which should be drawn after all normal (non-immediate) layers.
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
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_ZLayerSettings

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfPrimitives
//---------------------------------------------------------------------
/// <summary>
/// This class furnish services to defined and fill an array of primitives
/// which can be passed directly to graphics rendering API.
/// 
/// The basic interface consists of the following parts:
/// 1) Specifying primitive type.
/// WARNING! Particular primitive types might be unsupported by specific hardware/graphics API (like quads and polygons).
/// It is always preferred using one of basic types having maximum compatibility:
/// Point, Triangle (or Triangle strip), Segment aka Lines (or Polyline aka Line Strip).
/// Primitive strip types can be used to reduce memory usage as alternative to Indexed arrays.
/// 2) Vertex array.
/// - Specifying the (maximum) number of vertexes within array.
/// - Specifying the vertex attributes, complementary to mandatory vertex Position (normal, color, UV texture coordinates).
/// - Defining vertex values by using various versions of AddVertex() or SetVertex*() methods.
/// 3) Index array (optional).
/// - Specifying the (maximum) number of indexes (edges).
/// - Defining index values by using AddEdge() method; the index value should be within number of defined Vertexes.
/// 
/// Indexed array allows sharing vertex data across Primitives and thus reducing memory usage,
/// since index size is much smaller then size of vertex with all its attributes.
/// It is a preferred way for defining primitive array and main alternative to Primitive Strips for optimal memory usage,
/// although it is also possible (but unusual) defining Indexed Primitive Strip.
/// Note that it is NOT possible sharing Vertex Attributes partially (e.g. share Position, but have different Normals);
/// in such cases Vertex should be entirely duplicated with all Attributes.
/// 4) Bounds array (optional).
/// - Specifying the (maximum) number of bounds.
/// - Defining bounds using AddBound() methods.
/// 
/// Bounds allow splitting Primitive Array into sub-groups.
/// This is useful only in two cases - for specifying per-group color and for restarting Primitive Strips.
/// WARNING! Bounds within Primitive Array break rendering batches into parts (additional for loops),
/// affecting rendering performance negatively (increasing CPU load).
/// </summary>
public ref class Graphic3d_ArrayOfPrimitives : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_ArrayOfPrimitives^ CreateDowncasted(::Graphic3d_ArrayOfPrimitives* instance);

public:
	Graphic3d_ArrayOfPrimitives(Macad::Occt::Graphic3d_ArrayOfPrimitives^ parameter1);
	/// <summary>
	/// Create an array of specified type.
	/// </summary>
	static Macad::Occt::Graphic3d_ArrayOfPrimitives^ CreateArray(Macad::Occt::Graphic3d_TypeOfPrimitiveArray theType, int theMaxVertexs, int theMaxEdges, int theArrayFlags);
	/// <summary>
	/// Create an array of specified type.
	/// </summary>
	static Macad::Occt::Graphic3d_ArrayOfPrimitives^ CreateArray(Macad::Occt::Graphic3d_TypeOfPrimitiveArray theType, int theMaxVertexs, int theMaxBounds, int theMaxEdges, int theArrayFlags);
	/// <summary>
	/// Returns vertex attributes buffer (colors, normals, texture coordinates).
	/// </summary>
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
	/* Method skipped due to unknown mapping: Standard_Integer AddVertex(Graphic3d_Vec3 theVertex, ) */
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
	/* Method skipped due to unknown mapping: Standard_Integer AddVertex(gp_Pnt theVertex, Graphic3d_Vec4ub theColor, ) */
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
	void SetVertice(int theIndex, Macad::Occt::Pnt theVertex);
	/// <summary>
	/// Change the vertice of rank theIndex in the array.
	/// </summary>
	void SetVertice(int theIndex, float theX, float theY, float theZ);
	/// <summary>
	/// Change the vertex color of rank theIndex in the array.
	/// </summary>
	void SetVertexColor(int theIndex, Macad::Occt::Quantity_Color^ theColor);
	/// <summary>
	/// Change the vertex color of rank theIndex in the array.
	/// </summary>
	void SetVertexColor(int theIndex, double theR, double theG, double theB);
	/// <summary>
	/// Change the vertex color of rank theIndex in the array.
	/// </summary>
	/* Method skipped due to unknown mapping: void SetVertexColor(Standard_Integer theIndex, Graphic3d_Vec4ub theColor, ) */
	/// <summary>
	/// Change the vertex color of rank theIndex> in the array.
	/// </summary>
	/// @code
	/// theColor32 = Alpha << 24 + Blue << 16 + Green << 8 + Red
	/// @endcode
	void SetVertexColor(int theIndex, int theColor32);
	/// <summary>
	/// Change the vertex normal of rank theIndex in the array.
	/// </summary>
	void SetVertexNormal(int theIndex, Macad::Occt::Dir theNormal);
	/// <summary>
	/// Change the vertex normal of rank theIndex in the array.
	/// </summary>
	void SetVertexNormal(int theIndex, double theNX, double theNY, double theNZ);
	/// <summary>
	/// Change the vertex texel of rank theIndex in the array.
	/// </summary>
	void SetVertexTexel(int theIndex, Macad::Occt::Pnt2d theTexel);
	/// <summary>
	/// Change the vertex texel of rank theIndex in the array.
	/// </summary>
	void SetVertexTexel(int theIndex, double theTX, double theTY);
	/// <summary>
	/// Returns the vertice at rank theRank from the vertex table if defined.
	/// </summary>
	Macad::Occt::Pnt Vertice(int theRank);
	/// <summary>
	/// Returns the vertice coordinates at rank theRank from the vertex table if defined.
	/// </summary>
	void Vertice(int theRank, double% theX, double% theY, double% theZ);
	/// <summary>
	/// Returns the vertex color at rank theRank from the vertex table if defined.
	/// </summary>
	Macad::Occt::Quantity_Color^ VertexColor(int theRank);
	/// <summary>
	/// Returns the vertex color at rank theIndex from the vertex table if defined.
	/// </summary>
	/* Method skipped due to unknown mapping: void VertexColor(Standard_Integer theIndex, Graphic3d_Vec4ub theColor, ) */
	/// <summary>
	/// Returns the vertex color values at rank theRank from the vertex table if defined.
	/// </summary>
	void VertexColor(int theRank, double% theR, double% theG, double% theB);
	/// <summary>
	/// Returns the vertex color values at rank theRank from the vertex table if defined.
	/// </summary>
	void VertexColor(int theRank, int% theColor);
	/// <summary>
	/// Returns the vertex normal at rank theRank from the vertex table if defined.
	/// </summary>
	Macad::Occt::Dir VertexNormal(int theRank);
	/// <summary>
	/// Returns the vertex normal coordinates at rank theRank from the vertex table if defined.
	/// </summary>
	void VertexNormal(int theRank, double% theNX, double% theNY, double% theNZ);
	/// <summary>
	/// Returns the vertex texture at rank theRank from the vertex table if defined.
	/// </summary>
	Macad::Occt::Pnt2d VertexTexel(int theRank);
	/// <summary>
	/// Returns the vertex texture coordinates at rank theRank from the vertex table if defined.
	/// </summary>
	void VertexTexel(int theRank, double% theTX, double% theTY);
	/// <summary>
	/// Returns optional index buffer.
	/// </summary>
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
	/// Convenience method, adds two vertex indices (a segment) in the range [1,VertexNumber()] in the array.
	/// </summary>
	/// <returns>
	/// the actual edges number
	/// </returns>
	int AddEdges(int theVertexIndex1, int theVertexIndex2);
	/// <summary>
	/// Convenience method, adds two vertex indices (a segment) in the range [1,VertexNumber()] in the array of segments (Graphic3d_TOPA_SEGMENTS).
	/// Raises exception if array is not of type Graphic3d_TOPA_SEGMENTS.
	/// </summary>
	/// <returns>
	/// the actual edges number
	/// </returns>
	int AddSegmentEdges(int theVertexIndex1, int theVertexIndex2);
	/// <summary>
	/// Convenience method, adds three vertex indices (a triangle) in the range [1,VertexNumber()] in the array.
	/// </summary>
	/// <returns>
	/// the actual edges number
	/// </returns>
	int AddEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3);
	/// <summary>
	/// Convenience method, adds three vertex indices of triangle in the range [1,VertexNumber()] in the array of triangles.
	/// Raises exception if array is not of type Graphic3d_TOPA_TRIANGLES.
	/// </summary>
	/// <returns>
	/// the actual edges number
	/// </returns>
	int AddTriangleEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3);
	/// <summary>
	/// Convenience method, adds three vertex indices of triangle in the range [1,VertexNumber()] in the array of triangles.
	/// Raises exception if array is not of type Graphic3d_TOPA_TRIANGLES.
	/// </summary>
	/// <returns>
	/// the actual edges number
	/// </returns>
	/* Method skipped due to unknown mapping: Standard_Integer AddTriangleEdges(Graphic3d_Vec3i theIndexes, ) */
	/// <summary>
	/// Convenience method, adds three vertex indices (4th component is ignored) of triangle in the range [1,VertexNumber()] in the array of triangles.
	/// Raises exception if array is not of type Graphic3d_TOPA_TRIANGLES.
	/// </summary>
	/// <returns>
	/// the actual edges number
	/// </returns>
	/* Method skipped due to unknown mapping: Standard_Integer AddTriangleEdges(Graphic3d_Vec4i theIndexes, ) */
	/// <summary>
	/// Convenience method, adds four vertex indices (a quad) in the range [1,VertexNumber()] in the array.
	/// </summary>
	/// <returns>
	/// the actual edges number
	/// </returns>
	int AddEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3, int theVertexIndex4);
	/// <summary>
	/// Convenience method, adds four vertex indices (a quad) in the range [1,VertexNumber()] in the array of quads.
	/// Raises exception if array is not of type Graphic3d_TOPA_QUADRANGLES.
	/// </summary>
	/// <returns>
	/// the actual edges number
	/// </returns>
	int AddQuadEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3, int theVertexIndex4);
	/// <summary>
	/// Convenience method, adds quad indices in the range [1,VertexNumber()] into array or triangles as two triangles.
	/// Raises exception if array is not of type Graphic3d_TOPA_TRIANGLES.
	/// </summary>
	/// <returns>
	/// the actual edges number
	/// </returns>
	int AddQuadTriangleEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3, int theVertexIndex4);
	/// <summary>
	/// Convenience method, adds quad indices in the range [1,VertexNumber()] into array or triangles as two triangles.
	/// Raises exception if array is not of type Graphic3d_TOPA_TRIANGLES.
	/// </summary>
	/// <returns>
	/// the actual edges number
	/// </returns>
	/* Method skipped due to unknown mapping: Standard_Integer AddQuadTriangleEdges(Graphic3d_Vec4i theIndexes, ) */
	/// <summary>
	/// Add triangle strip into indexed triangulation array.
	/// N-2 triangles are added from N input nodes.
	/// Raises exception if array is not of type Graphic3d_TOPA_TRIANGLES.
	/// </summary>
	/// <param name="theVertexLower">
	/// [in] index of first node defining triangle strip
	/// </param>
	/// <param name="theVertexUpper">
	/// [in] index of last  node defining triangle strip
	/// </param>
	void AddTriangleStripEdges(int theVertexLower, int theVertexUpper);
	/// <summary>
	/// Add triangle fan into indexed triangulation array.
	/// N-2 triangles are added from N input nodes (or N-1 with closed flag).
	/// Raises exception if array is not of type Graphic3d_TOPA_TRIANGLES.
	/// </summary>
	/// <param name="theVertexLower">
	/// [in] index of first node defining triangle fun (center)
	/// </param>
	/// <param name="theVertexUpper">
	/// [in] index of last  node defining triangle fun
	/// </param>
	/// <param name="theToClose">
	/// [in] close triangle fan (connect first and last points)
	/// </param>
	void AddTriangleFanEdges(int theVertexLower, int theVertexUpper, bool theToClose);
	/// <summary>
	/// Add line strip (polyline) into indexed segments array.
	/// N-1 segments are added from N input nodes (or N with closed flag).
	/// Raises exception if array is not of type Graphic3d_TOPA_SEGMENTS.
	/// </summary>
	/// <param name="theVertexLower">
	/// [in] index of first node defining line strip fun (center)
	/// </param>
	/// <param name="theVertexUpper">
	/// [in] index of last  node defining triangle fun
	/// </param>
	/// <param name="theToClose">
	/// [in] close triangle fan (connect first and last points)
	/// </param>
	void AddPolylineEdges(int theVertexLower, int theVertexUpper, bool theToClose);
	/// <summary>
	/// Returns optional bounds buffer.
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_BoundBuffer Bounds() */
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
}; // class Graphic3d_ArrayOfPrimitives

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfPoints
//---------------------------------------------------------------------
/// <summary>
/// Contains points array definition.
/// </summary>
public ref class Graphic3d_ArrayOfPoints sealed : public Macad::Occt::Graphic3d_ArrayOfPrimitives
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

	static Macad::Occt::Graphic3d_ArrayOfPoints^ CreateDowncasted(::Graphic3d_ArrayOfPoints* instance);

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
	///  when TRUE, AddVertex(Point,Color)  should be used for specifying vertex color
	/// </param>
	/// <param name="theHasVNormals">
	/// when TRUE, AddVertex(Point,Normal) should be used for specifying vertex normal
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
	///  when TRUE, AddVertex(Point,Color)  should be used for specifying vertex color
	/// </param>
	/// <param name="theHasVNormals">
	/// when TRUE, AddVertex(Point,Normal) should be used for specifying vertex normal
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
	///  when TRUE, AddVertex(Point,Color)  should be used for specifying vertex color
	/// </param>
	/// <param name="theHasVNormals">
	/// when TRUE, AddVertex(Point,Normal) should be used for specifying vertex normal
	/// </param>
	Graphic3d_ArrayOfPoints(int theMaxVertexs);
	Graphic3d_ArrayOfPoints(Macad::Occt::Graphic3d_ArrayOfPoints^ parameter1);
}; // class Graphic3d_ArrayOfPoints

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfPolygons
//---------------------------------------------------------------------
/// <summary>
/// Contains polygons array definition.
/// WARNING! Polygon primitives might be unsupported by graphics library.
/// Triangulation should be used instead of quads for better compatibility.
/// </summary>
public ref class Graphic3d_ArrayOfPolygons sealed : public Macad::Occt::Graphic3d_ArrayOfPrimitives
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

	static Macad::Occt::Graphic3d_ArrayOfPolygons^ CreateDowncasted(::Graphic3d_ArrayOfPolygons* instance);

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
	/// 2) Creating separate polygons defined with a predefined number of bounds and the number of vertex per bound, i.e:
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
	/// 4) Creating separate polygons defined with a predefined number of bounds and the number of edges per bound, i.e:
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
	Graphic3d_ArrayOfPolygons(Macad::Occt::Graphic3d_ArrayOfPolygons^ parameter1);
}; // class Graphic3d_ArrayOfPolygons

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfPolylines
//---------------------------------------------------------------------
/// <summary>
/// Contains polylines array definition.
/// </summary>
public ref class Graphic3d_ArrayOfPolylines sealed : public Macad::Occt::Graphic3d_ArrayOfPrimitives
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

	static Macad::Occt::Graphic3d_ArrayOfPolylines^ CreateDowncasted(::Graphic3d_ArrayOfPolylines* instance);

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
	/// 2) Creating separate polylines defined with a predefined number of bounds and the number of vertex per bound, i.e:
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
	/// 4) creating separate polylines defined with a predefined number of bounds and the number of edges per bound, i.e:
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
	/// when TRUE AddVertex(Point,Color) or AddVertex(Point,Normal,Color) should be used to specify per-vertex color values
	/// </param>
	/// <param name="theHasBColors">
	/// when TRUE AddBound(number,Color) should be used to specify sub-group color
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
	/// when TRUE AddVertex(Point,Color) or AddVertex(Point,Normal,Color) should be used to specify per-vertex color values
	/// </param>
	/// <param name="theHasBColors">
	/// when TRUE AddBound(number,Color) should be used to specify sub-group color
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
	/// when TRUE AddVertex(Point,Color) or AddVertex(Point,Normal,Color) should be used to specify per-vertex color values
	/// </param>
	/// <param name="theHasBColors">
	/// when TRUE AddBound(number,Color) should be used to specify sub-group color
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
	/// when TRUE AddVertex(Point,Color) or AddVertex(Point,Normal,Color) should be used to specify per-vertex color values
	/// </param>
	/// <param name="theHasBColors">
	/// when TRUE AddBound(number,Color) should be used to specify sub-group color
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
	/// when TRUE AddVertex(Point,Color) or AddVertex(Point,Normal,Color) should be used to specify per-vertex color values
	/// </param>
	/// <param name="theHasBColors">
	/// when TRUE AddBound(number,Color) should be used to specify sub-group color
	/// </param>
	Graphic3d_ArrayOfPolylines(int theMaxVertexs);
	Graphic3d_ArrayOfPolylines(Macad::Occt::Graphic3d_ArrayOfPolylines^ parameter1);
}; // class Graphic3d_ArrayOfPolylines

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfQuadrangles
//---------------------------------------------------------------------
/// <summary>
/// Contains quadrangles array definition.
/// WARNING! Quadrangle primitives might be unsupported by graphics library.
/// Triangulation should be used instead of quads for better compatibility.
/// </summary>
public ref class Graphic3d_ArrayOfQuadrangles sealed : public Macad::Occt::Graphic3d_ArrayOfPrimitives
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

	static Macad::Occt::Graphic3d_ArrayOfQuadrangles^ CreateDowncasted(::Graphic3d_ArrayOfQuadrangles* instance);

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
	///   defines the maximum allowed edge   number in the array (for indexed array)
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
	///   defines the maximum allowed edge   number in the array (for indexed array)
	/// </param>
	Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals, bool theHasVColors, bool theHasVTexels);
	/// <summary>
	/// Creates an array of quadrangles (Graphic3d_TOPA_QUADRANGLES).
	/// </summary>
	/// <param name="theMaxVertexs">
	/// defines the maximum allowed vertex number in the array
	/// </param>
	/// <param name="theMaxEdges">
	///   defines the maximum allowed edge   number in the array (for indexed array)
	/// </param>
	Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals, bool theHasVColors);
	/// <summary>
	/// Creates an array of quadrangles (Graphic3d_TOPA_QUADRANGLES).
	/// </summary>
	/// <param name="theMaxVertexs">
	/// defines the maximum allowed vertex number in the array
	/// </param>
	/// <param name="theMaxEdges">
	///   defines the maximum allowed edge   number in the array (for indexed array)
	/// </param>
	Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals);
	/// <summary>
	/// Creates an array of quadrangles (Graphic3d_TOPA_QUADRANGLES).
	/// </summary>
	/// <param name="theMaxVertexs">
	/// defines the maximum allowed vertex number in the array
	/// </param>
	/// <param name="theMaxEdges">
	///   defines the maximum allowed edge   number in the array (for indexed array)
	/// </param>
	Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges);
	/// <summary>
	/// Creates an array of quadrangles (Graphic3d_TOPA_QUADRANGLES).
	/// </summary>
	/// <param name="theMaxVertexs">
	/// defines the maximum allowed vertex number in the array
	/// </param>
	/// <param name="theMaxEdges">
	///   defines the maximum allowed edge   number in the array (for indexed array)
	/// </param>
	Graphic3d_ArrayOfQuadrangles(int theMaxVertexs);
	Graphic3d_ArrayOfQuadrangles(Macad::Occt::Graphic3d_ArrayOfQuadrangles^ parameter1);
}; // class Graphic3d_ArrayOfQuadrangles

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfQuadrangleStrips
//---------------------------------------------------------------------
/// <summary>
/// Contains quadrangles strip array definition.
/// WARNING! Quadrangle primitives might be unsupported by graphics library.
/// Triangulation should be used instead of quads for better compatibility.
/// </summary>
public ref class Graphic3d_ArrayOfQuadrangleStrips sealed : public Macad::Occt::Graphic3d_ArrayOfPrimitives
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

	static Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips^ CreateDowncasted(::Graphic3d_ArrayOfQuadrangleStrips* instance);

public:
	/// <summary>
	/// Creates an array of quadrangle strips (Graphic3d_TOPA_QUADRANGLESTRIPS), a polygon can be filled as:
	/// 1) Creating a single strip defined with his vertexes, i.e:
	/// </summary>
	/// @code
	/// myArray = Graphic3d_ArrayOfQuadrangleStrips (7);
	/// myArray->AddVertex (x1, y1, z1);
	/// ....
	/// myArray->AddVertex (x7, y7, z7);
	/// @endcode
	/// 2) Creating separate strips defined with a predefined number of strips and the number of vertex per strip, i.e:
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
	Graphic3d_ArrayOfQuadrangleStrips(Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips^ parameter1);
}; // class Graphic3d_ArrayOfQuadrangleStrips

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfSegments
//---------------------------------------------------------------------
/// <summary>
/// Contains segments array definition.
/// </summary>
public ref class Graphic3d_ArrayOfSegments sealed : public Macad::Occt::Graphic3d_ArrayOfPrimitives
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

	static Macad::Occt::Graphic3d_ArrayOfSegments^ CreateDowncasted(::Graphic3d_ArrayOfSegments* instance);

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
	/// when TRUE, AddVertex(Point,Color) should be used for specifying vertex color
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
	/// when TRUE, AddVertex(Point,Color) should be used for specifying vertex color
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
	/// when TRUE, AddVertex(Point,Color) should be used for specifying vertex color
	/// </param>
	Graphic3d_ArrayOfSegments(int theMaxVertexs);
	Graphic3d_ArrayOfSegments(Macad::Occt::Graphic3d_ArrayOfSegments^ parameter1);
}; // class Graphic3d_ArrayOfSegments

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfTriangleFans
//---------------------------------------------------------------------
/// <summary>
/// Contains triangles fan array definition
/// </summary>
public ref class Graphic3d_ArrayOfTriangleFans sealed : public Macad::Occt::Graphic3d_ArrayOfPrimitives
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

	static Macad::Occt::Graphic3d_ArrayOfTriangleFans^ CreateDowncasted(::Graphic3d_ArrayOfTriangleFans* instance);

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
	/// 2) creating separate fans defined with a predefined number of fans and the number of vertex per fan, i.e:
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
	Graphic3d_ArrayOfTriangleFans(Macad::Occt::Graphic3d_ArrayOfTriangleFans^ parameter1);
}; // class Graphic3d_ArrayOfTriangleFans

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfTriangles
//---------------------------------------------------------------------
/// <summary>
/// Contains triangles array definition
/// </summary>
public ref class Graphic3d_ArrayOfTriangles sealed : public Macad::Occt::Graphic3d_ArrayOfPrimitives
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

	static Macad::Occt::Graphic3d_ArrayOfTriangles^ CreateDowncasted(::Graphic3d_ArrayOfTriangles* instance);

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
	/// when TRUE,  AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
	/// vertex normals should be specified coherent to triangle orientation (defined by order of vertexes within triangle) for proper rendering
	/// </param>
	/// <param name="theHasVColors">
	///  when TRUE,  AddVertex(Point,Color) or AddVertex(Point,Normal,Color) should be used to specify vertex color
	/// </param>
	/// <param name="theHasVTexels">
	///  when TRUE,  AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel) should be used to specify vertex UV coordinates
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
	/// when TRUE,  AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
	/// vertex normals should be specified coherent to triangle orientation (defined by order of vertexes within triangle) for proper rendering
	/// </param>
	/// <param name="theHasVColors">
	///  when TRUE,  AddVertex(Point,Color) or AddVertex(Point,Normal,Color) should be used to specify vertex color
	/// </param>
	/// <param name="theHasVTexels">
	///  when TRUE,  AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel) should be used to specify vertex UV coordinates
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
	/// when TRUE,  AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
	/// vertex normals should be specified coherent to triangle orientation (defined by order of vertexes within triangle) for proper rendering
	/// </param>
	/// <param name="theHasVColors">
	///  when TRUE,  AddVertex(Point,Color) or AddVertex(Point,Normal,Color) should be used to specify vertex color
	/// </param>
	/// <param name="theHasVTexels">
	///  when TRUE,  AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel) should be used to specify vertex UV coordinates
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
	/// when TRUE,  AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
	/// vertex normals should be specified coherent to triangle orientation (defined by order of vertexes within triangle) for proper rendering
	/// </param>
	/// <param name="theHasVColors">
	///  when TRUE,  AddVertex(Point,Color) or AddVertex(Point,Normal,Color) should be used to specify vertex color
	/// </param>
	/// <param name="theHasVTexels">
	///  when TRUE,  AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel) should be used to specify vertex UV coordinates
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
	/// when TRUE,  AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
	/// vertex normals should be specified coherent to triangle orientation (defined by order of vertexes within triangle) for proper rendering
	/// </param>
	/// <param name="theHasVColors">
	///  when TRUE,  AddVertex(Point,Color) or AddVertex(Point,Normal,Color) should be used to specify vertex color
	/// </param>
	/// <param name="theHasVTexels">
	///  when TRUE,  AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel) should be used to specify vertex UV coordinates
	/// </param>
	Graphic3d_ArrayOfTriangles(int theMaxVertexs);
	Graphic3d_ArrayOfTriangles(Macad::Occt::Graphic3d_ArrayOfTriangles^ parameter1);
}; // class Graphic3d_ArrayOfTriangles

//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfTriangleStrips
//---------------------------------------------------------------------
/// <summary>
/// Contains triangles strip array definition.
/// </summary>
public ref class Graphic3d_ArrayOfTriangleStrips sealed : public Macad::Occt::Graphic3d_ArrayOfPrimitives
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

	static Macad::Occt::Graphic3d_ArrayOfTriangleStrips^ CreateDowncasted(::Graphic3d_ArrayOfTriangleStrips* instance);

public:
	/// <summary>
	/// Creates an array of triangle strips (Graphic3d_TOPA_TRIANGLESTRIPS), a polygon can be filled as:
	/// 1) Creating a single strip defined with his vertexes, i.e:
	/// </summary>
	/// @code
	/// myArray = Graphic3d_ArrayOfTriangleStrips (7);
	/// myArray->AddVertex (x1, y1, z1);
	/// ....
	/// myArray->AddVertex (x7, y7, z7);
	/// @endcode
	/// 2) Creating separate strips defined with a predefined number of strips and the number of vertex per strip, i.e:
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
	/// the number of triangle really drawn is: VertexNumber() - 2 * Min(1, BoundNumber())
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
	/// the number of triangle really drawn is: VertexNumber() - 2 * Min(1, BoundNumber())
	/// </param>
	/// <param name="theHasVNormals">
	/// when TRUE, AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
	/// vertex normals should be specified coherent to triangle orientation (defined by order of vertexes within triangle) for proper rendering
	/// </param>
	/// <param name="theHasVColors">
	///  when TRUE, AddVertex(Point,Color) or AddVertex(Point,Normal,Color) should be used to specify vertex color
	/// </param>
	/// <param name="theHasBColors">
	///  when TRUE, AddBound(number,Color) should be used to specify sub-group color
	/// </param>
	/// <param name="theHasVTexels">
	///  when TRUE, AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel) should be used to specify vertex UV coordinates
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
	/// the number of triangle really drawn is: VertexNumber() - 2 * Min(1, BoundNumber())
	/// </param>
	/// <param name="theHasVNormals">
	/// when TRUE, AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
	/// vertex normals should be specified coherent to triangle orientation (defined by order of vertexes within triangle) for proper rendering
	/// </param>
	/// <param name="theHasVColors">
	///  when TRUE, AddVertex(Point,Color) or AddVertex(Point,Normal,Color) should be used to specify vertex color
	/// </param>
	/// <param name="theHasBColors">
	///  when TRUE, AddBound(number,Color) should be used to specify sub-group color
	/// </param>
	/// <param name="theHasVTexels">
	///  when TRUE, AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel) should be used to specify vertex UV coordinates
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
	/// the number of triangle really drawn is: VertexNumber() - 2 * Min(1, BoundNumber())
	/// </param>
	/// <param name="theHasVNormals">
	/// when TRUE, AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
	/// vertex normals should be specified coherent to triangle orientation (defined by order of vertexes within triangle) for proper rendering
	/// </param>
	/// <param name="theHasVColors">
	///  when TRUE, AddVertex(Point,Color) or AddVertex(Point,Normal,Color) should be used to specify vertex color
	/// </param>
	/// <param name="theHasBColors">
	///  when TRUE, AddBound(number,Color) should be used to specify sub-group color
	/// </param>
	/// <param name="theHasVTexels">
	///  when TRUE, AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel) should be used to specify vertex UV coordinates
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
	/// the number of triangle really drawn is: VertexNumber() - 2 * Min(1, BoundNumber())
	/// </param>
	/// <param name="theHasVNormals">
	/// when TRUE, AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
	/// vertex normals should be specified coherent to triangle orientation (defined by order of vertexes within triangle) for proper rendering
	/// </param>
	/// <param name="theHasVColors">
	///  when TRUE, AddVertex(Point,Color) or AddVertex(Point,Normal,Color) should be used to specify vertex color
	/// </param>
	/// <param name="theHasBColors">
	///  when TRUE, AddBound(number,Color) should be used to specify sub-group color
	/// </param>
	/// <param name="theHasVTexels">
	///  when TRUE, AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel) should be used to specify vertex UV coordinates
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
	/// the number of triangle really drawn is: VertexNumber() - 2 * Min(1, BoundNumber())
	/// </param>
	/// <param name="theHasVNormals">
	/// when TRUE, AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
	/// vertex normals should be specified coherent to triangle orientation (defined by order of vertexes within triangle) for proper rendering
	/// </param>
	/// <param name="theHasVColors">
	///  when TRUE, AddVertex(Point,Color) or AddVertex(Point,Normal,Color) should be used to specify vertex color
	/// </param>
	/// <param name="theHasBColors">
	///  when TRUE, AddBound(number,Color) should be used to specify sub-group color
	/// </param>
	/// <param name="theHasVTexels">
	///  when TRUE, AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel) should be used to specify vertex UV coordinates
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
	/// the number of triangle really drawn is: VertexNumber() - 2 * Min(1, BoundNumber())
	/// </param>
	/// <param name="theHasVNormals">
	/// when TRUE, AddVertex(Point,Normal), AddVertex(Point,Normal,Color) or AddVertex(Point,Normal,Texel) should be used to specify vertex normal;
	/// vertex normals should be specified coherent to triangle orientation (defined by order of vertexes within triangle) for proper rendering
	/// </param>
	/// <param name="theHasVColors">
	///  when TRUE, AddVertex(Point,Color) or AddVertex(Point,Normal,Color) should be used to specify vertex color
	/// </param>
	/// <param name="theHasBColors">
	///  when TRUE, AddBound(number,Color) should be used to specify sub-group color
	/// </param>
	/// <param name="theHasVTexels">
	///  when TRUE, AddVertex(Point,Texel) or AddVertex(Point,Normal,Texel) should be used to specify vertex UV coordinates
	/// </param>
	Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs);
	Graphic3d_ArrayOfTriangleStrips(Macad::Occt::Graphic3d_ArrayOfTriangleStrips^ parameter1);
}; // class Graphic3d_ArrayOfTriangleStrips

//---------------------------------------------------------------------
//  Class  Graphic3d_MarkerImage
//---------------------------------------------------------------------
/// <summary>
/// This class is used to store bitmaps and images for markers rendering.
/// It can convert bitmap texture stored in TColStd_HArray1OfByte to Image_PixMap and vice versa.
/// </summary>
public ref class Graphic3d_MarkerImage sealed : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_MarkerImage^ CreateDowncasted(::Graphic3d_MarkerImage* instance);

public:
	/// <summary>
	/// Constructor from existing pixmap.
	/// </summary>
	/// <param name="theImage">
	/// [in] source image
	/// </param>
	/// <param name="theImageAlpha">
	/// [in] colorless image
	/// </param>
	Graphic3d_MarkerImage(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::Image_PixMap^ theImageAlpha);
	/// <summary>
	/// Constructor from existing pixmap.
	/// </summary>
	/// <param name="theImage">
	/// [in] source image
	/// </param>
	/// <param name="theImageAlpha">
	/// [in] colorless image
	/// </param>
	Graphic3d_MarkerImage(Macad::Occt::Image_PixMap^ theImage);
	/// <summary>
	/// Creates marker image from array of bytes
	/// (method for compatibility with old markers definition).
	/// </summary>
	/// <param name="theBitMap">
	/// [in] source bitmap stored as array of bytes
	/// </param>
	/// <param name="theWidth">
	///  [in] number of bits in a row
	/// </param>
	/// <param name="theHeight">
	/// [in] number of bits in a column
	/// </param>
	Graphic3d_MarkerImage(Macad::Occt::TColStd_HArray1OfByte^ theBitMap, int theWidth, int theHeight);
	Graphic3d_MarkerImage(Macad::Occt::Graphic3d_MarkerImage^ parameter1);
	/// <summary>
	/// Returns a marker image for the marker of the specified type, scale and color.
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_MarkerImage StandardMarker(Aspect_TypeOfMarker theMarkerType, Standard_ShortReal theScale, Graphic3d_Vec4 theColor, ) */
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
	/// If an instance of the class has been initialized with image, it will be converted to bitmap based on the parameter theAlphaValue.
	/// </summary>
	/// <param name="theAlphaValue">
	/// pixels in the image that have alpha value greater than
	/// or equal to this parameter will be stored in bitmap as "1",
	/// others will be stored as "0"
	/// </param>
	/// <param name="theIsTopDown">
	/// [in] flag indicating expected rows order in returned bitmap, which is bottom-up by default
	/// </param>
	Macad::Occt::TColStd_HArray1OfByte^ GetBitMapArray(double theAlphaValue, bool theIsTopDown);
	/// <summary>
	/// Return marker image as array of bytes.
	/// If an instance of the class has been initialized with image, it will be converted to bitmap based on the parameter theAlphaValue.
	/// </summary>
	/// <param name="theAlphaValue">
	/// pixels in the image that have alpha value greater than
	/// or equal to this parameter will be stored in bitmap as "1",
	/// others will be stored as "0"
	/// </param>
	/// <param name="theIsTopDown">
	/// [in] flag indicating expected rows order in returned bitmap, which is bottom-up by default
	/// </param>
	Macad::Occt::TColStd_HArray1OfByte^ GetBitMapArray(double theAlphaValue);
	/// <summary>
	/// Return marker image as array of bytes.
	/// If an instance of the class has been initialized with image, it will be converted to bitmap based on the parameter theAlphaValue.
	/// </summary>
	/// <param name="theAlphaValue">
	/// pixels in the image that have alpha value greater than
	/// or equal to this parameter will be stored in bitmap as "1",
	/// others will be stored as "0"
	/// </param>
	/// <param name="theIsTopDown">
	/// [in] flag indicating expected rows order in returned bitmap, which is bottom-up by default
	/// </param>
	Macad::Occt::TColStd_HArray1OfByte^ GetBitMapArray();
}; // class Graphic3d_MarkerImage

//---------------------------------------------------------------------
//  Class  Graphic3d_PBRMaterial
//---------------------------------------------------------------------
/// <summary>
/// Class implementing Metallic-Roughness physically based material definition
/// </summary>
public ref class Graphic3d_PBRMaterial sealed : public BaseClass<::Graphic3d_PBRMaterial>
{

#ifdef Include_Graphic3d_PBRMaterial_h
public:
	Include_Graphic3d_PBRMaterial_h
#endif

public:
	Graphic3d_PBRMaterial(::Graphic3d_PBRMaterial* nativeInstance)
		: BaseClass<::Graphic3d_PBRMaterial>( nativeInstance, true )
	{}

	Graphic3d_PBRMaterial(::Graphic3d_PBRMaterial& nativeInstance)
		: BaseClass<::Graphic3d_PBRMaterial>( &nativeInstance, false )
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
	Graphic3d_PBRMaterial(Macad::Occt::Graphic3d_PBRMaterial^ parameter1);
	/// <summary>
	/// Returns material's metallic coefficient in [0, 1] range.
	/// 1 for metals and 0 for dielectrics.
	/// It is preferable to be exactly 0 or 1. Average values are needed for textures mixing in shader.
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
	/* Method skipped due to unknown mapping: Graphic3d_Vec3 Emission() */
	/// <summary>
	/// Modifies light intensity emitted by material.
	/// </summary>
	/* Method skipped due to unknown mapping: void SetEmission(Graphic3d_Vec3 theEmission, ) */
	/// <summary>
	/// Generates material in Metallic-Roughness system from Graphic3d_BSDF.
	/// </summary>
	void SetBSDF(Macad::Occt::Graphic3d_BSDF^ theBSDF);
	/// <summary>
	/// Generates 2D look up table of scale and bias for fresnell zero coefficient.
	/// It is needed for calculation reflectance part of environment lighting.
	/// </summary>
	/// <param name="[out]">
	/// theLUT table storage (must be Image_Format_RGF).
	/// </param>
	/// <param name="[in]">
	/// theIntegralSamplesCount number of importance samples in hemisphere integral calculation for every table item.
	/// </param>
	static void GenerateEnvLUT(Macad::Occt::Image_PixMap^ theLUT, unsigned int theNbIntegralSamples);
	/// <summary>
	/// Generates 2D look up table of scale and bias for fresnell zero coefficient.
	/// It is needed for calculation reflectance part of environment lighting.
	/// </summary>
	/// <param name="[out]">
	/// theLUT table storage (must be Image_Format_RGF).
	/// </param>
	/// <param name="[in]">
	/// theIntegralSamplesCount number of importance samples in hemisphere integral calculation for every table item.
	/// </param>
	static void GenerateEnvLUT(Macad::Occt::Image_PixMap^ theLUT);
	/// <summary>
	/// Compute material roughness from common material (specular color + shininess).
	/// </summary>
	/// <param name="theSpecular">
	/// [in] specular color
	/// </param>
	/// <param name="theShiness">
	///  [in] normalized shininess coefficient within [0..1] range
	/// </param>
	/// <returns>
	/// roughness within [0..1] range
	/// </returns>
	static float RoughnessFromSpecular(Macad::Occt::Quantity_Color^ theSpecular, double theShiness);
	/// <summary>
	/// Compute material metallicity from common material (specular color).
	/// </summary>
	/// <param name="theSpecular">
	/// [in] specular color
	/// </param>
	/// <returns>
	/// metallicity within [0..1] range
	/// </returns>
	static float MetallicFromSpecular(Macad::Occt::Quantity_Color^ theSpecular);
	/// <summary>
	/// Roughness cannot be 0 in real calculations, so it returns minimal achievable level of roughness in practice
	/// </summary>
	static float MinRoughness();
	/// <summary>
	/// Shows how much times less samples can be used in certain roughness value specular IBL map generation
	/// in compare with samples number for map with roughness of 1.
	/// Specular IBL maps with less roughness values have higher resolution but require less samples for the same quality of baking.
	/// So that reducing samples number is good strategy to improve performance of baking.
	/// The samples number for specular IBL map with roughness of 1 (the maximum possible samples number) is expected to be defined as baking parameter.
	/// Samples number for other roughness values can be calculated by multiplication origin samples number by this factor.
	/// </summary>
	/// <param name="theProbability">
	/// value from 0 to 1 controlling strength of samples reducing.
	/// Bigger values result in slower reduction to provide better quality but worse performance.
	/// Value of 1 doesn't affect at all so that 1 will be returned (it can be used to disable reduction strategy).
	/// </param>
	/// <param name="theRoughness">
	/// roughness value of current generated specular IBL map (from 0 to 1).
	/// </param>
	/// <returns>
	/// factor to calculate number of samples for current specular IBL map baking.
	/// Be aware! It has no obligation to return 1 in case of roughness of 1.
	/// Be aware! It produces poor quality with small number of origin samples. In that case it is recommended to be disabled.
	/// </returns>
	static float SpecIBLMapSamplesFactor(float theProbability, float theRoughness);
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_PBRMaterial

//---------------------------------------------------------------------
//  Class  Graphic3d_Fresnel
//---------------------------------------------------------------------
/// <summary>
/// Describes Fresnel reflectance parameters.
/// </summary>
public ref class Graphic3d_Fresnel sealed : public BaseClass<::Graphic3d_Fresnel>
{

#ifdef Include_Graphic3d_Fresnel_h
public:
	Include_Graphic3d_Fresnel_h
#endif

public:
	Graphic3d_Fresnel(::Graphic3d_Fresnel* nativeInstance)
		: BaseClass<::Graphic3d_Fresnel>( nativeInstance, true )
	{}

	Graphic3d_Fresnel(::Graphic3d_Fresnel& nativeInstance)
		: BaseClass<::Graphic3d_Fresnel>( &nativeInstance, false )
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
	Graphic3d_Fresnel(Macad::Occt::Graphic3d_Fresnel^ parameter1);
	/// <summary>
	/// Creates Schlick's approximation of Fresnel factor.
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_Fresnel CreateSchlick(Graphic3d_Vec3 theSpecularColor, ) */
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
	/* Method skipped due to unknown mapping: Graphic3d_Fresnel CreateConductor(Graphic3d_Vec3 theRefractionIndex, Graphic3d_Vec3 theAbsorptionIndex, ) */
	/// <summary>
	/// Returns serialized representation of Fresnel factor.
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_Vec4 Serialize() */
	/// <summary>
	/// Returns type of Fresnel.
	/// </summary>
	Macad::Occt::Graphic3d_FresnelModel FresnelType();
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
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
public ref class Graphic3d_BSDF sealed : public BaseClass<::Graphic3d_BSDF>
{

#ifdef Include_Graphic3d_BSDF_h
public:
	Include_Graphic3d_BSDF_h
#endif

public:
	Graphic3d_BSDF(::Graphic3d_BSDF* nativeInstance)
		: BaseClass<::Graphic3d_BSDF>( nativeInstance, true )
	{}

	Graphic3d_BSDF(::Graphic3d_BSDF& nativeInstance)
		: BaseClass<::Graphic3d_BSDF>( &nativeInstance, false )
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
	Graphic3d_BSDF(Macad::Occt::Graphic3d_BSDF^ parameter1);
	/// <summary>
	/// Creates BSDF describing diffuse (Lambertian) surface.
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_BSDF CreateDiffuse(Graphic3d_Vec3 theWeight, ) */
	/// <summary>
	/// Creates BSDF describing polished metallic-like surface.
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_BSDF CreateMetallic(Graphic3d_Vec3 theWeight, Graphic3d_Fresnel theFresnel, Standard_ShortReal theRoughness, ) */
	/// <summary>
	/// Creates BSDF describing transparent object.
	/// Transparent BSDF models simple transparency without
	/// refraction (the ray passes straight through the surface).
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_BSDF CreateTransparent(Graphic3d_Vec3 theWeight, Graphic3d_Vec3 theAbsorptionColor, Standard_ShortReal theAbsorptionCoeff, ) */
	/// <summary>
	/// Creates BSDF describing glass-like object.
	/// Glass-like BSDF mixes refraction and reflection effects at
	/// grazing angles using physically-based Fresnel dielectric model.
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_BSDF CreateGlass(Graphic3d_Vec3 theWeight, Graphic3d_Vec3 theAbsorptionColor, Standard_ShortReal theAbsorptionCoeff, Standard_ShortReal theRefractionIndex, ) */
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
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
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
public ref class Graphic3d_MaterialAspect sealed : public BaseClass<::Graphic3d_MaterialAspect>
{

#ifdef Include_Graphic3d_MaterialAspect_h
public:
	Include_Graphic3d_MaterialAspect_h
#endif

public:
	Graphic3d_MaterialAspect(::Graphic3d_MaterialAspect* nativeInstance)
		: BaseClass<::Graphic3d_MaterialAspect>( nativeInstance, true )
	{}

	Graphic3d_MaterialAspect(::Graphic3d_MaterialAspect& nativeInstance)
		: BaseClass<::Graphic3d_MaterialAspect>( &nativeInstance, false )
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
	Graphic3d_MaterialAspect(Macad::Occt::Graphic3d_MaterialAspect^ parameter1);
	/// <summary>
	/// Returns the number of predefined textures.
	/// </summary>
	static int NumberOfMaterials();
	/// <summary>
	/// Returns the name of the predefined material of specified rank within range [1, NumberOfMaterials()].
	/// </summary>
	static System::String^ MaterialName(int theRank);
	/// <summary>
	/// Returns the type of the predefined material of specified rank within range [1, NumberOfMaterials()].
	/// </summary>
	static Macad::Occt::Graphic3d_TypeOfMaterial MaterialType(int theRank);
	/// <summary>
	/// Finds the material for specified name.
	/// </summary>
	/// <param name="theName">
	/// [in]  name to find
	/// </param>
	/// <param name="theMat">
	///  [out] found material
	/// </param>
	/// <returns>
	/// FALSE if name was unrecognized
	/// </returns>
	static bool MaterialFromName(System::String^ theName, Macad::Occt::Graphic3d_NameOfMaterial% theMat);
	/// <summary>
	/// Returns the material for specified name or Graphic3d_NameOfMaterial_DEFAULT if name is unknown.
	/// </summary>
	static Macad::Occt::Graphic3d_NameOfMaterial MaterialFromName(System::String^ theName);
	/// <summary>
	/// Returns the material name (within predefined enumeration).
	/// </summary>
	Macad::Occt::Graphic3d_NameOfMaterial Name();
	/// <summary>
	/// Returns the material name within predefined enumeration which has been requested (before modifications).
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
	/// WARNING! This method does NOT return color for Graphic3d_MATERIAL_ASPECT material (color is defined by Graphic3d_Aspects::InteriorColor()).
	/// </summary>
	Macad::Occt::Quantity_Color^ Color();
	/// <summary>
	/// Modifies the ambient and diffuse color of the surface.
	/// WARNING! Has no effect for Graphic3d_MATERIAL_ASPECT material (color should be set to Graphic3d_Aspects::SetInteriorColor()).
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
	/// Modifies the transparency coefficient of the surface, where 0 is opaque and 1 is fully transparent.
	/// Transparency is applicable to materials that have at least one of reflection modes (ambient, diffuse, specular or emissive) enabled.
	/// See also SetReflectionModeOn() and SetReflectionModeOff() methods.
	/// 
	/// Warning: Raises MaterialDefinitionError if given value is a negative value or greater than 1.0.
	/// </summary>
	void SetTransparency(float theValue);
	/// <summary>
	/// Modifies the alpha coefficient of the surface, where 1.0 is opaque and 0.0 is fully transparent.
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
	/// Warning: Raises MaterialDefinitionError if given value is a negative value or greater than 1.0.
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
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Deactivates the reflective properties of the surface with specified reflection type.
	/// </summary>
	void SetReflectionModeOff(Macad::Occt::Graphic3d_TypeOfReflection theType);
}; // class Graphic3d_MaterialAspect

//---------------------------------------------------------------------
//  Class  Graphic3d_HatchStyle
//---------------------------------------------------------------------
/// <summary>
/// A class that provides an API to use standard OCCT hatch styles
/// defined in Aspect_HatchStyle enum or to create custom styles
/// from a user-defined bitmap
/// </summary>
public ref class Graphic3d_HatchStyle sealed : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_HatchStyle^ CreateDowncasted(::Graphic3d_HatchStyle* instance);

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
	Graphic3d_HatchStyle(Macad::Occt::Graphic3d_HatchStyle^ parameter1);
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
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_HatchStyle

//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderAttribute
//---------------------------------------------------------------------
/// <summary>
/// Describes custom vertex shader attribute.
/// </summary>
public ref class Graphic3d_ShaderAttribute sealed : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_ShaderAttribute^ CreateDowncasted(::Graphic3d_ShaderAttribute* instance);

public:
	/// <summary>
	/// Creates new attribute.
	/// </summary>
	Graphic3d_ShaderAttribute(Macad::Occt::TCollection_AsciiString^ theName, int theLocation);
	Graphic3d_ShaderAttribute(Macad::Occt::Graphic3d_ShaderAttribute^ parameter1);
	/// <summary>
	/// Returns name of shader variable.
	/// </summary>
	Macad::Occt::TCollection_AsciiString^ Name();
	/// <summary>
	/// Returns attribute location to be bound on GLSL program linkage stage.
	/// </summary>
	int Location();
}; // class Graphic3d_ShaderAttribute

//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderObject
//---------------------------------------------------------------------
/// <summary>
/// This class is responsible for managing shader objects.
/// </summary>
public ref class Graphic3d_ShaderObject sealed : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_ShaderObject^ CreateDowncasted(::Graphic3d_ShaderObject* instance);

public:
	Graphic3d_ShaderObject(Macad::Occt::Graphic3d_ShaderObject^ parameter1);
	/// <summary>
	/// Creates new shader object from specified file.
	/// </summary>
	static Macad::Occt::Graphic3d_ShaderObject^ CreateFromFile(Macad::Occt::Graphic3d_TypeOfShaderObject theType, Macad::Occt::TCollection_AsciiString^ thePath);
	/// <summary>
	/// Creates new shader object from specified source.
	/// </summary>
	static Macad::Occt::Graphic3d_ShaderObject^ CreateFromSource(Macad::Occt::Graphic3d_TypeOfShaderObject theType, Macad::Occt::TCollection_AsciiString^ theSource);
	/// <summary>
	/// This is a preprocessor for Graphic3d_ShaderObject::CreateFromSource() function.
	/// Creates a new shader object from specified source according to list of uniforms and in/out variables.
	/// </summary>
	/// <param name="theSource">
	///      shader object source code to modify
	/// </param>
	/// <param name="theType">
	///        shader object type to create
	/// </param>
	/// <param name="theUniforms">
	///    list of uniform variables
	/// </param>
	/// <param name="theStageInOuts">
	/// list of stage in/out variables
	/// </param>
	/// <param name="theInName">
	///      name of input  variables block;
	/// can be empty for accessing each variable without block prefix
	/// (mandatory for stages accessing both inputs and outputs)
	/// </param>
	/// <param name="theOutName">
	///     name of output variables block;
	/// can be empty for accessing each variable without block prefix
	/// (mandatory for stages accessing both inputs and outputs)
	/// </param>
	/// <param name="theNbGeomInputVerts">
	/// number of geometry shader input vertexes
	/// </param>
	/* Method skipped due to unknown mapping: Graphic3d_ShaderObject CreateFromSource(TCollection_AsciiString theSource, Graphic3d_TypeOfShaderObject theType, ShaderVariableList theUniforms, ShaderVariableList theStageInOuts, TCollection_AsciiString theInName, TCollection_AsciiString theOutName, Standard_Integer theNbGeomInputVerts, ) */
	/// <summary>
	/// This is a preprocessor for Graphic3d_ShaderObject::CreateFromSource() function.
	/// Creates a new shader object from specified source according to list of uniforms and in/out variables.
	/// </summary>
	/// <param name="theSource">
	///      shader object source code to modify
	/// </param>
	/// <param name="theType">
	///        shader object type to create
	/// </param>
	/// <param name="theUniforms">
	///    list of uniform variables
	/// </param>
	/// <param name="theStageInOuts">
	/// list of stage in/out variables
	/// </param>
	/// <param name="theInName">
	///      name of input  variables block;
	/// can be empty for accessing each variable without block prefix
	/// (mandatory for stages accessing both inputs and outputs)
	/// </param>
	/// <param name="theOutName">
	///     name of output variables block;
	/// can be empty for accessing each variable without block prefix
	/// (mandatory for stages accessing both inputs and outputs)
	/// </param>
	/// <param name="theNbGeomInputVerts">
	/// number of geometry shader input vertexes
	/// </param>
	/* Method skipped due to unknown mapping: Graphic3d_ShaderObject CreateFromSource(TCollection_AsciiString theSource, Graphic3d_TypeOfShaderObject theType, ShaderVariableList theUniforms, ShaderVariableList theStageInOuts, TCollection_AsciiString theInName, TCollection_AsciiString theOutName, Standard_Integer theNbGeomInputVerts, ) */
	/// <summary>
	/// This is a preprocessor for Graphic3d_ShaderObject::CreateFromSource() function.
	/// Creates a new shader object from specified source according to list of uniforms and in/out variables.
	/// </summary>
	/// <param name="theSource">
	///      shader object source code to modify
	/// </param>
	/// <param name="theType">
	///        shader object type to create
	/// </param>
	/// <param name="theUniforms">
	///    list of uniform variables
	/// </param>
	/// <param name="theStageInOuts">
	/// list of stage in/out variables
	/// </param>
	/// <param name="theInName">
	///      name of input  variables block;
	/// can be empty for accessing each variable without block prefix
	/// (mandatory for stages accessing both inputs and outputs)
	/// </param>
	/// <param name="theOutName">
	///     name of output variables block;
	/// can be empty for accessing each variable without block prefix
	/// (mandatory for stages accessing both inputs and outputs)
	/// </param>
	/// <param name="theNbGeomInputVerts">
	/// number of geometry shader input vertexes
	/// </param>
	/* Method skipped due to unknown mapping: Graphic3d_ShaderObject CreateFromSource(TCollection_AsciiString theSource, Graphic3d_TypeOfShaderObject theType, ShaderVariableList theUniforms, ShaderVariableList theStageInOuts, TCollection_AsciiString theInName, TCollection_AsciiString theOutName, Standard_Integer theNbGeomInputVerts, ) */
	/// <summary>
	/// This is a preprocessor for Graphic3d_ShaderObject::CreateFromSource() function.
	/// Creates a new shader object from specified source according to list of uniforms and in/out variables.
	/// </summary>
	/// <param name="theSource">
	///      shader object source code to modify
	/// </param>
	/// <param name="theType">
	///        shader object type to create
	/// </param>
	/// <param name="theUniforms">
	///    list of uniform variables
	/// </param>
	/// <param name="theStageInOuts">
	/// list of stage in/out variables
	/// </param>
	/// <param name="theInName">
	///      name of input  variables block;
	/// can be empty for accessing each variable without block prefix
	/// (mandatory for stages accessing both inputs and outputs)
	/// </param>
	/// <param name="theOutName">
	///     name of output variables block;
	/// can be empty for accessing each variable without block prefix
	/// (mandatory for stages accessing both inputs and outputs)
	/// </param>
	/// <param name="theNbGeomInputVerts">
	/// number of geometry shader input vertexes
	/// </param>
	/* Method skipped due to unknown mapping: Graphic3d_ShaderObject CreateFromSource(TCollection_AsciiString theSource, Graphic3d_TypeOfShaderObject theType, ShaderVariableList theUniforms, ShaderVariableList theStageInOuts, TCollection_AsciiString theInName, TCollection_AsciiString theOutName, Standard_Integer theNbGeomInputVerts, ) */
	/// <summary>
	/// Checks if the shader object is valid or not.
	/// </summary>
	bool IsDone();
	/// <summary>
	/// Returns the full path to the shader source.
	/// </summary>
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
}; // class Graphic3d_ShaderObject

//---------------------------------------------------------------------
//  Class  Graphic3d_TextureParams
//---------------------------------------------------------------------
/// <summary>
/// This class describes texture parameters.
/// </summary>
public ref class Graphic3d_TextureParams sealed : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_TextureParams^ CreateDowncasted(::Graphic3d_TextureParams* instance);

public:
	/// <summary>
	/// Default constructor.
	/// </summary>
	Graphic3d_TextureParams();
	Graphic3d_TextureParams(Macad::Occt::Graphic3d_TextureParams^ parameter1);
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
	/* Method skipped due to unknown mapping: Graphic3d_Vec4 GenPlaneS() */
	/// <summary>
	/// </summary>
	/// <returns>
	/// texture coordinates generation plane T.
	/// </returns>
	/* Method skipped due to unknown mapping: Graphic3d_Vec4 GenPlaneT() */
	/// <summary>
	/// Setup texture coordinates generation mode.
	/// </summary>
	/* Method skipped due to unknown mapping: void SetGenMode(Graphic3d_TypeOfTextureMode theMode, Graphic3d_Vec4 thePlaneS, Graphic3d_Vec4 thePlaneT, ) */
	/// <summary>
	/// </summary>
	/// <returns>
	/// base texture mipmap level; 0 by default.
	/// </returns>
	int BaseLevel();
	/// <summary>
	/// Return maximum texture mipmap array level; 1000 by default.
	/// Real rendering limit will take into account mipmap generation flags and presence of mipmaps in loaded image.
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
}; // class Graphic3d_TextureParams

//---------------------------------------------------------------------
//  Class  Graphic3d_TextureRoot
//---------------------------------------------------------------------
/// <summary>
/// This is the texture root class enable the dialog with the GraphicDriver allows the loading of texture.
/// </summary>
public ref class Graphic3d_TextureRoot : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_TextureRoot^ CreateDowncasted(::Graphic3d_TextureRoot* instance);

public:
	Graphic3d_TextureRoot(Macad::Occt::Graphic3d_TextureRoot^ parameter1);
	/// <summary>
	/// The path to textures determined from CSF_MDTVTexturesDirectory or CASROOT environment variables.
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
	/// <summary>
	/// Returns the full path of the defined texture.
	/// It could be empty path if GetImage() is overridden to load image not from file.
	/// </summary>
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
	size_t Revision();
	/// <summary>
	/// Update image revision.
	/// Can be used for signaling changes in the texture source (e.g. file update, pixmap update)
	/// without re-creating texture source itself (since unique id should be never modified).
	/// </summary>
	void UpdateRevision();
	/// <summary>
	/// This method will be called by graphic driver each time when texture resource should be created.
	/// It is called in front of GetImage() for uploading compressed image formats natively supported by GPU.
	/// </summary>
	/// <param name="theSupported">
	/// [in] the list of supported compressed texture formats;
	/// returning image in unsupported format will result in texture upload failure
	/// </param>
	/// <returns>
	/// compressed pixmap or NULL if image is not in supported compressed format
	/// </returns>
	Macad::Occt::Image_CompressedPixMap^ GetCompressedImage(Macad::Occt::Image_SupportedFormats^ theSupported);
	/// <summary>
	/// This method will be called by graphic driver each time when texture resource should be created.
	/// Default constructors allow defining the texture source as path to texture image or directly as pixmap.
	/// If the source is defined as path, then the image will be dynamically loaded when this method is called
	/// (and no copy will be preserved in this class instance).
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
	/// When set to FALSE, such images will be interpreted as textures will be linear component values,
	/// which is useful for RGB(A) textures defining non-color properties (like Normalmap/Metalness/Roughness).
	/// </summary>
	bool IsColorMap();
	/// <summary>
	/// Set flag indicating color nature of values within the texture.
	/// </summary>
	void SetColorMap(bool theIsColor);
	/// <summary>
	/// Returns whether row's memory layout is top-down.
	/// </summary>
	bool IsTopDown();
}; // class Graphic3d_TextureRoot

//---------------------------------------------------------------------
//  Class  Graphic3d_TextureMap
//---------------------------------------------------------------------
/// <summary>
/// This is an abstract class for managing texture applyable on polygons.
/// </summary>
public ref class Graphic3d_TextureMap : public Macad::Occt::Graphic3d_TextureRoot
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

	static Macad::Occt::Graphic3d_TextureMap^ CreateDowncasted(::Graphic3d_TextureMap* instance);

public:
	Graphic3d_TextureMap(Macad::Occt::Graphic3d_TextureMap^ parameter1);
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
}; // class Graphic3d_TextureMap

//---------------------------------------------------------------------
//  Class  Graphic3d_TextureSet
//---------------------------------------------------------------------
/// <summary>
/// Class holding array of textures to be mapped as a set.
/// Textures should be defined in ascending order of texture units within the set.
/// </summary>
public ref class Graphic3d_TextureSet sealed : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_TextureSet^ CreateDowncasted(::Graphic3d_TextureSet* instance);

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
	Graphic3d_TextureSet(Macad::Occt::Graphic3d_TextureSet^ parameter1);
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
	Macad::Occt::Graphic3d_TextureMap^ Value(int theIndex);
	/// <summary>
	/// Return the texture at specified position within [0, Size()) range.
	/// </summary>
	void SetValue(int theIndex, Macad::Occt::Graphic3d_TextureMap^ theTexture);
}; // class Graphic3d_TextureSet

//---------------------------------------------------------------------
//  Class  Graphic3d_Aspects
//---------------------------------------------------------------------
/// <summary>
/// This class defines graphic attributes.
/// </summary>
public ref class Graphic3d_Aspects : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_Aspects^ CreateDowncasted(::Graphic3d_Aspects* instance);

public:
	/// <summary>
	/// Creates a context table for drawing primitives defined with the following default values:
	/// </summary>
	Graphic3d_Aspects();
	Graphic3d_Aspects(Macad::Occt::Graphic3d_Aspects^ parameter1);
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
	/// Returns the way how alpha value should be treated (Graphic3d_AlphaMode_BlendAuto by default, for backward compatibility).
	/// </summary>
	Macad::Occt::Graphic3d_AlphaMode AlphaMode();
	/// <summary>
	/// Returns alpha cutoff threshold, for discarding fragments within Graphic3d_AlphaMode_Mask mode (0.5 by default).
	/// If the alpha value is greater than or equal to this value then it is rendered as fully opaque, otherwise, it is rendered as fully transparent.
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
	/// Returns true if material properties should be distinguished for back and front faces (false by default).
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
	/* Method skipped due to unknown mapping: Graphic3d_ShaderProgram ShaderProgram() */
	/// <summary>
	/// Sets up OpenGL/GLSL shader program.
	/// </summary>
	/* Method skipped due to unknown mapping: void SetShaderProgram(Graphic3d_ShaderProgram theProgram, ) */
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
	unsigned short LinePattern();
	/// <summary>
	/// Modifies the stipple line pattern, and changes line type to Aspect_TOL_USERDEFINED for non-standard pattern.
	/// </summary>
	void SetLinePattern(unsigned short thePattern);
	/// <summary>
	/// Return a multiplier for each bit in the line stipple pattern within [1, 256] range; 1 by default.
	/// </summary>
	unsigned short LineStippleFactor();
	/// <summary>
	/// Set a multiplier for each bit in the line stipple pattern.
	/// </summary>
	void SetLineStippleFactor(unsigned short theFactor);
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
	static unsigned short DefaultLinePatternForType(Macad::Occt::Aspect_TypeOfLine theType);
	/// <summary>
	/// Return line type for stipple line pattern.
	/// </summary>
	static Macad::Occt::Aspect_TypeOfLine DefaultLineTypeForPattern(unsigned short thePattern);
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
	/// Returns TRUE if marker should be drawn using marker sprite (either user-provided or generated).
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
	/// <summary>
	/// Returns text FontAspect
	/// </summary>
	/* Method skipped due to unknown mapping: Font_FontAspect TextFontAspect() */
	/// <summary>
	/// Turns usage of Aspect text
	/// </summary>
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
	/// Graphics hardware works mostly with triangles, so that wireframe presentation will draw triangle edges by default.
	/// This flag allows rendering wireframe presentation of quad-only array split into triangles.
	/// For this, quads should be split in specific order, so that the quad diagonal (to be NOT rendered) goes first:
	/// 1------2
	/// /      /   Triangle #1: 2-0-1; Triangle #2: 0-2-3
	/// 0------3
	/// </summary>
	bool ToSkipFirstEdge();
	/// <summary>
	/// Set skip first triangle edge flag for drawing wireframe presentation of quads array split into triangles.
	/// </summary>
	void SetSkipFirstEdge(bool theToSkipFirstEdge);
	/// <summary>
	/// Returns TRUE if silhouette (outline) should be drawn (with edge color and width); FALSE by default.
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
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	bool ToSuppressBackFaces();
	void SetSuppressBackFaces(bool theToSuppress);
	bool BackFace();
	void AllowBackFace();
	void SuppressBackFace();
}; // class Graphic3d_Aspects

//---------------------------------------------------------------------
//  Class  Graphic3d_AspectFillArea3d
//---------------------------------------------------------------------
/// <summary>
/// This class defines graphic attributes for opaque 3d primitives (polygons, triangles, quadrilaterals).
/// </summary>
public ref class Graphic3d_AspectFillArea3d sealed : public Macad::Occt::Graphic3d_Aspects
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

	static Macad::Occt::Graphic3d_AspectFillArea3d^ CreateDowncasted(::Graphic3d_AspectFillArea3d* instance);

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
	Graphic3d_AspectFillArea3d(Macad::Occt::Graphic3d_AspectFillArea3d^ parameter1);
	bool Edge();
}; // class Graphic3d_AspectFillArea3d

//---------------------------------------------------------------------
//  Class  Graphic3d_AspectLine3d
//---------------------------------------------------------------------
/// <summary>
/// Creates and updates a group of attributes for 3d line primitives.
/// This group contains the color, the type of line, and its thickness.
/// </summary>
public ref class Graphic3d_AspectLine3d sealed : public Macad::Occt::Graphic3d_Aspects
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

	static Macad::Occt::Graphic3d_AspectLine3d^ CreateDowncasted(::Graphic3d_AspectLine3d* instance);

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
	/// The width of the line is determined by applying the line width scale factor to this nominal line width.
	/// The supported line widths vary by 1-pixel units.
	/// </summary>
	Graphic3d_AspectLine3d(Macad::Occt::Quantity_Color^ theColor, Macad::Occt::Aspect_TypeOfLine theType, double theWidth);
	Graphic3d_AspectLine3d(Macad::Occt::Graphic3d_AspectLine3d^ parameter1);
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
}; // class Graphic3d_AspectLine3d

//---------------------------------------------------------------------
//  Class  Graphic3d_AspectMarker3d
//---------------------------------------------------------------------
/// <summary>
/// Creates and updates an attribute group for marker type primitives.
/// This group contains the type of marker, its color, and its scale factor.
/// </summary>
public ref class Graphic3d_AspectMarker3d sealed : public Macad::Occt::Graphic3d_Aspects
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

	static Macad::Occt::Graphic3d_AspectMarker3d^ CreateDowncasted(::Graphic3d_AspectMarker3d* instance);

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
	Graphic3d_AspectMarker3d(Macad::Occt::Graphic3d_AspectMarker3d^ parameter1);
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
}; // class Graphic3d_AspectMarker3d

//---------------------------------------------------------------------
//  Class  Graphic3d_AspectText3d
//---------------------------------------------------------------------
/// <summary>
/// Creates and updates a group of attributes for text primitives.
/// </summary>
public ref class Graphic3d_AspectText3d sealed : public Macad::Occt::Graphic3d_Aspects
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

	static Macad::Occt::Graphic3d_AspectText3d^ CreateDowncasted(::Graphic3d_AspectText3d* instance);

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
	/// <param name="theColor">
	/// [in] text color
	/// </param>
	/// <param name="theFont">
	///  [in] font family name or alias like Font_NOF_ASCII_MONO
	/// </param>
	/// <param name="theExpansionFactor">
	/// [in] deprecated parameter, has no effect
	/// </param>
	/// <param name="theSpace">
	/// [in] deprecated parameter, has no effect
	/// </param>
	/// <param name="theStyle">
	/// [in] font style
	/// </param>
	/// <param name="theDisplayType">
	/// [in] display mode
	/// </param>
	Graphic3d_AspectText3d(Macad::Occt::Quantity_Color^ theColor, System::String^ theFont, double theExpansionFactor, double theSpace, Macad::Occt::Aspect_TypeOfStyleText theStyle, Macad::Occt::Aspect_TypeOfDisplayText theDisplayType);
	/// <summary>
	/// Creates a context table for text primitives defined with the specified values.
	/// </summary>
	/// <param name="theColor">
	/// [in] text color
	/// </param>
	/// <param name="theFont">
	///  [in] font family name or alias like Font_NOF_ASCII_MONO
	/// </param>
	/// <param name="theExpansionFactor">
	/// [in] deprecated parameter, has no effect
	/// </param>
	/// <param name="theSpace">
	/// [in] deprecated parameter, has no effect
	/// </param>
	/// <param name="theStyle">
	/// [in] font style
	/// </param>
	/// <param name="theDisplayType">
	/// [in] display mode
	/// </param>
	Graphic3d_AspectText3d(Macad::Occt::Quantity_Color^ theColor, System::String^ theFont, double theExpansionFactor, double theSpace, Macad::Occt::Aspect_TypeOfStyleText theStyle);
	/// <summary>
	/// Creates a context table for text primitives defined with the specified values.
	/// </summary>
	/// <param name="theColor">
	/// [in] text color
	/// </param>
	/// <param name="theFont">
	///  [in] font family name or alias like Font_NOF_ASCII_MONO
	/// </param>
	/// <param name="theExpansionFactor">
	/// [in] deprecated parameter, has no effect
	/// </param>
	/// <param name="theSpace">
	/// [in] deprecated parameter, has no effect
	/// </param>
	/// <param name="theStyle">
	/// [in] font style
	/// </param>
	/// <param name="theDisplayType">
	/// [in] display mode
	/// </param>
	Graphic3d_AspectText3d(Macad::Occt::Quantity_Color^ theColor, System::String^ theFont, double theExpansionFactor, double theSpace);
	Graphic3d_AspectText3d(Macad::Occt::Graphic3d_AspectText3d^ parameter1);
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
	/// <summary>
	/// Returns text FontAspect
	/// </summary>
	/* Method skipped due to unknown mapping: Font_FontAspect GetTextFontAspect() */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_AspectText3d

//---------------------------------------------------------------------
//  Class  Graphic3d_CStructure
//---------------------------------------------------------------------
/// <summary>
/// Low-level graphic structure interface
/// </summary>
public ref class Graphic3d_CStructure : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_CStructure^ CreateDowncasted(::Graphic3d_CStructure* instance);

public:
	Graphic3d_CStructure(Macad::Occt::Graphic3d_CStructure^ parameter1);
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
	/// <summary>
	/// </summary>
	/// <returns>
	/// bounding box of this presentation
	/// </returns>
	/* Method skipped due to unknown mapping: Graphic3d_BndBox3d BoundingBox() */
	/// <summary>
	/// </summary>
	/// <returns>
	/// bounding box of this presentation
	/// without transformation matrix applied
	/// </returns>
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
	/// Returns whether check of object's bounding box clipping is enabled before drawing of object; TRUE by default.
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
	/// Unhighlights the structure and invalidates pointer to structure's highlight
	/// style
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
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_CStructure

//---------------------------------------------------------------------
//  Class  Graphic3d_WorldViewProjState
//---------------------------------------------------------------------
/// <summary>
/// Helper class for keeping reference on world-view-projection state.
/// Helpful for synchronizing state of WVP dependent data structures.
/// </summary>
public ref class Graphic3d_WorldViewProjState sealed : public BaseClass<::Graphic3d_WorldViewProjState>
{

#ifdef Include_Graphic3d_WorldViewProjState_h
public:
	Include_Graphic3d_WorldViewProjState_h
#endif

public:
	Graphic3d_WorldViewProjState(::Graphic3d_WorldViewProjState* nativeInstance)
		: BaseClass<::Graphic3d_WorldViewProjState>( nativeInstance, true )
	{}

	Graphic3d_WorldViewProjState(::Graphic3d_WorldViewProjState& nativeInstance)
		: BaseClass<::Graphic3d_WorldViewProjState>( &nativeInstance, false )
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
	/// Default constructor.
	/// </summary>
	Graphic3d_WorldViewProjState();
	/// <summary>
	/// Constructor for custom projector type.
	/// </summary>
	/// <param name="theProjectionState">
	/// [in] the projection state.
	/// </param>
	/// <param name="theWorldViewState">
	/// [in] the world view state.
	/// </param>
	/// <param name="theCamera">
	/// [in] the pointer to the class supplying projection and
	/// world view matrices (camera).
	/// </param>
	Graphic3d_WorldViewProjState(size_t theProjectionState, size_t theWorldViewState, Macad::Occt::Standard_Transient^ theCamera);
	/// <summary>
	/// Constructor for custom projector type.
	/// </summary>
	/// <param name="theProjectionState">
	/// [in] the projection state.
	/// </param>
	/// <param name="theWorldViewState">
	/// [in] the world view state.
	/// </param>
	/// <param name="theCamera">
	/// [in] the pointer to the class supplying projection and
	/// world view matrices (camera).
	/// </param>
	Graphic3d_WorldViewProjState(size_t theProjectionState, size_t theWorldViewState);
	Graphic3d_WorldViewProjState(Macad::Occt::Graphic3d_WorldViewProjState^ parameter1);
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
	void Initialize(size_t theProjectionState, size_t theWorldViewState, Macad::Occt::Standard_Transient^ theCamera);
	/// <summary>
	/// Initialize world view projection state.
	/// </summary>
	void Initialize(size_t theProjectionState, size_t theWorldViewState);
	/// <summary>
	/// Initialize world view projection state.
	/// </summary>
	void Initialize(Macad::Occt::Standard_Transient^ theCamera);
	/// <summary>
	/// Initialize world view projection state.
	/// </summary>
	void Initialize();
	/// <summary>
	/// </summary>
	/// <returns>
	/// projection state counter.
	/// </returns>
	size_t ProjectionState();
	/// <summary>
	/// </summary>
	/// <returns>
	/// world view state counter.
	/// </returns>
	size_t WorldViewState();
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
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer parameter1, ) */
}; // class Graphic3d_WorldViewProjState

//---------------------------------------------------------------------
//  Class  Graphic3d_Camera
//---------------------------------------------------------------------
/// <summary>
/// Camera class provides object-oriented approach to setting up projection
/// and orientation properties of 3D view.
/// </summary>
public ref class Graphic3d_Camera sealed : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_Camera^ CreateDowncasted(::Graphic3d_Camera* instance);

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
		Projection_Orthographic = 0,
		Projection_Perspective = 1,
		Projection_Stereo = 2,
		Projection_MonoLeftEye = 3,
		Projection_MonoRightEye = 4
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
		FocusType_Absolute = 0,
		FocusType_Relative = 1
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
		IODType_Absolute = 0,
		IODType_Relative = 1
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
	/// Copy constructor.
	/// </summary>
	/// <param name="theOther">
	/// [in] the camera to copy from.
	/// </param>
	Graphic3d_Camera(Macad::Occt::Graphic3d_Camera^ theOther);
	/// <summary>
	/// Linear interpolation tool for camera orientation and position.
	/// This tool interpolates camera parameters scale, eye, center, rotation (up and direction vectors) independently.
	/// </summary>
	/// @sa Graphic3d_CameraLerp
	/// 
	/// Eye/Center interpolation is performed through defining an anchor point in-between Center and Eye.
	/// The anchor position is defined as point near to the camera point which has smaller translation part.
	/// The main idea is to keep the distance between Center and Eye
	/// (which will change if Center and Eye translation will be interpolated independently).
	/// E.g.:
	/// - When both Center and Eye are moved at the same vector -> both will be just translated by straight line;
	/// - When Center is not moved -> camera Eye    will move around Center through arc;
	/// - When Eye    is not moved -> camera Center will move around Eye    through arc;
	/// - When both Center and Eye are move by different vectors -> transformation will be something in between,
	/// and will try interpolate linearly the distance between Center and Eye.
	/// 
	/// This transformation might be not in line with user expectations.
	/// In this case, application might define intermediate camera positions for interpolation or implement own interpolation logic.
	/// 
	/// <param name="theStart">
	///  [in] initial camera position
	/// </param>
	/// <param name="theEnd">
	///    [in] final   camera position
	/// </param>
	/// <param name="theT">
	///      [in] step between initial and final positions within [0,1] range
	/// </param>
	/// <param name="theCamera">
	/// [out] interpolation result
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
	/// <param name="theOther">
	/// [in] the camera to copy from.
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
	/// WARNING! This method does NOT verify that the current Up() vector is orthogonal to the new Direction.
	/// </summary>
	/// <param name="theDir">
	/// [in] the direction.
	/// </param>
	void SetDirectionFromEye(Macad::Occt::Dir theDir);
	/// <summary>
	/// Sets camera look direction and computes the new Eye position relative to current Center.
	/// WARNING! This method does NOT verify that the current Up() vector is orthogonal to the new Direction.
	/// </summary>
	/// <param name="theDir">
	/// [in] the direction.
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
	/// WARNING! This method does NOT verify that the new Up vector is orthogonal to the current Direction().
	/// </summary>
	/// <param name="theUp">
	/// [in] the Up direction vector.
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
	/// <param name="theEye">
	/// [in] the location of camera's Eye.
	/// </param>
	/// @sa SetEye()
	void MoveEyeTo(Macad::Occt::Pnt theEye);
	/// <summary>
	/// Sets camera Eye and Center positions.
	/// </summary>
	/// <param name="theEye">
	///    [in] the location of camera's Eye
	/// </param>
	/// <param name="theCenter">
	/// [in] the location of camera's Center
	/// </param>
	void SetEyeAndCenter(Macad::Occt::Pnt theEye, Macad::Occt::Pnt theCenter);
	/// <summary>
	/// Sets camera Eye position.
	/// WARNING! For backward compatibility reasons, this method also changes view direction,
	/// so that the new direction is computed from new Eye position to old Center position.
	/// </summary>
	/// <param name="theEye">
	/// [in] the location of camera's Eye.
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
	/// <param name="theCenter">
	/// [in] the point where the camera looks at.
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
	/// <param name="theDistance">
	/// [in] the distance.
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
	/// <param name="theScale">
	/// [in] the scale factor.
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
	/// <param name="theAxialScale">
	/// [in] the axial scale vector.
	/// </param>
	void SetAxialScale(Macad::Occt::XYZ theAxialScale);
	/// <summary>
	/// Change camera projection type.
	/// When switching to perspective projection from orthographic one,
	/// the ZNear and ZFar are reset to default values (0.001, 3000.0)
	/// if less than 0.0.
	/// </summary>
	/// <param name="theProjectionType">
	/// [in] the camera projection type.
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
	/// <param name="theFOVy">
	/// [in] the FOV in degrees.
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
	/// This can be useful to make 2D elements sharply visible, like in case of HMD normally having extra large FOVy.
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
	/// <param name="theScaleFactor">
	/// [in] the scale factor for Z-range.
	/// The range between Z-min, Z-max projection volume planes
	/// evaluated by z fitting method will be scaled using this coefficient.
	/// Program error exception is thrown if negative or zero value is passed.
	/// </param>
	/// <param name="theMinMax">
	/// [in] applicative min max boundaries.
	/// </param>
	/// <param name="theScaleFactor">
	/// [in] real graphical boundaries (not accounting infinite flag).
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
	/// <param name="theZNear">
	/// [in] the distance of the plane from the Eye.
	/// </param>
	/// <param name="theZFar">
	/// [in] the distance of the plane from the Eye.
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
	/// Return TRUE if camera should calculate projection matrix for [0, 1] depth range or for [-1, 1] range.
	/// FALSE by default.
	/// </summary>
	bool IsZeroToOneDepth();
	/// <summary>
	/// Set using [0, 1] depth range or [-1, 1] range.
	/// </summary>
	void SetZeroToOneDepth(bool theIsZeroToOne);
	/// <summary>
	/// Changes width / height display ratio.
	/// </summary>
	/// <param name="theAspect">
	/// [in] the display ratio.
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
	/// <param name="theType">
	/// [in] the focus definition type. Focus can be defined
	/// as absolute value or relatively to (as coefficient of) coefficient of
	/// camera focal length.
	/// </param>
	/// <param name="theZFocus">
	/// [in] the focus absolute value or coefficient depending
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
	/// <param name="theType">
	/// [in] the IOD definition type. IOD can be defined as
	/// absolute value or relatively to (as coefficient of) camera focal length.
	/// </param>
	/// <param name="theIOD">
	/// [in] the Intraocular distance.
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
	/// Note that tile defining a region outside the view boundaries is also valid - use method Graphic3d_CameraTile::Cropped() to assign a cropped copy.
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
	/// <param name="theTrsf">
	/// [in] the transformation to apply.
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
	/// <param name="theZValue">
	/// [in] the distance from the eye in eye-to-center direction
	/// </param>
	/// <returns>
	/// values in form of gp_Pnt (Width, Height, Depth).
	/// </returns>
	Macad::Occt::XYZ ViewDimensions(double theZValue);
	/// <summary>
	/// Return offset to the view corner in NDC space within dimension X for 2d on-screen elements, which is normally 0.5.
	/// Can be clamped when FOVx exceeds FOV2d.
	/// </summary>
	double NDC2dOffsetX();
	/// <summary>
	/// Return offset to the view corner in NDC space within dimension X for 2d on-screen elements, which is normally 0.5.
	/// Can be clamped when FOVy exceeds FOV2d.
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
	/// <param name="theLeft">
	/// [out] the frustum plane for left side of view.
	/// </param>
	/// <param name="theRight">
	/// [out] the frustum plane for right side of view.
	/// </param>
	/// <param name="theBottom">
	/// [out] the frustum plane for bottom side of view.
	/// </param>
	/// <param name="theTop">
	/// [out] the frustum plane for top side of view.
	/// </param>
	/// <param name="theNear">
	/// [out] the frustum plane for near side of view.
	/// </param>
	/// <param name="theFar">
	/// [out] the frustum plane for far side of view.
	/// </param>
	void Frustum(Macad::Occt::Pln% theLeft, Macad::Occt::Pln% theRight, Macad::Occt::Pln% theBottom, Macad::Occt::Pln% theTop, Macad::Occt::Pln% theNear, Macad::Occt::Pln% theFar);
	/// <summary>
	/// Project point from world coordinate space to
	/// normalized device coordinates (mapping).
	/// </summary>
	/// <param name="thePnt">
	/// [in] the 3D point in WCS.
	/// </param>
	/// <returns>
	/// mapped point in NDC.
	/// </returns>
	Macad::Occt::Pnt Project(Macad::Occt::Pnt thePnt);
	/// <summary>
	/// Unproject point from normalized device coordinates
	/// to world coordinate space.
	/// </summary>
	/// <param name="thePnt">
	/// [in] the NDC point.
	/// </param>
	/// <returns>
	/// 3D point in WCS.
	/// </returns>
	Macad::Occt::Pnt UnProject(Macad::Occt::Pnt thePnt);
	/// <summary>
	/// Convert point from view coordinate space to
	/// projection coordinate space.
	/// </summary>
	/// <param name="thePnt">
	/// [in] the point in VCS.
	/// </param>
	/// <returns>
	/// point in NDC.
	/// </returns>
	Macad::Occt::Pnt ConvertView2Proj(Macad::Occt::Pnt thePnt);
	/// <summary>
	/// Convert point from projection coordinate space
	/// to view coordinate space.
	/// </summary>
	/// <param name="thePnt">
	/// [in] the point in NDC.
	/// </param>
	/// <returns>
	/// point in VCS.
	/// </returns>
	Macad::Occt::Pnt ConvertProj2View(Macad::Occt::Pnt thePnt);
	/// <summary>
	/// Convert point from world coordinate space to
	/// view coordinate space.
	/// </summary>
	/// <param name="thePnt">
	/// [in] the 3D point in WCS.
	/// </param>
	/// <returns>
	/// point in VCS.
	/// </returns>
	Macad::Occt::Pnt ConvertWorld2View(Macad::Occt::Pnt thePnt);
	/// <summary>
	/// Convert point from view coordinate space to
	/// world coordinates.
	/// </summary>
	/// <param name="thePnt">
	/// [in] the 3D point in VCS.
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
	size_t ProjectionState();
	/// <summary>
	/// Returns modification state of camera world view transformation matrix.
	/// </summary>
	size_t WorldViewState();
	/// <summary>
	/// Get orientation matrix.
	/// </summary>
	/// <returns>
	/// camera orientation matrix.
	/// </returns>
	/* Method skipped due to unknown mapping: Graphic3d_Mat4d OrientationMatrix() */
	/// <summary>
	/// Get orientation matrix of Standard_ShortReal precision.
	/// </summary>
	/// <returns>
	/// camera orientation matrix.
	/// </returns>
	/* Method skipped due to unknown mapping: Graphic3d_Mat4 OrientationMatrixF() */
	/// <summary>
	/// Get monographic or middle point projection matrix used for monographic
	/// rendering and for point projection / unprojection.
	/// </summary>
	/// <returns>
	/// monographic projection matrix.
	/// </returns>
	/* Method skipped due to unknown mapping: Graphic3d_Mat4d ProjectionMatrix() */
	/// <summary>
	/// Get monographic or middle point projection matrix of Standard_ShortReal precision used for monographic
	/// rendering and for point projection / unprojection.
	/// </summary>
	/// <returns>
	/// monographic projection matrix.
	/// </returns>
	/* Method skipped due to unknown mapping: Graphic3d_Mat4 ProjectionMatrixF() */
	/// <summary>
	/// </summary>
	/// <returns>
	/// stereographic matrix computed for left eye. Please note
	/// that this method is used for rendering for <i>Projection_Stereo</i>.
	/// </returns>
	/* Method skipped due to unknown mapping: Graphic3d_Mat4d ProjectionStereoLeft() */
	/// <summary>
	/// </summary>
	/// <returns>
	/// stereographic matrix of Standard_ShortReal precision computed for left eye.
	/// Please note that this method is used for rendering for <i>Projection_Stereo</i>.
	/// </returns>
	/* Method skipped due to unknown mapping: Graphic3d_Mat4 ProjectionStereoLeftF() */
	/// <summary>
	/// </summary>
	/// <returns>
	/// stereographic matrix computed for right eye. Please note
	/// that this method is used for rendering for <i>Projection_Stereo</i>.
	/// </returns>
	/* Method skipped due to unknown mapping: Graphic3d_Mat4d ProjectionStereoRight() */
	/// <summary>
	/// </summary>
	/// <returns>
	/// stereographic matrix of Standard_ShortReal precision computed for right eye.
	/// Please note that this method is used for rendering for <i>Projection_Stereo</i>.
	/// </returns>
	/* Method skipped due to unknown mapping: Graphic3d_Mat4 ProjectionStereoRightF() */
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
	/// <param name="theProjL">
	///      [out] left  eye projection matrix
	/// </param>
	/// <param name="theHeadToEyeL">
	/// [out] left  head to eye translation matrix
	/// </param>
	/// <param name="theProjR">
	///      [out] right eye projection matrix
	/// </param>
	/// <param name="theHeadToEyeR">
	/// [out] right head to eye translation matrix
	/// </param>
	/* Method skipped due to unknown mapping: void StereoProjection(Graphic3d_Mat4d theProjL, Graphic3d_Mat4d theHeadToEyeL, Graphic3d_Mat4d theProjR, Graphic3d_Mat4d theHeadToEyeR, ) */
	/// <summary>
	/// Get stereo projection matrices.
	/// </summary>
	/// <param name="theProjL">
	///      [out] left  eye projection matrix
	/// </param>
	/// <param name="theHeadToEyeL">
	/// [out] left  head to eye translation matrix
	/// </param>
	/// <param name="theProjR">
	///      [out] right eye projection matrix
	/// </param>
	/// <param name="theHeadToEyeR">
	/// [out] right head to eye translation matrix
	/// </param>
	/* Method skipped due to unknown mapping: void StereoProjectionF(Graphic3d_Mat4 theProjL, Graphic3d_Mat4 theHeadToEyeL, Graphic3d_Mat4 theProjR, Graphic3d_Mat4 theHeadToEyeR, ) */
	/// <summary>
	/// Unset all custom frustums and projection matrices.
	/// </summary>
	void ResetCustomProjection();
	/// <summary>
	/// Return TRUE if custom stereo frustums are set.
	/// </summary>
	bool IsCustomStereoFrustum();
	/// <summary>
	/// Set custom stereo frustums.
	/// These can be retrieved from APIs like OpenVR.
	/// </summary>
	/* Method skipped due to unknown mapping: void SetCustomStereoFrustums(Aspect_FrustumLRBT<double> theFrustumL, Aspect_FrustumLRBT<double> theFrustumR, ) */
	/// <summary>
	/// Return TRUE if custom stereo projection matrices are set.
	/// </summary>
	bool IsCustomStereoProjection();
	/// <summary>
	/// Set custom stereo projection matrices.
	/// </summary>
	/// <param name="theProjL">
	///      [in] left  eye projection matrix
	/// </param>
	/// <param name="theHeadToEyeL">
	/// [in] left  head to eye translation matrix
	/// </param>
	/// <param name="theProjR">
	///      [in] right eye projection matrix
	/// </param>
	/// <param name="theHeadToEyeR">
	/// [in] right head to eye translation matrix
	/// </param>
	/* Method skipped due to unknown mapping: void SetCustomStereoProjection(Graphic3d_Mat4d theProjL, Graphic3d_Mat4d theHeadToEyeL, Graphic3d_Mat4d theProjR, Graphic3d_Mat4d theHeadToEyeR, ) */
	/// <summary>
	/// Return TRUE if custom projection matrix is set.
	/// </summary>
	bool IsCustomMonoProjection();
	/// <summary>
	/// Set custom projection matrix.
	/// </summary>
	/* Method skipped due to unknown mapping: void SetCustomMonoProjection(Graphic3d_Mat4d theProj, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Fill array of current view frustum corners.
	/// The size of this array is equal to FrustumVerticesNB.
	/// The order of vertices is as defined in FrustumVert_* enumeration.
	/// </summary>
	/* Method skipped due to unknown mapping: void FrustumPoints(NCollection_Array1<NCollection_Vec3<double>> thePoints, Graphic3d_Mat4d theModelWorld, ) */
	/// <summary>
	/// Fill array of current view frustum corners.
	/// The size of this array is equal to FrustumVerticesNB.
	/// The order of vertices is as defined in FrustumVert_* enumeration.
	/// </summary>
	/* Method skipped due to unknown mapping: void FrustumPoints(NCollection_Array1<NCollection_Vec3<double>> thePoints, Graphic3d_Mat4d theModelWorld, ) */
}; // class Graphic3d_Camera

//---------------------------------------------------------------------
//  Class  Graphic3d_CameraTile
//---------------------------------------------------------------------
/// <summary>
/// Class defines the area (Tile) inside a view.
/// </summary>
public ref class Graphic3d_CameraTile sealed : public BaseClass<::Graphic3d_CameraTile>
{

#ifdef Include_Graphic3d_CameraTile_h
public:
	Include_Graphic3d_CameraTile_h
#endif

public:
	Graphic3d_CameraTile(::Graphic3d_CameraTile* nativeInstance)
		: BaseClass<::Graphic3d_CameraTile>( nativeInstance, true )
	{}

	Graphic3d_CameraTile(::Graphic3d_CameraTile& nativeInstance)
		: BaseClass<::Graphic3d_CameraTile>( &nativeInstance, false )
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
	/// Default constructor.
	/// Initializes the empty Tile of zero size and lower-left offset orientation.
	/// Such Tile is considered uninitialized (invalid).
	/// </summary>
	Graphic3d_CameraTile();
	Graphic3d_CameraTile(Macad::Occt::Graphic3d_CameraTile^ parameter1);
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
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
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
public ref class Graphic3d_CLight : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_CLight^ CreateDowncasted(::Graphic3d_CLight* instance);

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
	/// Headlight flag means that light position/direction are defined not in a World coordinate system, but relative to the camera orientation.
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
	/// Distance attenuation factors of reducing positional/spot light intensity depending on the distance from its position:
	/// </summary>
	/// @code
	/// float anAttenuation = 1.0 / (ConstAttenuation() + LinearAttenuation() * theDistance + QuadraticAttenuation() * theDistance * theDistance);
	/// @endcode
	float ConstAttenuation();
	/// <summary>
	/// Returns linear attenuation factor of positional/spot light source; 0.0 by default.
	/// Distance attenuation factors of reducing positional/spot light intensity depending on the distance from its position:
	/// </summary>
	/// @code
	/// float anAttenuation = 1.0 / (ConstAttenuation() + LinearAttenuation() * theDistance + QuadraticAttenuation() * theDistance * theDistance);
	/// @endcode
	float LinearAttenuation();
	/// <summary>
	/// Returns the attenuation factors.
	/// </summary>
	void Attenuation(double% theConstAttenuation, double% theLinearAttenuation);
	/// <summary>
	/// Defines the coefficients of attenuation; values should be >= 0.0 and their summ should not be equal to 0.
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
	/// Returns location of positional/spot/directional light, which is the same as returned by Position().
	/// </summary>
	Macad::Occt::Pnt DisplayPosition();
	/// <summary>
	/// Setup location of positional/spot/directional light,
	/// which is the same as SetPosition() but allows directional light source
	/// (technically having no position, but this point can be used for displaying light source presentation).
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
	/// The concentration factor determines the dispersion of the light on the surface, the default value (1.0) corresponds to a minimum of dispersion.
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
	/// Returns the smoothness of light source (either smoothing angle for directional light or smoothing radius in case of positional light); 0.0 by default.
	/// </summary>
	float Smoothness();
	/// <summary>
	/// Modifies the smoothing radius of positional/spot light; should be >= 0.0.
	/// </summary>
	void SetSmoothRadius(float theValue);
	/// <summary>
	/// Modifies the smoothing angle (in radians) of directional light source; should be within range [0.0, M_PI/2].
	/// </summary>
	void SetSmoothAngle(float theValue);
	/// <summary>
	/// Returns TRUE if maximum distance of point light source is defined.
	/// </summary>
	bool HasRange();
	/// <summary>
	/// Returns maximum distance on which point light source affects to objects and is considered during illumination calculations.
	/// 0.0 means disabling range considering at all without any distance limits.
	/// Has sense only for point light sources (positional and spot).
	/// </summary>
	float Range();
	/// <summary>
	/// Modifies maximum distance on which point light source affects to objects and is considered during illumination calculations.
	/// Positional and spot lights are only point light sources.
	/// 0.0 means disabling range considering at all without any distance limits.
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
	/* Method skipped due to unknown mapping: Graphic3d_Vec4 PackedParams() */
	/// <summary>
	/// Returns the color of the light source with dummy Alpha component, which should be ignored.
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_Vec4 PackedColor() */
	/// <summary>
	/// Returns direction of directional/spot light and range for positional/spot light in alpha channel.
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_Vec4 PackedDirectionRange() */
	/// <summary>
	/// Returns direction of directional/spot light.
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_Vec3 PackedDirection() */
	/// <summary>
	/// </summary>
	/// <returns>
	/// modification counter
	/// </returns>
	size_t Revision();
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_CLight

//---------------------------------------------------------------------
//  Class  Graphic3d_ClipPlane
//---------------------------------------------------------------------
/// <summary>
/// Container for properties describing either a Clipping halfspace (single Clipping Plane),
/// or a chain of Clipping Planes defining logical AND (conjunction) operation.
/// The plane equation is specified in "world" coordinate system.
/// </summary>
public ref class Graphic3d_ClipPlane sealed : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_ClipPlane^ CreateDowncasted(::Graphic3d_ClipPlane* instance);

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
	/// Copy constructor.
	/// </summary>
	/// <param name="theOther">
	/// [in] the copied plane.
	/// </param>
	Graphic3d_ClipPlane(Macad::Occt::Graphic3d_ClipPlane^ theOther);
	/// <summary>
	/// Construct clip plane for the passed equation.
	/// By default the plane is on, capping is turned off.
	/// </summary>
	/// <param name="theEquation">
	/// [in] the plane equation.
	/// </param>
	/* Method skipped due to unknown mapping: void Graphic3d_ClipPlane(Graphic3d_Vec4d theEquation, ) */
	/// <summary>
	/// Construct clip plane from the passed geometrical definition.
	/// By default the plane is on, capping is turned off.
	/// </summary>
	/// <param name="thePlane">
	/// [in] the plane.
	/// </param>
	Graphic3d_ClipPlane(Macad::Occt::Pln thePlane);
	/// <summary>
	/// Set plane equation by its geometrical definition.
	/// The equation is specified in "world" coordinate system.
	/// </summary>
	/// <param name="thePlane">
	/// [in] the plane.
	/// </param>
	void SetEquation(Macad::Occt::Pln thePlane);
	/// <summary>
	/// Set 4-component equation vector for clipping plane.
	/// The equation is specified in "world" coordinate system.
	/// </summary>
	/// <param name="theEquation">
	/// [in] the XYZW (or "ABCD") equation vector.
	/// </param>
	/* Method skipped due to unknown mapping: void SetEquation(Graphic3d_Vec4d theEquation, ) */
	/// <summary>
	/// Get 4-component equation vector for clipping plane.
	/// </summary>
	/// <returns>
	/// clipping plane equation vector.
	/// </returns>
	/* Method skipped due to unknown mapping: Graphic3d_Vec4d ReversedEquation() */
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
	/// <param name="theIsOn">
	/// [in] the flag specifying whether the graphic driver
	/// clipping by this plane should be turned on or off.
	/// </param>
	void SetOn(bool theIsOn);
	/// <summary>
	/// Change state of capping surface rendering.
	/// </summary>
	/// <param name="theIsOn">
	/// [in] the flag specifying whether the graphic driver should
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
	/// or a Clipping volume defined by a logical AND (conjunction) operation between a set of Planes defined as a Chain
	/// (so that the volume cuts a space only in case if check fails for ALL Planes in the Chain).
	/// 
	/// Note that Graphic3d_ClipPlane item cannot:
	/// - Define a Chain with logical OR (disjunction) operation;
	/// this should be done through Graphic3d_SequenceOfHClipPlane.
	/// - Define nested Chains.
	/// - Disable Chain items; only entire Chain can be disabled (by disabled a head of Chain).
	/// 
	/// The head of a Chain defines all visual properties of the Chain,
	/// so that Graphic3d_ClipPlane of next items in a Chain merely defines only geometrical definition of the plane.
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
	/// <param name="theMat">
	/// [in] the material.
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
	/// <param name="theTexture">
	/// [in] the texture.
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
	/// <param name="theStyle">
	/// [in] the hatch style.
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
	/// <param name="theStyle">
	/// [in] the hatch pattern.
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
	/* Method skipped due to unknown mapping: Graphic3d_ClipState ProbePoint(Graphic3d_Vec4d thePoint, ) */
	/// <summary>
	/// Check if the given bounding box is fully outside / fully inside.
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_ClipState ProbeBox(Graphic3d_BndBox3d theBox, ) */
	/// <summary>
	/// Check if the given bounding box is In and touch the clipping planes
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean ProbeBoxTouch(Graphic3d_BndBox3d theBox, ) */
	/// <summary>
	/// Check if the given point is outside of the half-space (e.g. should be discarded by clipping plane).
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_ClipState ProbePointHalfspace(Graphic3d_Vec4d thePoint, ) */
	/// <summary>
	/// Check if the given bounding box is fully outside / fully inside the half-space.
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_ClipState ProbeBoxHalfspace(Graphic3d_BndBox3d theBox, ) */
	/// <summary>
	/// Check if the given point is outside of the half-space (e.g. should be discarded by clipping plane).
	/// </summary>
	/* Method skipped due to unknown mapping: bool IsPointOutHalfspace(Graphic3d_Vec4d thePoint, ) */
	/// <summary>
	/// Check if the given bounding box is fully outside of the half-space (e.g. should be discarded by clipping plane).
	/// </summary>
	/* Method skipped due to unknown mapping: bool IsBoxFullOutHalfspace(Graphic3d_BndBox3d theBox, ) */
	/// <summary>
	/// Check if the given bounding box is fully outside of the half-space (e.g. should be discarded by clipping plane).
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_ClipState ProbeBoxMaxPointHalfspace(Graphic3d_BndBox3d theBox, ) */
	/// <summary>
	/// Check if the given bounding box is fully inside (or touches from inside) the half-space (e.g. NOT discarded by clipping plane).
	/// </summary>
	/* Method skipped due to unknown mapping: bool IsBoxFullInHalfspace(Graphic3d_BndBox3d theBox, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
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
}; // class Graphic3d_ClipPlane

//---------------------------------------------------------------------
//  Class  Graphic3d_Structure
//---------------------------------------------------------------------
/// <summary>
/// This class allows the definition a graphic object.
/// This graphic structure can be displayed, erased, or highlighted.
/// This graphic structure can be connected with another graphic structure.
/// </summary>
public ref class Graphic3d_Structure : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_Structure^ CreateDowncasted(::Graphic3d_Structure* instance);

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
	Graphic3d_Structure(Macad::Occt::Graphic3d_Structure^ parameter1);
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
	int DisplayPriority();
	/// <summary>
	/// Erases this structure in all the views of the visualiser.
	/// </summary>
	void Erase();
	/// <summary>
	/// Highlights the structure in all the views with the given style
	/// </summary>
	/// <param name="theStyle">
	/// [in] the style (type of highlighting: box/color, color and opacity)
	/// </param>
	/// <param name="theToUpdateMgr">
	/// [in] defines whether related computed structures will be
	/// highlighted via structure manager or not
	/// </param>
	void Highlight(Macad::Occt::Graphic3d_PresentationAttributes^ theStyle, bool theToUpdateMgr);
	/// <summary>
	/// Highlights the structure in all the views with the given style
	/// </summary>
	/// <param name="theStyle">
	/// [in] the style (type of highlighting: box/color, color and opacity)
	/// </param>
	/// <param name="theToUpdateMgr">
	/// [in] defines whether related computed structures will be
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
	/// Modifies the order of displaying the structure.
	/// Values are between 0 and 10.
	/// Structures are drawn according to their display priorities
	/// in ascending order.
	/// A structure of priority 10 is displayed the last and appears over the others.
	/// The default value is 5.
	/// Category: Methods to modify the class definition
	/// Warning: If <me> is displayed then the SetDisplayPriority
	/// method erase <me> and display <me> with the
	/// new priority.
	/// Raises PriorityDefinitionError if <Priority> is
	/// greater than 10 or a negative value.
	/// </summary>
	void SetDisplayPriority(int Priority);
	/// <summary>
	/// Reset the current priority of the structure to the
	/// previous priority.
	/// Category: Methods to modify the class definition
	/// Warning: If <me> is displayed then the SetDisplayPriority
	/// method erase <me> and display <me> with the
	/// previous priority.
	/// </summary>
	void ResetDisplayPriority();
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
	/// <param name="thePlanes">
	/// [in] the set of clip planes.
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
	/// Marks the structure <me> representing wired structure needed for highlight only so it won't be added to BVH tree.
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
	/// Returns Standard_True if the structure <me> contains
	/// Polygons, Triangles or Quadrangles.
	/// </summary>
	bool ContainsFacet();
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
	/// <summary>
	/// Returns <ASet> the group of structures :
	/// - directly or indirectly connected to <AStructure> if the
	/// TypeOfConnection == TOC_DESCENDANT
	/// - to which <AStructure> is directly or indirectly connected
	/// if the TypeOfConnection == TOC_ANCESTOR
	/// </summary>
	/* Method skipped due to unknown mapping: void Network(Graphic3d_Structure theStructure, Graphic3d_TypeOfConnection theType, NCollection_Map<Graphic3d_Structure *, NCollection_DefaultHasher<Graphic3d_Structure *>> theSet, ) */
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
	/// Sets if the structure location has mutable nature (content or location will be changed regularly).
	/// </summary>
	void SetMutable(bool theIsMutable);
	/// <summary>
	/// Returns true if structure has mutable nature (content or location are be changed regularly).
	/// Mutable structure will be managed in different way than static onces.
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
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
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
public ref class Graphic3d_Text sealed : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_Text^ CreateDowncasted(::Graphic3d_Text* instance);

public:
	/// <summary>
	/// Creates default text parameters.
	/// </summary>
	Graphic3d_Text(float theHeight);
	Graphic3d_Text(Macad::Occt::Graphic3d_Text^ parameter1);
	/// <summary>
	/// Returns text value.
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Utf8String Text() */
	/// <summary>
	/// Sets text value.
	/// </summary>
	/* Method skipped due to unknown mapping: void SetText(NCollection_Utf8String theText, ) */
	/// <summary>
	/// Sets text value.
	/// </summary>
	void SetText(Macad::Occt::TCollection_AsciiString^ theText);
	/// <summary>
	/// Sets text value.
	/// </summary>
	void SetText(System::String^ theText);
	/// <summary>
	/// </summary>
	/// <returns>
	/// text formatter; NULL by default, which means standard text formatter will be used.
	/// </returns>
	/* Method skipped due to unknown mapping: Font_TextFormatter TextFormatter() */
	/// <summary>
	/// Setup text default formatter for text within this context.
	/// </summary>
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
}; // class Graphic3d_Text

//---------------------------------------------------------------------
//  Class  Graphic3d_TransformPers
//---------------------------------------------------------------------
/// <summary>
/// Transformation Persistence definition.
/// 
/// Transformation Persistence defines a mutable Local Coordinate system which depends on camera position,
/// so that visual appearance of the object becomes partially immutable while camera moves.
/// Object visually preserves particular property such as size, placement, rotation or their combination.
/// 
/// Graphic3d_TMF_ZoomPers, Graphic3d_TMF_RotatePers and Graphic3d_TMF_ZoomRotatePers define Local Coordinate system
/// having origin in specified anchor point defined in World Coordinate system,
/// while Graphic3d_TMF_TriedronPers and Graphic3d_TMF_2d define origin as 2D offset from screen corner in pixels.
/// 
/// Graphic3d_TMF_2d, Graphic3d_TMF_TriedronPers and Graphic3d_TMF_ZoomPers defines Local Coordinate system where length units are pixels.
/// Beware that Graphic3d_RenderingParams::ResolutionRatio() will be ignored!
/// For other Persistence flags, normal (world) length units will apply.
/// 
/// WARNING: Graphic3d_TMF_None is not permitted for defining instance of this class - NULL handle should be used for this purpose!
/// </summary>
public ref class Graphic3d_TransformPers : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_TransformPers^ CreateDowncasted(::Graphic3d_TransformPers* instance);

public:
	/// <summary>
	/// Set transformation persistence.
	/// </summary>
	Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransModeFlags theMode);
	/// <summary>
	/// Set Zoom/Rotate transformation persistence with an anchor 3D point.
	/// Anchor point defines the origin of Local Coordinate system within World Coordinate system.
	/// Throws an exception if persistence mode is not Graphic3d_TMF_ZoomPers, Graphic3d_TMF_ZoomRotatePers or Graphic3d_TMF_RotatePers.
	/// </summary>
	Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Pnt thePnt);
	/// <summary>
	/// Set 2d/trihedron transformation persistence with a corner and 2D offset.
	/// 2D offset defines the origin of Local Coordinate system as projection of 2D point on screen plane into World Coordinate system.
	/// Throws an exception if persistence mode is not Graphic3d_TMF_TriedronPers or Graphic3d_TMF_2d.
	/// The offset is a positive displacement from the view corner in pixels.
	/// </summary>
	Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Aspect_TypeOfTriedronPosition theCorner, Macad::Occt::Graphic3d_Vec2i^ theOffset);
	/// <summary>
	/// Set 2d/trihedron transformation persistence with a corner and 2D offset.
	/// 2D offset defines the origin of Local Coordinate system as projection of 2D point on screen plane into World Coordinate system.
	/// Throws an exception if persistence mode is not Graphic3d_TMF_TriedronPers or Graphic3d_TMF_2d.
	/// The offset is a positive displacement from the view corner in pixels.
	/// </summary>
	Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Aspect_TypeOfTriedronPosition theCorner);
	Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransformPers^ parameter1);
	/// <summary>
	/// Return true if specified mode is zoom/rotate transformation persistence.
	/// </summary>
	static bool IsZoomOrRotate(Macad::Occt::Graphic3d_TransModeFlags theMode);
	/// <summary>
	/// Return true if specified mode is 2d/trihedron transformation persistence.
	/// </summary>
	static bool IsTrihedronOr2d(Macad::Occt::Graphic3d_TransModeFlags theMode);
	/// <summary>
	/// Return true for Graphic3d_TMF_ZoomPers, Graphic3d_TMF_ZoomRotatePers or Graphic3d_TMF_RotatePers modes.
	/// </summary>
	bool IsZoomOrRotate();
	/// <summary>
	/// Return true for Graphic3d_TMF_TriedronPers and Graphic3d_TMF_2d modes.
	/// </summary>
	bool IsTrihedronOr2d();
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
	/// Throws an exception if persistence mode is not Graphic3d_TMF_ZoomPers, Graphic3d_TMF_ZoomRotatePers or Graphic3d_TMF_RotatePers.
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
	/// <param name="theCamera">
	/// [in] camera definition
	/// </param>
	/// <param name="theViewportWidth">
	/// [in] the width of viewport.
	/// </param>
	/// <param name="theViewportHeight">
	/// [in] the height of viewport.
	/// </param>
	double persistentScale(Macad::Occt::Graphic3d_Camera^ theCamera, int parameter1, int theViewportHeight);
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
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
/// to define arbitrary number of primitive "blocks" each having individual apect values.
/// Any modification of such a group is forbidden, as aspects and primitives are mixed
/// in memory without any high-level logical structure, and any modification is very likely to result
/// in corruption of the group internal data.
/// It is necessary to recreate such a group as a whole when some attribute should be changed.
/// (for example, in terms of AIS it is necessary to re-Compute() the whole presentation each time).
/// 2) Bounded group. Developers should specify the necessary group aspects with help of
/// SetGroupPrimitivesAspect() and then add primitives to the group.
/// Such a group have simplified organization in memory (a single block of attributes
/// followed by a block of primitives) and therefore it can be modified, if it is necessary to
/// change parameters of some aspect that has already been set, using methods:
/// IsGroupPrimitivesAspectSet() to detect which aspect was set for primitives;
/// GroupPrimitivesAspect() to read current aspect values
/// and SetGroupPrimitivesAspect() to set new values.
/// 
/// Developers are strongly recommended to take all the above into account when filling Graphic3d_Group
/// with aspects and primitives and choose the group usage model beforehand out of application needs.
/// Note that some Graphic3d_Group class virtual methods contain only base implementation
/// that is extended by the descendant class in OpenGl package.
/// </summary>
public ref class Graphic3d_Group : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_Group^ CreateDowncasted(::Graphic3d_Group* instance);

public:
	Graphic3d_Group(Macad::Occt::Graphic3d_Group^ parameter1);
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
	/// Modifies the current context of the group to give another aspect for all the primitives created after this call in the group.
	/// </summary>
	void SetPrimitivesAspect(Macad::Occt::Graphic3d_Aspects^ theAspect);
	/// <summary>
	/// Update presentation aspects after their modification.
	/// </summary>
	void SynchronizeAspects();
	/// <summary>
	/// Replace aspects specified in the replacement map.
	/// </summary>
	void ReplaceAspects(Macad::Occt::Graphic3d_MapOfAspectsToAspects^ theMap);
	/// <summary>
	/// Adds a text for display
	/// </summary>
	void AddText(Macad::Occt::Graphic3d_Text^ theTextParams, bool theToEvalMinMax);
	/// <summary>
	/// Adds a text for display
	/// </summary>
	void AddText(Macad::Occt::Graphic3d_Text^ theTextParams);
	/// <summary>
	/// Adds an array of primitives for display
	/// </summary>
	/* Method skipped due to unknown mapping: void AddPrimitiveArray(Graphic3d_TypeOfPrimitiveArray theType, Graphic3d_IndexBuffer theIndices, Graphic3d_Buffer theAttribs, Graphic3d_BoundBuffer theBounds, Standard_Boolean theToEvalMinMax, ) */
	/// <summary>
	/// Adds an array of primitives for display
	/// </summary>
	/* Method skipped due to unknown mapping: void AddPrimitiveArray(Graphic3d_TypeOfPrimitiveArray theType, Graphic3d_IndexBuffer theIndices, Graphic3d_Buffer theAttribs, Graphic3d_BoundBuffer theBounds, Standard_Boolean theToEvalMinMax, ) */
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
	/// Return transformation persistence.
	/// </summary>
	Macad::Occt::Graphic3d_TransformPers^ TransformPersistence();
	/// <summary>
	/// Set transformation persistence.
	/// </summary>
	void SetTransformPersistence(Macad::Occt::Graphic3d_TransformPers^ theTrsfPers);
	/// <summary>
	/// Returns true if the group contains Polygons, Triangles or Quadrangles.
	/// </summary>
	bool ContainsFacet();
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
	/// <summary>
	/// Returns boundary box of the group <me> without transformation applied,
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_BndBox4f BoundingBox() */
	/// <summary>
	/// Returns non-const boundary box of the group <me> without transformation applied,
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_BndBox4f ChangeBoundingBox() */
	/// <summary>
	/// Returns the structure containing the group <me>.
	/// </summary>
	Macad::Occt::Graphic3d_Structure^ Structure();
	/// <summary>
	/// Changes property shown that primitive arrays within this group form closed volume (do no contain open shells).
	/// </summary>
	void SetClosed(bool theIsClosed);
	/// <summary>
	/// Return true if primitive arrays within this graphic group form closed volume (do no contain open shells).
	/// </summary>
	bool IsClosed();
	/// <summary>
	/// </summary>
	/// @name obsolete methods
	/* Method skipped due to unknown mapping: void Marker(Graphic3d_Vertex thePoint, Standard_Boolean theToEvalMinMax, ) */
	/// <summary>
	/// </summary>
	/// @name obsolete methods
	/* Method skipped due to unknown mapping: void Marker(Graphic3d_Vertex thePoint, Standard_Boolean theToEvalMinMax, ) */
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
	/* Method skipped due to unknown mapping: void Text(Standard_CString AText, Graphic3d_Vertex APoint, Standard_Real AHeight, Standard_Real AAngle, Graphic3d_TextPath ATp, Graphic3d_HorizontalTextAlignment AHta, Graphic3d_VerticalTextAlignment AVta, Standard_Boolean EvalMinMax, ) */
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
	/* Method skipped due to unknown mapping: void Text(Standard_CString AText, Graphic3d_Vertex APoint, Standard_Real AHeight, Standard_Real AAngle, Graphic3d_TextPath ATp, Graphic3d_HorizontalTextAlignment AHta, Graphic3d_VerticalTextAlignment AVta, Standard_Boolean EvalMinMax, ) */
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
	/* Method skipped due to unknown mapping: void Text(Standard_CString AText, Graphic3d_Vertex APoint, Standard_Real AHeight, Standard_Boolean EvalMinMax, ) */
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
	/* Method skipped due to unknown mapping: void Text(Standard_CString AText, Graphic3d_Vertex APoint, Standard_Real AHeight, Standard_Boolean EvalMinMax, ) */
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
	/* Method skipped due to unknown mapping: void Text(TCollection_ExtendedString AText, Graphic3d_Vertex APoint, Standard_Real AHeight, Standard_Real AAngle, Graphic3d_TextPath ATp, Graphic3d_HorizontalTextAlignment AHta, Graphic3d_VerticalTextAlignment AVta, Standard_Boolean EvalMinMax, ) */
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
	/* Method skipped due to unknown mapping: void Text(TCollection_ExtendedString AText, Graphic3d_Vertex APoint, Standard_Real AHeight, Standard_Real AAngle, Graphic3d_TextPath ATp, Graphic3d_HorizontalTextAlignment AHta, Graphic3d_VerticalTextAlignment AVta, Standard_Boolean EvalMinMax, ) */
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
	/* Method skipped due to unknown mapping: void Text(TCollection_ExtendedString AText, Graphic3d_Vertex APoint, Standard_Real AHeight, Standard_Boolean EvalMinMax, ) */
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
	/* Method skipped due to unknown mapping: void Text(TCollection_ExtendedString AText, Graphic3d_Vertex APoint, Standard_Real AHeight, Standard_Boolean EvalMinMax, ) */
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
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_Group

//---------------------------------------------------------------------
//  Class  Graphic3d_PresentationAttributes
//---------------------------------------------------------------------
/// <summary>
/// Class defines presentation properties.
/// </summary>
public ref class Graphic3d_PresentationAttributes : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_PresentationAttributes^ CreateDowncasted(::Graphic3d_PresentationAttributes* instance);

public:
	/// <summary>
	/// Empty constructor.
	/// </summary>
	Graphic3d_PresentationAttributes();
	Graphic3d_PresentationAttributes(Macad::Occt::Graphic3d_PresentationAttributes^ parameter1);
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
	/// Returns basic presentation transparency (0 - opaque, 1 - fully transparent), 0 by default (opaque).
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
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_PresentationAttributes

//---------------------------------------------------------------------
//  Class  Graphic3d_SequenceOfHClipPlane
//---------------------------------------------------------------------
/// <summary>
/// Class defines a Clipping Volume as a logical OR (disjunction) operation between Graphic3d_ClipPlane in sequence.
/// Each Graphic3d_ClipPlane represents either a single Plane clipping a halfspace (direction is specified by normal),
/// or a sub-chain of planes defining a logical AND (conjunction) operation.
/// Therefore, this collection allows defining a Clipping Volume through the limited set of Boolean operations between clipping Planes.
/// 
/// The Clipping Volume can be assigned either to entire View or to a specific Object;
/// in the latter case property ToOverrideGlobal() will specify if Object planes should override (suppress) globally defined ones
/// or extend their definition through logical OR (disjunction) operation.
/// 
/// Note that defining (many) planes will lead to performance degradation, and Graphics Driver may limit
/// the overall number of simultaneously active clipping planes - but at least 6 planes should be supported on all configurations.
/// </summary>
public ref class Graphic3d_SequenceOfHClipPlane sealed : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_SequenceOfHClipPlane^ CreateDowncasted(::Graphic3d_SequenceOfHClipPlane* instance);

public:
	/// <summary>
	/// Empty constructor.
	/// </summary>
	Graphic3d_SequenceOfHClipPlane();
	Graphic3d_SequenceOfHClipPlane(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ parameter1);
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
	/// <summary>
	/// Remove a plane.
	/// </summary>
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
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_SequenceOfHClipPlane

//---------------------------------------------------------------------
//  Class  Graphic3d_ViewAffinity
//---------------------------------------------------------------------
/// <summary>
/// Structure display state.
/// </summary>
public ref class Graphic3d_ViewAffinity sealed : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_ViewAffinity^ CreateDowncasted(::Graphic3d_ViewAffinity* instance);

public:
	/// <summary>
	/// Empty constructor.
	/// </summary>
	Graphic3d_ViewAffinity();
	Graphic3d_ViewAffinity(Macad::Occt::Graphic3d_ViewAffinity^ parameter1);
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
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_ViewAffinity

//---------------------------------------------------------------------
//  Class  Graphic3d_GraphicDriver
//---------------------------------------------------------------------
/// <summary>
/// This class allows the definition of a graphic driver
/// for 3d interface (currently only OpenGl driver is used).
/// </summary>
public ref class Graphic3d_GraphicDriver : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_GraphicDriver^ CreateDowncasted(::Graphic3d_GraphicDriver* instance);

public:
	Graphic3d_GraphicDriver(Macad::Occt::Graphic3d_GraphicDriver^ parameter1);
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
	/// Returns TRUE if vertical synchronization with display refresh rate (VSync) should be used; TRUE by default.
	/// </summary>
	bool IsVerticalSync();
	/// <summary>
	/// Set if vertical synchronization with display refresh rate (VSync) should be used.
	/// </summary>
	void SetVerticalSync(bool theToEnable);
	/// <summary>
	/// Returns information about GPU memory usage.
	/// </summary>
	bool MemoryInfo(size_t% theFreeBytes, Macad::Occt::TCollection_AsciiString^ theInfo);
	float DefaultTextHeight();
	/// <summary>
	/// Computes text width.
	/// </summary>
	void TextSize(Macad::Occt::Graphic3d_CView^ theView, System::String^ theText, float theHeight, float% theWidth, float% theAscent, float% theDescent);
	/// <summary>
	/// Adds a layer to all views.
	/// To add a structure to desired layer on display it is necessary to set the layer ID for the structure.
	/// </summary>
	/// <param name="theNewLayerId">
	/// [in] id of new layer, should be > 0 (negative values are reserved for default layers).
	/// </param>
	/// <param name="theSettings">
	///   [in] new layer settings
	/// </param>
	/// <param name="theLayerAfter">
	/// [in] id of layer to append new layer before
	/// </param>
	void InsertLayerBefore(int theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerAfter);
	/// <summary>
	/// Adds a layer to all views.
	/// </summary>
	/// <param name="theNewLayerId">
	///  [in] id of new layer, should be > 0 (negative values are reserved for default layers).
	/// </param>
	/// <param name="theSettings">
	///    [in] new layer settings
	/// </param>
	/// <param name="theLayerBefore">
	/// [in] id of layer to append new layer after
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
	/// <summary>
	/// returns Handle to display connection
	/// </summary>
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
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
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
public ref class Graphic3d_StructureManager sealed : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_StructureManager^ CreateDowncasted(::Graphic3d_StructureManager* instance);

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
	Graphic3d_StructureManager(Macad::Occt::Graphic3d_StructureManager^ parameter1);
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
	void ChangeDisplayPriority(Macad::Occt::Graphic3d_Structure^ theStructure, int theOldPriority, int theNewPriority);
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
	/// Attaches the view to this structure manager and sets its identification number within the manager.
	/// </summary>
	int Identification(Macad::Occt::Graphic3d_CView^ theView);
	/// <summary>
	/// Detach the view from this structure manager and release its identification.
	/// </summary>
	void UnIdentification(Macad::Occt::Graphic3d_CView^ theView);
	/// <summary>
	/// Returns the group of views defined in the structure manager.
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_IndexedMapOfView DefinedViews() */
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
	/// <summary>
	/// Recomputes all structures from theStructures.
	/// </summary>
	/* Method skipped due to unknown mapping: void RecomputeStructures(NCollection_Map<Graphic3d_Structure *, NCollection_DefaultHasher<Graphic3d_Structure *>> theStructures, ) */
	Macad::Occt::Graphic3d_ViewAffinity^ RegisterObject(Macad::Occt::Standard_Transient^ theObject);
	void UnregisterObject(Macad::Occt::Standard_Transient^ theObject);
	Macad::Occt::Graphic3d_ViewAffinity^ ObjectAffinity(Macad::Occt::Standard_Transient^ theObject);
	/// <summary>
	/// Returns TRUE if Device Lost flag has been set and presentation data should be reuploaded onto graphics driver.
	/// </summary>
	bool IsDeviceLost();
	/// <summary>
	/// Sets Device Lost flag.
	/// </summary>
	void SetDeviceLost();
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_StructureManager

//---------------------------------------------------------------------
//  Class  Graphic3d_ValidatedCubeMapOrder
//---------------------------------------------------------------------
/// <summary>
/// Graphic3d_ValidatedCubeMapOrder contains completely valid order object.
/// The only way to create this class except copy constructor is 'Validated' method of Graphic3d_CubeMapOrder.
/// This class can initialize Graphic3d_CubeMapOrder.
/// It is supposed to be used in case of necessity of completely valid order (in function argument as example).
/// It helps to automate order's valid checks.
/// </summary>
public ref class Graphic3d_ValidatedCubeMapOrder sealed : public BaseClass<::Graphic3d_ValidatedCubeMapOrder>
{

#ifdef Include_Graphic3d_ValidatedCubeMapOrder_h
public:
	Include_Graphic3d_ValidatedCubeMapOrder_h
#endif

public:
	Graphic3d_ValidatedCubeMapOrder(::Graphic3d_ValidatedCubeMapOrder* nativeInstance)
		: BaseClass<::Graphic3d_ValidatedCubeMapOrder>( nativeInstance, true )
	{}

	Graphic3d_ValidatedCubeMapOrder(::Graphic3d_ValidatedCubeMapOrder& nativeInstance)
		: BaseClass<::Graphic3d_ValidatedCubeMapOrder>( &nativeInstance, false )
	{}

	property ::Graphic3d_ValidatedCubeMapOrder* NativeInstance
	{
		::Graphic3d_ValidatedCubeMapOrder* get()
		{
			return static_cast<::Graphic3d_ValidatedCubeMapOrder*>(_NativeInstance);
		}
	}

public:
	/// <summary>
	/// Copy constructor.
	/// </summary>
	Graphic3d_ValidatedCubeMapOrder(Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ theOther);
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
public ref class Graphic3d_CubeMapOrder sealed : public BaseClass<::Graphic3d_CubeMapOrder>
{

#ifdef Include_Graphic3d_CubeMapOrder_h
public:
	Include_Graphic3d_CubeMapOrder_h
#endif

public:
	Graphic3d_CubeMapOrder(::Graphic3d_CubeMapOrder* nativeInstance)
		: BaseClass<::Graphic3d_CubeMapOrder>( nativeInstance, true )
	{}

	Graphic3d_CubeMapOrder(::Graphic3d_CubeMapOrder& nativeInstance)
		: BaseClass<::Graphic3d_CubeMapOrder>( &nativeInstance, false )
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
	Graphic3d_CubeMapOrder(Macad::Occt::Graphic3d_CubeMapOrder^ parameter1);
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
public ref class Graphic3d_CubeMap : public Macad::Occt::Graphic3d_TextureMap
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

	static Macad::Occt::Graphic3d_CubeMap^ CreateDowncasted(::Graphic3d_CubeMap* instance);

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
	Graphic3d_CubeMap(Macad::Occt::Graphic3d_CubeMap^ parameter1);
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
	/// Returns null handle if current side is invalid or if image is not in supported compressed format.
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
}; // class Graphic3d_CubeMap

//---------------------------------------------------------------------
//  Class  Graphic3d_CubeMapPacked
//---------------------------------------------------------------------
/// <summary>
/// Class is intended to process cubemap packed into single image plane.
/// </summary>
public ref class Graphic3d_CubeMapPacked sealed : public Macad::Occt::Graphic3d_CubeMap
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

	static Macad::Occt::Graphic3d_CubeMapPacked^ CreateDowncasted(::Graphic3d_CubeMapPacked* instance);

public:
	/// <summary>
	/// Initialization to load cubemap from file.
	/// </summary>
	/// @theFileName - path to the cubemap image
	/// @theOrder - array containing six different indexes of cubemap sides which maps tile grid to cubemap sides
	Graphic3d_CubeMapPacked(Macad::Occt::TCollection_AsciiString^ theFileName, Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ theOrder);
	/// <summary>
	/// Initialization to load cubemap from file.
	/// </summary>
	/// @theFileName - path to the cubemap image
	/// @theOrder - array containing six different indexes of cubemap sides which maps tile grid to cubemap sides
	Graphic3d_CubeMapPacked(Macad::Occt::TCollection_AsciiString^ theFileName);
	/// <summary>
	/// Initialization to set cubemap directly by PixMap.
	/// </summary>
	/// @thePixMap - origin PixMap
	/// @theOrder - array containing six different indexes of cubemap sides which maps tile grid to cubemap sides
	Graphic3d_CubeMapPacked(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ theOrder);
	/// <summary>
	/// Initialization to set cubemap directly by PixMap.
	/// </summary>
	/// @thePixMap - origin PixMap
	/// @theOrder - array containing six different indexes of cubemap sides which maps tile grid to cubemap sides
	Graphic3d_CubeMapPacked(Macad::Occt::Image_PixMap^ theImage);
	Graphic3d_CubeMapPacked(Macad::Occt::Graphic3d_CubeMapPacked^ parameter1);
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
}; // class Graphic3d_CubeMapPacked

//---------------------------------------------------------------------
//  Class  Graphic3d_CubeMapSeparate
//---------------------------------------------------------------------
/// <summary>
/// Class to manage cubemap located in six different images.
/// </summary>
public ref class Graphic3d_CubeMapSeparate sealed : public Macad::Occt::Graphic3d_CubeMap
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

	static Macad::Occt::Graphic3d_CubeMapSeparate^ CreateDowncasted(::Graphic3d_CubeMapSeparate* instance);

public:
	/// <summary>
	/// Initializes cubemap to be loaded from file.
	/// </summary>
	/// @thePaths - array of paths to separate image files (has to have size equal 6).
	/* Method skipped due to unknown mapping: void Graphic3d_CubeMapSeparate(NCollection_Array1<TCollection_AsciiString> thePaths, ) */
	/// <summary>
	/// Initializes cubemap to be set directly from PixMaps.
	/// </summary>
	/// @theImages - array if PixMaps (has to have size equal 6).
	/* Method skipped due to unknown mapping: void Graphic3d_CubeMapSeparate(NCollection_Array1<opencascade::handle<Image_PixMap>> theImages, ) */
	Graphic3d_CubeMapSeparate(Macad::Occt::Graphic3d_CubeMapSeparate^ parameter1);
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
}; // class Graphic3d_CubeMapSeparate

//---------------------------------------------------------------------
//  Class  Graphic3d_CullingTool
//---------------------------------------------------------------------
/// <summary>
/// Graphic3d_CullingTool class provides a possibility to store parameters of view volume,
/// such as its vertices and equations, and contains methods detecting if given AABB overlaps view volume.
/// </summary>
public ref class Graphic3d_CullingTool sealed : public BaseClass<::Graphic3d_CullingTool>
{

#ifdef Include_Graphic3d_CullingTool_h
public:
	Include_Graphic3d_CullingTool_h
#endif

public:
	Graphic3d_CullingTool(::Graphic3d_CullingTool* nativeInstance)
		: BaseClass<::Graphic3d_CullingTool>( nativeInstance, true )
	{}

	Graphic3d_CullingTool(::Graphic3d_CullingTool& nativeInstance)
		: BaseClass<::Graphic3d_CullingTool>( &nativeInstance, false )
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
	Graphic3d_CullingTool(Macad::Occt::Graphic3d_CullingTool^ parameter1);
	/// <summary>
	/// Retrieves view volume's planes equations and its vertices from projection and world-view matrices.
	/// </summary>
	/// <param name="theCamera">
	/// [in] camera definition
	/// </param>
	/// <param name="theModelWorld">
	/// [in] optional object transformation for computing frustum in object local coordinate system
	/// </param>
	/* Method skipped due to unknown mapping: void SetViewVolume(Graphic3d_Camera theCamera, Graphic3d_Mat4d theModelWorld, ) */
	/// <summary>
	/// Retrieves view volume's planes equations and its vertices from projection and world-view matrices.
	/// </summary>
	/// <param name="theCamera">
	/// [in] camera definition
	/// </param>
	/// <param name="theModelWorld">
	/// [in] optional object transformation for computing frustum in object local coordinate system
	/// </param>
	void SetViewVolume(Macad::Occt::Graphic3d_Camera^ theCamera);
	void SetViewportSize(int theViewportWidth, int theViewportHeight, double theResolutionRatio);
	/// <summary>
	/// Setup distance culling.
	/// </summary>
	/* Method skipped due to unknown mapping: void SetCullingDistance(CullingContext theCtx, Standard_Real theDistance, ) */
	/// <summary>
	/// Setup size culling.
	/// </summary>
	/* Method skipped due to unknown mapping: void SetCullingSize(CullingContext theCtx, Standard_Real theSize, ) */
	/// <summary>
	/// Caches view volume's vertices projections along its normals and AABBs dimensions.
	/// Must be called at the beginning of each BVH tree traverse loop.
	/// </summary>
	void CacheClipPtsProjections();
	/// <summary>
	/// Checks whether given AABB should be entirely culled or not.
	/// </summary>
	/// <param name="theCtx">
	///    [in] culling properties
	/// </param>
	/// <param name="theMinPnt">
	/// [in] maximum point of AABB
	/// </param>
	/// <param name="theMaxPnt">
	/// [in] minimum point of AABB
	/// </param>
	/// <param name="theIsInside">
	/// [out] flag indicating if AABB is fully inside; initial value should be set to TRUE
	/// </param>
	/// <returns>
	/// TRUE if AABB is completely outside of view frustum or culled by size/distance;
	/// FALSE in case of partial or complete overlap (use theIsInside to distinguish)
	/// </returns>
	/* Method skipped due to unknown mapping: bool IsCulled(CullingContext theCtx, Graphic3d_Vec3d theMinPnt, Graphic3d_Vec3d theMaxPnt, Standard_Boolean theIsInside, ) */
	/// <summary>
	/// Checks whether given AABB should be entirely culled or not.
	/// </summary>
	/// <param name="theCtx">
	///    [in] culling properties
	/// </param>
	/// <param name="theMinPnt">
	/// [in] maximum point of AABB
	/// </param>
	/// <param name="theMaxPnt">
	/// [in] minimum point of AABB
	/// </param>
	/// <param name="theIsInside">
	/// [out] flag indicating if AABB is fully inside; initial value should be set to TRUE
	/// </param>
	/// <returns>
	/// TRUE if AABB is completely outside of view frustum or culled by size/distance;
	/// FALSE in case of partial or complete overlap (use theIsInside to distinguish)
	/// </returns>
	/* Method skipped due to unknown mapping: bool IsCulled(CullingContext theCtx, Graphic3d_Vec3d theMinPnt, Graphic3d_Vec3d theMaxPnt, Standard_Boolean theIsInside, ) */
	/// <summary>
	/// Return the camera definition.
	/// </summary>
	Macad::Occt::Graphic3d_Camera^ Camera();
	/// <summary>
	/// Returns current projection matrix.
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_Mat4d ProjectionMatrix() */
	/// <summary>
	/// Returns current world view transformation matrix.
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_Mat4d WorldViewMatrix() */
	int ViewportWidth();
	int ViewportHeight();
	/// <summary>
	/// Returns state of current world view projection transformation matrices.
	/// </summary>
	Macad::Occt::Graphic3d_WorldViewProjState^ WorldViewProjState();
	/// <summary>
	/// Returns camera eye position.
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_Vec3d CameraEye() */
	/// <summary>
	/// Returns camera direction.
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_Vec3d CameraDirection() */
	/// <summary>
	/// Calculates signed distance from plane to point.
	/// </summary>
	/// <param name="theNormal">
	/// [in] the plane's normal.
	/// </param>
	/// <param name="thePnt">
	///    [in]
	/// </param>
	/* Method skipped due to unknown mapping: Standard_Real SignedPlanePointDistance(Graphic3d_Vec4d theNormal, Graphic3d_Vec4d thePnt, ) */
	/// <summary>
	/// Detects if AABB overlaps view volume using separating axis theorem (SAT).
	/// </summary>
	/// <param name="theMinPnt">
	///   [in] maximum point of AABB
	/// </param>
	/// <param name="theMaxPnt">
	///   [in] minimum point of AABB
	/// </param>
	/// <param name="theIsInside">
	/// [out] flag indicating if AABB is fully inside; initial value should be set to TRUE
	/// </param>
	/// <returns>
	/// TRUE if AABB is completely outside of view frustum;
	/// FALSE in case of partial or complete overlap (use theIsInside to distinguish)
	/// </returns>
	/// @sa SelectMgr_Frustum::hasOverlap()
	/* Method skipped due to unknown mapping: bool IsOutFrustum(Graphic3d_Vec3d theMinPnt, Graphic3d_Vec3d theMaxPnt, Standard_Boolean theIsInside, ) */
	/// <summary>
	/// Detects if AABB overlaps view volume using separating axis theorem (SAT).
	/// </summary>
	/// <param name="theMinPnt">
	///   [in] maximum point of AABB
	/// </param>
	/// <param name="theMaxPnt">
	///   [in] minimum point of AABB
	/// </param>
	/// <param name="theIsInside">
	/// [out] flag indicating if AABB is fully inside; initial value should be set to TRUE
	/// </param>
	/// <returns>
	/// TRUE if AABB is completely outside of view frustum;
	/// FALSE in case of partial or complete overlap (use theIsInside to distinguish)
	/// </returns>
	/// @sa SelectMgr_Frustum::hasOverlap()
	/* Method skipped due to unknown mapping: bool IsOutFrustum(Graphic3d_Vec3d theMinPnt, Graphic3d_Vec3d theMaxPnt, Standard_Boolean theIsInside, ) */
	/// <summary>
	/// Returns TRUE if given AABB should be discarded by distance culling criterion.
	/// </summary>
	/// <param name="theMinPnt">
	///   [in] maximum point of AABB
	/// </param>
	/// <param name="theMaxPnt">
	///   [in] minimum point of AABB
	/// </param>
	/// <param name="theIsInside">
	/// [out] flag indicating if AABB is fully inside; initial value should be set to TRUE
	/// </param>
	/// <returns>
	/// TRUE if AABB is completely behind culling distance;
	/// FALSE in case of partial or complete overlap (use theIsInside to distinguish)
	/// </returns>
	/* Method skipped due to unknown mapping: bool IsTooDistant(CullingContext theCtx, Graphic3d_Vec3d theMinPnt, Graphic3d_Vec3d theMaxPnt, Standard_Boolean theIsInside, ) */
	/// <summary>
	/// Returns TRUE if given AABB should be discarded by distance culling criterion.
	/// </summary>
	/// <param name="theMinPnt">
	///   [in] maximum point of AABB
	/// </param>
	/// <param name="theMaxPnt">
	///   [in] minimum point of AABB
	/// </param>
	/// <param name="theIsInside">
	/// [out] flag indicating if AABB is fully inside; initial value should be set to TRUE
	/// </param>
	/// <returns>
	/// TRUE if AABB is completely behind culling distance;
	/// FALSE in case of partial or complete overlap (use theIsInside to distinguish)
	/// </returns>
	/* Method skipped due to unknown mapping: bool IsTooDistant(CullingContext theCtx, Graphic3d_Vec3d theMinPnt, Graphic3d_Vec3d theMaxPnt, Standard_Boolean theIsInside, ) */
	/// <summary>
	/// Returns TRUE if given AABB should be discarded by size culling criterion.
	/// </summary>
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
public ref class Graphic3d_DataStructureManager : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_DataStructureManager^ CreateDowncasted(::Graphic3d_DataStructureManager* instance);

public:
	Graphic3d_DataStructureManager(Macad::Occt::Graphic3d_DataStructureManager^ parameter1);
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
public ref class Graphic3d_CView : public Macad::Occt::Graphic3d_DataStructureManager
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

	static Macad::Occt::Graphic3d_CView^ CreateDowncasted(::Graphic3d_CView* instance);

public:
	/// <summary>
	/// Constructor.
	/// </summary>
	Graphic3d_CView(Macad::Occt::Graphic3d_StructureManager^ theMgr);
	Graphic3d_CView(Macad::Occt::Graphic3d_CView^ parameter1);
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
	/// Switches computed HLR mode in the view
	/// </summary>
	void SetComputedMode(bool theMode);
	/// <summary>
	/// Returns the computed HLR mode state
	/// </summary>
	bool ComputedMode();
	/// <summary>
	/// Computes the new presentation of the structure  displayed in this view with the type Graphic3d_TOS_COMPUTED.
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
	/// Computes the new presentation of the structures displayed in this view with the type Graphic3d_TOS_COMPUTED.
	/// </summary>
	void Compute();
	/// <summary>
	/// Returns Standard_True if one of the structures displayed in the view contains Polygons, Triangles or Quadrangles.
	/// </summary>
	bool ContainsFacet();
	/// <summary>
	/// Returns Standard_True if one of the structures in the set contains Polygons, Triangles or Quadrangles.
	/// </summary>
	bool ContainsFacet(Macad::Occt::Graphic3d_MapOfStructure^ theSet);
	/// <summary>
	/// Returns the set of structures displayed in this view.
	/// </summary>
	void DisplayedStructures(Macad::Occt::Graphic3d_MapOfStructure^ theStructures);
	/// <summary>
	/// Returns number of displayed structures in the view.
	/// </summary>
	int NumberOfDisplayedStructures();
	/// <summary>
	/// Returns map of objects hidden within this specific view (not viewer-wise).
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Shared<NCollection_Map<const Standard_Transient *, NCollection_DefaultHasher<const Standard_Transient *>>, void HiddenObjects() */
	/// <summary>
	/// Returns map of objects hidden within this specific view (not viewer-wise).
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Shared<NCollection_Map<const Standard_Transient *, NCollection_DefaultHasher<const Standard_Transient *>>, void ChangeHiddenObjects() */
	/// <summary>
	/// Returns Standard_True in case if the structure with the given <theStructId> is
	/// in list of structures to be computed and stores computed struct to <theComputedStruct>.
	/// </summary>
	bool IsComputed(int theStructId, Macad::Occt::Graphic3d_Structure^ theComputedStruct);
	/// <summary>
	/// Returns the bounding box of all structures displayed in the view.
	/// If theToIncludeAuxiliary is TRUE, then the boundary box also includes minimum and maximum limits
	/// of graphical elements forming parts of infinite and other auxiliary structures.
	/// </summary>
	/// <param name="theToIncludeAuxiliary">
	/// consider also auxiliary presentations (with infinite flag or with trihedron transformation persistence)
	/// </param>
	/// <returns>
	/// computed bounding box
	/// </returns>
	Macad::Occt::Bnd_Box^ MinMaxValues(bool theToIncludeAuxiliary);
	/// <summary>
	/// Returns the bounding box of all structures displayed in the view.
	/// If theToIncludeAuxiliary is TRUE, then the boundary box also includes minimum and maximum limits
	/// of graphical elements forming parts of infinite and other auxiliary structures.
	/// </summary>
	/// <param name="theToIncludeAuxiliary">
	/// consider also auxiliary presentations (with infinite flag or with trihedron transformation persistence)
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
	/// However these extra drawings will be missed in image dump since it is performed from back buffer.
	/// Notice that since no pre-buffering used the V-Sync will be ignored and rendering could be seen
	/// in run-time (in case of slow hardware) and/or tearing may appear.
	/// So this is strongly recommended to draw only simple (fast) structures.
	/// 2. FALSE. Drawing immediate mode structures to the back buffer.
	/// The complete scene is redrawn first, so this mode is slower if scene contains complex data and/or V-Sync
	/// is turned on. But it works in any case and is especially useful for view dump because the dump image is read
	/// from the back buffer.
	/// </param>
	/// <returns>
	/// previous mode.
	/// </returns>
	bool SetImmediateModeDrawToFront(bool theDrawToFrontBuffer);
	/// <summary>
	/// Creates and maps rendering window to the view.
	/// </summary>
	/// <param name="theWindow">
	/// [in] the window.
	/// </param>
	/// <param name="theContext">
	/// [in] the rendering context. If NULL the context will be created internally.
	/// </param>
	void SetWindow(Macad::Occt::Aspect_Window^ theWindow, System::IntPtr theContext);
	/// <summary>
	/// Creates and maps rendering window to the view.
	/// </summary>
	/// <param name="theWindow">
	/// [in] the window.
	/// </param>
	/// <param name="theContext">
	/// [in] the rendering context. If NULL the context will be created internally.
	/// </param>
	void SetWindow(Macad::Occt::Aspect_Window^ theWindow);
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
	bool BufferDump(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::Graphic3d_BufferType% theBufferType);
	/// <summary>
	/// Marks BVH tree and the set of BVH primitives of correspondent priority list with id theLayerId as outdated.
	/// </summary>
	void InvalidateBVHData(int theLayerId);
	/// <summary>
	/// Add a layer to the view.
	/// </summary>
	/// <param name="theNewLayerId">
	/// [in] id of new layer, should be > 0 (negative values are reserved for default layers).
	/// </param>
	/// <param name="theSettings">
	///   [in] new layer settings
	/// </param>
	/// <param name="theLayerAfter">
	/// [in] id of layer to append new layer before
	/// </param>
	void InsertLayerBefore(int theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerAfter);
	/// <summary>
	/// Add a layer to the view.
	/// </summary>
	/// <param name="theNewLayerId">
	///  [in] id of new layer, should be > 0 (negative values are reserved for default layers).
	/// </param>
	/// <param name="theSettings">
	///    [in] new layer settings
	/// </param>
	/// <param name="theLayerBefore">
	/// [in] id of layer to append new layer after
	/// </param>
	void InsertLayerAfter(int theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerBefore);
	/// <summary>
	/// Returns the maximum Z layer ID.
	/// First layer ID is Graphic3d_ZLayerId_Default, last ID is ZLayerMax().
	/// </summary>
	int ZLayerMax();
	/// <summary>
	/// Returns the list of layers.
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_List<opencascade::handle<Graphic3d_Layer>> Layers() */
	/// <summary>
	/// Returns layer with given ID or NULL if undefined.
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_Layer Layer(Standard_Integer theLayerId, ) */
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
	/// <param name="theTextureMap">
	/// [in] source to set a background;
	/// should be either Graphic3d_Texture2D or Graphic3d_CubeMap
	/// </param>
	/// <param name="theToUpdatePBREnv">
	/// [in] defines whether IBL maps will be generated or not
	/// (see GeneratePBREnvironment())
	/// </param>
	void SetBackgroundImage(Macad::Occt::Graphic3d_TextureMap^ theTextureMap, bool theToUpdatePBREnv);
	/// <summary>
	/// Sets image texture or environment cubemap as background.
	/// </summary>
	/// <param name="theTextureMap">
	/// [in] source to set a background;
	/// should be either Graphic3d_Texture2D or Graphic3d_CubeMap
	/// </param>
	/// <param name="theToUpdatePBREnv">
	/// [in] defines whether IBL maps will be generated or not
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
	/// Enables or disables IBL (Image Based Lighting) from background cubemap.
	/// Has no effect if PBR is not used.
	/// </summary>
	/// <param name="in]">
	/// theToEnableIBL enable or disable IBL from background cubemap
	/// </param>
	/// <param name="in]">
	/// theToUpdate redraw the view
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
	/// <summary>
	/// Fill in the dictionary with diagnostic info.
	/// Should be called within rendering thread.
	/// 
	/// This API should be used only for user output or for creating automated reports.
	/// The format of returned information (e.g. key-value layout)
	/// is NOT part of this API and can be changed at any time.
	/// Thus application should not parse returned information to weed out specific parameters.
	/// </summary>
	void DiagnosticInformation(Macad::Occt::TColStd_IndexedDataMapOfStringString^ theDict, Macad::Occt::Graphic3d_DiagnosticInfo theFlags);
	/// <summary>
	/// Returns string with statistic performance info.
	/// </summary>
	Macad::Occt::TCollection_AsciiString^ StatisticInformation();
	/// <summary>
	/// Fills in the dictionary with statistic performance info.
	/// </summary>
	void StatisticInformation(Macad::Occt::TColStd_IndexedDataMapOfStringString^ theDict);
	/// <summary>
	/// Return unit scale factor defined as scale factor for m (meters); 1.0 by default.
	/// Normally, view definition is unitless, however some operations like VR input requires proper units mapping.
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
	/// <param name="thePoseXR">
	/// [in] transformation defined in VR local coordinate system,
	/// oriented as Y-up, X-right and -Z-forward
	/// </param>
	/// <returns>
	/// transformation defining orientation of XR pose in world space
	/// </returns>
	Macad::Occt::Trsf PoseXRToWorld(Macad::Occt::Trsf thePoseXR);
	/// <summary>
	/// Returns view direction in the world space based on XR pose.
	/// </summary>
	/// <param name="thePoseXR">
	/// [in] transformation defined in VR local coordinate system,
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
	/// Returns data of a graduated trihedron
	/// </summary>
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
	/// Sets minimum and maximum points of scene bounding box for Graduated Trihedron stored in graphic view object.
	/// </summary>
	/// <param name="theMin">
	/// [in] the minimum point of scene.
	/// </param>
	/// <param name="theMax">
	/// [in] the maximum point of scene.
	/// </param>
	/* Method skipped due to unknown mapping: void GraduatedTrihedronMinMaxValues(Graphic3d_Vec3 theMin, Graphic3d_Vec3 theMax, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_CView

//---------------------------------------------------------------------
//  Class  Graphic3d_GraduatedTrihedron
//---------------------------------------------------------------------
/// <summary>
/// Defines the class of a graduated trihedron.
/// It contains main style parameters for implementation of graduated trihedron
/// </summary>
/// @sa OpenGl_GraduatedTrihedron
public ref class Graphic3d_GraduatedTrihedron sealed : public BaseClass<::Graphic3d_GraduatedTrihedron>
{

#ifdef Include_Graphic3d_GraduatedTrihedron_h
public:
	Include_Graphic3d_GraduatedTrihedron_h
#endif

public:
	Graphic3d_GraduatedTrihedron(::Graphic3d_GraduatedTrihedron* nativeInstance)
		: BaseClass<::Graphic3d_GraduatedTrihedron>( nativeInstance, true )
	{}

	Graphic3d_GraduatedTrihedron(::Graphic3d_GraduatedTrihedron& nativeInstance)
		: BaseClass<::Graphic3d_GraduatedTrihedron>( &nativeInstance, false )
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
	/// Default constructor
	/// Constructs the default graduated trihedron with grid, X, Y, Z axes, and tickmarks
	/// </summary>
	/* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, Standard_Integer theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, Standard_Integer theValuesSize, Standard_ShortReal theArrowsLength, Quantity_Color theGridColor, Standard_Boolean theToDrawGrid, Standard_Boolean theToDrawAxes, ) */
	/// <summary>
	/// Default constructor
	/// Constructs the default graduated trihedron with grid, X, Y, Z axes, and tickmarks
	/// </summary>
	/* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, Standard_Integer theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, Standard_Integer theValuesSize, Standard_ShortReal theArrowsLength, Quantity_Color theGridColor, Standard_Boolean theToDrawGrid, Standard_Boolean theToDrawAxes, ) */
	/// <summary>
	/// Default constructor
	/// Constructs the default graduated trihedron with grid, X, Y, Z axes, and tickmarks
	/// </summary>
	/* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, Standard_Integer theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, Standard_Integer theValuesSize, Standard_ShortReal theArrowsLength, Quantity_Color theGridColor, Standard_Boolean theToDrawGrid, Standard_Boolean theToDrawAxes, ) */
	/// <summary>
	/// Default constructor
	/// Constructs the default graduated trihedron with grid, X, Y, Z axes, and tickmarks
	/// </summary>
	/* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, Standard_Integer theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, Standard_Integer theValuesSize, Standard_ShortReal theArrowsLength, Quantity_Color theGridColor, Standard_Boolean theToDrawGrid, Standard_Boolean theToDrawAxes, ) */
	/// <summary>
	/// Default constructor
	/// Constructs the default graduated trihedron with grid, X, Y, Z axes, and tickmarks
	/// </summary>
	/* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, Standard_Integer theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, Standard_Integer theValuesSize, Standard_ShortReal theArrowsLength, Quantity_Color theGridColor, Standard_Boolean theToDrawGrid, Standard_Boolean theToDrawAxes, ) */
	/// <summary>
	/// Default constructor
	/// Constructs the default graduated trihedron with grid, X, Y, Z axes, and tickmarks
	/// </summary>
	/* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, Standard_Integer theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, Standard_Integer theValuesSize, Standard_ShortReal theArrowsLength, Quantity_Color theGridColor, Standard_Boolean theToDrawGrid, Standard_Boolean theToDrawAxes, ) */
	/// <summary>
	/// Default constructor
	/// Constructs the default graduated trihedron with grid, X, Y, Z axes, and tickmarks
	/// </summary>
	/* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, Standard_Integer theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, Standard_Integer theValuesSize, Standard_ShortReal theArrowsLength, Quantity_Color theGridColor, Standard_Boolean theToDrawGrid, Standard_Boolean theToDrawAxes, ) */
	/// <summary>
	/// Default constructor
	/// Constructs the default graduated trihedron with grid, X, Y, Z axes, and tickmarks
	/// </summary>
	/* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, Standard_Integer theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, Standard_Integer theValuesSize, Standard_ShortReal theArrowsLength, Quantity_Color theGridColor, Standard_Boolean theToDrawGrid, Standard_Boolean theToDrawAxes, ) */
	/// <summary>
	/// Default constructor
	/// Constructs the default graduated trihedron with grid, X, Y, Z axes, and tickmarks
	/// </summary>
	/* Method skipped due to unknown mapping: void Graphic3d_GraduatedTrihedron(TCollection_AsciiString theNamesFont, Font_FontAspect theNamesStyle, Standard_Integer theNamesSize, TCollection_AsciiString theValuesFont, Font_FontAspect theValuesStyle, Standard_Integer theValuesSize, Standard_ShortReal theArrowsLength, Quantity_Color theGridColor, Standard_Boolean theToDrawGrid, Standard_Boolean theToDrawAxes, ) */
	/// <summary>
	/// Default constructor
	/// Constructs the default graduated trihedron with grid, X, Y, Z axes, and tickmarks
	/// </summary>
	Graphic3d_GraduatedTrihedron(Macad::Occt::TCollection_AsciiString^ theNamesFont);
	Graphic3d_GraduatedTrihedron(Macad::Occt::Graphic3d_GraduatedTrihedron^ parameter1);
	/* Method skipped due to unknown mapping: AxisAspect ChangeXAxisAspect() */
	/* Method skipped due to unknown mapping: AxisAspect ChangeYAxisAspect() */
	/* Method skipped due to unknown mapping: AxisAspect ChangeZAxisAspect() */
	/* Method skipped due to unknown mapping: AxisAspect ChangeAxisAspect(Standard_Integer theIndex, ) */
	/* Method skipped due to unknown mapping: AxisAspect XAxisAspect() */
	/* Method skipped due to unknown mapping: AxisAspect YAxisAspect() */
	/* Method skipped due to unknown mapping: AxisAspect ZAxisAspect() */
	/* Method skipped due to unknown mapping: AxisAspect AxisAspectAt(Standard_Integer theIndex, ) */
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
public ref class Graphic3d_RenderingParams sealed : public BaseClass<::Graphic3d_RenderingParams>
{

#ifdef Include_Graphic3d_RenderingParams_h
public:
	Include_Graphic3d_RenderingParams_h
#endif

public:
	Graphic3d_RenderingParams(::Graphic3d_RenderingParams* nativeInstance)
		: BaseClass<::Graphic3d_RenderingParams>( nativeInstance, true )
	{}

	Graphic3d_RenderingParams(::Graphic3d_RenderingParams& nativeInstance)
		: BaseClass<::Graphic3d_RenderingParams>( &nativeInstance, false )
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
		Anaglyph_RedCyan_Simple = 0,
		Anaglyph_RedCyan_Optimized = 1,
		Anaglyph_YellowBlue_Simple = 2,
		Anaglyph_YellowBlue_Optimized = 3,
		Anaglyph_GreenMagenta_Simple = 4,
		Anaglyph_UserDefined = 5
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
		PerfCounters_NONE = 0,
		PerfCounters_FrameRate = 1,
		PerfCounters_CPU = 2,
		PerfCounters_Layers = 4,
		PerfCounters_Structures = 8,
		PerfCounters_Groups = 16,
		PerfCounters_GroupArrays = 32,
		PerfCounters_Triangles = 64,
		PerfCounters_Points = 128,
		PerfCounters_Lines = 256,
		PerfCounters_EstimMem = 512,
		PerfCounters_FrameTime = 1024,
		PerfCounters_FrameTimeMax = 2048,
		PerfCounters_SkipImmediate = 4096,
		PerfCounters_Basic = 15,
		PerfCounters_Extended = 1023,
		PerfCounters_All = 4095
	}; // enum  class PerfCounters

	//---------------------------------------------------------------------
	//  Enum  FrustumCulling
	//---------------------------------------------------------------------
	/// <summary>
	/// State of frustum culling optimization.
	/// </summary>
	enum class FrustumCulling
	{
		FrustumCulling_Off = 0,
		FrustumCulling_On = 1,
		FrustumCulling_NoUpdate = 2
	}; // enum  class FrustumCulling

	/// <summary>
	/// Creates default rendering parameters.
	/// </summary>
	Graphic3d_RenderingParams();
	Graphic3d_RenderingParams(Macad::Occt::Graphic3d_RenderingParams^ parameter1);
	/// <summary>
	/// Returns resolution ratio.
	/// </summary>
	float ResolutionRatio();
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Graphic3d_RenderingParams

//---------------------------------------------------------------------
//  Class  Graphic3d_Texture2D
//---------------------------------------------------------------------
/// <summary>
/// This abstract class for managing 2D textures
/// </summary>
public ref class Graphic3d_Texture2D : public Macad::Occt::Graphic3d_TextureMap
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

	static Macad::Occt::Graphic3d_Texture2D^ CreateDowncasted(::Graphic3d_Texture2D* instance);

public:
	Graphic3d_Texture2D(Macad::Occt::Graphic3d_Texture2D^ parameter1);
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
	/// Note that this method does not invalidate already uploaded resources - consider calling ::UpdateRevision() if needed.
	/// </summary>
	void SetImage(Macad::Occt::Image_PixMap^ thePixMap);
	/// <summary>
	/// Return true if mip-maps should be used.
	/// </summary>
	bool HasMipMaps();
	/// <summary>
	/// Set if mip-maps should be used (generated if needed).
	/// Note that this method should be called before loading / using the texture.
	/// </summary>
	void SetMipMaps(bool theToUse);
}; // class Graphic3d_Texture2D

//---------------------------------------------------------------------
//  Class  Graphic3d_Texture2Dmanual
//---------------------------------------------------------------------
/// <summary>
/// This class defined a manual texture 2D
/// facets MUST define texture coordinate
/// if you want to see somethings on.
/// </summary>
public ref class Graphic3d_Texture2Dmanual sealed : public Macad::Occt::Graphic3d_Texture2D
{

#ifdef Include_Graphic3d_Texture2Dmanual_h
public:
	Include_Graphic3d_Texture2Dmanual_h
#endif

public:
	Graphic3d_Texture2Dmanual(::Graphic3d_Texture2Dmanual* nativeInstance)
		: Macad::Occt::Graphic3d_Texture2D( nativeInstance )
	{}

	Graphic3d_Texture2Dmanual(::Graphic3d_Texture2Dmanual& nativeInstance)
		: Macad::Occt::Graphic3d_Texture2D( nativeInstance )
	{}

	property ::Graphic3d_Texture2Dmanual* NativeInstance
	{
		::Graphic3d_Texture2Dmanual* get()
		{
			return static_cast<::Graphic3d_Texture2Dmanual*>(_NativeInstance);
		}
	}

	static Macad::Occt::Graphic3d_Texture2Dmanual^ CreateDowncasted(::Graphic3d_Texture2Dmanual* instance);

public:
	/// <summary>
	/// Creates a texture from a file.
	/// MipMaps levels will be automatically generated if needed.
	/// </summary>
	Graphic3d_Texture2Dmanual(Macad::Occt::TCollection_AsciiString^ theFileName);
	/// <summary>
	/// Creates a texture from a predefined texture name set.
	/// MipMaps levels will be automatically generated if needed.
	/// </summary>
	Graphic3d_Texture2Dmanual(Macad::Occt::Graphic3d_NameOfTexture2D theNOT);
	/// <summary>
	/// Creates a texture from the pixmap.
	/// MipMaps levels will be automatically generated if needed.
	/// </summary>
	Graphic3d_Texture2Dmanual(Macad::Occt::Image_PixMap^ thePixMap);
	Graphic3d_Texture2Dmanual(Macad::Occt::Graphic3d_Texture2Dmanual^ parameter1);
}; // class Graphic3d_Texture2Dmanual

//---------------------------------------------------------------------
//  Class  Graphic3d_TextureEnv
//---------------------------------------------------------------------
/// <summary>
/// This class provides environment texture.
/// </summary>
public ref class Graphic3d_TextureEnv sealed : public Macad::Occt::Graphic3d_TextureRoot
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

	static Macad::Occt::Graphic3d_TextureEnv^ CreateDowncasted(::Graphic3d_TextureEnv* instance);

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
	Graphic3d_TextureEnv(Macad::Occt::Graphic3d_TextureEnv^ parameter1);
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
}; // class Graphic3d_TextureEnv

//---------------------------------------------------------------------
//  Class  Graphic3d_LightSet
//---------------------------------------------------------------------
/// <summary>
/// Class defining the set of light sources.
/// </summary>
public ref class Graphic3d_LightSet sealed : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_LightSet^ CreateDowncasted(::Graphic3d_LightSet* instance);

public:
	//---------------------------------------------------------------------
	//  Enum  IterationFilter
	//---------------------------------------------------------------------
	/// <summary>
	/// Iteration filter flags.
	/// </summary>
	enum class IterationFilter
	{
		IterationFilter_None = 0,
		IterationFilter_ExcludeAmbient = 2,
		IterationFilter_ExcludeDisabled = 4,
		IterationFilter_ExcludeNoShadow = 8,
		IterationFilter_ExcludeDisabledAndAmbient = 6,
		IterationFilter_ActiveShadowCasters = 14
	}; // enum  class IterationFilter

	/// <summary>
	/// Empty constructor.
	/// </summary>
	Graphic3d_LightSet();
	Graphic3d_LightSet(Macad::Occt::Graphic3d_LightSet^ parameter1);
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
	Macad::Occt::Graphic3d_CLight^ Value(int theIndex);
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
	size_t UpdateRevision();
	/// <summary>
	/// Return light sources revision.
	/// </summary>
	/// @sa UpdateRevision()
	size_t Revision();
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
	/// Returns cumulative ambient color, which is computed as sum of all enabled ambient light sources.
	/// Values are NOT clamped (can be greater than 1.0f) and alpha component is fixed to 1.0f.
	/// </summary>
	/// @sa UpdateRevision()
	/* Method skipped due to unknown mapping: Graphic3d_Vec4 AmbientColor() */
	/// <summary>
	/// Returns a string defining a list of enabled light sources as concatenation of letters 'd' (Directional), 'p' (Point), 's' (Spot)
	/// depending on the type of light source in the list.
	/// Example: "dppp".
	/// </summary>
	/// @sa UpdateRevision()
	Macad::Occt::TCollection_AsciiString^ KeyEnabledLong();
	/// <summary>
	/// Returns a string defining a list of enabled light sources as concatenation of letters 'd' (Directional), 'p' (Point), 's' (Spot)
	/// depending on the type of light source in the list, specified only once.
	/// Example: "dp".
	/// </summary>
	/// @sa UpdateRevision()
	Macad::Occt::TCollection_AsciiString^ KeyEnabledShort();
}; // class Graphic3d_LightSet

//---------------------------------------------------------------------
//  Class  Graphic3d_FrameStatsData
//---------------------------------------------------------------------
/// <summary>
/// Data frame definition.
/// </summary>
public ref class Graphic3d_FrameStatsData : public BaseClass<::Graphic3d_FrameStatsData>
{

#ifdef Include_Graphic3d_FrameStatsData_h
public:
	Include_Graphic3d_FrameStatsData_h
#endif

protected:
	Graphic3d_FrameStatsData(InitMode init)
		: BaseClass<::Graphic3d_FrameStatsData>( init )
	{}

public:
	Graphic3d_FrameStatsData(::Graphic3d_FrameStatsData* nativeInstance)
		: BaseClass<::Graphic3d_FrameStatsData>( nativeInstance, true )
	{}

	Graphic3d_FrameStatsData(::Graphic3d_FrameStatsData& nativeInstance)
		: BaseClass<::Graphic3d_FrameStatsData>( &nativeInstance, false )
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
	Graphic3d_FrameStatsData(Macad::Occt::Graphic3d_FrameStatsData^ parameter1);
	/// <summary>
	/// Returns FPS (frames per seconds, elapsed time).
	/// This number indicates an actual frame rate averaged for several frames within UpdateInterval() duration,
	/// basing on a real elapsed time between updates.
	/// </summary>
	double FrameRate();
	/// <summary>
	/// Returns CPU FPS (frames per seconds, CPU time).
	/// This number indicates a PREDICTED frame rate,
	/// basing on CPU elapsed time between updates and NOT real elapsed time (which might include periods of CPU inactivity).
	/// Number is expected to be greater then actual frame rate returned by FrameRate().
	/// Values significantly greater actual frame rate indicate that rendering is limited by GPU performance (CPU is stalled in-between),
	/// while values around actual frame rate indicate rendering being limited by CPU performance (GPU is stalled in-between).
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
	size_t CounterValue(Macad::Occt::Graphic3d_FrameStatsCounter theIndex);
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
public ref class Graphic3d_FrameStatsDataTmp sealed : public Macad::Occt::Graphic3d_FrameStatsData
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
	/// Empty constructor.
	/// </summary>
	Graphic3d_FrameStatsDataTmp();
	Graphic3d_FrameStatsDataTmp(Macad::Occt::Graphic3d_FrameStatsDataTmp^ parameter1);
	/// <summary>
	/// Compute average data considering the amount of rendered frames.
	/// </summary>
	void FlushTimers(size_t theNbFrames, bool theIsFinal);
	/// <summary>
	/// Reset data.
	/// </summary>
	void Reset();
	/// <summary>
	/// Returns FPS (frames per seconds, elapsed time).
	/// </summary>
	double ChangeFrameRate();
	/// <summary>
	/// Returns CPU FPS (frames per seconds, CPU time).
	/// </summary>
	double ChangeFrameRateCpu();
	/// <summary>
	/// Returns FPS for immediate redraws.
	/// </summary>
	double ChangeImmediateFrameRate();
	/// <summary>
	/// Returns CPU FPS for immediate redraws.
	/// </summary>
	double ChangeImmediateFrameRateCpu();
	/// <summary>
	/// Return a timer object for time measurements.
	/// </summary>
	/* Method skipped due to unknown mapping: OSD_Timer ChangeTimer(Graphic3d_FrameStatsTimer theTimer, ) */
	/// <summary>
	/// Get counter value.
	/// </summary>
	size_t ChangeCounterValue(Macad::Occt::Graphic3d_FrameStatsCounter theIndex);
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
public ref class Graphic3d_FrameStats : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_FrameStats^ CreateDowncasted(::Graphic3d_FrameStats* instance);

public:
	/// <summary>
	/// Default constructor.
	/// </summary>
	Graphic3d_FrameStats();
	Graphic3d_FrameStats(Macad::Occt::Graphic3d_FrameStats^ parameter1);
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
	/* Method skipped due to unknown mapping: TCollection_AsciiString FormatStats(PerfCounters theFlags, ) */
	/// <summary>
	/// Fill in the dictionary with formatted statistic info.
	/// </summary>
	/* Method skipped due to unknown mapping: void FormatStats(TColStd_IndexedDataMapOfStringString theDict, PerfCounters theFlags, ) */
	/// <summary>
	/// Returns duration of the last frame in seconds.
	/// </summary>
	double FrameDuration();
	/// <summary>
	/// Returns FPS (frames per seconds, elapsed time).
	/// This number indicates an actual frame rate averaged for several frames within UpdateInterval() duration,
	/// basing on a real elapsed time between updates.
	/// </summary>
	double FrameRate();
	/// <summary>
	/// Returns CPU FPS (frames per seconds, CPU time).
	/// This number indicates a PREDICTED frame rate,
	/// basing on CPU elapsed time between updates and NOT real elapsed time (which might include periods of CPU inactivity).
	/// Number is expected to be greater then actual frame rate returned by FrameRate().
	/// Values significantly greater actual frame rate indicate that rendering is limited by GPU performance (CPU is stalled in-between),
	/// while values around actual frame rate indicate rendering being limited by CPU performance (GPU is stalled in-between).
	/// </summary>
	double FrameRateCpu();
	/// <summary>
	/// Returns value of specified counter, cached between stats updates.
	/// Should NOT be called between ::FrameStart() and ::FrameEnd() calls.
	/// </summary>
	size_t CounterValue(Macad::Occt::Graphic3d_FrameStatsCounter theCounter);
	/// <summary>
	/// Returns value of specified timer for modification, should be called between ::FrameStart() and ::FrameEnd() calls.
	/// Should NOT be called between ::FrameStart() and ::FrameEnd() calls.
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
	/// <summary>
	/// Returns data frames.
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Array1<Graphic3d_FrameStatsData> DataFrames() */
	/// <summary>
	/// Returns data frames.
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Array1<Graphic3d_FrameStatsData> ChangeDataFrames() */
	/// <summary>
	/// Returns value of specified counter for modification, should be called between ::FrameStart() and ::FrameEnd() calls.
	/// </summary>
	size_t ChangeCounter(Macad::Occt::Graphic3d_FrameStatsCounter theCounter);
	/// <summary>
	/// Returns value of specified timer for modification, should be called between ::FrameStart() and ::FrameEnd() calls.
	/// </summary>
	double ChangeTimer(Macad::Occt::Graphic3d_FrameStatsTimer theTimer);
	/// <summary>
	/// Returns currently filling data frame for modification, should be called between ::FrameStart() and ::FrameEnd() calls.
	/// </summary>
	Macad::Occt::Graphic3d_FrameStatsDataTmp^ ActiveDataFrame();
}; // class Graphic3d_FrameStats

//---------------------------------------------------------------------
//  Class  Graphic3d_GraphicDriverFactory
//---------------------------------------------------------------------
/// <summary>
/// This class for creation of Graphic3d_GraphicDriver.
/// </summary>
public ref class Graphic3d_GraphicDriverFactory : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_GraphicDriverFactory^ CreateDowncasted(::Graphic3d_GraphicDriverFactory* instance);

public:
	Graphic3d_GraphicDriverFactory(Macad::Occt::Graphic3d_GraphicDriverFactory^ parameter1);
	/// <summary>
	/// Registers factory.
	/// </summary>
	/// <param name="theFactory">
	///     [in] factory to register
	/// </param>
	/// <param name="theIsPreferred">
	/// [in] add to the beginning of the list when TRUE, or add to the end otherwise
	/// </param>
	static void RegisterFactory(Macad::Occt::Graphic3d_GraphicDriverFactory^ theFactory, bool theIsPreferred);
	/// <summary>
	/// Registers factory.
	/// </summary>
	/// <param name="theFactory">
	///     [in] factory to register
	/// </param>
	/// <param name="theIsPreferred">
	/// [in] add to the beginning of the list when TRUE, or add to the end otherwise
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
	/// <summary>
	/// Creates new empty graphic driver.
	/// </summary>
	/* Method skipped due to unknown mapping: Graphic3d_GraphicDriver CreateDriver(Aspect_DisplayConnection theDisp, ) */
	/// <summary>
	/// Return driver factory name.
	/// </summary>
	Macad::Occt::TCollection_AsciiString^ Name();
}; // class Graphic3d_GraphicDriverFactory

//---------------------------------------------------------------------
//  Class  Graphic3d_GroupDefinitionError
//---------------------------------------------------------------------
public ref class Graphic3d_GroupDefinitionError sealed : public Macad::Occt::Standard_OutOfRange
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

	static Macad::Occt::Graphic3d_GroupDefinitionError^ CreateDowncasted(::Graphic3d_GroupDefinitionError* instance);

public:
	Graphic3d_GroupDefinitionError();
	Graphic3d_GroupDefinitionError(System::String^ theMessage);
	Graphic3d_GroupDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
	Graphic3d_GroupDefinitionError(Macad::Occt::Graphic3d_GroupDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Graphic3d_GroupDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Graphic3d_GroupDefinitionError^ NewInstance();
	static Macad::Occt::Graphic3d_GroupDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Graphic3d_GroupDefinitionError

//---------------------------------------------------------------------
//  Class  Graphic3d_MaterialDefinitionError
//---------------------------------------------------------------------
public ref class Graphic3d_MaterialDefinitionError sealed : public Macad::Occt::Standard_OutOfRange
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

	static Macad::Occt::Graphic3d_MaterialDefinitionError^ CreateDowncasted(::Graphic3d_MaterialDefinitionError* instance);

public:
	Graphic3d_MaterialDefinitionError();
	Graphic3d_MaterialDefinitionError(System::String^ theMessage);
	Graphic3d_MaterialDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
	Graphic3d_MaterialDefinitionError(Macad::Occt::Graphic3d_MaterialDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Graphic3d_MaterialDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Graphic3d_MaterialDefinitionError^ NewInstance();
	static Macad::Occt::Graphic3d_MaterialDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Graphic3d_MaterialDefinitionError

//---------------------------------------------------------------------
//  Class  Graphic3d_MediaTexture
//---------------------------------------------------------------------
/// <summary>
/// Texture adapter for Media_Frame.
/// </summary>
public ref class Graphic3d_MediaTexture sealed : public Macad::Occt::Graphic3d_Texture2D
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

	static Macad::Occt::Graphic3d_MediaTexture^ CreateDowncasted(::Graphic3d_MediaTexture* instance);

public:
	/// <summary>
	/// Main constructor.
	/// </summary>
	/* Method skipped due to unknown mapping: void Graphic3d_MediaTexture(NCollection_Shared<Standard_Mutex, void theMutex, Standard_Integer thePlane, ) */
	/// <summary>
	/// Main constructor.
	/// </summary>
	/* Method skipped due to unknown mapping: void Graphic3d_MediaTexture(NCollection_Shared<Standard_Mutex, void theMutex, Standard_Integer thePlane, ) */
	Graphic3d_MediaTexture(Macad::Occt::Graphic3d_MediaTexture^ parameter1);
	/// <summary>
	/// Image reader.
	/// </summary>
	Macad::Occt::Image_PixMap^ GetImage(Macad::Occt::Image_SupportedFormats^ theSupported);
	/// <summary>
	/// Return the frame.
	/// </summary>
	/* Method skipped due to unknown mapping: Media_Frame Frame() */
	/// <summary>
	/// Set the frame.
	/// </summary>
	/* Method skipped due to unknown mapping: void SetFrame(Media_Frame theFrame, ) */
	/// <summary>
	/// Regenerate a new texture id
	/// </summary>
	void GenerateNewId();
}; // class Graphic3d_MediaTexture

//---------------------------------------------------------------------
//  Class  Graphic3d_PriorityDefinitionError
//---------------------------------------------------------------------
public ref class Graphic3d_PriorityDefinitionError sealed : public Macad::Occt::Standard_OutOfRange
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

	static Macad::Occt::Graphic3d_PriorityDefinitionError^ CreateDowncasted(::Graphic3d_PriorityDefinitionError* instance);

public:
	Graphic3d_PriorityDefinitionError();
	Graphic3d_PriorityDefinitionError(System::String^ theMessage);
	Graphic3d_PriorityDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
	Graphic3d_PriorityDefinitionError(Macad::Occt::Graphic3d_PriorityDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Graphic3d_PriorityDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Graphic3d_PriorityDefinitionError^ NewInstance();
	static Macad::Occt::Graphic3d_PriorityDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Graphic3d_PriorityDefinitionError

//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderManager
//---------------------------------------------------------------------
/// <summary>
/// This class is responsible for generation of shader programs.
/// </summary>
public ref class Graphic3d_ShaderManager sealed : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::Graphic3d_ShaderManager^ CreateDowncasted(::Graphic3d_ShaderManager* instance);

public:
	/// <summary>
	/// Creates new empty shader manager.
	/// </summary>
	Graphic3d_ShaderManager(Macad::Occt::Aspect_GraphicsLibrary theGapi);
	Graphic3d_ShaderManager(Macad::Occt::Graphic3d_ShaderManager^ parameter1);
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
}; // class Graphic3d_ShaderManager

//---------------------------------------------------------------------
//  Class  Graphic3d_StructureDefinitionError
//---------------------------------------------------------------------
public ref class Graphic3d_StructureDefinitionError sealed : public Macad::Occt::Standard_OutOfRange
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

	static Macad::Occt::Graphic3d_StructureDefinitionError^ CreateDowncasted(::Graphic3d_StructureDefinitionError* instance);

public:
	Graphic3d_StructureDefinitionError();
	Graphic3d_StructureDefinitionError(System::String^ theMessage);
	Graphic3d_StructureDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
	Graphic3d_StructureDefinitionError(Macad::Occt::Graphic3d_StructureDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Graphic3d_StructureDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Graphic3d_StructureDefinitionError^ NewInstance();
	static Macad::Occt::Graphic3d_StructureDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Graphic3d_StructureDefinitionError

//---------------------------------------------------------------------
//  Class  Graphic3d_Texture1D
//---------------------------------------------------------------------
/// <summary>
/// This is an abstract class for managing 1D textures.
/// </summary>
public ref class Graphic3d_Texture1D : public Macad::Occt::Graphic3d_TextureMap
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

	static Macad::Occt::Graphic3d_Texture1D^ CreateDowncasted(::Graphic3d_Texture1D* instance);

public:
	Graphic3d_Texture1D(Macad::Occt::Graphic3d_Texture1D^ parameter1);
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
}; // class Graphic3d_Texture1D

//---------------------------------------------------------------------
//  Class  Graphic3d_Texture1Dmanual
//---------------------------------------------------------------------
/// <summary>
/// This class provides the implementation of a manual 1D texture.
/// you MUST provides texture coordinates on your facets if you want to see your texture.
/// </summary>
public ref class Graphic3d_Texture1Dmanual sealed : public Macad::Occt::Graphic3d_Texture1D
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

	static Macad::Occt::Graphic3d_Texture1Dmanual^ CreateDowncasted(::Graphic3d_Texture1Dmanual* instance);

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
	Graphic3d_Texture1Dmanual(Macad::Occt::Graphic3d_Texture1Dmanual^ parameter1);
}; // class Graphic3d_Texture1Dmanual

//---------------------------------------------------------------------
//  Class  Graphic3d_Texture1Dsegment
//---------------------------------------------------------------------
/// <summary>
/// This class provides the implementation
/// of a 1D texture applyable along a segment.
/// You might use the SetSegment() method
/// to set the way the texture is "stretched" on facets.
/// </summary>
public ref class Graphic3d_Texture1Dsegment sealed : public Macad::Occt::Graphic3d_Texture1D
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

	static Macad::Occt::Graphic3d_Texture1Dsegment^ CreateDowncasted(::Graphic3d_Texture1Dsegment* instance);

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
	Graphic3d_Texture1Dsegment(Macad::Occt::Graphic3d_Texture1Dsegment^ parameter1);
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
}; // class Graphic3d_Texture1Dsegment

//---------------------------------------------------------------------
//  Class  Graphic3d_Texture2Dplane
//---------------------------------------------------------------------
/// <summary>
/// This class allows the management of a 2D texture defined from a plane equation
/// Use the SetXXX() methods for positioning the texture as you want.
/// </summary>
public ref class Graphic3d_Texture2Dplane sealed : public Macad::Occt::Graphic3d_Texture2D
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

	static Macad::Occt::Graphic3d_Texture2Dplane^ CreateDowncasted(::Graphic3d_Texture2Dplane* instance);

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
	Graphic3d_Texture2Dplane(Macad::Occt::Graphic3d_Texture2Dplane^ parameter1);
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
}; // class Graphic3d_Texture2Dplane

//---------------------------------------------------------------------
//  Class  Graphic3d_TransformPersScaledAbove
//---------------------------------------------------------------------
/// <summary>
/// Transformation Zoom persistence with the above boundary of scale.
/// This persistence works only when the camera scale value is below the scale value of this persistence.
/// Otherwise, no persistence is applied.
/// </summary>
public ref class Graphic3d_TransformPersScaledAbove sealed : public Macad::Occt::Graphic3d_TransformPers
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

	static Macad::Occt::Graphic3d_TransformPersScaledAbove^ CreateDowncasted(::Graphic3d_TransformPersScaledAbove* instance);

public:
	/// <summary>
	/// Create a Zoom transformation persistence with an anchor 3D point and a scale value
	/// </summary>
	Graphic3d_TransformPersScaledAbove(double theScale, Macad::Occt::Pnt thePnt);
	Graphic3d_TransformPersScaledAbove(Macad::Occt::Graphic3d_TransformPersScaledAbove^ parameter1);
	/// <summary>
	/// Find scale value based on the camera position and view dimensions
	/// If the camera scale value less than the persistence scale, zoom persistence is not applied.
	/// </summary>
	/// <param name="theCamera">
	/// [in] camera definition
	/// </param>
	/// <param name="theViewportWidth">
	/// [in] the width of viewport.
	/// </param>
	/// <param name="theViewportHeight">
	/// [in] the height of viewport.
	/// </param>
	double persistentScale(Macad::Occt::Graphic3d_Camera^ theCamera, int theViewportWidth, int theViewportHeight);
}; // class Graphic3d_TransformPersScaledAbove

}; // namespace Occt
}; // namespace Macad
