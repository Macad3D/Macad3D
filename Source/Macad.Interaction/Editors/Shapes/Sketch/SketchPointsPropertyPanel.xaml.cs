using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.Linq;
using System.Windows.Controls;
using System.Windows.Data;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public partial class SketchPointsPropertyPanel : PropertyPanel
{
    #region Properties

    public class PointData
    {
        public int Index { get; set; }
        public double X { get; set; }
        public double Y { get; set; }
    }

    //--------------------------------------------------------------------------------------------------

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

    public List<PointData> Points
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

    #endregion

    #region Callbacks

    void _SketchEditTool_PropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(SketchEditorTool.SelectedPoints))
        {
            _UpdatePointList();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _Sketch_PropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(Sketch.Points))
        {
            _UpdatePointList();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdatePointList()
    {
        var newPoints = new List<PointData>();
        if (SketchEditorTool.SelectedPoints != null)
        {
            newPoints.AddRange(
                SketchEditorTool.SelectedPoints
                    .Select(pi =>
                    {
                        var pnt = SketchEditorTool.Sketch.Points[pi];
                        return new PointData { Index = pi, X = pnt.X, Y = pnt.Y };
                    })
                    .Take(10));
        }
        Points = newPoints;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}