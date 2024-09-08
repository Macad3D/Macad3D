using System.Collections.Generic;
using System.Linq;
using Macad.Test.Utils;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Infrastructure;

[TestFixture]
public class CloneTests
{
    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RecreateGuids()
    {
        var body1 = Body.Create(Box.Create(1, 1, 1));
        var serialized = Serializer.Serialize(body1, new SerializationContext());
        var context = new SerializationContext();
        context.SetInstance(ReadOptions.RecreateGuids);
        var body2 = Serializer.Deserialize<Entity>(serialized, context) as Body;

        Assert.IsNotNull(body2);
        Assert.AreNotEqual(body1.Guid, body2.Guid);
        Assert.AreNotEqual(body1.Shape.Guid, body2.Shape.Guid);
        Assert.AreNotEqual(body1.Shape.Guid, body2.RootShape.Guid);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase( false, false, TestName="DuplicateCloneReferencedBodies")]
    [TestCase( false, false, TestName="CopyPasteCloneReferencedBodies")]
    [TestCase( true, true, TestName="DuplicateReuseReferencedBodies")]
    [TestCase( true, true, TestName="CopyPasteReuseReferencedBodies")]
    public void CloneReferenceBodies(bool useCopyPaste, bool cloneReferenced)
    {
        var model = CoreContext.Current.Document;
        var operandBody1 = TestGeomGenerator.CreateBody(Box.Create(5, 5, 5), new Pnt());
        model.Add(operandBody1);
        var targetBody1 = TestGeomGenerator.CreateBody(Box.Create(5, 5, 5), new Pnt(2, 2, 0));
        model.Add(targetBody1);
        BooleanFuse.Create(targetBody1, new BodyShapeOperand(operandBody1));

        List<InteractiveEntity> clones;
        if (useCopyPaste)
        {
            InteractiveContext.Current.DocumentController.CopyToClipboard([targetBody1]);
            clones = InteractiveContext.Current.DocumentController.PasteFromClipboard(new CloneOptions(cloneReferenced)).ToList();
        }
        else
        {
            clones = InteractiveContext.Current.DocumentController.Duplicate([targetBody1], new CloneOptions(cloneReferenced)).ToList();
        }

        var targetBody2 = clones[0] as Body;
        Assert.That(targetBody2, Is.Not.Null);
        var operandBody2 = ((targetBody2.RootShape as ModifierBase)?.Operands[1] as BodyShapeOperand)?.Body;
        Assert.That(operandBody2, Is.Not.Null);
        Assert.That(ReferenceEquals(operandBody1, operandBody2), Is.Not.EqualTo(cloneReferenced));
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase( false, TestName="DuplicateMultipleReferenceBodies")]
    [TestCase( true, TestName="CopyPasteMultipleReferenceBodies")]
    public void CloneMultipleReferenceBodies(bool useCopyPaste)
    {        
        // Same as CloneReferenceBodies, but we have the referenced bodies also in the list
        var model = CoreContext.Current.Document;
        var operandBody1 = TestGeomGenerator.CreateBody(Box.Create(5, 5, 5), new Pnt());
        model.Add(operandBody1);
        var targetBody1 = TestGeomGenerator.CreateBody(Box.Create(5, 5, 5), new Pnt(2, 2, 0));
        model.Add(targetBody1);
        BooleanFuse.Create(targetBody1, new BodyShapeOperand(operandBody1));

        List<InteractiveEntity> clones;
        if (useCopyPaste)
        {
            InteractiveContext.Current.DocumentController.CopyToClipboard([targetBody1, operandBody1]);
            clones = InteractiveContext.Current.DocumentController.PasteFromClipboard(new CloneOptions(false)).ToList();
        }
        else
        {
            clones = InteractiveContext.Current.DocumentController.Duplicate([targetBody1, operandBody1], new CloneOptions(false)).ToList();
        }

        Assert.That(clones.Count, Is.EqualTo(2));
        Assert.That(clones, Is.All.Not.Null);
        var targetBody2 = clones[0] as Body;
        var operandBody2 = clones[1] as Body;
        Assert.That(((targetBody2.RootShape as ModifierBase)?.Operands[1] as BodyShapeOperand)?.Body, Is.EqualTo(operandBody2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CloneSubmeshReferences()
    {
        var imprint = TestGeomGenerator.CreateImprint();
        imprint.Depth = 2.5;
        imprint.Mode = Imprint.ImprintMode.Raise;
        var body = Body.Create(imprint);
        Assert.IsTrue(body.Shape.Make(Shape.MakeFlags.None));

        var serialized = Serializer.Serialize(body, new SerializationContext());

        var context = new SerializationContext(SerializationScope.CopyPaste);
        context.SetInstance(ReadOptions.RecreateGuids);
        context.SetInstance(new CloneOptions(true));
        var clonedBody = Serializer.Deserialize<Entity>(serialized, context) as Body;
        Assert.IsNotNull(clonedBody);
        Assert.IsTrue(clonedBody.Shape.Make(Shape.MakeFlags.None));

        context = new SerializationContext(SerializationScope.CopyPaste);
        context.SetInstance(ReadOptions.RecreateGuids);
        context.SetInstance(new CloneOptions(false));
        clonedBody = Serializer.Deserialize<Entity>(serialized, context) as Body;
        Assert.IsNotNull(clonedBody);
        Assert.IsTrue(clonedBody.Shape.Make(Shape.MakeFlags.None));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("When cloning with body refs, the copy has incorrect bodies set on sequently deserialized shapes.")]
    public void CloneCascadedBodyReferences()
    {
        var model = CoreContext.Current.Document;
        var operandBody1 = TestGeomGenerator.CreateBody(Box.Create(5, 5, 5), new Pnt());
        model.Add(operandBody1);
        var targetBody1 = TestGeomGenerator.CreateBody(Box.Create(5, 5, 5), new Pnt(2, 2, 0));
        model.Add(targetBody1);
        BooleanFuse.Create(targetBody1, new BodyShapeOperand(operandBody1));
        Imprint.Create(targetBody1, targetBody1.Shape.GetSubshapeReference(SubshapeType.Face, 0));
        var serialized = Serializer.Serialize(targetBody1, new SerializationContext());

        // Deserialize with cloning referenced bodies
        SerializationContext context = new(SerializationScope.CopyPaste);
        context.SetInstance(model);
        context.SetInstance<IDocument>(model);
        context.SetInstance(ReadOptions.RecreateGuids);
        context.SetInstance(new CloneOptions(true));
        var targetBody2 = Serializer.Deserialize<Entity>(serialized, context) as Body;
        Assert.IsNotNull(targetBody2);
        var imprint = targetBody2.Shape as Imprint;
        Assert.IsNotNull(imprint);
        Assert.AreEqual(targetBody2, imprint.Body);
        Assert.AreEqual(targetBody2, imprint.Sketch.Body);
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CopyPasteSameModel()
    {
        var context = InteractiveContext.Current;
        var body1 = Body.Create(Box.Create(1, 1, 1));
        context.Document.Add(body1);

        context.WorkspaceController.Selection.SelectEntity(body1);
        context.WorkspaceController.CopyToClipboard();
        Assert.That(context.Clipboard.ContainsData("Macad.ModelContent.1"));
        Assert.That(context.WorkspaceController.CanPasteFromClipboard());

        var newContent = context.WorkspaceController.PasteFromClipboard();
        Assert.IsNotNull(newContent);
        var body2 = newContent.FirstOrDefault() as Body;
        Assert.IsNotNull(body2);
        Assert.AreNotEqual(body1.Guid, body2.Guid);
        Assert.AreNotEqual(body1.Shape.Guid, body2.Shape.Guid);
        Assert.AreNotEqual(body1.Shape.Guid, body2.RootShape.Guid);
    }

    //--------------------------------------------------------------------------------------------------

}