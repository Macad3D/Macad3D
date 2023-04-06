using Macad.Common;
using Macad.Core;
using Macad.Interaction.Visual;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction;

public sealed class RotateLiveAction : LiveAction
{
    #region Properties and Members
    
    public Quantity_Color Color { get; init; } = Colors.Auxillary;

    //--------------------------------------------------------------------------------------------------

    public (double start, double end) VisualLimits
    {
        set
        {
            _VisualLimits = value;
            if (_Circle != null)
            {
                _Circle.Limits = value;
                if (ShowKnob)
                {
                    _Circle.KnobPosition = _VisualLimits.start.Lerp(_VisualLimits.end, 0.5);
                }
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public (double start, double end) VisualSector
    {
        set
        {
            _VisualSector = value;
            if(_Circle != null)
                _Circle.Sector = value;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Ax2 Position
    {
        get { return _Position; }
        set
        {
            if (_Position == value) 
                return;

            _Position = value;
            _Circle?.Set(_Position);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double Radius
    {
        get { return _Radius; }
        set
        {
            if (_Radius == value)
                return;

            _Radius = value;
            if (_Circle != null)
            {
                _Circle.Radius = _Radius;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool NoResize { get; init; }

    //--------------------------------------------------------------------------------------------------

    public enum SectorAutoMode
    {
        None,
        Forward,
        Reverse
    }

    public SectorAutoMode SectorAutoUpdate { get; init; }

    //--------------------------------------------------------------------------------------------------

    public bool ShowAxisHint { get; init; }

    //--------------------------------------------------------------------------------------------------

    public bool ShowKnob { get; init; }

    //--------------------------------------------------------------------------------------------------
    
    public bool ShowHudElement { get; init; }

    //--------------------------------------------------------------------------------------------------

    Circle _Circle;
    double _Radius = 1.0; 
    Ax2 _Position = Ax2.XOY;
    bool _IsMoving;
    double _StartValue;
    double _Delta;
    double _DeltaSum;
    SelectionContext _SelectionContext;
    HintLine _HintLine;
    DeltaHudElement _HudElement;
    Pln _RotationPlane;
    (double start, double end) _VisualLimits;
    (double start, double end) _VisualSector;

    //--------------------------------------------------------------------------------------------------

    

    #endregion

    #region Creation and Activation

    protected override void OnStart()
    {
        if (_Circle != null)
            return;

        Circle.Style style = Circle.Style.None;
        if (NoResize)
            style |= Circle.Style.NoResize;

        _Circle = new Circle(WorkspaceController, style)
        {
            Radius = _Radius,
            IsSelectable = true,
            Color = Color,
            Width = 4.0,
            Limits = _VisualLimits,
            Sector = _VisualSector
        };
        Add(_Circle);
        if (ShowKnob)
        {
            _Circle.KnobPosition = _VisualLimits.start.Lerp(_VisualLimits.end, 0.5);
        }
        _Circle.Set(_Position);

        WorkspaceController.Invalidate();
    }
    
    //--------------------------------------------------------------------------------------------------

    protected override void Cleanup()
    {
        Preview = null;
        Finished = null;
        base.Cleanup();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
                
    #region Events

    public class EventArgs
    {
        public double Delta { get; init; }
        public double DeltaSum { get; init; }
        public double CircleValue { get; init; }
        public MouseEventData MouseEventData { get; init; }
        public double? DeltaSumOverride { get; set; }
    }

    public delegate void EventHandler(RotateLiveAction sender, EventArgs args);
    public event EventHandler Preview;
    public event EventHandler Finished;
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    #region IMouseEventHandler

    double? _ProcessMouseInput(MouseEventData data)
    {
        Pnt resultPnt;
        if (WorkspaceController.ActiveViewport.ScreenToPoint(_RotationPlane, (int)data.ScreenPoint.X, (int)data.ScreenPoint.Y, out resultPnt))
        {
            var planeDelta = ProjLib.Project(_RotationPlane, resultPnt);
            var angle = Dir2d.DX.Angle(new Dir2d(planeDelta.Coord));
            return angle;
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseDown(MouseEventData data)
    {
        if (data.DetectedAisInteractives.Contains(_Circle?.AisObject))
        {
            _RotationPlane = new Pln(new Ax3(_Position.Location, _Position.Direction, _Position.XDirection));
            var value = _ProcessMouseInput(data);
            if (value != null)
            {
                _StartValue = value.Value;
                _DeltaSum = 0;

                _SelectionContext = OpenSelectionContext();

                _Circle.IsSelectable = false;
                _Circle.IsSelected = true;

                if (ShowAxisHint)
                {
                    _HintLine = new HintLine(WorkspaceController, HintStyle.WorkingAxis);
                    _HintLine.Set(_Position.Axis);
                    _HintLine.Color = Color;
                    Add(_HintLine);
                }

                SetCursor(Cursors.Rotate);
                if (ShowHudElement)
                {
                    if (_HudElement == null)
                    {
                        _HudElement = new DeltaHudElement();
                        Add(_HudElement);
                    }
                    if (_HudElement != null)
                    {
                        _HudElement.Units = ValueUnits.Degree;
                        _HudElement.Delta = 0;
                    }
                }

                _IsMoving = true;
            }

            return true;
        }
        return base.OnMouseDown(data);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseMove(MouseEventData data)
    {
        if (_IsMoving && _Circle != null)
        {
            var value = _ProcessMouseInput(data);
            if (value != null)
            {
                double lastDeltaSum = _DeltaSum;
                _DeltaSum = _DeltaSum switch
                {
                    < -0.5 => Maths.NormalizeAngleRad(value.Value - _StartValue, -Maths.DoublePI, 0),
                    >  0.5 => Maths.NormalizeAngleRad(value.Value - _StartValue, 0, Maths.DoublePI),
                    _      => Maths.NormalizeAngleRad(value.Value - _StartValue, -Maths.PI, Maths.PI)
                };
                _Delta = _DeltaSum - lastDeltaSum;

                EventArgs eventArgs = new()
                {
                    Delta = _Delta,
                    DeltaSum = _DeltaSum,
                    CircleValue = value.Value,
                    MouseEventData = data
                };
                Preview?.Invoke(this, eventArgs);

                if (eventArgs.DeltaSumOverride.HasValue)
                {
                    _DeltaSum = eventArgs.DeltaSumOverride.Value;
                }

                switch (SectorAutoUpdate)
                {
                    case SectorAutoMode.Forward:
                        _Circle.Sector = (_StartValue, _StartValue + _DeltaSum);
                        break;
                    case SectorAutoMode.Reverse:
                        _Circle.Sector = (_StartValue, _StartValue - _DeltaSum);
                        break;
                }

                _HintLine?.Set(_Position.Axis);
                _HudElement?.SetValue(_DeltaSum.ToDeg());
            }

            return true;
        }
        return base.OnMouseMove(data);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseUp(MouseEventData data)
    {
        if (_IsMoving)
        {
            _IsMoving = false;

            Remove(_HintLine);
            _HintLine = null;

            _Circle.IsSelected = false;
            _Circle.IsSelectable = true;
            if (SectorAutoUpdate != SectorAutoMode.None)
            {
                _Circle.Sector = (0.0, 0.0);
            }

            CloseSelectionContext(_SelectionContext);

            SetCursor(null);
            Remove(_HudElement);
            _HudElement = null;

            EventArgs eventArgs = new()
            {
                Delta = _Delta,
                MouseEventData = data
            };
            Finished?.Invoke(this, eventArgs);

            data.ForceReDetection = true;
            return true;
        }
        return base.OnMouseUp(data);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}