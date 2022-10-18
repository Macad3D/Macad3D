using Macad.Common;
using Macad.Core;
using Macad.Interaction.Visual;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction;

public class RotateLiveAction : LiveAction
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
            Delta = 0;
            if (_Position == value) 
                return;

            _Position = value;
            _Circle?.Set(_Position);
            _RotationPlane = new Pln(new Ax3(_Position.Location, _Position.Direction, _Position.XDirection));
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double Radius
    {
        get { return _Radius; }
        set { _Radius = value; }
    }

    //--------------------------------------------------------------------------------------------------

    public double Delta { get; set; }
    
    //--------------------------------------------------------------------------------------------------

    public bool NoResize { get; init; }

    //--------------------------------------------------------------------------------------------------

    public bool SectorAutoUpdate { get; init; }

    //--------------------------------------------------------------------------------------------------

    public bool ShowAxisHint { get; init; }

    //--------------------------------------------------------------------------------------------------

    public bool ShowKnob { get; init; }

    //--------------------------------------------------------------------------------------------------
    
    public bool ShowHudElement { get; init; }

    //--------------------------------------------------------------------------------------------------

    Circle _Circle;
    double _Radius;
    Ax2 _Position;
    Ax2 _StartPosition;
    bool _IsMoving;
    double _StartValue;
    SelectionContext _SelectionContext;
    HintLine _HintLine;
    DeltaHudElement _HudElement;
    Pln _RotationPlane;
    (double start, double end) _VisualLimits;
    (double start, double end) _VisualSector;

    //--------------------------------------------------------------------------------------------------

    

    #endregion

    #region Creation and Activation

    public RotateLiveAction(object owner) 
        : base(owner)
    {
        Delta = 0;
        _Radius = 0;
    }

    //--------------------------------------------------------------------------------------------------

    public override void Activate()
    {
        if (_Circle != null)
            return;

        Circle.Style style = _Radius==0 ? Circle.Style.NoResize : Circle.Style.None;
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
        if (ShowKnob)
        {
            _Circle.KnobPosition = _VisualLimits.start.Lerp(_VisualLimits.end, 0.5);
        }
        _Circle.Set(_Position);

        WorkspaceController.Invalidate();
    }
    
    //--------------------------------------------------------------------------------------------------

    public override void Deactivate()
    {
        _Circle?.Remove();
        _Circle = null;

        WorkspaceController.Invalidate();
    }

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
            var value = _ProcessMouseInput(data);
            if (value != null)
            {
                _StartPosition = _Position;
                _StartValue = value.Value;

                _SelectionContext = WorkspaceController.Selection.OpenContext();

                _Circle.IsSelectable = false;
                _Circle.IsSelected = true;

                if (ShowAxisHint)
                {
                    _HintLine = new HintLine(WorkspaceController, HintStyle.WorkingAxis);
                    _HintLine.Set(_Position.Axis);
                    _HintLine.Color = Color;
                }

                WorkspaceController.HudManager?.SetCursor(Cursors.Rotate);
                if (ShowHudElement)
                {
                    _HudElement ??= WorkspaceController.HudManager?.CreateElement<DeltaHudElement>(this);
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
                Delta = Delta switch
                {
                    < -0.5 => Maths.NormalizeAngleRad(value.Value - _StartValue, -Maths.DoublePI, 0),
                    >  0.5 => Maths.NormalizeAngleRad(value.Value - _StartValue, 0, Maths.DoublePI),
                    _      => Maths.NormalizeAngleRad(value.Value - _StartValue, -Maths.PI, Maths.PI)
                };

                RaisePreviewed();

                _Position = _StartPosition.Rotated(new Ax1(_StartPosition.Location, _StartPosition.Direction), Delta);
                _Circle.Set(_Position);
                if(SectorAutoUpdate)
                    _Circle.Sector = (_StartValue - Delta, _StartValue);
                _HintLine?.Set(_Position.Axis);
                _HudElement?.SetValue(Delta.ToDeg());
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

            _HintLine?.Remove();
            _HintLine = null;

            _Circle.IsSelected = false;
            _Circle.IsSelectable = true;
            if(SectorAutoUpdate)
                _Circle.Sector = (0.0, 0.0);

            WorkspaceController.Selection.CloseContext(_SelectionContext);

            WorkspaceController.HudManager?.SetCursor(null);
            WorkspaceController.HudManager?.RemoveElement(_HudElement);
            _HudElement = null;

            data.ForceReDetection = true;
            RaiseFinished();
            return true;
        }
        return base.OnMouseUp(data);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}