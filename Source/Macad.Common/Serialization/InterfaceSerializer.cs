using System;
using System.Diagnostics;
using System.Reflection;

namespace Macad.Common.Serialization;

public sealed class InterfaceSerializer : ISerializer
{
    readonly string _Alias;

    //--------------------------------------------------------------------------------------------------

    public InterfaceSerializer(Type type)
    {
        var typeInfo = type.GetTypeInfo();

        _Alias = Serializer.ApplyNamespaceAlias(typeInfo.FullName);
    }

    //--------------------------------------------------------------------------------------------------

    public bool Write(Writer writer, object obj, SerializationContext context)
    {
        if (obj == null)
        {
            writer.WriteRawString("?null");
            return true;
        }

        // Goto derived type
        var serializer = Serializer.GetSerializer(obj.GetType());
        return serializer != null && serializer.Write(writer, obj, context);
    }

    //--------------------------------------------------------------------------------------------------

    public object Read(Reader reader, object obj, SerializationContext context)
    {
        object instance;
        if (reader.TryGetInstance(out instance))
        {
            // Found instance
            return instance;
        }

        // There must be a class value
        Debug.Assert(reader.PeekChar() == '!');

        reader.ReadChar(); // Skip !
        var typestr = reader.ReadValueString();
        Debug.Assert(!string.IsNullOrEmpty(typestr));

        // Class must beanother - derived - type
        Debug.Assert(typestr != _Alias);

        var serializer = Serializer.GetSerializer(typestr);
        Debug.Assert(serializer != null);

        // Forward to another class handler
        return serializer.Read(reader, obj, context);
    }

    //--------------------------------------------------------------------------------------------------

    public static bool CanSerialize(Type type)
    {
        return type.IsDefined(typeof(SerializeTypeAttribute));
    }

    //--------------------------------------------------------------------------------------------------

}