using System;
using System.IO;
using System.IO.Packaging;
using System.Windows;
using Macad.Common.Interop;
using NUnit.Framework;

namespace Macad.Test.Utils;

public static class TestSetup
{
    public static void SetupWpf()
    {
        // Initialize WPF correctly without having an Application
        PackUriHelper.Create(new Uri("reliable://0"));
        // ReSharper disable once ObjectCreationAsStatement
        new FrameworkElement();
    }

    //--------------------------------------------------------------------------------------------------

    public static void SetupRendering()
    {
        // Install Mesa3D
        var mesaDir = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, "Mesa"));
        Assert.That(File.Exists(Path.Combine(mesaDir, "opengl32.dll")), "Mesa3D OpenGL driver not found, please rebuild project.");
        Win32Api.SetDllDirectory(mesaDir);

        // Remove old shader cache
        var mesaCacheDir = Path.Combine(mesaDir, "mesa_shader_cache");
        if (Directory.Exists(mesaCacheDir))
        {
            Directory.Delete(mesaCacheDir, true);
        }

        // Set environment variables for Mesa3D
        Environment.SetEnvironmentVariable("GALLIUM_DRIVER", "llvmpipe");
        Environment.SetEnvironmentVariable("LIBGL_ALWAYS_SOFTWARE", "true");
        Environment.SetEnvironmentVariable("WGL_FORCE_MSAA", "0");
        Environment.SetEnvironmentVariable("MESA_SHADER_CACHE_DIR", mesaDir);
        Environment.SetEnvironmentVariable("MESA_SHADER_CACHE_DISABLE", "false");
    }
}