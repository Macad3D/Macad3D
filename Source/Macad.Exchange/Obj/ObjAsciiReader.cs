using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Text;
using Macad.Occt;

namespace Macad.Exchange.Obj;

internal sealed class ObjAsciiReader
{
    readonly StreamReader _Reader;
    readonly List<string> _Words = new();

    static readonly char[] _Whitespaces = {' ', '\t'};

    //--------------------------------------------------------------------------------------------------

    public ObjAsciiReader(FileStream fs)
    {
        fs.Seek(0, SeekOrigin.Begin);
        _Reader = new StreamReader(fs, Encoding.ASCII);
    }

    //--------------------------------------------------------------------------------------------------

    public bool GetVertex(out Pnt vertex)
    {
        if (_Words.Count >= 4
            && double.TryParse(_Words[1], NumberStyles.Float, CultureInfo.InvariantCulture, out var x)
            && double.TryParse(_Words[2], NumberStyles.Float, CultureInfo.InvariantCulture, out var y)
            && double.TryParse(_Words[3], NumberStyles.Float, CultureInfo.InvariantCulture, out var z))
        {
            vertex = new Pnt(x, y, z);
            return true;
        }

        vertex = new Pnt();
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public bool GetFace(out int[] indices)
    {
        if (_Words.Count >= 4)
        {
            indices = new int[_Words.Count - 1];
            for (int i = 0; i < _Words.Count - 1; i++)
            {
                var word = _Words[i + 1];
                var values = word.Split('/');
                if (values.Length < 1)
                    return false;
                if (!int.TryParse(values[0], out var index))
                    return false;
                indices[i] = index;
            }

            return true;
        }

        indices = null;
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public bool GetObjectOrGroup(out string name)
    {
        if (_Words.Count <= 1)
            name = "";
        else
            name = string.Join(" ", _Words.Skip(1));
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public bool MoveNext(out string cmd)
    {
        cmd = null;
        _Words.Clear();

        while (!_Reader.EndOfStream)
        {
            var newWords = _Reader.ReadLine()?.Split(_Whitespaces, StringSplitOptions.RemoveEmptyEntries);
            if (newWords == null)
                break;

            if (newWords.Length == 0 || newWords[0].StartsWith("#"))
            {
                continue;
            }

            _Words.AddRange(newWords);
            if (_Words[_Words.Count - 1] == "\\")
            {
                _Words.RemoveAt(_Words.Count - 1);
                continue; // Read additional line
            }

            cmd = _Words[0]; // We're finished
            return true;
        }

        return false;
    }
}