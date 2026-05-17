using Macad.Common;
using Macad.Core;
using Macad.Core.Topology;
using System;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Linq;
using System.Windows;
using System.Windows.Input;
using System.Windows.Threading;

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
        get;
        private set
        {
            if (field != value)
            {
                field = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool HasMultipleViewports
    {
        get;
        private set
        {
            field = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Thickness ActiveViewportMargin
    {
        get;
        private set
        {
            field = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public record ViewportDefinition(ViewportController ViewportController, double Left, double Top, double Width, double Height);

    public ViewportDefinition[] ViewportDefinitions
    {
        get;
        private set
        {
            field = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    WorkspaceController _WorkspaceController;
    object _CursorOwner;
    Cursor _Cursor;
    string _HintMessage;
    object _HintMessageOwner;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Property handler

    internal ViewportPanelModel()
    {
        Entity.ErrorStateChanged += _Entity_ErrorStateChanged;
        InteractiveContext.Current.PropertyChanged += Context_PropertyChanged;
        WorkspaceController = InteractiveContext.Current.WorkspaceController;
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
                _WorkspaceController.ViewportLayoutManager.LayoutArranged -= _ViewportLayoutManager_LayoutArranged;
            }
            WorkspaceController = (sender as InteractiveContext)?.WorkspaceController;
            if (_WorkspaceController != null)
            {
                _WorkspaceController.Selection.SelectionChanged += _Selection_SelectionChanged;
                _WorkspaceController.PropertyChanged += _WorkspaceController_PropertyChanged; ;
                _WorkspaceController.ViewportLayoutManager.LayoutArranged += _ViewportLayoutManager_LayoutArranged;

                _UpdateActiveViewport();
            }
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

    bool _UpdateErrorMessageScheduled;

    void _UpdateErrorMessage()
    {
        if (_UpdateErrorMessageScheduled)
            return;
        _UpdateErrorMessageScheduled = true;

        Dispatcher.CurrentDispatcher.BeginInvoke(DispatcherPriority.Background, () =>
        {
            _UpdateErrorMessageScheduled = false;

            var entities = InteractiveContext.Current.WorkspaceController?.Selection.SelectedEntities;
            if (entities?.Count == 1)
            {
                var shape = (entities[0] as Body)?.Shape;
                if (shape != null && shape.HasErrors)
                {
                    var messageList = InteractiveContext.Current.MessageHandler.GetEntityMessages(shape);
                    if (messageList != null && messageList.Count != 0)
                    {
                        ErrorMessage = $"__Error:__ {messageList[0].Text}{(messageList[0].Text.EndsWith(".") ? "" : ".")} __See log for details.__";
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

        });
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Viewport Control

    void _WorkspaceController_PropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(WorkspaceController.ViewportController))
        {
            _UpdateActiveViewport();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ViewportLayoutManager_LayoutArranged(ViewportLayoutManager senders)
    {
        var dpiScale = _WorkspaceController.ViewportLayoutManager.DpiScale;
        ViewportDefinitions = WorkspaceController.ViewportControllers
                                                .Where(vc => vc.IsVisible)
                                                .Select(vc =>
                                                {
                                                    var frame = _WorkspaceController.ViewportLayoutManager.GetContentFrame(vc);
                                                    if (frame == null)
                                                        return null;
                                                    return new ViewportDefinition(vc, 
                                                                                  frame.Location.Left / dpiScale, 
                                                                                  frame.Location.Top / dpiScale, 
                                                                                  frame.Location.Width / dpiScale, 
                                                                                  frame.Location.Height / dpiScale);
                                                })
                                                .WhereNotNull()
                                                .ToArray();
        _UpdateActiveViewport();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateActiveViewport()
    {
        HasMultipleViewports = _WorkspaceController.Workspace.ViewportLayout is not ViewportContentFrame;

        var windowSize = _WorkspaceController.ViewportLayoutManager.GetSize();
        var frame = _WorkspaceController.ViewportLayoutManager.GetContentFrame(_WorkspaceController.ViewportController);
        var dpiScale = _WorkspaceController.ViewportLayoutManager.DpiScale;

        if (frame != null)
        {
            ActiveViewportMargin = new(
                frame.Location.Left / dpiScale,
                frame.Location.Top / dpiScale,
                (windowSize.Width - frame.Location.Right) / dpiScale,
                (windowSize.Height - frame.Location.Bottom) / dpiScale);
        }
        else
        {
            ActiveViewportMargin = new(0, 0, 0, 0);
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}