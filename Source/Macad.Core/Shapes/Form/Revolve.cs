using System.Diagnostics;
using Macad.Core.Topology;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public sealed class Revolve : ModifierBase
{
    public enum RevolveAxis
    {
        WorldX,
        WorldY,
        WorldZ,
        LocalX,
        LocalY,
        LocalZ
    }

    //--------------------------------------------------------------------------------------------------

    #region Properties

    [SerializeMember]
    public RevolveAxis Axis
    {
        get { return _Axis; }
        set
        {
            if (_Axis != value)
            {
                SaveUndo();
                _Axis = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public Vec Offset
    {
        get { return _Offset; }
        set
        {
            if (_Offset != value)
            {
                SaveUndo();
                _Offset = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double SegmentAngle
    {
        get { return _SegmentAngle; }
        set
        {
            if (_SegmentAngle != value)
            {
                SaveUndo();
                _SegmentAngle = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override ShapeType ShapeType
    {
        get { return IsSkipped ? GetOperand(0)?.GetShapeType() ?? ShapeType.Unknown : ShapeType.Solid; }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    double _SegmentAngle;
    RevolveAxis _Axis;
    Vec _Offset;
    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Create

    public Revolve()
    {
        _SegmentAngle = 360.0;
        _Axis = RevolveAxis.LocalX;
        _Offset = new Vec(0, 0, 0);
    }

    //--------------------------------------------------------------------------------------------------

    public static Revolve Create(Body body)
    {
        Debug.Assert(body != null);

        var modifierShape = new Revolve();
        body.AddShape(modifierShape);

        return modifierShape;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Make

    public Ax1? ComputeAxis()
    {
        Ax1 axis;
        switch (Axis)
        {
            case RevolveAxis.LocalX:
                axis = Ax1.OX;
                break;
            case RevolveAxis.LocalY:
                axis = Ax1.OY;
                break;
            case RevolveAxis.LocalZ:
                axis = Ax1.OZ;
                break;
            case RevolveAxis.WorldX:
                axis = Ax1.OX.Transformed(GetTransformation().Inverted());
                break;
            case RevolveAxis.WorldY:
                axis = Ax1.OY.Transformed(GetTransformation().Inverted());
                break;
            case RevolveAxis.WorldZ:
                axis = Ax1.OZ.Transformed(GetTransformation().Inverted());
                break;
            default:
                Messages.Error("Revolve has an unknown axis type.");
                HasErrors = true;
                return null;
        }

        // Move axis
        axis.Location = Pnt.Origin;
        axis.Translate(_Offset);

        return axis;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool MakeInternal(MakeFlags flags)
    {
        // Currently we work with 1 source shape only
        if (Operands.Count != 1)
        {
            Messages.Error("Revolve needs exactly one source shape.");
            HasErrors = true;
            return false;
        }

        // We work with 2D shapes as source
        var faceShape = GetOperand2DFaces(0, null);
        if (faceShape == null)
            return false;

        // If the shape is empty, just copy the source shape
        if (faceShape.Faces().Count == 0)
        {
            Messages.Error("The sketch does not contain any valid contours.");
            return false;
        }

        // Get axis
        var axis = ComputeAxis();
        if (axis == null)
        {
            Messages.Error("The revolving axis cannot be computed.");
            return false;
        }

        // Check segment
        if (_SegmentAngle == 0.0)
        {
            BRep = faceShape;
            return true;
        }

        // Do it!
        var makePrism = ((_SegmentAngle <= -360) || (_SegmentAngle >= 360))
                            ? new BRepPrimAPI_MakeRevol(faceShape, axis.Value, true)
                            : new BRepPrimAPI_MakeRevol(faceShape, axis.Value, SegmentAngle.Clamp(-360.0, 360.0).ToRad(), true);

        if(!makePrism.IsDone())
        {
            Messages.Error("The revolving cannot be computed without errors around this axis with the given parameters.");
            return false;
        }

        // Get final shape
        BRep = makePrism.Shape();

        // Check it
        var analyzer = new BRepCheck_Analyzer(BRep);
        if (!analyzer.IsValid())
        {
            Messages.Warning("The resulting solid is not valid and may cause problems in subsequent operations. Check input shape, parameters and axis.");
        }

        return base.MakeInternal(flags);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Overrides

    public override void InvalidateTransformation()
    {
        base.InvalidateTransformation();
        Invalidate();
    }

    #endregion

}