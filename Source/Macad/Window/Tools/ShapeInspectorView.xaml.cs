using System;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Threading;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Presentation;
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
