using Macad.Common.Serialization;
using System;
using System.Collections.Generic;

namespace Macad.Common;

[SerializeType]
public class ParameterSets : ISerializeValue
{
    public T Get<T>() where T : ParameterSet
    {
        return Get(typeof(T)) as T;
    }

    //--------------------------------------------------------------------------------------------------

    public ParameterSet Get(Type type)
    {
        if (_ParameterSets.TryGetValue(type, out var set))
            return set;

        var newSet = Activator.CreateInstance(type) as ParameterSet;
        newSet.ParameterChanged += _ParameterSet_ParameterChanged;
        _ParameterSets[type] = newSet;
        return newSet;
    }

    //--------------------------------------------------------------------------------------------------

    readonly Dictionary<Type, ParameterSet> _ParameterSets = new();

    //--------------------------------------------------------------------------------------------------

    #region ISerializeValue

    public bool Write(Writer writer, SerializationContext context)
    {
        writer.BeginMap();
        foreach (var setKvp in _ParameterSets)
        {
            if (!setKvp.Value.HasOverriddenParameters)
                continue;

            writer.BeginMapKey();
            writer.WriteValueString(Serializer.ApplyNamespaceAlias(setKvp.Key.FullName));
            writer.BeginMapValue();
            writer.WriteType(setKvp.Value, context);
        }

        writer.EndMap();

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public bool Read(Reader reader, SerializationContext context)
    {
        _ParameterSets.Clear();

        if (!reader.BeginMap())
            return false;

        while (reader.BeginMapKey())
        {
            string key = reader.ReadValueString();
            if (key.IsNullOrEmpty())
                return false;

            var serializer = Serializer.GetSerializer(key);
            if (serializer == null)
            {
                reader.SkipListOrMapValue();
                continue;
            }

            if (!reader.BeginMapValue())
                return false;

            var newSet = serializer.Read(reader, null, context) as ParameterSet;
            if (newSet == null)
            {
                continue;
            }

            _ParameterSets.Add(newSet.GetType(), newSet);
            newSet.ParameterChanged += _ParameterSet_ParameterChanged;
        }

        return reader.EndMap();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Events
    
    public delegate void ParameterChangedEventHandler(ParameterSet parameterSet, string parameterKey);

    public event ParameterChangedEventHandler ParameterChanged;
    void _ParameterSet_ParameterChanged(ParameterSet parameterSet, string parameterKey)
    {
        ParameterChanged?.Invoke(parameterSet, parameterKey);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}