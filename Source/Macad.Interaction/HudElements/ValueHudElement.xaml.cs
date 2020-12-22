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
    public partial class ValueHudElement : HudElement
    {
        public static readonly DependencyProperty LabelProperty = 
            DependencyProperty.Register("Label", typeof (string), typeof (ValueHudElement), new PropertyMetadata(default(string)));

        public string Label
        {
            get { return (string) GetValue(LabelProperty); }
            set { SetValue(LabelProperty, value); }
        }

        //--------------------------------------------------------------------------------------------------

        public static readonly DependencyProperty ValueProperty = 
            DependencyProperty.Register("Value", typeof (double), typeof (ValueHudElement), new PropertyMetadata(default(double), PropertyChangedStaticCallback));

        public double Value
        {
            get { return (double) GetValue(ValueProperty); }
            set
            {
                IsInKeyboardMode = false;
                SetValue(ValueProperty, value);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public static readonly DependencyProperty UnitsProperty = DependencyProperty.Register(
            "Units", typeof(ValueUnits), typeof(ValueHudElement), new PropertyMetadata(ValueUnits.None));

        public ValueUnits Units
        {
            get { return (ValueUnits)GetValue(UnitsProperty); }
            set { SetValue(UnitsProperty, value); }
        }

        //--------------------------------------------------------------------------------------------------

        public static readonly DependencyProperty IsInKeyboardModeProperty = 
            DependencyProperty.Register("IsInKeyboardMode", typeof (bool), typeof (ValueHudElement), new PropertyMetadata(default(bool)));

        public bool IsInKeyboardMode
        {
            get { return (bool) GetValue(IsInKeyboardModeProperty); }
            set { SetValue(IsInKeyboardModeProperty, value); }
        }

        //--------------------------------------------------------------------------------------------------

        protected override void PropertyChangedCallback(DependencyPropertyChangedEventArgs eventArgs)
        {
            if (eventArgs.Property == ValueProperty)
            {
                if (IsInKeyboardMode)
                {
                    IsInKeyboardMode = false;
                    OnValueEntered((double)eventArgs.NewValue);
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override void SimulatedKeyDown(KeyEventArgs eventArgs)
        {
            ValueEditBox.SimulatedKeyDown(eventArgs, !IsInKeyboardMode);
            if (eventArgs.Handled)
                IsInKeyboardMode = true;
        }

        //--------------------------------------------------------------------------------------------------

        public delegate void ValueEnteredEvent(ValueHudElement hudElement, double newValue);

        public event ValueEnteredEvent ValueEntered;

        public void OnValueEntered(double newValue)
        {
            if (ValueEntered != null) ValueEntered(this, newValue);
        }

        //--------------------------------------------------------------------------------------------------

        public ValueHudElement()
        {
            InitializeComponent();
        }
    }
}
