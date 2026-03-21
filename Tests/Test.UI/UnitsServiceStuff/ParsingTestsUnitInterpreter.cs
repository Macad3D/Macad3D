using NUnit.Framework;
using Macad.Common;
using System;
using System.Globalization;

namespace Macad.Test.Unit.Units;

[TestFixture]
public class UnitInterpreterTests
{
    //--------------------------------------------------------------------------------------------------
    // Measurement descriptors using your actual MeasurementDescriptor API
    //--------------------------------------------------------------------------------------------------

    MeasurementDescriptor LengthDesc =>
        // Architectural inches with 1/16" precision
        new MeasurementDescriptor(UnitId.Architectural, 16);

    MeasurementDescriptor AngleDesc =>
        // Radians input, kernel output is degrees
        new MeasurementDescriptor(UnitId.Radian, 3);

    //--------------------------------------------------------------------------------------------------

    double Kernel(Token t)
    {
        return double.Parse(t.Text, CultureInfo.InvariantCulture);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Interpret_Centimeters()
    {
        var tokens = Tokenizer.Tokenize("1cm");
        var kernel = UnitInterpreter.ToKernelTokens(tokens, LengthDesc);

        Assert.That(Kernel(kernel[0]), Is.EqualTo(10.0).Within(1e-6)); // 1 cm = 10 mm
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Interpret_Inches()
    {
        var tokens = Tokenizer.Tokenize("2\"");
        var kernel = UnitInterpreter.ToKernelTokens(tokens, LengthDesc);

        Assert.That(Kernel(kernel[0]), Is.EqualTo(2 * 25.4).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Interpret_ArchitecturalFraction()
    {
        var tokens = Tokenizer.Tokenize("4 3/16\"");
        var kernel = UnitInterpreter.ToKernelTokens(tokens, LengthDesc);

        var expectedInches = 4.1875;
        var expectedMm = expectedInches * 25.4;

        Assert.That(Kernel(kernel[0]), Is.EqualTo(expectedMm).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Interpret_Feet()
    {
        var tokens = Tokenizer.Tokenize("1ft");
        var kernel = UnitInterpreter.ToKernelTokens(tokens, LengthDesc);

        Assert.That(Kernel(kernel[0]), Is.EqualTo(304.8).Within(1e-6)); // 12 in = 304.8 mm
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Interpret_Radians()
    {
        var tokens = Tokenizer.Tokenize("1rad");
        var kernel = UnitInterpreter.ToKernelTokens(tokens, AngleDesc);

        // Your kernel angle unit is DEGREES, so 1 rad = 57.2957795 degrees
        Assert.That(Kernel(kernel[0]), Is.EqualTo(180.0 / Math.PI).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------
}
