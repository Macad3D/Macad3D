using System;

namespace Macad.Window;

public class Program
{
    [STAThread]
    static void Main()
    {
        // .Net 8 Breaking change (dotnet/wpf #8679)
        System.AppContext.SetSwitch("Switch.System.Windows.Controls.ItemsControlDoesNotSupportAutomation", true);

        // Touch support
        System.AppContext.SetSwitch("Switch.System.Windows.Input.Stylus.EnablePointerSupport", true);

        SplashScreen.Show();

        var app = new App();
        app.Run();
    }

    //--------------------------------------------------------------------------------------------------

}