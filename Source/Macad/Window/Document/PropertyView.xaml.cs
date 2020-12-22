using System.Windows.Controls;
using System.Windows.Controls.Primitives;

namespace Macad.Window
{
    /// <summary>
    /// Interaction logic for PropertyView.xaml
    /// </summary>
    public partial class PropertyView : UserControl
    {
        public PropertyViewModel Model => (PropertyViewModel)DataContext;

        //--------------------------------------------------------------------------------------------------

        public PropertyView()
        {
            DataContext = new PropertyViewModel();

            InitializeComponent();
        }

        //--------------------------------------------------------------------------------------------------

        void UserControl_KeyDown(object sender, System.Windows.Input.KeyEventArgs e)
        {
            if (e.OriginalSource is TextBoxBase)
                return;

            e.Handled = Model.KeyDown(e);
        }

        //--------------------------------------------------------------------------------------------------
    }
}
