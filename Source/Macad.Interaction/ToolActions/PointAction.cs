using System;
using System.CodeDom;
using Macad.Interaction.Visual;
using Macad.Core;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Interaction
{
    public class PointAction : ToolAction
    {
        #region Events

        public class EventArgs
        {
            public Pnt Point { get; init; }
            public Pnt2d PointOnPlane { get; init; }
            public MouseEventData MouseEventData { get; init; }
        }

        public delegate void EventHandler(PointAction sender, EventArgs args);
        public event EventHandler Preview;
        public event EventHandler Finished;
        
        //--------------------------------------------------------------------------------------------------

        #endregion

        Pnt _CurrentPoint;
        AIS_Point _Marker;
        HintLine _HintLine;

        //--------------------------------------------------------------------------------------------------

        public override SnapMode SupportedSnapModes => SnapMode.Grid | SnapMode.Vertex | SnapMode.Edge;

        //--------------------------------------------------------------------------------------------------

        protected override bool OnStart()
        {
            OpenSelectionContext();
            return true;
        }

        //--------------------------------------------------------------------------------------------------
        
        protected override void Cleanup()
        {
            if (_Marker != null)
            {
                WorkspaceController.Workspace.AisContext.Remove(_Marker, false);
                _Marker = null;
            }
            WorkspaceController.Invalidate();

            Preview = null;
            Finished = null;
            base.Cleanup();
        }

        //--------------------------------------------------------------------------------------------------

        void EnsureMarker()
        {
            if (_Marker == null)
            {
                _Marker = new AIS_Point(new Geom_CartesianPoint(0, 0, 0));
                _Marker.SetMarker(Aspect_TypeOfMarker.PLUS);
                _Marker.SetWidth(2.0);
                WorkspaceController.Workspace.AisContext.Display(_Marker, false);
                WorkspaceController.Workspace.AisContext.Deactivate(_Marker);
            }
        }

        //--------------------------------------------------------------------------------------------------

        void ProcessMouseInput(MouseEventData data)
        {
            var snapInfo = WorkspaceController.SnapHandler.Snap(data);
            var snapPoint = WorkspaceController.SnapHandler.SnapOnPlane(snapInfo);
            if (snapPoint != null)
            {
                // Point is snapped
                _CurrentPoint = ElSLib.Value(snapPoint.Value.X, snapPoint.Value.Y, WorkspaceController.Workspace.WorkingPlane);
                if (snapInfo.SnapMode != SnapMode.Grid)
                {
                    if (_HintLine == null)
                    {
                        _HintLine = new HintLine(WorkspaceController, HintStyle.ThinDashed);
                        Add(_HintLine);
                    }

                    _HintLine.Set(snapInfo.Point, _CurrentPoint);
                }
                else
                {
                    Remove(_HintLine);
                }
            }
            else
            {
                _CurrentPoint = data.PointOnPlane;
                Remove(_HintLine);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnMouseMove(MouseEventData data)
        {
            if (!IsFinished)
            {
                EnsureMarker();

                ProcessMouseInput(data);

                _Marker.SetComponent(new Geom_CartesianPoint(_CurrentPoint));
                WorkspaceController.Workspace.AisContext.RecomputePrsOnly(_Marker, false);
                WorkspaceController.Invalidate();

                EventArgs args = new()
                {
                    Point = _CurrentPoint,
                    PointOnPlane = ProjLib.Project(WorkspaceController.Workspace.WorkingPlane, _CurrentPoint),
                    MouseEventData = data
                };
                Preview?.Invoke(this, args);
                return base.OnMouseMove(data);
            }
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnMouseUp(MouseEventData data)
        {
            if (!IsFinished)
            {
                ProcessMouseInput(data);
                WorkspaceController.Invalidate();
                IsFinished = true;

                EventArgs args = new()
                {
                    Point = _CurrentPoint,
                    PointOnPlane = ProjLib.Project(WorkspaceController.Workspace.WorkingPlane, _CurrentPoint),
                    MouseEventData = data
                };
                Finished?.Invoke(this, args);
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