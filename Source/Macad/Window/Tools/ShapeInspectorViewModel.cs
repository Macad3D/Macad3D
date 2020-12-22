using System;
using System.Collections.ObjectModel;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Occt;
using Body = Macad.Core.Topology.Body;

namespace Macad.Window
{
    public class ShapeInspectorViewModel : ViewModelBase
    {
        #region Properties

        public WorkspaceController WorkspaceController
        {
            get { return _WorkspaceController; }
            private set
            {
                if (_WorkspaceController != value)
                {
                    if (WorkspaceController != null)
                        WorkspaceController.Selection.SelectionChanged -= _Selection_OnSelectionChanged;

                    RootNodes.Clear();
                    SelectedShape = null;
                    _WorkspaceController = value;

                    if (WorkspaceController != null)
                        WorkspaceController.Selection.SelectionChanged += _Selection_OnSelectionChanged;

                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public BRepTopologyTreeNode SelectedNode
        {
            get { return _SelectedNode; }
            set
            {
                _SelectedNode = value;
                _UpdateAisShape();
                RaisePropertyChanged();
            }
        }


        //--------------------------------------------------------------------------------------------------

        public Shape SelectedShape
        {
            get { return _SelectedShape; }
            set
            {
                _SelectedShape = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public ObservableCollection<BRepTopologyTreeNode> RootNodes { get; } = new ObservableCollection<BRepTopologyTreeNode>();

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Commands

        void CreateCommands()
        {
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region n'tors / Members

        AIS_Shape _AisShape;
        BRepTopologyTreeNode _SelectedNode;
        WorkspaceController _WorkspaceController;
        Shape _SelectedShape;

        //--------------------------------------------------------------------------------------------------

        public ShapeInspectorViewModel()
        {
            CreateCommands();
            InteractiveContext.Current.PropertyChanged += Context_PropertyChanged;
            WorkspaceController = InteractiveContext.Current.WorkspaceController;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Callbacks

        void Context_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
        {
            if (e.PropertyName == "WorkspaceController")
            {
                _Selection_OnSelectionChanged(null);
                WorkspaceController = (sender as InteractiveContext)?.WorkspaceController;
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _Selection_OnSelectionChanged(SelectionManager selectionManager)
        {
            if (selectionManager?.SelectedEntities.Count == 1)
            {
                var newSelection = (selectionManager.SelectedEntities[0] as Body)?.Shape;
                if (newSelection != SelectedShape)
                {
                    SelectedNode = null;
                    SelectedShape = newSelection;
                    RootNodes.Clear();
                    RootNodes.Add(new BRepTopologyTreeNode(SelectedShape));
                }
            }
            else
            {
                SelectedShape = null;
                SelectedNode = null;
                RootNodes.Clear();
            }
            _UpdateAisShape();
        }

        //--------------------------------------------------------------------------------------------------
        

        #endregion

        #region Visualization

        void _UpdateAisShape()
        {
            try
            {
                if (_AisShape != null)
                {
                    // Remove AIS Shape
                    WorkspaceController.Workspace.AisContext.Remove(_AisShape, false);
                    WorkspaceController.Workspace.AisContext.Erase(_AisShape, false);
                    _AisShape = null;
                }

                var ocShape = SelectedNode?.BrepShape;
                var trsf = SelectedShape?.GetTransformation();
                if (ocShape != null && trsf != null)
                {
                    // Init AIS Shape
                    _AisShape = new AIS_Shape(ocShape);
                    _AisShape.SetLocalTransformation(trsf.Value);
                    _AisShape.SetZLayer(-2); // Graphic3d_ZLayerId_Top
                    _AisShape.SetColor(Quantity_NameOfColor.Quantity_NOC_BLUE1.ToColor());
                    _AisShape.Attributes().LineAspect().SetColor(Quantity_NameOfColor.Quantity_NOC_BLUE1.ToColor());
                    _AisShape.SetWidth(3);
                    _AisShape.Attributes().PointAspect().SetScale(3);

                    WorkspaceController.Workspace.AisContext.Display(_AisShape, false);
                    WorkspaceController.Workspace.AisContext.Deactivate(_AisShape);
                }
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
            }
            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------
        

        #endregion
    }
}