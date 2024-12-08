using System.Collections.Generic;
using System.Linq;
using Macad.Interaction.Visual;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Occt.Helper;

namespace Macad.Interaction.Editors.Shapes;

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
            (IsSelected ? Colors.SketchEditorSelection : 
            Segment.IsAuxilliary ? Colors.SketchEditorAuxillary :
            IsCreating ? Colors.SketchEditorCreating : 
            Colors.SketchEditorSegments)
            .ToQuantityColor());
    }

    //--------------------------------------------------------------------------------------------------

    public override void OnPointsChanged(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, Dictionary<int, int> markerCounts = default)
    {
        var ctx = SketchEditorTool.WorkspaceController.AisContext;
        var edge = Segment.MakeEdge(points);
        if (edge == null)
        {
            Remove();
            return;
        }

        if (AisObject != null)
        {
            var aisShape = AisObject as AIS_Shape;
            aisShape.Set(edge.Located(new TopLoc_Location(Transform)));
            ctx.Redisplay(aisShape, false);
            Activate(_IsActive);
        }
        else
        {
            var aisShape = new AIS_Shape(edge.Located(new TopLoc_Location(Transform)));
            aisShape.SetZLayer(-3); // TOP
            aisShape.SetWidth(2.0);
            AisHelper.DisableGlobalClipPlanes(aisShape);

            if (_HighlightDrawer == null)
            {
                _HighlightDrawer = new Prs3d_Drawer();
                _HighlightDrawer.SetColor(Colors.Highlight.ToQuantityColor());
                _HighlightDrawer.SetDisplayMode(0);
                _HighlightDrawer.SetZLayer(-3); // TOP
            }
            aisShape.SetDynamicHilightAttributes(_HighlightDrawer);

            var paramSet = InteractiveContext.Current.Parameters.Get<SketchEditorParameterSet>();
            aisShape.SetAngleAndDeviation(paramSet.DeviationAngle.ToRad());
            aisShape.SetColor(Colors.SketchEditorSegments.ToQuantityColor());

            ctx.Display(aisShape, false);
            ctx.SetSelectionSensitivity(aisShape, 0, (int)(paramSet.SegmentSelectionSensitivity * 10.0));
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
        if (Segment is SketchSegmentCircle circle)
        {
            Hints ??= new HintLine[]
            {
                new(SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost )
            };
            Hints[0].Set(points[circle.CenterPoint], points[circle.RimPoint], Plane);
            return;
        }
        if (Segment is SketchSegmentEllipse ellipse)
        {
            Hints ??= new HintLine[]
            {
                new(SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost ),
                new(SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost )
            };
            Hints[0].Set(points[ellipse.CenterPoint], points[ellipse.RimPoint1], Plane);
            Hints[1].Set(points[ellipse.CenterPoint], points[ellipse.RimPoint2], Plane);
            return;
        }
        if (Segment is SketchSegmentEllipticalArc arc)
        {
            Hints ??= new HintLine[]
            {
                new(SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost),
                new(SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost)
            };
            Hints[0].Set(points[arc.CenterPoint], points[arc.StartPoint], Plane);
            Hints[1].Set(points[arc.CenterPoint], points[arc.EndPoint], Plane);
            return;
        }
        if (Segment is SketchSegmentBezier bezier)
        {
            Hints ??= bezier.Points
                            .Skip(1)
                            .Select(_ => new HintLine(SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost))
                            .ToArray();
            for (int i = 0; i < Hints.Length; i++)
            {
                Hints[i].Set(points[bezier.Points[i]], points[bezier.Points[i+1]], Plane);
            }
            return;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Remove()
    {
        if (AisObject != null)
        {
            SketchEditorTool.WorkspaceController.AisContext.Erase(AisObject, false);
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
            SketchEditorTool.WorkspaceController.AisContext.Activate(AisObject, 0, false);
        }
        else
        {
            SketchEditorTool.WorkspaceController.AisContext.Deactivate(AisObject);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override bool IsOwnerOf(AIS_InteractiveObject aisObject)
    {
        return AisObject?.Equals(aisObject) ?? false;
    }

    //--------------------------------------------------------------------------------------------------

}