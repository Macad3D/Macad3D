using System;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Input;
using System.Windows.Media;
using Macad.Interaction;
using Macad.Interaction.Dialogs;

namespace Macad.Window
{
    /// <summary>
    /// Interaction logic for ViewportContextMenu.xaml
    /// </summary>
    public partial class ViewportContextMenu : UserControl
    {
        #region Properties

        public bool IsOpen
        {
            get => Menu.IsOpen;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Member and c'tor

        public ViewportContextMenu()
        {
            InitializeComponent();
            DataContextChanged += OnDataContextChanged;
        }

        #endregion

        //--------------------------------------------------------------------------------------------------

        public void Open()
        {
            Menu.IsOpen = true;
        }

        //--------------------------------------------------------------------------------------------------

        public void Close()
        {
            Menu.IsOpen = false;
        }

        //--------------------------------------------------------------------------------------------------

        void OnDataContextChanged(object sender, DependencyPropertyChangedEventArgs e)
        {
            Menu.DataContext = e.NewValue;
        }

        //--------------------------------------------------------------------------------------------------

        void _CloseMenu(object sender, RoutedEventArgs e)
        {
            Close();
        }
    }

    //--------------------------------------------------------------------------------------------------

    
}
