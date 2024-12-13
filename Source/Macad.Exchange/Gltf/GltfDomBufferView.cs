using System.Security.RightsManagement;
using System.Text.Json.Serialization;

namespace Macad.Exchange.Gltf;

internal sealed class GltfDomBufferView
{
    [JsonPropertyName("buffer")]
    public int BufferIndex { get; set; }

    [JsonPropertyName("byteOffset")]
    public int ByteOffset { get; set; }

    [JsonPropertyName("byteLength")]
    public int ByteLength { get; set; }

    [JsonPropertyName("byteStride")]
    public int? ByteStride { get; set; }

    [JsonPropertyName("target")]
    [JsonConverter(typeof(JsonNumberEnumConverter<Target>))]
    public Target? TargetHint { get; set; }

    //--------------------------------------------------------------------------------------------------

    public enum Target
    {
        ArrayBuffer = 34962,
        ElementArrayBuffer = 34963,
    }
}