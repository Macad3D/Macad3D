using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Input;

namespace Macad.Interaction.Panels;

public partial class PropertiesPanel : UserControl
{
    public PropertiesPanelModel Model => (PropertiesPanelModel)DataContext;

    //--------------------------------------------------------------------------------------------------

    public PropertiesPanel()
    {
        DataContext = new PropertiesPanelModel();

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnKeyDown(KeyEventArgs e)
    {
        if (e.OriginalSource is TextBoxBase)
            return;

        e.Handled = Model.KeyDown(e);
    }

    //--------------------------------------------------------------------------------------------------
}