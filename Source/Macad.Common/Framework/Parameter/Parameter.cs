using Macad.Common.Serialization;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;

namespace Macad.Common;

//--------------------------------------------------------------------------------------------------

public abstract class Parameter : INotifyPropertyChanged, ISerializeValue
{
    [Flags]
    public enum ParameterFlags
    {
        NeedsRestart = 1 << 0
    }
    
    //--------------------------------------------------------------------------------------------------

    public string Name { get; init; }
    public string DisplayName
    {
        get { return _DisplayName ?? StringUtils.CamelCaseToWords(Name); }
        init { _DisplayName = value; }
    }

    //--------------------------------------------------------------------------------------------------

    public string Description { get; init; }
    public Dictionary<string, object> EditorHints { get; init; }
    public ParameterFlags Flags { get; init; }
    public PhysicalQuantities PhysicalQuantity { get; init; } = PhysicalQuantities.Dimensionless;
    public MeasurementDescriptor Descriptor => UnitsService.GetDescriptor(PhysicalQuantity);

    //--------------------------------------------------------------------------------------------------

    bool _IsVisible = true;
    public bool IsVisible
    {
        get => _IsVisible;
        set
        {
            if (_IsVisible == value)
                return;

            _IsVisible = value;
            RaisePropertyChanged(nameof(IsVisible));
        }
    }

    //--------------------------------------------------------------------------------------------------

    public abstract Type ParameterType { get; }
    public abstract bool IsOverridden { get; }
    public abstract void ResetToDefault();

    // ISerializeValue
    public abstract bool Write(Writer writer, SerializationContext context);
    public abstract bool Read(Reader reader, SerializationContext context);

    //--------------------------------------------------------------------------------------------------

    readonly string _DisplayName;

    //--------------------------------------------------------------------------------------------------

    public event PropertyChangedEventHandler PropertyChanged;

    protected virtual void RaisePropertyChanged([CallerMemberName] string propertyName = null)
    {
        PropertyChanged?.Invoke(this, new(propertyName));
    }
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

public class Parameter<T> : Parameter
{
    public override Type ParameterType
    {
        get { return typeof(T); }
    }

    //--------------------------------------------------------------------------------------------------

    public override bool IsOverridden
    {
        get { return !EqualityComparer<T>.Default.Equals(Value, DefaultValue); }
    }

    //--------------------------------------------------------------------------------------------------

    public T Value
    {
        get { return _Value; }
        set
        {
            if (!EqualityComparer<T>.Default.Equals(Value, value))
            {
                _Value = value;
                RaisePropertyChanged();
                RaisePropertyChanged(nameof(IsOverridden));
            }
        }
    }

    T _Value;

    //--------------------------------------------------------------------------------------------------

    public T DefaultValue
    {
        get { return _DefaultValue; }
        init
        {
            _DefaultValue = value;
            _Value = value;
        }
    }

    readonly T _DefaultValue;

    //--------------------------------------------------------------------------------------------------

    public override void ResetToDefault()
    {
        _Value = _DefaultValue;
        RaisePropertyChanged(nameof(Value));
        RaisePropertyChanged(nameof(IsOverridden));
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Write(Writer writer, SerializationContext context)
    {
        return writer.WriteType(_Value, context);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Read(Reader reader, SerializationContext context)
    {
        try
        {
            T newValue = reader.ReadType<T>(null, context);
            if (newValue != null)
            {
                _Value = (T)newValue;
            }
            return true;
        }
        catch (Exception e)
        {
            _Value = _DefaultValue;
            Console.WriteLine(e);
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

}

//--------------------------------------------------------------------------------------------------
