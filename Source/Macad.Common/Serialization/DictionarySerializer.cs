using System;
using System.Collections;
using System.Diagnostics;
using System.Linq;

namespace Macad.Common.Serialization;

public class DictionarySerializer : ISerializer
{
    readonly Type _Type;
    readonly ISerializer _KeySerializer;
    readonly ISerializer _ValueSerializer;

    public DictionarySerializer(Type type)
    {
        _Type = type;

        Type keyType = type.GenericTypeArguments[0];
        _KeySerializer = Serializer.GetSerializer(keyType);

        Type valueType = type.GenericTypeArguments[1];
        _ValueSerializer = Serializer.GetSerializer(valueType);
    }

    public bool Write(Writer writer, object obj, SerializationContext context)
    {
        var dict = obj as IDictionary;
        if (dict == null)
        {
            writer.WriteNullReference();
            return true;
        }

        // Write content
        writer.BeginMap();
        foreach (var key in dict.Keys)
        {
            writer.BeginMapKey();
            if (!_KeySerializer.Write(writer, key, context))
                return false;

            writer.BeginMapValue();
            if (!_ValueSerializer.Write(writer, dict[key], context))
                return false;
        }
        writer.EndMap();

        return true;
    }

    public object Read(Reader reader, object obj, SerializationContext context)
    {
        if (reader.TryGetInstance(out var instance))
        {
            // Found instance, should only be null
            return instance;
        }

        // Create dict
        var dict = (obj ?? Activator.CreateInstance(_Type)) as IDictionary;
        Debug.Assert(dict != null, "Cannot create dictionary instance");
        dict.Clear();

        // Read items directly into dict
        if (reader.BeginMap())
        {
            while (reader.BeginMapKey())
            {
                var key = _KeySerializer.Read(reader, null, context);
                    
                if (!reader.BeginMapValue())
                    return false;

                var value = _ValueSerializer.Read(reader, null, context);

                dict.Add(key, value);
            }
            reader.EndMap();
        }

        return dict;
    }

    public static bool CanSerialize(Type type)
    {
        // IDictionary<T>
        return (type.GetInterfaces().Contains(typeof(IDictionary)) && type.IsConstructedGenericType);
    }
}