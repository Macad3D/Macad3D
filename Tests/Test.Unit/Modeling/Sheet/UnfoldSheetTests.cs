using System.IO;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using NUnit.Framework;

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
        Assert.That(ModelCompare.CompareShape(unfold, Path.Combine(_BasePath, "AbandonedFaces")));
    }

    //--------------------------------------------------------------------------------------------------

}