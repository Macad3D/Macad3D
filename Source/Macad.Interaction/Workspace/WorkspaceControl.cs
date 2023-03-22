using System.Collections.Generic;
using System.Diagnostics;
using Macad.Common;
using Macad.Interaction.Panels;

namespace Macad.Interaction;

public abstract class WorkspaceControl : BaseObject
{
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

    WorkspaceController _WorkspaceController;
    List<PropertyPanel> _Panels;
    List<HudElement> _HudElements;

    //--------------------------------------------------------------------------------------------------

    protected void Cleanup()
    {
        RemovePanels();
        RemoveHudElements();
    }

    //--------------------------------------------------------------------------------------------------

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
        if (_Panels == null)
            return;

        if (InteractiveContext.Current.PropertyPanelManager != null)
        {
            _Panels.ForEach(InteractiveContext.Current.PropertyPanelManager.RemovePanel);
        }
        _Panels.Clear();
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

    #region HudElements

    protected T CreateHudElement<T>() where T : HudElement
    {
        var element = InteractiveContext.Current.WorkspaceController.HudManager?.CreateElement<T>(this);
        if (element != null)
        {
            _HudElements ??= new();
            _HudElements.Add(element);
        }

        return element;
    }

    //--------------------------------------------------------------------------------------------------

    protected void RemoveHudElement(HudElement element)
    {
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
}