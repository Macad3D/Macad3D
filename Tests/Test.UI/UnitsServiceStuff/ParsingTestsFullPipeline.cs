using Macad.Common;
using Macad.Presentation;
using Macad.Test.UI;
using NUnit.Framework;
using Macad.Test.Unit.Common;

namespace Macad.Test.UI.Unit.Units;

[TestFixture]
public class TryParseExpressionPipelineTests
{
    //--------------------------------------------------------------------------------------------------

    MeasurementDescriptor LengthDesc =>
        // Architectural inches with 1/16" precision
        new MeasurementDescriptor(UnitId.Architectural, 16);

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void Setup()
    {
        TestEnvironment.EnsureUnits();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FullPipeline_ComplexExpression()
    {
        // Expression:
        //   1'‑6" + 3cm - (4 3/16")
        //
        // Convert everything to kernel mm:
        //   1'‑6" = 18 in = 457.2 mm
        //   3 cm = 30 mm
        //   4 3/16" = 4.1875 in = 106.3625 mm
        //
        // Expected = 457.2 + 30 - 106.3625 = 380.8375 mm

        var ok = AppServices.Units.TryParseExpression("1'-6\" + 3cm - (4 3/16\")", LengthDesc, out var kernel);
        Assert.That(ok, Is.True);

        Assert.That(kernel, Is.EqualTo(380.8375).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------
}
