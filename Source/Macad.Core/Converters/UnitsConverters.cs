using Macad.Common;
using Macad.Core;
using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Data;

namespace Macad.Core.Converters;

public class LengthDimensionFormatter : IValueConverter
{
    public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        if (value is double mm)
        {
            // Get current application units from CoreContext
            var appParams = CoreContext.Current.Parameters.Get<ApplicationParameterSet>();
            var units = appParams.ApplicationUnits;

            // Delegate to ImperialLengthFormatter
            return ImperialLengthFormatter.FormatLength(mm, units);
        }

        return string.Empty;
    }

    public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
    {
        // Optional: implement parsing if you want user input to be converted back
        throw new NotImplementedException();
    }
}


public sealed class GridStepCheckedConverter : IValueConverter
{
    public static readonly GridStepCheckedConverter Instance = new();

    private GridStepCheckedConverter() { }

    public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        if (value is not double currentGridStepMm || parameter is not double targetDisplayValue)
            return false;

        var appParams = CoreContext.Current.Parameters.Get<ApplicationParameterSet>();
        var units = appParams.ApplicationUnits;

        double currentInDisplay = units == ApplicationUnits.Millimeters
            ? currentGridStepMm
            : currentGridStepMm / 25.4;

        return Math.Abs(currentInDisplay - targetDisplayValue) < 1e-6;
    }

    public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
        => throw new NotSupportedException();
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

    // Parse back user input ---------------------------------------------------
    public static bool TryParseLength(string text, ApplicationUnits units, out double mm)
    {
        mm = 0;
        text = text.Trim();

        return units switch
        {
            ApplicationUnits.Millimeters => TryParseMm(text, out mm),
            ApplicationUnits.Inches => TryParseDecimalInches(text, out mm),
            ApplicationUnits.Inches16ths => TryParseMixedFraction(text, 16, out mm),
            ApplicationUnits.Inches32nds => TryParseMixedFraction(text, 32, out mm),
            ApplicationUnits.Architectural => TryParseArchitectural(text, out mm),
            _ => TryParseMm(text, out mm)
        };
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
                if (frac.Length == 2 &&
                    int.TryParse(frac[0].Trim(), out int num) &&
                    int.TryParse(frac[1].Trim(), out int den) &&
                    den == denominator)
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
    // 4. Architectural: 27' 11 1/8"   or 27'   or 0' 11 1/8"  etc.
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

        return $"{feet}' {inchesPart}";
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

public sealed class GridStepDisplayConverter : IMultiValueConverter
{
    public static readonly GridStepDisplayConverter Instance = new();

    public GridStepDisplayConverter() { }

    public object Convert(object[] values, Type targetType, object parameter, CultureInfo culture)
    {
        if (values.Length != 2 || values[0] is not double gridStepMm || values[1] is not ApplicationUnits units)
            return "?.??";

        return ImperialLengthFormatter.FormatLength(gridStepMm, units);
    }

    public object[] ConvertBack(object value, Type[] targetTypes, object parameter, CultureInfo culture)
        => throw new NotSupportedException();
}


