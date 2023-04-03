using System;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction
{
    public class AxisValueAction : ToolAction
    {
        #region Events

        public class EventArgs
        {
            public double Value { get; init; }
            public double Distance { get; init; }
            public MouseEventData MouseEventData { get; init; }
        }

        public delegate void EventHandler(AxisValueAction sender, EventArgs args);
        public event EventHandler Preview;
        public event EventHandler Finished;
        
        //--------------------------------------------------------------------------------------------------

        #endregion

        double _CurrentValue;
        double _CurrentDistance;
        readonly Ax1 _Axis;

        //--------------------------------------------------------------------------------------------------

        public override SnapMode SupportedSnapModes => SnapMode.Vertex | SnapMode.Edge;

        //--------------------------------------------------------------------------------------------------

        public AxisValueAction(object owner, Ax1 axis) 
            : base()
        {
            _Axis = axis;
        }

        //--------------------------------------------------------------------------------------------------

        protected override bool OnStart()
        {
            OpenSelectionContext();
            HintLine hintLine = new(WorkspaceController, HintStyle.ThinDashed);
            Add(hintLine);
            hintLine.Set(_Axis);
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        protected override void Cleanup()
        {
            Preview = null;
            Finished = null;
            base.Cleanup();
        }

        //--------------------------------------------------------------------------------------------------

        bool _ProcessMouseInput(MouseEventData data)
        {
            bool anyResult = false;

            double distance;
            double? value = _ProcessMouseInputForAxis(data, out distance);
            if (value.HasValue)
            {
                _CurrentValue = value.Value;
                _CurrentDistance = distance;
                anyResult = true;
            }

            return anyResult;
        }

        //--------------------------------------------------------------------------------------------------

        double? _ProcessMouseInputForAxis(MouseEventData data, out double distance)
        {
            var planeDir = WorkspaceController.ActiveViewport.GetRightDirection();
            if (planeDir.IsParallel(_Axis.Direction, 0.1))
            {
                planeDir = WorkspaceController.ActiveViewport.GetUpDirection();
            }
            planeDir.Cross(_Axis.Direction);
            //Console.WriteLine("PlaneDir: {0:0.00} | {1:0.00} | {2:0.00}", planeDir.X(), planeDir.Y(), planeDir.Z());
            var plane = new Pln(new Ax3(_Axis.Location, planeDir, _Axis.Direction));

            var snapInfo = WorkspaceController.SnapHandler.Snap(data);
            var snapPoint = WorkspaceController.SnapHandler.SnapOnPlane(snapInfo, plane);
            if (snapPoint != null)
            {
                // Point snapped
                var extrema = new Extrema_ExtPC(ElSLib.Value(snapPoint.Value.X, snapPoint.Value.Y, plane), new GeomAdaptor_Curve(new Geom_Line(_Axis)), 1.0e-10);
                if (extrema.IsDone() && extrema.NbExt() >= 1)
                {
                    var value = extrema.Point(1).Parameter();
                    distance = snapInfo.Point.Distance(_Axis.Location);
                    return value;
                }
            }
            else
            {
                Pnt convertedPoint;
                if (WorkspaceController.ActiveViewport.ScreenToPoint(plane, Convert.ToInt32(data.ScreenPoint.X), Convert.ToInt32(data.ScreenPoint.Y), out convertedPoint))
                {
                    var extrema = new Extrema_ExtPC(convertedPoint, new GeomAdaptor_Curve(new Geom_Line(_Axis)), 1.0e-10);
                    if (extrema.IsDone() && extrema.NbExt() >= 1)
                    {
                        var value = extrema.Point(1).Parameter();
                        distance = convertedPoint.Distance(_Axis.Location);
                        return value;
                    }
                }

            }
            distance = 0;
            return null;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnMouseMove(MouseEventData data)
        {
            if (!IsFinished)
            {
                if (_ProcessMouseInput(data))
                {
                    WorkspaceController.Invalidate();

                    EventArgs args = new()
                    {
                        Value = _CurrentValue,
                        Distance = _CurrentDistance,
                        MouseEventData = data
                    };
                    Preview?.Invoke(this, args);
                }
            }
            return base.OnMouseMove(data);
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnMouseUp(MouseEventData data)
        {
            if (!IsFinished)
            {
                if (_ProcessMouseInput(data))
                {
                    WorkspaceController.Invalidate();
                    IsFinished = true;

                    EventArgs args = new()
                    {
                        Value = _CurrentValue,
                        Distance = _CurrentDistance,
                        MouseEventData = data
                    };
                    Finished?.Invoke(this, args);
                }
            }
            return true;
        }
        
        //--------------------------------------------------------------------------------------------------

        public override bool OnMouseDown(MouseEventData data)
        {
            return true; // Supress Rubberband Selection
        }

        //--------------------------------------------------------------------------------------------------

    }
}