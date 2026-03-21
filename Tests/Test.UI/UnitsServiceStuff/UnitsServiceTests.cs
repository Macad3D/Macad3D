using Macad.Common;
using Macad.Presentation;
using NUnit.Framework;
using System;

namespace Macad.Test.UI.UnitsServiceStuff;

[TestFixture]
public class UnitsServiceTests
{
    UnitsService _Units;

    //--------------------------------------------------------------------------------------------------
    // Measurement descriptors using your actual MeasurementDescriptor API
    //--------------------------------------------------------------------------------------------------

    MeasurementDescriptor LengthDesc =>
        // Architectural fractional inches, 1/16" precision
        new MeasurementDescriptor(UnitId.Architectural, 16);

    MeasurementDescriptor AngleDesc =>
        // Radians input, kernel output is degrees
        new MeasurementDescriptor(UnitId.Radian, 3);

    MeasurementDescriptor UnitlessDesc =>
        new MeasurementDescriptor(UnitId.Number, 1);

    //--------------------------------------------------------------------------------------------------
    // Test initialization
    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        var provider = new UnitsSettingsProvider(new UnitsParameterSet
        {
            LengthUnit = UnitId.Millimeter,
            LengthPrecision = 2,
            AngleUnit = UnitId.Degree,
            AnglePrecision = 1,
            TimeUnit = UnitId.Second,
            TimePrecision = 2
        });

        _Units = new UnitsService(provider);
        AppServices.Units = _Units;
        _Units.RaiseMeasurementSettingsChanged();
    }

    //--------------------------------------------------------------------------------------------------
    // Helpers
    //--------------------------------------------------------------------------------------------------

    double ParseLength(string expr)
    {
        if (!AppServices.Units.TryParseExpression(expr, LengthDesc, out var value))
            throw new Exception($"Parse failed: {expr}");
        return value;
    }

    double ParseAngle(string expr)
    {
        if (!AppServices.Units.TryParseExpression(expr, AngleDesc, out var value))
            throw new Exception($"Parse failed: {expr}");
        return value;
    }

    double ParseUnitless(string expr)
    {
        if (!AppServices.Units.TryParseExpression(expr, UnitlessDesc, out var value))
            throw new Exception($"Parse failed: {expr}");
        return value;
    }

    string FormatLength(double kernelValue, string label = null)
        => AppServices.Units.Format(kernelValue, LengthDesc, label);

    string FormatAngle(double kernelValue, string label = null)
        => AppServices.Units.Format(kernelValue, AngleDesc, label);

    string FormatUnitless(double kernelValue, string label = null)
        => AppServices.Units.Format(kernelValue, UnitlessDesc, label);

    //--------------------------------------------------------------------------------------------------
    // PARSING TESTS
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Parse_ArchitecturalFeetInches()
    {
        var expected = 18.0 * 25.4;
        var value = ParseLength("1'-6\"");
        Assert.That(value, Is.EqualTo(expected).Within(1e-6));
    }

    [Test]
    public void Parse_ArchitecturalMixedFraction()
    {
        var expected = 4.1875 * 25.4;
        var value = ParseLength("4 3/16\"");
        Assert.That(value, Is.EqualTo(expected).Within(1e-6));
    }

    [Test]
    public void Parse_MetricMillimeters()
    {
        var value = ParseLength("25.4mm");
        Assert.That(value, Is.EqualTo(25.4).Within(1e-6));
    }

    [Test]
    public void Parse_MixedUnitsExpression()
    {
        var expected = 50.8;
        var value = ParseLength("1\" + 25.4mm");
        Assert.That(value, Is.EqualTo(expected).Within(1e-6));
    }

    [Test]
    public void Parse_SimpleExpression()
    {
        var value = ParseUnitless("=1+2");
        Assert.That(value, Is.EqualTo(3.0).Within(1e-6));
    }

    [Test]
    public void Parse_DivisionByZero_ReturnsFalse()
    {
        Assert.False(AppServices.Units.TryParseExpression("1/0", UnitlessDesc, out _));
    }

    [Test]
    public void Parse_InvalidToken_ReturnsFalse()
    {
        Assert.False(AppServices.Units.TryParseExpression("abc", UnitlessDesc, out _));
    }

    [Test]
    public void Parse_ScientificNotation()
    {
        var value = ParseUnitless("1.234e-3");
        Assert.That(value, Is.EqualTo(0.001234).Within(1e-9));
    }

    [Test]
    public void Parse_MetricCombination()
    {
        var expected = 12.0;
        var value = ParseLength("1cm + 2mm");
        Assert.That(value, Is.EqualTo(expected).Within(1e-6));
    }

    [Test]
    public void Parse_ImperialCombination()
    {
        var expected = 15.0 * 25.4;
        var value = ParseLength("1ft + 3in");
        Assert.That(value, Is.EqualTo(expected).Within(1e-6));
    }

    [Test]
    public void Parse_Radians()
    {
        var value = ParseAngle("1rad");
        Assert.That(value, Is.EqualTo(180 / Math.PI).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------
    // FORMATTING TESTS
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Format_ArchitecturalFraction()
    {
        var kernel = 4.1875 * 25.4;
        var text = FormatLength(kernel);
        Assert.That(text, Does.Contain("4"));
        Assert.That(text, Does.Contain("3/16"));
    }

    [Test]
    public void Format_Angle()
    {
        var text = FormatAngle(45);
        Assert.That(text, Does.Contain("0.785")); // radians formatted to 3 decimals
    }

    [Test]
    public void Format_Unitless()
    {
        var text = FormatUnitless(1.2345);
        Assert.That(text, Is.EqualTo("1.2"));
    }

    [Test]
    public void Format_NegativeValue()
    {
        var text = FormatLength(-10.0);
        Assert.That(text, Does.Contain("-"));
    }

    [Test]
    public void Format_Zero()
    {
        var text = FormatLength(0.0);
        Assert.That(text, Does.Contain("0"));
    }

    //--------------------------------------------------------------------------------------------------
    // EXPRESSION EVALUATION
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Expression_Precedence()
    {
        var value = ParseUnitless("1+2*3");
        Assert.That(value, Is.EqualTo(7.0).Within(1e-6));
    }

    [Test]
    public void Expression_Parentheses()
    {
        var value = ParseUnitless("(1+2)*3");
        Assert.That(value, Is.EqualTo(9.0).Within(1e-6));
    }

    [Test]
    public void Expression_UnaryMinus()
    {
        var value = ParseUnitless("-5+2");
        Assert.That(value, Is.EqualTo(-3.0).Within(1e-6));
    }

    [Test]
    public void Expression_MixedUnits()
    {
        var expected = 35.4;
        var value = ParseLength("1\" + 1cm");
        Assert.That(value, Is.EqualTo(expected).Within(1e-6));
    }

    [Test]
    public void Expression_InvalidOperator_ReturnsFalse()
    {
        Assert.False(AppServices.Units.TryParseExpression("1++2", UnitlessDesc, out _));
    }

    //--------------------------------------------------------------------------------------------------
    // ROUND TRIP TESTS
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RoundTrip_Length()
    {
        var original = 123.456;
        var text = FormatLength(original);
        var parsed = ParseLength(text);

        // Fractional inches round to nearest 1/16"
        var expected = Math.Round(original / (25.4 / 16)) * (25.4 / 16);

        Assert.That(parsed, Is.EqualTo(expected).Within(1e-6));
    }

    [Test]
    public void RoundTrip_Angle()
    {
        var original = 1.234;
        var text = FormatAngle(original);
        var parsed = ParseAngle(text);

        // 3 decimal places in radians → convert back to degrees
        var expected = Math.Round(original * Math.PI / 180.0, 3) * 180.0 / Math.PI;

        Assert.That(parsed, Is.EqualTo(expected).Within(1e-6));
    }

    [Test]
    public void RoundTrip_Unitless()
    {
        var original = 0.001234;
        var text = FormatUnitless(original);
        var parsed = ParseUnitless(text);

        var expected = Math.Round(original, 1);
        Assert.That(parsed, Is.EqualTo(expected).Within(1e-12));
    }
}
