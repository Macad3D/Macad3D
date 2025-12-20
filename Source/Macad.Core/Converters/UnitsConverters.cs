using Macad.Common;
using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Data;
using System.Windows.Markup;

namespace Macad.Core;

public enum ValueUnits
{
    None,
    Length,
    Degree,
    Percent,
    DotsPerInch,
    Days,
    Seconds,
    Pixel
}

public static class UnitsService
{
    public static ApplicationUnits CurrentUnits
        => CoreContext.Current.Parameters.Get<ApplicationParameterSet>().ApplicationUnits;

    public static string Format(double mm)
        => ImperialLengthFormatter.FormatLength(mm, CurrentUnits);

    public static bool TryParse(string text, out double mm)
        => ImperialLengthFormatter.TryParseLength(text, CurrentUnits, out mm);

    public static string FormatWithLabel(double mm)
        => $"{Format(mm)}{UnitLabel}";

    public static string FormatHud(string name, double mm)
        => $"{name}: {Format(mm)}{UnitLabel}";

    public static string FormatLabelValue(string label, double mm) 
    { 
        return $"{label}: {Format(mm)}{UnitLabel}"; 
    }
    public static string UnitLabel => UnitLabelProvider.GetLabel(CurrentUnits);
}

public static class UnitLabelProvider 
{ 
    public static string GetLabel(ApplicationUnits units) 
    { 
        return units switch 
        { 
            ApplicationUnits.Millimeters => "mm", 
            ApplicationUnits.Inches => "\"", 
            ApplicationUnits.Inches16ths => "\"", 
            ApplicationUnits.Inches32nds => "\"", 
            ApplicationUnits.Architectural => "\"", 
            _ => "" 
        }; 
    } 
}

public static class ImperialLengthFormatter
{
    private const double MmPerInch = 25.4;  // This is an exact conversion factor

    // Main entry points -------------------------------------------------------
    public static string FormatLength(double mm, ApplicationUnits units)
    {
        return units switch
        {
            ApplicationUnits.Millimeters => $"{mm:F3}",
            ApplicationUnits.Inches => FormatDecimalInches(mm),
            ApplicationUnits.Inches16ths => FormatFractionalInches(mm, 16),
            ApplicationUnits.Inches32nds => FormatFractionalInches(mm, 32),
            ApplicationUnits.Architectural => FormatArchitectural(mm),
            _ => $"{mm:F2}"
        };
    }

    public static bool TryParseExpression(string text, out double mm)
    {
        mm = 0; 
        if (!text.StartsWith("=")) 
            return false; 
        
        // Strip leading '='
        string expr = text.Substring(1).Trim(); 
        
        // Replace unit-bearing tokens with mm values 
        // Example: "10mm + 1/32" → "10*1 + (1/32)*25.4"

        expr = ConvertUnitsInsideExpression(expr); // Evaluate using your existing evaluator
        double? result = Common.Evaluator.Evaluator.EvaluateExpression(expr, out _); 
        
        if (!result.HasValue) 
            return false; 
        
        mm = result.Value; 
        return true; 
    }

    private static string ConvertUnitsInsideExpression(string expr)
    {
        var sb = new StringBuilder();
        int i = 0;

        while (i < expr.Length)
        {
            char c = expr[i];

            // ------------------------------------------------------------
            // 1. Skip whitespace
            // ------------------------------------------------------------
            if (char.IsWhiteSpace(c))
            {
                sb.Append(c);
                i++;
                continue;
            }

            // ------------------------------------------------------------
            // 2. FRACTION:  number/number
            // ------------------------------------------------------------
            if (char.IsDigit(c))
            {
                int start = i;

                // Parse numerator
                while (i < expr.Length && (char.IsDigit(expr[i]) || expr[i] == '.'))
                    i++;

                double numerator = 0;
                double denominator = 0;

                // Check for slash
                if (i < expr.Length && expr[i] == '/')
                {
                    string numStr = expr.Substring(start, i - start);
                    numerator = double.Parse(numStr, CultureInfo.InvariantCulture);

                    i++; // skip '/'

                    int denStart = i;
                    while (i < expr.Length && (char.IsDigit(expr[i]) || expr[i] == '.'))
                        i++;

                    string denStr = expr.Substring(denStart, i - denStart);
                    denominator = double.Parse(denStr, CultureInfo.InvariantCulture);

                    double mm = (numerator / denominator) * 25.4;
                    sb.Append(mm.ToString(CultureInfo.InvariantCulture));
                    continue;
                }

                // ------------------------------------------------------------
                // 3. NUMBER (possibly with unit suffix)
                // ------------------------------------------------------------
                string number = expr.Substring(start, i - start);

                // Look ahead for unit suffix
                string unit = "";
                int unitStart = i;

                while (i < expr.Length && char.IsLetter(expr[i]))
                    i++;

                if (i > unitStart)
                    unit = expr.Substring(unitStart, i - unitStart).ToLowerInvariant();

                // Architectural symbols
                bool hasFeet = false;
                bool hasInches = false;

                if (i < expr.Length && expr[i] == '\'')
                {
                    hasFeet = true;
                    i++;
                }
                if (i < expr.Length && expr[i] == '"')
                {
                    hasInches = true;
                    i++;
                }

                double value = double.Parse(number, CultureInfo.InvariantCulture);
                double mmValue = 0;

                if (unit == "mm")
                {
                    mmValue = value;
                }
                else if (unit == "in" || hasInches)
                {
                    mmValue = value * 25.4;
                }
                else if (hasFeet)
                {
                    mmValue = value * 304.8;
                }
                else
                {
                    // No unit → leave number as-is
                    sb.Append(number);
                    continue;
                }

                sb.Append(mmValue.ToString(CultureInfo.InvariantCulture));
                continue;
            }

            // ------------------------------------------------------------
            // 4. Operators, parentheses, etc.
            // ------------------------------------------------------------
            sb.Append(c);
            i++;
        }

        return sb.ToString();
    }

    // Parse back user input ---------------------------------------------------
    public static bool TryParseLength(string text, ApplicationUnits units, out double mm)
    {
        mm = 0; 
        text = text.Trim(); 
        // 1. Expression mode (=...)
        if (text.StartsWith("=")) 
        { 
            if (TryParseExpression(text, out mm)) 
                return true; 
        } 

        // 2. Explicit mm
        if (text.EndsWith("mm", StringComparison.OrdinalIgnoreCase) && TryParseMm(text, out mm)) 
            return true; 

        // 3. Explicit inches (decimal)
        if (text.EndsWith("in", StringComparison.OrdinalIgnoreCase) && TryParseDecimalInches(text, out mm)) 
            return true; 

        // 4. Architectural (feet/inches)
        if (text.Contains("'") || text.Contains("\"")) 
        { 
            if (TryParseArchitectural(text, out mm)) return true; 
        } 
        
        // 5. Generic fraction (ANY denominator)
        if (TryParseGenericFraction(text, out mm)) 
            return true; 

        // 6. Decimal inches without unit
        if (TryParseDecimalInches(text, out mm)) 
            return true; 
        
        // 7. Fallback: mm without unit
        if (TryParseMm(text, out mm)) 
            return true; 
        
        return false; 
    }

    private static bool TryParseGenericFraction(string s, out double mm) 
    { 
        mm = 0; 
        s = s.Replace("\"", "").Trim(); 

        if (!s.Contains("/")) 
            return false; 
        
        var parts = s.Split('/'); 
        
        if (parts.Length != 2) 
            return false; 
        
        if (!double.TryParse(parts[0], out double num)) 
            return false; 
        
        if (!double.TryParse(parts[1], out double den)) 
            return false; 
        
        if (Math.Abs(den) < 1e-12) 
            return false; 
        
        double inches = num / den; 
        mm = inches * 25.4; 
        return true; 
    }

    // -------------------------------------------------------------------------
    // 1. Decimal inches (e.g. 27.342")
    private static string FormatDecimalInches(double mm)
    {
        double inches = mm / MmPerInch;
        // Use 3-4 decimal places typical for CAD – adjust as you like
        return $"{inches:F3}";
    }

    private static bool TryParseDecimalInches(string s, out double mm)
    {
        mm = 0;
        s = s.Replace("\"", "").Trim();
        if (double.TryParse(s, NumberStyles.Any, CultureInfo.InvariantCulture, out double inches))
        {
            mm = inches * MmPerInch;
            return true;
        }
        return false;
    }

    // -------------------------------------------------------------------------
    // 2. & 3. Mixed fractional inches (16ths or 32nds) → 27 11/16   (no ")
    private static string FormatFractionalInches(double mm, int denominator)
    {
        double inches = mm / MmPerInch;
        return ToMixedFraction(inches, denominator, showZeroFraction: false, includeUnit: false, reduceFraction: false);
    }

    private static bool TryParseMixedFraction(string s, int denominator, out double mm)
    {
        // Accepts: "27 11/16"  or "27-11/16"  or "11/16"  or "27"
        mm = 0;
        s = s.Replace("\"", "").Replace("-", " ").Trim();

        var parts = s.Split(new[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);
        double total = 0;

        foreach (var p in parts)
        {
            if (p.Contains("/"))
            {
                var frac = p.Split('/');

                // Accept input of various power-of-2 fractions as long as they fit into the denominator
                if (frac.Length == 2 &&
                    int.TryParse(frac[0].Trim(), out int num) &&
                    int.TryParse(frac[1].Trim(), out int den) &&
                    (denominator % den == 0))
                {
                    total += (double)num / den;
                }
                else return false;
            }
            else if (int.TryParse(p, out int whole))
            {
                total += whole;
            }
            else return false;
        }

        mm = total * MmPerInch;
        return true;
    }

    // -------------------------------------------------------------------------
    // 4. Architectural: 27'-11 1/8"   or 27'   or 0' 11 1/8"  etc.
    private static string FormatArchitectural(double mm)
    {
        double totalInches = mm / MmPerInch;
        int feet = (int)Math.Floor(totalInches / 12);
        double remainderInches = totalInches - feet * 12;

        string inchesPart = ToArchitecturalFraction(remainderInches);

        if (feet == 0 && remainderInches < 1e-9)
            return "0'";

        if (string.IsNullOrEmpty(inchesPart))
            return $"{feet}'";

        return $"{feet}'-{inchesPart}";
    }

    private static string ToArchitecturalFraction(double inches)
    {
        if (Math.Abs(inches) < 1e-9)
            return "";

        int[] denominators = { 2, 4, 8, 16, 32 };
        string best = "";
        double bestError = double.MaxValue;

        foreach (int den in denominators)
        {
            string candidate = ToMixedFraction(inches, den, showZeroFraction: true, includeUnit: true);

            if (TryParseMixedFraction(candidate, den, out double parsedMm))
            {
                double parsedInches = parsedMm / MmPerInch;
                double error = Math.Abs(parsedInches - inches);

                if (error < bestError)
                {
                    bestError = error;
                    best = candidate;
                }

                // Short‑circuit if essentially exact
                if (error < 1e-6)
                    break;
            }
        }

        return best;
    }


    private static bool TryParseArchitectural(string s, out double mm)
    {
        mm = 0;
        s = s.Replace("''", "\"").Trim(); // some users type '' for "

        int feet = 0;
        double inches = 0;

        // Split on feet symbol
        var parts = s.Split('\'');
        if (parts.Length > 2) return false;

        if (parts.Length == 2)
        {
            if (!int.TryParse(parts[0].Trim(), out feet))
                return false;

            string inchPart = parts[1].Trim();
            if (string.IsNullOrEmpty(inchPart))
            {
                mm = feet * 12 * MmPerInch;
                return true;
            }

            // Now parse the inches part (can be "11 1/8\"" or "1/8\"" or "11\"")
            if (!TryParseInchPartArchitectural(inchPart, out inches))
                return false;
        }
        else
        {
            // No feet symbol → try to parse as inches only
            if (!TryParseInchPartArchitectural(parts[0], out inches))
                return false;
        }

        mm = (feet * 12 + inches) * MmPerInch;
        return true;
    }

    private static bool TryParseInchPartArchitectural(string s, out double inches)
    {
        inches = 0;
        s = s.Replace("\"", "").Trim();

        var tokens = s.Split(new[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);
        double total = 0;

        foreach (var t in tokens)
        {
            if (t.Contains("/"))
            {
                var f = t.Split('/');
                if (f.Length != 2) return false;
                if (!int.TryParse(f[0].Trim(), out int n) || !int.TryParse(f[1].Trim(), out int d)) return false;
                total += (double)n / d;
            }
            else if (double.TryParse(t, NumberStyles.Any, CultureInfo.InvariantCulture, out double i))
            {
                total += i;
            }
            else return false;
        }

        inches = total;
        return true;
    }

    // -------------------------------------------------------------------------
    // Core mixed-fraction converter (used by 16ths, 32nds, and Architectural)
    private static string ToMixedFraction(double value, int denominator, bool showZeroFraction, bool includeUnit, bool reduceFraction = true)
    {
        if (Math.Abs(value) < 1e-9)
            return showZeroFraction && includeUnit ? "0\"" : "";

        bool negative = value < 0;
        value = Math.Abs(value);

        int whole = (int)Math.Floor(value);
        double fraction = value - whole;

        // Round to nearest fraction with given denominator
        int numer = (int)Math.Round(fraction * denominator, MidpointRounding.AwayFromZero);
        if (numer == denominator)
        {
            numer = 0;
            whole++;
        }

        string sign = negative ? "-" : "";
        string unit = includeUnit ? "\"" : "";

        if (numer == 0)
            return showZeroFraction ? $"{sign}{whole}{unit}" : $"{sign}{whole}";

        if (reduceFraction)
        {
            int gcd = Gcd(numer, denominator);
            numer /= gcd;
            denominator /= gcd;
        }
        
        if (whole == 0)
            return $"{sign}{numer}/{denominator}{unit}";

        return $"{sign}{whole} {numer}/{denominator}{unit}";
    }

    private static int Gcd(int a, int b) => b == 0 ? a : Gcd(b, a % b);

    // Simple mm parser fallback
    private static bool TryParseMm(string s, out double mm)
    {
        s = s.Replace("mm", "").Trim();
        return double.TryParse(s, NumberStyles.Any, CultureInfo.InvariantCulture, out mm);
    }
}

