using System.Windows;
using System.Windows.Controls;

namespace Macad.Presentation;

public class TemplateItemsControl : ItemsControl
{
    static TemplateItemsControl()
    {
        //DefaultStyleKeyProperty.OverrideMetadata(typeof(TemplateItemsControl), new FrameworkPropertyMetadata(typeof(TemplateItemsControl)));
    }

    protected override bool IsItemItsOwnContainerOverride(object item)
    {
        return false;
    }

    protected override void PrepareContainerForItemOverride(DependencyObject element, object item)
    {
        base.PrepareContainerForItemOverride(element, item);
        ((ContentPresenter)element).ContentTemplate = ItemTemplate;
    }
}