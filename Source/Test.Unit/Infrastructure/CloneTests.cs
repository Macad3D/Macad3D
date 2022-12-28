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
        public void CloneReferenceBodies()
        {
            var model = CoreContext.Current.Document;
            var operandBody1 = TestGeomGenerator.CreateBody(Box.Create(5, 5, 5), new Pnt());
            model.Add(operandBody1);
            var targetBody1 = TestGeomGenerator.CreateBody(Box.Create(5, 5, 5), new Pnt(2, 2, 0));
            model.Add(targetBody1);
            BooleanFuse.Create(targetBody1, new BodyShapeOperand(operandBody1));
            var serialized = Serializer.Serialize(targetBody1, new SerializationContext());

            // Deserialize with reusing existing referenced bodies
            var context = new SerializationContext(SerializationScope.CopyPaste);
            context.SetInstance(model);
            context.SetInstance<IDocument>(model);
            context.SetInstance(ReadOptions.RecreateGuids);
            context.SetInstance(new CloneOptions(false));
            var targetBody2 = Serializer.Deserialize<Entity>(serialized, context) as Body;
            Assert.IsNotNull(targetBody2);
            var operandBody2 = ((targetBody2.RootShape as ModifierBase)?.Operands[1] as BodyShapeOperand)?.Body;
            Assert.IsNotNull(operandBody2);
            Assert.AreSame(operandBody1, operandBody2);

            // Deserialize with cloning referenced bodies
            context = new SerializationContext(SerializationScope.CopyPaste);
            context.SetInstance(model);
            context.SetInstance<IDocument>(model);
            context.SetInstance(ReadOptions.RecreateGuids);
            context.SetInstance(new CloneOptions(true));
            var targetBody3 = Serializer.Deserialize<Entity>(serialized, context) as Body;
            Assert.IsNotNull(targetBody3);
            var operandBody3 = ((targetBody3.RootShape as ModifierBase)?.Operands[1] as BodyShapeOperand)?.Body;
            Assert.IsNotNull(operandBody3);
            Assert.AreNotSame(operandBody1, operandBody3);
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
    }
}