using System.Windows;

namespace Macad.Interaction
{
    public partial class Coord3dHudElement : HudElement
    {
        public static readonly DependencyProperty CoordinateXProperty = 
            DependencyProperty.Register("CoordinateX", typeof (double), typeof (Coord3dHudElement));

        public double CoordinateX
        {
            get { return (double) GetValue(CoordinateXProperty); }
            set { SetValue(CoordinateXProperty, value); }
        }

        public static readonly DependencyProperty CoordinateYProperty = 
            DependencyProperty.Register("CoordinateY", typeof (double), typeof (Coord3dHudElement));

        public double CoordinateY
        {
            get { return (double) GetValue(CoordinateYProperty); }
            set { SetValue(CoordinateYProperty, value); }
        }

        public static readonly DependencyProperty CoordinateZProperty =
            DependencyProperty.Register("CoordinateZ", typeof(double), typeof(Coord3dHudElement));

        public double CoordinateZ
        {
            get { return (double)GetValue(CoordinateZProperty); }
            set { SetValue(CoordinateZProperty, value); }
        }

        protected override void PropertyChangedCallback(DependencyPropertyChangedEventArgs eventArgs)
        {
        }

        public Coord3dHudElement()
        {
            InitializeComponent();
        }
    }
}
