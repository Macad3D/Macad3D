using System;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Panels;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public class BoxEditor : Editor<Box>
    {
        BoxPropertyPanel _Panel;
        BoxScaleLiveAction _ScaleAction;
        bool[] _ScaleAxisReversed;
        LabelHudElement[] _HudElements = new LabelHudElement[3];

        //--------------------------------------------------------------------------------------------------

        public override void Start()
        {
            _Panel = PropertyPanel.CreatePanel<BoxPropertyPanel>(Entity);
            InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);
            
            InteractiveEntity.VisualChanged += _InteractiveEntity_VisualChanged;     

            _UpdateActions();
        }

        //--------------------------------------------------------------------------------------------------

        public override void Stop()
        {
            InteractiveEntity.VisualChanged -= _InteractiveEntity_VisualChanged;                 

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
        
        void _InteractiveEntity_VisualChanged(InteractiveEntity entity)
        {
            if (entity == Entity.Body)
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

            Bnd_Box box = new Bnd_Box(Pnt.Origin, new Pnt(Entity.DimensionX, Entity.DimensionY, Entity.DimensionZ));
            _ScaleAction.Box = box;
            _ScaleAction.Transformation = Entity.Body.GetTransformation();

            WorkspaceController.StartLiveAction(_ScaleAction);
        }

        //--------------------------------------------------------------------------------------------------

        void _ScaleAction_Previewed(LiveAction liveAction)
        {
            if (liveAction != _ScaleAction)
                return;

            WorkspaceController.HudManager?.SetHintMessage(this, "Scale box using gizmo, press 'CTRL' to round to grid stepping, press 'SHIFT' to scale relative to center.");

            _ScaleAxisReversed ??= new[]
            {
                Math.Sign(_ScaleAction.Direction.X) != Math.Sign(Entity.DimensionX),
                Math.Sign(_ScaleAction.Direction.Y) != Math.Sign(Entity.DimensionY),
                Math.Sign(_ScaleAction.Direction.Z) != Math.Sign(Entity.DimensionZ),
            };

            XYZ scale = new XYZ(_ScaleAction.Delta * _ScaleAction.Direction.X,
                                _ScaleAction.Delta * _ScaleAction.Direction.Y,
                                _ScaleAction.Delta * _ScaleAction.Direction.Z);

            if (liveAction.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
            {
                if (scale.X != 0)
                {
                    scale.X = Maths.RoundToNearest(scale.X, WorkspaceController.Workspace.GridStep);
                    if (scale.X == 0)
                        return;
                }
                if (scale.Y != 0)
                {
                    scale.Y = Maths.RoundToNearest(scale.Y, WorkspaceController.Workspace.GridStep);
                    if (scale.Y == 0)
                        return;
                }
                if (scale.Z != 0)
                {
                    scale.Z = Maths.RoundToNearest(scale.Z, WorkspaceController.Workspace.GridStep);
                    if (scale.Z == 0)
                        return;
                }
            }

            bool center = liveAction.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Shift);
            if (center)
                scale.Multiply(2.0);

            Vec offset = new();
           
            if (scale.X != 0)
            {
                if (_ScaleAxisReversed[0])
                {
                    offset.X += scale.X;
                    Entity.DimensionX -= scale.X;
                }
                else
                {
                    if(center)
                        offset.X -= scale.X;
                    Entity.DimensionX += scale.X;
                }

                _HudElements[0] ??= InteractiveContext.Current.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
                _HudElements[0]?.SetValue($"Length: {Entity.DimensionX.ToInvariantString("F2")} mm");
            }

            if (scale.Y != 0)
            {
                if (_ScaleAxisReversed[1])
                {
                    offset.Y += scale.Y;
                    Entity.DimensionY -= scale.Y;
                }
                else
                {
                    if(center)
                        offset.Y -= scale.Y;
                    Entity.DimensionY += scale.Y;
                }

                _HudElements[1] ??= InteractiveContext.Current.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
                _HudElements[1]?.SetValue($"Width:  {Entity.DimensionX.ToInvariantString("F2")} mm");
            }
            
            if (scale.Z != 0)
            {
                if (_ScaleAxisReversed[2])
                {
                    offset.Z += scale.Z;
                    Entity.DimensionZ -= scale.Z;
                }
                else
                {
                    if(center)
                        offset.Z -= scale.Z;
                    Entity.DimensionZ += scale.Z;
                }

                _HudElements[2] ??= InteractiveContext.Current.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
                _HudElements[2]?.SetValue($"Height:  {Entity.DimensionX.ToInvariantString("F2")} mm");
            }

            if (center)
            {
                offset.Scale(0.5);
            }
            Entity.Body.Position = Entity.Body.Position.Translated(offset.Transformed(new Trsf(Entity.Body.Rotation)));

            _UpdateActions();
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

            _ScaleAxisReversed = null;

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
            RegisterEditor<BoxEditor>();
        }

    }
}