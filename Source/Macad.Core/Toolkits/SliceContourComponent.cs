using System;
using System.Linq;
using Macad.Core.Components;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Core.Drawing;
using Macad.Occt;

namespace Macad.Core.Toolkits;

[SerializeType]
public class SliceContourComponent : Component, IShapeDependent
{
    #region Properties

    [SerializeMember]
    public int LayerCount
    {
        get { return _LayerCount; }
        set
        {
            var clampedValue = value.Clamp(1, 99);
            if (_LayerCount != clampedValue)
            {
                SaveUndo();
                _LayerCount = clampedValue;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public Guid ShapeGuid
    {
        get { return _ShapeGuid; }
        set
        {
            if (_ShapeGuid != value)
            {
                SaveUndo();
                _ShapeGuid = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public SubshapeReference ReferenceFace
    {
        get { return _ReferenceFace; }
        set
        {
            if (_ReferenceFace != value)
            {
                SaveUndo();
                _ReferenceFace = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double[] CustomLayerInterval
    {
        get { return _CustomLayerInterval; }
        set
        {
            if (_CustomLayerInterval != value)
            {
                SaveUndo();
                _CustomLayerInterval = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsValid
    {
        get
        {
            if (_Layers != null && _Layers.Length > 0)
                return true;
            if (!_HasErrors)
                return Make();
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public SliceByPlanes.Slice[] Layers
    {
        get
        {
            if (!IsValid && !_HasErrors)
                Make();
            return _Layers;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public TopoDS_Shape ReconstructedBRep
    {
        get
        {
            if (!IsValid && !_HasErrors)
                Make();
            return _ReconstructedBRep;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members and infrastructure

    internal static bool DebugOutput;
    int _LayerCount;
    SubshapeReference _ReferenceFace;
    Guid _ShapeGuid;
    bool _HasErrors;
    double[] _CustomLayerInterval;
    SliceByPlanes.Slice[] _Layers;
    TopoDS_Shape _ReconstructedBRep;

    //--------------------------------------------------------------------------------------------------

    public SliceContourComponent()
    {
        _LayerCount = 1;
    }
        
    //--------------------------------------------------------------------------------------------------

    public void Invalidate()
    {
        _Layers = null;
        _ReconstructedBRep = null;
        _HasErrors = false;

        RaisePropertyChanged(nameof(Layers));
        RaisePropertyChanged(nameof(ReconstructedBRep));
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OwnerChanged(IDecorable oldOwner, IDecorable newOwner)
    {
        base.OwnerChanged(oldOwner, newOwner);

        if(oldOwner is Body oldBody)
        {
            oldBody.RemoveDependent(this);
        }

        if(newOwner is Body newBody)
        {
            newBody.AddDependent(this);
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
        
    #region Statics

    public static bool CanFindReferenceFace(TopoDS_Shape shape)
    {
        try
        {
            // Find biggest face
            var (_, plane1, _, plane2) = FaceAlgo.FindFaceByAreaSize(shape, (area1, area2) => area1 > area2);
            return plane1 != null && plane2 != null;
        }
        catch (Exception)
        {
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Make

    class MakeContext
    {
        internal TopoDS_Shape SourceShape;
        internal TopoDS_Face ReferenceFace;
        internal SliceByPlanes Slicer;
    }

    //--------------------------------------------------------------------------------------------------

    public Shape GetShape()
    {
        var body = Owner as Body;
        if (body == null)
            return null;

        // Find shape
        Shape shape;
        if (ShapeGuid != Guid.Empty)
            shape = (body.Model?.FindInstance(ShapeGuid) as Shape);
        else
            shape = body.Shape;

        return shape;
    }

    //--------------------------------------------------------------------------------------------------

    public bool Make()
    {
        var body = Owner as Body;
        if (body == null)
        {
            Messages.Error("Slice Contour processor was started with an invalid component (owner is not a body).");
            _HasErrors = true;
            return false;
        }

        CoreContext.Current.MessageHandler.ClearEntityMessages(this);
        return ProcessingScope.ExecuteWithGuards(this, "Generating Etching Mask Drawing", () =>
        {
            Invalidate();

            if (!(_InitMake(out var context) && _Slice(context)))
            {
                _HasErrors = true;
                return false;
            }

            // Reconstruct
            _ReconstructedBRep = context.Slicer.Reconstruct();

            RaisePropertyChanged(nameof(Layers));
            RaisePropertyChanged(nameof(ReconstructedBRep));
            return true;
        });
    }

    //--------------------------------------------------------------------------------------------------

    bool _InitMake(out MakeContext context)
    {
        var body = Owner as Body;

        context = new MakeContext();

        var shape = GetShape();

        if (shape == null)
        {
            Messages.Error("The source shape cannot be found. Please reselect the shape or use top shape.");
            return false;
        }

        context.SourceShape = shape?.GetBRep();

        if (context.SourceShape == null)
        {
            Messages.Error("The shape does not generate valid data.");
            return false;
        }

        // Get Reference Face
        if(ReferenceFace == null)
        {
            // Find biggest face
            var (face1, plane1, face2, plane2) = FaceAlgo.FindFaceByAreaSize(context.SourceShape, (area1, area2) => area1 > area2);
            if (plane1 == null || plane2 == null)
            {
                Messages.Error("Reference face cannot be automatically detected.");
                return false;
            }

            // Find the face which is nearer to the XoY-Plane
            context.ReferenceFace = plane1.Value.Distance(Pln.XOY) > plane2.Value.Distance(Pln.XOY) ? face2 : face1;
        }
        else
        {
            context.ReferenceFace = shape.FindSubshape(ReferenceFace, null)?.FirstOrDefault()?.ToFace();
            if (context.ReferenceFace == null)
            {
                Messages.Error("Manual reference face cannot be found and needs to be reselected.");
                return false;
            }
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------
        
    bool _Slice(MakeContext context)
    {
        context.Slicer = new SliceByPlanes(context.SourceShape, context.ReferenceFace, _LayerCount, _CustomLayerInterval);
        if(!context.Slicer.CreateSlices(DebugOutput))
        {
            return false;
        }

        _Layers = new SliceByPlanes.Slice[context.Slicer.Slices.Length];
        for (int index = 0; index < context.Slicer.Slices.Length; index++)
        {
            Layers[index] = context.Slicer.Slices[index];
        }

        return true;
    }
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Export

    public bool Export(string fileName, IExchanger exchanger)
    {
        if (!IsValid)
        {
            Messages.Error("The slice contour data could not be generated.");
            return false;
        }

        var exporter = exchanger as IDrawingExporter;
        if (exporter == null)
            return false;

        Drawing.Drawing drawing = new()
        {
            Name = "Contours"
        };
        for (var layer = 0; layer < _Layers.Length; layer++)
        {
            BRepDrawing drawingLayer = new()
            {
                Name = $"Layer{layer}",
                Source = new TopoDSBrepSource(_Layers[layer].BRep),
                Stroke = new StrokeStyle(Color.Black, 0.1f, LineStyle.Solid)
            };
            drawing.Add(drawingLayer);
        }
        return exporter.DoExport(fileName, drawing);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region IShapeDependent implementation

    public void OnShapeInvalidated(IShapeOperand operand)
    {
        Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    public void OnTransformInvalidated(Body body)
    {
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}