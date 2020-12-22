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
        public Pnt Point { get; private set; }

        public Pnt2d PointOnPlane
        {
            get
            {
                return ProjLib.Project(WorkspaceController.Workspace.WorkingPlane, Point);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override SnapMode SupportedSnapModes => SnapMode.Grid | SnapMode.Vertex | SnapMode.Edge;

        //--------------------------------------------------------------------------------------------------

        AIS_Point _Marker;
        SelectionContext _SelectionContext;
        HintLine _HintLine;

        //--------------------------------------------------------------------------------------------------

        public PointAction(object owner)
            : base(owner)
        {
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            _SelectionContext = WorkspaceController.Selection.OpenContext();
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void EnsureMarker()
        {
            if (_Marker == null)
            {
                _Marker = new AIS_Point(new Geom_CartesianPoint(0, 0, 0));
                _Marker.SetMarker(Aspect_TypeOfMarker.Aspect_TOM_PLUS);
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
                Point = ElSLib.Value(snapPoint.Value.X, snapPoint.Value.Y, WorkspaceController.Workspace.WorkingPlane);
                if (snapInfo.SnapMode != SnapMode.Grid)
                {
                    if (_HintLine == null)
                    {
                        _HintLine = new HintLine(WorkspaceController, HintStyle.ThinDashed);
                    }

                    _HintLine.Set(snapInfo.Point, Point);
                }
                else
                {
                    _HintLine?.Remove();
                }
            }
            else
            {
                Point = data.PointOnPlane;
                _HintLine?.Remove();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnMouseMove(MouseEventData data)
        {
            if (!IsFinished)
            {
                EnsureMarker();

                ProcessMouseInput(data);

                _Marker.SetComponent(new Geom_CartesianPoint(Point));
                WorkspaceController.Workspace.AisContext.RecomputePrsOnly(_Marker, false);

                WorkspaceController.Invalidate();

                return base.OnMouseMove(data);
            }
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnMouseUp(MouseEventData data, bool shiftSelected)
        {
            if (!IsFinished)
            {
                ProcessMouseInput(data);
                WorkspaceController.Invalidate();
                IsFinished = true;
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
            if (_Marker != null)
            {
                WorkspaceController.Workspace.AisContext.Remove(_Marker, false);
                _Marker = null;
            }

            _HintLine?.Remove();

            WorkspaceController.Selection.CloseContext(_SelectionContext);
            _SelectionContext = null;
            WorkspaceController.Invalidate();

            base.Stop();
        }

        //--------------------------------------------------------------------------------------------------

    }
}