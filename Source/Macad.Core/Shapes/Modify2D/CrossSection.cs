using System;
using System.Diagnostics;
using System.Linq;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Core.Geom;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public class CrossSection : ModifierBase
{
    #region Enums

    public enum WireFilter
    {
        All,
        Outer,
        Inner
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Properties

    [SerializeMember]
    public Pln Plane
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
    public WireFilter Filter
    {
        get { return _Filter; }
        set
        {
            if (_Filter != value)
            {
                SaveUndo();
                _Filter = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override ShapeType ShapeType => ShapeType.Sketch;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Member

    Pln _Plane;
    WireFilter _Filter;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Create

    CrossSection()
    {
    }

    //--------------------------------------------------------------------------------------------------

    public static CrossSection Create(Body targetBody, Pln plane, bool isPlaneLocal = false)
    {
        Debug.Assert(targetBody != null);

        var newShape = new CrossSection()
        {
            _Plane = isPlaneLocal ? plane : plane.Transformed(targetBody.GetTransformation().Inverted())
        };

        targetBody.AddShape(newShape);

        return newShape;
    }

    //--------------------------------------------------------------------------------------------------

    /// Propose a plane which makes more sense than the base plane.
    /// This is an utility for the creation to find a plane that is a good place to start based on
    /// the current working plane.
    public static Pln ProposePlane(Body targetBody, Pln basePlane)
    {
        var brep = targetBody?.Shape?.GetTransformedBRep();
        if (brep == null)
            return basePlane;

        var bb = brep.BoundingBox();
        if (bb.IsOpen() || bb.IsThin(0.0001))
            return basePlane;

        if (!bb.IsOut(basePlane))
            return basePlane; // Plane is inside shape, this is OK.

        // estimate the size, then translate plane to the middle
        var transformedBb = bb.Transformed(new Trsf(Ax3.XOY, basePlane.Position));
        double size = transformedBb.CornerMax().Z - transformedBb.CornerMin().Z;
        double mid = transformedBb.CornerMin().Z + size / 2.0;
        return basePlane.Translated(new Vec(0, 0, mid)); 
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
        if (sourceShape.GetShapeType() != ShapeType.Solid)
        {
            Messages.Error("This modifier needs a solid as source shape.");
            return false;
        }

        var sourceBrep = GetOperandBRep(0);
        if (sourceBrep == null)
        {
            Messages.Error("The input shape is not valid.");
            return false;
        }

        // Create tools
        BRep_Builder builder = new();
        TopoDS_Face cutPlaneFace = new();
        builder.MakeFace(cutPlaneFace, new Geom_Plane(_Plane), 1e-7);

        // Create contour
        BRepAlgoAPI_Common section = new(sourceBrep, cutPlaneFace);
        section.SetNonDestructive(true);
        if (!section.IsDone())
        {
            Messages.Error("Cannot create section from shape.");
            return false;
        }

        var sectionFaces = section.Shape()?.Faces(false);
        if (sectionFaces.Count == 0)
        {
            Messages.Error("Section is empty.");
            return false;
        }

        // Filter result
        int wiresInResult = 0;
        TopoDS_Compound compound = new();
        builder.MakeCompound(compound);
        Action<TopoDS_Wire> addWireAction = (wire) =>
        {
            builder.Add(compound, wire);
            wiresInResult++;
        };

        foreach (var sectionFace in sectionFaces)
        {
            switch (_Filter)
            {
                case WireFilter.All:
                    sectionFace.Wires(false)
                               .ForEach(addWireAction);
                    break;
                case WireFilter.Outer:
                    addWireAction(BRepTools.OuterWire(sectionFace));
                    break;
                case WireFilter.Inner:
                    TopoDS_Shape outer = BRepTools.OuterWire(sectionFace);
                    sectionFace.Wires(false)
                               .SkipWhile(wire => wire.IsEqual(outer))
                               .ForEach(addWireAction);
                    break;
            }
        }

        if (wiresInResult == 0)
        {
            Messages.Warning("Section is empty after filter applied. Check filter setting.");
            return false;
        }

        // Finalize
        BRep = compound;

        return base.MakeInternal(flags);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Utils

    public Pln GetCenteredPlane(out double size)
    {
        size = 100.0;

        if (Body == null)
            return Plane;

        var brep = GetOperandBRep(0);
        if(brep == null)
            return Plane;

        //var trsf = Body.GetTransformation();
        Pnt midPoint = Body.Position;
        var bb = brep.BoundingBox();
        if (bb != null)
        {
            var points = BoundingBoxUtils.PlaneIntersection(bb, Plane);
            if (points.Count > 0)
            {
                size = 0;
                Pnt p0 = points[0];
                Vec psum = p0.ToVec();
                for (int i = 1; i < points.Count; i++)
                {
                    psum.Add(points[i].ToVec());
                    var dist = p0.Distance(points[i]);
                    if (dist > size)
                        size = dist;
                }
                psum.Scale(1.0 / points.Count);
                midPoint = psum.ToPnt();
            }
        }

        var projectedPoint = Plane.Value(ProjLib.Project(Plane, midPoint));
        return Plane.Translated(Plane.Location, projectedPoint);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}