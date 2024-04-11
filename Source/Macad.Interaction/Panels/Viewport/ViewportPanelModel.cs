using System;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Linq;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Topology;

namespace Macad.Interaction.Panels;

public class ViewportPanelModel : BaseObject, IHudManager
{
    #region Properties

    public WorkspaceController WorkspaceController
    {
        get { return _WorkspaceController; }
        private set
        {
            if (_WorkspaceController != value)
            {
                _WorkspaceController = value;
                if (_WorkspaceController != null)
                {
                    _WorkspaceController.HudManager = this;
                }
                else
                {
                    HudElements.Clear();
                }
                _WorkspaceController = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public ViewportController ViewportController
    {
        get { return _ViewportController; }
        private set
        {
            _ViewportController = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public ObservableCollection<HudElement> HudElements { get; } = new();

    //--------------------------------------------------------------------------------------------------

    public Cursor Cursor
    {
        get { return _Cursor; }
        set
        {
            _Cursor = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public string HintMessage
    {
        get { return _HintMessage; }
        set
        {
            _HintMessage = value;
            RaisePropertyChanged();
        }
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

    WorkspaceController _WorkspaceController;
    ViewportController _ViewportController;
    object _CursorOwner;
    Cursor _Cursor;
    string _HintMessage;
    object _HintMessageOwner;
    string _ErrorMessage;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Property handler

    internal ViewportPanelModel()
    {
        Entity.ErrorStateChanged += _Entity_ErrorStateChanged;
        InteractiveContext.Current.PropertyChanged += Context_PropertyChanged;
        WorkspaceController = InteractiveContext.Current.WorkspaceController;
        ViewportController = InteractiveContext.Current.ViewportController;
    }

    //--------------------------------------------------------------------------------------------------

    ~ViewportPanelModel()
    {
        Entity.ErrorStateChanged -= _Entity_ErrorStateChanged;
        InteractiveContext.Current.PropertyChanged -= Context_PropertyChanged;
    }

    //--------------------------------------------------------------------------------------------------

    void Context_PropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(InteractiveContext.WorkspaceController))
        {
            if (_WorkspaceController != null)
            {
                _WorkspaceController.Selection.SelectionChanged -= _Selection_SelectionChanged;
            }
            WorkspaceController = (sender as InteractiveContext)?.WorkspaceController;
            if (_WorkspaceController != null)
            {
                _WorkspaceController.Selection.SelectionChanged += _Selection_SelectionChanged;
            }
        }
        else if (e.PropertyName == nameof(InteractiveContext.ViewportController))
        {
            ViewportController = (sender as InteractiveContext)?.ViewportController;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Control Callbacks
        
    public bool KeyDown(KeyEventArgs keyEventArgs)
    {
        var elements = HudElements.ToArray();
        foreach (var hudElement in elements )
        {
            hudElement.SimulatedKeyDown(keyEventArgs);
            if (keyEventArgs.Handled)
                return true;
        }

        // Forward to workspace
        return InteractiveContext.Current?.WorkspaceController?.KeyPressed(keyEventArgs.Key, Keyboard.Modifiers) 
               ?? false;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region IHudManager

    public void SetCursor(object owner, Cursor cursor)
    {
        if (_Cursor != null && owner != null)
        {
            if (owner != _CursorOwner)
                return;
        }

        Cursor = cursor;
        _CursorOwner = cursor != null ? owner : null;
    }

    //--------------------------------------------------------------------------------------------------

    public void SetHintMessage(object owner, string message)
    {
        if (!string.IsNullOrEmpty(_HintMessage) && owner != null)
        {
            if (owner != _HintMessageOwner)
                return;
        }

        HintMessage = message;
        _HintMessageOwner = message != null ? owner : null;
    }

    //--------------------------------------------------------------------------------------------------
        
    public void AddElement(HudElement element)
    {
        if (HudElements.Contains(element))
            return;

        element.WorkspaceController = WorkspaceController;
        element.Initialize();
        HudElements.Add(element);
    }

    //--------------------------------------------------------------------------------------------------

    public void RemoveElement(HudElement element)
    {
        if (HudElements.Contains(element))
            HudElements.Remove(element);
    }

    //--------------------------------------------------------------------------------------------------
        
    public void RemoveElements(Func<HudElement, bool> predicate)
    {
        var toRemove = HudElements.Where(predicate).ToArray();
        foreach (var element in toRemove)
        {
            HudElements.Remove(element);
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
                    ErrorMessage = $"__Error:__ {messageList[0].Text}{(messageList[0].Text.EndsWith(".")?"":".")} __See log for details.__";
                }
                else
                {
                    ErrorMessage = "__Error:__ Shape making failed for unknown reason. __See log for details.__";
                }
                return;
            }
        }
        else
        {
            if (entities.Any(ent => (ent as Body)?.Shape?.HasErrors ?? false))
            {
                ErrorMessage = "__Error:__ One or more of the selected bodies have errors. __See log for details.__";
                return;
            }
        }

        ErrorMessage = "";
    }

    //--------------------------------------------------------------------------------------------------
        
    #endregion
}