using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public partial class SketchSegmentsPropertyPanel : PropertyPanel
{
    public class SegmentData : BaseObject
    {
        public Sketch Sketch { get; }
        public SketchSegment Segment { get; }
        public int Index { get; }
        public string Type { get; }
        public string Info { get; }
        public bool Auxilliary => Segment.IsAuxilliary;
        //--------------------------------------------------------------------------------------------------

        public static RelayCommand<SegmentData> ToggleAuxilliaryCommand { get; } = new(
            (segmentData) =>
            {
                segmentData?._ToggleAuxilliary();
            }
        );

        //--------------------------------------------------------------------------------------------------

        void _ToggleAuxilliary()
        {
            Sketch.SaveUndo(Sketch.ElementType.Segment);
            Segment.IsAuxilliary = !Segment.IsAuxilliary;
            Sketch.OnElementsChanged(Sketch.ElementType.Segment);
            Sketch.Invalidate();
            InteractiveContext.Current.UndoHandler.Commit();
        }

        //--------------------------------------------------------------------------------------------------

        public SegmentData(Sketch sketch, SketchSegment segment)
        {
            Sketch = sketch;
            Segment = segment;
            Index = Sketch.Segments.FirstOrDefault(kvp => kvp.Value == segment).Key;

            var points = Sketch.Points;
            if (segment is SketchSegmentCircle)
            {
                Type = "Circle";
                Info = "Radius: " + ((SketchSegmentCircle) segment).Radius(points).Round() + " mm";
            }
            else if (segment is SketchSegmentLine)
            {
                Type = "Line";
                Info = "Length: " + ((SketchSegmentLine)segment).Length(points).Round() + " mm";
            }
            else if (segment is SketchSegmentEllipse)
            {
                Type = "Ellipse";
                Info = "";
            }
            else if (segment is SketchSegmentArc)
            {
                Type = "Circular Arc";
                Info = "Radius: " + ((SketchSegmentArc)segment).Radius(points).Round() + " mm";
            }
            else if (segment is SketchSegmentEllipticalArc)
            {
                Type = "Elliptical Arc";
                Info = "";
            }
            else if (segment is SketchSegmentBezier)
            {
                Type = "Bézier Curve";
                var grade = ((SketchSegmentBezier) segment).Points.Length - 1;
                switch (grade)
                {
                    case 1:  Info = "1st Grade"; break;
                    case 2:  Info = "2nd Grade"; break;
                    case 3:  Info = "3rd Grade"; break;
                    default: Info = grade + "th Grade"; break;
                }
                
            }
        }

        //--------------------------------------------------------------------------------------------------
    }

    //--------------------------------------------------------------------------------------------------

    public SketchEditorTool SketchEditorTool
    {
        get { return _SketchEditorTool; }
        set
        {
            if (_SketchEditorTool != value)
            {
                _SketchEditorTool = value;
                RaisePropertyChanged();
            }
        }
    }

    SketchEditorTool _SketchEditorTool;

    //--------------------------------------------------------------------------------------------------

    public List<SegmentData> Segments
    {
        get { return _Segments; }
        set
        {
            if (_Segments != value)
            {
                _Segments = value;
                RaisePropertyChanged();
            }
        }
    }

    List<SegmentData> _Segments;

    //--------------------------------------------------------------------------------------------------


    void SketchEditTool_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        var tool = sender as SketchEditorTool;
        Debug.Assert(tool != null);

        if (e.PropertyName == "SelectedSegments")
        {
            UpdateSegmentList();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void UpdateSegmentList()
    {
        var newSegments = new List<SegmentData>();
        if (SketchEditorTool.SelectedSegments != null)
        {
            newSegments.AddRange(
                (from selectedSegment in SketchEditorTool.SelectedSegments
                 select new SegmentData(SketchEditorTool.Sketch, selectedSegment)).Take(10));
        }
        Segments = newSegments;
    }

    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        SketchEditorTool = instance as SketchEditorTool;
        Debug.Assert(SketchEditorTool != null);

        SketchEditorTool.PropertyChanged += SketchEditTool_PropertyChanged;
        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
        if (SketchEditorTool != null)
        {
            SketchEditorTool.PropertyChanged -= SketchEditTool_PropertyChanged;
        }
    }

    //--------------------------------------------------------------------------------------------------

}