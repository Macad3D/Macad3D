using System;
using System.Diagnostics;

namespace Macad.Common.Serialization;

public class NullableSerializer : ISerializer
{
    readonly Type _ValueType;
    readonly ISerializer _Serializer;

    public NullableSerializer(Type type)
    {
        Debug.Assert(type.GenericTypeArguments.Length == 1);
        _ValueType = type.GenericTypeArguments[0];
        _Serializer = Serializer.GetSerializer(_ValueType);
    }

    //--------------------------------------------------------------------------------------------------

    public bool Write(Writer writer, object obj, SerializationContext context)
    {
        if (obj == null)
        {
            writer.WriteRawString("?null");
            return true;
        }
        return _Serializer.Write(writer, obj, context);
    }

    //--------------------------------------------------------------------------------------------------

    public object Read(Reader reader, object obj, SerializationContext context)
    {
        if (reader.PeekChar() == '?')
        {
            // ReSharper disable once RedundantAssignment
            var nullString = reader.ReadValueString();
            Debug.Assert(nullString.Equals("?null"));
            return null;
        }
        return _Serializer.Read(reader, obj, context);
    }

    //--------------------------------------------------------------------------------------------------

}