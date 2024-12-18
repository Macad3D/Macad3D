using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Windows.Controls;
using System.Windows.Data;
using Macad.Common;
using Macad.Interaction.Panels;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public partial class SketchPointsPropertyPanel : PropertyPanel
{
    public class PointData
    {
        public int Index { get; set; }
        public double X { get; set; }
        public double Y { get; set; }
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

    public List<PointData> Points
    {
        get { return _Points; }
        set
        {
            if (_Points != value)
            {
                _Points = value;
                RaisePropertyChanged();
            }
        }
    }

    List<PointData> _Points;

    //--------------------------------------------------------------------------------------------------

    void SketchEditTool_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        var tool = sender as SketchEditorTool;
        Debug.Assert(tool != null);

        if (e.PropertyName == "SelectedPoints")
        {
            UpdatePointList();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void UpdatePointList()
    {
        var newPoints = new List<PointData>();
        if (SketchEditorTool.SelectedPoints != null)
        {
            newPoints.AddRange(
                (from selectedPoint in SketchEditorTool.SelectedPoints
                 let pnt = SketchEditorTool.Sketch.Points[selectedPoint]
                 select new PointData()
                 {
                     Index = selectedPoint,
                     X = pnt.X,
                     Y = pnt.Y
                 }).Take(10));
        }
        Points = newPoints;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnSourceUpdated(object sender, DataTransferEventArgs e)
    {
        var pointData = (e.OriginalSource as Control)?.Tag as PointData;
        if (pointData == null) return;

        if (SketchEditorTool.Sketch.SetPoint(pointData.Index, new Pnt2d(pointData.X, pointData.Y)))
        {
            // Run solver 
            SketchEditorTool.Sketch.SolveConstraints(true, [pointData.Index]);

            CommitChange();
        }
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