using System.Diagnostics.CodeAnalysis;
using System.Text.Json.Serialization;

namespace Macad.Exchange.Gltf;

public class GltfDomAccessor
{
    [JsonPropertyName("bufferView")]
    public int BufferViewIndex { get; set; }

    [JsonPropertyName("byteOffset")]
    public long? ByteOffset { get; set; }

    [JsonPropertyName("componentType")]
    public DataComponentType ComponentType { get; set; }

    [JsonPropertyName("count")]
    public int ElementCount { get; set; }

    [JsonPropertyName("type")]
    [JsonConverter(typeof(JsonStringEnumConverter))]
    public DataType ElementType { get; set; }

    [JsonPropertyName("max")]
    public float[] MaxElementValue { get; set; }

    [JsonPropertyName("min")]
    public float[] MinElementValue { get; set; }

    //--------------------------------------------------------------------------------------------------

    public enum DataComponentType
    {
        SignedByte = 5120, 
        UnsignedByte = 5121, 
        SignedShort = 5122,
        UnsignedShort = 5123,
        UnsignedInt = 5125,
        Float = 5126
    }

    //--------------------------------------------------------------------------------------------------

    [SuppressMessage("ReSharper", "InconsistentNaming")]
    public enum DataType
    {
        SCALAR,
        VEC2,
        VEC3,
        VEC4,
        MAT2,
        MAT3,
        MAT4
    }
}