using System.IO;
using System.Linq;
using Macad.Test.Utils;
using Macad.Common;
using Macad.Core;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Core.Modeling.Modify;

[TestFixture]
public class ImprintTests
{
    const string _BasePath = @"Modeling\Modify\Imprint";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Raise()
    {
        var shape = TestGeomGenerator.CreateImprint();
        Assert.IsNotNull(shape);

        shape.Depth = 2.5;
        shape.Mode = Imprint.ImprintMode.Raise;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "Raise")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Lower()
    {
        var shape = TestGeomGenerator.CreateImprint();
        Assert.IsNotNull(shape);

        shape.Depth = 2.5;
        shape.Mode = Imprint.ImprintMode.Lower;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "Lower")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Cutout()
    {
        var shape = TestGeomGenerator.CreateImprint();
        Assert.IsNotNull(shape);

        shape.Depth = 2.5;
        shape.Mode = Imprint.ImprintMode.Cutout;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "Cutout")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RingFace()
    {
        var shape = TestGeomGenerator.CreateImprint(TestSketchGenerator.SketchType.Ring);
        Assert.IsNotNull(shape);

        shape.Depth = 2.5;
        shape.Mode = Imprint.ImprintMode.Raise;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "RingFace")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultiFace()
    {
        var shape = TestGeomGenerator.CreateImprint(TestSketchGenerator.SketchType.MultiCircle);
        Assert.IsNotNull(shape);

        shape.Depth = 2.5;
        shape.Mode = Imprint.ImprintMode.Raise;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "MultiFace")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RaiseDraft()
    {
        var shape = TestGeomGenerator.CreateImprint();
        Assert.IsNotNull(shape);

        shape.Depth = 2.5;
        shape.Mode = Imprint.ImprintMode.Raise;
        shape.DraftAngle = 40;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "RaiseDraft")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LowerDraft()
    {
        var shape = TestGeomGenerator.CreateImprint();
        Assert.IsNotNull(shape);

        shape.Depth = 2.5;
        shape.Mode = Imprint.ImprintMode.Lower;
        shape.DraftAngle = 40;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "LowerDraft")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CutoutDraft()
    {
        var shape = TestGeomGenerator.CreateImprint();
        Assert.IsNotNull(shape);

        shape.Depth = 2.5;
        shape.Mode = Imprint.ImprintMode.Cutout;
        shape.DraftAngle = 40;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "CutoutDraft")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RingFaceDraft()
    {
        var shape = TestGeomGenerator.CreateImprint(TestSketchGenerator.SketchType.Ring);
        Assert.IsNotNull(shape);

        shape.Depth = 2.5;
        shape.Mode = Imprint.ImprintMode.Raise;
        shape.DraftAngle = 10;

        //Imprinting a ring face with draft angle isn't supported by the algo.
        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        var messages = Context.Current.MessageHandler.GetEntityMessages(shape);
        Assert.AreEqual(1, messages.Count);
        Assert.AreEqual(MessageSeverity.Warning, messages[0].Severity);
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "RingFaceDraft")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultiFaceDraft()
    {
        var shape = TestGeomGenerator.CreateImprint(TestSketchGenerator.SketchType.MultiCircle);
        Assert.IsNotNull(shape);

        shape.Depth = 2.5;
        shape.Mode = Imprint.ImprintMode.Raise;
        shape.DraftAngle = 40;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "MultiFaceDraft")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ReversedFace()
    {
        var baseShape = new Box
        {
            DimensionX = 20,
            DimensionY = 20,
            DimensionZ = 20,
        };
        var body = TestGeomGenerator.CreateBody(baseShape, new Pnt(-10, -10, 0));

        var imprint = Imprint.Create(body, baseShape.GetSubshapeReference(SubshapeType.Face, 0));

        var sketch = imprint.Operands[1] as Macad.Core.Shapes.Sketch;
        Assert.IsNotNull(sketch);

        sketch.Points.Add(0, new Pnt2d(0, 0));
        sketch.Points.Add(1, new Pnt2d(0, 11));
        sketch.Segments.Add(0, new SketchSegmentCircle(0, 1));

        Assert.IsNotNull(imprint);

        imprint.Depth = 2.5;
        imprint.Mode = Imprint.ImprintMode.Raise;

        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(imprint, Path.Combine(_BasePath, "ReversedFace")));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SketchGetsEmpty()
    {
        var shape = TestGeomGenerator.CreateImprint();
        Assert.IsNotNull(shape);

        shape.Depth = 2.5;
        shape.Mode = Imprint.ImprintMode.Raise;
        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
            
        shape.Sketch.DeleteSegment(shape.Sketch.Segments.Values.First());
            
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "EmptySketch")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(5, 2, Imprint.ImprintMode.Raise)]
    [TestCase(5, 2, Imprint.ImprintMode.Lower)]
    [TestCase(11, 2, Imprint.ImprintMode.Raise)]
    [TestCase(11, 2, Imprint.ImprintMode.Lower)]
    public void ChamferFaces(int edgeToChamfer, int faceToImprint, Imprint.ImprintMode mode)
    {
        var body = TestGeomGenerator.CreateBox().Body;
        var chamfer = Chamfer.Create(body, new[] { body.Shape.GetSubshapeReference(SubshapeType.Edge, edgeToChamfer) });
        chamfer.Distance = 5.0;
        var imprint = Imprint.Create(body, body.Shape.GetSubshapeReference(SubshapeType.Face, faceToImprint));
        var center = imprint.Sketch.AddPoint(new Pnt2d(0, 0));
        var rim = imprint.Sketch.AddPoint(new Pnt2d(0, 2));
        imprint.Sketch.AddSegment(new SketchSegmentCircle(center, rim));
        imprint.Mode = mode;

        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(body.Shape, Path.Combine(_BasePath, $"ChamferFaces_{edgeToChamfer}_{mode}")));
    }

    //--------------------------------------------------------------------------------------------------

    #region Sketch of another body as operand

    const double _ExpectedVolume = 20 * 20 * 5 + System.Math.PI * 2 * 2 * 2.5;

    // Target: box 20x20x5 centered at the world origin, face 5 is the top face at z=5.
    static Body _CreateTargetBody(out Box box)
    {
        box = new Box
        {
            DimensionX = 20,
            DimensionY = 20,
            DimensionZ = 5
        };
        return TestGeomGenerator.CreateBody(box, new Pnt(-10, -10, 0));
    }

    //--------------------------------------------------------------------------------------------------

    static Macad.Core.Shapes.Sketch _CreateCircleSketch(double radius, double centerX = 0)
    {
        var sketch = new Macad.Core.Shapes.Sketch();
        var center = sketch.AddPoint(new Pnt2d(centerX, 0));
        var rim = sketch.AddPoint(new Pnt2d(centerX, radius));
        sketch.AddSegment(new SketchSegmentCircle(center, rim));
        return sketch;
    }

    //--------------------------------------------------------------------------------------------------

    static Imprint _CreateImprintWithSketchBody(Pnt sketchBodyPosition, out Macad.Core.Shapes.Sketch sketch, out Body target,
                                                Quaternion? sketchBodyRotation = null, double circleCenterX = 0)
    {
        target = _CreateTargetBody(out var box);
        sketch = _CreateCircleSketch(2, circleCenterX);
        var sketchBody = TestGeomGenerator.CreateBody(sketch, sketchBodyPosition);
        if (sketchBodyRotation != null)
        {
            sketchBody.Rotation = sketchBodyRotation.Value;
        }

        // The sketch belongs to another body, so AddOperand wraps it into a BodyShapeOperand
        var imprint = Imprint.Create(target, box.GetSubshapeReference(SubshapeType.Face, 5), sketch);
        Assert.IsInstanceOf<BodyShapeOperand>(imprint.Operands[1]);
        imprint.Depth = 2.5;
        imprint.Mode = Imprint.ImprintMode.Raise;
        return imprint;
    }

    //--------------------------------------------------------------------------------------------------

    static Imprint _CreateEmbeddedReference()
    {
        var body = _CreateTargetBody(out var box);
        var imprint = Imprint.Create(body, box.GetSubshapeReference(SubshapeType.Face, 5));
        var center = imprint.Sketch.AddPoint(new Pnt2d(0, 0));
        var rim = imprint.Sketch.AddPoint(new Pnt2d(0, 2));
        imprint.Sketch.AddSegment(new SketchSegmentCircle(center, rim));
        imprint.Depth = 2.5;
        imprint.Mode = Imprint.ImprintMode.Raise;
        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));
        return imprint;
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SketchBodyOperand_Precondition_Face5IsTopFace()
    {
        _CreateTargetBody(out var box);
        Assert.IsTrue(FaceAlgo.GetCenteredPlaneFromFace(box, 5, false, out var facePlane));
        Assert.That(facePlane.Location.Distance(new Pnt(0, 0, 5)), Is.LessThan(1e-6));
        Assert.That(facePlane.Axis.Direction.IsEqual(Dir.DZ, 1e-6), Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    // The sketch body lies exactly on the target face (world position = face center, no rotation),
    // so its sketch coordinates and its world placement denote the same location. The imprint must
    // equal the one made with an embedded sketch.
    [Test]
    public void SketchBodyOperand_OnFace_MatchesEmbeddedSketch()
    {
        var imprint = _CreateImprintWithSketchBody(new Pnt(0, 0, 5), out _, out _);
        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));

        var expectedBRep = _CreateEmbeddedReference().GetTransformedBRep();
        var actualBRep = imprint.GetTransformedBRep();
        Assert.That(actualBRep.Volume(), Is.EqualTo(_ExpectedVolume).Within(1e-3));
        Assert.That(actualBRep.Volume(), Is.EqualTo(expectedBRep.Volume()).Within(1e-3));
        Assert.IsTrue(actualBRep.BoundingBox().IsSameBounds(expectedBRep.BoundingBox(), 1e-3),
                      $"Expected {expectedBRep.BoundingBox().ToRoundedString()}, got {actualBRep.BoundingBox().ToRoundedString()}");
    }

    //--------------------------------------------------------------------------------------------------

    // Making the imprint must not change the placement of the sketch body it uses.
    [Test]
    public void SketchBodyOperand_DoesNotMoveSketchBody()
    {
        var imprint = _CreateImprintWithSketchBody(new Pnt(0, 0, 5), out var sketch, out _);
        var coordSystemBefore = sketch.GetCoordinateSystem();
        var boundsBefore = sketch.GetTransformedBRep().BoundingBox();

        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));

        Assert.IsNull(sketch.BoundToPlane, "The sketch of another body must not be bound to the face plane.");
        Assert.IsNull(sketch.BoundTo);
        Assert.That(sketch.GetCoordinateSystem().Location.Distance(coordSystemBefore.Location), Is.LessThan(1e-6));
        Assert.That(sketch.GetCoordinateSystem().Direction.IsEqual(coordSystemBefore.Direction, 1e-6), Is.True);
        var boundsAfter = sketch.GetTransformedBRep().BoundingBox();
        Assert.IsTrue(boundsAfter.IsSameBounds(boundsBefore, 1e-6),
                      $"Sketch body moved from {boundsBefore.ToRoundedString()} to {boundsAfter.ToRoundedString()}");
    }

    //--------------------------------------------------------------------------------------------------

    // The bounds of the planar top face of the raised boss, in world coordinates.
    static (double minX, double minY, double minZ, double maxX, double maxY, double maxZ) _BossTopFaceBounds(Imprint imprint, double z)
    {
        var topFaces = imprint.GetTransformedBRep().Faces()
                              .Select(face => face.BoundingBox().MinMax())
                              .Where(b => System.Math.Abs(b.minZ - z) < 1e-3 && System.Math.Abs(b.maxZ - z) < 1e-3)
                              .ToList();
        Assert.That(topFaces.Count, Is.EqualTo(1), $"Expected one boss top face at z={z}.");
        return topFaces[0];
    }

    //--------------------------------------------------------------------------------------------------

    // The sketch body is parallel to the target face, but neither on it nor centered: it is offset along the
    // face normal, shifted and rotated around the normal. The sketch is transformed from its own body system
    // into the target, then projected along the face normal onto the face. So the boss appears below the
    // sketch as it is shown, not at the sketch coordinates taken relative to the face center.
    [Test]
    public void SketchBodyOperand_ParallelOffset_ProjectedOntoFace()
    {
        // Circle center (4,0) in the sketch, rotated 90° around Z and moved to (3,-2,8) => world center (3,2,8)
        var imprint = _CreateImprintWithSketchBody(new Pnt(3, -2, 8), out var sketch, out _,
                                                   new Quaternion(Dir.DZ.ToVec(), System.Math.PI / 2), circleCenterX: 4);
        var sketchBoundsBefore = sketch.GetTransformedBRep().BoundingBox();

        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));

        Assert.That(imprint.GetTransformedBRep().Volume(), Is.EqualTo(_ExpectedVolume).Within(1e-3));
        var boss = _BossTopFaceBounds(imprint, 7.5);
        Assert.That(boss.minX, Is.EqualTo(1).Within(1e-3));
        Assert.That(boss.maxX, Is.EqualTo(5).Within(1e-3));
        Assert.That(boss.minY, Is.EqualTo(0).Within(1e-3));
        Assert.That(boss.maxY, Is.EqualTo(4).Within(1e-3));

        Assert.IsNull(sketch.BoundToPlane);
        Assert.IsTrue(sketch.GetTransformedBRep().BoundingBox().IsSameBounds(sketchBoundsBefore, 1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    // A sketch which is not parallel to the face cannot be projected without distortion, this is an error.
    [Test]
    public void SketchBodyOperand_NotParallel_Fails()
    {
        var imprint = _CreateImprintWithSketchBody(new Pnt(0, 0, 8), out _, out _,
                                                   new Quaternion(Dir.DX.ToVec(), 30.0.ToRad()));

        Assert.IsFalse(imprint.Make(Shape.MakeFlags.None));
        var messages = Context.Current.MessageHandler.GetEntityMessages(imprint);
        Assert.That(messages.Any(m => m.Severity == MessageSeverity.Error && m.Text.Contains("parallel")), Is.True,
                    string.Join("; ", messages.Select(m => m.Text)));
    }

    //--------------------------------------------------------------------------------------------------

    // The sketch body keeps its world placement. Moving the target body moves the solid; the boss stays below
    // the sketch, projected onto the moved face.
    [Test]
    public void SketchBodyOperand_MoveTargetBody()
    {
        var imprint = _CreateImprintWithSketchBody(new Pnt(0, 0, 5), out var sketch, out var target);
        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));
        var sketchBoundsBefore = sketch.GetTransformedBRep().BoundingBox();

        target.Position = target.Position.Translated(new Vec(5, 0, 10));
        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));

        Assert.That(imprint.GetTransformedBRep().Volume(), Is.EqualTo(_ExpectedVolume).Within(1e-3));
        var boss = _BossTopFaceBounds(imprint, 17.5);
        Assert.That(boss.minX, Is.EqualTo(-2).Within(1e-3));
        Assert.That(boss.maxX, Is.EqualTo(2).Within(1e-3));
        Assert.That(boss.minY, Is.EqualTo(-2).Within(1e-3));
        Assert.That(boss.maxY, Is.EqualTo(2).Within(1e-3));
        Assert.IsTrue(sketch.GetTransformedBRep().BoundingBox().IsSameBounds(sketchBoundsBefore, 1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}