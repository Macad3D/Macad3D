using System.Threading;
using FlaUI.Core.Logging;
using NUnit.Framework;

namespace Macad.Test.UI;

public class TestLogger : LoggerBase
{
    protected override void GatedTrace(string message)
    {
        System.Diagnostics.Debug.WriteLine(message);
    }

    protected override void GatedDebug(string message)
    {
        System.Diagnostics.Debug.WriteLine(message);
    }

    protected override void GatedInfo(string message)
    {
        System.Diagnostics.Debug.WriteLine(message);
    }

    protected override void GatedWarn(string message)
    {
        System.Diagnostics.Debug.WriteLine(message);
    }

    protected override void GatedError(string message)
    {
        System.Diagnostics.Debug.WriteLine(message);
    }

    protected override void GatedFatal(string message)
    {
        System.Diagnostics.Debug.WriteLine(message);
    }
}

//--------------------------------------------------------------------------------------------------

[SetUpFixture, Apartment(ApartmentState.STA)]
class UITestEnvironment
{
    [OneTimeSetUp]
    public void SetUp()
    {
        Logger.Default = new TestLogger();
        Logger.Default.SetLevel(LogLevel.Trace);
    }


    [OneTimeTearDown]
    public void TearDown()
    {
    }
}