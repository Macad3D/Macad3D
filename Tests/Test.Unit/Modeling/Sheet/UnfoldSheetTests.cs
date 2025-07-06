using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;
using System.IO;
using System.Linq;

namespace Macad.Test.Unit.Modeling.Sheet;

[TestFixture]
public class UnfoldSheetTests
{
    const string _BasePath = @"Modeling\Sheet\UnfoldSheet";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Simple()
    {
        var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, @"..\FlangeSheet\Simple.brep"));
        Assert.That(source, Is.Not.Null);

        var unfold = UnfoldSheet.Create(source); // Root face assumed: 12
        Assert.That(unfold, Is.Not.Null);
            
        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "Simple")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void GapAndRelief()
    {
        var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, @"..\FlangeSheet\GapAndRelief.brep"));
        Assert.That(source, Is.Not.Null);

        var unfold = UnfoldSheet.Create(source);
        Assert.That(unfold, Is.Not.Null);

        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "GapAndRelief")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SimpleMultiple()
    {
        var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "SimpleMultiple_Source.brep"));
        Assert.That(source, Is.Not.Null);

        var unfold = UnfoldSheet.Create(source);
        Assert.That(unfold, Is.Not.Null);

        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "SimpleMultiple")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Multiple()
    {
        var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, @"..\FlangeSheet\Multiple.brep"));
        Assert.That(source, Is.Not.Null);

        var unfold = UnfoldSheet.Create(source);
        Assert.That(unfold, Is.Not.Null);

        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        Assert.That(Context.Current.MessageHandler.GetEntityMessages(unfold).Where(msg => msg.Severity == MessageSeverity.Error).Count, Is.Zero, "Shape has error.");
        AssertHelper.IsWatertight(unfold);
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "Multiple")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void NoRadius()
    {
        var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, @"..\FlangeSheet\NoRadius.brep"));
        Assert.That(source, Is.Not.Null);

        var unfold = UnfoldSheet.Create(source);
        Assert.That(unfold, Is.Not.Null);

        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        AssertHelper.IsWatertight(unfold);
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "NoRadius")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void NoLength()
    {
        var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, @"..\FlangeSheet\NoLength.brep"));
        Assert.That(source, Is.Not.Null);

        var unfold = UnfoldSheet.Create(source);
        Assert.That(unfold, Is.Not.Null);

        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        AssertHelper.IsWatertight(unfold);
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "NoLength")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Complex()
    {
        var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "Complex_Source.brep"));
        Assert.That(source, Is.Not.Null);

        var unfold = UnfoldSheet.Create(source);
        Assert.That(unfold, Is.Not.Null);

        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        AssertHelper.IsWatertight(unfold);
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "Complex")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void NoFlange()
    {
        var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "NoFlange_Source.brep"));
        Assert.That(source, Is.Not.Null);

        var unfold = UnfoldSheet.Create(source);
        Assert.That(unfold, Is.Not.Null);

        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        AssertHelper.IsWatertight(unfold);
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "NoFlange")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AnotherStartFace()
    {
        var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "NoFlange_Source.brep"));
        Assert.That(source, Is.Not.Null);

        var unfold = UnfoldSheet.Create(source, source.Shape.GetSubshapeReference(SubshapeType.Face, 3)); // Also try with 2
        Assert.That(unfold, Is.Not.Null);

        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        AssertHelper.IsWatertight(unfold);
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "AnotherStartFace")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AbandonedFaces()
    {
        var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "AbandonedFaces_Source.brep"));
        Assert.That(source, Is.Not.Null);

        var unfold = UnfoldSheet.Create(source);
        Assert.That(unfold, Is.Not.Null);

        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        AssertHelper.IsWatertight(unfold);
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "AbandonedFaces")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CircEdgesOnFlatSection()
    {
        var body = TestData.GetBodyFromBRep(Path.Combine(_BasePath, @"CircEdgesOnFlatSection_Source.brep"));
        Assert.That(body, Is.Not.Null);

        var unfold = UnfoldSheet.Create(body);
        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        AssertHelper.IsWatertight(unfold);
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "CircEdgesOnFlatSection")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CircCutoutOnFlatSection()
    {
        var body = TestData.GetBodyFromBRep(Path.Combine(_BasePath, @"CircCutoutOnFlatSection_Source.brep"));
        Assert.That(body, Is.Not.Null);

        var unfold = UnfoldSheet.Create(body);
        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        AssertHelper.IsWatertight(unfold);
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "CircCutoutOnFlatSection")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ArcCutoutOnFlatSection()
    {
        var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "ArcCutoutOnFlatSection_Source.brep"));
        Assert.That(source, Is.Not.Null);
        var unfold = UnfoldSheet.Create(source);

        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        AssertHelper.IsWatertight(unfold);
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, $"ArcCutoutOnFlatSection")));
        Assert.That(Context.Current.MessageHandler.GetEntityMessages(unfold).All(msg => msg.Severity == MessageSeverity.Trace));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SliceSideFaces()
    {
        var source = TestData.GetTestDataBRep(Path.Combine(_BasePath, @"..\FlangeSheet\Simple.brep"));
        Assert.That(source, Is.Not.Null);
        ShapeUpgrade_UnifySameDomain unify = new(source, true);
        unify.Build();
        var body = Body.Create(Solid.Create(unify.Shape()));

        var unfold = UnfoldSheet.Create(body);
        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        AssertHelper.IsWatertight(unfold);
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "SliceSideFaces")));
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void SliceSideFaces_Multiple()
    {
        var source = TestData.GetTestDataBRep(Path.Combine(_BasePath, "SimpleMultiple_Source.brep"));
        Assert.That(source, Is.Not.Null);
        ShapeUpgrade_UnifySameDomain unify = new(source, true);
        unify.Build();
        var body = Body.Create(Solid.Create(unify.Shape()));

        var unfold = UnfoldSheet.Create(body);
        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        AssertHelper.IsWatertight(unfold);
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "SliceSideFaces_Multiple")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SliceSideFaces_NoFlange()
    {
        var source = TestData.GetTestDataBRep(Path.Combine(_BasePath, "NoFlange_Source.brep"));
        Assert.That(source, Is.Not.Null);
        ShapeUpgrade_UnifySameDomain unify = new(source, true);
        unify.Build();
        var body = Body.Create(Solid.Create(unify.Shape()));

        var unfold = UnfoldSheet.Create(body);
        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        AssertHelper.IsWatertight(unfold);
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "SliceSideFaces_NoFlange")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SliceSideFaces_Relief()
    {
        var source = TestData.GetTestDataBRep(Path.Combine(_BasePath, @"..\FlangeSheet\ReliefRectangular.brep"));
        Assert.That(source, Is.Not.Null);
        ShapeUpgrade_UnifySameDomain unify = new(source, true);
        unify.Build();
        var body = Body.Create(Solid.Create(unify.Shape()));

        var unfold = UnfoldSheet.Create(body);
        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        AssertHelper.IsWatertight(unfold);
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "SliceSideFaces_Relief")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase("Bracket")]
    [TestCase("Seam")]
    [TestCase("Breakthrough")]
    [TestCase("Crimp")]
    [TestCase("DoubleBendSection")]
    [TestCase("Slotted", Explicit = true)] // Not supported yet
    public void ImportedCases(string caseName)
    {
        var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, $"Imported{caseName}_Source.brep"));
        Assert.That(source, Is.Not.Null);

        var unfold = UnfoldSheet.Create(source);
        Assert.That(unfold, Is.Not.Null);

        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        AssertHelper.IsWatertight(unfold);
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, $"Imported{caseName}")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EllipticalSideEdge()
    {
        var body = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "EllipticalSideEdge_Source.brep"));
        Assert.That(body, Is.Not.Null);

        var unfold = UnfoldSheet.Create(body);
        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        AssertHelper.IsWatertight(unfold);
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "EllipticalSideEdge")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EllipticalNonplanarUnified()
    {
        var body = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "EllipticalNonplanarUnified_Source.brep"));
        Assert.That(body, Is.Not.Null);
        var solidShape = body.Shape;

        var unfold = UnfoldSheet.Create(body, solidShape.GetSubshapeReference(SubshapeType.Face, 21));
        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        AssertHelper.IsWatertight(unfold);
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "EllipticalNonplanarUnified1")));

        unfold.StartFace = solidShape.GetSubshapeReference(SubshapeType.Face, 15);
        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        AssertHelper.IsWatertight(unfold);
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "EllipticalNonplanarUnified2")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultipleSolids()
    {
        var body1 = TestData.GetBodyFromBRep(Path.Combine(_BasePath, @"..\FlangeSheet\Simple.brep"));
        var body2 = TestData.GetBodyFromBRep(Path.Combine(_BasePath, @"..\FlangeSheet\Simple.brep"));
        body2.Position = new(0, 30, 0);
        BooleanFuse.Create(body1, new BodyShapeOperand(body2));
        Assert.That(body1.Shape.GetBRep().Solids().Count, Is.EqualTo(2));

        var unfold = UnfoldSheet.Create(body1);
        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        AssertHelper.IsWatertight(unfold);
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "MultipleSolids1")));

        unfold.StartFace = (unfold.Predecessor as Shape).GetSubshapeReference(SubshapeType.Face, 14);
        Assert.That(unfold.Make(Shape.MakeFlags.DebugOutput));
        AssertHelper.IsWatertight(unfold);
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "MultipleSolids2")));
    }
}