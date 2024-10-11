using System.IO;
using Macad.Test.Utils;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using NUnit.Framework;
using Macad.Interaction;
using System.Linq;

namespace Macad.Test.Unit.Modeling.Assemble;

[TestFixture]
public class BoxJointTests
{
    const string _BasePath = @"Modeling\Assemble\BoxJoint";

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SimpleEdge()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 10), new Pnt(-5, -5, -5));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(-5, -5, -5));

        var (first, second) = BoxJoint.Create(body1, body2);
        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "SimpleEdge1"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, "SimpleEdge2"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SimpleMiddle()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 10), new Pnt(-5, -5, -5));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(0, -5, -5));

        var (first, second) = BoxJoint.Create(body1, body2);

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "SimpleMiddle1"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, "SimpleMiddle2"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void HalfIntrusion()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 10), new Pnt(-5, -5, -5));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(0, -4, -5));

        var (first, second) = BoxJoint.Create(body1, body2);

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "HalfIntrusion1"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, "HalfIntrusion2"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DifferentHeights()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 10), new Pnt(-5, -5, -5));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(-5, -5, 0));

        var (first, second) = BoxJoint.Create(body1, body2);
        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "DifferentHeights1"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, "DifferentHeights2"));
    }

    //--------------------------------------------------------------------------------------------------
                 
    [Test]
    public void MultipleSolids()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 10), new Pnt(-5, -5, -5));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(0, -5, -5));
        var carveBody = TestGeomGenerator.CreateBody(Box.Create(2, 5, 4), new Pnt(0, -5, -2));
        BooleanCut.Create(body2, new BodyShapeOperand(carveBody));

        var (first, second) = BoxJoint.Create(body1, body2);

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "MultipleSolids1"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, "MultipleSolids2"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void RemoveExcess()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 10), new Pnt(-5, -5, -5));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(0, -6, -5));

        var (first, second) = BoxJoint.Create(body1, body2);
        second.RemoveExcess = true;

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "RemoveExcess1"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, "RemoveExcess2"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RemoveMultipleExcess()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 10), new Pnt(-5, -5, -5));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(0, -6, -5));
        var carveBody = TestGeomGenerator.CreateBody(Box.Create(2, 5, 4), new Pnt(0, -6, -2));
        BooleanCut.Create(body2, new BodyShapeOperand(carveBody));

        var (first, second) = BoxJoint.Create(body1, body2);
        second.RemoveExcess = true;

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "RemoveMultipleExcess1"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, "RemoveMultipleExcess2"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Cascaded()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 10), new Pnt(-5, -5, -5));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(-5, -5, -5));
        var body3 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(0, -5, -5));

        var (_, second) = BoxJoint.Create(body1, body2);
        var (first, third) = BoxJoint.Create(body1, body3);

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "Cascaded1"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, "Cascaded2"));

        Assert.IsTrue(third.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(third, Path.Combine(_BasePath, "Cascaded3"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void VaryBoxCount()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 10), new Pnt(-5, -5, -5));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(-5, -5, -5));

        var (first, second) = BoxJoint.Create(body1, body2);
        first.BoxCount = 4;

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "VaryBoxCount1"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, "VaryBoxCount2"));

        second.BoxCount = 5;

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "VaryBoxCount3"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void VaryOrder()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 10), new Pnt(-5, -5, -5));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(-5, -5, -5));

        var (first, second) = BoxJoint.Create(body1, body2);
        first.ReverseOrder = true;

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "VaryOrder1"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, "VaryOrder2"));

        second.ReverseOrder = false;

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "VaryOrder3"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void DeleteBoth()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 10), new Pnt(-5, -5, -5));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(-5, -5, -5));

        var (first, second) = BoxJoint.Create(body1, body2);

        body1.RemoveShape(first);

        Assert.IsTrue(body1.Shape.Make(Shape.MakeFlags.None));
        Assert.AreEqual(6, body1.Shape.GetBRep().Faces().Count);

        Assert.IsTrue(body2.Shape.Make(Shape.MakeFlags.None));
        Assert.IsNull(second.Body, "The associated shape is still connected to it's body.");
        Assert.AreEqual(6, body2.Shape.GetBRep().Faces().Count, "The associated shape was not deleted.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DeleteOneBody()
    {
        var model = CoreContext.Current.Document;
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 10), new Pnt(-5, -5, -5));
        model.Add(body1);
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(-5, -5, -5));
        model.Add(body2);

        var (first, second) = BoxJoint.Create(body1, body2);
        model.UndoHandler.Commit();

        model.SafeDelete(new[] {body1});
        model.UndoHandler.Commit();

        Assert.IsNull(body1.Shape);

        Assert.IsTrue(body2.Shape.Make(Shape.MakeFlags.None));
        Assert.IsNull(second.Body, "The associated shape is still connected to it's body.");
        Assert.AreEqual(6, body2.Shape.GetBRep().Faces().Count, "The associated shape was not deleted.");

        Assert.IsNull(first.Body, "The reference to the first shape still exists.");

        // Check undo
        Assert.IsTrue(model.UndoHandler.CanUndo);
        model.UndoHandler.DoUndo(1);

        Assert.IsInstanceOf<BoxJoint>(body2.Shape);
        Assert.IsTrue(body2.Shape.Make(Shape.MakeFlags.None));
        Assert.Less(6, body2.Shape.GetBRep().Faces().Count );

        body1 = model.FindInstance(body1.Guid) as Body;
        Assert.IsNotNull(body1);
        Assert.IsInstanceOf<BoxJoint>(body1.Shape);
        Assert.IsTrue(body1.Shape.Make(Shape.MakeFlags.None));
        Assert.Less(6, body1.Shape.GetBRep().Faces().Count );
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SameBeginning()
    {
        var body1 = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "Source1.brep"));
        var body2 = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "Source2.brep"));

        var (first, second) = BoxJoint.Create(body1, body2);
        first.ReverseOrder = false;
        first.BoxCount = 4; // Only visible if boxcount is even
        first.RemoveExcess = true;
        second.RemoveExcess = true;
        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        Assert.IsTrue(second.Make(Shape.MakeFlags.None));

        var compound = new TopoDS_Compound();
        var builder = new BRep_Builder();
        builder.MakeCompound(compound);
        builder.Add(compound, body1.GetTransformedBRep());
        builder.Add(compound, body2.GetTransformedBRep());
        AssertHelper.IsSameModel(compound, Path.Combine(_BasePath, "SameBeginning"));

        first.ReverseOrder = true;
        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        Assert.IsTrue(second.Make(Shape.MakeFlags.None));

        compound = new TopoDS_Compound();
        builder.MakeCompound(compound);
        builder.Add(compound, body1.GetTransformedBRep());
        builder.Add(compound, body2.GetTransformedBRep());
        AssertHelper.IsSameModel(compound, Path.Combine(_BasePath, "SameBeginning2"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void Ratio()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 10), new Pnt(-5, -5, -5));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(-5, -5, -5));

        var (first, second) = BoxJoint.Create(body1, body2);
        first.Ratio = 0.25;

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "Ratio01"));
        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, "Ratio02"));

        second.ReverseOrder = true;
        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "Ratio11"));
        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, "Ratio12"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CustomBoxRatios()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 10), new Pnt(-5, -5, -5));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(-5, -5, -5));

        var (first, second) = BoxJoint.Create(body1, body2);

        first.BoxCount = 5;
        first.CustomBoxRatios = new[] {0.1, 0.2, 0.3, 0.4, 0.5};

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "CustomBoxRatios01a"));
        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, "CustomBoxRatios01b"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CustomBoxRatiosOrder()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 10), new Pnt(-5, -5, -5));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(-5, -5, -5));

        var (first, second) = BoxJoint.Create(body1, body2);

        first.BoxCount = 5;
        first.CustomBoxRatios = new[] {0.1, 0.2, 0.3, 0.4, 0.5};
        first.ReverseOrder = true;

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "CustomBoxRatiosOrder01a"));
        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, "CustomBoxRatiosOrder01b"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void CustomBoxRatiosLessEntries()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 10), new Pnt(-5, -5, -5));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(-5, -5, -5));

        var (first, second) = BoxJoint.Create(body1, body2);

        first.BoxCount = 5;
        first.CustomBoxRatios = new[] {0.1, 0.2, 0.3, 0.4};

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "CustomBoxRatiosLessEntries01"));
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void Clone()
    {
        var model = CoreContext.Current.Document;
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 10), new Pnt(-5, -5, -5));
        model.Add(body1);
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(-5, -5, -5));
        model.Add(body2);
        BoxJoint.Create(body1, body2);
        var clones = InteractiveContext.Current.DocumentController.Duplicate([body2], new CloneOptions(cloneReferencedBodies: false)).ToList();

        var third = (clones[0] as Body)?.Shape as BoxJoint;
        Assert.That(third != null);
        third.Body.Position = new Pnt(0, -5, -5);

        Assert.AreEqual(body1, (third.Operands[1] as BodyShapeOperand)?.Body);
        Assert.AreEqual(third.Body, ((body1.Shape as ModifierBase)?.Operands[1] as BodyShapeOperand)?.Body);

        Assert.IsTrue(body1.Shape.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(body1.Shape, Path.Combine(_BasePath, "Clone1"));

        Assert.IsTrue(third.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(third, Path.Combine(_BasePath, "Clone3"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void CloneBothBodies()
    {        
        var model = CoreContext.Current.Document;
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 10), new Pnt(-5, -5, -5));
        model.Add(body1);
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(-5, -5, -5));
        model.Add(body2);
        BoxJoint.Create(body1, body2);
        var clones = InteractiveContext.Current.DocumentController.Duplicate([body1, body2]).ToList();

        Assert.That(clones.Count, Is.EqualTo(2));
        Assert.That(clones, Is.All.Not.Null);
        var clone1 = clones[0] as Body;
        var clone2 = clones[1] as Body;
        Assert.That((clone1.RootShape as BoxJoint).AssociatedShape.Body, Is.EqualTo(clone2));
        Assert.That((clone2.RootShape as BoxJoint).AssociatedShape.Body, Is.EqualTo(clone1));
        Assert.That((clone1.RootShape as BoxJoint).Operands[0], Is.Not.TypeOf<BoxJoint>());
        Assert.That((clone2.RootShape as BoxJoint).Operands[0], Is.Not.TypeOf<BoxJoint>());
        Assert.That(body1.Shape.Make(Shape.MakeFlags.None));
    }
        
    //--------------------------------------------------------------------------------------------------
    
}