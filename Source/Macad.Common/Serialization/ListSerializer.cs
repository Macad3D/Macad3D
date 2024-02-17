using System;
using System.Collections;
using System.Diagnostics;
using System.Linq;

namespace Macad.Common.Serialization;

public class ListSerializer : ISerializer
{
    readonly Type _Type;
    readonly ISerializer _ItemSerializer;

    public ListSerializer(Type type)
    {
        _Type = type;
        Type itemType = type.GenericTypeArguments[0];
        _ItemSerializer = Serializer.GetSerializer(itemType);
    }

    public bool Write(Writer writer, object obj, SerializationContext context)
    {
        var list = obj as IList;
        if (list == null)
        {
            writer.WriteNullReference();
            return true;
        }

        writer.BeginList();
        foreach (var item in list)
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
        IList list = (obj ?? Activator.CreateInstance(_Type)) as IList;
        Debug.Assert(list != null, "Cannot create list instance");
        list.Clear();

        if (reader.BeginList())
        {
            while (reader.BeginListValue())
            {
                list.Add(_ItemSerializer.Read(reader, null, context));
            }
            reader.EndList();
        }

        return list;
    }

    public static bool CanSerialize(Type type)
    {
        return type.GetInterfaces().Contains(typeof(IList)) && type.IsConstructedGenericType;
    }
}