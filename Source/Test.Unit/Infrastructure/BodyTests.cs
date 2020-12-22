using System;
using System.IO;
using Macad.Test.Utils;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Infrastructure
{
    [TestFixture]
    public class BodyTests
    {
        const string _BasePath = @"Infrastructure\Body";

        //--------------------------------------------------------------------------------------------------

        [SetUp]
        public void SetUp()
        {
            Context.InitWithDefault();
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void InvalidationAcrossBodyOperand()
        {
            var box1 = TestGeomGenerator.CreateBox();
            var body1 = box1.Body;
            body1.Translate(new Vec(-2.5, -2.5, 0));

            var box2 = TestGeomGenerator.CreateBox();
            var body2 = box2.Body;
            body2.Translate(new Vec(2.5, 2.5, 0));
            BooleanFuse.Create(body2, new BodyShapeOperand(body1));

            AssertHelper.IsSameModel(body2.Shape, Path.Combine(_BasePath, "InvalidationAcrossBodyOperand1"));

            // Change the first, the second should get invalid, too
            box1.DimensionZ = 5;
            AssertHelper.IsSameModel(body2.Shape, Path.Combine(_BasePath, "InvalidationAcrossBodyOperand2"));

            // Move body
            body1.Position = body1.Position.Translated(new Vec(0, 0, 2.5));
            AssertHelper.IsSameModel(body2.Shape, Path.Combine(_BasePath, "InvalidationAcrossBodyOperand3"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void AddShapeOnTop()
        {
            var imprint = TestGeomGenerator.CreateImprint();
            var body = imprint.Body;
            BooleanFuse.Create(body, Box.Create(1, 1, 10));

            // Current and root shape is boolean fuse
            Assert.That(body.Shape, Is.TypeOf<BooleanFuse>());
            Assert.That(body.RootShape, Is.TypeOf<BooleanFuse>());

            // Check result shape
            AssertHelper.IsSameModel(body.Shape, Path.Combine(_BasePath, "AddShapeOnTop"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SetCurrentShape()
        {
            var imprint = TestGeomGenerator.CreateImprint();
            var body = imprint.Body;
            BooleanFuse.Create(body, Box.Create(1, 1, 10));

            // Current and root shape is boolean fuse
            Assert.That(body.Shape, Is.TypeOf<BooleanFuse>());
            Assert.That(body.RootShape, Is.TypeOf<BooleanFuse>());

            // Switch current
            body.Shape = imprint;
            Assert.That(body.Shape, Is.TypeOf<Imprint>());
            Assert.That(body.RootShape, Is.TypeOf<BooleanFuse>());

            // Check result shape
            AssertHelper.IsSameModel(body.Shape, Path.Combine(_BasePath, "SetCurrentShape"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void InsertShapeInTheMiddle()
        {
            var imprint = TestGeomGenerator.CreateImprint();
            var body = imprint.Body;
            BooleanFuse.Create(body, Box.Create(1, 1, 10));

            // Current and root shape is boolean fuse
            Assert.That(body.Shape, Is.TypeOf<BooleanFuse>());
            Assert.That(body.RootShape, Is.TypeOf<BooleanFuse>());

            // Set current and add new shape
            body.Shape = imprint;
            Assert.That(body.Shape, Is.TypeOf<Imprint>());
            BooleanCut.Create(body, Box.Create(2, 2, 5));
            Assert.That(body.Shape, Is.TypeOf<BooleanCut>());

            // Check result shape
            AssertHelper.IsSameModel(body.Shape, Path.Combine(_BasePath, "InsertShapeInTheMiddle1"));
            AssertHelper.IsSameModel(body.RootShape, Path.Combine(_BasePath, "InsertShapeInTheMiddle2"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void RemoveShapeFromTop()
        {
            var imprint = TestGeomGenerator.CreateImprint();
            var body = imprint.Body;
            BooleanFuse.Create(body, Box.Create(1, 1, 10));

            // Current and root shape is boolean fuse
            Assert.That(body.Shape, Is.TypeOf<BooleanFuse>());
            Assert.That(body.RootShape, Is.TypeOf<BooleanFuse>());

            // Remove
            body.RemoveShape(body.Shape);
            Assert.That(body.Shape, Is.TypeOf<Imprint>());
            Assert.That(body.RootShape, Is.TypeOf<Imprint>());

            // Check result shape
            AssertHelper.IsSameModel(body.Shape, Path.Combine(_BasePath, "RemoveShapeFromTop"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void RemoveShapeFromTheMiddle()
        {
            var imprint = TestGeomGenerator.CreateImprint();
            var body = imprint.Body;
            BooleanFuse.Create(body, Box.Create(1, 1, 10));

            // Current and root shape is boolean fuse
            Assert.That(body.Shape, Is.TypeOf<BooleanFuse>());
            Assert.That(body.RootShape, Is.TypeOf<BooleanFuse>());

            // Remove
            body.RemoveShape(imprint);
            Assert.That(body.Shape, Is.TypeOf<BooleanFuse>());
            Assert.That(body.RootShape, Is.TypeOf<BooleanFuse>());

            // Check result shape
            AssertHelper.IsSameModel(body.Shape, Path.Combine(_BasePath, "RemoveShapeFromTheMiddle"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void DeleteBody()
        {
            var model = CoreContext.Current.Document;
            var body = TestGeomGenerator.CreateImprint().Body;
            model.AddChild(body);
            Assume.That(CoreContext.Current.Document.ChildCount, Is.EqualTo(1));
            Assume.That(CoreContext.Current.Document.Instances.Count, Is.EqualTo(6));

            model.SafeDelete(new[] {body});
            Assert.That(CoreContext.Current.Document.ChildCount, Is.EqualTo(0));
            Assume.That(CoreContext.Current.Document.Instances.Count, Is.EqualTo(2));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void DeleteBodyUndo()
        {
            var model = CoreContext.Current.Document;
            var body = TestGeomGenerator.CreateImprint().Body;
            model.AddChild(body);
            model.UndoHandler.Commit();
            Assume.That(CoreContext.Current.Document.ChildCount, Is.EqualTo(1));

            model.SafeDelete(new[] {body});
            model.UndoHandler.Commit();
            Assert.That(CoreContext.Current.Document.ChildCount, Is.EqualTo(0));

            Assert.That(CoreContext.Current.UndoHandler.UndoStack.Count, Is.EqualTo(2));
            CoreContext.Current.UndoHandler.DoUndo(1);
            Assert.That(CoreContext.Current.Document.ChildCount, Is.EqualTo(1));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void DeleteReferencedBody()
        {
            var model = CoreContext.Current.Document;
            var boxBody = Body.Create(new Box()
            {
                DimensionX = 20,
                DimensionY = 20,
                DimensionZ = 10,
            });
            boxBody.Position = new Pnt(-10, -10, 0);
            model.AddChild(boxBody);

            var cylBody = Body.Create(new Sphere()
            {
                Radius = 15
            });
            cylBody.Position = new Pnt(-10, -10, 0);
            model.AddChild(cylBody);

            Assume.That(CoreContext.Current.Document.ChildCount, Is.EqualTo(2));

            var boolOp = BooleanCut.Create(boxBody, new BodyShapeOperand(cylBody));
            model.UndoHandler.Commit();
            Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(boxBody.Shape, Path.Combine(_BasePath, "DeleteReferencedBody")));

            model.SafeDelete(new[] {cylBody});
            model.UndoHandler.Commit();
            Assert.AreEqual(1, CoreContext.Current.Document.ChildCount);
            Assert.IsFalse(boxBody.Shape.IsValid);
            Assert.That((boxBody.Shape as ModifierBase)?.Operands[1] is Solid);
            Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(boxBody.Shape, Path.Combine(_BasePath, "DeleteReferencedBody")));

            // Check Undo
            CoreContext.Current.UndoHandler.DoUndo(1);
            Assert.AreEqual(2, CoreContext.Current.Document.ChildCount);
            Assert.That((boxBody.Shape as ModifierBase)?.Operands[1] is BodyShapeOperand);
            Assert.IsTrue(ModelCompare.CompareShape(boxBody.Shape, Path.Combine(_BasePath, "DeleteReferencedBody")));
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void UndoDeletionOfReferencingBody()
        {
            var model = CoreContext.Current.Document;
            var body1 = TestGeomGenerator.CreateBody(Box.Create(5, 5, 5), new Pnt());
            model.AddChild(body1);
            var body2 = TestGeomGenerator.CreateBody(Box.Create(5, 5, 5), new Pnt(2, 2, 0));
            model.AddChild(body2);
            BooleanFuse.Create(body2, new BodyShapeOperand(body1));
            model.UndoHandler.Commit();
            Assume.That(model.ChildCount, Is.EqualTo(2));

            model.SafeDelete(new []{body2});
            model.UndoHandler.Commit();
            Assume.That(model.ChildCount, Is.EqualTo(1));

            // Undo should link to the SAME body as before
            CoreContext.Current.UndoHandler.DoUndo(1);
            Assert.AreEqual(2, model.ChildCount);
            var newBody2 = model.GetChild(1);
            Assert.AreSame(body1, ((newBody2.RootShape as ModifierBase)?.Operands[1] as BodyShapeOperand)?.Body);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void BodyNaming()
        {
            var body = Body.Create(new Box());
            Assert.That(body.Name, Is.EqualTo("Box_1"));
            body = Body.Create(new Box());
            Assert.That(body.Name, Is.EqualTo("Box_2"));
            body = Body.Create(new Cylinder());
            Assert.That(body.Name, Is.EqualTo("Cylinder_1"));

            // Serialization
            var serializedModel = Serializer.Serialize(Context.Current.Document, new SerializationContext());
            body = Body.Create(new Box());
            Assert.That(body.Name, Is.EqualTo("Box_3"));
            body = null;
            Context.Current.Document = Serializer.Deserialize<Model>(serializedModel, new SerializationContext());
            body = Body.Create(new Box());
            Assert.That(body.Name, Is.EqualTo("Box_3"));
        }
        
        //--------------------------------------------------------------------------------------------------
        

    }
}