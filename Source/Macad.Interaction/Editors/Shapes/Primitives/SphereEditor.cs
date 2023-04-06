using System;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public sealed class SphereEditor : Editor<Sphere>
    {
        BoxScaleLiveAction _ScaleAction;
        LabelHudElement _HudElement;

        //--------------------------------------------------------------------------------------------------

        protected override void OnStart()
        {
            CreatePanel<SpherePropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
        }
                    
        //--------------------------------------------------------------------------------------------------

        protected override void OnToolsStart()
        {
            Shape.ShapeChanged += _Shape_ShapeChanged;
            _UpdateActions();
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

        void _UpdateActions()
        {
            if (Entity?.Body == null)
            {
                StopAllActions();
                _ScaleAction = null;
                return;
            }

            if (_ScaleAction == null)
            {
                _ScaleAction = new BoxScaleLiveAction();
                _ScaleAction.Preview += _ScaleAction_Preview;
                _ScaleAction.Finished += _ScaleAction_Finished;
	            StartAction(_ScaleAction);
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

            SetHintMessage("Scale sphere using gizmo, press 'CTRL' to round to grid stepping, press 'SHIFT' to scale relative to center.");

            double radiusDelta = args.Delta * 0.5 * Math.Max(args.Direction.X.Abs(), 
                                                                     Math.Max(args.Direction.Y.Abs(), 
                                                                              args.Direction.Z.Abs()));
            Vec offset = new Vec(Math.Sign(args.Direction.X), Math.Sign(args.Direction.Y), Math.Sign(args.Direction.Z));

            double tempRadius = Entity.Radius + radiusDelta;
            if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
            {
                tempRadius = Maths.RoundToNearest(tempRadius, WorkspaceController.Workspace.GridStep);
            }
            if (tempRadius <= 0)
                return;
            radiusDelta = tempRadius - Entity.Radius;
            if (radiusDelta == 0)
                return;

            Entity.Radius = tempRadius;

            if (!args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Shift))
            {
                Entity.Body.Position = Entity.Body.Position.Translated(offset.Scaled(radiusDelta)
                                                                             .Transformed(new Trsf(Entity.Body.Rotation)));
            }

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
            if (!args.DeltaSum.IsEqual(0.0, double.Epsilon))
            {
                CommitChanges();
            }
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
}