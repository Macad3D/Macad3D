using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.Linq;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public partial class SketchSegmentsPropertyPanel : PropertyPanel
{
    #region SegmentData

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
            segmentData =>
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
            switch (segment)
            {
                case SketchSegmentCircle circle:
                    Type = "Circle";
                    Info = "Radius: " + circle.Radius(points).Round() + " mm";
                    break;
                case SketchSegmentLine line:
                    Type = "Line";
                    Info = "Length: " + line.Length(points).Round() + " mm";
                    break;
                case SketchSegmentEllipse:
                    Type = "Ellipse";
                    Info = "";
                    break;
                case SketchSegmentArc arc:
                    Type = "Circular Arc";
                    Info = "Radius: " + arc.Radius(points).Round() + " mm";
                    break;
                case SketchSegmentEllipticalArc:
                    Type = "Elliptical Arc";
                    Info = "";
                    break;
                case SketchSegmentBezier bezier:
                {
                    Type = "Bézier Curve";
                    var grade = bezier.Points.Length - 1;
                    switch (grade)
                    {
                        case 1:  Info = "1st Grade"; break;
                        case 2:  Info = "2nd Grade"; break;
                        case 3:  Info = "3rd Grade"; break;
                        default: Info = grade + "th Grade"; break;
                    }

                    break;
                }
            }
        }
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Properties

    public SketchEditorTool SketchEditorTool
    {
        get;
        set
        {
            if (field != value)
            {
                field = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public List<SegmentData> Segments
    {
        get;
        set
        {
            if (field != value)
            {
                field = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Property Panel

    public override void Initialize(BaseObject instance)
    {
        SketchEditorTool = instance as SketchEditorTool;
        Debug.Assert(SketchEditorTool != null);

        SketchEditorTool.PropertyChanged += _SketchEditTool_PropertyChanged;
        SketchEditorTool.Sketch.PropertyChanged += _Sketch_PropertyChanged;
        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
        if (SketchEditorTool != null)
        {
            SketchEditorTool.PropertyChanged -= _SketchEditTool_PropertyChanged;
            SketchEditorTool.Sketch.PropertyChanged -= _Sketch_PropertyChanged;
            SketchEditorTool = null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Callbacks

    void _SketchEditTool_PropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(SketchEditorTool.SelectedSegments))
        {
            _UpdateSegmentList();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _Sketch_PropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        if (e.PropertyName is nameof(Sketch.Segments) or nameof(Sketch.Points))
        {
            _UpdateSegmentList();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateSegmentList()
    {
        var newSegments = new List<SegmentData>();
        if (SketchEditorTool.SelectedSegments != null)
        {
            newSegments.AddRange(SketchEditorTool.SelectedSegments
                .Select(seg => new SegmentData(SketchEditorTool.Sketch, seg))
                .Take(10));
        }
        Segments = newSegments;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}