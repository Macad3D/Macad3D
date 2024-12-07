using System.Collections.Generic;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Occt.Helper;

namespace Macad.Exchange.Obj;

internal static class ObjBodyExporter
{
    public static bool Export(string fileName, IEnumerable<Body> bodies, bool smoothEdges)
    {
        ObjAsciiWriter writer = new ObjAsciiWriter();
        writer.Init("Written by Macad3D OBJ-Export");

        var indexOffset = 1; // OBJ list index starts with 1
        var vertexMap = new Dictionary<Pnt, int>(); // Written vertex to resulting index
        var indexList = new List<int>();
        foreach (var body in bodies)
        {
            var shape = body.Shape.GetTransformedBRep();
            if (shape == null)
                continue;

            var triangulation = TriangulationHelper.GetTriangulation(shape, false);
            if (triangulation.TriangleCount == 0)
                continue;

            writer.AddObject(body.Name);

            if (smoothEdges) // Export smooth edges
            {
                foreach (var sourceVertex in triangulation.Vertices)
                {
                    var vertex = new Pnt(sourceVertex.X, sourceVertex.Z, -sourceVertex.Y);
                    if (!vertexMap.TryGetValue(vertex, out var newIndex))
                    {
                        writer.AddVertex(vertex);
                        newIndex = vertexMap.Count + indexOffset;
                        vertexMap.Add(vertex, newIndex);
                    }

                    indexList.Add(newIndex);
                }

                for (int i = 0; i < triangulation.Indices.Length; i += 3)
                {
                    writer.AddFace(indexList[triangulation.Indices[i]], indexList[triangulation.Indices[i + 1]], indexList[triangulation.Indices[i + 2]]);
                }
            }
            else // Export face by face
            {
                foreach (var vertex in triangulation.Vertices)
                {
                    writer.AddVertex(new Pnt(vertex.X, vertex.Z, -vertex.Y));
                }

                for (int i = 0; i < triangulation.Indices.Length; i += 3)
                {
                    writer.AddFace(triangulation.Indices[i] + indexOffset, triangulation.Indices[i + 1] + indexOffset, triangulation.Indices[i + 2] + indexOffset);
                }
            }


            indexOffset += smoothEdges ? vertexMap.Count : triangulation.Vertices.Length;
            vertexMap.Clear(); // Don't share vertices between objects
            indexList.Clear();
        }

        return writer.WriteToFile(fileName);
    }
}