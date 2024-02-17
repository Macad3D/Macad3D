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
public sealed class CircularArray : ModifierBase
{
    #region Enums

    public enum PlaneType
    {
        XY,
        ZX,
        YZ
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
    public uint Quantity
    {
        get { return _Quantity; }
        set
        {
            if (_Quantity != value && value > 0)
            {
                SaveUndo();
                _Quantity = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double Radius
    {
        get { return _Radius; }
        set
        {
            if (_Radius != value)
            {
                SaveUndo();
                _Radius = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

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
    public bool KeepOrientation
    {
        get { return _KeepOrientation; }
        set
        {
            if (_KeepOrientation != value)
            {
                SaveUndo();
                _KeepOrientation = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double Range
    {
        get { return _Range; }
        set
        {
            if (value != _Range && value > 0 && value <= 360)
            {
                SaveUndo();
                _Range = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double OriginalAngle
    {
        get { return _OriginalAngle; }
        set
        {
            if (_OriginalAngle != value)
            {
                SaveUndo();
                _OriginalAngle = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public AlignmentMode Alignment
    {
        get { return _Alignment; }
        set
        {
            if (_Alignment != value)
            {
                SaveUndo();
                _Alignment = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override ShapeType ShapeType
    {
        get { return GetOperand(0)?.GetShapeType() ?? ShapeType.Unknown; }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Member

    uint _Quantity;
    double _Radius;
    bool _KeepOrientation;
    double _OriginalAngle;
    double _Range;
    AlignmentMode _Alignment;
    PlaneType _Plane;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Create

    CircularArray()
    {
        Name = "Circular Array";

        _Quantity = 4;
        Radius = 10;
        KeepOrientation = false;
        _OriginalAngle = 0;
        _Range = 360;
        _Alignment = AlignmentMode.First;
        _Plane = PlaneType.XY;
    }

    //--------------------------------------------------------------------------------------------------

    public static CircularArray Create(Body targetBody)
    {
        Debug.Assert(targetBody != null);

        var newShape = new CircularArray();

        targetBody.AddShape(newShape);

        return newShape;
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

        return base.MakeInternal(flags);
    }

    //--------------------------------------------------------------------------------------------------

    bool _MakeSketch(IShapeOperand sourceShape)
    {
        var sourceBRep = GetOperandBRep(0);
        if (sourceBRep == null)
            return false;

        // Calculate Parameters
        var center = new Pnt2d(-_Radius, 0).Rotated(Pnt2d.Origin, _OriginalAngle.ToRad());
        var (interval, offset) = _CalculateParameters();

        // Build Transforms
        List<Trsf2d> transforms = new List<Trsf2d>((int)_Quantity);
        for (var index = 0; index < _Quantity; index++)
        {
            var angle = (interval * index + offset).ToRad();
            var transform = Trsf2d.Identity;
            if (_KeepOrientation)
            {
                // Translation transform
                transform.SetTranslation(Pnt2d.Origin.Rotated(center, angle).ToVec());
            }
            else
            {
                // Rotation transform
                transform.SetRotation(center, angle);
            }
            transforms.Add(transform);
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

        // Calculate Parameters
        Ax3 axis = _CalculateSolidAxis();
        var (interval, offset) = _CalculateParameters();

        // Build Transformed Shapes
        TopoDS_Compound resultShape = new TopoDS_Compound();
        var builder = new TopoDS_Builder();
        builder.MakeCompound(resultShape);

        for (var index = 0; index < Quantity; index++)
        {
            var angle = (interval * index + offset).ToRad();
            var transform = Trsf.Identity;
            if (_KeepOrientation)
            {
                // Translation transform
                transform.SetTranslation(Pnt.Origin.Rotated(axis.Axis, angle).ToVec());
            }
            else
            {
                // Rotation transform
                transform.SetRotation(axis.Axis, angle);
            }

            var makeTransform = new BRepBuilderAPI_Transform(sourceBRep, transform);
            if (!makeTransform.IsDone())
            {
                Messages.Error("Failed transforming shape.");
                return false;
            }
            builder.Add(resultShape, makeTransform.Shape());
        }

        // Finalize
        BRep = resultShape;
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    (double interval, double offset) _CalculateParameters()
    {
        double interval = _Range / Math.Max(1, (_Range.Abs() < 360 ? _Quantity - 1 : _Quantity));
        double offset = 0;
        switch (_Alignment)
        {
            case AlignmentMode.Center:
                offset = -_Range * 0.5;
                break;

            case AlignmentMode.Last:
                offset = -_Range;
                break;
        }

        return (interval, offset);
    }

    //--------------------------------------------------------------------------------------------------

    Ax3 _CalculateSolidAxis()
    {
        switch (Plane)
        {
            case PlaneType.XY:
                return Ax3.XOY.Translated(new Vec(-_Radius, 0, 0)).Rotated(Ax1.OZ, _OriginalAngle.ToRad());
            case PlaneType.ZX:
                return Ax3.ZOX.Translated(new Vec(0, 0, -_Radius)).Rotated(Ax1.OY, _OriginalAngle.ToRad());
            case PlaneType.YZ:
                return Ax3.YOZ.Translated(new Vec(0, -_Radius, 0)).Rotated(Ax1.OX, _OriginalAngle.ToRad());
            default:
                throw new ArgumentOutOfRangeException();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Public Helper
        
    public Ax3? GetRotationAxis()
    {
        switch (ShapeType)
        {
            case ShapeType.Solid:
                return _CalculateSolidAxis();

            case ShapeType.Sketch:
                var center = new Pnt(-_Radius, 0, 0).Rotated(Ax1.OZ, _OriginalAngle.ToRad());
                var axis = new Ax3(center, Dir.DZ, Dir.DX.Rotated(Ax1.OZ, _OriginalAngle.ToRad()));
                var brep = GetBRep();
                if (brep != null && Topo2dUtils.GetPlaneOfEdges(brep, out Geom_Plane plane))
                {
                    axis.Transform(new Trsf(plane.Position(), Ax3.XOY));
                }
                return axis;

            default:
                return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public (double startAngle, double endAngle) GetStartEndAngles()
    {
        var (interval, offset) = _CalculateParameters();
        return (offset, offset + interval * (_Quantity - 1));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}