using System.Collections.Generic;
using System.Diagnostics;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Presentation;

namespace Macad.Interaction
{
    public partial class MultiValueHudElement : HudElement
    {
        public static readonly DependencyProperty Label1Property = 
            DependencyProperty.Register("Label1", typeof (string), typeof (MultiValueHudElement), new PropertyMetadata(default(string)));

        public string Label1
        {
            get { return (string) GetValue(Label1Property); }
            set { SetValue(Label1Property, value); }
        }

        //--------------------------------------------------------------------------------------------------

        public static readonly DependencyProperty Value1Property = 
            DependencyProperty.Register("Value1", typeof (double), typeof (MultiValueHudElement), new PropertyMetadata(default(double), PropertyChangedStaticCallback));

        public double Value1
        {
            get { return (double) GetValue(Value1Property); }
            set
            {
                IsInKeyboardMode1 = false;
                IsInKeyboardMode2 = false;
                _FirstFromKeyboard = true;
                SetValue(Value1Property, value);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public static readonly DependencyProperty Units1Property = DependencyProperty.Register(
            "Units1", typeof(ValueUnits), typeof(MultiValueHudElement), new PropertyMetadata(ValueUnits.None));

        public ValueUnits Units1
        {
            get { return (ValueUnits)GetValue(Units1Property); }
            set { SetValue(Units1Property, value); }
        }

        //--------------------------------------------------------------------------------------------------

        public static readonly DependencyProperty IsInKeyboardMode1Property = 
            DependencyProperty.Register("IsInKeyboardMode1", typeof (bool), typeof (MultiValueHudElement), new PropertyMetadata(default(bool)));

        public bool IsInKeyboardMode1
        {
            get { return (bool) GetValue(IsInKeyboardMode1Property); }
            set { SetValue(IsInKeyboardMode1Property, value); }
        }

        //--------------------------------------------------------------------------------------------------

        public static readonly DependencyProperty Label2Property =
            DependencyProperty.Register("Label2", typeof(string), typeof(MultiValueHudElement), new PropertyMetadata(default(string)));

        public string Label2
        {
            get { return (string)GetValue(Label2Property); }
            set { SetValue(Label2Property, value); }
        }

        //--------------------------------------------------------------------------------------------------

        public static readonly DependencyProperty Value2Property =
            DependencyProperty.Register("Value2", typeof(double), typeof(MultiValueHudElement), new PropertyMetadata(default(double), PropertyChangedStaticCallback));

        public double Value2
        {
            get { return (double)GetValue(Value2Property); }
            set
            {
                IsInKeyboardMode1 = false;
                IsInKeyboardMode2 = false;
                _FirstFromKeyboard = true;
                SetValue(Value2Property, value);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public static readonly DependencyProperty Units2Property = DependencyProperty.Register(
            "Units2", typeof(ValueUnits), typeof(MultiValueHudElement), new PropertyMetadata(ValueUnits.None));

        public ValueUnits Units2
        {
            get { return (ValueUnits)GetValue(Units2Property); }
            set { SetValue(Units2Property, value); }
        }

        //--------------------------------------------------------------------------------------------------

        public static readonly DependencyProperty IsInKeyboardMode2Property =
            DependencyProperty.Register("IsInKeyboardMode2", typeof(bool), typeof(MultiValueHudElement), new PropertyMetadata(default(bool)));

        public bool IsInKeyboardMode2
        {
            get { return (bool)GetValue(IsInKeyboardMode2Property); }
            set { SetValue(IsInKeyboardMode2Property, value); }
        }

        //--------------------------------------------------------------------------------------------------

        protected override void PropertyChangedCallback(DependencyPropertyChangedEventArgs eventArgs)
        {
            if (eventArgs.Property == Value1Property)
            {
                if (IsInKeyboardMode1)
                {
                    IsInKeyboardMode1 = false;
                    IsInKeyboardMode2 = true;
                    _FirstFromKeyboard = true;
                }
            }
            else if (eventArgs.Property == Value2Property)
            {
                if (IsInKeyboardMode2)
                {
                    IsInKeyboardMode1 = false;
                    IsInKeyboardMode2 = false;
                    _FirstFromKeyboard = true;
                    OnMultiValueEntered(Value1, (double)eventArgs.NewValue);
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        private bool _FirstFromKeyboard = true;

        public override void SimulatedKeyDown(KeyEventArgs eventArgs)
        {
            if (IsInKeyboardMode2)
            {
                ValueEditBox2.SimulatedKeyDown(eventArgs, _FirstFromKeyboard);
                if (eventArgs.Handled)
                    _FirstFromKeyboard = false;
                return;
            }

            ValueEditBox1.SimulatedKeyDown(eventArgs, _FirstFromKeyboard);
            if (eventArgs.Handled)
            {
                IsInKeyboardMode1 = true;
                _FirstFromKeyboard = false;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public delegate void MultiValueEnteredEvent(MultiValueHudElement hudElement, double newValue1, double newValue2);

        public event MultiValueEnteredEvent MultiValueEntered;

        public void OnMultiValueEntered(double newValue1, double newValue2)
        {
            if (MultiValueEntered != null) MultiValueEntered(this, newValue1, newValue2);
        }

        //--------------------------------------------------------------------------------------------------

        public MultiValueHudElement()
        {
            InitializeComponent();
        }
    }
}
