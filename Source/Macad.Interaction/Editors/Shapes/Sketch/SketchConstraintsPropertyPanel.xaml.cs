using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.Linq;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using Macad.Core.Shapes;
using Macad.Presentation;
using Macad.Common;
using Macad.Core;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes
{
    public partial class SketchConstraintsPropertyPanel : PropertyPanel
    {
        public class ConstraintData
        {
            public SketchConstraint Constraint { get; set; }
            public string Type { get; set; }
            public string Info { get; set; }
            public double Parameter { get; set; }
            public string ParameterName { get; set; }
            public ValueUnits Units { get; set; }
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

        public List<ConstraintData> Constraints
        {
            get { return _Constraints; }
            set
            {
                if (_Constraints != value)
                {
                    _Constraints = value;
                    RaisePropertyChanged();
                }
            }
        }

        List<ConstraintData> _Constraints;

        //--------------------------------------------------------------------------------------------------

        void SketchEditTool_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
        {
            var tool = sender as SketchEditorTool;
            Debug.Assert(tool != null);

            if (e.PropertyName == "SelectedConstraints")
            {
                UpdatePointList();
            }
        }

        //--------------------------------------------------------------------------------------------------

        void UpdatePointList()
        {
            bool swapOrientation = false;
            if(InteractiveContext.Current?.WorkspaceController?.LockWorkingPlane ?? false)
            {
                swapOrientation = ((int) ((InteractiveContext.Current?.WorkspaceController?.ActiveViewport?.Twist ?? 0.0 + 45.0) / 90.0) & 0x01) == 1;
            }

            var newConstraints = new List<ConstraintData>();
            if (SketchEditorTool.SelectedConstraints != null)
            {
                newConstraints.AddRange(
                    (from selectedConstraint in SketchEditorTool.SelectedConstraints
                     select CreateConstraintData(selectedConstraint, swapOrientation)).Take(10));
            }
            Constraints = newConstraints;
        }

        //--------------------------------------------------------------------------------------------------

        ConstraintData CreateConstraintData(SketchConstraint constraint, bool swapOrientation)
        {
            var data = new ConstraintData
            {
                Constraint = constraint, 
                Info = ""
            };
            if ((constraint.Points != null) && constraint.Points.Any())
            {
                data.Info += (constraint.Points.Length == 1 ? "Point " : "Points ") + string.Join(", ", constraint.Points);
                if ((constraint.Segments != null) && constraint.Segments.Any())
                {
                    data.Info += " ";
                }
            }
            if ((constraint.Segments != null) && constraint.Segments.Any())
            {
                data.Info += (constraint.Segments.Length == 1 ? "Segment " : "Segments ") + string.Join(", ", constraint.Segments);
            }

            switch (constraint)
            {
                case SketchConstraintPerpendicular _:
                    data.Type = "Perpendicular";
                    break;
                case SketchConstraintHorizontal _:
                    data.Type = swapOrientation ? "Vertical" : "Horizontal";
                    break;
                case SketchConstraintVertical _:
                    data.Type = swapOrientation ? "Horizontal" : "Vertical";
                    break;
                case SketchConstraintParallel _:
                    data.Type = "Parallel";
                    break;
                case SketchConstraintConcentric _:
                    data.Type = "Concentric";
                    break;
                case SketchConstraintPointOnSegment _:
                    data.Type = "Point on Segment";
                    break;
                case SketchConstraintPointOnMidpoint _:
                    data.Type = "Point on Midpoint";
                    break;
                case SketchConstraintFixed fixedConstraint:
                    switch (fixedConstraint.Target)
                    {
                        case SketchConstraintFixed.TargetType.Point:
                            data.Type = "Fix Point";
                            break;
                        case SketchConstraintFixed.TargetType.Segment:
                            data.Type = "Fix Segment";
                            break;
                    }
                    break;
                case SketchConstraintEqual _:
                    data.Type = "Equal";
                    break;
                case SketchConstraintAngle _:
                    data.Type = "Inner Angle";
                    data.ParameterName = "Angle";
                    data.Parameter = constraint.Parameter;
                    data.Units = ValueUnits.Degree;
                    break;
                case SketchConstraintHorizontalDistance _:
                    data.Type = swapOrientation ? "Horiz. Distance" : "Vert. Distance";
                    data.ParameterName = "Distance";
                    data.Parameter = constraint.Parameter;
                    data.Units = ValueUnits.Length;
                    break;
                case SketchConstraintVerticalDistance _:
                    data.Type = swapOrientation ? "Vert. Distance" : "Horiz. Distance";
                    data.ParameterName = "Distance";
                    data.Parameter = constraint.Parameter;
                    data.Units = ValueUnits.Length;
                    break;
                case SketchConstraintLength _:
                    data.Type = "Length";
                    data.ParameterName = "Length";
                    data.Parameter = constraint.Parameter;
                    data.Units = ValueUnits.Length;
                    break;
                case SketchConstraintRadius _:
                    data.Type = "Radius";
                    data.ParameterName = "Radius";
                    data.Parameter = constraint.Parameter;
                    data.Units = ValueUnits.Length;
                    break;
                case SketchConstraintTangent _:
                    data.Type = "Tangent";
                    break;
                default:
                    data.Type = "Unknown";
                    break;
            }
            return data;
        }

        //--------------------------------------------------------------------------------------------------

        protected override void OnSourceUpdated(object sender, DataTransferEventArgs e)
        {
            var constraintData = (e.OriginalSource as Control)?.Tag as ConstraintData;
            if (constraintData == null) return;

            if (constraintData.ParameterName.IsNullOrEmpty())
                return;

            if(SketchEditorTool.Sketch.SetConstraintParameter(constraintData.Constraint, constraintData.Parameter))
                CommmitChange();
        }

        //--------------------------------------------------------------------------------------------------

        public override void Initialize(BaseObject instance)
        {
            SketchEditorTool = instance as SketchEditorTool;
            Debug.Assert(SketchEditorTool != null);

            SketchEditorTool.PropertyChanged += SketchEditTool_PropertyChanged;
            WorkspaceController.ActiveViewport.PropertyChanged += _ActiveViewport_OnPropertyChanged;
            InitializeComponent();
        }

        void _ActiveViewport_OnPropertyChanged(object sender, PropertyChangedEventArgs e)
        {
            if (e.PropertyName == nameof(Viewport.Twist))
            {
                UpdatePointList();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override void Cleanup()
        {
            if (SketchEditorTool != null)
            {
                SketchEditorTool.PropertyChanged -= SketchEditTool_PropertyChanged;
            }
            WorkspaceController.ActiveViewport.PropertyChanged -= _ActiveViewport_OnPropertyChanged;
        }

        //--------------------------------------------------------------------------------------------------

    }
}


