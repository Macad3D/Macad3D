using System.Windows;
using System.Windows.Controls;

namespace Macad.Window;

public partial class ViewportView : UserControl
{
    public ViewportViewModel Model => DataContext as ViewportViewModel;

    public Thickness ClippingBorder
    {
        get { return ViewportPanel.ClippingBorder; }
        set { ViewportPanel.ClippingBorder = value; }
    }

    //--------------------------------------------------------------------------------------------------

    public ViewportView()
    {
        DataContext = new ViewportViewModel();
        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public void SetWindowEnabled(bool bIsEnabled)
    {
        ViewportPanel.SetWindowEnabled(bIsEnabled);
    }

    //--------------------------------------------------------------------------------------------------

}