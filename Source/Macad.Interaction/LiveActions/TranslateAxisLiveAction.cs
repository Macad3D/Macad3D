using System.Windows.Input;
using Macad.Core;
using Macad.Interaction.Visual;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction;

public class TranslateAxisLiveAction : LiveAction
{
    #region Properties and Members

    public Quantity_Color Color { get; set; } = Colors.Auxillary;
    DeltaHudElement _HudElement;

    //--------------------------------------------------------------------------------------------------

    public Ax1 Axis
    {
        get { return _Axis; }
        set
        {
            if (_Axis == value) 
                return;

            _Axis = value;
            _AxisGizmo?.Set(_Axis);
            _HintLine?.Set(_StartAxis.Location, _Axis.Location);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double Length
    {
        get { return _Length; }
        set { _Length = value; }
    }

    //--------------------------------------------------------------------------------------------------

    public Cursor Cursor { get; init; }

    //--------------------------------------------------------------------------------------------------

    public bool ShowHudElement { get; init; }

    //--------------------------------------------------------------------------------------------------

    public bool NoResize { get; init; }

    //--------------------------------------------------------------------------------------------------

    Axis _AxisGizmo;
    double _Length;
    Ax1 _Axis;
    Ax1 _StartAxis;
    bool _IsMoving;
    double _StartValue;
    double _Distance;
    SelectionContext _SelectionContext;
    HintLine _HintLine;

    //--------------------------------------------------------------------------------------------------

    #endregion
                    
    #region Events

    public class EventArgs : System.EventArgs
    {
        public double Distance { get; init; }
        public Ax1 Axis { get; init; }
        public MouseEventData MouseEventData { get; init; }
    }

    public delegate void EventHandler(TranslateAxisLiveAction sender, EventArgs args);

    //--------------------------------------------------------------------------------------------------

    public event EventHandler Previewed;

    void RaisePreviewed(EventArgs args)
    {
        Previewed?.Invoke(this, args);
    }

    //--------------------------------------------------------------------------------------------------

    public event EventHandler Finished;

    void RaiseFinished(EventArgs args)
    {
        Finished?.Invoke(this, args);
    }
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Creation and Activation

    public TranslateAxisLiveAction(object owner) 
        : base(owner)
    {
    }
    
    //--------------------------------------------------------------------------------------------------

    public override void Activate()
    {
        if (_AxisGizmo != null)
            return;

        Axis.Style style = Visual.Axis.Style.None;
        if (NoResize)
            style |= Visual.Axis.Style.NoResize | Visual.Axis.Style.KnobHead;
        _AxisGizmo = new Axis(WorkspaceController, style)
        {
            IsSelectable = true,
            Color = Color,
            Length = _Length,
            Width = 4.0,
        };
        _AxisGizmo.Set(_Axis);

        WorkspaceController.Invalidate();
    }
    
    //--------------------------------------------------------------------------------------------------

    public override void Deactivate()
    {
        _AxisGizmo?.Remove();
        _AxisGizmo = null;

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------
    
    public override void Stop()
    {
        Previewed = null;
        Finished = null;
        base.Stop();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region IMouseEventHandler

    double? _ProcessMouseInput(MouseEventData data)
    {
        var planeDir = WorkspaceController.ActiveViewport.GetRightDirection();
        if (planeDir.IsParallel(_Axis.Direction, 0.1))
        {
            planeDir = WorkspaceController.ActiveViewport.GetUpDirection();
        }
        planeDir.Cross(_Axis.Direction);
        var plane = new Pln(new Ax3(_Axis.Location, planeDir, _Axis.Direction));
        Pnt convertedPoint;
        if (WorkspaceController.ActiveViewport.ScreenToPoint(plane, (int)data.ScreenPoint.X, (int)data.ScreenPoint.Y, out convertedPoint))
        {
            var extrema = new Extrema_ExtPC(convertedPoint, new GeomAdaptor_Curve(new Geom_Line(_Axis)), 1.0e-10);
            if (extrema.IsDone() && extrema.NbExt() >= 1)
            {
                var value = extrema.Point(1).Parameter();
                return value;
            }
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseDown(MouseEventData data)
    {
        if (data.DetectedAisInteractives.Contains(_AxisGizmo?.AisObject))
        {
            var value = _ProcessMouseInput(data);
            if (value != null)
            {
                _StartValue = value.Value;
                _StartAxis = _Axis;
                _Distance = 0;

                _SelectionContext = WorkspaceController.Selection.OpenContext();

                _AxisGizmo.IsSelectable = false;
                _AxisGizmo.IsSelected = true;

                _HintLine = new HintLine(WorkspaceController, HintStyle.WorkingAxis);
                _HintLine.Set(_Axis.Location, _Axis.Location);
                _HintLine.Color = Color;

                WorkspaceController.HudManager?.SetCursor(Cursor);
                if (ShowHudElement)
                {
                    _HudElement ??= WorkspaceController.HudManager?.CreateElement<DeltaHudElement>(this);
                    if (_HudElement != null)
                    {
                        _HudElement.Units = ValueUnits.Length;
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
        if (_IsMoving)
        {
            var value = _ProcessMouseInput(data);
            if (value != null)
            {
                Axis = _Axis.Translated(_Axis.Direction.ToVec(value.Value - _StartValue));
                _Distance = ElCLib.LineParameter(_StartAxis, _Axis.Location);

                EventArgs eventArgs = new()
                {
                    Distance = _Distance,
                    Axis = Axis,
                    MouseEventData = data
                };
                RaisePreviewed(eventArgs);

                _Distance = ElCLib.LineParameter(_StartAxis, _Axis.Location);
                _HintLine.Set(_StartAxis.Location, _Axis.Location);
                if (_HudElement != null)
                    _HudElement.Delta = _Distance;
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

            _HintLine.Remove();
            _HintLine = null;

            _AxisGizmo.IsSelected = false;
            _AxisGizmo.IsSelectable = true;

            WorkspaceController.Selection.CloseContext(_SelectionContext);

            WorkspaceController.HudManager?.SetCursor(null);
            WorkspaceController.HudManager?.RemoveElement(_HudElement);
            _HudElement = null;

            EventArgs eventArgs = new()
            {
                Distance = _Distance,
                Axis = Axis,
                MouseEventData = data
            };
            RaiseFinished(eventArgs);
            data.ForceReDetection = true;
            return true;
        }
        return base.OnMouseUp(data);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}