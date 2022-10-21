using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Interaction.Visual;
using Macad.Occt;
using Macad.Occt.Helper;

namespace Macad.Interaction.Editors.Shapes
{
    public class RevolveEditor : Editor<Revolve>
    {
        RevolvePropertyPanel _Panel;
        HintLine _OriginHint;
        HintLine _AxisHint;
        TranslateAxisLiveAction _OffsetXAction;
        TranslateAxisLiveAction _OffsetYAction;
        TranslateAxisLiveAction _OffsetZAction;
        LabelHudElement _HudElement;
        Pnt _OffsetActionPivot;
        Vec _StartOffset;
        bool _IsMoving;

        //--------------------------------------------------------------------------------------------------

        public override void Start()
        {
            _Panel = PropertyPanel.CreatePanel<RevolvePropertyPanel>(Entity);
            InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);
                                
            Shape.ShapeChanged += _Shape_ShapeChanged;

            _UpdateHints();
            _UpdateActions();
        }

        //--------------------------------------------------------------------------------------------------

        public override void Stop()
        {
            Shape.ShapeChanged -= _Shape_ShapeChanged;

            InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);

            _AxisHint?.Remove();
            _AxisHint = null;
            _OriginHint?.Remove();
            _OriginHint = null;

            _OffsetXAction?.Deactivate();
            _OffsetXAction = null;
            _OffsetYAction?.Deactivate();
            _OffsetYAction = null;
            _OffsetZAction?.Deactivate();
            _OffsetZAction = null;

            WorkspaceController.HudManager?.RemoveElement(_HudElement);
            _HudElement = null;
            WorkspaceController.HudManager?.SetHintMessage(this, null);
        }
                
        //--------------------------------------------------------------------------------------------------

        void _Shape_ShapeChanged(Shape shape)
        {
            if (shape == Entity)
            {
                _UpdateHints();
                if(!_IsMoving)
                    _UpdateActions();
                WorkspaceController.Invalidate();
            }
        }

        //--------------------------------------------------------------------------------------------------

        #region Hints

        void _UpdateHints()
        {
            var computeAxis = Entity.ComputeAxis();
            if (computeAxis == null)
            {
                _AxisHint?.Remove();
                _AxisHint = null;
                _OriginHint?.Remove();
                _OriginHint = null;
                return;
            }

            _AxisHint ??= new HintLine(WorkspaceController, HintStyle.WorkingAxis);
            _OriginHint ??= new HintLine(WorkspaceController, HintStyle.Dashed);

            var bbox = Entity.GetBRep()?.BoundingBox();
            if (bbox != null)
            {
                var size = new Vec(bbox.CornerMin(), bbox.CornerMax()).Coord.Multiplied(computeAxis.Value.Direction.Coord).ToVec().Magnitude();
                var axis = computeAxis.Value.Translated(bbox.Center().ToVec())
                                      .Translated(Entity.Offset.Reversed())
                                      .Transformed(Entity.GetTransformation());
                Pnt p1 = axis.Location.Translated(axis.Direction.ToVec(size));
                Pnt p2 = axis.Location.Translated(axis.Direction.ToVec(-size));
                _AxisHint.Set(p1, p2);
                p1.Translate(Entity.Offset.Reversed());
                p2.Translate(Entity.Offset.Reversed());
                _OriginHint.Set(p1, p2);
            }
            else
            {
                var axis = computeAxis.Value.Transformed(Entity.GetTransformation());
                _AxisHint.Set(axis);
                axis.Translate(Entity.Offset.Reversed());
                _OriginHint.Set(axis);
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Actions

        void _UpdateActions()
        {
            var computeAxis = Entity.ComputeAxis();
            if (computeAxis == null)
            {
                _OffsetXAction?.Deactivate();
                return;
            }
            var axis = computeAxis.Value.Transformed(Entity.GetTransformation());
            var localCS = Entity.GetCoordinateSystem();
            var bbox = Entity.GetBRep()?.BoundingBox();
            if (bbox != null)
            {
                var size = new Vec(bbox.CornerMin(), bbox.CornerMax()).Coord.Multiplied(computeAxis.Value.Direction.Coord).ToVec().Magnitude();
                axis.Location = axis.Location.Translated(axis.Direction.ToVec(size));
            }
            _OffsetActionPivot = axis.Location;

            // Offset X
            if (_OffsetXAction == null)
            {
                _OffsetXAction = new(this)
                {
                    Color = Colors.ActionRed,
                    NoResize = true,
                    Length = 1.0
                };
                _OffsetXAction.Previewed += _OffsetXAction_Previewed;
                _OffsetXAction.Finished += _Actions_Finished;
            }
            _OffsetXAction.Axis = new Ax1(_OffsetActionPivot, localCS.XDirection);
            WorkspaceController.StartLiveAction(_OffsetXAction);
            
            // Offset Y
            if (_OffsetYAction == null)
            {
                _OffsetYAction = new(this)
                {
                    Color = Colors.ActionGreen,
                    NoResize = true,
                    Length = 1.0
                };
                _OffsetYAction.Previewed += _OffsetYAction_Previewed;
                _OffsetYAction.Finished += _Actions_Finished;
            }
            _OffsetYAction.Axis = new Ax1(_OffsetActionPivot, localCS.YDirection);
            WorkspaceController.StartLiveAction(_OffsetYAction);
            
            // Offset Z
            if (_OffsetZAction == null)
            {
                _OffsetZAction = new(this)
                {
                    Color = Colors.ActionBlue,
                    NoResize = true,
                    Length = 1.0
                };
                _OffsetZAction.Previewed += _OffsetZAction_Previewed;
                _OffsetZAction.Finished += _Actions_Finished;
            }
            _OffsetZAction.Axis = new Ax1(_OffsetActionPivot, localCS.Direction);
            WorkspaceController.StartLiveAction(_OffsetZAction);

            _StartOffset = Entity.Offset;
        }

        //--------------------------------------------------------------------------------------------------

        void _OffsetXAction_Previewed(LiveAction liveaction)
        {
            if (!_IsMoving)
            {
                _IsMoving = true;
                _OffsetYAction.Deactivate();
                _OffsetZAction.Deactivate();
                WorkspaceController.HudManager?.SetHintMessage(this, "Adjust offset using gizmo, press 'CTRL' to round to grid stepping.");
            }

            var newOffset = _StartOffset.X + _OffsetXAction.Distance;
            if (_OffsetXAction.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
            {
                newOffset = Maths.RoundToNearest(newOffset, WorkspaceController.Workspace.GridStep);
            }

            if (Entity.Offset.X != newOffset)
            {
                Entity.Offset = new Vec(newOffset, _StartOffset.Y, _StartOffset.Z);
            }
            _OffsetXAction.Axis = new Ax1(_OffsetActionPivot.Translated(_OffsetXAction.Axis.Direction.ToVec(newOffset - _StartOffset.X)), _OffsetXAction.Axis.Direction);

            _HudElement ??= InteractiveContext.Current.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
            _HudElement?.SetValue($"Offset X: {Entity.Offset.X.ToInvariantString("F2")} mm");
        }

        //--------------------------------------------------------------------------------------------------

        void _OffsetYAction_Previewed(LiveAction liveaction)
        {
            if (!_IsMoving)
            {
                _IsMoving = true;
                _OffsetXAction.Deactivate();
                _OffsetZAction.Deactivate();
                WorkspaceController.HudManager?.SetHintMessage(this, "Adjust offset using gizmo, press 'CTRL' to round to grid stepping.");
            }

            var newOffset = _StartOffset.Y + _OffsetYAction.Distance;
            if (_OffsetYAction.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
            {
                newOffset = Maths.RoundToNearest(newOffset, WorkspaceController.Workspace.GridStep);
            }

            if (Entity.Offset.Y != newOffset)
            {
                Entity.Offset = new Vec(_StartOffset.X, newOffset, _StartOffset.Z);
            }
            _OffsetYAction.Axis = new Ax1(_OffsetActionPivot.Translated(_OffsetYAction.Axis.Direction.ToVec(newOffset - _StartOffset.Y)), _OffsetYAction.Axis.Direction);

            _HudElement ??= InteractiveContext.Current.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
            _HudElement?.SetValue($"Offset Y: {Entity.Offset.Y.ToInvariantString("F2")} mm");
        }

        //--------------------------------------------------------------------------------------------------

        void _OffsetZAction_Previewed(LiveAction liveaction)
        {
            if (!_IsMoving)
            {
                _IsMoving = true;
                _OffsetXAction.Deactivate();
                _OffsetYAction.Deactivate();
                WorkspaceController.HudManager?.SetHintMessage(this, "Adjust offset using gizmo, press 'CTRL' to round to grid stepping.");
            }

            var newOffset = _StartOffset.Z + _OffsetZAction.Distance;
            if (_OffsetZAction.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
            {
                newOffset = Maths.RoundToNearest(newOffset, WorkspaceController.Workspace.GridStep);
            }

            if (Entity.Offset.Z != newOffset)
            {
                Entity.Offset = new Vec(_StartOffset.X, _StartOffset.Y, newOffset);
            }
            _OffsetZAction.Axis = new Ax1(_OffsetActionPivot.Translated(_OffsetZAction.Axis.Direction.ToVec(newOffset - _StartOffset.Z)), _OffsetZAction.Axis.Direction);

            _HudElement ??= InteractiveContext.Current.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
            _HudElement?.SetValue($"Offset Z: {Entity.Offset.Z.ToInvariantString("F2")} mm");
        }

        //--------------------------------------------------------------------------------------------------

        void _Actions_Finished(LiveAction liveaction)
        {
            _IsMoving = false;
            _OffsetXAction.Deactivate();
            _OffsetYAction.Deactivate();
            _OffsetZAction.Deactivate();
            InteractiveContext.Current.UndoHandler.Commit();
            WorkspaceController.HudManager?.RemoveElement(_HudElement);
            _HudElement = null;
            WorkspaceController.HudManager?.SetHintMessage(this, null);
            _UpdateActions();
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        [AutoRegister]
        internal static void Register()
        {
            RegisterEditor<RevolveEditor>();
        }

        //--------------------------------------------------------------------------------------------------

    }
}