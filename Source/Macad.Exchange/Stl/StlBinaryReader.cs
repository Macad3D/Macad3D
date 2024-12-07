using System.IO;
using System.Text;
using Macad.Occt;

namespace Macad.Exchange.Stl;

internal sealed class StlBinaryReader : IStlReader
{
    public Vec CurrentNormal { get; private set; }
    public Pnt[] CurrentVertices { get; } = new Pnt[3];

    BinaryReader _Reader;
    int _TrianglesLeft;

    //--------------------------------------------------------------------------------------------------

    public int Init(FileStream fs)
    {
        _Reader = new BinaryReader(fs, Encoding.ASCII);
        _TrianglesLeft = (int)_Reader.ReadUInt32();
        return _TrianglesLeft;
    }

    //--------------------------------------------------------------------------------------------------

    public bool MoveNext()
    {
        if (_TrianglesLeft == 0)
            return false;
        _TrianglesLeft--;

        try
        {
            CurrentNormal = new Vec(_Reader.ReadSingle(), _Reader.ReadSingle(), _Reader.ReadSingle());
            CurrentVertices[0] = new Pnt(_Reader.ReadSingle(), _Reader.ReadSingle(), _Reader.ReadSingle());
            CurrentVertices[1] = new Pnt(_Reader.ReadSingle(), _Reader.ReadSingle(), _Reader.ReadSingle());
            CurrentVertices[2] = new Pnt(_Reader.ReadSingle(), _Reader.ReadSingle(), _Reader.ReadSingle());
            _Reader.ReadUInt16(); // Ignore Attribute
            return true;
        }
        catch (EndOfStreamException)
        {
            return false;
        }
    }
}