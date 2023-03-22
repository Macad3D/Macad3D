using System;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public class BoxEditor : Editor<Box>
    {
        BoxScaleLiveAction _ScaleAction;
        bool[] _ScaleAxisReversed;
        LabelHudElement[] _HudElements = new LabelHudElement[3];

        //--------------------------------------------------------------------------------------------------

        protected override void OnStart()
        {
            CreatePanel<BoxPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
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
            _HudElements.Fill(null);
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
                RemoveLiveActions();
                _ScaleAction = null;
                return;
            }

            if (_ScaleAction == null)
            {
                _ScaleAction = new BoxScaleLiveAction(this);
                _ScaleAction.Previewed += _ScaleAction_Previewed;
                _ScaleAction.Finished += _ScaleAction_Finished;
            }

            Bnd_Box box = new Bnd_Box(Pnt.Origin, new Pnt(Entity.DimensionX, Entity.DimensionY, Entity.DimensionZ));
            _ScaleAction.Box = box;
            _ScaleAction.Transformation = Entity.Body.GetTransformation();
            _ScaleAxisReversed = null;

            AddLiveAction(_ScaleAction);
        }

        //--------------------------------------------------------------------------------------------------

        void _ScaleAction_Previewed(BoxScaleLiveAction sender, BoxScaleLiveAction.EventArgs args)
        {
            SetHintMessage("Scale box using gizmo, press 'CTRL' to round to grid stepping, press 'SHIFT' to scale relative to center.");

            _ScaleAxisReversed ??= new[]
            {
                Math.Sign(args.Direction.X) != Math.Sign(Entity.DimensionX),
                Math.Sign(args.Direction.Y) != Math.Sign(Entity.DimensionY),
                Math.Sign(args.Direction.Z) != Math.Sign(Entity.DimensionZ),
            };


            XYZ scale = new XYZ(args.Delta * args.Direction.X * (_ScaleAxisReversed[0] ? -1 : 1),
                                args.Delta * args.Direction.Y * (_ScaleAxisReversed[1] ? -1 : 1),
                                args.Delta * args.Direction.Z * (_ScaleAxisReversed[2] ? -1 : 1));
            if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
            {
                if (scale.X != 0)
                {
                    var newDimX = Entity.DimensionX + scale.X;
                    newDimX = Maths.RoundToNearest(newDimX, WorkspaceController.Workspace.GridStep);
                    scale.X = newDimX - Entity.DimensionX;
                    if (scale.X == 0)
                        return;
                }
                if (scale.Y != 0)
                {
                    var newDimY = Entity.DimensionY + scale.Y;
                    newDimY = Maths.RoundToNearest(newDimY, WorkspaceController.Workspace.GridStep);
                    scale.Y = newDimY - Entity.DimensionY;
                    if (scale.Y == 0)
                        return;
                }
                if (scale.Z != 0)
                {
                    var newDimZ = Entity.DimensionZ + scale.Z;
                    newDimZ = Maths.RoundToNearest(newDimZ, WorkspaceController.Workspace.GridStep);
                    scale.Z = newDimZ - Entity.DimensionZ;
                    if (scale.Z == 0)
                        return;
                }
            }

            bool center = args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Shift);
            if (center)
                scale.Multiply(2.0);

            Vec offset = new();
           
            if (scale.X != 0) 
            {
                Entity.DimensionX += scale.X;
                if (_ScaleAxisReversed[0] || center)
                {
                    offset.X -= scale.X;
                }

                _HudElements[0] ??= CreateHudElement<LabelHudElement>();
                _HudElements[0]?.SetValue($"Length: {Entity.DimensionX.ToInvariantString("F2")} mm");
            }

            if (scale.Y != 0)
            {
                Entity.DimensionY += scale.Y;
                if (_ScaleAxisReversed[1] || center)
                {
                    offset.Y -= scale.Y;
                }

                _HudElements[1] ??= CreateHudElement<LabelHudElement>();
                _HudElements[1]?.SetValue($"Width:  {Entity.DimensionY.ToInvariantString("F2")} mm");
            }
            
            if (scale.Z != 0)
            {
                Entity.DimensionZ += scale.Z;
                if (_ScaleAxisReversed[2] || center)
                {
                    offset.Z -= scale.Z;
                }

                _HudElements[2] ??= CreateHudElement<LabelHudElement>();
                _HudElements[2]?.SetValue($"Height:  {Entity.DimensionZ.ToInvariantString("F2")} mm");
            }

            if (center)
            {
                offset.Scale(0.5);
            }
            Entity.Body.Position = Entity.Body.Position.Translated(offset.Transformed(new Trsf(Entity.Body.Rotation)));
        }

        //--------------------------------------------------------------------------------------------------

        void _ScaleAction_Finished(BoxScaleLiveAction sender, BoxScaleLiveAction.EventArgs args)
        {
            if (!args.DeltaSum.IsEqual(0.0, double.Epsilon))
            {
                InteractiveContext.Current.UndoHandler.Commit();
            }

            StartTools();
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        [AutoRegister]
        internal static void Register()
        {
            RegisterEditor<BoxEditor>();
        }

    }
}