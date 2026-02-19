using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Globalization;
using System.ComponentModel.DataAnnotations;

namespace Macad.Common;

public static class UnitInterpreter
{
    public static List<Token> ToKernelTokens(List<Token> tokens, MeasurementDescriptor descriptor)
    {
        var output = new List<Token>();
        int i = 0;

        while (i < tokens.Count)
        {
            var t = tokens[i];

            if (t.Type == TokenType.Operator ||
                t.Type == TokenType.ParenOpen ||
                t.Type == TokenType.ParenClose)
            {
                output.Add(t);
                i++;
                continue;
            }

            if (IsArchitectural(tokens, i))
            {
                double kernel = ParseArchitectural(tokens, ref i);
                output.Add(new Token(TokenType.Number, kernel.ToString(CultureInfo.InvariantCulture)));
                continue;
            }

            if (IsFractionalInches(tokens, i))
            {
                double kernel = ParseFractionalInches(tokens, ref i);
                output.Add(new Token(TokenType.Number, kernel.ToString(CultureInfo.InvariantCulture)));
                continue;
            }

            if (IsNumberWithUnit(tokens, i))
            {
                double kernel = ParseNumberWithUnit(tokens, ref i);
                output.Add(new Token(TokenType.Number, kernel.ToString(CultureInfo.InvariantCulture)));
                continue;
            }

            if (t.Type == TokenType.Number)
            {
                double kernel = ParseUnitlessNumber(tokens, ref i, descriptor);
                output.Add(new Token(TokenType.Number, kernel.ToString(CultureInfo.InvariantCulture)));
                continue;
            }

            if (t.Type == TokenType.Fraction)
            {
                double kernel = ParseUnitlessFraction(tokens, ref i, descriptor);
                output.Add(new Token(TokenType.Number, kernel.ToString(CultureInfo.InvariantCulture)));
                continue;
            }

            throw new FormatException($"Unexpected token sequence at index {i}.");
        }

        return output;
    }

    //--------------------------------------------------------------------------------------------------

    static bool IsArchitectural(List<Token> tokens, int i)
    {
        // Pattern: Number ' - Number [Fraction] "
        if (i + 4 < tokens.Count &&
            tokens[i].Type == TokenType.Number &&
            tokens[i + 1].Type == TokenType.Unit && tokens[i + 1].Text == "'" &&
            tokens[i + 2].Type == TokenType.ArchitecturalSeparator &&
            tokens[i + 3].Type == TokenType.Number &&
            tokens[i + 4].Type == TokenType.Unit && tokens[i + 4].Text == "\"")
        {
            return true;
        }

        // Pattern: Number ' - Number Fraction "
        if (i + 5 < tokens.Count &&
            tokens[i].Type == TokenType.Number &&
            tokens[i + 1].Type == TokenType.Unit && tokens[i + 1].Text == "'" &&
            tokens[i + 2].Type == TokenType.ArchitecturalSeparator &&
            tokens[i + 3].Type == TokenType.Number &&
            tokens[i + 4].Type == TokenType.Fraction &&
            tokens[i + 5].Type == TokenType.Unit && tokens[i + 5].Text == "\"")
        {
            return true;
        }

        return false;
    }

    //--------------------------------------------------------------------------------------------------

    static double ParseArchitectural(List<Token> tokens, ref int i)
    {
        // feet
        double feet = double.Parse(tokens[i].Text, CultureInfo.InvariantCulture);
        i += 2; // skip Number and '

        // skip '-'
        i++;

        // inches (whole)
        double inches = double.Parse(tokens[i].Text, CultureInfo.InvariantCulture);
        i++;

        // optional fraction
        if (i < tokens.Count && tokens[i].Type == TokenType.Fraction)
        {
            inches += ParseFraction(tokens[i].Text);
            i++;
        }

        // skip "
        if (tokens[i].Type != TokenType.Unit || tokens[i].Text != "\"")
            throw new FormatException("Architectural inches must end with a double-quote.");

        i++;

        double totalInches = feet * 12.0 + inches;
        return totalInches * 25.4; // kernel = mm
    }

    //--------------------------------------------------------------------------------------------------

    static bool IsFractionalInches(List<Token> tokens, int i)
    {
        // Pattern: Number Fraction "
        if (i + 2 < tokens.Count &&
            tokens[i].Type == TokenType.Number &&
            tokens[i + 1].Type == TokenType.Fraction &&
            tokens[i + 2].Type == TokenType.Unit && tokens[i + 2].Text == "\"")
        {
            return true;
        }

        // Pattern: Fraction "
        if (i + 1 < tokens.Count &&
            tokens[i].Type == TokenType.Fraction &&
            tokens[i + 1].Type == TokenType.Unit && tokens[i + 1].Text == "\"")
        {
            return true;
        }

        return false;
    }

    //--------------------------------------------------------------------------------------------------

    static double ParseFractionalInches(List<Token> tokens, ref int i)
    {
        double inches = 0;

        if (tokens[i].Type == TokenType.Number)
        {
            inches = double.Parse(tokens[i].Text, CultureInfo.InvariantCulture);
            i++;
        }

        if (tokens[i].Type == TokenType.Fraction)
        {
            inches += ParseFraction(tokens[i].Text);
            i++;
        }

        // skip "
        i++;

        return inches * 25.4;
    }

    //--------------------------------------------------------------------------------------------------

    static double ParseFraction(string text)
    {
        var parts = text.Split('/');
        double num = double.Parse(parts[0], CultureInfo.InvariantCulture);
        double den = double.Parse(parts[1], CultureInfo.InvariantCulture);
        return num / den;
    }

    //--------------------------------------------------------------------------------------------------

    static bool IsNumberWithUnit(List<Token> tokens, int i)
    {
        return (i + 1 < tokens.Count &&
                tokens[i].Type == TokenType.Number &&
                tokens[i + 1].Type == TokenType.Unit);
    }

    //--------------------------------------------------------------------------------------------------

    static double ParseNumberWithUnit(List<Token> tokens, ref int i)
    {
        double value = double.Parse(tokens[i].Text, CultureInfo.InvariantCulture);
        string unit = tokens[i + 1].Text;

        i += 2;

        return ConvertToKernel(value, unit);
    }

    //--------------------------------------------------------------------------------------------------

    static double ParseUnitlessNumber(List<Token> tokens, ref int i, MeasurementDescriptor descriptor)
    {
        double value = double.Parse(tokens[i].Text, CultureInfo.InvariantCulture);
        i++;

        if (descriptor == null || descriptor.UnitSystem == null)
        {
            return value;
        }

        string uiUnit = UnitSymbolProvider.GetSymbol(descriptor.UnitSystem);
        return ConvertToKernel(value, uiUnit);
    }

    //--------------------------------------------------------------------------------------------------

    static double ParseUnitlessFraction(List<Token> tokens, ref int i, MeasurementDescriptor descriptor)
    {
        string frac = tokens[i].Text;   // e.g., "2/16"
        i++;

        // Convert fraction to double
        var parts = frac.Split('/');

        if (parts.Length != 2)
            throw new FormatException($"Invalid fraction literal '{frac}'.");

        double num = double.Parse(parts[0], CultureInfo.InvariantCulture);
        double den = double.Parse(parts[1], CultureInfo.InvariantCulture);
        double value = num / den;

        // Apply default unit system
        string uiUnit = UnitSymbolProvider.GetSymbol(descriptor.UnitSystem);
        return ConvertToKernel(value, uiUnit);
    }

    //--------------------------------------------------------------------------------------------------

    static double ConvertToKernel(double value, string unit)
    {
        if (string.IsNullOrEmpty(unit))
            return value;

        return unit switch
        {
            "mm" => value,
            "cm" => value * 10.0,
            "m" => value * 1000.0,

            "\"" => value * 25.4,
            "in" => value * 25.4,

            "'" => value * 304.8,
            "ft" => value * 304.8,

            "°" => value, // kernel = degrees
            "rad" => value * (180.0 / Math.PI),

            "s" => value, // kernel = seconds
            "d" => value * 86400.0,

            "%" => value / 100.0,

            _ => throw new FormatException($"Unknown unit '{unit}'.")
        };
    }
}
