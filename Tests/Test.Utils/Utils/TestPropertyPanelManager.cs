using System.Collections.Generic;
using System.Linq;
using System.Threading;
using Macad.Common;
using Macad.Interaction.Panels;

namespace Macad.Test.Utils;

public class TestPropertyPanelManager : IPropertyPanelManager
{
    struct PropertyPanelItem
    {
        public int SortingKey { get; }
        public PropertyPanel Panel { get; }

        public PropertyPanelItem(int sortingKey, PropertyPanel panel)
        {
            SortingKey = sortingKey;
            Panel = panel;
        }
    }

    List<PropertyPanelItem> _PropertyPanels = new List<PropertyPanelItem>();

    //--------------------------------------------------------------------------------------------------

    public TestPropertyPanelManager()
    {
        if (Thread.CurrentThread.GetApartmentState() != ApartmentState.STA)
        {
            throw new ThreadStateException("The current threads apartment state is not STA");
        }
    }

    //--------------------------------------------------------------------------------------------------

    public int Count
    {
        get { return _PropertyPanels.Count; }
    }

    //--------------------------------------------------------------------------------------------------

    public void AddPanel(PropertyPanel panel, int sortingKey)
    {
        var index = _PropertyPanels.IndexOfFirst(p => p.SortingKey > sortingKey);
        if(index >= 0)
        {
            _PropertyPanels.Insert(index, new PropertyPanelItem(sortingKey, panel));
            return;
        }
        _PropertyPanels.Add(new PropertyPanelItem(sortingKey, panel));
    }

    //--------------------------------------------------------------------------------------------------

    public void AddPanel(PropertyPanel panel, PropertyPanel insertAfter)
    {
        var index = _PropertyPanels.IndexOfFirst(p => p.Panel == insertAfter);
        if (index >= 0)
        {
            _PropertyPanels.Insert(index + 1, new PropertyPanelItem(_PropertyPanels[index].SortingKey, panel));
            return;
        }

        _PropertyPanels.Add(new PropertyPanelItem(int.MaxValue, panel));
    }

    //--------------------------------------------------------------------------------------------------

    public void RemovePanel(PropertyPanel panel)
    {
        var index = _PropertyPanels.IndexOfFirst(p => p.Panel == panel);
        if (index >= 0)
        {
            _PropertyPanels.RemoveAt(index);
            panel.Cleanup();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void HidePanels(int firstSortingKey, int lastSortingKey)
    {
        return;
    }

    //--------------------------------------------------------------------------------------------------

    public T FindFirst<T>() where T: PropertyPanel
    {
        return _PropertyPanels.Select(p => p.Panel).OfType<T>().FirstOrDefault();
    }

    //--------------------------------------------------------------------------------------------------

}