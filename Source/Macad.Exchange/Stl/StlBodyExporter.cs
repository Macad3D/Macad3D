using System.Collections.Generic;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Occt.Helper;

namespace Macad.Exchange.Stl;

internal static class StlBodyExporter
{
    public static bool Export(IEnumerable<Body> bodies, string fileName, bool binaryFormat)
    {
        var sumTriangleCount = 0;
        var triangulations = new List<TriangulationData>();
        foreach (var body in bodies)
        {
            var shape = body.Shape.GetTransformedBRep();
            if (shape == null)
                continue;

            var triangulation = TriangulationHelper.GetTriangulation(shape, false);
            if (triangulation.TriangleCount == 0)
                continue;

            triangulations.Add(triangulation);
            sumTriangleCount += triangulation.TriangleCount;
        }

        if (sumTriangleCount == 0)
            return false;

        IStlWriter writer;
        if (binaryFormat)
            writer = new StlBinaryWriter();
        else
            writer = new StlAsciiWriter();
        writer.Init("Written by Macad3D STL-Export", sumTriangleCount);

        foreach (var triangulation in triangulations)
        {
            var index = 0;
            for (int triangle = 0; triangle < triangulation.TriangleCount; triangle++)
            {
                // Get vertices
                var vertex1 = triangulation.Vertices[triangulation.Indices[index]];
                var vertex2 = triangulation.Vertices[triangulation.Indices[index + 1]];
                var vertex3 = triangulation.Vertices[triangulation.Indices[index + 2]];
                index += 3;

                // Calculate normal of facet
                var vec1 = new Vec(vertex1, vertex2);
                var vec2 = new Vec(vertex1, vertex3);
                var normal = vec1.Crossed(vec2);
                if (normal.SquareMagnitude() > gp.Resolution)
                {
                    normal.Normalize();
                }
                else
                {
                    normal = default;
                }

                // Write out facet
                writer.AddFacet(normal, vertex1, vertex2, vertex3);
            }
        }

        return writer.WriteToFile(fileName);
    }
}