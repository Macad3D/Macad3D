using System;
using System.Diagnostics;
using System.Globalization;

namespace Macad.Common.Serialization;

public class StandardSerializers
{
    class StandardSerializerString : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            var stringValue = obj as string;
            if (obj == null)
            {
                writer.WriteValueString("?null");
            }
            else
            {
                writer.WriteQuotedString(stringValue);
            }
            return true;
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            if (reader.PeekChar() == '?')
            {
                reader.ReadChar();
                var valueString = reader.ReadValueString();
                Debug.Assert(valueString.Equals("null"));
                return null;
            }
            else
            {
                return reader.ReadQuotedString();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    class StandardSerializerChar : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            writer.WriteQuotedString(obj.ToString());
            return true;
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            return reader.ReadQuotedString()[0];
        }
    }

    //--------------------------------------------------------------------------------------------------

    class StandardSerializerByte : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            writer.WriteValueString(obj.ToString());
            return true;
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            return byte.Parse(reader.ReadValueString(), CultureInfo.InvariantCulture);
        }
    }

    //--------------------------------------------------------------------------------------------------

    class StandardSerializerInt16 : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            writer.WriteValueString(obj.ToString());
            return true;
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            return Int16.Parse(reader.ReadValueString(), CultureInfo.InvariantCulture);
        }
    }

    //--------------------------------------------------------------------------------------------------

    class StandardSerializerUInt16 : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            writer.WriteValueString(obj.ToString());
            return true;
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            return UInt16.Parse(reader.ReadValueString(), CultureInfo.InvariantCulture);
        }
    }

    //--------------------------------------------------------------------------------------------------

    class StandardSerializerInt32 : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            writer.WriteValueString(obj.ToString());
            return true;
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            return Int32.Parse(reader.ReadValueString(), CultureInfo.InvariantCulture);
        }
    }

    //--------------------------------------------------------------------------------------------------

    class StandardSerializerUInt32 : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            writer.WriteValueString(obj.ToString());
            return true;
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            return UInt32.Parse(reader.ReadValueString(), CultureInfo.InvariantCulture);
        }
    }

    //--------------------------------------------------------------------------------------------------

    class StandardSerializerInt64 : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            writer.WriteValueString(obj.ToString());
            return true;
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            return Int64.Parse(reader.ReadValueString(), CultureInfo.InvariantCulture);
        }
    }

    //--------------------------------------------------------------------------------------------------

    class StandardSerializerUInt64 : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            writer.WriteValueString(obj.ToString());
            return true;
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            return UInt64.Parse(reader.ReadValueString(), CultureInfo.InvariantCulture);
        }
    }

    //--------------------------------------------------------------------------------------------------

    class StandardSerializerFloat : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            writer.WriteValueString(((float)obj).ToString("R",
                                                          CultureInfo.InvariantCulture));
            return true;
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            return float.Parse(reader.ReadValueString(), CultureInfo.InvariantCulture);
        }
    }

    //--------------------------------------------------------------------------------------------------

    class StandardSerializerDouble : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            writer.WriteValueString(((double)obj).ToString("R", CultureInfo.InvariantCulture));
            return true;
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            return double.Parse(reader.ReadValueString(), CultureInfo.InvariantCulture);
        }
    }

    //--------------------------------------------------------------------------------------------------

    class StandardSerializerBool : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            writer.WriteValueString((bool)obj ? "True" : "False");
            return true;
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            return reader.ReadValueString()?.Equals("True");
        }
    }

    //--------------------------------------------------------------------------------------------------

    class StandardSerializerGuid : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            var guid = (Guid) obj;
            if(guid == Guid.Empty)
                writer.WriteValueString("?null");
            else
                writer.WriteValueString(((Guid)obj).ToString("N"));
            return true;
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            if (reader.PeekChar() == '?')
            {
                reader.ReadChar();
                var valueString = reader.ReadValueString();
                Debug.Assert(valueString.Equals("null"));
                return Guid.Empty;
            }
            else
            {
                return new Guid(reader.ReadValueString());
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    class StandardSerializerByteArray : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            if (context?.BlobArchive != null)
            {
                int id = context.BlobArchive.WriteBlob((byte[]) obj);
                if (id < 0)
                    return false;
                writer.WriteValueString($"blob_{id}");
                return true;
            }

            writer.WriteValueString(Convert.ToBase64String((byte[])obj));
            return true;
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            var value = reader.ReadValueString();
            if (value.StartsWith("blob_"))
            {
                if(context?.BlobArchive == null)
                    return null;

                int id;
                if (!int.TryParse(value.Substring(5), out id))
                    return null;

                return context.BlobArchive.ReadBlob(id);
            }

            return Convert.FromBase64String(value);
        }
    }

    //--------------------------------------------------------------------------------------------------

    class StandardSerializerDateTime : ISerializer
    {
        public bool Write(Writer writer, object obj, SerializationContext context)
        {
            writer.WriteValueString(((DateTime)obj).ToUniversalTime().ToString("o"));
            return true;
        }

        public object Read(Reader reader, object obj, SerializationContext context)
        {
            var value = reader.ReadValueString();
            if (!DateTime.TryParse(value, null, DateTimeStyles.RoundtripKind, out var result))
                return null;
            return result;
        }
    }

    //--------------------------------------------------------------------------------------------------

    static bool _IsInitialized = false;

    //--------------------------------------------------------------------------------------------------

    public static void Init()
    {
        Debug.Assert(!_IsInitialized);

        Serializer.AddSerializer(typeof(string), new StandardSerializerString());
        Serializer.AddSerializer(typeof(char), new StandardSerializerChar());
        Serializer.AddSerializer(typeof(byte), new StandardSerializerByte());
        Serializer.AddSerializer(typeof(Int16), new StandardSerializerInt16());
        Serializer.AddSerializer(typeof(UInt16), new StandardSerializerUInt16());
        Serializer.AddSerializer(typeof(Int32), new StandardSerializerInt32());
        Serializer.AddSerializer(typeof(UInt32), new StandardSerializerUInt32());
        Serializer.AddSerializer(typeof(Int64), new StandardSerializerInt64());
        Serializer.AddSerializer(typeof(UInt64), new StandardSerializerUInt64());
        Serializer.AddSerializer(typeof(float), new StandardSerializerFloat());
        Serializer.AddSerializer(typeof(double), new StandardSerializerDouble());
        Serializer.AddSerializer(typeof(bool), new StandardSerializerBool());
        Serializer.AddSerializer(typeof(Guid), new StandardSerializerGuid());
        Serializer.AddSerializer(typeof(byte[]), new StandardSerializerByteArray());
        Serializer.AddSerializer(typeof(DateTime), new StandardSerializerDateTime());

        _IsInitialized = true;
    }

    //--------------------------------------------------------------------------------------------------

}