using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.Linq;
using System.Windows.Controls;
using System.Windows.Data;
using Macad.Core.Shapes;
using Macad.Presentation;
using Macad.Common;
using Macad.Core;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes;

public partial class SketchConstraintsPropertyPanel : PropertyPanel
{
    public class ConstraintData : BaseObject
    {
        public Sketch Sketch { get; }
        public SketchConstraint Constraint { get; set; }
        public string Type { get; set; }
        public string Info { get; set; }
        public double Parameter { get; set; }
        public string ParameterName { get; set; }
        public string ToggleName { get; set; }
        public bool ToggleState { get; set; }
        public ValueUnits Units { get; set; }

        //--------------------------------------------------------------------------------------------------

        public static RelayCommand<ConstraintData> ToggleCommand { get; } = new(
            (constraintData) => { constraintData._Toggle(); }
        );

        //--------------------------------------------------------------------------------------------------

        void _Toggle()
        {
            if (Constraint is SketchConstraintSmoothCorner smoothCornerConstraint)
            {
                Sketch.SaveUndo(Sketch.ElementType.Constraint);
                smoothCornerConstraint.Symmetric = !smoothCornerConstraint.Symmetric;
                ToggleState = smoothCornerConstraint.Symmetric;
                Sketch.OnElementsChanged(Sketch.ElementType.Constraint);
                Sketch.SolveConstraints(true);
                Sketch.Invalidate();
                InteractiveContext.Current.UndoHandler.Commit();
                RaisePropertyChanged(nameof(ToggleState));
            }
        }

        //--------------------------------------------------------------------------------------------------

        internal ConstraintData(Sketch sketch, SketchConstraint constraint, bool swapOrientation)
        {
            Sketch = sketch;
            Constraint = constraint;
            Info = "";
            if ((constraint.Points != null) && constraint.Points.Any())
            {
                Info += (constraint.Points.Length == 1 ? "Point " : "Points ") + string.Join(", ", constraint.Points);
                if ((constraint.Segments != null) && constraint.Segments.Any())
                {
                    Info += " ";
                }
            }

            if ((constraint.Segments != null) && constraint.Segments.Any())
            {
                Info += (constraint.Segments.Length == 1 ? "Segment " : "Segments ") + string.Join(", ", constraint.Segments);
            }

            switch (constraint)
            {
                case SketchConstraintPerpendicular _:
                    Type = "Perpendicular";
                    break;
                case SketchConstraintHorizontal _:
                    Type = swapOrientation ? "Vertical" : "Horizontal";
                    break;
                case SketchConstraintVertical _:
                    Type = swapOrientation ? "Horizontal" : "Vertical";
                    break;
                case SketchConstraintParallel _:
                    Type = "Parallel";
                    break;
                case SketchConstraintConcentric _:
                    Type = "Concentric";
                    break;
                case SketchConstraintPointOnSegment _:
                    Type = "Point on Segment";
                    break;
                case SketchConstraintPointOnMidpoint _:
                    Type = "Point on Midpoint";
                    break;
                case SketchConstraintFixed fixedConstraint:
                    switch (fixedConstraint.Target)
                    {
                        case SketchConstraintFixed.TargetType.Point:
                            Type = "Fix Point";
                            break;
                        case SketchConstraintFixed.TargetType.Segment:
                            Type = "Fix Segment";
                            break;
                    }

                    break;
                case SketchConstraintEqual _:
                    Type = "Equal";
                    break;
                case SketchConstraintAngle _:
                    Type = "Inner Angle";
                    ParameterName = "Angle";
                    Parameter = constraint.Parameter;
                    Units = ValueUnits.Degree;
                    break;
                case SketchConstraintHorizontalDistance _:
                    Type = swapOrientation ? "Horiz. Distance" : "Vert. Distance";
                    ParameterName = "Distance";
                    Parameter = constraint.Parameter;
                    Units = ValueUnits.Length;
                    break;
                case SketchConstraintVerticalDistance _:
                    Type = swapOrientation ? "Vert. Distance" : "Horiz. Distance";
                    ParameterName = "Distance";
                    Parameter = constraint.Parameter;
                    Units = ValueUnits.Length;
                    break;
                case SketchConstraintLength _:
                    Type = "Length";
                    ParameterName = "Length";
                    Parameter = constraint.Parameter;
                    Units = ValueUnits.Length;
                    break;
                case SketchConstraintRadius _:
                    Type = "Radius";
                    ParameterName = "Radius";
                    Parameter = constraint.Parameter;
                    Units = ValueUnits.Length;
                    break;
                case SketchConstraintTangent _:
                    Type = "Tangent";
                    break;
                case SketchConstraintSmoothCorner smoothCornerConstraint:
                    Type = "Smooth Corner";
                    ToggleName = "Symmetric";
                    ToggleState = smoothCornerConstraint.Symmetric;
                    break;
                default:
                    Type = "Unknown";
                    break;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

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

    public List<ConstraintData> Constraints
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
        Viewport.ParameterChanged += _Viewport_ParameterChanged;
        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
        if (SketchEditorTool != null)
        {
            SketchEditorTool.PropertyChanged -= _SketchEditTool_PropertyChanged;
        }
        Viewport.ParameterChanged -= _Viewport_ParameterChanged;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnSourceUpdated(object sender, DataTransferEventArgs e)
    {
        var constraintData = (e.OriginalSource as Control)?.Tag as ConstraintData;
        if (constraintData == null) return;

        if (constraintData.ParameterName.IsNullOrEmpty())
            return;

        if (SketchEditorTool.Sketch.SetConstraintParameter(constraintData.Constraint, constraintData.Parameter))
        {
            SketchEditorTool.Sketch.SolveConstraints(true);
            CommitChange();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Callbacks

    void _SketchEditTool_PropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(SketchEditorTool.SelectedConstraints))
        {
            _UpdatePointList();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdatePointList()
    {
        bool swapOrientation = false;
        if(InteractiveContext.Current?.WorkspaceController?.LockWorkingPlane ?? false)
        {
            swapOrientation = ((int) ((SketchEditorTool.ViewRotation + 45.0) / 90.0) & 0x01) == 1;
        }

        var newConstraints = new List<ConstraintData>();
        if (SketchEditorTool.SelectedConstraints != null)
        {
            newConstraints.AddRange(
                (from selectedConstraint in SketchEditorTool.SelectedConstraints
                    select new ConstraintData(SketchEditorTool.Sketch, selectedConstraint, swapOrientation)).Take(10));
        }
        Constraints = newConstraints;
    }

    //--------------------------------------------------------------------------------------------------

    void _Viewport_ParameterChanged(Viewport viewport)
    {
        _UpdatePointList();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}