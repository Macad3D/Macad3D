using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Topology;
using Macad.Interaction.Panels;
using Macad.Interaction.Visual;

namespace Macad.Interaction;

public abstract class WorkspaceControl : BaseObject, IMouseEventHandler, IContextMenuItemProvider
{
    #region Properties

    //--------------------------------------------------------------------------------------------------

    public WorkspaceController WorkspaceController
    {
        get { return _WorkspaceController; }
        set
        {
            Debug.Assert(_WorkspaceController == null || _WorkspaceController == value, "WorkspaceController cannot be changed");
            _WorkspaceController = value;
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected bool CleanedUp { get; private set; }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    WorkspaceController _WorkspaceController;
    List<PropertyPanel> _Panels;
    bool _PanelsHidden;
    List<HudElement> _HudElements;
    List<VisualObject> _VisualObjects;
    List<SelectionContext> _SelectionContexts;
    ISnapHandler _SnapHandler;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Base Methods

    protected virtual void Cleanup()
    {
        RemovePanels();
        UnhidePanels();
        RemoveHudElements();
        RemoveVisuals();
        CloseSelectionContexts();
        RemoveHintMessage();
        RemoveCursor();
        RemoveSnapHandler();
        WorkspaceController.Invalidate();
        CleanedUp = true;
    }

    //--------------------------------------------------------------------------------------------------
        
    protected virtual IEnumerable<WorkspaceControl> GetChildren()
    {
        yield break;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Panels

    protected T CreatePanel<T>(BaseObject instance, int sortingKey) where T : PropertyPanel
    {
        var panel = PropertyPanel.CreatePanel<T>(instance);
        InteractiveContext.Current.PropertyPanelManager?.AddPanel(panel, sortingKey);

        _Panels ??= new();
        _Panels.Add(panel);
        return panel;
    }

    //--------------------------------------------------------------------------------------------------

    protected T CreatePanel<T>(BaseObject instance, PropertyPanel insertAfter) where T : PropertyPanel
    {
        var panel = PropertyPanel.CreatePanel<T>(instance);
        InteractiveContext.Current.PropertyPanelManager?.AddPanel(panel, insertAfter);

        _Panels ??= new();
        _Panels.Add(panel);
        return panel;
    }
    
    //--------------------------------------------------------------------------------------------------

    protected void RemovePanels()
    {
        if (_Panels == null || _Panels.Count == 0)
            return;

        if (InteractiveContext.Current.PropertyPanelManager != null)
        {
            _Panels?.ForEach(InteractiveContext.Current.PropertyPanelManager.RemovePanel);
        }
        _Panels?.Clear();
    }

    //--------------------------------------------------------------------------------------------------

    protected void HidePanels(int firstSortingKey, int lastSortingKey)
    {
        InteractiveContext.Current.PropertyPanelManager?.HidePanels(firstSortingKey, lastSortingKey);
        _PanelsHidden = true;
    }

    //--------------------------------------------------------------------------------------------------

    protected void UnhidePanels()
    {
        if (_PanelsHidden)
        {
            InteractiveContext.Current.PropertyPanelManager?.HidePanels(0, 0);
            _PanelsHidden = false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region HintMessages

    protected void RemoveHintMessage()
    {
        WorkspaceController.HudManager?.SetHintMessage(this, null);
    }

    //--------------------------------------------------------------------------------------------------

    protected void SetHintMessage(string message)
    {
        WorkspaceController.HudManager?.SetHintMessage(this, message);
    }

    //--------------------------------------------------------------------------------------------------


    #endregion

    #region Cursor

    protected void RemoveCursor()
    {
        WorkspaceController.HudManager?.SetCursor(this, null);
    }

    //--------------------------------------------------------------------------------------------------
    
    protected void SetCursor(Cursor cursor)
    {
        WorkspaceController.HudManager?.SetCursor(this, cursor);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region HudElements

    protected void Add(HudElement element)
    {
        _HudElements ??= new();

        if (element == null || _HudElements.Contains(element))
            return;

        _HudElements.Add(element);
        InteractiveContext.Current.WorkspaceController.HudManager?.AddElement(element);
    }

    //--------------------------------------------------------------------------------------------------

    protected void Remove(HudElement element)
    {
        InteractiveContext.Current.WorkspaceController.HudManager?.RemoveElement(element);
        _HudElements?.Remove(element);
    }

    //--------------------------------------------------------------------------------------------------
    
    protected void RemoveHudElements()
    {
        if (_HudElements == null)
            return;

        if (WorkspaceController?.HudManager != null)
        {
            _HudElements.ForEach(WorkspaceController.HudManager.RemoveElement);
        }
        _HudElements.Clear();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Visual Objects

    protected void Add(VisualObject visual)
    {
        _VisualObjects ??= new();
        if (_VisualObjects.Contains(visual))
            return;
        _VisualObjects.Add(visual);
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    protected void Remove(VisualObject visual)
    {
        visual?.Remove();
        _VisualObjects?.Remove(visual);
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------
    
    protected void RemoveVisuals()
    {
        if (_VisualObjects == null)
            return;

        _VisualObjects.ForEach(visual => visual.Remove());
        _VisualObjects.Clear();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
                    
    #region Selection

    protected SelectionContext OpenSelectionContext(SelectionContext.Options options = SelectionContext.Options.None)
    {
        var selectionContext = WorkspaceController.Selection.OpenContext(options);
        _SelectionContexts ??= new();
        _SelectionContexts.Add(selectionContext);
        return selectionContext;
    }

    //--------------------------------------------------------------------------------------------------

    protected void CloseSelectionContext(SelectionContext selectionContext)
    {
        WorkspaceController.Selection.CloseContext(selectionContext);
        _SelectionContexts?.Remove(selectionContext);
    }

    //--------------------------------------------------------------------------------------------------

    protected void CloseSelectionContexts()
    {
        _SelectionContexts?.ForEach(ctx => WorkspaceController.Selection.CloseContext(ctx));
        _SelectionContexts?.Clear();
    }
    
    //--------------------------------------------------------------------------------------------------
    
    public virtual bool OnEntitySelectionChanging(IEnumerable<InteractiveEntity> entitiesToSelect, IEnumerable<InteractiveEntity> entitiesToUnSelect)
    {
        return GetChildren().Any(child => child.OnEntitySelectionChanging(entitiesToSelect, entitiesToUnSelect));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Snapping

    protected T SetSnapHandler<T>(T snapHandler) where T : SnapBase
    {
        RemoveSnapHandler();
        snapHandler.WorkspaceController = WorkspaceController;
        _SnapHandler = snapHandler;
        WorkspaceController?.Selection?.Invalidate();
        return snapHandler;
    }

    //--------------------------------------------------------------------------------------------------

    protected void RemoveSnapHandler()
    {
        (_SnapHandler as IDisposable)?.Dispose();
        _SnapHandler = null;
        WorkspaceController?.Selection?.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    public ISnapHandler GetSnapHandler()
    {
        return _SnapHandler ?? GetChildren().Select(child => child.GetSnapHandler())
                                            .FirstOrDefault(handler => handler != null);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Event Forwarding

    public virtual bool OnMouseMove(MouseEventData data)
    {
        return GetChildren().Any(child => child.OnMouseMove(data));
    }

    //--------------------------------------------------------------------------------------------------

    public virtual bool OnMouseDown(MouseEventData data)
    {
        return GetChildren().Any(child => child.OnMouseDown(data));
    }

    //--------------------------------------------------------------------------------------------------

    public virtual bool OnMouseUp(MouseEventData data)
    {
        return GetChildren().Any(child => child.OnMouseUp(data));
    }

    //--------------------------------------------------------------------------------------------------

    public virtual void EnrichContextMenu(ContextMenuItems itemList)
    {
        GetChildren().ForEach(child => child.EnrichContextMenu(itemList));
    }

    //--------------------------------------------------------------------------------------------------

    public virtual bool OnKeyPressed(Key key, ModifierKeys modifierKeys)
    {
        return GetChildren().Any(child => child.OnKeyPressed(key, modifierKeys));
    }
    
    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Undo

    protected void CommitChanges()
    {
        InteractiveContext.Current.UndoHandler.Commit();
    }

    //--------------------------------------------------------------------------------------------------
   
    #endregion
}