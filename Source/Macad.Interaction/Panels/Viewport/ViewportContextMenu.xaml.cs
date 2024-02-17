using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;
using Macad.Presentation;

namespace Macad.Interaction.Panels;

/// <summary>
/// Interaction logic for ViewportContextMenu.xaml
/// </summary>
public partial class ViewportContextMenu : ToolbarContextMenu
{
    public ContextMenuItems DynamicContextMenuItems { get; } = new();

    //--------------------------------------------------------------------------------------------------

    public ViewportContextMenu()
    {
        DataContext = this;
        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnContextMenuOpening(ContextMenuEventArgs e)
    {
        _UpdateContextActions();
        base.OnContextMenuOpening(e);
    }

    //--------------------------------------------------------------------------------------------------

    void _CloseMenu(object sender, RoutedEventArgs e)
    {
        IsOpen = false;
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateContextActions()
    {
        void __AddCommands(IContextMenuItemProvider provider)
        {
            if (provider == null)
                return;

            int oldcount = DynamicContextMenuItems.Count;
            provider.EnrichContextMenu(DynamicContextMenuItems);
            if (DynamicContextMenuItems.Count > oldcount)
            {
                DynamicContextMenuItems.AddSeparator();
            }
        }

        //--------------------------------------------------------------------------------------------------

        DynamicContextMenuItems.Clear();
        var workspaceController = InteractiveContext.Current.WorkspaceController;
        __AddCommands(workspaceController);
        if (workspaceController.CurrentTool != null)
        {
            __AddCommands(workspaceController.CurrentTool);
        }
        else if (workspaceController.CurrentEditor != null)
        {
            __AddCommands(workspaceController.CurrentEditor);
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnMouseMove(MouseEventArgs e)
    {
        if (ActualHeight != 0 && ActualHeight != 0)
        {
            var relPosition = e.GetPosition(this);
            if (relPosition.X < -50
                || relPosition.Y < -50
                || relPosition.X > ActualWidth + 50
                || relPosition.Y > ActualHeight + 50)
            {
                IsOpen = false;
            }
        }

        base.OnMouseMove(e);
    }
}

//--------------------------------------------------------------------------------------------------