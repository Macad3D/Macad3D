using System.Collections.Generic;
using System.Linq;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Presentation.TreeView;

namespace Macad.Window
{
    /// <summary>
    /// Interaction logic for DocumentExplorerView.xaml
    /// </summary>
    public partial class DocumentExplorerView : UserControl
    {
        public DocumentExplorerViewModel Model => (DocumentExplorerViewModel)DataContext;

        //--------------------------------------------------------------------------------------------------

        public DocumentExplorerView()
        {
            DataContext = new DocumentExplorerViewModel();

            InitializeComponent();
        }

        //--------------------------------------------------------------------------------------------------

        void TreeView_OnOnSelecting(object sender, SelectionChangedCancelEventArgs e)
        {
            Model.ChangeSelection(e.ItemsToSelect, e.ItemsToUnSelect);
            e.Cancel = true;
        }

        //--------------------------------------------------------------------------------------------------

        void FrameworkElement_OnToolTipOpening(object sender, ToolTipEventArgs e)
        {
            var senderElement = e.OriginalSource as FrameworkElement;
            if (senderElement?.DataContext == null)
                return;
            
            List<MessageItem> messageList = null;
            switch (senderElement?.DataContext)
            {
                case Body body:
                    messageList = AppContext.Current.MessageHandler.GetEntityMessages(body.Shape);
                    break;
            }

            if (messageList == null || messageList.Count == 0)
            {
                senderElement.ToolTip = "";
                e.Handled = true;
            }
            else
            {
                senderElement.ToolTip = string.Join("\n", messageList.Select(mi => mi.ToShortString()));
            }
        }

        //--------------------------------------------------------------------------------------------------

        void UserControl_KeyDown(object sender, System.Windows.Input.KeyEventArgs e)
        {
            if (e.OriginalSource is TextBoxBase)
                return;

            e.Handled = Model.KeyDown(e);
        }

        //--------------------------------------------------------------------------------------------------
    }
}
