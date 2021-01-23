using System.Windows;
using Macad.Presentation;

namespace Macad.Interaction.Panels
{
    /// <summary>
    /// Interaction logic for ViewportContextMenu.xaml
    /// </summary>
    public partial class ViewportContextMenu : ToolbarContextMenu
    {
        public ViewportContextMenu()
        {
            InitializeComponent();
        }
        
        //--------------------------------------------------------------------------------------------------

        void _CloseMenu(object sender, RoutedEventArgs e)
        {
            IsOpen = false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    
}
