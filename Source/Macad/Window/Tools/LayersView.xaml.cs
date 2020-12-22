using System;
using System.Diagnostics;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Input;
using Macad.Core.Topology;

namespace Macad.Window
{
    /// <summary>
    /// Interaction logic for LayersView.xaml
    /// </summary>
    public partial class LayersView : UserControl
    {
        public LayersViewModel Model
        {
            get { return (LayersViewModel)DataContext; }
        }

        //--------------------------------------------------------------------------------------------------

        public LayersView()
        {
            DataContext = new LayersViewModel();

            InitializeComponent();
            AddHandler(KeyDownEvent, new RoutedEventHandler(HandleHandledKeyDown), true);
        }


        //--------------------------------------------------------------------------------------------------

        #region Renaming Textbox

        void TextBox_LostFocus(object sender, RoutedEventArgs e)
        {
            var box = sender as TextBox;
            Debug.Assert(box != null, "box != null");
            Model.FinishRenaming(box.Text);
        }

        //--------------------------------------------------------------------------------------------------

        void TextBox_IsVisibleChanged(object sender, DependencyPropertyChangedEventArgs e)
        {
            var box = sender as TextBox;
            Debug.Assert(box != null, "box != null");
            if (box.Visibility == Visibility.Visible)
            {
                box.Text = Model.SelectedLayer.Name;
                box.SelectAll();
                box.Focus();
            }
        }

        //--------------------------------------------------------------------------------------------------

        void TextBox_KeyDown(object sender, KeyEventArgs e)
        {
            var box = sender as TextBox;
            Debug.Assert(box != null, "box != null");
            if (e.Key == Key.Escape)
            {
                Model.CancelRenaming();
            }
            else if (e.Key == Key.Enter)
            {
                Model.FinishRenaming(box.Text);
            }
        }
        
        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Events

        void DrowDownButton_Click(object sender, RoutedEventArgs e)
        {
            var btn = sender as Button;
            Debug.Assert(btn != null);
            Model.SelectedLayer = btn.DataContext as Layer;
        }

        //--------------------------------------------------------------------------------------------------

        void HandleHandledKeyDown(object sender, RoutedEventArgs e)
        {
            if (e.OriginalSource is TextBoxBase)
                return;

            KeyEventArgs ke = e as KeyEventArgs;
            if (ke == null)
                return;

            e.Handled = Model.KeyDown(ke);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

    }
}
