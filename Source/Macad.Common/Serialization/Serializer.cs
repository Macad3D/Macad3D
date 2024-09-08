using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Text;

namespace Macad.Common.Serialization;

public static class Serializer
{
    #region Serializer Repository

    static readonly Dictionary<Type, ISerializer> _SerializersByType = new Dictionary<Type, ISerializer>();

    //--------------------------------------------------------------------------------------------------

    static readonly Dictionary<string, ISerializer> _SerializersByAlias = new Dictionary<string, ISerializer>();

    //--------------------------------------------------------------------------------------------------

    public static ISerializer GetSerializer(Type type)
    {
        ISerializer serializer = null;
        if (!_SerializersByType.TryGetValue(type, out serializer))
        {
            serializer = _CreateSerializer(type);
            Debug.Assert(serializer != null);
        }
        return serializer;
    }

    //--------------------------------------------------------------------------------------------------

    internal static ISerializer GetSerializer(string alias)
    {
        ISerializer serializer = null;
        if (_SerializersByAlias.TryGetValue(alias, out serializer))
        {
            return serializer;
        }

        // Decompose alias
        var typeFullName = ResolveNamespaceAlias(alias);
        Type type = null;
        foreach (var assembly in AppDomain.CurrentDomain.GetAssemblies())
        {
            type = assembly.GetType(typeFullName);
            if (type != null)
                break;
        }

        if (type == null)
        {
            Console.WriteLine("Type not found for type " + typeFullName);
            return null;
        }

        if (_SerializersByType.TryGetValue(type, out serializer))
        {
            return serializer;
        }

        serializer = _CreateSerializer(type);
        if (serializer == null)
        {
            Console.WriteLine("Serializer not found for type " + typeFullName);
            return null;
        }
        return serializer;
    }
        
    //--------------------------------------------------------------------------------------------------

    static ISerializer _CreateSerializer(Type type)
    {
        ISerializer serializer = null;
        if (type.IsClass)
        {
            if (DictionarySerializer.CanSerialize(type))
            {
                serializer = new DictionarySerializer(type);
            }
            else if (ListSerializer.CanSerialize(type))
            {
                serializer = new ListSerializer(type);
            }
            else if (ArraySerializer.CanSerialize(type))
            {
                serializer = new ArraySerializer(type);
            }
            else if (ClassSerializer.CanSerialize(type))
            {
                serializer = new ClassSerializer(type);
            }
        }
        else if (type.IsEnum)
        {
            serializer = new EnumSerializer(type);
        }
        else if (type.IsInterface)
        {
            serializer = new InterfaceSerializer(type);
        }
        else if (type.IsValueType && !type.IsPrimitive)
        {
            // Nullable
            if (type.IsGenericType && type.GetGenericTypeDefinition() == typeof(Nullable<>))
            {
                serializer = new NullableSerializer(type);
            }

            // Struct
            if (ClassSerializer.CanSerialize(type))
            {
                serializer = new ClassSerializer(type);
            }
        }

        if (serializer == null)
        {
            throw new Exception("No serializer for type " + type.FullName);
        }

        AddSerializer(type, serializer);
        return serializer;
    }
        
    //--------------------------------------------------------------------------------------------------

    public static void AddSerializer(Type type, ISerializer serializer)
    {
        _SerializersByType.Add(type, serializer);
        var alias = ApplyNamespaceAlias(type.FullName);
        if (alias != type.FullName)
        {
            _SerializersByAlias.Add(alias, serializer);
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    #endregion
        
    #region Namespace Aliases

    static readonly Dictionary<string, string> _namespaceAliases = new Dictionary<string, string>();
        
    //--------------------------------------------------------------------------------------------------

    public static void RegisterNamespaceAlias(string alias, string ns)
    {
        _namespaceAliases[alias] = ns;
    }
        
    //--------------------------------------------------------------------------------------------------

    public static string ApplyNamespaceAlias(string fullName)
    {
        int length = 0;
        string alias = fullName;

        foreach (var kvp in _namespaceAliases)
        {
            if (fullName.StartsWith(kvp.Value) && (length < kvp.Value.Length))
            {
                alias = kvp.Key;
                length = kvp.Value.Length;
            }
        }
        if (length == 0)
        {
            return fullName;
        }

        return alias + "." + fullName.Remove(0, length + 1);
    }
        
    //--------------------------------------------------------------------------------------------------

    public static string ResolveNamespaceAlias(string alias)
    {
        var index = alias.IndexOf('.');
        if (index > 0)
        {
            string aliasNS = alias.Substring(0, index);
            string ns;
            if (_namespaceAliases.TryGetValue(aliasNS, out ns))
            {
                return ns + alias.Substring(index);
            }
        }
        return alias;
    }
        
    //--------------------------------------------------------------------------------------------------

    static void _WriteNamespaceAliases(Writer w)
    {
        w.WriteValueString("Namespaces");
        w.BeginMap();
        foreach (var kvp in _namespaceAliases)
        {
            w.BeginMapKey();
            w.WriteValueString(kvp.Key);
            w.BeginMapValue();
            w.WriteValueString(kvp.Value);
        }
        w.EndMap();
    }
        
    //--------------------------------------------------------------------------------------------------

    static void _InitNamespaceAliases()
    {
        RegisterNamespaceAlias("Common", "Macad.Common");
    }
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Formatting

    public static string Format(string serializedText)
    {
        if (string.IsNullOrEmpty(serializedText)) return null;

        var tabCount = 0;
        var sb = new StringBuilder();
        var firstKeySeparator = true;
        var inString = false;
        var inInlineList = false;
        var inType = false;

        for (var i = 0; i < serializedText.Length; i++)
        {
            var current = serializedText[i];
            var previous = i - 1 >= 0 ? serializedText[i - 1] : 0;
            var next = i < serializedText.Length - 1 ? serializedText[i + 1] : 0;
                
            if (current == '"')
            {
                sb.Append(current);
                inString = !inString;
                continue;
            }

            if (inString)
            {
                sb.Append(current);
                continue;
            }

            if (current == '{' || current == '[')
            {
                if (inType)
                {
                    inType = false;
                    _AppendTabLine(sb, tabCount);
                }

                if (previous == ':')
                {
                    if (next == '}' || next == ']')
                    {
                        sb.Append(current);
                        sb.Append(serializedText[++i]); //eat next
                        continue;
                    }

                    if (current == '[')
                    {
                        int nextMapChar = serializedText.IndexOf('{', i);
                        if ((nextMapChar == -1)||(serializedText.IndexOf(']', i) < nextMapChar))
                        {
                            inInlineList = true;
                            sb.Append(current);
                            firstKeySeparator = true;
                            continue;
                        }
                    }
                    _AppendTabLine(sb, tabCount);
                }

                sb.Append(current);
                _AppendTabLine(sb, ++tabCount);
                firstKeySeparator = true;
                continue;
            }

            if (current == '}' || current == ']')
            {
                if (!inInlineList)
                {
                    _AppendTabLine(sb, --tabCount);
                }
                sb.Append(current);
                firstKeySeparator = true;
                inInlineList = false;
                continue;
            }

            if (current == ',' && !inString)
            {
                sb.Append(current);
                if (inInlineList)
                {
                    sb.Append(" ");
                }
                else
                {
                    _AppendTabLine(sb, tabCount);
                }
                firstKeySeparator = true;
                continue;
            }

            sb.Append(current);

            if (current == ':' && firstKeySeparator && !inType)
            {
                sb.Append(" ");
                firstKeySeparator = false;
            }

            if (current == '!')
            {
                inType = true;
            }
        }

        return sb.ToString();
    }
        
    //--------------------------------------------------------------------------------------------------

    static void _AppendTabLine(StringBuilder sb, int tabCount)
    {
        sb.AppendLine();

        if (tabCount > 0)
        {
            sb.Append(new string('\t', tabCount));
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Events
    
    public delegate void SerializationEventHandler(object result, SerializationContext context);
    public static event SerializationEventHandler Deserialized;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Serialize

    static Serializer()
    {
        _InitNamespaceAliases();
        StandardSerializers.Init();
        Win32ApiSerializer.Init();
    }

    //--------------------------------------------------------------------------------------------------

    public static string Serialize(object rootObject, SerializationContext context=null)
    {
        var writer = new Writer();
        if(Serialize(writer, rootObject, context))
            return writer.ToString();
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool Serialize(Writer writer, object rootObject, SerializationContext context=null)
    {
        if (rootObject == null)
        {
            writer.WriteRawString("?null");
            return true;
        }

        var serializer = GetSerializer(rootObject.GetType());
        Debug.Assert(serializer != null);

        return serializer.Write(writer, rootObject, context ?? new SerializationContext()) && writer.IsValid();
    }

    //--------------------------------------------------------------------------------------------------

    public static T Deserialize<T>(string source, SerializationContext context=null)
    {
        var readerFlags = context?.GetInstance<ReadOptions>() ?? ReadOptions.None;
        var reader = new Reader(source, readerFlags);
        return Deserialize<T>(reader, context);
    }

    //--------------------------------------------------------------------------------------------------

    public static T Deserialize<T>(Reader reader, SerializationContext context=null)
    {
        context ??= new SerializationContext();

        if (reader.Options.HasFlag(ReadOptions.RecreateGuids))
        {
            context.SetInstance(reader.RecreatedGuids);
        }

        var serializer = GetSerializer(typeof(T));
        Debug.Assert(serializer != null);
        
        var obj = serializer.Read(reader, null, context);
        if (obj is not T)
        {
            return default;
        }
        
        Deserialized?.Invoke(obj, context);

        return (T) obj;
    }

    //--------------------------------------------------------------------------------------------------


    #endregion

}