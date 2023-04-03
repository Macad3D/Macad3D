using Macad.Common;
using Macad.Core;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction;

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

    Ax1 _Axis;
    HintLine _AxisHintLine;
    double _StartValue;
    bool _ResetStartValue;
    SelectionContext _SelectionContext;
    Trsf _Transformation;

    bool _IsXY;
    int _MoveMode = -1;
    double _LastDelta;
    double _DeltaSum;
    Dir _Direction;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Creation and Activation

    public BoxScaleLiveAction(bool isXY = false)
    {
        _IsXY = isXY;
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

            SetCursor(Cursors.Move);
            WorkspaceController.Invalidate();

            return true;
        }

        return base.OnMouseDown(data);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseMove(MouseEventData data)
    {
        if (_ResetStartValue)
        {
            _ResetStartValue = false;
            _StartValue += _LastDelta;
            _LastDelta = 0;
        }

        if (_MoveMode >= 0)
        {
            var axisDelta = _ProcessMouseInput(data);
            if (!axisDelta.HasValue)
                return false;

            _LastDelta = axisDelta.Value - _StartValue;
            _DeltaSum += _LastDelta;

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

        return base.OnMouseMove(data);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseUp(MouseEventData data)
    {
        if (_MoveMode >= 0)
        {
            CloseSelectionContext(_SelectionContext);

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
            data.ForceReDetection = true;

            return true;
        }
        return base.OnMouseUp(data);
    }

    //--------------------------------------------------------------------------------------------------

    int _DetectHandle(MouseEventData data)
    {
        for (int i = 0; i < _Handles.Length; i++)
        {
            if (data.DetectedAisInteractives.Contains(_Handles[i]?.AisObject))
            {
                Pnt min = _Box.CornerMin();
                XYZ extent = new Vec(min, _Box.CornerMax()).ToXYZ();
                Pnt startPoint = min.Translated(extent.Multiplied(_HandlePositions[i]).ToVec());
                _Direction = new Vec(min.Translated(extent.Multiplied(0.5).ToVec()), startPoint).ToDir();
                _Axis = new Ax1(startPoint, _Direction).Transformed(_Transformation);
                return i;
            }
        }

        return -1;
    }

    //--------------------------------------------------------------------------------------------------

    double? _ProcessMouseInput(MouseEventData data)
    {
        var planeDir = WorkspaceController.ActiveViewport.GetRightDirection();
        if (planeDir.IsParallel(_Axis.Direction, 0.1))
        {
            planeDir = WorkspaceController.ActiveViewport.GetUpDirection();
        }
        planeDir.Cross(_Axis.Direction);
        var plane = new Pln(new Ax3(_Axis.Location, planeDir, _Axis.Direction));
        Pnt convertedPoint;
        if (WorkspaceController.ActiveViewport.ScreenToPoint(plane, (int)data.ScreenPoint.X, (int)data.ScreenPoint.Y, out convertedPoint))
        {
            var extrema = new Extrema_ExtPC(convertedPoint, new GeomAdaptor_Curve(new Geom_Line(_Axis)), 1.0e-10);
            if (extrema.IsDone() && extrema.NbExt() >= 1)
            {
                var value = extrema.Point(1).Parameter();
                return value;
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
                _Handles[i] = new Marker(WorkspaceController, Marker.Styles.Bitmap, "Ball", 12)
                {
                    IsSelectable = true,
                    Color = Colors.ActionWhite
                };
                Add(_Handles[i]);
            }
            _Handles[i].Set(min.Translated(extent.Multiplied(_HandlePositions[i]).ToVec()));
            _Handles[i].SetLocalTransformation(_Transformation);

            if (_MoveMode >= 0)
                break;
        }

        // Reset reference value
        _ResetStartValue = true;

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}