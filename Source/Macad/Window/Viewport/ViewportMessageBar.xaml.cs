using System.Windows.Controls;

namespace Macad.Window
{
    public partial class ViewportMessageBar : UserControl
    {
        ViewportMessageBarModel Model
        {
            get { return (ViewportMessageBarModel)DataContext; }
        }

        //--------------------------------------------------------------------------------------------------

        public ViewportMessageBar()
        {
            DataContext = new ViewportMessageBarModel();
            InitializeComponent();
        }
    }
}
