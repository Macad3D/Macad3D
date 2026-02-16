using Macad.Common;
using System;
using System.Globalization;
using System.Windows;
using System.Windows.Controls;

namespace Macad.Presentation
{
    public class MeasurementTextBlock : TextBlock
    {
        //----------------------------------------------------------------------------------------------
        // Value
        public static readonly DependencyProperty ValueProperty =
            DependencyProperty.Register(
                nameof(Value),
                typeof(double),
                typeof(MeasurementTextBlock),
                new PropertyMetadata(0.0, OnMeasurementChanged));

        public double Value
        {
            get => (double)GetValue(ValueProperty);
            set => SetValue(ValueProperty, value);
        }

        //----------------------------------------------------------------------------------------------
        // TextValue
        public static readonly DependencyProperty TextValueProperty =
            DependencyProperty.Register(
                nameof(TextValue),
                typeof(string),
                typeof(MeasurementTextBlock),
                new PropertyMetadata(string.Empty, OnMeasurementChanged));

        public string TextValue
        {
            get => (string)GetValue(TextValueProperty);
            set => SetValue(TextValueProperty, value);
        }

        //----------------------------------------------------------------------------------------------
        // MeasurementDescriptor (single source of truth)
        public static readonly DependencyProperty MeasurementProperty =
            DependencyProperty.Register(
                nameof(Measurement),
                typeof(MeasurementDescriptor),
                typeof(MeasurementTextBlock),
                new PropertyMetadata(null, OnMeasurementChanged));

        public MeasurementDescriptor Measurement
        {
            get => (MeasurementDescriptor)GetValue(MeasurementProperty);
            set => SetValue(MeasurementProperty, value);
        }

        //----------------------------------------------------------------------------------------------
        // Label
        public static readonly DependencyProperty PrefixProperty =
            DependencyProperty.Register(
                nameof(Prefix),
                typeof(string),
                typeof(MeasurementTextBlock),
                new PropertyMetadata("", OnMeasurementChanged));

        public string Prefix
        {
            get => (string)GetValue(PrefixProperty);
            set => SetValue(PrefixProperty, value);
        }

        //----------------------------------------------------------------------------------------------
        // Label
        public static readonly DependencyProperty LabelProperty =
            DependencyProperty.Register(
                nameof(Label),
                typeof(string),
                typeof(MeasurementTextBlock),
                new PropertyMetadata("", OnMeasurementChanged));

        public string Label
        {
            get => (string)GetValue(LabelProperty);
            set => SetValue(LabelProperty, value);
        }

        //----------------------------------------------------------------------------------------------
        static void OnMeasurementChanged(DependencyObject d, DependencyPropertyChangedEventArgs e)
        {
            ((MeasurementTextBlock)d).UpdateText();
        }

        //----------------------------------------------------------------------------------------------
        void UpdateText()
        {
            if (!string.IsNullOrEmpty(TextValue))
            {
                Text = string.IsNullOrEmpty(Label) ? TextValue : $"{Label} {TextValue}";
                return;
            }

            if (Measurement != null)
            {
                Text = UnitsService.Format(Value, Measurement, Label);
            }
            else
            {
                Text = Label is null
                    ? Value.ToString("G", CultureInfo.InvariantCulture)
                    : $"{Label} {Value.ToString("G", CultureInfo.InvariantCulture)}";
            }
        }
    }
}
