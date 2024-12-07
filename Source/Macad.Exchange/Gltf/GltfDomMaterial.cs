using System.Diagnostics.CodeAnalysis;
using System.Text.Json.Serialization;
using Macad.Common;

namespace Macad.Exchange.Gltf;

internal sealed class GltfDomMaterial
{
    [JsonPropertyName("pbrMetallicRoughness")]
    public PbrMetallicRoughnessMaterial PbrMetallicRoughness { get; } = new();

    [JsonPropertyName("alphaMode")]
    [JsonConverter(typeof(JsonStringEnumConverter))]
    public AlphaModes? AlphaMode { get; set; }

    [JsonPropertyName("alphaCutoff")]
    public float? AlphaCutoff { get; set; }

    //--------------------------------------------------------------------------------------------------

    public class PbrMetallicRoughnessMaterial
    {
        [JsonPropertyName("baseColorFactor")]
        public float[] BaseColorFactor { get; private set; }

        [JsonPropertyName("metallicFactor")]
        public float MetallicFactor { get; set; } = 0.0f;

        [JsonPropertyName("roughnessFactor")]
        public float RoughnessFactor { get; set; } = 0.0f;

        //--------------------------------------------------------------------------------------------------

        public void SetBaseColorFactor(Color color, float transparency)
        {
            var (r, g, b) = color.ToLinearRgb();
            BaseColorFactor = [r, g, b, transparency];
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public enum AlphaModes
    {
        OPAQUE,
        MASK,
        BLEND
    }
}

