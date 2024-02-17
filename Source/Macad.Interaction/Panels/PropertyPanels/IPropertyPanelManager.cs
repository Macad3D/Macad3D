namespace Macad.Interaction.Panels;

public static class PropertyPanelSortingKey
{
    public const int Body           = 0x00010000;
    public const int BodyShape      = 0x00018000;
    public const int Shapes         = 0x00020000;
    public const int Components     = 0x00040000;
    public const int Tools          = 0x00080000;
}

public interface IPropertyPanelManager
{
    void AddPanel(PropertyPanel panel, int sortingKey);
    void AddPanel(PropertyPanel panel, PropertyPanel insertAfter);
    void RemovePanel(PropertyPanel panel);
    void HidePanels(int firstSortingKey, int lastSortingKey);
}