using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Occt.Helper;

namespace Macad.Exchange.Stl;

internal static class StlBodyImporter
{
    public static bool Import(string fileName, out IEnumerable<Body> bodies)
    {
        using var fs = new FileStream(fileName, FileMode.Open, FileAccess.Read);

        IStlReader reader;

        // Binary or Ascii?
        var tempBuffer = new byte[80];
        fs.Read(tempBuffer, 0, 80);

        var header = Encoding.ASCII.GetString(tempBuffer).TrimStart(' ');
        if (header.StartsWith("solid", StringComparison.InvariantCultureIgnoreCase))
            reader = new StlAsciiReader();
        else
            reader = new StlBinaryReader();
        var predictedTriangleCount = reader.Init(fs);

        // Read facets
        var vertices = new List<Pnt>(predictedTriangleCount * 3);
        while (reader.MoveNext())
        {
            vertices.Add(reader.CurrentVertices[0]);
            vertices.Add(reader.CurrentVertices[1]);
            vertices.Add(reader.CurrentVertices[2]);
        }

        // Create Shape
        var face = TriangulationHelper.CreateFaceFromTriangulation(new TriangulationData(null, vertices.ToArray(), null));
        var body = Body.Create(Mesh.Create(face));
        body.Name = Path.GetFileNameWithoutExtension(fileName);

        bodies = new[] {body};

        // Cleanup
        fs.Close();

        return true;
    }

    //--------------------------------------------------------------------------------------------------

}