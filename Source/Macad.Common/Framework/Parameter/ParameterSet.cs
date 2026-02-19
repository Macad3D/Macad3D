using Macad.Common.Serialization;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;

namespace Macad.Common;

[SerializeType]
public abstract class ParameterSet : ISerializeValue
{
    #region Properties

    public bool HasOverriddenParameters
    {
        get { return _Parameters.Values.Any(param => param.IsOverridden); }
    }

    //--------------------------------------------------------------------------------------------------

    public IReadOnlyList<Parameter> Parameters => _ParametersList;

    //--------------------------------------------------------------------------------------------------

    public Parameter this[string key]
    {
        get
        {
            Debug.Assert(key != null);
            return _Parameters.GetValueOrDefault(key);
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Parameter

    readonly Dictionary<string, Parameter> _Parameters = new();

    //--------------------------------------------------------------------------------------------------

    readonly List<Parameter> _ParametersList = new();

    //--------------------------------------------------------------------------------------------------

    protected void AddParameter(Parameter parameter)
    {
        _Parameters.Add(parameter.Name, parameter);
        _ParametersList.Add(parameter);
        parameter.PropertyChanged += (source, eventParam) =>
        {
            if (eventParam.PropertyName == "Value")
            {
                RaiseParameterChanged(parameter.Name);
                OnParameterValueChanged(parameter.Name);
            }
        };
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Events

    public delegate void ParameterChangedEventHandler(ParameterSet parameterSet, string parameterKey);

    //--------------------------------------------------------------------------------------------------

    public event ParameterChangedEventHandler ParameterChanged;

    protected void RaiseParameterChanged(string key)
    {
        ParameterChanged?.Invoke(this, key);
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual void OnParameterValueChanged(string key)
    {

    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region ISerializeValue

    public bool Write(Writer writer, SerializationContext context)
    {
        writer.BeginMap();

        foreach (var parameter in _Parameters.Values)
        {
            if (!parameter.IsOverridden)
                continue;

            writer.BeginMapKey();
            writer.WriteValueString(parameter.Name);
            writer.BeginMapValue();
            parameter.Write(writer, context);
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

            // Try to find the parameter
            if (!_Parameters.TryGetValue(key, out var parameter))
            {
                reader.SkipListOrMapValue();
                continue;
            }

            if (!parameter.Read(reader, context))
            {
                parameter.ResetToDefault();
            }
        }

        reader.EndMap();

        OnParameterValueChanged("PhysicalQuantity");

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}
