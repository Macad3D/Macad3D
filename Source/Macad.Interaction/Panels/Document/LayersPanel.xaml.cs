using System.Diagnostics;
using System.Linq;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Input;
using Macad.Core.Topology;
using Macad.Presentation;
using Macad.Presentation.TreeView;

namespace Macad.Interaction.Panels;

public partial class LayersPanel : UserControl
{
    public LayersPanelModel Model
    {
        get { return (LayersPanelModel)DataContext; }
    }

    //--------------------------------------------------------------------------------------------------

    public LayersPanel()
    {
        DataContext = new LayersPanelModel();

        _CreateCommands();
        InitializeComponent();
        AddHandler(KeyDownEvent, new RoutedEventHandler(HandleHandledKeyDown), true);
    }


    //--------------------------------------------------------------------------------------------------

    #region Renaming Textbox

    void _TextBox_LostFocus(object sender, RoutedEventArgs e)
    {
        var box = sender as TextBox;
        Debug.Assert(box != null, "box != null");
        Model.FinishRenaming(box.Text);
    }

    //--------------------------------------------------------------------------------------------------

    void _TextBox_IsVisibleChanged(object sender, DependencyPropertyChangedEventArgs e)
    {
        if (Model.SelectedLayer == null)
            return;

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

    void _TextBox_PreviewKeyDown(object sender, KeyEventArgs e)
    {
        var box = sender as TextBox;
        Debug.Assert(box != null, "box != null");
        if (e.Key == Key.Escape)
        {
            Model.CancelRenaming();
            e.Handled = true;
        }
        else if (e.Key == Key.Enter)
        {
            Model.FinishRenaming(box.Text);
            e.Handled = true;
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Commands

    public RelayCommand<DragParameters> DragCommand { get; private set; }

    //--------------------------------------------------------------------------------------------------

    bool _CanExecuteDrag(DragParameters parameter)
    {
        var layer = parameter.DragItem?.DataContext as Layer;
        return layer != null && Model.CanMove(layer);
    }

    //--------------------------------------------------------------------------------------------------

    void _ExecuteDrag(DragParameters parameter)
    {
        // Empty by intention
    }

    //--------------------------------------------------------------------------------------------------
        
    public RelayCommand<DropParameters> DropCommand { get; private set; }

    //--------------------------------------------------------------------------------------------------

    bool _CanExecuteDrop(DropParameters parameter)
    {
        if (parameter.IsInsertion)
        {
            return parameter.InsertAtIndex > 0;
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    void _ExecuteDrop(DropParameters parameter)
    {
        Layer droppedLayer = parameter.DroppedObjects.FirstOrDefault() as Layer;
        if (droppedLayer == null)
            return;

        if(parameter.IsInsertion)
        {
            Model.MoveToIndex(droppedLayer, parameter.InsertAtIndex);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _CreateCommands()
    {
        DragCommand = new RelayCommand<DragParameters>(_ExecuteDrag, _CanExecuteDrag);
        DropCommand = new RelayCommand<DropParameters>(_ExecuteDrop, _CanExecuteDrop);
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