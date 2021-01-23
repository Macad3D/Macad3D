using System.ComponentModel;
using System.Linq;
using Macad.Core.Topology;

namespace Macad.Interaction.Panels
{
    public partial class ViewportMessageBar : PanelBase
    {
        #region Properties

        public string ToolMessage
        {
            get { return _CurrentTool?.StatusText; }
        }

        //--------------------------------------------------------------------------------------------------

        public string ErrorMessage
        {
            get { return _ErrorMessage; }
            private set
            {
                if (_ErrorMessage != value)
                {
                    _ErrorMessage = value;
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Members and n'tor

        WorkspaceController _WorkspaceController;
        Tool _CurrentTool;
        string _ErrorMessage;

        //--------------------------------------------------------------------------------------------------

        public ViewportMessageBar()
        {
            Entity.ErrorStateChanged += _Entity_ErrorStateChanged;
            InteractiveContext.Current.PropertyChanged += _Context_PropertyChanged;
            _Context_PropertyChanged(InteractiveContext.Current, new PropertyChangedEventArgs(nameof(InteractiveContext.WorkspaceController)));

            DataContext = this;
            InitializeComponent();
        }

        //--------------------------------------------------------------------------------------------------

        ~ViewportMessageBar()
        {
            Entity.ErrorStateChanged -= _Entity_ErrorStateChanged;

            if (_CurrentTool != null)
            {
                _CurrentTool.PropertyChanged -= _CurrentTool_PropertyChanged;
            }
            _CurrentTool = null;

            if (_WorkspaceController != null)
            {
                _WorkspaceController.Selection.SelectionChanged -= _Selection_SelectionChanged;
                _WorkspaceController.PropertyChanged -= _WorkspaceController_PropertyChanged;
            }
            _WorkspaceController = null;

            InteractiveContext.Current.PropertyChanged -= _Context_PropertyChanged;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Callbacks

        void _Context_PropertyChanged(object sender, PropertyChangedEventArgs e)
        {
            if (e.PropertyName == nameof(InteractiveContext.WorkspaceController))
            {
                if (_WorkspaceController != null)
                {
                    _WorkspaceController.Selection.SelectionChanged -= _Selection_SelectionChanged;
                    _WorkspaceController.PropertyChanged -= _WorkspaceController_PropertyChanged;
                }
                _WorkspaceController = InteractiveContext.Current.WorkspaceController;
                if (_WorkspaceController != null)
                {
                    _WorkspaceController.PropertyChanged += _WorkspaceController_PropertyChanged;
                    _WorkspaceController.Selection.SelectionChanged += _Selection_SelectionChanged;
                }

                _WorkspaceController_PropertyChanged(_WorkspaceController, new PropertyChangedEventArgs(nameof(WorkspaceController.CurrentTool)));
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _WorkspaceController_PropertyChanged(object sender, PropertyChangedEventArgs e)
        {
            if (e.PropertyName == nameof(WorkspaceController.CurrentTool))
            {
                if (_CurrentTool != null)
                {
                    _CurrentTool.PropertyChanged -= _CurrentTool_PropertyChanged;
                }
                _CurrentTool = InteractiveContext.Current.WorkspaceController?.CurrentTool;
                if (_CurrentTool != null)
                {
                    _CurrentTool.PropertyChanged += _CurrentTool_PropertyChanged;
                }

                RaisePropertyChanged(nameof(ToolMessage));
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _CurrentTool_PropertyChanged(object sender, PropertyChangedEventArgs e)
        {
            if (e.PropertyName == nameof(Tool.StatusText))
            {
                RaisePropertyChanged(nameof(ToolMessage));
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Error Message

        void _Selection_SelectionChanged(SelectionManager selectionManager)
        {
            _UpdateErrorMessage();
        }

        //--------------------------------------------------------------------------------------------------
        
        void _Entity_ErrorStateChanged(Entity entity)
        {
            if (InteractiveContext.Current.WorkspaceController?.Selection.SelectedEntities.Contains(entity) ?? false)
            {
                _UpdateErrorMessage();
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _UpdateErrorMessage()
        {
            var entities = InteractiveContext.Current.WorkspaceController?.Selection.SelectedEntities;
            if (entities?.Count == 1)
            {
                var shape = (entities[0] as Body)?.Shape;
                if (shape != null && shape.HasErrors)
                {
                    var messageList = InteractiveContext.Current.MessageHandler.GetEntityMessages(shape);
                    if (messageList != null && messageList.Count != 0)
                    {
                        ErrorMessage = $"Error: {messageList[0].Text}{(messageList[0].Text.EndsWith(".")?"":".")} See log for details.";
                    }
                    else
                    {
                        ErrorMessage = "Error: Shape making failed for unknown reason. See log for details.";
                    }
                    return;
                }
            }
            else
            {
                if (entities.Any(ent => (ent as Body)?.Shape?.HasErrors ?? false))
                {
                    ErrorMessage = "Error: One or more of the selected bodies have errors. See log for details.";
                    return;
                }
            }

            ErrorMessage = "";
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}
