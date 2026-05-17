using System.ComponentModel;
using System.Windows;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;

namespace Macad.Interaction.Panels;

public partial class ViewportGridInfo : PanelBase
{
    static double[] _Steps = new[] { 0.1, 0.2, 0.25, 0.5 };

    //--------------------------------------------------------------------------------------------------

    public bool Visible
    {
        get { return field; }
        private set
        {
            field = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double LineWidth
    {
        get { return field; }
        private set
        {
            field = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool SecondStep
    {
        get { return field; }
        private set
        {
            field = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    WorkspaceController _WorkspaceController;
    ViewportController _ViewportController;
    double _AvailableWidth = 200;

    //--------------------------------------------------------------------------------------------------

    public ViewportGridInfo()
    {
        InteractiveContext.Current.PropertyChanged += _Context_PropertyChanged;
        _Context_PropertyChanged(InteractiveContext.Current, new(nameof(InteractiveContext.ViewportController)));

        InteractiveContext.Current.ActiveViewportChanged += _Current_ActiveViewportChanged;
        _Current_ActiveViewportChanged(InteractiveContext.Current, new());


        DataContext = this;
        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    void _Context_PropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(InteractiveContext.WorkspaceController))
        {
            if (_WorkspaceController != null)
            {
                _WorkspaceController.PropertyChanged -= _WorkspaceController_PropertyChanged;
                _WorkspaceController.Workspace.PropertyChanged -= _Workspace_PropertyChanged;
            }
            _WorkspaceController = InteractiveContext.Current.WorkspaceController;
            if (_WorkspaceController != null)
            {
                _WorkspaceController.PropertyChanged += _WorkspaceController_PropertyChanged;
                _WorkspaceController.Workspace.PropertyChanged += _Workspace_PropertyChanged;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _WorkspaceController_PropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        if (e.PropertyName is nameof(WorkspaceController.VisualGridMultiplier))
        {
            _UpdateValues();
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

    void _Current_ActiveViewportChanged(InteractiveContext sender, InteractiveContext.ActiveViewportChangedEventArgs _)
    {
        _ViewportController?.PropertyChanged -= _ViewportController_PropertyChanged;
        _ViewportController = sender.ViewportController;
        if (_ViewportController != null)
        {
            _ViewportController.PropertyChanged += _ViewportController_PropertyChanged;
            _ViewportController_PropertyChanged(_ViewportController, new(nameof(ViewportController.PixelSize)));
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ViewportController_PropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(ViewportController.PixelSize))
        {
            _UpdateValues();
        }
    }

    //--------------------------------------------------------------------------------------------------

    double _CalcLineWidth(double viewportWidth)
    {
        if(_ViewportController == null)
            return 1;

        return viewportWidth / _ViewportController.PixelSize / _ViewportController.DpiScale;
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateValues()
    {
        Visible = _WorkspaceController?.Workspace?.GridEnabled ?? false;
        if (Visible)
        {
            LineWidth = _CalcLineWidth(_WorkspaceController.Workspace.GridStep * _WorkspaceController.VisualGridMultiplier);
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
        double current = _WorkspaceController.Workspace.GridStep;
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

        _WorkspaceController.Workspace.GridStep = newGridStep;
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