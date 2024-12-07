using System.Text.Json.Serialization;

namespace Macad.Exchange.Gltf;

internal sealed class GltfDomAsset
{
    [JsonPropertyName("generator")]
    public string Generator { get; } = "Macad|3D";

    [JsonPropertyName("version")]
    public string Version { get; } = "2.0";

    //--------------------------------------------------------------------------------------------------

}