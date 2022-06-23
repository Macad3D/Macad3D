using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Interaction.Visual;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction;

public class TranslateAxisLiveAction : LiveAction
{
    #region Properties and Members

    public Quantity_Color Color { get; set; } = Colors.Auxillary;

    //--------------------------------------------------------------------------------------------------

    public Ax1 Axis
    {
        get { return _Axis; }
        set
        {
            if (_Axis == value) 
                return;

            _Axis = value;
            _Arrow?.Set(_Axis);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double Length
    {
        get { return _Length; }
        set { _Length = value; }
    }

    //--------------------------------------------------------------------------------------------------

    Arrow _Arrow;
    double _Length;
    Ax1 _Axis;
    Ax1 _StartAxis;
    bool _IsMoving;
    double _StartValue;
    SelectionContext _SelectionContext;
    HintLine _HintLine;
    DeltaHudElement _HudElement;

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
        if (_Arrow != null)
            return;

        Arrow.Style style = Arrow.Style.Headless;
        if (_Length == 0)
            style |= Arrow.Style.NoResize;
        _Arrow = new Arrow(WorkspaceController, style)
        {
            IsSelectable = true,
            Color = Color,
            Length = _Length,
            Width = 4.0,
        };
        _Arrow.Set(_Axis);

        WorkspaceController.Invalidate();
    }
    
    //--------------------------------------------------------------------------------------------------

    public override void Deactivate()
    {
        _Arrow?.Remove();
        _Arrow = null;

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region IMouseEventHandler

    double? _ProcessMouseInput(MouseEventData data)
    {
        var planeDir = WorkspaceController.ActiveViewport.GetRightDirection();
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
        if (data.DetectedAisInteractives.Contains(_Arrow?.AisObject))
        {
            var value = _ProcessMouseInput(data);
            if (value != null)
            {
                _StartValue = value.Value;
                _StartAxis = _Axis;

                _SelectionContext = WorkspaceController.Selection.OpenContext();

                _Arrow.IsSelectable = false;
                _Arrow.IsSelected = true;

                _HintLine = new HintLine(WorkspaceController, HintStyle.WorkingAxis);
                _HintLine.Set(_Axis.Location, _Axis.Location);
                _HintLine.Color = Color;

                WorkspaceController.HudManager?.SetCursor(Cursors.Move);
                _HudElement ??= WorkspaceController.HudManager?.CreateElement<DeltaHudElement>(this);
                if (_HudElement != null)
                {
                    _HudElement.Units = ValueUnits.Length;
                    _HudElement.Delta = 0;
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
                var tempAxis = _Axis.Translated(_Axis.Direction.ToVec(value.Value - _StartValue));
                if (Keyboard.IsKeyDown(Key.LeftCtrl) || Keyboard.IsKeyDown(Key.RightCtrl))
                {
                    tempAxis.Translate(new Vec(0, 0, Maths.RoundToNearest(tempAxis.Location.Z, WorkspaceController.Workspace.GridStep) - tempAxis.Location.Z));
                }
                Axis = tempAxis;
                _HintLine.Set(_StartAxis.Location, _Axis.Location);
                if (_HudElement != null)
                    _HudElement.Delta = _StartAxis.Location.Distance(_Axis.Location);

                RaisePreviewed();
            }

            return true;
        }
        return base.OnMouseMove(data);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseUp(MouseEventData data, bool additive)
    {
        if (_IsMoving)
        {
            _IsMoving = false;

            _HintLine.Remove();
            _HintLine = null;

            _Arrow.IsSelected = false;
            _Arrow.IsSelectable = true;

            WorkspaceController.Selection.CloseContext(_SelectionContext);

            WorkspaceController.HudManager?.SetCursor(null);
            WorkspaceController.HudManager?.RemoveElement(_HudElement);
            _HudElement = null;

            data.ForceReDetection = true;
            RaiseFinished();
            return true;
        }
        return base.OnMouseUp(data, additive);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}