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

    public static readonly DependencyProperty ValueProperty =
        DependencyProperty.Register("Value", typeof (double), typeof (ValueEditBox),
                                    new FrameworkPropertyMetadata(default(double), FrameworkPropertyMetadataOptions.BindsTwoWayByDefault, PropertyChangedCallbackStatic));

    public double Value
    {
        get { return (double) GetValue(ValueProperty); }
        set { SetValue(ValueProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty PrecisionProperty =
        DependencyProperty.Register("Precision", typeof(int), typeof(ValueEditBox),
                                    new FrameworkPropertyMetadata(2, FrameworkPropertyMetadataOptions.BindsTwoWayByDefault, PropertyChangedCallbackStatic));

    public int Precision
    {
        get { return (int)GetValue(PrecisionProperty); }
        set { SetValue(PrecisionProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty MinValueProperty =
        DependencyProperty.Register("MinValue", typeof (double), typeof (ValueEditBox),
                                    new PropertyMetadata(double.MinValue));

    public double MinValue
    {
        get { return (double) GetValue(MinValueProperty); }
        set { SetValue(MinValueProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty MaxValueProperty =
        DependencyProperty.Register("MaxValue", typeof (double), typeof (ValueEditBox),
                                    new PropertyMetadata(double.MaxValue));

    public double MaxValue
    {
        get { return (double) GetValue(MaxValueProperty); }
        set { SetValue(MaxValueProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty UnitsProperty =
        DependencyProperty.Register("Units", typeof (ValueUnits), typeof (ValueEditBox),
                                    new PropertyMetadata(default(ValueUnits), PropertyChangedCallbackStatic));

    public ValueUnits Units
    {
        get { return (ValueUnits) GetValue(UnitsProperty); }
        set { SetValue(UnitsProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty EvaluationErrorProperty = 
        DependencyProperty.Register("EvaluationError", typeof (bool), typeof (ValueEditBox), 
                                    new PropertyMetadata(false));

    public bool EvaluationError
    {
        get { return (bool) GetValue(EvaluationErrorProperty); }
        set { SetValue(EvaluationErrorProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty IsHighlightedProperty = 
        DependencyProperty.Register("IsHighlighted", typeof (bool), typeof (ValueEditBox), 
                                    new PropertyMetadata(default(bool)));

    public bool IsHighlighted
    {
        get { return (bool) GetValue(IsHighlightedProperty); }
        set { SetValue(IsHighlightedProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty IncDecButtonsProperty = DependencyProperty.Register(
        "IncDecButtons", typeof(bool), typeof(ValueEditBox), new PropertyMetadata(default(bool)));

    public bool IncDecButtons
    {
        get { return (bool) GetValue(IncDecButtonsProperty); }
        set { SetValue(IncDecButtonsProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty IncDecStepProperty = DependencyProperty.Register(
        "IncDecStep", typeof(double), typeof(ValueEditBox), new PropertyMetadata(1.0));

    public double IncDecStep
    {
        get { return (double) GetValue(IncDecStepProperty); }
        set { SetValue(IncDecStepProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty SourceUpdateThresholdProperty = DependencyProperty.Register(
        "SourceUpdateThreshold", typeof(double), typeof(ValueEditBox), new PropertyMetadata( 1e-10 ));

    public double SourceUpdateThreshold
    {
        get { return (double) GetValue(SourceUpdateThresholdProperty); }
        set { SetValue(SourceUpdateThresholdProperty, value); }
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

    public static RelayCommand<ValueEditBox> DecCommand { get; } = new RelayCommand<ValueEditBox>(
        (box) =>
        {
            box.Value = box.Value - box.IncDecStep; 
            box.SelectAll();
        },
        (box) => (box.Value-box.IncDecStep) >= box.MinValue
    );

    //--------------------------------------------------------------------------------------------------

    public static RelayCommand<ValueEditBox> IncCommand { get; } = new RelayCommand<ValueEditBox>(
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
        DataObject.AddPastingHandler(this, _PastingHandler);
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
        Text = value.ToString("F" + (Precision >= 0 ? Precision : ""), CultureInfo.InvariantCulture);
    }

    //--------------------------------------------------------------------------------------------------

    void _CommitTextChange()
    {
        BindingExpression exp = GetBindingExpression(TextBox.TextProperty);
        exp?.UpdateSource();

        if (BindingHelper.HasBinding(this, ValueProperty))
        {
            double newValue = Value;
            if (Text.StartsWith("="))
            {
                // Evaluate Expression
                double? result = _EvaluateExpression();
                if (!result.HasValue)
                {
                    return;
                }
                if (Math.Abs(newValue - result.Value) > 1e-10)
                    newValue = result.Value;
                else
                    _UpdateText(newValue);
            }
            else
            {
                if (!double.TryParse(Text, NumberStyles.Any, CultureInfo.InvariantCulture, out newValue))
                    return;
            }

            newValue = newValue.Clamp(MinValue, MaxValue);
            if(Math.Abs(Value - newValue) >= SourceUpdateThreshold)
            {
                Value = newValue;
            }
            _UpdateText(Value);
        }
    }

    //--------------------------------------------------------------------------------------------------

    double? _EvaluateExpression()
    {
        if (Text.StartsWith("="))
        {
            // Evaluate Expression
            double? result = Common.Evaluator.Evaluator.EvaluateExpression(Text.Remove(0, 1), out _);
            EvaluationError = !result.HasValue;
            return result;
        }
        EvaluationError = false;
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    void _PastingHandler(object sender, DataObjectPastingEventArgs e)
    {
        if (e.DataObject.GetDataPresent(typeof(String)))
        {
            String text = (String)e.DataObject.GetData(typeof(String));
            if (!_IsTextAllowed(text))
            {
                e.CancelCommand();
            }
        }
        else
        {
            e.CancelCommand();
        }
    }

    //--------------------------------------------------------------------------------------------------

    bool _IsTextAllowed(string text)
    {
        if (Text.StartsWith("=") || ((CaretIndex==0) && text.StartsWith("=")))
            return true;

        Regex regex = new Regex("[0-9.,-]+"); //regex that matches allowed text
        return regex.IsMatch(text);
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
        else if (e.Key is Key.OemPeriod or Key.OemComma or Key.Decimal)
        {
            if (Text.Contains(".") && !IsEvaluating)
            {
                e.Handled = true;
            }
        }
        else if (e.Key is Key.OemMinus or Key.Subtract)
        {
            if ((CaretIndex != 0 && SelectionStart != 0 || Text.Contains("-") && ! SelectedText.Contains("-")) 
                && !IsEvaluating)
            {
                e.Handled = true;
            }
        }

        base.OnKeyDown(e);
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnPreviewTextInput(TextCompositionEventArgs e)
    {
        e.Handled = !_IsTextAllowed(e.Text); 
        base.OnTextInput(e);
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
            
        if (Text == "0")
        {
            clearTextOnValidEntry = true;
        }

        if (e.Key is Key.OemPeriod or Key.OemComma or Key.Decimal)
        {
            if (Text.Contains(".") && !IsEvaluating && !clearTextOnValidEntry)
            {
                return;
            }
        }
        else if (e.Key is Key.OemMinus or Key.Subtract)
        {
            if ((CaretIndex != 0 && SelectionStart != 0 || Text.Contains("-") && SelectedText.Contains("-")) 
                && !IsEvaluating
                && !clearTextOnValidEntry)
            {
                return;
            }
        }

        if (clearTextOnValidEntry || Text == "0")
        {
            SelectAll();
        }

        string keyText = InputHelper.ConvertKeyToText(e);
        if (!_IsTextAllowed((clearTextOnValidEntry ? "" : Text) + keyText))
            return;

        TextCompositionManager.StartComposition(new TextComposition(InputManager.Current, this, keyText));
        e.Handled = true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnTextChanged(TextChangedEventArgs e)
    {
        using (DeclareChangeBlock())
        {
            foreach (var c in e.Changes)
            {
                if (c.AddedLength == 0) continue;
                Select(c.Offset, c.AddedLength);
                if (SelectedText.Contains(","))
                {
                    SelectedText = SelectedText.Replace(',', '.');
                }
                Select(c.Offset + c.AddedLength, 0);
            }
        }

        var text = Text;
        if (text.Length == 0)
        {
            Text = "0";
        }
        else
        {
            if (text[0] == '.')
            {
                Text.Insert(0, "0");
            }
        }

        _EvaluateExpression();

        base.OnTextChanged(e);
    }

    //--------------------------------------------------------------------------------------------------

}