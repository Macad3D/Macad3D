using System.Diagnostics;
using System.Runtime.InteropServices;
using Macad.Common.Interop;

namespace Macad.Common.Serialization;

public class Win32ApiSerializer
{
    class Win32ApiSerializer_POINT : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            var point = (Win32Api.POINT)obj;

            var values = new int[] {point.x, point.y};
            return _IntArraySerializer.Write(writer, values, context);
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            var values = (int[])_IntArraySerializer.Read(reader, null, context);
            if ((values != null) && (values.Length == 2))
            {
                return new Win32Api.POINT(values[0], values[1]);
            }
            return null;
        }
            
        public bool TryRead(Reader reader, SerializationContext context, out Win32Api.POINT point)
        {
            var obj = Read(reader, null, context);
            if (obj == null)
            {
                point = new Win32Api.POINT();
                return false;
            }
            point = (Win32Api.POINT) obj;
            return true;
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    class Win32ApiSerializer_RECT : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            var rect = (Win32Api.RECT)obj;

            var values = new int[] {rect.Left, rect.Top, rect.Right, rect.Bottom};
            return _IntArraySerializer.Write(writer, values, context);
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            var values = (int[])_IntArraySerializer.Read(reader, null, context);
            if ((values != null) && (values.Length == 4))
            {
                return new Win32Api.RECT(values[0], values[1], values[2], values[3]);
            }
            return null;
        }

        public bool TryRead(Reader reader, SerializationContext context, out Win32Api.RECT rect)
        {
            var obj = Read(reader, null, context);
            if (obj == null)
            {
                rect = new Win32Api.RECT();
                return false;
            }
            rect = (Win32Api.RECT) obj;
            return true;
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    class Win32ApiSerializer_WINDOWPLACEMENT : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            var placement = (Win32Api.WINDOWPLACEMENT)obj;

            writer.BeginList();
            writer.BeginListValue();
            writer.WriteValueString(placement.showCmd.ToString());
            writer.BeginListValue();
            if (!_SerializerPOINT.Write(writer, placement.maxPosition, context))
                return false;
            writer.BeginListValue();
            if (!_SerializerPOINT.Write(writer, placement.minPosition, context))
                return false;
            writer.BeginListValue();
            if (!_SerializerRECT.Write(writer, placement.normalPosition, context))
                return false;
            writer.EndList();
            return true;
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            var placement = new Win32Api.WINDOWPLACEMENT();
            placement.length = Marshal.SizeOf(placement);

            if (reader.BeginList()
                && reader.BeginListValue()
                && int.TryParse(reader.ReadValueString(), out placement.showCmd)
                && reader.BeginListValue()
                && _SerializerPOINT.TryRead(reader, context, out placement.maxPosition)
                && reader.BeginListValue()
                && _SerializerPOINT.TryRead(reader, context, out placement.minPosition)
                && reader.BeginListValue()
                && _SerializerRECT.TryRead(reader, context, out placement.normalPosition)
                && reader.EndList())
            {
                return placement;
            }

            return null;
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    static bool _IsInitialized = false;
    static ISerializer _IntArraySerializer;
    static readonly Win32ApiSerializer_POINT _SerializerPOINT = new Win32ApiSerializer_POINT();
    static readonly Win32ApiSerializer_RECT _SerializerRECT = new Win32ApiSerializer_RECT();
    static readonly Win32ApiSerializer_WINDOWPLACEMENT _SerializerPLACEMENT = new Win32ApiSerializer_WINDOWPLACEMENT();

    //--------------------------------------------------------------------------------------------------

    public static void Init()
    {
        Debug.Assert(!_IsInitialized);

        _IntArraySerializer = Serializer.GetSerializer(typeof(int[]));

        Serializer.AddSerializer(typeof(Win32Api.POINT), _SerializerPOINT);
        Serializer.AddSerializer(typeof(Win32Api.RECT), _SerializerRECT);
        Serializer.AddSerializer(typeof(Win32Api.WINDOWPLACEMENT), _SerializerPLACEMENT);

        _IsInitialized = true;
    }

    //--------------------------------------------------------------------------------------------------

}