using System.Text.Json.Serialization;

namespace Macad.Exchange.Gltf;

internal sealed class GltfDomCamera
{
    [JsonPropertyName("orthographic")]
    public GltfDomCameraOrthographic Orthographic { get; set; }

    [JsonPropertyName("perspective")]
    public GltfDomCameraPerspective Perspective { get; set; }

    [JsonPropertyName("type")]
    public string CameraType
    {
        get {
            if (Orthographic != null)
            {
                return "orthographic";
            }
            if (Perspective != null)
            {
                return "perspective";
            }
            return "unknown";
        }
    }

    //--------------------------------------------------------------------------------------------------
}