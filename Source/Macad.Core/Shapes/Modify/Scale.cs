using System;
using System.Diagnostics;
using Macad.Common.Serialization;
using Macad.Core.Geom;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Core.Shapes;

public class Scale : ModifierBase
{
    #region Properties

    [SerializeMember]
    public Vec Factor
    {
        get { return _Factor; }
        set
        {
            if (_Factor != value)
            {
                SaveUndo();
                _Factor.X = Math.Max(0.001, value.X);
                _Factor.Y = Math.Max(0.001, value.Y);
                _Factor.Z = Math.Max(0.001, value.Z);
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool Uniform
    {
        get { return _Uniform; }
        set
        {
            if (_Uniform != value)
            {
                SaveUndo();
                _Uniform = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override ShapeType ShapeType
    {
        get { return Predecessor?.GetShapeType() ?? ShapeType.Unknown; }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    const double _Threshold = 0.0001;
    bool _Uniform;
    Vec _Factor;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Create

    public Scale()
    {
        _Factor = new Vec(1.0, 1.0, 1.0);
        Uniform = true;
    }

    //--------------------------------------------------------------------------------------------------

    public static Scale Create(Body targetBody, double factor)
    {
        Debug.Assert(targetBody != null);

        var scale = new Scale
        {
            Factor = new Vec(factor, factor, factor),
            Uniform = true
        };
        targetBody.AddShape(scale);
        return scale;
    }
    
    //--------------------------------------------------------------------------------------------------

    public static Scale Create(Body targetBody, double factorX, double factorY, double factorZ)
    {
        Debug.Assert(targetBody != null);

        var scale = new Scale
        {
            Factor = new Vec(factorX, factorY, factorZ),
            Uniform = false
        };
        targetBody.AddShape(scale);
        return scale;
    }

    //--------------------------------------------------------------------------------------------------
    
    #endregion

    #region Make

    protected override bool MakeInternal(MakeFlags flags)
    {
        ClearSubshapeLists();
        
        // We take only one source shape
        if (Operands.Count != 1)
        {
            Messages.Error("This modifier needs exactly one source shape.");
            return false;
        }

        var brep = GetOperandBRep(0);
        if (brep == null)
        {
            Messages.Error("The preceeding shape does not provide a valid geometry.");
            return false;
        }

        // Ensure that we do not create an invalid shape by scaling too small
        var scaleFactor = Factor;
        if (scaleFactor.X < _Threshold)
            scaleFactor.X = _Threshold;
        if (scaleFactor.Y < _Threshold)
            scaleFactor.Y = _Threshold;
        if (scaleFactor.Z < _Threshold)
            scaleFactor.Z = _Threshold;

        // Make
        
        switch (GetOperand(0).GetShapeType())
        {
            case ShapeType.Sketch:
                if (!_MakeSketch(brep, scaleFactor))
                    return false;
                break;

            case ShapeType.Solid:
            case ShapeType.Mesh:
                if (!_MakeSolid(brep, scaleFactor))
                    return false;
                break;

            default:
                Messages.Error("The shape type of the preceeding shape is not supported.");
                break;
        }
        
        return base.MakeInternal(flags);
    }

    //--------------------------------------------------------------------------------------------------

    bool _MakeSolid(TopoDS_Shape brep, Vec scaleFactor)
    {
        BRepBuilderAPI_ModifyShape algo;
        if (Uniform)
        {
            Trsf transform = new();
            transform.SetScale(Pnt.Origin, scaleFactor.X);
            algo = new BRepBuilderAPI_Transform(brep, transform, true, true);
        }
        else
        {
            // Non-Uniform
            gp_GTrsf transform = new();
            transform.SetValue(1, 1, scaleFactor.X);
            transform.SetValue(2, 2, scaleFactor.Y);
            transform.SetValue(3, 3, scaleFactor.Z);
            algo = new BRepBuilderAPI_GTransform(brep, transform, true);
        }

        if (!algo.IsDone())
        {
            Messages.Error("The modifier failed to scale the input shape. Please check input and try to vary it.");
            return false;
        }

        BRep = algo.Shape();
        UpdateModifiedSubshapes(brep, algo);

        return true;
    }

    //--------------------------------------------------------------------------------------------------
    
    bool _MakeSketch(TopoDS_Shape brep, Vec scaleFactor)
    {
        double affinityUFactor = 1.0;
        Trsf2d transform = new();
        if (Uniform)
        {
            transform.SetScaleFactor(scaleFactor.X);
        }
        else
        {
            affinityUFactor = scaleFactor.X / scaleFactor.Y;
            transform.SetScaleFactor(scaleFactor.Y);
        }

        var result = Topo2dUtils.TransformSketchShape(brep, new[] { transform }, false, affinityUFactor);
        if (result == null)
        {
            Messages.Error("The modifier failed to scale the input shape. Please check input and try to vary it.");
            return false;
        }

        BRep = result;

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}