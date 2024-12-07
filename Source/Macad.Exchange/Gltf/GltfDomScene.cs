using System.Collections.Generic;
using System.Text.Json.Serialization;

namespace Macad.Exchange;

internal sealed class GltfDomScene
{
    [JsonPropertyName("nodes")]
    public List<int> NodeIndices { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public void AddNodeIndex(int node)
    {
        NodeIndices ??= [];
        NodeIndices.Add(node);
    }

    //--------------------------------------------------------------------------------------------------

}