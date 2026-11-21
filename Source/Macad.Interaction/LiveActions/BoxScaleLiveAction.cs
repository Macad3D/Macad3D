using System;
using System.Collections.Generic;
using System.Linq;
using Macad.Common;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction;

/// <summary>
/// Snapping will be executed for Edge, Vertex and Face. It will snap only in a primary axis direction (x, y or z)
/// depending on which result point is more close to the origin. This seems to be unfamiliar, but since the move axis
/// will almost never touch the snap target, this seems to be the only variant which can be useful in most situations.
/// To activate snapping, the target entity must be set in the constructor.
/// </summary>
public sealed class BoxScaleLiveAction : LiveAction
{
    #region Properties and Members

    public Bnd_Box Box
    {
        get { return _Box; }
        set
        {
            _Box = value;
            _Update();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Trsf Transformation
    {
        get { return _Transformation; }
        set
        {
            _Transformation = value;
            _Update();
        }
    }

    //--------------------------------------------------------------------------------------------------

    Bnd_Box _Box;
    HintLine[] _Lines;
    readonly (XYZ p1, XYZ p2)[] _LinePositions =
    {
        // 2D & 3D
        (new (0, 0, 0), new (1, 0, 0)),
        (new (1, 0, 0), new (1, 1, 0)),
        (new (0, 0, 0), new (0, 1, 0)),
        (new (0, 1, 0), new (1, 1, 0)),

        // 3D
        (new (0, 0, 0), new (0, 0, 1)),
        (new (1, 0, 0), new (1, 0, 1)),
        (new (0, 1, 0), new (0, 1, 1)),
        (new (0, 0, 1), new (1, 0, 1)),
        (new (0, 0, 1), new (0, 1, 1)),
        (new (1, 1, 0), new (1, 1, 1)),
        (new (0, 1, 1), new (1, 1, 1)),
        (new (1, 0, 1), new (1, 1, 1)),
    };

    const int _HandleSize = 12;
    Marker[] _Handles;
    readonly XYZ[] _HandlePositions =
    {
        // 2D & 3D Corners
        new (0, 0, 0), new (1, 0, 0), new (1, 1, 0), new (0, 1, 0),
        // 2D & 3D Edges
        new (0.5, 0, 0), new (0, 0.5, 0), new (0.5, 1, 0), new (1, 0.5, 0), 

        // 3D Corners
        new (0, 0, 1), new (1, 0, 1), new (0, 1, 1), new (1, 1, 1), 
        // 3D Edges
        new (0, 0, 0.5), new (1, 0, 0.5), new (0, 1, 0.5), new (1, 1, 0.5),
        new (0.5, 0, 1), new (0, 0.5, 1), new (0.5, 1, 1), new (1, 0.5, 1), 
        // 3D Faces
        new (0.5, 0.5, 0), new (0, 0.5, 0.5), new (0.5, 0, 0.5),
        new (0.5, 0.5, 1), new (1, 0.5, 0.5), new (0.5, 1, 0.5),
    };

    // If handles overlap on screen and their directions are equally visible,
    // the kind with the higher value is preferred.
    enum HandleKind
    {
        Corner = 0,
        Edge = 1,
        Face = 2
    }

    Ax1 _Axis;
    HintLine _AxisHintLine;
    double _StartValue;
    SelectionContext _SelectionContext;
    Trsf _Transformation;
    Snap3D _SnapHandler;
    InteractiveEntity _TargetEntity;

    readonly bool _IsXY;
    int _MoveMode = -1;
    double _LastDelta;
    double _DeltaSum;
    Dir _Direction;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Creation and Activation

    public BoxScaleLiveAction(bool isXY, InteractiveEntity targetEntity=null)
    {
        _IsXY = isXY;
        _TargetEntity = targetEntity;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnStart()
    {
        base.OnStart();

        _Lines = new HintLine[_IsXY ? 4 : _LinePositions.Length];
        _Handles = new Marker[_IsXY ? 8 : _HandlePositions.Length];

        if (_Box != null)
        {
            _Update();
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected override void Cleanup()
    {
        Preview = null;
        Finished = null;
        _Lines = null;
        _Handles = null;
        base.Cleanup();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
            
    #region Events

    public class EventArgs
    {
        public Dir Direction { get; init; }
        public double Delta { get; init; }
        public double DeltaSum { get; init; }
        public MouseEventData MouseEventData { get; init; }
    }

    public delegate void EventHandler(BoxScaleLiveAction sender, EventArgs args);
    public event EventHandler Preview;
    public event EventHandler Finished;
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    #region IMouseEventHandler

    public override bool OnMouseDown(MouseEventData data)
    {
        _MoveMode = _DetectHandle(data);

        if (_MoveMode >= 0)
        {
            _SelectionContext = OpenSelectionContext();

            _Handles[_MoveMode].IsSelectable = false;
            _Handles[_MoveMode].IsSelected = true;
            for (var i = 0; i < _Handles.Length; i++)
            {
                if(i == _MoveMode)
                    continue;
                Remove(_Handles[i]);
                _Handles[i] = null;
            }

            var axisDelta = _ProcessMouseInput(data);
            _StartValue = axisDelta ?? 0.0;
            _DeltaSum = 0.0;

            _AxisHintLine = new HintLine(WorkspaceController, HintStyle.ThinDashed);
            _AxisHintLine.Set(_Axis);
            Add(_AxisHintLine);

            if (_TargetEntity != null)
            {
                _SnapHandler = SetSnapHandler(new Snap3D());
                _SnapHandler.SupportedModes = SnapModes.Vertex | SnapModes.Edge | SnapModes.Face | SnapModes.Auxiliary;
            }

            SetCursor(Cursors.Move);
            WorkspaceController.Invalidate();

            return true;
        }

        return base.OnMouseDown(data);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseMove(MouseEventData data)
    {
        if (_MoveMode >= 0)
        {
            var axisDelta = _ProcessMouseInput(data);
            if (!axisDelta.HasValue)
                return false;

            var value = axisDelta.Value - _StartValue;
            _LastDelta = value - _DeltaSum;
            _DeltaSum = value;

            EventArgs eventArgs = new()
            {
                Direction = _Direction,
                Delta = _LastDelta,
                DeltaSum = _DeltaSum,
                MouseEventData = data
            };
            Preview?.Invoke(this, eventArgs);

            return true;
        }

        _HighlightResolvedHandle(data);
        return base.OnMouseMove(data);
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// If the handle detected by AIS is not the one which will be used on mouse down,
    /// move the highlighting to the resolved handle.
    /// </summary>
    void _HighlightResolvedHandle(MouseEventData data)
    {
        int resolved = _ResolveHandle(data);
        if (resolved < 0 || Equals(data.DetectedAisObject, _Handles[resolved].AisObject))
            return;

        data.Return.RemoveHighlighting = true;
        data.Return.AdditionalHighlights.Add(new MouseEventData.Element(_Handles[resolved].AisObject));
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseUp(MouseEventData data)
    {
        if (_MoveMode >= 0)
        {
            CloseSelectionContext(_SelectionContext);
            RemoveSnapHandler();
            _SnapHandler = null;

            _Handles[_MoveMode].IsSelected = false;
            _Handles[_MoveMode].IsSelectable = true;

            _MoveMode = -1;
            SetCursor(null);

            Remove(_AxisHintLine);

            EventArgs eventArgs = new()
            {
                Direction = _Direction,
                Delta = _LastDelta,
                DeltaSum = _DeltaSum,
                MouseEventData = data
            };
            Finished?.Invoke(this, eventArgs);

            _Update();
            data.Return.ForceReDetection = true;

            return true;
        }
        return base.OnMouseUp(data);
    }

    //--------------------------------------------------------------------------------------------------

    int _DetectHandle(MouseEventData data)
    {
        int index = _ResolveHandle(data);
        if (index >= 0)
        {
            _Direction = _GetHandleDirection(index);
            _Axis = new Ax1(_GetHandlePosition(index), _Direction).Transformed(_Transformation);
        }

        return index;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Returns the index of the handle under the mouse cursor. If several handles share the same
    /// screen position, AIS reports the one closest to the camera, which may scale in a direction
    /// pointing into the screen. Instead, the handle whose direction lies most in the screen plane
    /// is chosen. Ties are broken by preferring faces over edges over corners, then by keeping
    /// the detected handle.
    /// </summary>
    int _ResolveHandle(MouseEventData data)
    {
        const double overlapRadius = _HandleSize / 2.0;
        const double scoreTolerance = 0.05;

        if (data.DetectedAisObject == null || _Handles == null)
            return -1;

        int detected = Array.FindIndex(_Handles, handle => Equals(data.DetectedAisObject, handle?.AisObject));
        if (detected < 0)
            return -1;

        var viewportController = data.ViewportController;
        if (!viewportController.PointToScreen(_GetHandlePosition(detected).Transformed(_Transformation), out int detectedX, out int detectedY))
            return detected;

        double radius = overlapRadius * viewportController.DpiScale;
        Dir viewDirection = data.PickAxis.Direction;

        // Collect candidates
        List<(int Index, double Score)> candidates = new();
        for (int i = 0; i < _Handles.Length; i++)
        {
            if (_Handles[i] == null)
                continue;

            if (i != detected)
            {
                if (!viewportController.PointToScreen(_GetHandlePosition(i).Transformed(_Transformation), out int x, out int y))
                    continue;
                if (Math.Sqrt((x - detectedX) * (x - detectedX) + (y - detectedY) * (y - detectedY)) > radius)
                    continue;
            }

            double score = Math.Abs(_GetHandleDirection(i).Transformed(_Transformation).Dot(viewDirection));
            candidates.Add((i, score));
        }

        // Choose best
        double bestScore = candidates.Min(c => c.Score);
        int best = -1;
        foreach (var (index, score) in candidates)
        {
            if (score > bestScore + scoreTolerance)
                continue;

            if (best < 0
                || _GetHandleKind(index) > _GetHandleKind(best)
                || _GetHandleKind(index) == _GetHandleKind(best) && index == detected)
            {
                best = index;
            }
        }

        return best;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Position of the handle in the untransformed box space.
    /// </summary>
    Pnt _GetHandlePosition(int index)
    {
        Pnt min = _Box.CornerMin();
        XYZ extent = new Vec(min, _Box.CornerMax()).ToXYZ();
        return min.Translated(extent.Multiplied(_HandlePositions[index]).ToVec());
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Drag direction of the handle in the untransformed box space, pointing from the box center to the handle.
    /// </summary>
    Dir _GetHandleDirection(int index)
    {
        Pnt min = _Box.CornerMin();
        XYZ extent = new Vec(min, _Box.CornerMax()).ToXYZ();
        return new Vec(min.Translated(extent.Multiplied(0.5).ToVec()), _GetHandlePosition(index)).ToDir();
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Kind of the handle, derived from the number of coordinates in the box center:
    /// none is a corner, one is the middle of an edge, two is the center of a face.
    /// </summary>
    HandleKind _GetHandleKind(int index)
    {
        XYZ position = _HandlePositions[index];
        int centered = (position.X == 0.5 ? 1 : 0)
                       + (position.Y == 0.5 ? 1 : 0)
                       + (position.Z == 0.5 ? 1 : 0);
        return (HandleKind)centered;
    }

    //--------------------------------------------------------------------------------------------------

    double? _ProcessMouseInput(MouseEventData data)
    {
        var planeDir = data.ViewportController.Viewport.GetRightDirection();
        if (planeDir.IsParallel(_Axis.Direction, 0.1))
        {
            planeDir = data.ViewportController.Viewport.GetUpDirection();
        }
        planeDir.Cross(_Axis.Direction);
        var plane = new Pln(new Ax3(_Axis.Location, planeDir, _Axis.Direction));

        if (_SnapHandler != null)
        {
            if (data.DetectedEntity == _TargetEntity)
            {
                data.Return.RemoveHighlighting = true;
            }
            else
            {
                var snapInfo = _SnapHandler.Snap(data);
                if (snapInfo.Mode != SnapModes.None)
                {
                    // Point snapped
                    double param = double.MaxValue;
                    Vec vec = new(_Axis.Location, snapInfo.Point);
                    vec.Transform(_Transformation.Inverted());

                    if (_Direction.X != 0.0)
                    {
                        double compParam = vec.X / _Direction.X;
                        param = compParam.Abs() < param.Abs() ? compParam : param;
                    }

                    if (_Direction.Y != 0.0)
                    {
                        double compParam = vec.Y / _Direction.Y;
                        param = compParam.Abs() < param.Abs() ? compParam : param;
                    }

                    if (!_IsXY && _Direction.Z != 0.0)
                    {
                        double compParam = vec.Z / _Direction.Z;
                        param = compParam.Abs() < param.Abs() ? compParam : param;
                    }

                    if (param < double.MaxValue)
                    {
                        return param + _StartValue;
                    }
                }
            }
        }

        if(data.ViewportController.ScreenToPoint(plane, (int)data.ScreenPoint.X, (int)data.ScreenPoint.Y, out var selectedPoint))
        {
            
            {
                var extrema = new Extrema_ExtPC(selectedPoint, new GeomAdaptor_Curve(new Geom_Line(_Axis)), 1.0e-10);
                if (extrema.IsDone() && extrema.NbExt() >= 1)
                {
                    var param = extrema.Point(1).Parameter();
                    return param;
                }
            }
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Visuals

    void _Update()
    {
        if (!IsActive)
            return; // not activated

        Pnt min = _Box.CornerMin();
        Pnt max = _Box.CornerMax();
        XYZ extent = new Vec(min, max).ToXYZ();

        // Lines
        for (var i = 0; i < _Lines.Length; i++)
        {
            if (_Lines[i] == null)
            {
                _Lines[i] = new HintLine(WorkspaceController, HintStyle.Solid)
                {
                    Color = Colors.ActionWhite
                };
                Add(_Lines[i]);
            }
            _Lines[i].Set(min.Translated(extent.Multiplied(_LinePositions[i].p1).ToVec()),
                          min.Translated(extent.Multiplied(_LinePositions[i].p2).ToVec()));
            _Lines[i].SetLocalTransformation(_Transformation);
        }

        // Handles
        for (int i = _MoveMode < 0 ? 0 : _MoveMode; i < _Handles.Length; i++)
        {
            if (_Handles[i] == null)
            {
                _Handles[i] = new Marker(WorkspaceController, Marker.Styles.Bitmap, "Ball", _HandleSize)
                {
                    IsSelectable = true,
                    Color = Colors.ActionWhite
                };
                Add(_Handles[i]);
            }
            _Handles[i].Set(_GetHandlePosition(i));
            _Handles[i].SetLocalTransformation(_Transformation);

            if (_MoveMode >= 0)
                break;
        }

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}