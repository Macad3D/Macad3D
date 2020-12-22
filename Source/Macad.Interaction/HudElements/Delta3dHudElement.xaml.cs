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
    public partial class Delta3DHudElement : HudElement
    {
        public static readonly DependencyProperty DeltaXProperty = DependencyProperty.Register("DeltaX", typeof (double), typeof (Delta3DHudElement), new PropertyMetadata(default(double)));

        public double DeltaX
        {
            get { return (double) GetValue(DeltaXProperty); }
            set { SetValue(DeltaXProperty, value); }
        }

        //--------------------------------------------------------------------------------------------------

        public static readonly DependencyProperty DeltaYProperty = DependencyProperty.Register("DeltaY", typeof (double), typeof (Delta3DHudElement), new PropertyMetadata(default(double)));

        public double DeltaY
        {
            get { return (double) GetValue(DeltaYProperty); }
            set { SetValue(DeltaYProperty, value); }
        }

        //--------------------------------------------------------------------------------------------------

        public static readonly DependencyProperty DeltaZProperty = DependencyProperty.Register("DeltaZ", typeof (double), typeof (Delta3DHudElement), new PropertyMetadata(default(double)));

        public double DeltaZ
        {
            get { return (double) GetValue(DeltaZProperty); }
            set { SetValue(DeltaZProperty, value); }
        }

        //--------------------------------------------------------------------------------------------------
        
        public static readonly DependencyProperty UnitsProperty = DependencyProperty.Register(
            "Units", typeof(ValueUnits), typeof(Delta3DHudElement), new PropertyMetadata(ValueUnits.None));

        public ValueUnits Units
        {
            get { return (ValueUnits)GetValue(UnitsProperty); }
            set { SetValue(UnitsProperty, value); }
        }

        //--------------------------------------------------------------------------------------------------

        protected override void PropertyChangedCallback(DependencyPropertyChangedEventArgs eventArgs)
        {
        }

        public Delta3DHudElement()
        {
            InitializeComponent();
        }
    }
}
