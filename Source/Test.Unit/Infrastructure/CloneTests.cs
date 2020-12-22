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
            model.AddChild(operandBody1);
            var targetBody1 = TestGeomGenerator.CreateBody(Box.Create(5, 5, 5), new Pnt(2, 2, 0));
            model.AddChild(targetBody1);
            BooleanFuse.Create(targetBody1, new BodyShapeOperand(operandBody1));
            var serialized = Serializer.Serialize(targetBody1, new SerializationContext());

            // Deserialize with reusing existing referenced bodies
            var context = new SerializationContext(SerializationScope.CopyPaste);
            context.SetInstance(model);
            context.SetInstance(ReadOptions.RecreateGuids);
            context.SetInstance(new Body.CloneOptions(false));
            var targetBody2 = Serializer.Deserialize<Entity>(serialized, context) as Body;
            Assert.IsNotNull(targetBody2);
            var operandBody2 = ((targetBody2.RootShape as ModifierBase)?.Operands[1] as BodyShapeOperand)?.Body;
            Assert.IsNotNull(operandBody2);
            Assert.AreSame(operandBody1, operandBody2);

            // Deserialize with cloning referenced bodies
            context = new SerializationContext(SerializationScope.CopyPaste);
            context.SetInstance(model);
            context.SetInstance(ReadOptions.RecreateGuids);
            context.SetInstance(new Body.CloneOptions(true));
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
            context.SetInstance(new Body.CloneOptions(true));
            var clonedBody = Serializer.Deserialize<Entity>(serialized, context) as Body;
            Assert.IsNotNull(clonedBody);
            Assert.IsTrue(clonedBody.Shape.Make(Shape.MakeFlags.None));

            context = new SerializationContext(SerializationScope.CopyPaste);
            context.SetInstance(ReadOptions.RecreateGuids);
            context.SetInstance(new Body.CloneOptions(false));
            clonedBody = Serializer.Deserialize<Entity>(serialized, context) as Body;
            Assert.IsNotNull(clonedBody);
            Assert.IsTrue(clonedBody.Shape.Make(Shape.MakeFlags.None));
        }

        //--------------------------------------------------------------------------------------------------

    }
}