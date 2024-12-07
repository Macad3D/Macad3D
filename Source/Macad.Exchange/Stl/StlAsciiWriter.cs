using System.Diagnostics;
using System.IO;
using System.Text;
using Macad.Common;
using Macad.Occt;

namespace Macad.Exchange.Stl;

internal sealed class StlAsciiWriter : IStlWriter
{
    StringBuilder _Sb;
    string _HeadLine;

    //--------------------------------------------------------------------------------------------------

    public void Init(string headLine, int sumTriangleCount)
    {
        Debug.Assert(_Sb == null);
        _Sb = new StringBuilder();
        _HeadLine = headLine;
        _Sb.AppendLine("solid " + headLine);
    }

    //--------------------------------------------------------------------------------------------------

    public void AddFacet(Vec normal, Pnt vertex1, Pnt vertex2, Pnt vertex3)
    {
        _Sb.AppendLine($" facet normal {normal.X.ToInvariantString("G14")} {normal.Y.ToInvariantString("G14")} {normal.Z.ToInvariantString("G14")}");
        _Sb.AppendLine( "  outer loop");

        _Sb.AppendLine($"   vertex {vertex1.X.ToInvariantString("G14")} {vertex1.Y.ToInvariantString("G14")} {vertex1.Z.ToInvariantString("G14")}");
        _Sb.AppendLine($"   vertex {vertex2.X.ToInvariantString("G14")} {vertex2.Y.ToInvariantString("G14")} {vertex2.Z.ToInvariantString("G14")}");
        _Sb.AppendLine($"   vertex {vertex3.X.ToInvariantString("G14")} {vertex3.Y.ToInvariantString("G14")} {vertex3.Z.ToInvariantString("G14")}");

        _Sb.AppendLine( "  endloop");
        _Sb.AppendLine( " endfacet");
    }

    //--------------------------------------------------------------------------------------------------

    public bool WriteToFile(string fileName)
    {
        _Sb.AppendLine("endsolid " + _HeadLine);
        File.WriteAllText(fileName, _Sb.ToString(), Encoding.ASCII);
        _Sb = null;
        return true;
    }
}