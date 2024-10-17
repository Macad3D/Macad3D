using System;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public sealed class SphereEditor : Editor<Sphere>
{
    BoxScaleLiveAction _ScaleAction;
    LabelHudElement _HudElement;
    bool _IsScaling;
    double _StartRadius;
    Pnt _StartPosition;

    //--------------------------------------------------------------------------------------------------

    protected override void OnStart()
    {
        CreatePanel<SpherePropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
    }
                    
    //--------------------------------------------------------------------------------------------------

    protected override void OnToolsStart()
    {
        Shape.ShapeChanged += _Shape_ShapeChanged;
        _ShowActions();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnToolsStop()
    {
        _HudElement = null;
        _ScaleAction = null;
        Shape.ShapeChanged -= _Shape_ShapeChanged;              
    }

    //--------------------------------------------------------------------------------------------------

    void _Shape_ShapeChanged(Shape shape)
    {
        if (shape == Entity)
        {
            _UpdateActions();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #region Scale Action

    void _ShowActions()
    {
        if (Entity?.Body == null)
        {
            StopAllActions();
            _ScaleAction = null;
            return;
        }

        if (_ScaleAction == null)
        {
            _ScaleAction = new BoxScaleLiveAction(false, Entity.Body);
            _ScaleAction.Preview += _ScaleAction_Preview;
            _ScaleAction.Finished += _ScaleAction_Finished;
            StartAction(_ScaleAction);
        }

        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateActions()
    {
        if (_ScaleAction == null)
            return;

        if (!_IsScaling)
        {
            _StartRadius = Entity.Radius;
            _StartPosition = Entity.Body.Position;
        }

        Bnd_Box box = new Bnd_Box(new Pnt(-Entity.Radius, -Entity.Radius, -Entity.Radius),
                                  new Pnt( Entity.Radius,  Entity.Radius,  Entity.Radius));
        _ScaleAction.Box = box;
        _ScaleAction.Transformation = Entity.Body.GetTransformation();
    }

    //--------------------------------------------------------------------------------------------------

    void _ScaleAction_Preview(BoxScaleLiveAction sender, BoxScaleLiveAction.EventArgs args)
    {
        if (sender != _ScaleAction)
            return;
        
        _IsScaling = true;
        SetHintMessage("__Scale sphere__ using gizmo, press `k:Ctrl` to round to grid stepping, press `k:Shift` to scale relative to center.");

        double radiusDelta = args.DeltaSum * 0.5 * Math.Max(args.Direction.X.Abs(),
                                                            Math.Max(args.Direction.Y.Abs(),
                                                                     args.Direction.Z.Abs()));
        Vec offset = new Vec(Math.Sign(args.Direction.X), Math.Sign(args.Direction.Y), Math.Sign(args.Direction.Z));

        double tempRadius = _StartRadius + radiusDelta;
        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            tempRadius = Maths.RoundToNearest(tempRadius, WorkspaceController.Workspace.GridStep);
        }

        if (tempRadius <= 0)
        {
            return;
        }

        radiusDelta = tempRadius - _StartRadius;
        if (radiusDelta == 0)
        {
            return;
        }

        Entity.Radius = tempRadius;

        Pnt position = _StartPosition;
        if (!args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Shift))
        {
            position.Translate(offset.Scaled(radiusDelta)
                                     .Transformed(new Trsf(Entity.Body.Rotation)));
        }
        Entity.Body.Position = position;

        _UpdateActions();

        if (_HudElement == null)
        {
            _HudElement = new LabelHudElement();
            Add(_HudElement);
        }
        _HudElement?.SetValue($"Radius: {Entity.Radius.ToInvariantString("F2")} mm");
    }

    //--------------------------------------------------------------------------------------------------

    void _ScaleAction_Finished(BoxScaleLiveAction sender, BoxScaleLiveAction.EventArgs args)
    {
        _IsScaling = false;
        if (!args.DeltaSum.IsEqual(0.0, double.Epsilon))
        {
            CommitChanges();
        }
        Remove(_HudElement);
        _HudElement = null;
        RemoveHintMessage();
        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<SphereEditor>();
    }

}