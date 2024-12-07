using System.Collections.Generic;
using System.Text.Json.Serialization;
using Macad.Occt;

namespace Macad.Exchange.Gltf;

internal sealed class GltfDomNode
{
    [JsonPropertyName("children")]
    public List<int> ChildNodeIndices { get; private set; }

    [JsonPropertyName("matrix")]
    public double[] Tranformation { get; private set; }

    [JsonPropertyName("translation")]
    public double[] Translation { get; private set; }

    [JsonPropertyName("rotation")]
    public double[] Rotation { get; private set; }

    [JsonPropertyName("mesh")]
    public int? MeshIndex { get; set; }

    [JsonPropertyName("camera")]
    public int? CameraIndex { get; set; }

    [JsonPropertyName("name")]
    public string Name { get; set; }

    //--------------------------------------------------------------------------------------------------

    public void AddChildIndex(int childNodeIndex)
    {
        ChildNodeIndices ??= [];
        ChildNodeIndices.Add(childNodeIndex);
    }

    //--------------------------------------------------------------------------------------------------

    public void SetTransformation(Trsf trsf)
    {
        double[] matrix = new double[16];
        XYZ row = trsf.VectorialPart().Row(1);
        matrix[0] = row.X;
        matrix[1] = row.Z;
        matrix[2] = row.Y;
        matrix[3] = 0;
        row = trsf.VectorialPart().Row(2);
        matrix[4] = row.X;
        matrix[5] = row.Y;
        matrix[6] = row.Z;
        matrix[7] = 0;
        row = trsf.VectorialPart().Row(3);
        matrix[8] = row.X;
        matrix[9] = row.Y;
        matrix[10] = row.Z;
        matrix[11] = 0;
        row = trsf.TranslationPart();
        matrix[12] = row.X;
        matrix[13] = row.Y;
        matrix[14] = row.Z;
        matrix[15] = 1;

        Tranformation = matrix;
        Translation = null;
        Rotation = null;
    }

    //--------------------------------------------------------------------------------------------------

    public void SetTranslation(XYZ translation)
    {
        Translation = [translation.X, translation.Y, translation.Z];
        Tranformation = null;
    }

    //--------------------------------------------------------------------------------------------------

    public void SetRotation(Quaternion rotation)
    {
        Rotation = [rotation.X, rotation.Y, rotation.Z, rotation.W];
        Tranformation = null;
    }
}