using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Interaction.Visual;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction;

/// <summary>
/// Snapping will be executed for Edge, Vertex and Face. It will snap only in a primary axis direction (x, y or z)
/// depending on which result point is more close to the origin. This seems to be unfamiliar, but since the axis
/// will almost never touch the snap target, this seems to be the only variant which can be useful in most situations.
/// To activate snapping, the target entity must be set in the constructor.
/// </summary>
public sealed class TranslateAxisLiveAction : LiveAction
{
    #region Properties and Members

    public Color Color
    {
        get { return _Color; }
        set
        {
            if (_Color == value)
                return;

            _Color = value;
            if (_AxisGizmo != null)
            {
                _AxisGizmo.Color = _Color;
            }
        }
    }

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
        set
        {
            if (_Length == value)
                return;

            _Length = value;
            if (_AxisGizmo != null)
            {
                _AxisGizmo.Length = _Length;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Parameter of the axis which defines the point to snap to. Set this if the point to snap to is
    /// not the axis origin.
    /// </summary>
    public double SnapOffset { get; set; }

    //--------------------------------------------------------------------------------------------------

    public Cursor Cursor { get; init; }

    //--------------------------------------------------------------------------------------------------

    public bool ShowHudElement { get; init; }

    //--------------------------------------------------------------------------------------------------

    public bool NoResize { get; init; }

    //--------------------------------------------------------------------------------------------------

    Axis _AxisGizmo;
    double _Length = 1.0;
    Ax1 _Axis = Ax1.OZ;
    Ax1 _StartAxis = Ax1.OZ;
    bool _IsMoving;
    double _StartValue;
    double _StartSnapOffset;
    double _Distance;
    SelectionContext _SelectionContext;
    HintLine _HintLine;
    Color _Color = Colors.Auxillary;
    DeltaHudElement _HudElement;
    Snap3D _SnapHandler;
    InteractiveEntity _TargetEntity;

    //--------------------------------------------------------------------------------------------------

    #endregion
                    
    #region Events

    public class EventArgs
    {
        public double Distance { get; init; }
        public Ax1 Axis { get; init; }
        public MouseEventData MouseEventData { get; init; }
    }

    public delegate void EventHandler(TranslateAxisLiveAction sender, EventArgs args);
    public event EventHandler Preview;
    public event EventHandler Finished;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Creation and Activation

    /// <param name="targetEntity">The entity which is the target of the operation. It will be excluded from snapping.</param>
    public TranslateAxisLiveAction(InteractiveEntity targetEntity = null)
    {
        _TargetEntity = targetEntity;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnStart()
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
        Add(_AxisGizmo);

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

        if (_SnapHandler != null)
        {
            if (data.DetectedEntity == _TargetEntity)
            {
                data.Return.RemoveHighlighting = true;
            }
            else
            {
                var snapInfo = _SnapHandler.Snap(data);
                if (snapInfo.Mode != SnapModes.None)
                {
                    // Point snapped
                    var extrema = new Extrema_ExtPC(snapInfo.Point, new GeomAdaptor_Curve(new Geom_Line(_Axis)), 1.0e-10);
                    if (extrema.IsDone() && extrema.NbExt() >= 1)
                    {
                        var param = extrema.Point(1).Parameter();
                        return param - _StartSnapOffset + _StartValue;
                    }
                }
            }
        }

        if (WorkspaceController.ActiveViewControlller.ScreenToPoint(plane, (int)data.ScreenPoint.X, (int)data.ScreenPoint.Y, out var convertedPoint))
        {
            var extrema = new Extrema_ExtPC(convertedPoint, new GeomAdaptor_Curve(new Geom_Line(_Axis)), 1.0e-10);
            if (extrema.IsDone() && extrema.NbExt() >= 1)
            {
                var param = extrema.Point(1).Parameter();
                return param;
            }
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseDown(MouseEventData data)
    {
        if (Equals(data.DetectedAisObject, _AxisGizmo?.AisObject))
        {
            var value = _ProcessMouseInput(data);
            if (value != null)
            {
                _StartValue = value.Value;
                _StartSnapOffset = SnapOffset;
                _StartAxis = _Axis;
                _Distance = 0;

                _SelectionContext = OpenSelectionContext();

                _AxisGizmo.IsSelectable = false;
                _AxisGizmo.IsSelected = true;

                _HintLine = new HintLine(WorkspaceController, HintStyle.WorkingAxis);
                _HintLine.Set(_Axis.Location, _Axis.Location);
                _HintLine.Color = Color;
                Add(_HintLine);

                if (_TargetEntity != null)
                {
                    _SnapHandler = SetSnapHandler(new Snap3D());
                    _SnapHandler.SupportedModes = SnapModes.Vertex | SnapModes.Edge | SnapModes.Face;
                }

                SetCursor(Cursor);
                if (ShowHudElement && _HudElement == null)
                {
                    _HudElement = new DeltaHudElement
                    {
                        Units = ValueUnits.Length,
                        Delta = 0
                    };
                    Add(_HudElement);
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
                Preview?.Invoke(this, eventArgs);

                _Distance = ElCLib.LineParameter(_StartAxis, _Axis.Location);
                _HintLine.Set(_StartAxis.Location, _Axis.Location);
                _HudElement?.SetValue(_Distance);
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

            _AxisGizmo.IsSelected = false;
            _AxisGizmo.IsSelectable = true;

            CloseSelectionContext(_SelectionContext);
            RemoveSnapHandler();
            _SnapHandler = null;

            SetCursor(null);
            Remove(_HudElement);
            _HudElement = null;

            EventArgs eventArgs = new()
            {
                Distance = _Distance,
                Axis = Axis,
                MouseEventData = data
            };
            Finished?.Invoke(this, eventArgs);
            data.Return.ForceReDetection = true;
            return true;
        }
        return base.OnMouseUp(data);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}