using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Text.Json.Serialization;

namespace Macad.Exchange.Gltf;

internal sealed class GltfDomPrimitive
{
    [JsonPropertyName("attributes")]
    public Dictionary<AttributeType, int> Attributes { get; } = [];

    [JsonPropertyName("indices")]
    public int? Indices { get; set; }

    [JsonPropertyName("material")]
    public int? MaterialIndex { get; set; }

    [JsonPropertyName("mode")]
    [JsonConverter(typeof(JsonNumberEnumConverter<RenderMode>))]
    public RenderMode Mode { get; set; } = RenderMode.Triangles;

    //--------------------------------------------------------------------------------------------------

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public enum AttributeType
    {
        POSITION,
        NORMAL,
        TANGENT,
        TEXCOORD_0
    }

    //--------------------------------------------------------------------------------------------------

    public enum RenderMode
    {
        Points,
        Lines,
        LineLoop,
        LineStrip,
        Triangles,
        TriangleStrip,
        TriangleFan
    }

    //--------------------------------------------------------------------------------------------------

}