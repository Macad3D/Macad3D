using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Macad.Core.Shapes;
using Macad.Core.Topology;

namespace Macad.Interaction.Editors.Shapes
{
    public class CreateBoxJointTool : Tool
    {
        readonly Body _TargetBody1;
        readonly Body _TargetBody2;

        //--------------------------------------------------------------------------------------------------

        public CreateBoxJointTool(Body body1, Body body2=null)
        {
            _TargetBody1 = body1;
            Debug.Assert(_TargetBody1 != null);
            _TargetBody2 = body2;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            if (_TargetBody2 != null)
            {
                var boxJoint = BoxJoint.Create(_TargetBody1, _TargetBody2);
                InteractiveContext.Current.UndoHandler.Commit();
                Stop();
                WorkspaceController.Invalidate();
                return false;
            }

            var toolAction = new SelectEntityAction<Body>(this);
            if (!WorkspaceController.StartToolAction(toolAction))
            {
                return false;
            }
            toolAction.Previewed += _OnActionPreview;
            toolAction.Finished += _OnActionFinished;
            toolAction.Exclude(_TargetBody1);
            UpdateStatusText(null);
            WorkspaceController.HudManager?.SetCursor(Cursors.SelectShape);
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void UpdateStatusText(string shapeName)
        {
            string text = "Select shape to build a box joint with";

            if (string.IsNullOrEmpty(shapeName))
            {
                text += ".";
            }
            else
            {
                text += ": " + shapeName;
            }
            StatusText = text;
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionPreview(ToolAction toolAction)
        {
            var ta = toolAction as SelectEntityAction<Body>;
            if (ta == null)
                return;

            if (ta.SelectedEntity != null)
            {
                UpdateStatusText(ta.SelectedEntity.Name);
            }
            else
            {
                UpdateStatusText(null);
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionFinished(ToolAction toolAction)
        {
            var ta = toolAction as SelectEntityAction<Body>;
            if (ta == null)
                return;

            ta.Stop();

            if (ta.SelectedEntity != null)
            {
                var boxJoint = BoxJoint.Create(_TargetBody1, ta.SelectedEntity);
                InteractiveContext.Current.UndoHandler.Commit();
            }

            Stop();

            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnEntitySelectionChanging(IEnumerable<Entity> entitiesToSelect, IEnumerable<Entity> entitiesToUnSelect)
        {
            // Allow shape selections
            return false;
        }

        //--------------------------------------------------------------------------------------------------

    }
}