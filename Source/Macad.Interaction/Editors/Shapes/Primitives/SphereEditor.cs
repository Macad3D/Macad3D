using System;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Panels;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public sealed class SphereEditor : Editor<Sphere>
    {
        SpherePropertyPanel _Panel;
        BoxScaleLiveAction _ScaleAction;
        LabelHudElement _HudElement;

        //--------------------------------------------------------------------------------------------------

        public override void Start()
        {
            _Panel = PropertyPanel.CreatePanel<SpherePropertyPanel>(Entity);
            InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);

            Shape.ShapeChanged += _Shape_ShapeChanged;

            _UpdateActions();
        }

        //--------------------------------------------------------------------------------------------------

        public override void Stop()
        {
            Shape.ShapeChanged -= _Shape_ShapeChanged;              

            InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);

            _ScaleAction?.Stop();
            _ScaleAction = null;

            WorkspaceController.HudManager?.RemoveElement(_HudElement);
            _HudElement = null;
            WorkspaceController.HudManager?.SetHintMessage(this, null);
        }
                    
        //--------------------------------------------------------------------------------------------------

        void _Shape_ShapeChanged(Shape shape)
        {
            if (shape == Entity)
            {
                _UpdateActions();
                WorkspaceController.Invalidate();
            }
        }

        //--------------------------------------------------------------------------------------------------

        #region Scale Action

        void _UpdateActions()
        {
            if (Entity == null || Entity.Body == null)
            {
                _ScaleAction?.Deactivate();
                _ScaleAction = null;
                return;
            }

            if (_ScaleAction == null)
            {
                _ScaleAction = new BoxScaleLiveAction(this);
                _ScaleAction.Previewed += _ScaleAction_Previewed;
                _ScaleAction.Finished += _ScaleAction_Finished;
            }
            Bnd_Box box = new Bnd_Box(new Pnt(-Entity.Radius, -Entity.Radius, -Entity.Radius),
                                      new Pnt( Entity.Radius,  Entity.Radius,  Entity.Radius));
            _ScaleAction.Box = box;
            _ScaleAction.Transformation = Entity.Body.GetTransformation();

            WorkspaceController.StartLiveAction(_ScaleAction);
        }

        //--------------------------------------------------------------------------------------------------

        void _ScaleAction_Previewed(LiveAction liveAction)
        {
            if (liveAction != _ScaleAction)
                return;

            WorkspaceController.HudManager?.SetHintMessage(this, "Scale sphere using gizmo, press 'CTRL' to round to grid stepping, press 'SHIFT' to scale relative to center.");

            double radiusDelta = _ScaleAction.Delta * 0.5 * Math.Max(_ScaleAction.Direction.X.Abs(), 
                                                                     Math.Max(_ScaleAction.Direction.Y.Abs(), 
                                                                              _ScaleAction.Direction.Z.Abs()));
            Vec offset = new Vec(Math.Sign(_ScaleAction.Direction.X), Math.Sign(_ScaleAction.Direction.Y), Math.Sign(_ScaleAction.Direction.Z));

            double tempRadius = Entity.Radius + radiusDelta;
            if (liveAction.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
            {
                tempRadius = Maths.RoundToNearest(tempRadius, WorkspaceController.Workspace.GridStep);
            }
            if (tempRadius <= 0)
                return;
            radiusDelta = tempRadius - Entity.Radius;
            if (radiusDelta == 0)
                return;

            Entity.Radius = tempRadius;

            if (!liveAction.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Shift))
            {
                Entity.Body.Position = Entity.Body.Position.Translated(offset.Scaled(radiusDelta)
                                                                             .Transformed(new Trsf(Entity.Body.Rotation)));
            }

            _UpdateActions();

            _HudElement ??= WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
            _HudElement?.SetValue($"Radius: {Entity.Radius.ToInvariantString("F2")} mm");
        }

        //--------------------------------------------------------------------------------------------------

        void _ScaleAction_Finished(LiveAction liveAction)
        {
            if (liveAction != _ScaleAction)
                return;

            if (!_ScaleAction.DeltaSum.IsEqual(0.0, double.Epsilon))
            {
                InteractiveContext.Current.UndoHandler.Commit();
            }

            WorkspaceController.HudManager?.SetHintMessage(this, null);
            WorkspaceController.HudManager?.RemoveElement(_HudElement);
            _HudElement = null;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        [AutoRegister]
        internal static void Register()
        {
            RegisterEditor<SphereEditor>();
        }

    }
}