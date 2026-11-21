using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;
using System;
using System.IO;
using System.Linq;

namespace Macad.Test.Core.Modeling.Modify;

[TestFixture]
public class BooleanTests
{
    const string _BasePath = @"Modeling\Modify\Boolean";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Fuse()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false);

        var boolOp = BooleanFuse.Create(shapes.target, shapes.operands);

        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(boolOp, Path.Combine(_BasePath, "Fuse")));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void FuseNoMergeFaces()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false);

        var boolOp = BooleanFuse.Create(shapes.target, shapes.operands);
        boolOp.MergeFaces = false;

        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(boolOp, Path.Combine(_BasePath, "FuseNoMergeFaces")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Old behaviour (version 0): common of the first operand with the union of all other operands.")]
    public void CommonLegacy()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(true);

        var boolOp = BooleanCommon.Create(shapes.target, shapes.operands);
        boolOp.Version = 0;

        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(boolOp, Path.Combine(_BasePath, "Common")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("A new common must keep only the volume shared by all operands, equal to a nested common of each operand.")]
    public void CommonOfThree()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(true);
        var boolOp = BooleanCommon.Create(shapes.target, shapes.operands);
        Assert.That(boolOp.Version, Is.EqualTo(1));
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));
        var result = boolOp.GetBRep();
        AssertHelper.IsWatertight(result);

        // Reference: (0 ∩ 1) ∩ 2
        var targetCS = boolOp.GetCoordinateSystem();
        var common01 = new BRepAlgoAPI_Common(boolOp.Operands[0].GetBRep(targetCS), boolOp.Operands[1].GetBRep(targetCS));
        Assert.IsTrue(common01.IsDone());
        var common012 = new BRepAlgoAPI_Common(common01.Shape(), boolOp.Operands[2].GetBRep(targetCS));
        Assert.IsTrue(common012.IsDone());
        double expectedVolume = common012.Shape().Volume();
        Assert.That(result.Volume(), Is.EqualTo(expectedVolume).Within(1e-6 * expectedVolume));

        // Must differ from old behaviour
        boolOp.Version = 0;
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));
        Assert.That(expectedVolume, Is.GreaterThan(1.0));
        Assert.That(expectedVolume, Is.LessThan(boolOp.GetBRep().Volume() - 1.0));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("The version makes no difference with only two operands.")]
    public void CommonOfTwoVersionIndependent()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false, 1);
        var boolOp = BooleanCommon.Create(shapes.target, shapes.operands[0]);
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));
        double volume = boolOp.GetBRep().Volume();

        boolOp.Version = 0;
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));
        Assert.That(boolOp.GetBRep().Volume(), Is.EqualTo(volume).Within(1e-9));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Operands without a volume shared by all must result in an empty shape, not an error.")]
    public void CommonOfThreeDisjoint()
    {
        var target = TestGeomGenerator.CreateBody(new Box { DimensionX = 10, DimensionY = 10, DimensionZ = 10 }, new Pnt(0, 0, 0));
        var op1 = TestGeomGenerator.CreateBody(new Box { DimensionX = 10, DimensionY = 10, DimensionZ = 10 }, new Pnt(5, 0, 0));
        var op2 = TestGeomGenerator.CreateBody(new Box { DimensionX = 10, DimensionY = 10, DimensionZ = 10 }, new Pnt(-5, 0, 0));
        var boolOp = BooleanCommon.Create(target, new BodyShapeOperand(op1), new BodyShapeOperand(op2));

        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));
        Assert.That(boolOp.GetBRep().Solids().Count, Is.EqualTo(0));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("The section curve of cylinder and sphere is split into two edges with identical source faces " +
                 "at the sphere seam, one of them cannot be distinguished by its adjacent faces.")]
    public void SubshapeReferencesCommonOfThree()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(true, 1);
        var boolOp = BooleanCommon.Create(shapes.target, shapes.operands);
        boolOp.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(boolOp, allowedIndexBased: 1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(4, 4, 0)]
    [TestCase(4, 5, 1)]
    [TestCase(5, 0, 1)]
    [Description("Commons from files older than 4.5 must keep the old behaviour.")]
    public void CompatibilityCommonVersion(int major, int minor, int expectedVersion)
    {
        var serialized = Serializer.Serialize(new BooleanCommon(), new SerializationContext());
        Assert.That(serialized, Does.Contain("Version:1"));

        var deserialized = Serializer.Deserialize<BooleanCommon>(serialized, new SerializationContext { Version = new(major, minor) });
        Assert.That(deserialized.Version, Is.EqualTo(expectedVersion));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(0)]
    [TestCase(1)]
    [Description("Undo, duplicate and copy/paste have no file version, the serialized version must be kept.")]
    public void CompatibilityCommonVersionWithoutFileVersion(int version)
    {
        var boolOp = new BooleanCommon { Version = version };
        foreach (var scope in new[] { SerializationScope.Storage, SerializationScope.UndoRedo, SerializationScope.CopyPaste })
        {
            var serialized = Serializer.Serialize(boolOp, new SerializationContext(scope));
            var deserialized = Serializer.Deserialize<BooleanCommon>(serialized, new SerializationContext(scope));
            Assert.That(deserialized.Version, Is.EqualTo(version), $"Scope {scope}");
        }
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Cut()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false);

        var boolOp = BooleanCut.Create(shapes.target, shapes.operands);

        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(boolOp, Path.Combine(_BasePath, "Cut")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Section and split subshapes of a fuse must get order-independent references, not raw indices")]
    public void SubshapeReferencesFuse()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false, 1);
        var boolOp = BooleanFuse.Create(shapes.target, shapes.operands);
        boolOp.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(boolOp);
        AssertHelper.IsSameSubshapeReferences(boolOp, Path.Combine(_BasePath, "SubshapeReferencesFuse"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Section and split subshapes of a fuse must get order-independent references, not raw indices")]
    public void SubshapeReferencesFuseNoMergeFaces()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false, 1);
        var boolOp = BooleanFuse.Create(shapes.target, shapes.operands);
        boolOp.MergeFaces = false;
        boolOp.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(boolOp);
        AssertHelper.IsSameSubshapeReferences(boolOp, Path.Combine(_BasePath, "SubshapeReferencesFuseNoMergeFaces"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Section and split subshapes of a cut must get order-independent references, not raw indices")]
    public void SubshapeReferencesCut()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false, 1);
        var boolOp = BooleanCut.Create(shapes.target, shapes.operands);
        boolOp.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(boolOp);
        AssertHelper.IsSameSubshapeReferences(boolOp, Path.Combine(_BasePath, "SubshapeReferencesCut"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SubshapeReferencesCommonOfTwo()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false, 1);
        var boolOp = BooleanCommon.Create(shapes.target, shapes.operands);
        // The operands do not overlap, the result is only non-empty with the old behaviour.
        boolOp.Version = 0;
        boolOp.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(boolOp);
        AssertHelper.IsSameSubshapeReferences(boolOp, Path.Combine(_BasePath, "SubshapeReferencesCommonOfTwo"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("The old common of three boolean bodies (version 0) is leading to an invalid shape, so we accept " +
                 "sub-optimal references")]
    public void SubshapeReferencesCommonOfThreeLegacy()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(true);
        var boolOp = BooleanCommon.Create(shapes.target, shapes.operands);
        boolOp.Version = 0;
        boolOp.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(boolOp, allowedIndexBased: 14);
    }

    //--------------------------------------------------------------------------------------------------


    [Test]
    public void SubshapeReferences_SphereCutThroughPoleSeam()
    {
        var sph = new Sphere { Radius = 10 };
        var target = TestGeomGenerator.CreateBody(sph, new Pnt(0, 0, 0));
        var box = new Box { DimensionX = 20, DimensionY = 4, DimensionZ = 20 };
        var tool = TestGeomGenerator.CreateBody(box, new Pnt(0, -2, 0));
        var op = BooleanCut.Create(target, new BodyShapeOperand(tool));
        Assert.IsTrue(op.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(op);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SubshapeReferences_SphereHalfCutOnSeamPlane()
    {
        var sph = new Sphere { Radius = 10 };
        var target = TestGeomGenerator.CreateBody(sph, new Pnt(0, 0, 0));
        var box = new Box { DimensionX = 40, DimensionY = 20, DimensionZ = 40 };
        var tool = TestGeomGenerator.CreateBody(box, new Pnt(-20, -20, -20));
        var op = BooleanCut.Create(target, new BodyShapeOperand(tool));
        Assert.IsTrue(op.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(op);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SubshapeReferences_SpheresFuseAlongSeam()
    {
        var sph = new Sphere { Radius = 10 };
        var target = TestGeomGenerator.CreateBody(sph, new Pnt(0, 0, 0));
        var sph2 = new Sphere { Radius = 10 };
        var tool = TestGeomGenerator.CreateBody(sph2, new Pnt(0, 0, 12));
        var op = BooleanFuse.Create(target, new BodyShapeOperand(tool));
        op.MergeFaces = false;
        Assert.IsTrue(op.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(op);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SubshapeReferences_CylinderCutBoxOnSeam()
    {
        var cyl = new Cylinder { Radius = 10, Height = 10 };
        var target = TestGeomGenerator.CreateBody(cyl, new Pnt(0, 0, 0));
        var box = new Box { DimensionX = 20, DimensionY = 4, DimensionZ = 20 };
        var tool = TestGeomGenerator.CreateBody(box, new Pnt(0, -2, -5));
        var op = BooleanCut.Create(target, new BodyShapeOperand(tool));
        Assert.IsTrue(op.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(op);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Referencing a subshape of the original solid must return the same subshape for all instances")]
    public void SolidAllInstancesInModifiedList()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false, 1);
        var boolOp = BooleanCommon.Create(shapes.target, shapes.operands);
        // The operands do not overlap, so only the old behaviour results in two instances.
        boolOp.Version = 0;
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));

        var subshapes = boolOp.FindSubshape(new SubshapeReference(SubshapeType.Face, ((Shape)boolOp.Predecessor).Guid, "ZMin", 0), null);
        Assert.IsNotNull(subshapes);
        Assert.That(subshapes, Has.Count.EqualTo(2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Faces born at a boolean intersection must stay bound to the same geometry")]
    public void BooleanFuseSurvivesOperandChange()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false, 1);
        var boolOp = BooleanFuse.Create(shapes.target, shapes.operands);
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));

        var cylinder = (shapes.operands[0] as BodyShapeOperand)?.Shape as Cylinder;
        Assert.That(cylinder, Is.Not.Null, "Expected a cylinder as first operand");

        AssertHelper.AreSubshapeReferencesStableAfterChange(boolOp, () => cylinder.Height = 18);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("A reference into a boolean result must survive save/reload")]
    public void ReferencesSurviveSaveAndReload()
    {
        Context.InitWithDefault();
        var shapes = TestGeomGenerator.CreateBooleanBodies(false, 1);
        var boolOp = BooleanFuse.Create(shapes.target, shapes.operands);
        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));
        CoreContext.Current.Document.Add(boolOp.Body);
        boolOp.Body.GetReferencedBodies().ForEach(body => CoreContext.Current.Document.Add(body));

        // Pick a couple of edges of the fuse result to chamfer.
        var refs = boolOp.GetBRep().Edges().Take(3).Select(boolOp.GetSubshapeReference).ToArray();
        AssertHelper.CheckReferenceSurvivesReload(boolOp.Body, refs);
    }

    //--------------------------------------------------------------------------------------------------

}