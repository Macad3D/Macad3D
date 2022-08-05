using System.Diagnostics;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public class CreateFlangeSheetTool : Tool
    {
        enum ToolMode
        {
            CreateNew,
            ReselectFace
        }

        //--------------------------------------------------------------------------------------------------

        readonly ToolMode _Mode;

        readonly Body _TargetBody;
        readonly Shape _TargetShape;
        
        readonly FlangeSheet _FlangeToChange;

        //--------------------------------------------------------------------------------------------------

        /// <summary>
        /// Create a new flange by selecting a target face.
        /// </summary>
        public CreateFlangeSheetTool(Body targetBody) 
        {
            _TargetBody = targetBody;
            _TargetShape = _TargetBody?.Shape;
            Debug.Assert(_TargetShape != null);
        }
        
        //--------------------------------------------------------------------------------------------------

        /// <summary>
        /// Reselect target face of an flange shape.
        /// </summary>
        public CreateFlangeSheetTool(FlangeSheet flangeToChange)
        {
            _FlangeToChange = flangeToChange;
            Debug.Assert(_FlangeToChange != null);
            _TargetBody = _FlangeToChange.Body;
            Debug.Assert(_TargetBody != null);
            _TargetShape = _FlangeToChange.Operands[0] as Shape;
            Debug.Assert(_TargetShape != null);

            _Mode = ToolMode.ReselectFace;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            if (_Mode == ToolMode.ReselectFace)
            {
                var visualShape = WorkspaceController.VisualObjects.Get(_TargetBody) as VisualShape;
                if (visualShape != null)
                {
                    visualShape.OverrideBrep = _TargetShape.GetTransformedBRep();
                    WorkspaceController.Invalidate();
                }
            }

            var toolAction = new SelectSubshapeAction(this, SubshapeTypes.Face, _TargetBody, new FaceSelectionFilter(FaceSelectionFilter.FaceType.Plane));
            if (!WorkspaceController.StartToolAction(toolAction))
            {
                return false;
            }
            toolAction.Finished += _OnActionFinished;

            WorkspaceController.HudManager?.SetHintMessage(this, "Select face to create flange to.");
            WorkspaceController.HudManager?.SetCursor(Cursors.SelectFace);
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionFinished(ToolAction toolAction)
        {
            bool finished = false;
            var selectAction = toolAction as SelectSubshapeAction;
            Debug.Assert(selectAction != null);

            if (selectAction.SelectedSubshapeType == SubshapeTypes.Face)
            {
                var face = TopoDS.Face(selectAction.SelectedSubshape);
                var brepAdaptor = new BRepAdaptor_Surface(face, true);
                if (brepAdaptor.GetGeomType() != GeomAbs_SurfaceType.GeomAbs_Plane)
                {
                    WorkspaceController.HudManager?.SetHintMessage(this, "Selected face is not a plane type surface.");
                }
                else
                {
                    selectAction.Stop();
                    Stop();
                    finished = true;

                    var faceRef = _TargetShape.GetSubshapeReference(_TargetShape.GetTransformedBRep(), face);
                    if (faceRef == null)
                    {
                        Messages.Error("A subshape reference could not be produced for this face.");
                        return;
                    }

                    if (_Mode == ToolMode.CreateNew)
                    {
                        // Create new
                        var flangeSheet = FlangeSheet.Create(_TargetBody, faceRef);
                        if (flangeSheet != null)
                        {
                            InteractiveContext.Current.UndoHandler.Commit();
                            InteractiveContext.Current.WorkspaceController.Selection.SelectEntity(_TargetBody);
                        }
                    }
                    else if(_Mode == ToolMode.ReselectFace)
                    {
                        // Reselected face
                        _FlangeToChange.Face = faceRef;
                        _FlangeToChange.Invalidate();
                        InteractiveContext.Current.UndoHandler.Commit();
                    }
                }
            }

            if (!finished)
            {
                selectAction.Reset();
            }

            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------
        
        public override void Stop()
        {
            var visualShape = WorkspaceController.VisualObjects.Get(_TargetBody) as VisualShape;
            if (visualShape != null)
            {
                visualShape.OverrideBrep = null;
                WorkspaceController.Invalidate();
            }
            base.Stop();
        }

        //--------------------------------------------------------------------------------------------------

    }
}