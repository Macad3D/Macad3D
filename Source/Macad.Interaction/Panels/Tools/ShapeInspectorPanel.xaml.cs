using System.Linq;
using System.Windows.Controls;
using System.Windows.Data;
using Macad.Core;
using Macad.Presentation.TreeView;

namespace Macad.Interaction.Panels;

public partial class ShapeInspectorPanel : UserControl
{
    public ShapeInspectorPanelModel Model => (ShapeInspectorPanelModel) DataContext;

    //--------------------------------------------------------------------------------------------------

    public ShapeInspectorPanel()
    {
        DataContext = new ShapeInspectorPanelModel();
        InitializeComponent();

        var view = CollectionViewSource.GetDefaultView(PropertyView.ItemsSource);
        var groupDescription = new PropertyGroupDescription("Category");
        view?.GroupDescriptions?.Add(groupDescription);
    }

    //--------------------------------------------------------------------------------------------------

    void TreeViewEx_OnOnSelecting(object sender, SelectionChangedCancelEventArgs e)
    {
        if(Model != null)
            Model.SelectedNode = e.ItemsToSelect.FirstOrDefault() as BRepTopologyTreeNode;
    }
}