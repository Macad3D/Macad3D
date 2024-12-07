using System.IO;
using System.Text;
using Macad.Common;
using Macad.Occt;

namespace Macad.Exchange.U3d;

internal sealed class U3dWriter
{
    MemoryStream _Stream;
    BinaryWriter _Writer;

    //--------------------------------------------------------------------------------------------------

    public uint Position
    {
        get
        {
            _Writer.Flush();
            return (uint)_Writer.BaseStream.Position;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public U3dWriter()
    {
        _Stream = new MemoryStream();
        _Writer = new BinaryWriter(_Stream, Encoding.UTF8, true);
    }

    //--------------------------------------------------------------------------------------------------

    public MemoryStream Finish()
    {
        _Writer.Close();
        return _Stream;
    }
        
    //--------------------------------------------------------------------------------------------------


    public void WritePadding()
    {
        uint pos = Position;
        if ((pos & 3) == 0)
            return;

        for (uint i = 0; i < 4 - (pos & 3); i++)
        {
            _Writer.Write((byte)0x00);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void Write(ushort value) => _Writer.Write(value);
    public void Write(uint value) => _Writer.Write(value);
    public void Write(ulong value) => _Writer.Write(value);
    public void Write(short value) => _Writer.Write(value);
    public void Write(int value) => _Writer.Write(value);
    public void Write(long value) => _Writer.Write(value);
    public void Write(float value) => _Writer.Write(value);
    public void Write(double value) => _Writer.Write(value);

    //--------------------------------------------------------------------------------------------------

    public void Write(string value)
    {
        ushort length = (ushort)value.Length;
        _Writer.Write(length);
        _Writer.Write(value.ToUtf8Bytes());
    }

    //--------------------------------------------------------------------------------------------------

    public void Write(Ax3 ax3)
    {
        var dir = ax3.XDirection;
        _Writer.Write((float)dir.X);
        _Writer.Write((float)dir.Y);
        _Writer.Write((float)dir.Z);
        _Writer.Write(0.0f);
        dir = ax3.YDirection;
        _Writer.Write((float)dir.X);
        _Writer.Write((float)dir.Y);
        _Writer.Write((float)dir.Z);
        _Writer.Write(0.0f);
        dir = ax3.Direction;
        _Writer.Write((float)dir.X);
        _Writer.Write((float)dir.Y);
        _Writer.Write((float)dir.Z);
        _Writer.Write(0.0f);
        var loc = ax3.Location;
        _Writer.Write((float)loc.X);
        _Writer.Write((float)loc.Y);
        _Writer.Write((float)loc.Z);
        _Writer.Write(1.0f);
    }

    //--------------------------------------------------------------------------------------------------

    public void Write(Color color)
    {
        _Writer.Write(color.Red);
        _Writer.Write(color.Green);
        _Writer.Write(color.Blue);
    }

    //--------------------------------------------------------------------------------------------------

    public void WriteAt(uint startPosition, uint value)
    {
        _Writer.Flush();
        _Writer.Seek((int)startPosition, SeekOrigin.Begin);
        _Writer.Write(value);
        _Writer.Seek(0, SeekOrigin.End);
    }
}