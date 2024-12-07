using System.Text.Json.Serialization;

namespace Macad.Exchange.Gltf;

internal sealed class GltfDomCameraOrthographic
{
    [JsonPropertyName("xmag")]
    public float XMagnification { get; set; }

    [JsonPropertyName("ymag")]
    public float YMagnification { get; set; }

    [JsonPropertyName("zfar")]
    public float ZFarDistance { get; set; }

    [JsonPropertyName("znear")]
    public float ZNearDistance { get; set; }
}