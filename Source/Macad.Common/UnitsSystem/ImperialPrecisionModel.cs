using System;

namespace Macad.Common;

public class ImperialPrecisionModel : IPrecisionModel
{
    readonly ImperialLengthPrecision _precision;
    public ImperialLengthPrecision PrecisionEnum { get; }

    //--------------------------------------------------------------------------------------------------

    public ImperialPrecisionModel(ImperialLengthPrecision precision)
    {
        _precision = precision;
        PrecisionEnum = precision;
    }

    //--------------------------------------------------------------------------------------------------

    public double Round(double inches)
    {
        return inches;
    }

    //--------------------------------------------------------------------------------------------------

    public string Format(double inches)
    {
        return _precision switch
        {
            ImperialLengthPrecision.InchDecimal_0
            or ImperialLengthPrecision.InchDecimal_1
            or ImperialLengthPrecision.InchDecimal_2
            or ImperialLengthPrecision.InchDecimal_3
            or ImperialLengthPrecision.InchDecimal_4
                => ImperialLengthFormatter.FormatDecimalInches(inches, _precision),

            ImperialLengthPrecision.InchFraction_1_2
            or ImperialLengthPrecision.InchFraction_1_4
            or ImperialLengthPrecision.InchFraction_1_8
            or ImperialLengthPrecision.InchFraction_1_16
            or ImperialLengthPrecision.InchFraction_1_32
            or ImperialLengthPrecision.InchFraction_1_64
            or ImperialLengthPrecision.InchFraction_1_128
            or ImperialLengthPrecision.InchFraction_1_256
            or ImperialLengthPrecision.InchFraction_1_n
                => ImperialLengthFormatter.FormatFractionalInches(inches, _precision),

            ImperialLengthPrecision.Arch_1_4
            or ImperialLengthPrecision.Arch_1_8
            or ImperialLengthPrecision.Arch_1_16
                => ImperialLengthFormatter.FormatArchitectural(inches, _precision),

            _ => inches.ToString()
        };
    }

    //--------------------------------------------------------------------------------------------------

    public double Parse(string text)
    {
        return _precision switch
        {
            ImperialLengthPrecision.InchDecimal_0
            or ImperialLengthPrecision.InchDecimal_1
            or ImperialLengthPrecision.InchDecimal_2
            or ImperialLengthPrecision.InchDecimal_3
            or ImperialLengthPrecision.InchDecimal_4
                => ImperialLengthFormatter.ParseDecimalInches(text),

            ImperialLengthPrecision.InchFraction_1_2
            or ImperialLengthPrecision.InchFraction_1_4
            or ImperialLengthPrecision.InchFraction_1_8
            or ImperialLengthPrecision.InchFraction_1_16
            or ImperialLengthPrecision.InchFraction_1_32
            or ImperialLengthPrecision.InchFraction_1_64
            or ImperialLengthPrecision.InchFraction_1_128
            or ImperialLengthPrecision.InchFraction_1_256
            or ImperialLengthPrecision.InchFraction_1_n
                => ImperialLengthFormatter.ParseFractionalInches(text),

            ImperialLengthPrecision.Arch_1_4
            or ImperialLengthPrecision.Arch_1_8
            or ImperialLengthPrecision.Arch_1_16
                => ImperialLengthFormatter.ParseArchitectural(text),

            _ => double.Parse(text)
        };
    }
}
