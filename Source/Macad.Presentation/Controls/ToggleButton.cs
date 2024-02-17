using System;
using System.Collections.Generic;
using System.Linq;
using System.Windows;
using System.Windows.Automation;
using System.Windows.Automation.Peers;
using System.Windows.Automation.Provider;

namespace Macad.Presentation;

public class ToggleButton : System.Windows.Controls.Primitives.ButtonBase
{
    #region Dependency Properties

    public static readonly DependencyProperty GroupNameProperty =
        DependencyProperty.Register("GroupName", typeof (string), typeof (ToggleButton), new PropertyMetadata(null, OnGroupNameChanged));

    public string GroupName
    {
        get { return (string) GetValue(GroupNameProperty); }
        set { SetValue(GroupNameProperty, value); }
    }

    public static readonly DependencyProperty IsCheckedProperty = 
        DependencyProperty.Register("IsChecked", typeof (bool), typeof (ToggleButton),
                                    new FrameworkPropertyMetadata(OnIsCheckedChanged, CoerceIsChecked));

    public bool IsChecked
    {
        get { return (bool) GetValue(IsCheckedProperty); }
        set { SetValue(IsCheckedProperty, value); }
    }

    #endregion


    // Grouped buttons
    private static readonly Dictionary<string, List<WeakReference>> GroupedButtons = new Dictionary<string, List<WeakReference>>();

    //--------------------------------------------------------------------------------------------------

    static ToggleButton()
    {
        DefaultStyleKeyProperty.OverrideMetadata(typeof(ToggleButton), new FrameworkPropertyMetadata(typeof(ToggleButton)));
    }

    //--------------------------------------------------------------------------------------------------

    #region Groups

    public static void OnIsCheckedChanged(DependencyObject d, DependencyPropertyChangedEventArgs e)
    {
        var newValue = (bool) e.NewValue;
        var button = (ToggleButton) d;

        // Uncheck other toggle buttons
        if (!newValue || button.GroupName == null)
        {
            return;
        }

        var buttons = GetButtonsInGroup(button.GroupName);

        foreach (var item in buttons.Where(item => item != button))
        {
            item.IsChecked = false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static void OnGroupNameChanged(DependencyObject d, DependencyPropertyChangedEventArgs e)
    {
        var toggleButton = (ToggleButton) d;
        var currentGroupName = (string) e.NewValue;
        var previousGroupName = (string) e.OldValue;

        if (previousGroupName != null)
        {
            RemoveFromGroup(previousGroupName, toggleButton);
        }

        if (currentGroupName != null)
        {
            AddToGroup(currentGroupName, toggleButton);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static object CoerceIsChecked(DependencyObject d, object basevalue)
    {
        var toggleButton = (ToggleButton) d;

        // If the button does not belong to any group
        // or the button/control is not loaded
        // we don't have to do any checks and can directly return the requested basevalue
        if (toggleButton.GroupName == null || toggleButton.IsLoaded == false)
        {
            return basevalue;
        }

        var baseIsChecked = (bool) basevalue;

        if (!baseIsChecked)
        {
            var buttons = GetButtonsInGroup(toggleButton.GroupName);

            // We can not allow that there are no one button checked
            foreach (var item in buttons)
            {
                // It's Ok, atleast one checked button exists
                // and it's not the current button
                if (item != toggleButton && item.IsChecked == true)
                {
                    return false;
                }
            }

            // This button can not be unchecked
            return true;
        }

        return basevalue;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Remove from group
    /// </summary>
    private static void RemoveFromGroup(string groupName, ToggleButton toggleButton)
    {
        List<WeakReference> buttons;

        if (!GroupedButtons.TryGetValue(groupName, out buttons))
        {
            return;
        }

        buttons.RemoveAt(buttons.FindIndex(x => (x.IsAlive && ((ToggleButton) x.Target) == toggleButton)));
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Add to group
    /// </summary>
    private static void AddToGroup(string groupName, ToggleButton toggleButton)
    {
        List<WeakReference> buttons;

        if (!GroupedButtons.TryGetValue(groupName, out buttons))
        {
            buttons = new List<WeakReference>();
            GroupedButtons.Add(groupName, buttons);
        }

        buttons.Add(new WeakReference(toggleButton));
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Gets all buttons in the given group
    /// </summary>
    private static IEnumerable<ToggleButton> GetButtonsInGroup(string groupName)
    {
        List<WeakReference> buttons;

        if (!GroupedButtons.TryGetValue(groupName, out buttons))
        {
            return new List<ToggleButton>();
        }

        return buttons.Where(x => x.IsAlive).Select(x => (ToggleButton) x.Target).ToList();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region overrides

    protected override void OnClick()
    {
        RaiseEvent(new RoutedEventArgs(ClickEvent, this));
        if (Command != null && Command.CanExecute(CommandParameter))
            Command.Execute(CommandParameter);
    }

    //--------------------------------------------------------------------------------------------------

    protected override AutomationPeer OnCreateAutomationPeer()
    {
        return new ToggleButtonAutomationPeer(this);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

// Derived from referencesource.microsoft.com

public sealed class ToggleButtonAutomationPeer : ButtonBaseAutomationPeer, IToggleProvider
{
    ///
    public ToggleButtonAutomationPeer(ToggleButton owner): base(owner)
    {}
    
    ///
    override protected string GetClassNameCore()
    {
        return "Button";
    }
 
    ///
    override protected AutomationControlType GetAutomationControlTypeCore()
    {
        return AutomationControlType.Button;
    }
 
    /// 
    override public object GetPattern(PatternInterface patternInterface)
    {
        if (patternInterface == PatternInterface.Toggle)
        {
            return this;
        }
        else
        {
            return base.GetPattern(patternInterface);
        }
    }
        
    void IToggleProvider.Toggle()
    {
        if(!IsEnabled())
            throw new ElementNotEnabledException();
 
        ToggleButton owner = (ToggleButton)Owner;
        owner.IsChecked = !owner.IsChecked;
    }
 
    ToggleState IToggleProvider.ToggleState
    {
        get 
        { 
            ToggleButton owner = (ToggleButton)Owner;
            return ConvertToToggleState(owner.IsChecked); 
        }
    }
 
    // 
    [System.Runtime.CompilerServices.MethodImpl(System.Runtime.CompilerServices.MethodImplOptions.NoInlining)]
    internal void RaiseToggleStatePropertyChangedEvent(bool? oldValue, bool? newValue)
    {
        if (oldValue != newValue)
        {
            RaisePropertyChangedEvent(TogglePatternIdentifiers.ToggleStateProperty, ConvertToToggleState(oldValue), ConvertToToggleState(newValue));
        }
    }
 
    private static ToggleState ConvertToToggleState(bool? value)
    {
        switch (value)
        {
            case (true):  return ToggleState.On;
            case (false): return ToggleState.Off;
            default:      return ToggleState.Indeterminate;
        }
    }
}