using System;
using System.Collections.Generic;
using System.Configuration;
using System.Diagnostics;
using System.Globalization;
using System.Linq;
using System.Reflection.Metadata;

namespace Macad.Common;

public class UnitsService
{
    readonly IUnitsSettingsProvider _settingsProvider;
    public MeasurementDescriptor Length { get; private set; }
    public MeasurementDescriptor Angle { get; private set; }
    public MeasurementDescriptor Time { get; private set; }
    public MeasurementDescriptor Dimensionless { get; private set; }

    public event Action MeasurementSettingsChanged;

    //--------------------------------------------------------------------------------------------------

    public string Format(double value, MeasurementDescriptor descriptor, string label = null)
    {
        if (descriptor is null)
            throw new ArgumentNullException(nameof(descriptor));

        var model = descriptor.GetPrecisionModel();

        double converted = UnitConversionService.ConvertToDisplayUnits(value, descriptor.UnitId, descriptor.PhysicalQuantity);
        
        var formatted = model.Format(converted);

        string symbol = UnitSymbolProvider.GetSymbol(descriptor.UnitId);

        if (!string.IsNullOrEmpty(symbol))
            formatted += symbol;

        return string.IsNullOrWhiteSpace(label)
            ? formatted
            : $"{label}: {formatted}";
    }

    //--------------------------------------------------------------------------------------------------

    public string Format(string formattedValue, string label = null) 
    { 
        bool hasLabel = !string.IsNullOrWhiteSpace(label); 
        
        if (string.IsNullOrEmpty(formattedValue)) 
            return hasLabel ? $"{label}: " : string.Empty; 
        
        return hasLabel ? $"{label}: {formattedValue}" : formattedValue; 
    }

    //--------------------------------------------------------------------------------------------------

    public bool TryParseExpression(string text, MeasurementDescriptor descriptor, out double kernelValue)
    {
        kernelValue = 0;

        if (string.IsNullOrWhiteSpace(text))
            return false;

        bool isFormula = text.StartsWith("=");

        if (isFormula)
            text = text.Substring(1).Trim();

        try
        {
            var tokens = Tokenizer.Tokenize(text);

            if (isFormula)
            {
                // Formula mode: treat all numbers as unitless, ignore descriptor
                var kernelTokens = UnitInterpreter.ToKernelTokens(tokens, null);
                double result = ExpressionEvaluator.EvaluateKernelTokens(kernelTokens);
                if (double.IsNaN(result) || double.IsInfinity(result))
                    return false;

                kernelValue = result;
                return true;
            }

            // Normal unit-aware path
            var unitKernelTokens = UnitInterpreter.ToKernelTokens(tokens, descriptor);
            double value = ExpressionEvaluator.EvaluateKernelTokens(unitKernelTokens);
            if (double.IsNaN(value) || double.IsInfinity(value))
                return false;

            kernelValue = value;
            return true;
        }
        catch
        {
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public UnitsService(IUnitsSettingsProvider settingsProvider)
    {
        _settingsProvider = settingsProvider ?? throw new ArgumentNullException(nameof(settingsProvider));
        var set = _settingsProvider.GetUnitsParameterSet();

        Length = new MeasurementDescriptor(set.LengthUnit, set.LengthPrecision);
        Angle = new MeasurementDescriptor(set.AngleUnit, set.AnglePrecision);
        Time = new MeasurementDescriptor(set.TimeUnit, set.TimePrecision);
        Dimensionless = new MeasurementDescriptor(UnitId.Number, 1);

        RebuildDescriptors();
    }

    //--------------------------------------------------------------------------------------------------

    public MeasurementDescriptor GetDescriptor(PhysicalQuantity quantity)
    {
        var unitId = _settingsProvider.GetUnitId(quantity);
        var precision = _settingsProvider.GetPrecision(quantity);

        return new MeasurementDescriptor(unitId, precision);
    }

    //--------------------------------------------------------------------------------------------------

    public void RebuildDescriptors()
    {
        var set = _settingsProvider.GetUnitsParameterSet();

        Length = new MeasurementDescriptor(set.LengthUnit, set.LengthPrecision);
        Angle = new MeasurementDescriptor(set.AngleUnit, set.AnglePrecision);
        Time = new MeasurementDescriptor(set.TimeUnit, set.TimePrecision);
        Dimensionless = new MeasurementDescriptor(UnitId.Percentage, 0);

        MeasurementSettingsChanged?.Invoke();
    }


    //--------------------------------------------------------------------------------------------------

    public void RaiseMeasurementSettingsChanged() 
    { 
        MeasurementSettingsChanged?.Invoke(); 
    }
}
