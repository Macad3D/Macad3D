using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Windows;
using System.Windows.Input;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Presentation;

namespace Macad.Window
{
    public class DocumentExplorerViewModel : ViewModelBase
    {
        #region Properties

        public ObservableCollection<Entity> Entities { get; } = new ObservableCollection<Entity>();
        public ObservableCollection<Entity> SelectedEntities { get; } = new ObservableCollection<Entity>();

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Members

        WorkspaceController _WorkspaceController;

        #endregion

        #region Commands

        public static ICommand ToggleVisibilityCommand = new RelayCommand<Body>(
            body =>
            {
                if (body != null)
                {
                    body.IsVisible = !body.IsVisible;
                    InteractiveContext.Current.UndoHandler.Commit();
                }
            });

        //--------------------------------------------------------------------------------------------------

        #endregion

        internal DocumentExplorerViewModel()
        {
            CoreContext.Current.PropertyChanged += Context_PropertyChanged;
            Entities.Add(CoreContext.Current.Document);

            _WorkspaceController = InteractiveContext.Current.WorkspaceController;
            if(_WorkspaceController != null)
                _WorkspaceController.Selection.SelectionChanged += Selection_SelectionChanged;
        }

        //--------------------------------------------------------------------------------------------------

        void Context_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
        {
            if (e.PropertyName == nameof(CoreContext.Document))
            {
                SelectedEntities.Clear();
                Entities.Clear();
                Entities.Add(CoreContext.Current.Document);
            } 
            else if (e.PropertyName == nameof(InteractiveContext.WorkspaceController))
            {
                SelectedEntities.Clear();
                if(_WorkspaceController != null)
                    _WorkspaceController.Selection.SelectionChanged -= Selection_SelectionChanged;
                _WorkspaceController = InteractiveContext.Current.WorkspaceController;
                if(_WorkspaceController != null)
                    _WorkspaceController.Selection.SelectionChanged += Selection_SelectionChanged;
            }
        }

        //--------------------------------------------------------------------------------------------------

        void Selection_SelectionChanged(SelectionManager selectionManager)
        {
            var toRemove = SelectedEntities.Except(selectionManager.SelectedEntities).ToArray();
            foreach (var entity in toRemove)
            {
                SelectedEntities.Remove(entity);
            }

            var toAdd = selectionManager.SelectedEntities.Except(SelectedEntities);
            foreach (var entity in toAdd)
            {
                SelectedEntities.Add(entity);
            }
        }

        //--------------------------------------------------------------------------------------------------

        internal void ChangeSelection(IEnumerable<object> itemsToSelect, IEnumerable<object> itemsToUnSelect)
        {
            AppContext.Current.WorkspaceController.Selection.ChangeEntitySelection(itemsToSelect.OfType<InteractiveEntity>(), itemsToUnSelect.OfType<InteractiveEntity>());
            AppContext.Current.WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        public bool KeyDown(KeyEventArgs keyEventArgs)
        {
            // Forward to Workspace
            return AppContext.Current.ShortcutHandler.KeyPressed(ShortcutScope.Workspace, keyEventArgs.Key, Keyboard.Modifiers);
        }
        
        //--------------------------------------------------------------------------------------------------

    }
}