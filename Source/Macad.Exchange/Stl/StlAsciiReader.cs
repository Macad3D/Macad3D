using System;
using System.Globalization;
using System.IO;
using System.Text;
using Macad.Occt;

namespace Macad.Exchange.Stl;

internal sealed class StlAsciiReader : IStlReader
{
    public Vec CurrentNormal { get; private set; }
    public Pnt[] CurrentVertices { get; } = new Pnt[3];

    StreamReader _Reader;
    string[] _Words;
    int _WordIndex;

    static readonly char[] _Whitespaces = {' ', '\t', '\n', '\r'};

    //--------------------------------------------------------------------------------------------------

    public int Init(FileStream fs)
    {
        fs.Seek(0, SeekOrigin.Begin);
        _Reader = new StreamReader(fs, Encoding.ASCII);
        _Reader.ReadLine(); // Skip intro line
        _Words = new string[0];
        return 0;
    }

    //--------------------------------------------------------------------------------------------------

    public bool MoveNext()
    {
        if (!(_GetNextWord().Equals("facet", StringComparison.OrdinalIgnoreCase)
              && _GetNextWord().Equals("normal", StringComparison.OrdinalIgnoreCase)))
            return false;

        double x, y, z;
        if (!_GetNextValueTriple(out x, out y, out z))
            return false;
        CurrentNormal = new Vec(x, y, z);

        if (!(_GetNextWord().Equals("outer", StringComparison.OrdinalIgnoreCase)
              && _GetNextWord().Equals("loop", StringComparison.OrdinalIgnoreCase)))
            return false;

        if (!(_GetNextWord().Equals("vertex", StringComparison.OrdinalIgnoreCase)
              && _GetNextValueTriple(out x, out y, out z)))
            return false;
        CurrentVertices[0] = new Pnt(x, y, z);

        if (!(_GetNextWord().Equals("vertex", StringComparison.OrdinalIgnoreCase)
              && _GetNextValueTriple(out x, out y, out z)))
            return false;
        CurrentVertices[1] = new Pnt(x, y, z);

        if (!(_GetNextWord().Equals("vertex", StringComparison.OrdinalIgnoreCase)
              && _GetNextValueTriple(out x, out y, out z)))
            return false;
        CurrentVertices[2] = new Pnt(x, y, z);

        if (!(_GetNextWord().Equals("endloop", StringComparison.OrdinalIgnoreCase)
              && _GetNextWord().Equals("endfacet", StringComparison.OrdinalIgnoreCase)))
            return false;

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _GetNextValueTriple(out double x, out double y, out double z)
    {
        x = y = z = 0;
        return double.TryParse(_GetNextWord(), NumberStyles.Float, CultureInfo.InvariantCulture, out x)
               && double.TryParse(_GetNextWord(), NumberStyles.Float, CultureInfo.InvariantCulture, out y)
               && double.TryParse(_GetNextWord(), NumberStyles.Float, CultureInfo.InvariantCulture, out z);
    }

    //--------------------------------------------------------------------------------------------------

    string _GetNextWord()
    {
        while (_WordIndex >= _Words.Length)
        {
            if (_Reader.EndOfStream)
                return "";

            _Words = _Reader.ReadLine()?.Split(_Whitespaces, StringSplitOptions.RemoveEmptyEntries);
            if (_Words == null)
                return "";

            _WordIndex = 0;
        }

        return _Words[_WordIndex++];
    }
}