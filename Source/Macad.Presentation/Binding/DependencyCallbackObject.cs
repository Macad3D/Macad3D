using System.Windows;

namespace Macad.Presentation;

public abstract class DependencyCallbackObject : DependencyObject
{
    protected static void PropertyChangedStaticCallback(DependencyObject dependencyObject, DependencyPropertyChangedEventArgs eventArgs)
    {
        var instance = dependencyObject as DependencyCallbackObject;
        if (instance != null)
        {
            instance.PropertyChangedCallback(eventArgs);
        }
    }

    public abstract void PropertyChangedCallback(DependencyPropertyChangedEventArgs eventArgs);
}