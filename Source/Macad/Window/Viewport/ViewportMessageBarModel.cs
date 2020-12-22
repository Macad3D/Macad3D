using System.ComponentModel;
using System.Diagnostics;
using System.Linq;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Interaction.Dialogs;
using Macad.Presentation;

namespace Macad.Window
{
    public class ViewportMessageBarModel : ViewModelBase
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

        public string UpdateMessage
        {
            get { return _UpdateMessage; }
            private set
            {
                if (_UpdateMessage != value)
                {
                    _UpdateMessage = value;
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
        string _UpdateMessage;
        VersionCheckInfo _UpdateInfo;

        //--------------------------------------------------------------------------------------------------

        internal ViewportMessageBarModel()
        {
            UpdateCommand = new RelayCommand(_UpdateExecute);
            DismissUpdateCommand = new RelayCommand(_DismissUpdateExecute);

            Entity.ErrorStateChanged += _Entity_ErrorStateChanged;
            VersionCheck.UpdateAvailable += _VersionCheck_UpdateAvailable;
            AppContext.Current.PropertyChanged += _Context_PropertyChanged;
            _Context_PropertyChanged(AppContext.Current, new PropertyChangedEventArgs(nameof(AppContext.WorkspaceController)));
        }

        //--------------------------------------------------------------------------------------------------

        ~ViewportMessageBarModel()
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

            AppContext.Current.PropertyChanged -= _Context_PropertyChanged;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Callbacks

        void _Context_PropertyChanged(object sender, PropertyChangedEventArgs e)
        {
            if (e.PropertyName == nameof(AppContext.WorkspaceController))
            {
                if (_WorkspaceController != null)
                {
                    _WorkspaceController.Selection.SelectionChanged -= _Selection_SelectionChanged;
                    _WorkspaceController.PropertyChanged -= _WorkspaceController_PropertyChanged;
                }
                _WorkspaceController = AppContext.Current.WorkspaceController;
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
                _CurrentTool = AppContext.Current.WorkspaceController.CurrentTool;
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
            if (AppContext.Current.WorkspaceController.Selection.SelectedEntities.Contains(entity))
            {
                _UpdateErrorMessage();
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _UpdateErrorMessage()
        {
            var entities = AppContext.Current.WorkspaceController.Selection.SelectedEntities;
            if (entities.Count == 1)
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

        #region Update Info

        void _VersionCheck_UpdateAvailable(object sender, VersionCheckInfo info)
        {
            _UpdateInfo = info;
            UpdateMessage = $"A new version of Macad|3D is available for download.";
            RaisePropertyChanged(nameof(UpdateMessage));
        }

        //--------------------------------------------------------------------------------------------------

        public RelayCommand UpdateCommand { get; }
        public RelayCommand DismissUpdateCommand { get; }

        //--------------------------------------------------------------------------------------------------

        void _UpdateExecute()
        {
            _DismissUpdateExecute();

            if (_UpdateInfo != null && _UpdateInfo.UpdateAvailable)
            {
                bool disableCheck = false;
                if (Dialogs.InformUpdateAvailable(_UpdateInfo.UpdateVersion, _UpdateInfo.UpdateUrl, ref disableCheck))
                {
                    Process.Start(_UpdateInfo.UpdateUrl);
                }
                VersionCheck.IsAutoCheckEnabled = !disableCheck;
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _DismissUpdateExecute()
        {
            UpdateMessage = "";
            VersionCheck.ResetAvailability();
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}