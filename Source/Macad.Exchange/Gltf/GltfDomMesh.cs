using System.Collections.Generic;
using System.Text.Json.Serialization;

namespace Macad.Exchange.Gltf;

internal sealed class GltfDomMesh
{
    [JsonPropertyName("primitives")]
    public List<GltfDomPrimitive> Primitives { get; set; }

    //--------------------------------------------------------------------------------------------------

    public int AddPrimitive(GltfDomPrimitive primitive)
    {
        Primitives ??= [];
        int primIndex = Primitives.Count;
        Primitives.Add(primitive);
        return primIndex;
    }

    //--------------------------------------------------------------------------------------------------

}