using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using System.Reflection;

namespace Macad.Common.Serialization;

public sealed class ClassSerializer : ISerializer
{
    struct ClassPropertyInfo
    {
        public PropertyInfo PropertyInfo;
        public SerializeMemberAttribute MemberAttribute;
        public ISerializer Serializer;
        public MethodInfo CustomReaderInfo;
        public MethodInfo CustomWriterInfo;
    }

    //--------------------------------------------------------------------------------------------------

    readonly Type _Type;
    readonly Dictionary<string, ClassPropertyInfo> _Properties = new Dictionary<string, ClassPropertyInfo>();
    readonly string _ClassAlias;
    readonly bool _IsISerializable;
    readonly bool _IsISerializeValue;
    readonly bool _CanBeDerived;
    bool _IsReferencable;
    ClassPropertyInfo _ReferenceIdProperty;

    //--------------------------------------------------------------------------------------------------

    public ClassSerializer(Type type)
    {
        _Type = type;
        var typeInfo = type.GetTypeInfo();

        _ClassAlias = Serializer.ApplyNamespaceAlias(typeInfo.FullName);
        _IsISerializable = type.GetInterfaces().Contains(typeof(ISerializable));
        _IsISerializeValue = type.GetInterfaces().Contains(typeof(ISerializeValue));
        _CanBeDerived = type.IsClass && !type.IsSealed;
        _IsReferencable = false;

        if (!_IsISerializeValue)
        {
            List<ClassPropertyInfo> propInfos = new List<ClassPropertyInfo>();
            _AddProperties(type, propInfos);

            var orderedPropInfos = propInfos.OrderBy(propInfo => propInfo.MemberAttribute.SortKey);
            foreach (var propInfo in orderedPropInfos)
            {
                _Properties.Add(propInfo.PropertyInfo.Name, propInfo);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _AddProperties(Type type, List<ClassPropertyInfo> propInfos)
    {
        var basetype = type.BaseType;
        if(basetype != null)
            _AddProperties(basetype, propInfos);

        foreach (var propertyInfo in type.GetProperties(BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance | BindingFlags.Static | BindingFlags.DeclaredOnly))
        {
            if (!propertyInfo.IsDefined(typeof(SerializeMemberAttribute)))
                continue;

            var classPropInfo = new ClassPropertyInfo()
            {
                PropertyInfo = propertyInfo,
                Serializer = propertyInfo.PropertyType == _Type ? this : Serializer.GetSerializer(propertyInfo.PropertyType),
                MemberAttribute = (SerializeMemberAttribute) propertyInfo.GetCustomAttributes(typeof(SerializeMemberAttribute), false).First()
            };

            if (propertyInfo.IsDefined(typeof(SerializeReferenceIdAttribute)))
            {
                _IsReferencable = true;
                _ReferenceIdProperty = classPropInfo;
                continue;
            }

            if (!classPropInfo.MemberAttribute.ReaderFunc.IsNullOrEmpty())
            {
                var method = type.GetMethod(classPropInfo.MemberAttribute.ReaderFunc, 
                                            BindingFlags.NonPublic | BindingFlags.Public | BindingFlags.Instance,
                                            null, new[] {typeof(Reader), typeof(SerializationContext)}, null);
                Debug.Assert(method != null && method.ReturnType == typeof(bool), "ReaderFunc 'bool " + classPropInfo.MemberAttribute.ReaderFunc + "(Reader,SerializationContext)' not found in class " + type.Name);
                classPropInfo.CustomReaderInfo = method;
            }

            if (!classPropInfo.MemberAttribute.WriterFunc.IsNullOrEmpty())
            {
                var method = type.GetMethod(classPropInfo.MemberAttribute.WriterFunc, 
                                            BindingFlags.NonPublic | BindingFlags.Public | BindingFlags.Instance,
                                            null, new[] {typeof(Writer), typeof(SerializationContext)}, null);
                Debug.Assert(method != null && method.ReturnType == typeof(bool), "WriterFunc 'bool " + classPropInfo.MemberAttribute.WriterFunc + "(Writer,SerializationContext)' not found in class " + type.Name);
                classPropInfo.CustomWriterInfo = method;
            }

            if (classPropInfo.MemberAttribute.Redirect)
            {
                Debug.Assert(classPropInfo.PropertyInfo.PropertyType == typeof(Guid));
            }

            propInfos.Add(classPropInfo);
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SuppressMessage("ReSharper", "PossibleNullReferenceException")]
    public bool Write(Writer writer, object obj, SerializationContext context)
    {
        // Write null
        if (obj == null)
        {
            writer.WriteNullReference();
            return true;
        }

        // Check if type was derived
        if (_CanBeDerived && (obj.GetType() != _Type))
        {
            var serializer = Serializer.GetSerializer(obj.GetType());
            return (serializer != null) && serializer.Write(writer, obj, context);
        }
            
        // Write reference
        Guid referenceId = new Guid();
        if (_IsReferencable)
        {
            referenceId = (Guid)_ReferenceIdProperty.PropertyInfo.GetValue(obj);
            if (writer.WriteInstanceReference(obj, referenceId))
            {
                // Already written
                return true;
            }
        }

        // Use direct serializer if present
        if (_IsISerializeValue)
        {
            return ((ISerializeValue)obj).Write(writer, context);
        }

        // Instance was not serialized before
        writer.WriteChar('!');
        writer.WriteValueString(_ClassAlias);

        if (_IsISerializable)
            ((ISerializable)obj).OnBeginSerializing(context);

        writer.BeginMap();

        // First write reference id
        if (_IsReferencable)
        {
            writer.BeginMapKey();
            writer.WriteValueString(_ReferenceIdProperty.PropertyInfo.Name);
            writer.BeginMapValue();

            _ReferenceIdProperty.Serializer.Write(writer, referenceId, context);
        }

        // Then write all other properties
        foreach (var kvpProperty in _Properties)
        {
            writer.BeginMapKey();
            writer.WriteValueString(kvpProperty.Key);
            writer.BeginMapValue();

            if (kvpProperty.Value.CustomWriterInfo != null)
            {
                if ((bool) kvpProperty.Value.CustomWriterInfo.Invoke(obj, new object[] {writer, context}))
                    continue;
            }

            kvpProperty.Value.Serializer.Write(writer, kvpProperty.Value.PropertyInfo.GetValue(obj), context);
        }
        writer.EndMap();

        if (_IsISerializable)
            ((ISerializable)obj).OnSerialized(context);

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public object Read(Reader reader, object obj, SerializationContext context)
    {
        if (reader.TryGetInstance(out var instance))
        {
            // Found instance
            return instance;
        }

        // Use direct serializer if present
        if (_IsISerializeValue)
        {
            instance = Activator.CreateInstance(_Type, true);
            Debug.Assert(instance != null);
            ((ISerializeValue)instance).Read(reader, context);
            return instance;
        }

        // Check for class value
        if (reader.PeekChar() == '!')
        {
            reader.ReadChar(); // Skip !
            var typestr = reader.ReadValueString();
            Debug.Assert(!string.IsNullOrEmpty(typestr));

            if (typestr != _ClassAlias)
            {
                // Class is of another - derived - type
                var serializer = Serializer.GetSerializer(typestr);

                if (serializer == null)
                {
                    context?.AddErrors($"No serializer for type \"{typestr}\" found as derived class of {_ClassAlias}.");
                    reader.SkipListOrMapValue();
                    return null;
                }

                // Forward to another class handler
                return serializer.Read(reader, obj, context);
            }
        }

        instance = Activator.CreateInstance(_Type, true);
        Debug.Assert(instance != null);

        if (_IsISerializable)
            ((ISerializable)instance).OnBeginDeserializing(context);

        // Read in properties
        if (reader.BeginMap())
        {
            while (reader.BeginMapKey())
            {
                string propertyName = reader.ReadValueString();

                if (reader.BeginMapValue())
                {
                    if (_IsReferencable && propertyName == _ReferenceIdProperty.PropertyInfo.Name)
                    {
                        var newGuid = (Guid)_ReferenceIdProperty.Serializer.Read(reader, Guid.NewGuid(), context);
                        reader.AddReadInstance(instance, ref newGuid);
                        _ReferenceIdProperty.PropertyInfo.SetValue(instance, newGuid);
                        continue;
                    }

                    if (!_Properties.TryGetValue(propertyName, out var propInfo))
                    {
                        reader.SkipListOrMapValue();
                        continue; // Property is missing, maybe refactored away
                    }

                    if (propInfo.CustomReaderInfo != null)
                    {
                        if ((bool) propInfo.CustomReaderInfo.Invoke(instance, new object[] {reader, context}))
                            continue;
                    }

                    var oldValue = propInfo.PropertyInfo.GetValue(instance);
                    var newValue = propInfo.Serializer.Read(reader, oldValue, context);

                    if(!ReferenceEquals(oldValue, newValue))
                        propInfo.PropertyInfo.SetValue(instance, newValue);

                    if (propInfo.MemberAttribute.Redirect && context != null)
                    {
                        var redirectList = context.GetInstanceList<(Guid, object, PropertyInfo)>();
                        redirectList.Add(((Guid)newValue, instance, propInfo.PropertyInfo));
                    }
                }
            }
            reader.EndMap();
        }

        if (_IsISerializable)
            ((ISerializable)instance).OnDeserialized(context);

        return instance;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool CanSerialize(Type type)
    {
        return type.IsDefined(typeof(SerializeTypeAttribute));
    }

    //--------------------------------------------------------------------------------------------------

    #region Static Functions
    
    static ClassSerializer()
    {
        Serializer.Deserialized += _Serializer_Deserialized;
    }

    //--------------------------------------------------------------------------------------------------
        
    static void _Serializer_Deserialized(object result, SerializationContext context)
    {
        var redirectList = context?.GetInstanceList<(Guid, object, PropertyInfo)>();
        var guidMap = context?.GetInstance<Dictionary<Guid, Guid>>();
        if (guidMap == null || redirectList == null || redirectList.Count == 0)
        {
            return;
        }

        foreach (var (guid, instance, propInfo) in redirectList)
        {
            if (guidMap.TryGetValue(guid, out var newGuid))
            {
                propInfo.SetValue(instance, newGuid);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public class AnticipatedType
    {
        public readonly Type Type;
        public readonly Guid Guid;
        public readonly object Instance;

        public AnticipatedType(Type type, Guid guid, object instance)
        {
            Type = type;
            Guid = guid;
            Instance = instance;
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    public static AnticipatedType AnticipateType(Reader reader, SerializationContext context)
    {
        // Get cache
        Dictionary<Guid, AnticipatedType> cache = null;
        if (context != null && !context.TryGetInstance(out cache))
        {
            cache = new();
            context.SetInstance(cache);
        }

        Type type = null;
        Guid guid = Guid.Empty;
        object instance = null;
        reader.PushState();
        char c = reader.ReadChar();

        if (c == '?') // Check for reference
        {
            var valuestr = reader.ReadValueString();
            if (!valuestr.Equals("null"))
            {
                guid = new Guid(valuestr);
                if (reader.TryGetInstance(guid, out var foundObj))
                {
                    instance = foundObj;
                    type = foundObj.GetType();
                }
                else if(cache?.TryGetValue(guid, out var cachedValue) ?? false)
                {
                    reader.PopState();
                    return cachedValue;
                }
            }
        }
        else if (c == '!') // Check for typedef
        {
            var typestr = reader.ReadValueString();
            Debug.Assert(!string.IsNullOrEmpty(typestr));

            var serializer = Serializer.GetSerializer(typestr) as ClassSerializer;
            Debug.Assert(serializer != null);

            type = serializer._Type;
            if (serializer._IsReferencable && reader.BeginMap())
            {
                while (reader.BeginMapKey())
                {
                    string propertyName = reader.ReadValueString();
                    if (propertyName == serializer._ReferenceIdProperty.PropertyInfo.Name)
                    {
                        if (reader.BeginMapValue())
                        {
                            guid = (Guid) serializer._ReferenceIdProperty.Serializer.Read(reader, Guid.NewGuid(), null);
                            break;
                        }
                    }
                }
            }
        }

        reader.PopState();

        AnticipatedType anticipatedType = new(type, guid, instance);
        if (guid != Guid.Empty && cache != null)
        {
            // Save to cache
            if (cache.TryGetValue(guid, out var cachedValue))
            {
                return cachedValue;
            }

            cache.Add(guid, anticipatedType);
        }
        return anticipatedType;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}