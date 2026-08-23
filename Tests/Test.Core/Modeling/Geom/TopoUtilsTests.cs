using Macad.Core;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;
using System.Linq;
using System.Windows.Shapes;

namespace Macad.Test.Core.Modeling.Geom;

[TestFixture]
public class TopoUtilsTests
{
    [Test]
    public void CreateFacesFromWires_KeepOrderOfEdges()
    {
        var sketch = Macad.Core.Shapes.Sketch.Create();
        sketch.Points.Add(0, new(0, 0));
        sketch.Points.Add(1, new(0.6, 0.18622695860977245));
        sketch.Points.Add(2, new(0, 2.6));
        sketch.Points.Add(3, new(1.0, 2.6));
        sketch.Points.Add(4, new(0.8, 1.6));
        sketch.Points.Add(5, new(0.4, 0.6));
        sketch.Points.Add(7, new(0.6, 0));
        sketch.Points.Add(6, new(0.4, 0.6));
        sketch.Segments.Add(0, new SketchSegmentLine(0, 7));
        sketch.Segments.Add(1, new SketchSegmentLine(0, 2));
        sketch.Segments.Add(2, new SketchSegmentLine(2, 3));
        sketch.Segments.Add(3, new SketchSegmentLine(3, 4));
        sketch.Segments.Add(4, new SketchSegmentLine(4, 5));
        sketch.Segments.Add(6, new SketchSegmentBezier(5, 6, 1));
        sketch.Segments.Add(5, new SketchSegmentLine(1, 7));

        var body = Body.Create(sketch);
        body.Position = new(-6.25, 36.269, 36.2);
        body.Rotation = new(0.5, 0.5, 0.5, 0.5);

        var first = TopoUtils.CreateFacesFromWires(sketch.GetBRep(), sketch.Plane, out var history1).Edges().Select(e => e.BoundingBox()).ToArray();
        var second = TopoUtils.CreateFacesFromWires(sketch.GetBRep(), sketch.Plane, out var history2).Edges().Select(e => e.BoundingBox()).ToArray();

        sketch.Invalidate();
        var remade = TopoUtils.CreateFacesFromWires(sketch.GetBRep(), sketch.Plane, out var history3).Edges().Select(e => e.BoundingBox()).ToArray();

        Assert.That(first.Length, Is.EqualTo(second.Length), "First and second arrays have different lengths.");
        Assert.That(first.Length, Is.EqualTo(remade.Length), "First and remade arrays have different lengths.");
        Assert.Multiple(() =>
        {
            for (int i = 0; i < first.Length; i++)
            {
                Assert.That(first[i].IsSameBounds(second[i]), $"Bounds of first and second are not the same at index {i}");
                Assert.That(first[i].IsSameBounds(remade[i]), $"Bounds of first and remade are not the same at index {i}");
            }
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateFacesFromWires_SingleClosedWire()
    {
        var wire = TestBRepGenerator.MakeClosedRectWire(0, 0, 5, 5);
        var shape = TestBRepGenerator.ShapeFromWires(wire);
        var result = TopoUtils.CreateFacesFromWires(shape, Pln.XOY, out var history);

        Assert.That(result, Is.Not.Null);
        Assert.That(result.Faces().Count(), Is.GreaterThan(0));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateFacesFromWires_OnlyOpenWires()
    {
        var wire = TestBRepGenerator.MakeOpenWire();
        var shape = TestBRepGenerator.ShapeFromWires(wire);
        var result = TopoUtils.CreateFacesFromWires(shape, Pln.XOY, out var history);

        Assert.That(result, Is.Not.Null);
        Assert.That(result.IsNull() || result.Faces().Count == 0, Is.True, "Expected an empty face when all wires are open.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateFacesFromWires_NoWires()
    {
        var builder = new BRep_Builder();
        var compound = new TopoDS_Compound();
        builder.MakeCompound(compound);
        var result = TopoUtils.CreateFacesFromWires(compound, Pln.XOY, out var history);

        Assert.That(result, Is.Not.Null);
        Assert.That(result.Faces().Count(), Is.EqualTo(0));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateFacesFromWires_OpenAndClosedWires()
    {
        var closedWire = TestBRepGenerator.MakeClosedRectWire(0, 0, 5, 5);
        var openWire = TestBRepGenerator.MakeOpenWire();
        var shape = TestBRepGenerator.ShapeFromWires(closedWire, openWire);
        var result = TopoUtils.CreateFacesFromWires(shape, Pln.XOY, out var history);

        Assert.That(result, Is.Not.Null);
        Assert.That(result.Faces().Count(), Is.GreaterThan(0));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateFacesFromWires_FaceWithHoles()
    {
        // Outer rect and a smaller inner rect (hole)
        var outerWire = TestBRepGenerator.MakeClosedRectWire(0, 0, 10, 10);
        var innerWire = TestBRepGenerator.MakeClosedRectWire(2, 2, 5, 5);
        var shape = TestBRepGenerator.ShapeFromWires(outerWire, innerWire);
        var result = TopoUtils.CreateFacesFromWires(shape, Pln.XOY, out var history);

        Assert.That(result, Is.Not.Null);
        Assert.That(result.Wires().Count(), Is.EqualTo(2),
            "Expected face to contain both the outer wire and the inner hole wire.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateFacesFromWires_ResultFaceHasCorrectEdgeCount()
    {
        var wire = TestBRepGenerator.MakeClosedRectWire(0, 0, 4, 3);
        var shape = TestBRepGenerator.ShapeFromWires(wire);
        var result = TopoUtils.CreateFacesFromWires(shape, Pln.XOY, out var history);

        Assert.That(result, Is.Not.Null);
        Assert.That(result.Edges().Count(), Is.EqualTo(4),
            "A rectangular closed wire should produce a face with exactly 4 edges.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CopyWithPCurves_PlanarFace_PCurvesExistOnAllEdges()
    {
        // A box face has PCurves on every boundary edge (parametric curves on the plane surface).
        var origFace = new BRepPrimAPI_MakeBox(5, 5, 5).BottomFace();

        var copy = TopoUtils.CopyWithPCurves(origFace, out _);

        var copyFace = copy.Faces().First().ToFace();
        Assert.Multiple(() =>
        {
            foreach (var edge in copyFace.Edges().Select(e => e.ToEdge()))
            {
                double first = 0, last = 0;
                var pcurve = BRep_Tool.CurveOnSurface(edge, copyFace, ref first, ref last);
                Assert.That(pcurve, Is.Not.Null,
                    "Every edge of a copied planar face must have a PCurve on the face surface.");
            }
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CopyWithPCurves_PlanarFace_PCurveRangesMatchOriginal()
    {
        var origFace = new BRepPrimAPI_MakeBox(5, 5, 5).BottomFace();

        // Collect (first, last) range for every edge PCurve on the original face.
        static (double First, double Last) GetRange(TopoDS_Edge edge, TopoDS_Face face)
        {
            double f = 0, l = 0;
            BRep_Tool.CurveOnSurface(edge, face, ref f, ref l);
            return (f, l);
        }

        var origEdges  = origFace.Edges().Select(e => e.ToEdge()).ToArray();
        var origRanges = origEdges.Select(e => GetRange(e, origFace)).ToArray();

        var copy     = TopoUtils.CopyWithPCurves(origFace, out _);
        var copyFace = copy.Faces().First().ToFace();
        var copyEdges  = copyFace.Edges().Select(e => e.ToEdge()).ToArray();
        var copyRanges = copyEdges.Select(e => GetRange(e, copyFace)).ToArray();

        Assert.That(copyRanges.Length, Is.EqualTo(origRanges.Length));
        Assert.Multiple(() =>
        {
            for (int i = 0; i < origRanges.Length; i++)
            {
                Assert.That(copyRanges[i].First, Is.EqualTo(origRanges[i].First).Within(Precision.Confusion()),
                    $"PCurve start parameter mismatch at edge index {i}.");
                Assert.That(copyRanges[i].Last,  Is.EqualTo(origRanges[i].Last).Within(Precision.Confusion()),
                    $"PCurve end parameter mismatch at edge index {i}.");
            }
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CopyWithPCurves_PlanarFace_PCurveGeometryIsDistinctFromOriginal()
    {
        BRep_CurveOnSurface __FirstCos(TopoDS_Edge edge)
        {
            return (edge.TShape() as BRep_TEdge)!.CurvesList().OfType<BRep_CurveOnSurface>().First();
        }

        //--------------------------------------------------------------------------------------------------

        // copyGeom=true in BRepBuilderAPI_Copy creates new geometry objects;
        // verify the copied PCurve instances are not shared with the original.
        var origFace = new BRepPrimAPI_MakeBox(5, 5, 5).BottomFace();

        var copy     = TopoUtils.CopyWithPCurves(origFace, out _);
        var copyFace = copy.Faces().First().ToFace();

        var origEdge = origFace.Edges().First().ToEdge();
        var copyEdge = copyFace.Edges().First().ToEdge();

        var origCos = __FirstCos(origEdge);
        var copyCos = __FirstCos(copyEdge);

        Assert.That(origCos, Is.Not.Null, "Original edge must have a CurveOnSurface.");
        Assert.That(copyCos, Is.Not.Null, "Copied edge must have a CurveOnSurface.");
        // Native pointers differ — the geometry was deep-copied, not shared.
        Assert.That(copyCos!.PCurve().GetHashCode(), Is.Not.EqualTo(origCos!.PCurve().GetHashCode()),
            "Copied PCurve must be a distinct geometry object, not a shared reference.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CopyWithPCurves_Cylinder_AllFaceEdgesHavePCurves()
    {
        // A complete cylinder has planar top/bottom faces and a curved lateral face with a seam.
        var cylinder = new BRepPrimAPI_MakeCylinder(5, 10).Shape();

        var copy = TopoUtils.CopyWithPCurves(cylinder, out _);

        Assert.Multiple(() =>
        {
            foreach (var face in copy.Faces().Select(f => f.ToFace()))
            {
                foreach (var edge in face.Edges().Select(e => e.ToEdge()))
                {
                    double first = 0, last = 0;
                    var pcurve = BRep_Tool.CurveOnSurface(edge, face, ref first, ref last);
                    Assert.That(pcurve, Is.Not.Null,
                        "Every edge of every face in the copied cylinder must have a PCurve.");
                }
            }
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CopyWithPCurves_Cylinder_SeamEdgeHasBothPCurves()
    {
        // The lateral face of a full cylinder has a seam edge represented by
        // BRep_CurveOnClosedSurface, which stores two PCurves (u=0 and u=2π).
        var cylinder = new BRepPrimAPI_MakeCylinder(5, 10).Shape();

        var copy = TopoUtils.CopyWithPCurves(cylinder, out _);

        var seamEdges = copy.Edges()
            .Select(e => e.ToEdge())
            .Where(e => (e.TShape() as BRep_TEdge)?
                            .CurvesList()
                            .Any(r => r is BRep_CurveOnClosedSurface) == true)
            .ToArray();

        Assert.That(seamEdges, Is.Not.Empty,
            "The copied cylinder must contain at least one seam edge (BRep_CurveOnClosedSurface).");

        Assert.Multiple(() =>
        {
            foreach (var seamEdge in seamEdges)
            {
                var closedCos = (seamEdge.TShape() as BRep_TEdge)!
                    .CurvesList()
                    .OfType<BRep_CurveOnClosedSurface>()
                    .First();

                Assert.That(closedCos.PCurve(),  Is.Not.Null,
                    "First PCurve of the seam edge must not be null after copying.");
                Assert.That(closedCos.PCurve2(), Is.Not.Null,
                    "Second PCurve of the seam edge must not be null after copying.");
            }
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CopyWithPCurves_History_MapsAllOriginalEdgesToCopiedEdges()
    {
        var origFace = new BRepPrimAPI_MakeBox(5, 5, 5).BottomFace();
        var origEdges = origFace.Edges().Select(e => e.ToEdge()).ToArray();

        TopoUtils.CopyWithPCurves(origFace, out var history);

        Assert.Multiple(() =>
        {
            foreach (var origEdge in origEdges)
            {
                var modified = history.Modified(origEdge);
                Assert.That(modified.Size(), Is.EqualTo(1),
                    "Each original edge must map to exactly one copied edge in the history.");

                // The mapped edge must be a different topological object.
                var copyEdge = modified.ToList().First().ToEdge();
                Assert.That(copyEdge.TShape().GetHashCode(), Is.Not.EqualTo(origEdge.TShape().GetHashCode()),
                    "The history-mapped edge must be a distinct TShape from the original.");
            }
        });
    }

    //--------------------------------------------------------------------------------------------------

}