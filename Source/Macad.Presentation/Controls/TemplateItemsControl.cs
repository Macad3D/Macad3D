using System.Collections.Generic;
using System.Windows;
using System.Windows.Automation.Peers;
using System.Windows.Controls;
using System.Windows.Media;

namespace Macad.Presentation;

public class TemplateItemsControl : ItemsControl
{
    static TemplateItemsControl()
    {
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

