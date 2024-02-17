using System;
using System.Collections.Generic;
using System.Diagnostics;
using Macad.Core.Geom;
using Macad.Core.Topology;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public sealed class LinearArray : ModifierBase
{
    #region Enums

    public enum PlaneType
    {
        XY,
        ZX,
        YZ
    }

    //--------------------------------------------------------------------------------------------------

    public enum DistanceMode
    {
        Interval,
        Spacing,
        Extent,
        OverallExtent
    }

    //--------------------------------------------------------------------------------------------------

    public enum AlignmentMode
    {
        First,
        Center,
        Last
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Properties

    [SerializeMember]
    public PlaneType Plane
    {
        get { return _Plane; }
        set
        {
            if (_Plane != value)
            {
                SaveUndo();
                _Plane = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double Rotation
    {
        get { return _Rotation; }
        set
        {
            if (_Rotation != value)
            {
                SaveUndo();
                _Rotation = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool Border
    {
        get { return _Border; }
        set
        {
            if (_Border != value)
            {
                SaveUndo();
                _Border = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public uint Quantity1
    {
        get { return _Quantity1; }
        set
        {
            if (_Quantity1 != value && value > 0)
            {
                SaveUndo();
                _Quantity1 = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double Distance1
    {
        get { return _Distance1; }
        set
        {
            if (_Distance1 != value)
            {
                SaveUndo();
                _Distance1 = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public DistanceMode DistanceMode1
    {
        get { return _DistanceMode1; }
        set
        {
            if (_DistanceMode1 != value)
            {
                SaveUndo();
                _DistanceMode1 = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public AlignmentMode Alignment1
    {
        get { return _Alignment1; }
        set
        {
            if (_Alignment1 != value)
            {
                SaveUndo();
                _Alignment1 = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    [SerializeMember]
    public uint Quantity2
    {
        get { return _Quantity2; }
        set
        {
            if (_Quantity2 != value && value > 0)
            {
                SaveUndo();
                _Quantity2 = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double Distance2
    {
        get { return _Distance2; }
        set
        {
            if (_Distance2 != value)
            {
                SaveUndo();
                _Distance2 = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public DistanceMode DistanceMode2
    {
        get { return _DistanceMode2; }
        set
        {
            if (_DistanceMode2 != value)
            {
                SaveUndo();
                _DistanceMode2 = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public AlignmentMode Alignment2
    {
        get { return _Alignment2; }
        set
        {
            if (_Alignment2 != value)
            {
                SaveUndo();
                _Alignment2 = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override ShapeType ShapeType
    {
        get
        {
            return GetOperand(0)?.GetShapeType() ?? ShapeType.Unknown;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Member

    PlaneType _Plane;
    double _Rotation;
    uint _Quantity1;
    double _Distance1;
    DistanceMode _DistanceMode1;
    AlignmentMode _Alignment1;
    uint _Quantity2;
    double _Distance2;
    DistanceMode _DistanceMode2;
    AlignmentMode _Alignment2;
    bool _Border;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Create

    LinearArray()
    {
        Name = "Linear Array";

        _Plane = PlaneType.XY;
        _Rotation = 0;
        _Quantity1 = 2;
        _Distance1 = 1.0;
        _DistanceMode1 = DistanceMode.Spacing;
        _Alignment1 = AlignmentMode.First;
        _Quantity2 = 2;
        _Distance2 = 1.0;
        _DistanceMode2 = DistanceMode.Spacing;
        _Alignment2 = AlignmentMode.First;
        _Border = false;
    }

    //--------------------------------------------------------------------------------------------------

    public static LinearArray Create(Body targetBody)
    {
        Debug.Assert(targetBody != null);

        var linearArray = new LinearArray();
            
        targetBody.AddShape(linearArray);

        return linearArray;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Make

    protected override bool MakeInternal(MakeFlags flags)
    {
        ClearSubshapeLists();

        // Currently we work with 1 source shape only
        if (Operands.Count != 1)
        {
            Messages.Error("This modifier needs exactly one source shape.");
            return false;
        }

        var sourceShape = GetOperand(0);

        switch (sourceShape.GetShapeType())
        {
            case ShapeType.Sketch:
                if (!_MakeSketch(sourceShape))
                    return false;
                break;

            case ShapeType.Solid:
                if (!_MakeSolid(sourceShape))
                    return false;
                break;

            default:
                Messages.Error("This modifier needs a sketch or solid as source shape.");
                return false;
        }

        RaisePropertyChanged(nameof(ShapeType));

        return base.MakeInternal(flags);
    }
        
    //--------------------------------------------------------------------------------------------------

    bool _MakeSketch(IShapeOperand sourceShape)
    {
        var sourceBRep = GetOperandBRep(0);
        if (sourceBRep == null)
            return false;

        // Sanitize properties
        if (_Plane != PlaneType.XY)
        {
            Plane = PlaneType.XY;
            RaisePropertyChanged(nameof(Plane));
        }

        // Calculate Offsets
        if (!Topo2dUtils.GetPlaneOfEdges(sourceBRep, out Geom_Plane realPlane))
        {
            Messages.Error("The plane of the sketch could not be determined.");
            return false;
        }
        var extents = sourceBRep.BoundingBox().Transformed(new Trsf(realPlane.Position(), Ax3.XOY)).Extents();
        var interval1 = new Vec2d(_CalculateOffset(DistanceMode1, Quantity1, Distance1, extents.X), 0);
        interval1.Rotate(_Rotation.ToRad());
        var offset = Vec2d.Zero;
        switch (_Alignment1)
        {
            case AlignmentMode.Center:
                offset += interval1 * (Quantity1 - 1) * -0.5;
                break;
            case AlignmentMode.Last:
                interval1 *= -1;
                break;
        }

        var interval2 = new Vec2d(0, _CalculateOffset(DistanceMode2, Quantity2, Distance2, extents.Y));
        interval2.Rotate(_Rotation.ToRad());
        switch (_Alignment2)
        {
            case AlignmentMode.Center:
                offset += interval2 * (Quantity2 - 1) * -0.5;
                break;
            case AlignmentMode.Last:
                interval2 *= -1;
                break;
        }

        // Build Transforms
        List<Trsf2d> transforms = new List<Trsf2d>((int)(Quantity1 * Quantity2));
        for (var index1 = 0; index1 < Quantity1; index1++)
        {
            for (var index2 = 0; index2 < Quantity2; index2++)
            {
                if (_Border && index1 != 0 && index1 != Quantity1 - 1
                    && index2 != 0 && index2 != Quantity2 - 1)
                {
                    continue; // Skip inner parts
                }
        
                var transform = new Trsf2d();
                transform.SetTranslation(interval1 * index1 + interval2 * index2 + offset);
                transforms.Add(transform);
            }
        }

        // Do it!
        var resultShape = Topo2dUtils.TransformSketchShape(sourceBRep, transforms, false);
        if (resultShape == null)
            return false;

        // Finalize
        BRep = resultShape;
        return true;
    }

    //--------------------------------------------------------------------------------------------------
        
    bool _MakeSolid(IShapeOperand sourceShape)
    {
        var sourceBRep = GetOperandBRep(0);
        if (sourceBRep == null)
            return false;

        // Calculate Offsets
        Ax3 plane;
        switch (Plane)
        {
            case PlaneType.XY:
                plane = Ax3.XOY.Rotated(Ax1.OZ, _Rotation.ToRad());
                break;
            case PlaneType.ZX:
                plane = Ax3.ZOX.Rotated(Ax1.OY, _Rotation.ToRad());
                break;
            case PlaneType.YZ:
                plane = Ax3.YOZ.Rotated(Ax1.OX, _Rotation.ToRad());
                break;
            default:
                throw new ArgumentOutOfRangeException();
        }

        var bbTransform = new Trsf(new Ax3(Ax2.XOY), plane);
        var extents = sourceBRep.BoundingBox().Transformed(bbTransform).Extents();

        var offset = Vec.Zero;
        var interval1 = plane.XDirection.ToVec() * _CalculateOffset(DistanceMode1, Quantity1, Distance1, extents.X);
        switch (_Alignment1)
        {
            case AlignmentMode.Center:
                offset += interval1 * (Quantity1 - 1) * -0.5;
                break;
            case AlignmentMode.Last:
                interval1 *= -1;
                break;
        }

        var interval2 = plane.YDirection.ToVec() * _CalculateOffset(DistanceMode2, Quantity2, Distance2, extents.Y);
        switch (_Alignment2)
        {
            case AlignmentMode.Center:
                offset += interval2 * (Quantity2 - 1) * -0.5;
                break;
            case AlignmentMode.Last:
                interval2 *= -1;
                break;
        }

        // Build Transformed Shapes
        TopoDS_Compound resultShape = new TopoDS_Compound();
        var builder = new TopoDS_Builder();
        builder.MakeCompound(resultShape);

        for (var index1 = 0; index1 < Quantity1; index1++)
        {
            for (var index2 = 0; index2 < Quantity2; index2++)
            {
                if (_Border && index1 != 0 && index1 != Quantity1 - 1
                    && index2 != 0 && index2 != Quantity2 - 1)
                {
                    continue; // Skip inner parts
                }

                var transform = new Trsf();
                transform.SetTranslation(interval1 * index1 + interval2 * index2 + offset);
                var makeTransform = new BRepBuilderAPI_Transform(sourceBRep, transform);
                if (!makeTransform.IsDone())
                {
                    Messages.Error("Failed transforming shape.");
                    return false;
                }
                builder.Add(resultShape, makeTransform.Shape());
            }
        }

        // Finalize
        BRep = resultShape;
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    double _CalculateOffset(DistanceMode distanceMode, uint quantity, double distance, double extents)
    {
        switch (distanceMode)
        {
            case DistanceMode.Interval:
                return distance;

            case DistanceMode.Spacing:
                return extents + distance;

            case  DistanceMode.Extent:
                return distance / (quantity - 1);

            case DistanceMode.OverallExtent:
                return (distance - extents) / (quantity - 1);

            default:
                throw new ArgumentOutOfRangeException(nameof(distanceMode), distanceMode, null);
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}