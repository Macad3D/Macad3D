using System.IO;
using System.Text.Json.Serialization;

namespace Macad.Exchange.Gltf;

internal sealed class GltfDomBuffer
{
    [JsonPropertyName("byteLength")]
    public long ByteLength { get; set; }

    [JsonPropertyName("uri")]
    public string Uri { get; set; }

    [JsonIgnore]
    public MemoryStream Data { get; set; }

    //--------------------------------------------------------------------------------------------------

}