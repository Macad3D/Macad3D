using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.Linq;

namespace Macad.Common;

public static class UnitsService
{
    public static Action MeasurementSettingsChanged;

    //--------------------------------------------------------------------------------------------------

    public static string Format(double value, MeasurementDescriptor descriptor, string label = null)
    {
        if (descriptor is null)
            throw new ArgumentNullException(nameof(descriptor));

        double converted = UnitConversionService.ConvertToDisplayUnits(value, descriptor);
        var model = descriptor.GetPrecisionModel();
        var formatted = model.Format(converted);

        // Append unit symbol (mm, in, °, %, etc.)
        string symbol = GetDisplaySymbol(descriptor);

        if (!string.IsNullOrEmpty(symbol))
            formatted += symbol;

        return string.IsNullOrWhiteSpace(label)
            ? formatted
            : $"{label}: {formatted}";
    }

    //--------------------------------------------------------------------------------------------------

    public static string Format(string formattedValue, string label = null) 
    { 
        bool hasLabel = !string.IsNullOrWhiteSpace(label); 
        
        if (string.IsNullOrEmpty(formattedValue)) 
            return hasLabel ? $"{label}: " : string.Empty; 
        
        return hasLabel ? $"{label}: {formattedValue}" : formattedValue; 
    }

    //--------------------------------------------------------------------------------------------------

    public static bool TryParse(string text, MeasurementDescriptor descriptor, out double kernelValue)
    {
        kernelValue = 0; 
        
        if (descriptor is null) 
            return false;

        string stripped = StripSymbol(text, descriptor);

        var model = descriptor.GetPrecisionModel(); 
        double displayValue = model.Parse(stripped);

        kernelValue = UnitConversionService.ConvertToKernelUnits(displayValue, descriptor);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool TryParseExpression(string text, MeasurementDescriptor descriptor, out double kernelValue)
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

    static string StripSymbol(string text, MeasurementDescriptor descriptor)
    {
        if (string.IsNullOrWhiteSpace(text))
            return string.Empty;

        text = text.Trim();

        // 1. Remove unit-system symbol (mm, cm, m, in, rad, grad, etc.)
        string systemSymbol = UnitSymbolProvider.GetSymbol(descriptor.UnitSystem);
        if (!string.IsNullOrEmpty(systemSymbol) && text.EndsWith(systemSymbol, StringComparison.OrdinalIgnoreCase))
        {
            text = text.Substring(0, text.Length - systemSymbol.Length).Trim();
        }

        // 2. Remove quantity symbol (°, %, px, s, d)
        string quantitySymbol = UnitSymbolProvider.GetSymbol(descriptor.PhysicalQuantity);
        if (!string.IsNullOrEmpty(quantitySymbol) && text.EndsWith(quantitySymbol, StringComparison.OrdinalIgnoreCase))
        {
            text = text.Substring(0, text.Length - quantitySymbol.Length).Trim();
        }

        return text;
    }

    //--------------------------------------------------------------------------------------------------

    public static string GetDisplaySymbol(MeasurementDescriptor descriptor)
    { 
        return UnitSymbolProvider.GetSymbol(descriptor.UnitSystem); 
    }

    //--------------------------------------------------------------------------------------------------

    public interface IMeasurementSettingsProvider
    {
        MeasurementDescriptor GetDescriptor(PhysicalQuantities quantity);
    }

    //--------------------------------------------------------------------------------------------------

    public static IMeasurementSettingsProvider SettingsProvider { get; set; }

    //--------------------------------------------------------------------------------------------------

    public static MeasurementDescriptor GetDescriptor(PhysicalQuantities quantity)
    {
        return SettingsProvider?.GetDescriptor(quantity);
    }

}
