using System.Diagnostics;
using System.Reflection;
using Macad.Presentation;

namespace Macad.Window;

/// <summary>
/// Interaction logic for AboutDialog.xaml
/// </summary>
public partial class AboutDialog : Dialog
{
    public string Version
    {
        get
        {
            var assembly = Assembly.GetExecutingAssembly();
            var version = assembly.GetName()
                                  .Version;
            var informationalVersion = assembly.GetCustomAttribute<AssemblyInformationalVersionAttribute>()
                                               ?.InformationalVersion
                                               ?? "Unknown Build";
            return $"{version.Major}.{version.Minor}  ({informationalVersion})";
        }
    }

    //--------------------------------------------------------------------------------------------------

    public string Copyright
    {
        get
        {
            return Assembly.GetExecutingAssembly()
                           .GetCustomAttribute<AssemblyCopyrightAttribute>()
                           ?.Copyright;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public string OcctVersion
    {
        get
        {
            return $"{Occt.Helper.Version.Major}.{Occt.Helper.Version.Minor}.{Occt.Helper.Version.Maintenance}  {Occt.Helper.Version.Development}";
        }
    }

    //--------------------------------------------------------------------------------------------------

    public AboutDialog()
    {
        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    void _ShowLicense_Click(object sender, System.Windows.RoutedEventArgs e)
    {
        AppCommands.ShowHelpTopic.Execute( "6d66b830-344b-4400-a50c-ba31459287d9" );
    }

    //--------------------------------------------------------------------------------------------------

    void _Website_Click(object sender, System.Windows.RoutedEventArgs e)
    {
        Process.Start(new ProcessStartInfo(@"https://macad3d.net") { UseShellExecute = true });
    }

    //--------------------------------------------------------------------------------------------------

}