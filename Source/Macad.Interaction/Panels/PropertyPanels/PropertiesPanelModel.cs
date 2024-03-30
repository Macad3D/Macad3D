using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Topology;

namespace Macad.Interaction.Panels;

public class PropertiesPanelModel : BaseObject, IPropertyPanelManager
{
    #region Properties

    public ObservableCollection<PropertyPanelItem> PropertyPanels
    {
        get { return _PropertyPanels; }
    }

    //--------------------------------------------------------------------------------------------------

    public Entity SelectedEntity
    {
        get { return _SelectedEntity; }
        set
        {
            _SelectedEntity = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public WorkspaceController WorkspaceController
    {
        get { return _WorkspaceController; }
        private set
        {
            if (_WorkspaceController != value)
            {
                if (_WorkspaceController != null)
                {
                    _WorkspaceController.Selection.SelectionChanged -= _Selection_OnSelectionChanged;
                }

                SelectedEntity = null;
                _PropertyPanels.Clear();
                _HiddenPanels.Clear();
                _WorkspaceController = value;

                if (_WorkspaceController != null)
                {
                    _WorkspaceController.Selection.SelectionChanged += _Selection_OnSelectionChanged;
                }

                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Structs

    public struct PropertyPanelItem
    {
        public int SortingKey { get; }
        public PropertyPanel Panel { get; }

        public PropertyPanelItem(int sortingKey, PropertyPanel panel)
        {
            SortingKey = sortingKey;
            Panel = panel;
        }
    }

    #endregion

    readonly Queue<BaseObject> _QueuedPanelInstances = new Queue<BaseObject>();
    readonly ObservableCollection<PropertyPanelItem> _PropertyPanels = new ObservableCollection<PropertyPanelItem>();
    readonly List<PropertyPanel> _HiddenPanels = new List<PropertyPanel>();
    Entity _SelectedEntity;
    WorkspaceController _WorkspaceController;

    //--------------------------------------------------------------------------------------------------

    public PropertiesPanelModel()
    {
        InteractiveContext.Current.PropertyChanged += _Context_PropertyChanged;
        WorkspaceController = InteractiveContext.Current.WorkspaceController;
        InteractiveContext.Current.PropertyPanelManager = this;
    }

    //--------------------------------------------------------------------------------------------------

    void _Context_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(InteractiveContext.WorkspaceController))
        {
            WorkspaceController = (sender as InteractiveContext)?.WorkspaceController;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _Selection_OnSelectionChanged(SelectionManager selectionManager)
    {
        if (selectionManager.SelectedEntities.Count == 1)
        {
            var newSelection = selectionManager.SelectedEntities[0];
            if (newSelection != SelectedEntity)
            {
                SelectedEntity = newSelection;
            }
        }
        else
        {
            SelectedEntity = null;
            ClearPropertyPanels();
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    void ClearPropertyPanels()
    {
        foreach (var panel in PropertyPanels)
        {
            panel.Panel.Dispose();
        }
        _PropertyPanels.Clear();
        _HiddenPanels.Clear();
        _QueuedPanelInstances.Clear();
    }

    //--------------------------------------------------------------------------------------------------

    public bool KeyDown(KeyEventArgs keyEventArgs)
    {
        // Forward to Workspace
        return InteractiveContext.Current.ShortcutHandler.KeyPressed("Workspace", keyEventArgs.Key, Keyboard.Modifiers);
    }
        
    //--------------------------------------------------------------------------------------------------

    #region IPropertyPanelManager

    public void AddPanel(PropertyPanel panel, int sortingKey)
    {
        var index = PropertyPanels.IndexOfFirst(p => p.SortingKey > sortingKey);
        if(index >= 0)
        {
            PropertyPanels.Insert(index, new PropertyPanelItem(sortingKey, panel));
        }
        else
        {
            PropertyPanels.Add(new PropertyPanelItem(sortingKey, panel));
        }
        panel.OnAddedToPane(this);
    }

    //--------------------------------------------------------------------------------------------------

    public void AddPanel(PropertyPanel panel, PropertyPanel insertAfter)
    {
        var index = PropertyPanels.IndexOfFirst(p => p.Panel == insertAfter);
        if (index >= 0)
        {
            PropertyPanels.Insert(index + 1, new PropertyPanelItem(PropertyPanels[index].SortingKey, panel));
        }
        else
        {
            PropertyPanels.Add(new PropertyPanelItem(int.MaxValue, panel));
        }
        panel.OnAddedToPane(this);
    }

    //--------------------------------------------------------------------------------------------------

    public void RemovePanel(PropertyPanel panel)
    {
        var index = PropertyPanels.IndexOfFirst(p => p.Panel == panel);
        if (index >= 0)
        {
            PropertyPanels.RemoveAt(index);
            panel.Dispose();
        }

        _HiddenPanels.Remove(panel);
    }

    //--------------------------------------------------------------------------------------------------

    public void HidePanels(int firstSortingKey, int lastSortingKey)
    {
        foreach (var panel in _PropertyPanels)
        {
            if (panel.SortingKey >= firstSortingKey && panel.SortingKey <= lastSortingKey)
            {
                if (!(panel.Panel.IsCollapsed || _HiddenPanels.Contains(panel.Panel)))
                {
                    _HiddenPanels.Add(panel.Panel);
                    panel.Panel.IsCollapsed = true;
                }
            }
            else
            {
                if (_HiddenPanels.Contains(panel.Panel))
                {
                    _HiddenPanels.Remove(panel.Panel);
                    panel.Panel.IsCollapsed = false;
                }
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}