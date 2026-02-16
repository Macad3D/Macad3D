using System;
using System.Globalization;
using System.Text.RegularExpressions;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Input;
using Macad.Common;

namespace Macad.Presentation;

public class ValueEditBox : TextBox
{
    #region Dependency Properties

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty MeasurementProperty =
    DependencyProperty.Register(
        nameof(Measurement),
        typeof(MeasurementDescriptor),
        typeof(ValueEditBox),
        new FrameworkPropertyMetadata(null, PropertyChangedCallbackStatic));

    public MeasurementDescriptor Measurement
    {
        get => (MeasurementDescriptor)GetValue(MeasurementProperty);
        set => SetValue(MeasurementProperty, value);
    }

    //----------------------------------------------------------------------------------------------
    
    public static readonly DependencyProperty ValueProperty =
        DependencyProperty.Register(
            nameof(Value),
            typeof(double),
            typeof(ValueEditBox),
            new FrameworkPropertyMetadata(
                0.0,
                FrameworkPropertyMetadataOptions.BindsTwoWayByDefault,
                PropertyChangedCallbackStatic));

    public double Value
    {
        get => (double)GetValue(ValueProperty);
        set => SetValue(ValueProperty, value);
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty SourceUpdateThresholdProperty =
        DependencyProperty.Register(nameof(SourceUpdateThreshold), typeof(double), typeof(ValueEditBox), new(1e-10));

    public double SourceUpdateThreshold
    {
        get => (double)GetValue(SourceUpdateThresholdProperty);
        set => SetValue(SourceUpdateThresholdProperty, value);
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty MinValueProperty =
        DependencyProperty.Register(nameof(MinValue), typeof (double), typeof (ValueEditBox), new(double.MinValue));

    public double MinValue
    {
        get { return (double) GetValue(MinValueProperty); }
        set { SetValue(MinValueProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty MaxValueProperty =
        DependencyProperty.Register(nameof(MaxValue), typeof (double), typeof (ValueEditBox), new(double.MaxValue));

    public double MaxValue
    {
        get { return (double) GetValue(MaxValueProperty); }
        set { SetValue(MaxValueProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty EvaluationErrorProperty = 
        DependencyProperty.Register(nameof(EvaluationError), typeof (bool), typeof (ValueEditBox), new(false));

    public bool EvaluationError
    {
        get { return (bool) GetValue(EvaluationErrorProperty); }
        set { SetValue(EvaluationErrorProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty IsHighlightedProperty = 
        DependencyProperty.Register(nameof(IsHighlighted), typeof (bool), typeof (ValueEditBox), new(false));

    public bool IsHighlighted
    {
        get { return (bool) GetValue(IsHighlightedProperty); }
        set { SetValue(IsHighlightedProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty IncDecButtonsProperty = 
        DependencyProperty.Register(nameof(IncDecButtons), typeof(bool), typeof(ValueEditBox), new(false));

    public bool IncDecButtons
    {
        get { return (bool) GetValue(IncDecButtonsProperty); }
        set { SetValue(IncDecButtonsProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty IncDecStepProperty = 
        DependencyProperty.Register(nameof(IncDecStep), typeof(double), typeof(ValueEditBox), new(1.0));

    public double IncDecStep
    {
        get { return (double) GetValue(IncDecStepProperty); }
        set { SetValue(IncDecStepProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    static void PropertyChangedCallbackStatic(DependencyObject dependencyObject, DependencyPropertyChangedEventArgs e)
    {
        var instance = dependencyObject as ValueEditBox;
        instance?.PropertyChangedCallback(e);
    }

    void PropertyChangedCallback(DependencyPropertyChangedEventArgs e)
    {
        if (e.Property == ValueProperty)
        {
            _UpdateText((double) e.NewValue);
        }
        else if(e.Property == MeasurementProperty)
        {
            _UpdateText(Value);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsEvaluating
    {
        get
        {
            return Text.StartsWith("=");
        }
    }

    #endregion

    #region Mouse Control

    FrameworkElement _TextBoxElement;
        
    public override void OnApplyTemplate()
    {
        _ClearTemplateBindings();
        base.OnApplyTemplate();
        _TextBoxElement = GetTemplateChild("PART_TextBox") as FrameworkElement;

        if (_TextBoxElement is TextBox inner)
        {
            inner.GotKeyboardFocus += (s, e) => inner.SelectAll();
        }

        if (_TextBoxElement != null)
        {
            _TextBoxElement.PreviewMouseLeftButtonDown += _TextBoxElement_OnPreviewMouseLeftButtonDown;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ClearTemplateBindings()
    {
        if (_TextBoxElement != null)
        {
            _TextBoxElement.PreviewMouseLeftButtonDown -= _TextBoxElement_OnPreviewMouseLeftButtonDown;
            _TextBoxElement = null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _TextBoxElement_OnPreviewMouseLeftButtonDown(object sender, MouseButtonEventArgs e)
    {
        // If text is selected, each mouse click starts new selection
        // only if already focused
        if (IsFocused)
        {
            Select(0, 0);
            base.OnPreviewMouseLeftButtonDown(e);
        }
        else
        {
            // Manually set focus, to skip caret positioning and selection clearing
            Focus();

            var origSource = e.OriginalSource as FrameworkElement;
            if (origSource ==_TextBoxElement || (origSource?.IsDescendantOf(_TextBoxElement) ?? false))
            {
                e.Handled = true;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Commands

    public static RelayCommand<ValueEditBox> DecCommand { get; } = new(
        (box) =>
        {
            box.Value = box.Value - box.IncDecStep; 
            box.SelectAll();
        },
        (box) => (box.Value-box.IncDecStep) >= box.MinValue
    );

    //--------------------------------------------------------------------------------------------------

    public static RelayCommand<ValueEditBox> IncCommand { get; } = new(
        (box) =>
        {
            box.Value = box.Value + box.IncDecStep; 
            box.SelectAll();
        },
        (box) => (box.Value+box.IncDecStep) <= box.MaxValue
    );

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region n'tor

    static ValueEditBox()
    {
        DefaultStyleKeyProperty.OverrideMetadata(typeof(ValueEditBox), new FrameworkPropertyMetadata(typeof(ValueEditBox)));
    }

    //--------------------------------------------------------------------------------------------------

    public ValueEditBox()
    {
        DataObject.AddCopyingHandler(this, (sender, e) => { if (e.IsDragDrop) e.CancelCommand(); });
        Text = "0";
    }

    //--------------------------------------------------------------------------------------------------

    ~ValueEditBox()
    {
        _ClearTemplateBindings();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    void _UpdateText(double value)
    {
        if (Measurement == null || Measurement.UnitSystem == null)
        {
            Text = value.ToString("G", CultureInfo.InvariantCulture);
            return;
        }

        Text = UnitsService.Format(value, Measurement);
    }

    //--------------------------------------------------------------------------------------------------

    void _CommitTextChange()
    {
        BindingExpression exp = GetBindingExpression(TextBox.TextProperty);
        exp?.UpdateSource();

        if (!BindingHelper.HasBinding(this, ValueProperty))
            return;

        double newValue;

        // Unified parsing: expressions, units, architectural, mixed, default-unit
        if (!UnitsService.TryParseExpression(Text, Measurement, out newValue))
        {
            EvaluationError = true;
            return;
        }

        EvaluationError = false;

        // Clamp to allowed range
        newValue = newValue.Clamp(MinValue, MaxValue);

        // Only update source if change exceeds threshold
        if(Math.Abs(Value - newValue) >= SourceUpdateThreshold)
        {
            Value = newValue;
        }

        // Update displayed text using UnitsService.Format
        _UpdateText(Value);
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnGotKeyboardFocus(KeyboardFocusChangedEventArgs e)
    {
        base.OnGotKeyboardFocus(e);
        SelectAll();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnLostFocus(RoutedEventArgs e)
    {
        base.OnLostFocus(e);
        _CommitTextChange();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnKeyDown(KeyEventArgs e)
    {
        if (e.Key == Key.Return)
        {
            _CommitTextChange();

            TraversalRequest tRequest = new TraversalRequest(FocusNavigationDirection.Next);
            UIElement keyboardFocus = Keyboard.FocusedElement as UIElement;

            keyboardFocus?.MoveFocus(tRequest);

            e.Handled = true;
        }

        base.OnKeyDown(e);
    }

    //--------------------------------------------------------------------------------------------------

    public void SimulatedKeyDown(KeyEventArgs e, bool clearTextOnValidEntry)
    {
        if ((e.IsRepeat) || (e.SystemKey != Key.None))
            return;

        if (e.Key == Key.Back)
        {
            if (Text.Length > 0)
                Text = Text.Remove(Text.Length - 1);
            e.Handled = true;
            return;
        }

        if (e.Key == Key.Enter)
        {
            // Enter value
            _CommitTextChange();
            e.Handled = true;
            return;
        }
            
        if (clearTextOnValidEntry)
        {
            Text = "";
        }
        else if (Text == "0")
        {
            SelectAll();
        }

        string keyText = InputHelper.ConvertKeyToText(e);
        if (string.IsNullOrEmpty(keyText))
            return;

        // Directly append the character - tokenizer will validate later
        Text += keyText;

        e.Handled = true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnTextChanged(TextChangedEventArgs e)
    {
        base.OnTextChanged(e);
    }

    //--------------------------------------------------------------------------------------------------

}