using System.Windows;

namespace Macad.Presentation;

public class Help : DependencyObject
{
    public static readonly DependencyProperty TopicIdProperty = DependencyProperty.RegisterAttached(
        "TopicId", typeof(string), typeof(Help), new PropertyMetadata(default(string)));

    public string TopicId
    {
        get { return (string) GetValue(TopicIdProperty); }
        set { SetValue(TopicIdProperty, value); }
    }

    public static string GetTopicId(DependencyObject d)
    {
        return (string)d.GetValue(TopicIdProperty);
    }

    public static void SetTopicId(DependencyObject d, string value)
    {
        d.SetValue(TopicIdProperty, value);
    }
}