using System.Linq;
using System.Windows.Controls;
using System.Windows.Data;
using Macad.Core;
using Macad.Presentation.TreeView;

namespace Macad.Window
{
    public partial class ShapeInspectorView : UserControl
    {
        public ShapeInspectorViewModel Model => (ShapeInspectorViewModel) DataContext;

        //--------------------------------------------------------------------------------------------------

        public ShapeInspectorView()
        {
            DataContext = new ShapeInspectorViewModel();
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
}
