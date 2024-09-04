using Macad.Interaction.Editors.Shapes;
using Macad.Interaction.Visual;
using Macad.Occt;
using System.Diagnostics;
using Macad.Common;
using Macad.Core;

namespace Macad.Interaction;

public class ScaleSketchElementAction : ToolAction
{
    public Bnd_Box2d Box
    {
        get { return _Box; }
        set
        {
            _Box = value;
            if(WorkspaceController != null)
                _Update();
        }
    }

    //--------------------------------------------------------------------------------------------------

    readonly SketchEditorTool _SketchEditorTool;

    readonly HintLine[] _Lines = new HintLine[4];
    readonly Marker[] _Handles = new Marker[8];
    readonly XY[] _HandlePositions =
    [
        // Corners
        new (0, 0), new (1, 0), new (1, 1), new (0, 1),
        // Edges
        new (0.5, 0), new (0.5, 1), new (0, 0.5), new (1, 0.5)
    ];
    
    int _MoveMode = -1;
    Bnd_Box2d _Box;
    double _LengthOfOne;
    Ax2d _Axis;
    double _LastValue;
    SnapOnCurve2D _SnapHandler;

    //--------------------------------------------------------------------------------------------------

    public ScaleSketchElementAction(SketchEditorTool sketchEditorTool)
        : base()
    {
        _SketchEditorTool = sketchEditorTool;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        Debug.Assert(_SketchEditorTool != null);

        if (_Box == null || _Box.IsVoid())
            return false;
        
        _Update();

        return true;
    }
    
    //--------------------------------------------------------------------------------------------------

    protected override void Cleanup()
    {
        _Lines.Fill(null);
        _Handles.Fill(null);
        base.Cleanup();
    }

    //--------------------------------------------------------------------------------------------------
                
    #region Events

    public class EventArgs
    {
        public Ax2d Axis { get; init; }
        public double Scaled { get; init; }
        public double Reference { get; init; }
        public MouseEventData MouseEventData { get; init; }
    }

    public delegate void EventHandler(ScaleSketchElementAction sender, EventArgs args);
    public event EventHandler Preview;
    public event EventHandler Finished;
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    #region IMouseEventHandler

    public override bool OnMouseMove(MouseEventData data)
    {
        if (_MoveMode >= 0)
        {
            var axisValue = _ProcessMouseInput(data);
            if (!axisValue.HasValue)
                return false;
            _LastValue = axisValue.Value;

            EventArgs eventArgs = new()
            {
                Axis = _Axis,
                Scaled = axisValue.Value,
                Reference = _LengthOfOne,
                MouseEventData = data
            };
            Preview?.Invoke(this, eventArgs);

            return true;
        }

        return base.OnMouseMove(data);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseDown(MouseEventData data)
    {
        _MoveMode = _DetectHandle(data);

        if (_MoveMode >= 0)
        {
            _Handles[_MoveMode].IsSelectable = false;
            _Handles[_MoveMode].IsSelected = true;
            for (var i = 0; i < _Handles.Length; i++)
            {
                if(i == _MoveMode)
                    continue;
                Remove(_Handles[i]);
                _Handles[i] = null;
            }

            _SnapHandler = SetSnapHandler(new SnapOnCurve2D());
            _SnapHandler.Plane = _SketchEditorTool.Sketch.Plane;

            var axisDelta = _ProcessMouseInput(data);
            if (!axisDelta.HasValue)
                return false;

            SetCursor(Cursors.Move);
            WorkspaceController.Invalidate();

            return true;
        }

        return base.OnMouseDown(data);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseUp(MouseEventData data)
    {
        if (_MoveMode >= 0)
        {
            var axisValue = _ProcessMouseInput(data) ?? _LastValue;

            Remove(_Handles[_MoveMode]);
            _Handles[_MoveMode] = null;

            _MoveMode = -1;
            SetCursor(null);

            EventArgs eventArgs = new()
            {
                Axis = _Axis,
                Scaled = axisValue,
                Reference = _LengthOfOne,
                MouseEventData = data
            };
            Finished?.Invoke(this, eventArgs);

            RemoveSnapHandler();
            _SnapHandler = null;

            _Update();
            data.Return.ForceReDetection = true;

            return true;
        }
        return base.OnMouseUp(data);
    }

    //--------------------------------------------------------------------------------------------------

    double? _ProcessMouseInput(MouseEventData mouseEventData)
    {
        var snapInfo = _SnapHandler.Snap(new Geom2d_Line(_Axis), mouseEventData);
        Pnt2d sketchPoint;
        if (snapInfo.Mode != SnapModes.None)
        {
            sketchPoint = snapInfo.Point;
        }
        else
        {
            double u = 0, v = 0;
            ElSLib.Parameters(_SketchEditorTool.Sketch.Plane, mouseEventData.PointOnPlane, ref u, ref v);
            sketchPoint = new Pnt2d(u, v);
        }
        Extrema_ExtPElC2d extrema = new(sketchPoint, new gp_Lin2d(_Axis), 0.00001, double.NegativeInfinity, double.PositiveInfinity);
        if (extrema.IsDone() && extrema.NbExt() > 0)
        {
            return extrema.Point(1).Parameter();
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Visuals
 
    int _DetectHandle(MouseEventData data)
    {
        for (int i = 0; i < _Handles.Length; i++)
        {
            if (Equals(data.DetectedAisObject, _Handles[i]?.AisObject))
            {
                var minmax = _Box.MinMax();
                var extents = _Box.Extents();
                Pnt2d startPoint = new Pnt2d(minmax.minX + extents.X * _HandlePositions[i].X, minmax.minY + extents.Y * _HandlePositions[i].Y);
                Vec2d vec = new(_Box.Center(), startPoint);
                _LengthOfOne = vec.Magnitude();
                _Axis = new Ax2d(_Box.Center(), vec.ToDir());
                return i;
            }
        }

        return -1;
    }

    //--------------------------------------------------------------------------------------------------

    void _Update()
    {
        var transform = _SketchEditorTool.Sketch.GetTransformation();
        var minmax = _Box.MinMax();
        var extents = _Box.Extents();

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
            _Lines[i].Set(new Pnt(minmax.minX + extents.X * _HandlePositions[i].X, minmax.minY + extents.Y * _HandlePositions[i].Y, 0.0),
                          new Pnt(minmax.minX + extents.X * _HandlePositions[(i+1)%4].X, minmax.minY + extents.Y * _HandlePositions[(i+1)%4].Y, 0.0));
            _Lines[i].SetLocalTransformation(transform);
        }

        // Handles
        for (int i = _MoveMode < 0 ? 0 : _MoveMode; i < _Handles.Length; i++)
        {
            if (_Handles[i] == null)
            {
                _Handles[i] = new Marker(WorkspaceController, Marker.Styles.Bitmap, "Ball", 12)
                {
                    IsSelectable = true,
                    Color = Colors.ActionWhite
                };
                Add(_Handles[i]);
            }
            _Handles[i].Set(new Pnt(minmax.minX + extents.X * _HandlePositions[i].X, minmax.minY + extents.Y * _HandlePositions[i].Y, 0.0));
            _Handles[i].SetLocalTransformation(transform);

            if (_MoveMode >= 0)
                break;
        }

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}