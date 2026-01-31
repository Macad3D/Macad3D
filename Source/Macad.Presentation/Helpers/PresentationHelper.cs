using System.ComponentModel;
using System.Threading;
using System.Windows;
using System.Windows.Media;
using System.Windows.Threading;

namespace Macad.Presentation;

/// <summary>
/// Provides helper methods for common WPF presentation tasks.
/// </summary>
public static class PresentationHelper
{
    static bool? _IsInDesignMode;

    /// <summary>
    /// Gets a cached value that indicates whether the current process is running in a design-time
    /// environment (for example Visual Studio or Blend).
    /// </summary>
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

    /// <summary>
    /// Finds the first ancestor of the specified type in the visual tree.
    /// This method walks up the visual tree recursively until it finds an ancestor of type <typeparamref name="T"/>
    /// or reaches the root.
    /// </summary>
    /// <typeparam name="T">Type of ancestor to locate. Must derive from <see cref="DependencyObject"/>.</typeparam>
    /// <param name="child">The starting element within the visual tree.</param>
    /// <returns>
    /// The first ancestor of type <typeparamref name="T"/>, or <c>null</c> if no matching ancestor is found.
    /// </returns>
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

    /// <summary>
    /// Finds the first ancestor of the specified type in the logical tree.
    /// This method walks up the logical tree recursively until it finds an ancestor of type <typeparamref name="T"/>
    /// or reaches the root.
    /// </summary>
    /// <typeparam name="T">Type of ancestor to locate. Must derive from <see cref="DependencyObject"/>.</typeparam>
    /// <param name="child">The starting element within the logical tree.</param>
    /// <returns>
    /// The first ancestor of type <typeparamref name="T"/>, or <c>null</c> if no matching ancestor is found.
    /// </returns>
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

    /// <summary>
    /// Attempts to give keyboard focus to the specified <see cref="FrameworkElement"/>. If the immediate
    /// call to <see cref="UIElement.Focus"/> fails, a focus attempt is scheduled on the element's
    /// dispatcher.
    /// </summary>
    /// <param name="element">The element to receive focus.</param>
    public static void ForceFocus(FrameworkElement element)
    {
        // System.Diagnostics.Debug.WriteLine("Focus core: " + element.DataContext);
        if (!element.Focus())
        {
            element.Dispatcher.BeginInvoke(DispatcherPriority.Input, new ThreadStart(() => element.Focus()));
        }
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Recursively searches the visual subtree of the given <paramref name="visual"/> for the first child
    /// of type <typeparamref name="T"/> and returns it.
    /// </summary>
    /// <typeparam name="T">Type of visual child to find. Must derive from <see cref="DependencyObject"/>.</typeparam>
    /// <param name="visual">The root visual to search under.</param>
    /// <returns>The first matching child of type <typeparamref name="T"/>, or <c>null</c> if none found.</returns>
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

    /// <summary>
    /// Recursively searches the visual subtree of the given <paramref name="visual"/> for the first child
    /// of type <typeparamref name="T"/> that has a matching <see cref="FrameworkElement.Name"/>.
    /// </summary>
    /// <typeparam name="T">Type of visual child to find. Must derive from <see cref="FrameworkElement"/>.</typeparam>
    /// <param name="visual">The root visual to search under.</param>
    /// <param name="name">The <see cref="FrameworkElement.Name"/> to match.</param>
    /// <returns>The first matching child of type <typeparamref name="T"/> with the specified name, or <c>null</c> if none found.</returns>
    public static T FindVisualChild<T>(DependencyObject visual, string name) where T : FrameworkElement
    {
        for (int i = 0; i < VisualTreeHelper.GetChildrenCount(visual); i++)
        {
            var child = VisualTreeHelper.GetChild(visual, i);
            if (child is T element && element.Name == name)
            {
                return element;
            }

            T descendent = FindVisualChild<T>(child, name);
            if (descendent != null)
            {
                return descendent;
            }
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

}