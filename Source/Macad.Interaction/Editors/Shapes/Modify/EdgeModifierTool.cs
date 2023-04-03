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

        protected override bool OnStart()
        {
            _ModifierShape.PropertyChanged += _ModifierShape_PropertyChanged;

            if (_ModifierShape.Operands.Count == 0)
                return false;

            _Action = new ToggleSubshapesAction();
            if (!StartAction(_Action))
                return false;
            _Action.Finished += _Action_Finished;

            if (!UpdateEdgesToTool())
                return false;

            SetHintMessage("Select edges to apply modifier on.");
            SetCursor(Cursors.SelectEdge);

            WorkspaceController.Invalidate();

            return true;
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

        void _Action_Finished(ToggleSubshapesAction sender, ToggleSubshapesAction.EventArgs args)
        {
            var sourceShape = _ModifierShape.Predecessor as Shape;
            if (sourceShape == null) return;

            if (args.ChangedSubshape.IsSelected)
            {
                // Added
                var reference = sourceShape.GetSubshapeReference(_EdgeSourceShape, args.ChangedSubshape.Shape);
                if (reference == null) return;
                _ModifierShape.AddEdge(reference);
            }
            else
            {
                // Removed
                var reference = _ModifierShape.FindContourReference(args.ChangedSubshape.Shape.ToEdge());
                if (reference == null) return;
                _ModifierShape.RemoveEdge(reference);
            }
            
            CommitChanges();
        }

        //--------------------------------------------------------------------------------------------------

        void _ModifierShape_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
        {
            if (e.PropertyName == nameof(EdgeModifierBase.Edges) 
                && _Action != null 
                && WorkspaceController.CurrentTool?.CurrentAction == _Action)
            {
                UpdateEdgesToTool();
            }
        }

        //--------------------------------------------------------------------------------------------------

    }
}