using System;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction
{
    public class AxisValueAction : ToolAction
    {
        public double Value { get; private set; }
        public double Distance { get; private set; }

        readonly Ax1 _Axis;
        SelectionContext _SelectionContext;
        HintLine _HintLine;

        //--------------------------------------------------------------------------------------------------

        public override SnapMode SupportedSnapModes => SnapMode.Vertex | SnapMode.Edge;

        //--------------------------------------------------------------------------------------------------

        public AxisValueAction(object owner, Ax1 axis) 
            : base(owner)
        {
            _Axis = axis;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            _SelectionContext = WorkspaceController.Selection.OpenContext();
            _HintLine = new HintLine(WorkspaceController, HintStyle.ThinDashed);
            _HintLine.Set(_Axis);
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        bool _ProcessMouseInput(MouseEventData data)
        {
            bool anyResult = false;

            double distance;
            double? value = _ProcessMouseInputForAxis(data, out distance);
            if (value.HasValue)
            {
                Value = value.Value;
                Distance = distance;
                anyResult = true;
            }

            return anyResult;
        }

        //--------------------------------------------------------------------------------------------------

        double? _ProcessMouseInputForAxis(MouseEventData data, out double distance)
        {
            var planeDir = WorkspaceController.ActiveViewport.GetRightDirection();
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
                    return base.OnMouseMove(data);
                }
            }
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnMouseUp(MouseEventData data, bool additive)
        {
            if (!IsFinished)
            {
                if (_ProcessMouseInput(data))
                {
                    WorkspaceController.Invalidate();
                    IsFinished = true;
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

        public override void Stop()
        {
            _HintLine.Remove();

            WorkspaceController.Selection.CloseContext(_SelectionContext);
            _SelectionContext = null;
            WorkspaceController.Invalidate();

            base.Stop();
        }

        //--------------------------------------------------------------------------------------------------

    }
}