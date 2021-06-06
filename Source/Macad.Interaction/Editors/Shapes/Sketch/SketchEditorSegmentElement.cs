using System.Collections.Generic;
using Macad.Interaction.Visual;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public class SketchEditorSegmentElement : SketchEditorElement
    {
        public int SegmentIndex;
        public SketchSegment Segment;
        public HintLine[] Hints;
        public AIS_InteractiveObject AisObject;
        bool _IsActive;

        static Prs3d_Drawer _HighlightDrawer;

        //--------------------------------------------------------------------------------------------------

        public SketchEditorSegmentElement(SketchEditorTool sketchEditorTool, int segmentIndex, SketchSegment segment, Trsf transform, Pln plane)
            : base(sketchEditorTool, transform, plane)
        {
            Segment = segment;
            SegmentIndex = segmentIndex;
        }

        //--------------------------------------------------------------------------------------------------

        public override void UpdateVisual()
        {
            AisObject?.SetColor(
                IsSelected ? Colors.SketchEditorSelection : 
                Segment.IsAuxilliary ? Colors.SketchEditorAuxillary :
                IsCreating ? Colors.SketchEditorCreating : 
                Colors.SketchEditorSegments);
        }

        //--------------------------------------------------------------------------------------------------

        public override void OnPointsChanged(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, Dictionary<int, int> markerCounts = default)
        {
            var ctx = SketchEditorTool.WorkspaceController.Workspace.AisContext;
            var edge = Segment.MakeEdge(points);
            if (edge == null)
                return;

            if (AisObject != null)
            {
                var aisShape = AisObject as AIS_Shape;
                aisShape.Set(edge.Located(new TopLoc_Location(Transform)));
                if (_IsActive)
                    ctx.Redisplay(aisShape, false);
                else
                    ctx.RecomputePrsOnly(aisShape, false);
            }
            else
            {
                var aisShape = new AIS_Shape(edge.Located(new TopLoc_Location(Transform)));
                aisShape.SetZLayer(-3); // TOP
                aisShape.SetWidth(2.0);

                if (_HighlightDrawer == null)
                {
                    _HighlightDrawer = new Prs3d_Drawer();
                    _HighlightDrawer.SetColor(Colors.Highlight);
                    _HighlightDrawer.SetDisplayMode(0);
                    _HighlightDrawer.SetZLayer(-3); // TOP
                }
                aisShape.SetDynamicHilightAttributes(_HighlightDrawer);

                var paramSet = InteractiveContext.Current.Parameters.Get<SketchEditorParameterSet>();
                aisShape.SetAngleAndDeviation(paramSet.DeviationAngle.ToRad());
                aisShape.SetColor(Colors.SketchEditorSegments);

                ctx.Display(aisShape, false);
                ctx.SetSelectionSensitivity(aisShape, 0, (int)(paramSet.SegmentSelectionSensitivity * 1.0));
                if (_IsActive)
                    ctx.Activate(aisShape, 0, false);
                else
                    ctx.Deactivate(aisShape);

                AisObject = aisShape;
                UpdateVisual();
            }

            UpdateHints(points);
        }

        //--------------------------------------------------------------------------------------------------

        void UpdateHints(Dictionary<int, Pnt2d> points)
        {
            if (Segment is SketchSegmentCircle)
            {
                var seg = (SketchSegmentCircle) Segment;
                if (Hints == null)
                {
                    Hints = new HintLine[]
                    {
                        new HintLine(SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost)
                    };
                }
                Hints[0].Set(points[seg.CenterPoint], points[seg.RimPoint], Plane);
                return;
            }
            if (Segment is SketchSegmentEllipticalArc)
            {
                var seg = (SketchSegmentEllipticalArc)Segment;
                if (Hints == null)
                {
                    Hints = new HintLine[]
                    {
                        new HintLine(SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost),
                        new HintLine(SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost)
                    };
                }
                Hints[0].Set(points[seg.CenterPoint], points[seg.StartPoint], Plane);
                Hints[1].Set(points[seg.CenterPoint], points[seg.EndPoint], Plane);
                return;
            }
            if (Segment is SketchSegmentBezier)
            {
                var seg = (SketchSegmentBezier)Segment;
                if (Hints == null)
                {
                    Hints = new HintLine[]
                    {
                        new HintLine(SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost),
                        new HintLine(SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost)
                    };
                }
                Hints[0].Set(points[seg.StartPoint], points[seg.Points[1]], Plane);
                Hints[1].Set(points[seg.EndPoint], points[seg.Points[(seg.Points.Length > 3)?2:1]], Plane);
                return;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override void Remove()
        {
            if (AisObject != null)
            {
                SketchEditorTool.WorkspaceController.Workspace.AisContext.Erase(AisObject, false);
                AisObject = null;
            }

            if (Hints != null)
            {
                foreach (var hintLine in Hints)
                {
                    hintLine.Remove();
                }
            }
            Hints = null;
        }

        //--------------------------------------------------------------------------------------------------

        public override void Activate(bool selectable)
        {
            _IsActive = selectable;
            if (AisObject == null)
                return;

            if(selectable)
            {
                SketchEditorTool.WorkspaceController.Workspace.AisContext.Activate(AisObject, 0, false);
            }
            else
            {
                SketchEditorTool.WorkspaceController.Workspace.AisContext.Deactivate(AisObject);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override bool IsOwnerOf(AIS_InteractiveObject aisObject)
        {
            return AisObject?.Equals(aisObject) ?? false;
        }

        //--------------------------------------------------------------------------------------------------

        #region Statics

        

        #endregion
    }
}