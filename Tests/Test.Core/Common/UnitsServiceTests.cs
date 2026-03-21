using Macad.Common;
using Macad.Presentation;
using NUnit.Framework;
using System.Windows;
using Macad.Test.Unit.Common;

namespace Macad.Test.Unit.Common;

[TestFixture]
public class UnitsServiceTests
{
    MeasurementDescriptor desc;

    [SetUp]
    public void SetUp()
    {
        TestEnvironment.EnsureUnits();
    }

    //--------------------------------------------------------------------------------------------------
    // METRIC LENGTHS
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FormatMetricLengths()
    {
        desc = new MeasurementDescriptor(UnitId.Millimeter, 0);
        Assert.AreEqual("12mm", AppServices.Units.Format(12.0, desc));
        Assert.AreEqual("22mm", AppServices.Units.Format(22.1, desc));
        Assert.AreEqual("33mm", AppServices.Units.Format(32.5, desc));
        Assert.AreEqual("43mm", AppServices.Units.Format(42.9, desc));
        Assert.AreEqual("-52mm", AppServices.Units.Format(-52.0, desc));
        Assert.AreEqual("-62mm", AppServices.Units.Format(-62.1, desc));
        Assert.AreEqual("-73mm", AppServices.Units.Format(-72.5, desc));
        Assert.AreEqual("-83mm", AppServices.Units.Format(-82.9, desc));
        Assert.AreEqual("0mm", AppServices.Units.Format(0.0, desc));

        desc = new MeasurementDescriptor(UnitId.Millimeter, 1);
        Assert.AreEqual("42.1mm", AppServices.Units.Format(42.1, desc));

        desc = new MeasurementDescriptor(UnitId.Millimeter, 2);
        Assert.AreEqual("42.12mm", AppServices.Units.Format(42.12, desc));

        desc = new MeasurementDescriptor(UnitId.Millimeter, 3);
        Assert.AreEqual("42.123mm", AppServices.Units.Format(42.123, desc));

        desc = new MeasurementDescriptor(UnitId.Millimeter, 4);
        Assert.AreEqual("42.1235mm", AppServices.Units.Format(42.1235, desc));

        desc = new MeasurementDescriptor(UnitId.Millimeter, 5);
        Assert.AreEqual("42.12346mm", AppServices.Units.Format(42.12346, desc));

        desc = new MeasurementDescriptor(UnitId.Millimeter, 6);
        Assert.AreEqual("42.123457mm", AppServices.Units.Format(42.123457, desc));

        desc = new MeasurementDescriptor(UnitId.Millimeter, 7);
        Assert.AreEqual("42.1234568mm", AppServices.Units.Format(42.1234568, desc));

        desc = new MeasurementDescriptor(UnitId.Millimeter, 8);
        Assert.AreEqual("42.12345678mm", AppServices.Units.Format(42.12345678, desc));
    }

    //--------------------------------------------------------------------------------------------------
    // IMPERIAL LENGTHS
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FormatImperialLengths()
    {
        double kernel = 1.234567 * 25.4;

        // Decimal inches
        desc = new MeasurementDescriptor(UnitId.InchDecimal, 0);
        Assert.AreEqual("1\"", AppServices.Units.Format(kernel, desc));

        desc = new MeasurementDescriptor(UnitId.InchDecimal, 1);
        Assert.AreEqual("1.2\"", AppServices.Units.Format(kernel, desc));

        desc = new MeasurementDescriptor(UnitId.InchDecimal, 2);
        Assert.AreEqual("1.23\"", AppServices.Units.Format(kernel, desc));

        desc = new MeasurementDescriptor(UnitId.InchDecimal, 3);
        Assert.AreEqual("1.235\"", AppServices.Units.Format(kernel, desc));

        desc = new MeasurementDescriptor(UnitId.InchDecimal, 4);
        Assert.AreEqual("1.2346\"", AppServices.Units.Format(kernel, desc));

        // Fractional inches
        desc = new MeasurementDescriptor(UnitId.InchFractional, 2);
        Assert.AreEqual("1 1/2\"", AppServices.Units.Format(1.375 * 25.4, desc));

        desc = new MeasurementDescriptor(UnitId.InchFractional, 4);
        Assert.AreEqual("2 1/2\"", AppServices.Units.Format(2.375 * 25.4, desc));

        desc = new MeasurementDescriptor(UnitId.InchFractional, 8);
        Assert.AreEqual("3 3/8\"", AppServices.Units.Format(3.375 * 25.4, desc));

        desc = new MeasurementDescriptor(UnitId.InchFractional, 16);
        Assert.AreEqual("4 3/8\"", AppServices.Units.Format(4.375 * 25.4, desc));

        desc = new MeasurementDescriptor(UnitId.InchFractional, 32);
        Assert.AreEqual("5 3/8\"", AppServices.Units.Format(5.375 * 25.4, desc));

        desc = new MeasurementDescriptor(UnitId.InchFractional, 64);
        Assert.AreEqual("6 3/8\"", AppServices.Units.Format(6.375 * 25.4, desc));

        desc = new MeasurementDescriptor(UnitId.InchFractional, 128);
        Assert.AreEqual("7 3/8\"", AppServices.Units.Format(7.375 * 25.4, desc));

        desc = new MeasurementDescriptor(UnitId.InchFractional, 256);
        Assert.AreEqual("8 3/8\"", AppServices.Units.Format(8.375 * 25.4, desc));
    }

    //--------------------------------------------------------------------------------------------------
    // ARCHITECTURAL
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FormatArchitecturalLengths()
    {
        double value = (1 * 12 + 2 + 3.0 / 8.0) * 25.4;

        desc = new MeasurementDescriptor(UnitId.Architectural, 4);
        Assert.AreEqual("1'-2 1/2\"", AppServices.Units.Format(value, desc));

        desc = new MeasurementDescriptor(UnitId.Architectural, 8);
        Assert.AreEqual("1'-2 3/8\"", AppServices.Units.Format(value, desc));

        desc = new MeasurementDescriptor(UnitId.Architectural, 16);
        Assert.AreEqual("1'-2 3/8\"", AppServices.Units.Format(value, desc));
    }

    //--------------------------------------------------------------------------------------------------
    // DIMENSIONLESS
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FormatDimensionless()
    {
        // Percentage
        desc = new MeasurementDescriptor(UnitId.Percentage, 0);
        Assert.AreEqual("42%", AppServices.Units.Format(0.42, desc));

        desc = new MeasurementDescriptor(UnitId.Percentage, 1);
        Assert.AreEqual("42.1%", AppServices.Units.Format(0.421, desc));

        desc = new MeasurementDescriptor(UnitId.Percentage, 2);
        Assert.AreEqual("42.12%", AppServices.Units.Format(0.421234, desc));

        desc = new MeasurementDescriptor(UnitId.Percentage, 3);
        Assert.AreEqual("42.123%", AppServices.Units.Format(0.421234, desc));

        // DPI
        desc = new MeasurementDescriptor(UnitId.DotsPerInch, 0);
        Assert.AreEqual("300dpi", AppServices.Units.Format(300.4, desc));

        desc = new MeasurementDescriptor(UnitId.DotsPerInch, 1);
        Assert.AreEqual("300.4dpi", AppServices.Units.Format(300.44, desc));

        desc = new MeasurementDescriptor(UnitId.DotsPerInch, 2);
        Assert.AreEqual("300.44dpi", AppServices.Units.Format(300.444, desc));

        // Pixel
        desc = new MeasurementDescriptor(UnitId.Pixel, 0);
        Assert.AreEqual("42px", AppServices.Units.Format(42.4, desc));

        desc = new MeasurementDescriptor(UnitId.Pixel, 1);
        Assert.AreEqual("42.4px", AppServices.Units.Format(42.44, desc));

        desc = new MeasurementDescriptor(UnitId.Pixel, 2);
        Assert.AreEqual("42.44px", AppServices.Units.Format(42.444, desc));

        // None
        desc = new MeasurementDescriptor(UnitId.Number, 0);
        Assert.AreEqual("42", AppServices.Units.Format(42.4, desc));

        desc = new MeasurementDescriptor(UnitId.Number, 1);
        Assert.AreEqual("42.4", AppServices.Units.Format(42.44, desc));

        desc = new MeasurementDescriptor(UnitId.Number, 2);
        Assert.AreEqual("42.44", AppServices.Units.Format(42.444, desc));
    }

    //--------------------------------------------------------------------------------------------------
    // ANGLES
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FormatAngles()
    {
        // Degrees
        desc = new MeasurementDescriptor(UnitId.Degree, 0);
        Assert.AreEqual("42°", AppServices.Units.Format(42.4, desc));

        desc = new MeasurementDescriptor(UnitId.Degree, 1);
        Assert.AreEqual("42.4°", AppServices.Units.Format(42.44, desc));

        desc = new MeasurementDescriptor(UnitId.Degree, 2);
        Assert.AreEqual("42.44°", AppServices.Units.Format(42.444, desc));

        desc = new MeasurementDescriptor(UnitId.Degree, 3);
        Assert.AreEqual("42.444°", AppServices.Units.Format(42.4444, desc));

        // Radians
        desc = new MeasurementDescriptor(UnitId.Radian, 0);
        Assert.AreEqual("1rad", AppServices.Units.Format(57.2957795, desc));

        desc = new MeasurementDescriptor(UnitId.Radian, 1);
        Assert.AreEqual("1.4rad", AppServices.Units.Format(80.214, desc));

        desc = new MeasurementDescriptor(UnitId.Radian, 2);
        Assert.AreEqual("1.44rad", AppServices.Units.Format(82.503, desc));

        desc = new MeasurementDescriptor(UnitId.Radian, 3);
        Assert.AreEqual("1.444rad", AppServices.Units.Format(82.743, desc));

        // Gradians
        desc = new MeasurementDescriptor(UnitId.Gradian, 0);
        Assert.AreEqual("100gon", AppServices.Units.Format(90.0, desc));

        desc = new MeasurementDescriptor(UnitId.Gradian, 1);
        Assert.AreEqual("100.4gon", AppServices.Units.Format(90.36, desc));

        desc = new MeasurementDescriptor(UnitId.Gradian, 2);
        Assert.AreEqual("100.44gon", AppServices.Units.Format(90.396, desc));

        desc = new MeasurementDescriptor(UnitId.Gradian, 3);
        Assert.AreEqual("100.444gon", AppServices.Units.Format(90.3996, desc));
    }

    //--------------------------------------------------------------------------------------------------
    // TIME
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FormatTime()
    {
        // Days
        desc = new MeasurementDescriptor(UnitId.Day, 0);
        Assert.AreEqual("42d", AppServices.Units.Format(42.4, desc));

        desc = new MeasurementDescriptor(UnitId.Day, 1);
        Assert.AreEqual("42.4d", AppServices.Units.Format(42.44, desc));

        desc = new MeasurementDescriptor(UnitId.Day, 2);
        Assert.AreEqual("42.44d", AppServices.Units.Format(42.444, desc));

        desc = new MeasurementDescriptor(UnitId.Day, 3);
        Assert.AreEqual("42.444d", AppServices.Units.Format(42.4444, desc));

        // Seconds
        desc = new MeasurementDescriptor(UnitId.Second, 0);
        Assert.AreEqual("10s", AppServices.Units.Format(10.4, desc));

        desc = new MeasurementDescriptor(UnitId.Second, 1);
        Assert.AreEqual("10.4s", AppServices.Units.Format(10.44, desc));

        desc = new MeasurementDescriptor(UnitId.Second, 2);
        Assert.AreEqual("10.44s", AppServices.Units.Format(10.444, desc));

        desc = new MeasurementDescriptor(UnitId.Second, 3);
        Assert.AreEqual("10.444s", AppServices.Units.Format(10.4444, desc));
    }
}
