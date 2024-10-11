using System;
using System.IO;
using System.IO.Packaging;
using System.Threading;
using System.Windows;
using Macad.Common.Interop;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit;

[SetUpFixture, Apartment(ApartmentState.STA)]
public class TestEnvironment
{
    [OneTimeSetUp]
    public void SetUp()
    {
        // Initialize WPF correctly without having an Application
        PackUriHelper.Create(new Uri("reliable://0"));
        new FrameworkElement();

        // Install Mesa3D
        var mesaDir = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, "Mesa"));
        Assert.That(File.Exists(Path.Combine(mesaDir, "opengl32.dll")), "Mesa3D OpenGL driver not found, please rebuild project.");
        Win32Api.SetDllDirectory(mesaDir);
        Environment.SetEnvironmentVariable("GALLIUM_DRIVER", "llvmpipe");
        Environment.SetEnvironmentVariable("LIBGL_ALWAYS_SOFTWARE", "true");
        Environment.SetEnvironmentVariable("WGL_FORCE_MSAA", "0");

        // Init context
        Context.InitEmpty();
    }

    //--------------------------------------------------------------------------------------------------

    [OneTimeTearDown]
    public void TearDown()
    {
            
    }
}