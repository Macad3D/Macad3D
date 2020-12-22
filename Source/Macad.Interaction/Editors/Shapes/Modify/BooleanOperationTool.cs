using System.Collections.Generic;
using System.Linq;
using Macad.Core.Shapes;
using Macad.Core.Topology;

namespace Macad.Interaction.Editors.Shapes
{
    public class BooleanOperationTool : Tool
    {
        public enum Operations
        {
            Cut,
            Fuse,
            Common
        }

        //--------------------------------------------------------------------------------------------------

        public Operations Operation { get; }

        //--------------------------------------------------------------------------------------------------

        Body _SourceBody;

        //--------------------------------------------------------------------------------------------------

        public BooleanOperationTool(Operations operation) 
        {
            Operation = operation;
            switch (Operation)
            {
                case BooleanOperationTool.Operations.Cut:
                    Id = "BooleanCutTool";
                    break;
                case BooleanOperationTool.Operations.Fuse:
                    Id = "BooleanFuseTool";
                    break;
                case BooleanOperationTool.Operations.Common:
                    Id = "BooleanCommonTool";
                    break;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            _SourceBody = WorkspaceController.Selection.SelectedEntities.First() as Body;

            if (WorkspaceController.Selection.SelectedEntities.Count > 1)
            {
                var shapeOperands = WorkspaceController.Selection.SelectedEntities
                    .Skip(1)
                    .OfType<Body>()
                    .Select(body => (IShapeOperand)new BodyShapeOperand(body))
                    .ToArray();
                Execute(_SourceBody, shapeOperands);
                Stop();
                WorkspaceController.Invalidate();
                return false;
            }
            else
            {
                var toolAction = new SelectEntityAction<Body>(this);
                if (!WorkspaceController.StartToolAction(toolAction))
                {
                    return false;
                }
                toolAction.Previewed += _OnActionPreview;
                toolAction.Finished += _OnActionFinished;
                toolAction.Exclude(_SourceBody);

                UpdateStatusText(null);
                WorkspaceController.HudManager?.SetCursor(Cursors.SelectShape);
                return true;
            }
        }

        //--------------------------------------------------------------------------------------------------

        void UpdateStatusText(string shapeName)
        {
            string text = "Select shape as operator to the ";
            switch(Operation)
            {
                case Operations.Cut:
                    text += "cut operation";
                    break;

                case Operations.Fuse:
                    text += "fuse operation";
                    break;

                case Operations.Common:
                    text += "common operation";
                    break;
            }

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

            ModifierBase boolOpShape = null;
            if (ta.SelectedEntity != null)
            {
                boolOpShape = Execute(_SourceBody, new IShapeOperand[] { new BodyShapeOperand(ta.SelectedEntity) });
            }

            Stop();

            if (boolOpShape != null)
            {
                InteractiveContext.Current.UndoHandler.Commit();
                InteractiveContext.Current.WorkspaceController.Selection.SelectEntity(_SourceBody);
            }

            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        ModifierBase Execute(Body body, IShapeOperand[] operands)
        {
            InteractiveContext.Current.WorkspaceController.Selection.SelectEntity(null);

            ModifierBase boolOpShape = null;
            switch (Operation)
            {
                case Operations.Cut:
                    boolOpShape = BooleanCut.Create(body, operands);
                    break;

                case Operations.Common:
                    boolOpShape = BooleanCommon.Create(body, operands);
                    break;

                case Operations.Fuse:
                    boolOpShape = BooleanFuse.Create(body, operands);
                    break;
            }

            foreach (var operandBody in operands.OfType<BodyShapeOperand>())
            {
                operandBody.Body.IsVisible = false;
            }

            return boolOpShape;
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