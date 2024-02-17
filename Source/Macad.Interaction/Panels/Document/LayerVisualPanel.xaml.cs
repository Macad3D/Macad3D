using System.Diagnostics;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Input;
using Macad.Core.Topology;
using Macad.Core;
using Macad.Presentation;

namespace Macad.Interaction.Panels;

/// <summary>
/// Interaction logic for LayerVisualPanel.xaml
/// </summary>
public partial class LayerVisualPanel : UserControl
{

    public ICommand SwitchModeCommand { get; private set; }

    void ExecuteSwitchMode(PresentationMode mode)
    {
        var layer = DataContext as Layer;
        Debug.Assert(layer != null);
        if (layer.PresentationMode != mode)
        {
            layer.PresentationMode = mode;
            InteractiveContext.Current.WorkspaceController.Invalidate();
            InteractiveContext.Current.Document.MarkAsUnsaved();
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    public LayerVisualPanel()
    {
        SwitchModeCommand = new RelayCommand<PresentationMode>(ExecuteSwitchMode);
        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    void OnLayerPropSourceUpdated(object sender, DataTransferEventArgs e)
    {
        var layer = DataContext as Layer;
        Debug.Assert(layer != null);
        InteractiveContext.Current.UndoHandler.Commit();

        InteractiveContext.Current.WorkspaceController.Invalidate();
        InteractiveContext.Current.Document.MarkAsUnsaved();
    }
}