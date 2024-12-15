using System;
using System.Reflection;
using Macad.Common.Interop;

namespace Macad.Window;

internal static class SplashScreen
{
    static System.Windows.SplashScreen _SplashScreen;

    //--------------------------------------------------------------------------------------------------

    internal static void Show()
    {
        if (_SplashScreen != null)
        {
            return;
        }

        uint systemDpi = Win32Api.GetDpiForSystem();
        uint imageDpi = systemDpi switch
        {
            >= 192 => 192,
            >= 144 => 144,
            _ => 96
        };

        _SplashScreen = new(Assembly.Load("Macad.Resources"), $"controls/splashscreen/splashscreen{imageDpi}.png");
        _SplashScreen.Show(true);
    }

    //--------------------------------------------------------------------------------------------------

    internal static void Close()
    {
        _SplashScreen?.Close(TimeSpan.Zero);
        _SplashScreen = null;
    }

    //--------------------------------------------------------------------------------------------------
}