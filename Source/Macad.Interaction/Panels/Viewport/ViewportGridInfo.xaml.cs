using System.ComponentModel;
using System.Linq;
using System.Windows;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;

namespace Macad.Interaction.Panels
{
    public partial class ViewportGridInfo : PanelBase
    {
        static double[] _Steps = new[] { 0.1, 0.2, 0.25, 0.5 };

        //--------------------------------------------------------------------------------------------------

        public bool Visible
        {
            get { return _Visible; }
            private set
            {
                _Visible = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public double LineWidth
        {
            get { return _LineWidth; }
            private set
            {
                _LineWidth = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public bool SecondStep
        {
            get { return _SecondStep; }
            private set
            {
                _SecondStep = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        Viewport _Viewport;
        bool _Visible;
        double _LineWidth;
        bool _SecondStep;
        double _AvailableWidth = 200;

        //--------------------------------------------------------------------------------------------------

        public ViewportGridInfo()
        {
            InteractiveContext.Current.PropertyChanged += _Context_PropertyChanged;
            _Context_PropertyChanged(InteractiveContext.Current, new PropertyChangedEventArgs(nameof(InteractiveContext.Viewport)));

            DataContext = this;
            InitializeComponent();
        }

        //--------------------------------------------------------------------------------------------------
        
        void _Context_PropertyChanged(object sender, PropertyChangedEventArgs e)
        {
            if (e.PropertyName == nameof(InteractiveContext.Viewport))
            {
                if (_Viewport != null)
                {
                    _Viewport.Workspace.PropertyChanged -= _Workspace_PropertyChanged;
                    _Viewport.PropertyChanged -= _Viewport_PropertyChanged;
                }
                _Viewport = InteractiveContext.Current.Viewport;
                if (_Viewport != null)
                {
                    _Viewport.PropertyChanged += _Viewport_PropertyChanged;
                    _Viewport.Workspace.PropertyChanged += _Workspace_PropertyChanged;
                }

                _Viewport_PropertyChanged(_Viewport, new PropertyChangedEventArgs(nameof(Viewport.PixelSize)));
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _Workspace_PropertyChanged(object sender, PropertyChangedEventArgs e)
        {
            if (e.PropertyName is nameof(Workspace.GridStep) 
                or nameof(Workspace.GridEnabled))
            {
                _UpdateValues();
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _Viewport_PropertyChanged(object sender, PropertyChangedEventArgs e)
        {
            if (e.PropertyName == nameof(Viewport.PixelSize))
            {
                _UpdateValues();
            }
        }

        //--------------------------------------------------------------------------------------------------

        double _CalcLineWidth(double viewportWidth)
        {
            return viewportWidth / _Viewport.PixelSize / _Viewport.DpiScale;
        }

        //--------------------------------------------------------------------------------------------------

        void _UpdateValues()
        {
            Visible = _Viewport?.Workspace?.GridEnabled ?? false;
            if (Visible)
            {
                LineWidth = _CalcLineWidth( _Viewport.Workspace.GridStep );
            }

            if (LineWidth > _AvailableWidth * 0.5)
            {
                Visible = false;
            }

            SecondStep = LineWidth < 30;
        }

        //--------------------------------------------------------------------------------------------------

        void _UpdateGridStep(int sign)
        {
            // Recalculate grid step
            double current = _Viewport.Workspace.GridStep;
            double mult = 1.0;
            while (current >= 1.0)
            {
                current *= 0.1;
                mult *= 10.0;
            }
            while (current < 0.1)
            {
                current *= 10.0;
                mult *= 0.1;
            }

            int stepIndex = _Steps.IndexOfFirst(step => step >= current);

            stepIndex += sign;
            if (stepIndex < 0)
            {
                stepIndex = _Steps.Length - 1;
                mult *= 0.1;
            }
            else if (stepIndex >= _Steps.Length)
            {
                stepIndex = 0;
                mult *= 10.0;
            }

            if (mult > 1000.0 || mult < 0.0001)
                return;

            double newGridStep = _Steps[stepIndex] * mult;
            var lineWidth = _CalcLineWidth( newGridStep );
            if (lineWidth > _AvailableWidth * 0.5)
            {
                return;
            }

            _Viewport.Workspace.GridStep = newGridStep;
        }

        //--------------------------------------------------------------------------------------------------

        protected override Size MeasureOverride(Size availableSize)
        {
            _AvailableWidth = availableSize.Width;
            return base.MeasureOverride(availableSize);
        }

        //--------------------------------------------------------------------------------------------------

        protected override void OnMouseWheel(MouseWheelEventArgs e)
        {
            if (!Visible)
            {
                base.OnMouseWheel(e);
            }

            _UpdateGridStep(e.Delta > 0 ? 1 : -1);

            e.Handled = true;
            base.OnMouseWheel(e);
        }
    }
}
