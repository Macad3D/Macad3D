using System;
using System.Collections.ObjectModel;
using System.IO;
using System.Windows;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Panels;

public class ShapeInspectorPanelModel : PanelBase
{
    #region Properties

    WorkspaceController WorkspaceController
    {
        get { return _WorkspaceController; }
        set
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

    public ObservableCollection<BRepTopologyTreeNode> RootNodes { get; } = new();

    //--------------------------------------------------------------------------------------------------

    #endregion
        
    #region n'tors / Members

    AIS_Shape _AisShape;
    BRepTopologyTreeNode _SelectedNode;
    WorkspaceController _WorkspaceController;
    Shape _SelectedShape;

    //--------------------------------------------------------------------------------------------------

    public ShapeInspectorPanelModel()
    {
        InteractiveContext.Current.PropertyChanged += Context_PropertyChanged;
        WorkspaceController = InteractiveContext.Current.WorkspaceController;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
        
    #region Commands

    public static RelayCommand<TopoDS_Shape> DumpJsonCommand { get; } = new (
        (brepShape) =>
        {
            if (brepShape == null)
                return;

            ProcessingScope.ExecuteWithGuards(null, "Creating JSON dump.", () =>
            {
                StringWriter writer = new();
                brepShape.DumpJson(writer);
                writer.Write('\0');
                InteractiveContext.Current?.Clipboard.SetData(DataFormats.UnicodeText, writer.ToString());
                return true;
            });
        },
        () => true
    );

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Callbacks

    void Context_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(InteractiveContext.WorkspaceController))
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
                WorkspaceController.AisContext.Remove(_AisShape, false);
                WorkspaceController.AisContext.Erase(_AisShape, false);
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
                _AisShape.SetColor(new Color(0.0f, 0.0f, 1.0f).ToQuantityColor());
                _AisShape.Attributes().LineAspect().SetColor(new Color(0.0f, 0.0f, 1.0f).ToQuantityColor());
                _AisShape.SetWidth(3);
                _AisShape.Attributes().PointAspect().SetScale(3);

                WorkspaceController.AisContext.Display(_AisShape, false);
                WorkspaceController.AisContext.Deactivate(_AisShape);
            }
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
        }
        WorkspaceController?.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------
        

    #endregion
}