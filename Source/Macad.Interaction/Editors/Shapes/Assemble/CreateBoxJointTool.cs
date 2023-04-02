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

        protected override bool OnStart()
        {
            if (_TargetBody2 != null)
            {
                BoxJoint.Create(_TargetBody1, _TargetBody2);
                CommitChanges();
                Stop();
                WorkspaceController.Invalidate();
                return false;
            }

            var toolAction = new SelectEntityAction<Body>(this);
            if (!StartAction(toolAction))
            {
                return false;
            }
            toolAction.Previewed += _OnActionPreview;
            toolAction.Finished += _OnActionFinished;
            toolAction.Exclude(_TargetBody1);
            UpdateStatusText(null);
            SetCursor(Cursors.SelectShape);
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
            SetHintMessage(text);
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionPreview(ToolAction toolAction)
        {
            if (toolAction is not SelectEntityAction<Body> selectAction)
                return;

            UpdateStatusText(selectAction.SelectedEntity?.Name);
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionFinished(ToolAction toolAction)
        {
            if (toolAction is not SelectEntityAction<Body> selectAction)
                return;

            StopAction(selectAction);

            if (selectAction.SelectedEntity != null)
            {
                BoxJoint.Create(_TargetBody1, selectAction.SelectedEntity);
                CommitChanges();
            }

            Stop();

            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnEntitySelectionChanging(IEnumerable<InteractiveEntity> entitiesToSelect, IEnumerable<InteractiveEntity> entitiesToUnSelect)
        {
            // Allow shape selections
            return false;
        }

        //--------------------------------------------------------------------------------------------------

    }
}