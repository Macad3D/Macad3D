using Macad.Common;
using NUnit.Framework;
using System;
using System.Globalization;

namespace Macad.Test.Unit.Units;

[TestFixture]
public class PrecisionModelTests
{
    //--------------------------------------------------------------------------------------------------
    // Measurement descriptors using your actual MeasurementDescriptor API
    //--------------------------------------------------------------------------------------------------

    // Fractional inches with 1/16" precision
    MeasurementDescriptor Fraction_1_16_Desc =>
        new MeasurementDescriptor(UnitId.InchFractional, 16);

    // Dimensionless with 1 decimal place
    MeasurementDescriptor Decimal_1_Desc =>
        new MeasurementDescriptor(UnitId.Number, 1);

    // Radians with 3 decimal places
    MeasurementDescriptor Decimal_3_Desc =>
        new MeasurementDescriptor(UnitId.Radian, 3);

    //--------------------------------------------------------------------------------------------------

    IPrecisionModel Model(MeasurementDescriptor d) => d.GetPrecisionModel();

    double Parse(IPrecisionModel model, string text)
        => model.Parse(text);

    string Format(IPrecisionModel model, double value)
        => model.Format(value);

    //--------------------------------------------------------------------------------------------------
    // FRACTIONAL FORMATTING
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Fraction_Formats_SimpleFraction()
    {
        var model = Model(Fraction_1_16_Desc);
        var text = Format(model, 0.0625); // 1/16
        Assert.That(text, Is.EqualTo("1/16"));
    }

    [Test]
    public void Fraction_Formats_MixedNumber()
    {
        var model = Model(Fraction_1_16_Desc);
        var text = Format(model, 4.1875); // 4 3/16
        Assert.That(text, Is.EqualTo("4 3/16"));
    }

    [Test]
    public void Fraction_Formats_ReducedFraction()
    {
        var model = Model(Fraction_1_16_Desc);
        var text = Format(model, 0.125); // 2/16 → 1/8
        Assert.That(text, Is.EqualTo("1/8"));
    }

    [Test]
    public void Fraction_Formats_OverflowToWhole()
    {
        var model = Model(Fraction_1_16_Desc);
        var text = Format(model, 1.0625); // 1 + 1/16
        Assert.That(text, Is.EqualTo("1 1/16"));
    }

    [Test]
    public void Fraction_Formats_Negative()
    {
        var model = Model(Fraction_1_16_Desc);
        var text = Format(model, -4.1875);
        Assert.That(text, Is.EqualTo("-4 3/16"));
    }

    [Test]
    public void Fraction_Formats_Zero()
    {
        var model = Model(Fraction_1_16_Desc);
        var text = Format(model, 0.0);
        Assert.That(text, Is.EqualTo("0"));
    }

    //--------------------------------------------------------------------------------------------------
    // FRACTIONAL PARSING
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Fraction_Parses_SimpleFraction()
    {
        var model = Model(Fraction_1_16_Desc);
        var value = Parse(model, "3/16");
        Assert.That(value, Is.EqualTo(0.1875).Within(1e-6));
    }

    [Test]
    public void Fraction_Parses_MixedNumber()
    {
        var model = Model(Fraction_1_16_Desc);
        var value = Parse(model, "4 3/16");
        Assert.That(value, Is.EqualTo(4.1875).Within(1e-6));
    }

    [Test]
    public void Fraction_Parses_Invalid_Throws()
    {
        var model = Model(Fraction_1_16_Desc);
        Assert.Throws<FormatException>(() => Parse(model, "abc"));
    }

    [Test]
    public void Fraction_Parses_DivideByZero_ReturnsInfinity()
    {
        var model = Model(Fraction_1_16_Desc);
        var result = Parse(model, "1/0");
        Assert.That(double.IsInfinity(result), Is.True);
    }

    //--------------------------------------------------------------------------------------------------
    // DECIMAL FORMATTING
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Decimal_Formats_OneDecimal()
    {
        var model = Model(Decimal_1_Desc);
        var text = Format(model, 1.234);
        Assert.That(text, Is.EqualTo("1.2"));
    }

    [Test]
    public void Decimal_Formats_ThreeDecimals()
    {
        var model = Model(Decimal_3_Desc);
        var text = Format(model, 1.234567);
        Assert.That(text, Is.EqualTo("1.235"));
    }

    [Test]
    public void Decimal_Formats_Negative()
    {
        var model = Model(Decimal_3_Desc);
        var text = Format(model, -1.2345);
        Assert.That(text, Is.EqualTo("-1.234"));
    }

    [Test]
    public void Decimal_Formats_Zero()
    {
        var model = Model(Decimal_3_Desc);
        var text = Format(model, 0.0);
        Assert.That(text, Is.EqualTo("0.000"));
    }

    //--------------------------------------------------------------------------------------------------
    // DECIMAL PARSING
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Decimal_Parses()
    {
        var model = Model(Decimal_3_Desc);
        var value = Parse(model, "1.234");
        Assert.That(value, Is.EqualTo(1.234).Within(1e-6));
    }

    [Test]
    public void Decimal_Parses_Invalid_Throws()
    {
        var model = Model(Decimal_3_Desc);
        Assert.Throws<FormatException>(() => Parse(model, "xyz"));
    }

    //--------------------------------------------------------------------------------------------------
    // ROUND TRIP
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Fraction_RoundTrip()
    {
        var model = Model(Fraction_1_16_Desc);
        double original = 4.1875;

        var text = Format(model, original);
        var parsed = Parse(model, text);

        Assert.That(parsed, Is.EqualTo(original).Within(1e-6));
    }

    [Test]
    public void Decimal_RoundTrip()
    {
        var model = Model(Decimal_3_Desc);
        double original = 1.234567;

        var text = Format(model, original);
        var parsed = Parse(model, text);

        Assert.That(parsed, Is.EqualTo(original).Within(1e-3)); // precision-limited
    }
}
