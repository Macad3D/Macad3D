using System;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public class CylinderEditor : Editor<Cylinder>
    {
        CylinderPropertyPanel _Panel;
        BoxScaleLiveAction _ScaleAction;
        LabelHudElement[] _HudElements = new LabelHudElement[2];

        //--------------------------------------------------------------------------------------------------

        public override void Start()
        {
            _Panel = PropertyPanel.CreatePanel<CylinderPropertyPanel>(Entity);
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

            foreach (var element in _HudElements)
            {
                WorkspaceController.HudManager?.RemoveElement(element);
            }
            _HudElements.Fill(null);
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

            Bnd_Box box = new Bnd_Box(new Pnt(-Entity.Radius, -Entity.Radius, 0.0), 
                                      new Pnt( Entity.Radius,  Entity.Radius, Entity.Height));
            _ScaleAction.Box = box;
            _ScaleAction.Transformation = Entity.Body.GetTransformation();

            WorkspaceController.StartLiveAction(_ScaleAction);
        }

        //--------------------------------------------------------------------------------------------------

        void _ScaleAction_Previewed(LiveAction liveAction)
        {
            if (liveAction != _ScaleAction)
                return;

            WorkspaceController.HudManager?.SetHintMessage(this, "Scale cylinder using gizmo, press 'CTRL' to round to grid stepping, press 'SHIFT' to scale relative to center.");

            double newHeight = 0;
            double newRadius = 0;
            
            bool center = liveAction.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Shift);

            double radiusDelta = _ScaleAction.Delta * 0.5 * Math.Max(_ScaleAction.Direction.X.Abs(), _ScaleAction.Direction.Y.Abs());
            if (radiusDelta != 0)
            {
                if (center)
                    radiusDelta *= 2.0;

                newRadius = Entity.Radius + radiusDelta;
                if (liveAction.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
                {
                    newRadius = Maths.RoundToNearest(newRadius, WorkspaceController.Workspace.GridStep);
                }

                if (newRadius <= 0)
                    return;

                radiusDelta = newRadius - Entity.Radius;
                if (radiusDelta == 0)
                    return;
            }

            double heightDelta = _ScaleAction.Delta * _ScaleAction.Direction.Z;
            if (heightDelta != 0)
            {
                if (_ScaleAction.Direction.Z < 0)
                    heightDelta *= -1;

                if (center)
                    heightDelta *= 2.0;

                newHeight = Entity.Height + heightDelta;
                if (liveAction.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
                {
                    newHeight = Maths.RoundToNearest(newHeight, WorkspaceController.Workspace.GridStep);
                }

                if (newHeight <= 0)
                    return;

                heightDelta = newHeight - Entity.Height;
                if (heightDelta == 0)
                    return;
            }

            if (newHeight != 0)
            {
                if (center)
                {
                    Entity.Body.Position = Entity.Body.Position.Translated(Dir.DZ.ToVec(heightDelta * -0.5)
                                                                                 .Transformed(new Trsf(Entity.Body.Rotation)));
                } 
                else if (_ScaleAction.Direction.Z < 0)
                {
                    Entity.Body.Position = Entity.Body.Position.Translated(Dir.DZ.ToVec(-heightDelta)
                                                                              .Transformed(new Trsf(Entity.Body.Rotation)));
                }
                Entity.Height = newHeight;

                _HudElements[1] ??= InteractiveContext.Current.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
                _HudElements[1]?.SetValue($"Height: {Entity.Height.ToInvariantString("F2")} mm");
            }

            if (newRadius != 0)
            {
                Entity.Radius = newRadius;

                Vec offset = new Vec(Math.Sign(_ScaleAction.Direction.X), Math.Sign(_ScaleAction.Direction.Y), 0);
                if (offset != Vec.Zero && !center)
                {
                    Entity.Body.Position = Entity.Body.Position.Translated(offset.Scaled(radiusDelta)
                                                                                 .Transformed(new Trsf(Entity.Body.Rotation)));
                }
                _HudElements[0] ??= InteractiveContext.Current.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
                _HudElements[0]?.SetValue($"Radius:  {Entity.Radius.ToInvariantString("F2")} mm");
            }
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

            foreach (var element in _HudElements)
            {
                WorkspaceController.HudManager?.RemoveElement(element);
            }
            _HudElements.Fill(null);
            WorkspaceController.HudManager?.SetHintMessage(this, null);
        }

        //--------------------------------------------------------------------------------------------------
        
        #endregion

        [AutoRegister]
        internal static void Register()
        {
            RegisterEditor<CylinderEditor>();
        }

    }
}