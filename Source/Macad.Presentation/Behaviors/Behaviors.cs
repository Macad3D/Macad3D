using System;
using System.Diagnostics;
using System.Windows;

namespace Macad.Presentation;

public abstract class Behavior : Freezable
{
    internal abstract void Attach(DependencyObject target);
    internal abstract void Detach();

    // All that's needed to make this Freezable
    protected override Freezable CreateInstanceCore()
    {
        return Activator.CreateInstance(GetType()) as Freezable;
    }
}


public abstract class Behavior<T> : Behavior where T : DependencyObject
{
    public WeakReference<T> TargetReference { get; private set; }

    public abstract void OnAttached(T target);

    public abstract void OnDetached(T target);

    internal override void Attach(DependencyObject target)
    {
        if (TargetReference != null) return;
        if (!(target is T))
        {
            Debug.WriteLine("Behavior expected type {0}, but got type {1}.", typeof(T), target.GetType());
            return;
        }

        TargetReference = new WeakReference<T>((T) target);
        OnAttached((T) target);
    }

    internal override void Detach()
    {
        if (TargetReference != null)
        {
            T target;
            if (TargetReference.TryGetTarget(out target))
            {
                OnDetached(target);
            }
            TargetReference = null;
        }
    }
}

public class BehaviorCollection : FreezableCollection<Behavior>
{
    private readonly WeakReference<DependencyObject> _TargetReference;

    public BehaviorCollection(DependencyObject target)
    {
        _TargetReference = new WeakReference<DependencyObject>(target);
    }

    protected override void OnChanged()
    {
        DependencyObject target;
        if (_TargetReference.TryGetTarget(out target))
        {
            foreach (var item in this)
            {
                item.Attach(target);
            }
        }
        base.OnChanged();
    }
}

    
public class Behaviors : FrameworkElement
{
    #region Single Behavior

    public readonly static DependencyProperty BehaviorProperty = DependencyProperty.RegisterAttached("BehaviorInternal", typeof(Behavior), typeof(Behaviors), new UIPropertyMetadata(null));

    public static Behavior GetBehavior(FrameworkElement element)
    {
        return (Behavior)element.GetValue(BehaviorProperty);
    }

    public static void SetBehavior(FrameworkElement element, object value)
    {
        var behavior = value as Behavior;
        if (behavior != null)
        {
            behavior.Attach(element);
        }
        element.SetValue(BehaviorProperty, value);
    }

    #endregion

    #region Multiple Behaviors

    public readonly static DependencyProperty BehaviorsProperty = DependencyProperty.RegisterAttached("BehaviorsInternal", typeof(BehaviorCollection), typeof(Behaviors), new UIPropertyMetadata(null));

    public static BehaviorCollection GetBehaviors(FrameworkElement element)
    {
        var value = (BehaviorCollection)element.GetValue(BehaviorsProperty);
        if (value == null)
        {
            value = new BehaviorCollection(element);
            element.SetValue(BehaviorsProperty, value);
        }
        return value;
    }

    #endregion

}