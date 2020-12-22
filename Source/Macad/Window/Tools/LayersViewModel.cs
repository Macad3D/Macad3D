using System.Linq;
using System.Windows.Input;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Presentation;

namespace Macad.Window
{
    public class LayersViewModel : ViewModelBase
    {
        #region Properties

        public LayerCollection Layers
        {
            get { return _Layers; }
            private set
            {
                _Layers = value; 
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public Layer SelectedLayer
        {
            get { return _SelectedLayer; }
            set
            {
                if(_SelectedLayer != value)
                {
                    IsNameEditing = false;
                }
                _SelectedLayer = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public bool IsNameEditing
        {
            get { return _IsNameEditing; }
            set
            {
                _IsNameEditing = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public AppContext Context
        {
            get { return _Context; }
            private set
            {
                _Context = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Members

        LayerCollection _Layers;
        Layer _SelectedLayer;
        bool _IsNameEditing;
        Layer _RenamingLayer;
        AppContext _Context;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Commands

        public ActionCommand StartRenamingCommand { get; private set; }
        public ActionCommand ActivateLayerCommand { get; private set; }

        //--------------------------------------------------------------------------------------------------

        bool CanExecuteStartRenamingCommand()
        {
            return SelectedLayer != null
                   && CoreContext.Current?.Layers != null
                   && SelectedLayer != CoreContext.Current.Layers.Default
                   && CoreContext.Current.Layers.Contains(SelectedLayer);
        }

        //--------------------------------------------------------------------------------------------------

        void ExecuteStartRenamingCommand()
        {
            IsNameEditing = true;
            _RenamingLayer = SelectedLayer;
        }

        //--------------------------------------------------------------------------------------------------

        internal void FinishRenaming(string newName)
        {
            if (_RenamingLayer != null)
            {
                _RenamingLayer.Name = newName;
                AppContext.Current.UndoHandler.Commit();
            }
            _RenamingLayer = null;
            IsNameEditing = false;

            AppContext.Current.Document.MarkAsUnsaved();
        }

        //--------------------------------------------------------------------------------------------------

        internal void CancelRenaming()
        {
            IsNameEditing = false;
            _RenamingLayer = null;
        }

        //--------------------------------------------------------------------------------------------------

        bool CanExecuteActivateLayerCommand()
        {
            return SelectedLayer != null
                   && CoreContext.Current?.Layers != null
                   && CoreContext.Current.Layers.Contains(SelectedLayer);
        }

        //--------------------------------------------------------------------------------------------------

        void ExecuteActivateLayerCommand()
        {
            CoreContext.Current.Layers.ActiveLayer = SelectedLayer;
        }

        //--------------------------------------------------------------------------------------------------

        void CreateCommands()
        {
            StartRenamingCommand = new ActionCommand(ExecuteStartRenamingCommand, CanExecuteStartRenamingCommand)
            {
                Header = () => "Rename",
                Title = () => "Rename Layer",
                Description = () => "Rename the selected layer.",
                Icon = () => "Generic-Rename"
            };
            ActivateLayerCommand = new ActionCommand(ExecuteActivateLayerCommand, CanExecuteActivateLayerCommand);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region C'tor

        public LayersViewModel()
        {
            CreateCommands();

            _Context = AppContext.Current;
            Layers = AppContext.Current.Layers;
            AppContext.Current.PropertyChanged += AppContext_PropertyChanged;

            _IsNameEditing = false;
        }

        //--------------------------------------------------------------------------------------------------

        void AppContext_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
        {
            Layers = (sender as AppContext)?.Layers;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region View Interface
                
        internal bool KeyDown(KeyEventArgs keyEventArgs)
        {
            // Forward to Workspace
            return AppContext.Current.ShortcutHandler.KeyPressed(ShortcutScope.Workspace, keyEventArgs.Key, Keyboard.Modifiers);
        }
        
        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}