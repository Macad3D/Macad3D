using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Macad.Common.Serialization;

namespace Macad.Common;

[SerializeType]
public class OverridableParameterSet : ISerializeValue
{
    public bool HasOverriddenParameters
    {
        get { return _OverriddenValues.Count > 0; }
    }

    //--------------------------------------------------------------------------------------------------

    public delegate void ParameterChangedEventHandler(OverridableParameterSet parameterSet, string parameterKey);

    //--------------------------------------------------------------------------------------------------

    public static event ParameterChangedEventHandler ParameterChanged;

    protected void RaiseParameterChanged(string key)
    {
        ParameterChanged?.Invoke(this, key);
    }

    //--------------------------------------------------------------------------------------------------

    protected T GetValue<T>([CallerMemberName] string key = null)
    {
        Debug.Assert(key != null);

        object value;
        if (_OverriddenValues.TryGetValue(key, out value))
            return (T)value;
        if (_DefaultValues.TryGetValue(key, out value))
            return (T)value;

        Debug.Assert(true, $"Value {key} pf type {typeof(T).Name} has no default value.");
        return default(T);
    }

    //--------------------------------------------------------------------------------------------------

    protected void SetDefaultValue<T>(string key, T value)
    {
        Debug.Assert(key != null);

        _DefaultValues[key] = value;
    }

    //--------------------------------------------------------------------------------------------------

    protected void SetValue<T>(T value, [CallerMemberName] string key = null)
    {
        Debug.Assert(key != null);

        _OverriddenValues[key] = value;
        RaiseParameterChanged(key);
    }

    //--------------------------------------------------------------------------------------------------

    public void ResetValue(string key)
    {
        Debug.Assert(key != null);

        _OverriddenValues.Remove(key);
        RaiseParameterChanged(key);
    }

    //--------------------------------------------------------------------------------------------------

    Dictionary<string, object> _OverriddenValues = new Dictionary<string, object>();

    readonly Dictionary<string, object> _DefaultValues = new Dictionary<string, object>();

    //--------------------------------------------------------------------------------------------------

    public bool Write(Writer writer, SerializationContext context)
    {
        writer.BeginMap();

        foreach (var valueKvp in _OverriddenValues)
        {
            writer.BeginMapKey();
            writer.WriteValueString(valueKvp.Key);
            writer.BeginMapValue();
            writer.WriteType(valueKvp.Value, context);
        }

        writer.EndMap();

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public bool Read(Reader reader, SerializationContext context)
    {
        if (!reader.BeginMap())
            return false;

        while (reader.BeginMapKey())
        {
            var key = reader.ReadValueString();
            if (!reader.BeginMapValue())
                return false;

            // Try to find the default value
            if (!_DefaultValues.TryGetValue(key, out var defaultValue))
            {
                reader.SkipListOrMapValue();
                continue;
            }

            var serializer = Serializer.GetSerializer(defaultValue.GetType());
            if(serializer == null)
            {
                reader.SkipListOrMapValue();
                continue;
            }

            var newValue = serializer.Read(reader, null, context);
            reader.EatWhiteSpaces();

            if (newValue != null)
            {
                _OverriddenValues[key] = newValue;
            }
        }

        reader.EndMap();

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected OverridableParameterSet()
    { }
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

[SerializeType]
public class ParameterSets : ISerializeValue
{
    public T Get<T>() where T: OverridableParameterSet
    {
        if (_ParameterSets.TryGetValue(typeof(T), out var set))
            return set as T;

        var newSet = Activator.CreateInstance<T>();
        Add(newSet);
        return newSet;
    }

    //--------------------------------------------------------------------------------------------------

    public void Add<T>(T newSet) where T: OverridableParameterSet
    {
        _ParameterSets[typeof(T)] = newSet;
    }
        
    //--------------------------------------------------------------------------------------------------

    Dictionary<Type, OverridableParameterSet> _ParameterSets = new Dictionary<Type, OverridableParameterSet>();

    //--------------------------------------------------------------------------------------------------

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

            var newSet = serializer.Read(reader, null, context) as OverridableParameterSet;
            if (newSet == null)
            {
                continue;
            }
            _ParameterSets.Add(newSet.GetType(), newSet);
        }

        return reader.EndMap();
    }

    //--------------------------------------------------------------------------------------------------

}