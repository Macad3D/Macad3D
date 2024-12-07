using System;
using System.Diagnostics;
using System.IO;
using System.Text;
using Macad.Occt;

namespace Macad.Exchange.Stl;

internal sealed class StlBinaryWriter : IStlWriter
{
    MemoryStream _MemStream;
    BinaryWriter _Writer;

    public void Init(string headLine, int sumTriangleCount)
    {
        Debug.Assert(_MemStream == null);
        Debug.Assert(headLine.Length < 80);
        _MemStream = new MemoryStream();
        _Writer = new BinaryWriter(_MemStream, Encoding.ASCII, true);
        _Writer.Write(headLine.PadRight(80, ' ').ToCharArray());
        _Writer.Write((UInt32)sumTriangleCount);
    }

    //--------------------------------------------------------------------------------------------------

    public void AddFacet(Vec normal, Pnt vertex1, Pnt vertex2, Pnt vertex3)
    {
        _Writer.Write((float)normal.X);
        _Writer.Write((float)normal.Y);
        _Writer.Write((float)normal.Z);
        _Writer.Write((float)vertex1.X);
        _Writer.Write((float)vertex1.Y);
        _Writer.Write((float)vertex1.Z);
        _Writer.Write((float)vertex2.X);
        _Writer.Write((float)vertex2.Y);
        _Writer.Write((float)vertex2.Z);
        _Writer.Write((float)vertex3.X);
        _Writer.Write((float)vertex3.Y);
        _Writer.Write((float)vertex3.Z);
        _Writer.Write((UInt16)0);
    }

    //--------------------------------------------------------------------------------------------------

    public bool WriteToFile(string fileName)
    {
        _Writer.Close();
        using (var fs = new FileStream(fileName, FileMode.Create, FileAccess.Write))
        {
            _MemStream.WriteTo(fs);
            fs.Close();
        }
        _MemStream.Close();
        _MemStream = null;
        return true;
    }

    //--------------------------------------------------------------------------------------------------

}