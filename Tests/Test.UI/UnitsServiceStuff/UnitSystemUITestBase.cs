using Macad.Common;
using Macad.Presentation;
using Macad.Test.UI.Framework;
using NUnit.Framework;
using static Macad.Common.UnitsService;

namespace Macad.Test.UI.UnitsServiceStuff;

public abstract class UnitSystemUITestBase : UITestBase
{
    //--------------------------------------------------------------------------------------------------

    protected MeasurementDescriptor GetLengthDescriptor()
    {
        var desc = AppServices.Units.GetDescriptor(PhysicalQuantity.Length);
        Assert.That(desc, Is.Not.Null);
        return desc;
    }

    //--------------------------------------------------------------------------------------------------

    protected MeasurementDescriptor GetAngleDescriptor()
    {
        var desc = AppServices.Units.GetDescriptor(PhysicalQuantity.Angle);
        Assert.That(desc, Is.Not.Null);
        return desc;
    }

    //--------------------------------------------------------------------------------------------------

    protected FormAdaptor WaitForPanel(string className)
    {
        return UITestHelpers.WaitForPanel(MainWindow, className);
    }

    //--------------------------------------------------------------------------------------------------

    protected void WaitForViewportReady(ViewportAdaptor viewport)
    {
        UITestHelpers.WaitForViewportReady(viewport);
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual FormAdaptor ReselectEntity(ViewportAdaptor viewport, string panelClass)
    {
        WaitForViewportReady(viewport);

        viewport.ClickRelative(0.9, 0.5);
        FlaUI.Core.Input.Wait.UntilInputIsProcessed();

        viewport.ClickRelative(0.5, 0.5);
        FlaUI.Core.Input.Wait.UntilInputIsProcessed();

        WaitForViewportReady(viewport);

        return WaitForPanel(panelClass);
    }

    //--------------------------------------------------------------------------------------------------
}
