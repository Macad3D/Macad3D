using System;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Reflection;
using FlaUI.Core.AutomationElements;
using FlaUI.UIA3;
using NUnit.Framework;

namespace Macad.Test.UI.Framework;

public class ApplicationAdaptor
{
    #region Properties

    public FlaUI.Core.Application Application { get; private set; }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Init / Deinit

    public ApplicationAdaptor()
    {
    }

    //--------------------------------------------------------------------------------------------------

    public void Init(string cmdargs)
    {
        // Set up paths
        var applicationDirectory = Path.GetDirectoryName(Assembly.GetExecutingAssembly().Location);
        var applicationPath = Path.Combine(applicationDirectory, "Macad.exe");
        var applicationArguments = "-sandbox " + cmdargs;

        // Start the app
        var processStartInfo = new ProcessStartInfo
        {
            FileName = applicationPath,
            WorkingDirectory = applicationDirectory,
            Arguments = applicationArguments
        };

        Application = FlaUI.Core.Application.Launch(processStartInfo);
        Assert.That(Application, Is.Not.Null);
        Application.WaitWhileMainHandleIsMissing();
        Application.WaitWhileBusy(new TimeSpan(0, 1, 0));
    }

    //--------------------------------------------------------------------------------------------------

    public void Cleanup()
    {
        Application?.Kill();
    }

    #endregion

    public Window FindWindow(Func<Window,bool> predicateFunc)
    {
        using (var automation = new UIA3Automation())
        {
            return Application.GetAllTopLevelWindows(automation).FirstOrDefault(predicateFunc);
        }
    }
}