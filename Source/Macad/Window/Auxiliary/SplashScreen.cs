using System;

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

        _SplashScreen = new("properties/splashscreen.png");
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