using System.Text.Json.Serialization;

namespace Macad.Exchange.Gltf;

internal sealed class GltfDomCameraPerspective
{
    [JsonPropertyName("yfov")]
    public float FovY { get; set; }

    [JsonPropertyName("aspectRatio")]
    public float? AspectRatio { get; set; }

    [JsonPropertyName("zfar")]
    public float? ZFarDistance { get; set; }

    [JsonPropertyName("znear")]
    public float ZNearDistance { get; set; }
}