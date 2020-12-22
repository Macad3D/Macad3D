using System.Collections.Generic;
using System.Diagnostics;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;
using Macad.Core;
using Macad.Core.Shapes;

namespace Macad.Interaction
{
    public partial class Coord2DHudElement : HudElement
    {
        public static readonly DependencyProperty CoordinateXProperty = 
            DependencyProperty.Register("CoordinateX", typeof (double), typeof (Coord2DHudElement));

        public double CoordinateX
        {
            get { return (double) GetValue(CoordinateXProperty); }
            set { SetValue(CoordinateXProperty, value); }
        }

        //--------------------------------------------------------------------------------------------------

        public static readonly DependencyProperty CoordinateYProperty = 
            DependencyProperty.Register("CoordinateY", typeof (double), typeof (Coord2DHudElement));

        public double CoordinateY
        {
            get { return (double) GetValue(CoordinateYProperty); }
            set { SetValue(CoordinateYProperty, value); }
        }

        //--------------------------------------------------------------------------------------------------

        protected override void PropertyChangedCallback(DependencyPropertyChangedEventArgs eventArgs)
        {
        }

        //--------------------------------------------------------------------------------------------------

        public Coord2DHudElement()
        {
            InitializeComponent();
        }

        //--------------------------------------------------------------------------------------------------

        public void SetValues(double coordX, double coordY)
        {
            CoordinateX = coordX;
            CoordinateY = coordY;
        }
    }
}
