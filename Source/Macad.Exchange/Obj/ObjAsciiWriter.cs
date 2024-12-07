using System.Diagnostics;
using System.IO;
using System.Text;
using Macad.Common;
using Macad.Occt;

namespace Macad.Exchange.Obj;

internal sealed class ObjAsciiWriter
{
    StringBuilder _Sb;

    //--------------------------------------------------------------------------------------------------

    public void Init(string headLine)
    {
        Debug.Assert(_Sb == null);
        _Sb = new StringBuilder();
        _Sb.AppendLine("# " + headLine);
    }

    //--------------------------------------------------------------------------------------------------

    public void AddObject(string name)
    {
        _Sb.AppendLine("");
        _Sb.AppendLine($"o {name}");
    }

    //--------------------------------------------------------------------------------------------------

    public void AddVertex(Pnt vertex)
    {
        _Sb.AppendLine($"v {vertex.X.ToInvariantString()} {vertex.Y.ToInvariantString()} {vertex.Z.ToInvariantString()}");
    }

    //--------------------------------------------------------------------------------------------------

    public void AddFace(int index1, int index2, int index3)
    {
        _Sb.AppendLine($"f {index1} {index2} {index3}");
    }

    //--------------------------------------------------------------------------------------------------

    public bool WriteToFile(string fileName)
    {
        File.WriteAllText(fileName, _Sb.ToString(), Encoding.ASCII);
        _Sb = null;
        return true;
    }

    //--------------------------------------------------------------------------------------------------

}