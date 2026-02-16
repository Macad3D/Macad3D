using System;
using System.Globalization;

namespace Macad.Common;

public static class ImperialLengthFormatter
{
    //--------------------------------------------------------------------------------------------------

    public static string FormatDecimalInches(double inches, ImperialLengthPrecision precision)
    {
        int decimals = precision.GetPrecisionValue();

        double rounded = Math.Round(inches, decimals);
        return rounded.ToString($"F{decimals}", CultureInfo.InvariantCulture);
    }

    //--------------------------------------------------------------------------------------------------

    public static string FormatFractionalInches(double inches, ImperialLengthPrecision precision)
    {
        int denom = precision.GetPrecisionValue();

        bool negative = inches < 0;
        inches = Math.Abs(inches);

        int whole = (int)Math.Floor(inches);
        double frac = inches - whole;

        if (denom == 0)
        {
            denom = 256;
        }

        int num = (int)Math.Round(frac * denom);

        if (num == denom)
        {
            whole++;
            num = 0;
        }

        Reduce(ref num, ref denom);

        string sign = negative ? "-" : "";

        if (whole == 0 && num == 0)
            return $"{sign}0";

        if (num == 0)
            return $"{sign}{whole}";

        if (whole == 0)
            return $"{sign}{num}/{denom}";

        return $"{sign}{whole} {num}/{denom}";
    }

    //--------------------------------------------------------------------------------------------------

    public static string FormatArchitectural(double inches, ImperialLengthPrecision precision)
    {
        int denom = precision.GetPrecisionValue();

        bool negative = inches < 0;
        inches = Math.Abs(inches);

        int feet = (int)(inches / 12);
        double inchRemainder = inches % 12;

        int wholeInches = (int)Math.Floor(inchRemainder);
        double frac = inchRemainder - wholeInches;

        int num = (int)Math.Round(frac * denom);

        if (num == denom)
        {
            wholeInches++;
            num = 0;
        }

        Reduce(ref num, ref denom);

        string sign = negative ? "-" : "";

        string inchPart =
            num == 0
                ? $"{wholeInches}"
                : $"{wholeInches} {num}/{denom}";

        return $"{sign}{feet}'-{inchPart}";
    }

    //--------------------------------------------------------------------------------------------------

    public static double ParseDecimalInches(string text)
    {
        text = text.Replace("\"", "").Trim();
        return double.Parse(text, CultureInfo.InvariantCulture);
    }

    //--------------------------------------------------------------------------------------------------

    public static double ParseFractionalInches(string text)
    {
        text = text.Replace("\"", "").Trim();

        var parts = text.Split(' ');

        if (parts.Length == 1)
        {
            if (parts[0].Contains("/"))
                return ParseSimpleFraction(parts[0]);

            return double.Parse(parts[0], CultureInfo.InvariantCulture);
        }

        if (parts.Length == 2)
        {
            double whole = double.Parse(parts[0], CultureInfo.InvariantCulture);
            double frac = ParseSimpleFraction(parts[1]);
            return whole + frac;
        }

        throw new FormatException("Invalid fractional inch format.");
    }

    //--------------------------------------------------------------------------------------------------

    public static double ParseArchitectural(string text)
    {
        text = text.Replace("''", "\"").Trim();

        var parts = text.Split('\'');

        if (parts.Length == 1)
        {
            return ParseFractionalInches(parts[0]);
        }

        if (parts.Length == 2)
        {
            int feet = int.Parse(parts[0].Trim(), CultureInfo.InvariantCulture);
            string inchPart = parts[1].Trim();

            if (string.IsNullOrEmpty(inchPart))
                return feet * 12;

            double inches = ParseFractionalInches(inchPart);
            return feet * 12 + inches;
        }

        throw new FormatException("Invalid architectural format.");
    }

    //--------------------------------------------------------------------------------------------------

    static double ParseSimpleFraction(string s)
    {
        var parts = s.Split('/');
        if (parts.Length != 2)
            throw new FormatException("Invalid fraction.");

        double num = double.Parse(parts[0], CultureInfo.InvariantCulture);
        double den = double.Parse(parts[1], CultureInfo.InvariantCulture);

        return num / den;
    }

    //--------------------------------------------------------------------------------------------------

    static void Reduce(ref int num, ref int denom)
    {
        int g = Gcd(num, denom);
        num /= g;
        denom /= g;
    }

    //--------------------------------------------------------------------------------------------------

    static int Gcd(int a, int b)
    {
        while (b != 0)
        {
            int t = b;
            b = a % b;
            a = t;
        }
        return a;
    }
}
