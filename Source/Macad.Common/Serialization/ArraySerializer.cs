using System;
using System.Collections;
using System.Diagnostics;

namespace Macad.Common.Serialization;

public class ArraySerializer : ISerializer
{
    readonly Type _Type;
    readonly ISerializer _ItemSerializer;

    public ArraySerializer(Type type)
    {
        _Type = type;
        Type itemType = type.GetElementType();
        _ItemSerializer = Serializer.GetSerializer(itemType);
    }

    public bool Write(Writer writer, object obj, SerializationContext context)
    {
        var array = obj as Array;
        if (array == null)
        {
            writer.WriteNullReference();
            return true;
        }

        writer.BeginList();
        foreach (var item in array)
        {
            writer.BeginListValue();
            if (!_ItemSerializer.Write(writer, item, context))
                return false;
        }
        writer.EndList();

        return true;
    }

    public object Read(Reader reader, object obj, SerializationContext context)
    {
        if (reader.TryGetInstance(out var instance))
        {
            // Found instance, should only be null
            return instance;
        }
            
        // Read items in temp list
        var readItems = new ArrayList();
        if (reader.BeginList())
        {
            while (reader.BeginListValue())
            {
                readItems.Add(_ItemSerializer.Read(reader, null, context));
            }
            reader.EndList();
        }

        // Create array if needed and fill
        var array = obj as Array;
        if ((array == null) || (array.Length != readItems.Count))
        {
            array = Activator.CreateInstance(_Type, readItems.Count) as Array;
        }
        Debug.Assert(array != null, "Cannot create array instance");
        readItems.CopyTo(array);
            
        return array;
    }

    public static bool CanSerialize(Type type)
    {
        return type.IsArray && !ReferenceEquals(type.GetElementType(), typeof(object));
    }
}