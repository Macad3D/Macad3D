using System.ComponentModel;
using System.Threading;
using System.Windows;
using System.Windows.Media;
using System.Windows.Threading;

namespace Macad.Presentation;

public static class PresentationHelper
{
    private static bool? _IsInDesignMode;

    public static bool IsInDesignMode
    {
        get
        {
            if (!_IsInDesignMode.HasValue)
            {
                var prop = DesignerProperties.IsInDesignModeProperty;
                _IsInDesignMode
                    = (bool)DependencyPropertyDescriptor
                            .FromProperty(prop, typeof(FrameworkElement))
                            .Metadata.DefaultValue;
            }

            return _IsInDesignMode.Value;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly double DoubleZero = 0D;

    //--------------------------------------------------------------------------------------------------

    public static T FindVisualParent<T>(DependencyObject child) where T : DependencyObject
    {
        //get parent item
        DependencyObject parentObject = VisualTreeHelper.GetParent(child);

        //we've reached the end of the tree
        if (parentObject == null) return null;

        //check if the parent matches the type we're looking for
        T parent = parentObject as T;
        if (parent != null)
            return parent;
        else
            return FindVisualParent<T>(parentObject);
    }

    //--------------------------------------------------------------------------------------------------

    public static T FindLogicalParent<T>(DependencyObject child) where T : DependencyObject
    {
        //get parent item
        DependencyObject parentObject = LogicalTreeHelper.GetParent(child);

        //we've reached the end of the tree
        if (parentObject == null) return null;

        //check if the parent matches the type we're looking for
        T parent = parentObject as T;
        if (parent != null)
            return parent;
        else
            return FindLogicalParent<T>(parentObject);
    }

    //--------------------------------------------------------------------------------------------------
    public static void ForceFocus(FrameworkElement element)
    {
        // System.Diagnostics.Debug.WriteLine("Focus core: " + element.DataContext);
        if (!element.Focus())
        {
            element.Dispatcher.BeginInvoke(DispatcherPriority.Input, new ThreadStart(() => element.Focus()));
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static T FindVisualChild<T>(DependencyObject visual) where T: DependencyObject
    {
        for (int i = 0; i < VisualTreeHelper.GetChildrenCount(visual); i++) 
        { 
            var child = VisualTreeHelper.GetChild(visual, i); 
            T correctlyTyped = child as T; 
            if (correctlyTyped != null) 
            { 
                return correctlyTyped; 
            } 

            T descendent = FindVisualChild<T>(child); 
            if (descendent != null) 
            { 
                return descendent; 
            } 
        } 
 
        return null; 
    }

    //--------------------------------------------------------------------------------------------------

}