using System.Collections.Generic;
using Macad.Interaction.Visual;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public class SketchEditorPointElement : SketchEditorElement
{
    public readonly int PointIndex;
    readonly Marker _Marker;

    public SketchEditorPointElement(SketchEditorTool sketchEditorTool, int pointIndex, Pnt2d point, Trsf transform, Pln plane)
        : base(sketchEditorTool, transform, plane)
    {
        PointIndex = pointIndex;

        var geomPoint = new Geom_CartesianPoint(point.X, point.Y, 0);
        geomPoint.Transform(Transform);
        _Marker = new Marker(SketchEditorTool.WorkspaceController, Marker.Styles.Bitmap | Marker.Styles.Topmost | Marker.Styles.NoClipPlane, 
                             SketchUtils.IsUnconnectedEndpoint(SketchEditorTool.Sketch, PointIndex) ? Marker.RectImage : Marker.BallImage )
        {
            IsSelectable = true
        };

        _Marker.Set(geomPoint);
    }

    //--------------------------------------------------------------------------------------------------

    public override void UpdateVisual()
    {
        _Marker.Color = IsSelected ? Colors.SketchEditorSelection : Colors.Marker;
    }

    //--------------------------------------------------------------------------------------------------

    public override void OnPointsChanged(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, Dictionary<int, int> markerCounts = default)
    {
        var point = points[PointIndex];
        var geomPoint = new Geom_CartesianPoint(point.X, point.Y, 0);
        geomPoint.Transform(Transform);

        _Marker.Set(geomPoint);
        _Marker.SetImage(SketchUtils.IsUnconnectedEndpoint(SketchEditorTool.Sketch, PointIndex) ? Marker.RectImage : Marker.BallImage);
    }

    //--------------------------------------------------------------------------------------------------

    public override void Activate(bool selectable)
    {
        _Marker.IsSelectable = selectable;
    }

    //--------------------------------------------------------------------------------------------------

    public override void Remove()
    {
        _Marker.Remove();
    }

    //--------------------------------------------------------------------------------------------------

    public override bool IsOwnerOf(AIS_InteractiveObject aisObject)
    {
        if (_Marker.AisObject == null)
            return false;

        return aisObject.Equals(_Marker.AisObject);
    }
}