using System.Diagnostics;
using System.Linq;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public class EdgeModifierTool : Tool
    {
        readonly EdgeModifierBase _ModifierShape;
        ToggleSubshapesAction _Action;
        TopoDS_Shape _EdgeSourceShape;

        //--------------------------------------------------------------------------------------------------

        public EdgeModifierTool(EdgeModifierBase modifierShape)
        {
            _ModifierShape = modifierShape;
            Debug.Assert(_ModifierShape != null);
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            _ModifierShape.PropertyChanged += _ModifierShape_PropertyChanged;

            if (_ModifierShape.Operands.Count == 0)
                return false;

            _Action = new ToggleSubshapesAction(this);
            if (!WorkspaceController.StartToolAction(_Action))
                return false;
            _Action.Finished += _OnActionFinished;

            if (!UpdateEdgesToTool())
                return false;

            WorkspaceController.HudManager?.SetHintMessage(this, "Select edges to apply modifier on.");
            WorkspaceController.HudManager?.SetCursor(Cursors.SelectEdge);

            WorkspaceController.Invalidate();

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        public override void Stop()
        {
            //_Action?.Stop();
            base.Stop();
        }

        //--------------------------------------------------------------------------------------------------

        bool UpdateEdgesToTool()
        {
            var sourceShape = _ModifierShape.Predecessor as Shape;

            _EdgeSourceShape = sourceShape?.GetBRep(); 
            if (_EdgeSourceShape == null) return false;

            _Action.ClearSubshapes();

            var edges = _ModifierShape.FindValidEdges(_EdgeSourceShape).ToArray();
            var selected = _ModifierShape.GetAllContourEdges().ToArray();
            var trsf = _ModifierShape.GetTransformation();
            for (var i = 0; i < edges.Length; i++)
            {
                _Action.AddSubshape(edges[i], trsf, selected.Contains(edges[i]), i);
            }

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionFinished(ToolAction toolAction)
        {
            if (toolAction != _Action)
                return;

            var sourceShape = _ModifierShape.Predecessor as Shape;
            if (sourceShape == null) return;

            if (_Action.ChangedSubshape.IsSelected)
            {
                // Added
                var reference = sourceShape.GetSubshapeReference(_EdgeSourceShape, _Action.ChangedSubshape.Shape);
                if (reference == null) return;
                _ModifierShape.AddEdge(reference);
            }
            else
            {
                // Removed
                var reference = _ModifierShape.FindContourReference(_Action.ChangedSubshape.Shape.ToEdge());
                if (reference == null) return;
                _ModifierShape.RemoveEdge(reference);
            }
            
            InteractiveContext.Current.UndoHandler.Commit();
        }

        //--------------------------------------------------------------------------------------------------

        void _ModifierShape_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
        {
            if ((e.PropertyName == "Edges") && (_Action != null) && (WorkspaceController.CurrentToolAction == _Action))
            {
                UpdateEdgesToTool();
            }
        }

        //--------------------------------------------------------------------------------------------------

    }
}