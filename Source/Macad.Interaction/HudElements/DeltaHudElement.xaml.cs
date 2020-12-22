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
    public partial class DeltaHudElement : HudElement
    {
        public static readonly DependencyProperty DeltaProperty = DependencyProperty.Register(
            "Delta", typeof (double), typeof (DeltaHudElement), new PropertyMetadata(default(double)));

        public double Delta
        {
            get { return (double) GetValue(DeltaProperty); }
            set { SetValue(DeltaProperty, value); }
        }

        //--------------------------------------------------------------------------------------------------

        public static readonly DependencyProperty UnitsProperty = DependencyProperty.Register(
            "Units", typeof(ValueUnits), typeof(DeltaHudElement), new PropertyMetadata(ValueUnits.None));

        public ValueUnits Units
        {
            get { return (ValueUnits) GetValue(UnitsProperty); }
            set { SetValue(UnitsProperty, value); }
        }

        //--------------------------------------------------------------------------------------------------

        protected override void PropertyChangedCallback(DependencyPropertyChangedEventArgs eventArgs)
        {
        }

        //--------------------------------------------------------------------------------------------------

        public DeltaHudElement()
        {
            InitializeComponent();
        }

        //--------------------------------------------------------------------------------------------------

    }
}
