using System.Windows;
using System.Windows.Controls;
using Macad.Presentation;

namespace Macad.Interaction.Panels
{
    /// <summary>
    /// Interaction logic for ViewportContextMenu.xaml
    /// </summary>
    public partial class ViewportContextMenu : ToolbarContextMenu
    {
        public CustomMenuItems DynamicContextMenuItems { get; } = new();

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
            void __AddCommands(ICustomMenuProvider provider)
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
            __AddCommands(workspaceController.CurrentToolAction);
            __AddCommands(workspaceController.CurrentTool);
            if (workspaceController.CurrentTool == null)
            {
                __AddCommands(workspaceController.CurrentEditor);
            }
            __AddCommands(workspaceController);
        }

        //--------------------------------------------------------------------------------------------------

    }

    //--------------------------------------------------------------------------------------------------

    
}
