using System.Windows.Input;
using Macad.Interaction.Visual;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public sealed class CircularArrayEditor : Editor<CircularArray>
{
    TranslateAxisLiveAction _RadiusAction;
    RotateLiveAction _RotateAction;
    LabelHudElement _HudElement;
    HintCircle _HintCircle;
    HintLine[] _HintAngles;
    bool _IsMoving;
    double _StartValue;

    //--------------------------------------------------------------------------------------------------

    protected override void OnStart()
    {
        CreatePanel<CircularArrayPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnToolsStart()
    {
        Shape.ShapeChanged += _Shape_ShapeChanged;
        _UpdateHints();
        _ShowActions();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnToolsStop()
    {
        Shape.ShapeChanged -= _Shape_ShapeChanged;
        _RadiusAction = null;
        _RotateAction = null;
        _HudElement = null;
        _ClearHints();
        base.OnToolsStop();
    }

    //--------------------------------------------------------------------------------------------------

    void _Shape_ShapeChanged(Shape shape)
    {
        if (shape == Entity)
        {
            _UpdateHints();
            _UpdateActions();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #region Hints

    void _UpdateHints()
    {
        if (Entity?.Body?.Shape != Entity)
        {
            return;
        }

        var axis = Entity?.GetRotationAxis()?.Transformed(Entity.Body.GetTransformation());
        if (axis == null)
        {
            _ClearHints();
            return;
        }

        if (_HintCircle == null)
        {
            _HintCircle = new HintCircle(WorkspaceController, HintStyle.Solid);
            Add(_HintCircle);
        }
        Ax3 circAxis = axis.Value;
        if (Entity.Radius < 0)
        {
            circAxis.XReverse();
        }
        _HintCircle.Set(new gp_Circ(circAxis.ToAx2(), Entity.Radius.Abs()));

        var (startAngle, endAngle) = Entity.GetStartEndAngles();
        _HintCircle.SetRange(startAngle, endAngle);

        if (_HintAngles == null)
        {
            _HintAngles = new HintLine[3];
            _HintAngles[0] = new HintLine(WorkspaceController, HintStyle.ThinDashed);
            _HintAngles[1] = new HintLine(WorkspaceController, HintStyle.Solid);
            _HintAngles[2] = new HintLine(WorkspaceController, HintStyle.Dashed);
            _HintAngles.ForEach(Add);
        }

        var centerPoint = axis.Value.Location;
        var mainVec = axis.Value.XDirection.ToVec() * Entity.Radius;
        var localRotAxis = new Ax1(Pnt.Origin, axis.Value.Axis.Direction);
        _HintAngles[0].Set(centerPoint, centerPoint.Translated(mainVec));
        _HintAngles[1].Set(centerPoint, centerPoint.Translated(mainVec.Rotated(localRotAxis, startAngle.ToRad())));
        _HintAngles[2].Set(centerPoint, centerPoint.Translated(mainVec.Rotated(localRotAxis, endAngle.ToRad())));

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    void _ClearHints()
    {
        Remove(_HintCircle);
        _HintCircle = null;
        _HintAngles?.ForEach(Remove);
        _HintAngles = null;
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Live Actions
        
    void _ShowActions()
    {
        if (Entity?.Body == null)
        {
            StopAllActions();
            _RadiusAction = null;
            _RotateAction = null;
            return;
        }
            
        if (_RadiusAction == null)
        {
            _RadiusAction = new(Entity.Body)
            {
                Cursor = Cursors.SetRadius,
                Color = Colors.ActionRed,
                NoResize = true,
                Length = 1.2,
            };
            _RadiusAction.Preview += _RadiusAction_Preview;
            _RadiusAction.Finished += (_,_) => _ActionFinished();
            StartAction(_RadiusAction);
        }
                    
        if (_RotateAction == null)
        {
            _RotateAction = new(Entity.Body)
            {
                Cursor = Cursors.SetRadius,
                Color = Colors.ActionBlue,
                VisualLimits = (-Maths.PI*0.1, Maths.PI*0.1),
                SectorAutoUpdate = RotateLiveAction.SectorAutoMode.Forward
            };
            _RotateAction.Preview += _RotateAction_Preview;
            _RotateAction.Finished += (_,_) => _ActionFinished();
            StartAction(_RotateAction);
        }

        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateActions()
    {
        var axis = Entity?.GetRotationAxis()?.Transformed(Entity.Body.GetTransformation());
        if (axis == null)
        {
            StopAllActions();
            _RadiusAction = null;
            _RotateAction = null;
            return;
        }

        Ax3 circAxis = axis.Value;
        if (Entity.Radius < 0)
        {
            circAxis.XReverse();
        }

        if (_RadiusAction != null)
        {
            _RadiusAction.Axis = new Ax1(circAxis.Location, circAxis.XDirection.Reversed());
        }

        if (_RotateAction != null && !_IsMoving)
        {
            _RotateAction.Radius = Entity.Radius.Abs();
            _RotateAction.Position = new Ax2(circAxis.Location.Translated(circAxis.XDirection.ToVec(Entity.Radius.Abs())), 
                                             circAxis.Direction, circAxis.XDirection.Reversed());
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _RadiusAction_Preview(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        if (!_IsMoving)
        {
            _IsMoving = true;
            _StartValue = Entity.Radius;
            StopAction(_RotateAction);
            _RotateAction = null;
            SetHintMessage("__Adjust radius__ using gizmo, press `k:Ctrl` to round to grid stepping.");
        }

        var newRadius = _StartValue + args.Distance;
        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newRadius = Maths.RoundToNearest(newRadius, WorkspaceController.Workspace.GridStep);
        }

        if (!Entity.Radius.IsEqual(newRadius, 0.001))
        {
            Entity.Radius = newRadius;
        }

        if (_HudElement == null)
        {
            _HudElement = new LabelHudElement();
            Add(_HudElement);
        }
        _HudElement.SetValue($"Radius: {newRadius.ToInvariantString("F2")} mm");
    }

    //--------------------------------------------------------------------------------------------------
    
    void _RotateAction_Preview(RotateLiveAction sender, RotateLiveAction.EventArgs args)
    {
        if (!_IsMoving)
        {
            _IsMoving = true;
            _StartValue = Entity.OriginalAngle;
            StopAction(_RadiusAction);
            _RadiusAction = null;
            SetHintMessage("__Rotate angle__ to origin using gizmo, press `k:Ctrl` to round to 5°.");
        }

        var newAngle = _StartValue + args.DeltaSum.ToDeg();
        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newAngle = Maths.RoundToNearest(newAngle, 5.0);
            args.DeltaSumOverride = (newAngle - _StartValue).ToRad();
        }

        if (!Entity.OriginalAngle.IsEqual(newAngle, 0.001))
        {
            Entity.OriginalAngle = newAngle;
        }

        if (_HudElement == null)
        {
            _HudElement = new LabelHudElement();
            Add(_HudElement);
        }
        _HudElement.SetValue($"Original Angle: {newAngle.ToInvariantString("F2")}°");
    }

    //--------------------------------------------------------------------------------------------------

    void _ActionFinished()
    {
        _IsMoving = false;
        Remove(_HudElement);
        _HudElement = null;
        RemoveHintMessage();
        CommitChanges();
        _ShowActions();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<CircularArrayEditor>();
    }

}