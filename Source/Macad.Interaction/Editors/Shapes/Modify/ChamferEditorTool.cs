using System;
using System.Collections.Generic;
using Macad.Common;
using Macad.Core.Geom;
using Macad.Core;
using System.Linq;
using System.Windows.Input;
using Macad.Core.Shapes;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public class ChamferEditorTool : EdgeModifierTool
{
    class ActionInfo
    {
        internal Ax1 Axis;
        internal TranslateAxisLiveAction AxisAction;
        internal bool Reverse;
        internal Ax1 SecAxis;
        internal TranslateAxisLiveAction SecAxisAction;
        internal bool SecReverse;
        internal Ax2 RotateAxis;
        internal RotateLiveAction RotateAction;
    }

    //--------------------------------------------------------------------------------------------------

    readonly Chamfer _ChamferShape;
    double _StartDistance;
    double _SecStartDistance;
    double _StartAngle;
    bool _IsMoving;
    LabelHudElement _HudElement;
    readonly List<ActionInfo> _Actions = new();

    //--------------------------------------------------------------------------------------------------

    public ChamferEditorTool(Chamfer modifierShape)
        : base(modifierShape)
    {
        _ChamferShape = modifierShape;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnStop()
    {
        _StopActions();
        base.OnStop();
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool UpdateActions()
    {
        if (!base.UpdateActions())
            return false;

        if (!_IsMoving)
            _StartActions();

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _StopActions(LiveAction except = null)
    {
        foreach (var action in _Actions.SelectMany(info => new[] { info.AxisAction, info.SecAxisAction })
                                       .Where(action => action != null && action != except))
        {
            action.Preview -= _AxisAction_OnPreview;
            action.Finished -= _AxisAction_OnFinished;
            action.Stop();
        }

        foreach (var action in _Actions.Select(info => info.RotateAction)
                                       .Where(action => action != null && action != except))
        {
            action.Preview -= _RotateAction_Preview;
            action.Finished -= _RotateAction_Finished;
            action.Stop();
        }

        if (except != null)
        {
            _Actions.RemoveAll(info => info.AxisAction != except && info.SecAxisAction != except && info.RotateAction != except);
        }
        else
        {
            _Actions.Clear();
            _IsMoving = false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _StartActions()
    {
        if (!_IsMoving)
        {
            _StopActions();

            SetHintMessage("__Select edges__ to apply modifier on. __Select faces__ to toggle all it's edges.");
            SetCursor(Cursors.SelectEdge);

            if (ContourEdges == null || ValidEdges == null)
                return;

            var trsf = ModifierShape.GetTransformation();
            var brep = ModifierShape.GetBRep();
            _StartDistance = _ChamferShape.Distance;
            _SecStartDistance = _ChamferShape.SecondDistance;
            _StartAngle = _ChamferShape.Angle;

            TopoDS_Face refFace;
            Dictionary<TopoDS_Edge, TopoDS_Face> refFaces = null;
            if (_ChamferShape.Mode != Chamfer.ChamferModes.Symmetric)
            {
                refFaces = ModifierShape.FindReferenceFaces(EdgeSourceShape, ContourEdges, _ChamferShape.ReverseOrientation);
            }

            foreach (var edge in ContourEdges)
            {
                ActionInfo info = new();
                switch (_ChamferShape.Mode)
                {
                    case Chamfer.ChamferModes.Symmetric:
                        if(!_StartSymmetricAxisAction(info, edge, trsf, brep))
                            continue;
                        break;

                    case Chamfer.ChamferModes.TwoDistances:
                        if(!refFaces.TryGetValue(edge, out refFace))
                            continue;
                        if(!_StartTwoDistancesAxisAction(info, edge, trsf, brep, refFace))
                            continue;
                        break;

                    case Chamfer.ChamferModes.DistanceAngle:
                        if(!refFaces.TryGetValue(edge, out refFace))
                            continue;
                        if(!_StartDistanceAngleAxisAction(info, edge, trsf, brep, refFace))
                            continue;
                        break;
                }

                _Actions.Add(info);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    bool _StartSymmetricAxisAction(ActionInfo info, TopoDS_Edge edge, Trsf trsf, TopoDS_Shape brep)
    {
        var face = ModifierShape.GetCreatedFaces(edge)?.FirstOrDefault();
        if (face == null)
            return false;

        face = brep.Faces().FirstOrDefault(ofc => ofc.IsSame(face));
        if (face == null)
            return false;
       
        info.Axis = FaceAlgo.GetFaceCenterNormal(face)
                            .Transformed(trsf);
        var pnt = ElCLib.LineParameter(info.Axis, EdgeAlgo.GetCenter(edge.Located(new TopLoc_Location(trsf)).ToEdge()));
        info.Reverse = pnt < 0;

        var action = new TranslateAxisLiveAction()
        {
            WorkspaceController = WorkspaceController,
            Color = Colors.ActionWhite,
            NoResize = true,
            Axis = info.Axis
        };
        action.Preview += _AxisAction_OnPreview;
        action.Finished += _AxisAction_OnFinished;
        action.Start();
        info.AxisAction = action;
        return true;
    }
    
    //--------------------------------------------------------------------------------------------------

    bool _StartTwoDistancesAxisAction(ActionInfo info, TopoDS_Edge edge, Trsf trsf, TopoDS_Shape brep, TopoDS_Face refFace)
    {
        var createdFace = ModifierShape.GetCreatedFaces(edge)?.FirstOrDefault();
        if (createdFace == null)
            return false;

        // First distance axis
        info.Reverse = false;
        if (!_GetTangentActionAxis(refFace, createdFace, out info.Axis, ref info.Reverse, out _)) 
            return false;
        info.Axis.Transform(trsf);

        var action = new TranslateAxisLiveAction()
        {
            WorkspaceController = WorkspaceController,
            Color = Colors.ActionWhite,
            NoResize = true,
            Axis = info.Axis
        };
        action.Preview += _AxisAction_OnPreview;
        action.Finished += _AxisAction_OnFinished;
        action.Start();
        info.AxisAction = action;

        // Second distance axis
        var secRefFace = FaceAlgo.FindConnectedFace(EdgeSourceShape, refFace, edge);
        if(secRefFace == null) 
            return false;

        info.SecReverse = true;
        if (!_GetTangentActionAxis(secRefFace, createdFace, out info.SecAxis, ref info.SecReverse, out _)) 
            return false;
        info.SecAxis.Transform(trsf);

        action = new TranslateAxisLiveAction()
        {
            WorkspaceController = WorkspaceController,
            Color = Colors.ActionGreen,
            NoResize = true,
            Axis = info.SecAxis,
        };
        action.Preview += _AxisAction_OnPreview;
        action.Finished += _AxisAction_OnFinished;
        action.Start();
        info.SecAxisAction = action;

        return true;
    }
        
    //--------------------------------------------------------------------------------------------------

    bool _StartDistanceAngleAxisAction(ActionInfo info, TopoDS_Edge edge, Trsf trsf, TopoDS_Shape brep, TopoDS_Face refFace)
    {
        var createdFace = ModifierShape.GetCreatedFaces(edge)?.FirstOrDefault();
        if (createdFace == null)
            return false;

        // Distance axis
        info.Reverse = false;
        if (!_GetTangentActionAxis(refFace, createdFace, out var axis, ref info.Reverse, out var sharedEdge)) 
            return false;
        info.Axis = axis.Transformed(trsf);

        var action = new TranslateAxisLiveAction()
        {
            WorkspaceController = WorkspaceController,
            Color = Colors.ActionWhite,
            NoResize = true,
            Axis = info.Axis
        };
        action.Preview += _AxisAction_OnPreview;
        action.Finished += _AxisAction_OnFinished;
        action.Start();
        info.AxisAction = action;

        // Angle
        EdgeAlgo.GetCenter(sharedEdge, out _, out var tangent);
        if (refFace.Orientation() == TopAbs_Orientation.REVERSED)
            tangent.Reverse();
        if (sharedEdge.Orientation() == TopAbs_Orientation.REVERSED)
            tangent.Reverse();
        if (info.Reverse)
            tangent.Reverse();
        info.RotateAxis = new Ax2(axis.Location, tangent.ToDir(), axis.Direction);
        info.RotateAxis.Transform(trsf);

        var rotAction = new RotateLiveAction()
        {
            WorkspaceController = WorkspaceController,
            Color = Colors.ActionGreen,
            NoResize = true,
            Radius = 0.7,
            Position = info.RotateAxis,
            SectorAutoUpdate = RotateLiveAction.SectorAutoMode.Forward,
        };
        rotAction.Preview += _RotateAction_Preview; ;
        rotAction.Finished += _RotateAction_Finished;
        rotAction.Start();
        info.RotateAction = rotAction;

        return true;
    }


    //--------------------------------------------------------------------------------------------------

    bool _GetTangentActionAxis(TopoDS_Face refFace, TopoDS_Face createdFace, out Ax1 axis, ref bool reverse, out TopoDS_Edge sharedEdge)
    {
        sharedEdge = null;

        var refOrientation = reverse ? TopAbs_Orientation.REVERSED : TopAbs_Orientation.FORWARD;
        axis = Ax1.OX;

        var modifiedRefFace = ModifierShape.GetCreatedFaces(refFace)?.FirstOrDefault();
        if (modifiedRefFace == null)
            return false;

        sharedEdge = FaceAlgo.FindSharedEdge(modifiedRefFace, createdFace);
        if(sharedEdge == null) 
            return false;

        EdgeAlgo.GetCenter(sharedEdge, out Pnt edgeCenter, out Vec edgeTangent);
        if (!FaceAlgo.GetFaceNormal(modifiedRefFace, edgeCenter, out var faceNormal))
            return false;

        axis = new Ax1(edgeCenter, faceNormal.Crossed(edgeTangent.ToDir()));

        // Check if the axis has to be inverted to be ext of the shape
        reverse = sharedEdge.Orientation() != TopAbs_Orientation.REVERSED;

        var createdFaceNormal = FaceAlgo.GetFaceCenterNormal(createdFace);
        var intCS = new GeomAPI_IntCS(new Geom_Line(createdFaceNormal), modifiedRefFace.Surface());
        if (intCS.NbPoints() >= 1)
        {
            double u = 0, v = 0, w = 0;
            intCS.Parameters(1, ref u, ref v, ref w);
            if (refFace.Orientation() == refOrientation ? w < 0 : w > 0)
            {
                axis.Reverse();
                reverse = !reverse;
            }
        }

        return true;
    }
    
    //--------------------------------------------------------------------------------------------------

    void _AxisAction_OnPreview(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        _IsMoving = true;
        _StopActions(sender);

        SetHintMessage("__Scale chamfer distance__ using gizmo, press `k:Ctrl` to round to grid stepping.");
        SetCursor(Cursors.SetRadius);

        var info = _Actions.FirstOrDefault(info => info.AxisAction == sender || info.SecAxisAction == sender);
        if(info == null)
            return;
        bool isSecond = info.SecAxisAction == sender;

        double reversed = (isSecond ? info.SecReverse : info.Reverse) ? 1.0 : -1.0;
        double newDistance = isSecond ? _SecStartDistance : _StartDistance;
        if (_ChamferShape.Mode == Chamfer.ChamferModes.Symmetric)
        {
            newDistance += Math.Sqrt(args.Distance * args.Distance * 2.0) * Math.Sign(args.Distance) * reversed;
        }
        else
        {
            newDistance += args.Distance * reversed;
        }

        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newDistance = Maths.RoundToNearest(newDistance, WorkspaceController.Workspace.GridStep);
        }

        if (newDistance <= 0)
            newDistance = 0.01;

        if (isSecond)
        {
            _ChamferShape.SecondDistance = newDistance;
            sender.Axis = info.SecAxis.Translated(info.SecAxis.Direction.ToVec((newDistance - _SecStartDistance) * reversed));
        }
        else
        {
            _ChamferShape.Distance = newDistance;
            if (_ChamferShape.Mode == Chamfer.ChamferModes.Symmetric)
            {
                var newAxisDistance = Math.Sqrt(Math.Pow((newDistance - _StartDistance) * reversed, 2) * 0.5) * Math.Sign(args.Distance);
                sender.Axis = info.Axis.Translated(info.Axis.Direction.ToVec(newAxisDistance));
            }
            else
            {
                sender.Axis = info.Axis.Translated(info.Axis.Direction.ToVec((newDistance - _StartDistance) * reversed));
            }
        }

        if (_HudElement == null)
        {
            _HudElement = new LabelHudElement();
            Add(_HudElement);
        }

        _HudElement?.SetValue($"Distance: {newDistance.ToInvariantString("F2")} mm");
    }

    //--------------------------------------------------------------------------------------------------

    void _AxisAction_OnFinished(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        _ActionFinished();
    }
    
    //--------------------------------------------------------------------------------------------------
    
    void _RotateAction_Preview(RotateLiveAction sender, RotateLiveAction.EventArgs args)
    {
        _IsMoving = true;
        _StopActions(sender);

        SetHintMessage("__Scale chamfer angle__ using gizmo, press `k:Ctrl` to round to 5°.");
        SetCursor(Cursors.SetRadius);

        var info = _Actions.FirstOrDefault(info => info.RotateAction == sender);
        if(info == null)
            return;
        double reversed = info.Reverse ? 1.0 : -1.0;
        double newAngle = _StartAngle + args.DeltaSum.ToDeg();//* reversed;

        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newAngle = Maths.RoundToNearest(newAngle, 5.0);
        }

        if (newAngle <= 0)
            newAngle = 0.01;
        if (newAngle >= 90)
            newAngle = 89.99;

        _ChamferShape.Angle = newAngle;
        args.DeltaSumOverride = (newAngle - _StartAngle).ToRad();

        if (_HudElement == null)
        {
            _HudElement = new LabelHudElement();
            Add(_HudElement);
        }

        _HudElement?.SetValue($"Angle: {newAngle.ToInvariantString("F2")} mm");
    }

    //--------------------------------------------------------------------------------------------------
    
    void _RotateAction_Finished(RotateLiveAction sender, RotateLiveAction.EventArgs args)
    {
        _ActionFinished();
    }

    //--------------------------------------------------------------------------------------------------

    void _ActionFinished()
    {
        _IsMoving = false;
        Remove(_HudElement);
        _HudElement = null;
        RemoveHintMessage();
        CommitChanges();
        UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    protected override IEnumerable<WorkspaceControl> GetChildren()
    {
        return _Actions.SelectMany(info => new LiveAction[] { info.AxisAction, info.SecAxisAction, info.RotateAction })
                       .Where(action => action != null)
                       .Concat(base.GetChildren());
    }

    //--------------------------------------------------------------------------------------------------

}