using System.Collections.Generic;
using System.IO;
using System.Linq;
using Macad.Common;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Occt.Helper;

namespace Macad.Exchange.Obj;

internal static class ObjBodyImporter
{
    class ObjectDescription
    {
        public string Name;
        public List<int> Indices;
        public TopoDS_Face Face;

        public static ObjectDescription Create()
        {
            return new ObjectDescription()
            {
                Indices = new List<int>(),
            };
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static bool Import(string fileName, out IEnumerable<Body> bodies, bool singleBody)
    {
        bodies = null;

        using var fs = new FileStream(fileName, FileMode.Open, FileAccess.Read);

        var vertices = new List<Pnt>();

        var currentObject = ObjectDescription.Create();
        var objectDescList = new List<ObjectDescription>();

        var reader = new ObjAsciiReader(fs);

        // Read
        string cmd;
        while (reader.MoveNext(out cmd))
        {
            switch (cmd)
            {
                case "o":
                case "g":
                    if (currentObject.Indices.Count != 0)
                        objectDescList.Add(currentObject);
                    currentObject = ObjectDescription.Create();
                    reader.GetObjectOrGroup(out currentObject.Name);
                    break;

                case "v":
                    if (!reader.GetVertex(out var vertex))
                        return false;
                    vertices.Add(new Pnt(vertex.X, -vertex.Z, vertex.Y));
                    break;

                case "f":
                case "fo":
                    if (!reader.GetFace(out var indices))
                        continue;

                    // Negative indices must be correctly re-assigned
                    // -1 => vertices.Count
                    // -2 => vertices.Count-1
                    for (int i = 0; i < indices.Length; i++)
                    {
                        if (indices[i] < 0)
                            indices[i] = vertices.Count + (indices[i] + 1);
                    }

                    if (indices.Length == 3)
                    {
                        currentObject.Indices.AddRange(indices.Take(3).Select(index => index - 1)); // Correct lower bound (from 1 to 0)
                    }
                    else
                    {
                        var triangulator = new EarClippingTriangulator();
                        var result = triangulator.DoTriangulation(vertices, indices.Select(index => index - 1)); // Correct lower bound (from 1 to 0)
                        if (result != null)
                        {
                            currentObject.Indices.AddRange(result);
                        }
                    }

                    break;
            }
        }

        if (currentObject.Indices.Count != 0)
            objectDescList.Add(currentObject);

        _CreateFaces(objectDescList, vertices);

        bodies = _CreateBodies(objectDescList, Path.GetFileNameWithoutExtension(fileName), singleBody);

        // Cleanup
        fs.Close();

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    static List<Body> _CreateBodies(List<ObjectDescription> objectDescList, string bodyName, bool singleBody)
    {
        // Create bodies
        var bodyList = new List<Body>();
        if (singleBody)
        {
            var compound = new TopoDS_Compound();
            var builder = new BRep_Builder();
            builder.MakeCompound(compound);
            foreach (var objectDesc in objectDescList)
            {
                builder.Add(compound, objectDesc.Face);
            }

            var body = Body.Create(Mesh.Create(compound));
            body.Name = bodyName;
            bodyList.Add(body);
        }
        else
        {
            int index = 1;
            foreach (var objectDesc in objectDescList)
            {
                var body = Body.Create(Mesh.Create(objectDesc.Face));
                if (!objectDesc.Name.IsNullOrWhiteSpace())
                {
                    body.Name = objectDesc.Name;
                }
                else
                {
                    body.Name = $"{bodyName}_{index++}";
                }

                bodyList.Add(body);
            }
        }

        return bodyList;
    }

    //--------------------------------------------------------------------------------------------------

    static void _CreateFaces(List<ObjectDescription> objectDescList, List<Pnt> vertices)
    {
        // Create Faces
        foreach (var objectDesc in objectDescList)
        {
            // Extract used vertices
            var usedVertices = new List<Pnt>();
            var indexMap = new Dictionary<int, int>();
            for (int index = 0; index < objectDesc.Indices.Count; index++)
            {
                int newIndex;
                int oldIndex = objectDesc.Indices[index];
                if (!indexMap.TryGetValue(oldIndex, out newIndex))
                {
                    newIndex = usedVertices.Count;
                    usedVertices.Add(vertices[oldIndex]);
                    indexMap.Add(oldIndex, newIndex);
                }

                objectDesc.Indices[index] = newIndex;
            }

            // Create shape
            objectDesc.Face = TriangulationHelper.CreateFaceFromTriangulation(new TriangulationData(objectDesc.Indices.ToArray(), usedVertices.ToArray(), null));
        }
    }
}