using JetBrains.dotMemoryUnit;
using Macad.Test.Utils;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Memory.Core;

[TestFixture]
public class TopologyTests
{
    [Test]
    public void RemoveBody()
    {
        void __CreateAndRemoveBody()
        {
            var body = TestGeomGenerator.CreateImprint().Body;
            body.Remove();
        }

        __CreateAndRemoveBody();

        dotMemory.Check(memory =>
        {
            Assert.AreEqual(0, memory.ObjectsCount<Body>(), "Body is alive");
            Assert.AreEqual(0, memory.ObjectsCount<Imprint, Box, Sketch>(), "Shapes are alive");
        });
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void RemoveReferencedBody()
    {
        void __CreateTwoBodiesAndRemoveOne()
        {
            Context.InitWithDefault();
            var model = CoreContext.Current.Document;
            var boxBody = Body.Create(Box.Create(20, 20, 10));
            boxBody.Position = new Pnt(-10, -10, 0);
            model.Add(boxBody);

            var cylBody = Body.Create(Sphere.Create(20));
            cylBody.Position = new Pnt(-15, 0, 0);
            model.Add(cylBody);

            BooleanCut.Create(boxBody, new BodyShapeOperand(cylBody));

            model.SafeDelete(new[] {cylBody});
        }

        __CreateTwoBodiesAndRemoveOne();

        dotMemory.Check(memory =>
        {
            Assert.AreEqual(1, memory.ObjectsCount<Body>(), "Body is alive");
            Assert.AreEqual(1, memory.ObjectsCount<Solid>(), "Solid not found");
            Assert.AreEqual(0, memory.ObjectsCount<Sphere>(), "Sphere is alive");
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializerCleanupAfterClone()
    {
        void __Clone()
        {
            var imprint = TestGeomGenerator.CreateImprint();
            imprint.Depth = 2.5;
            imprint.Mode = Imprint.ImprintMode.Raise;
            var body = imprint.Body;
            Assert.IsTrue(body.Shape.Make(Shape.MakeFlags.None));

            var serialized = Serializer.Serialize(body, new SerializationContext());

            var context = new SerializationContext(SerializationScope.CopyPaste);
            context.SetInstance(ReadOptions.None);
            context.SetInstance(new CloneOptions(true));
            var clonedBody = Serializer.Deserialize<Entity>(serialized, context) as Body;
            Assert.IsNotNull(clonedBody);
            Assert.IsTrue(clonedBody.Shape.Make(Shape.MakeFlags.None));
        }

        __Clone();

        dotMemory.Check(memory =>
        {
            Assert.AreEqual(0, memory.ObjectsCount<SerializationContext>(), "Context is alive"); 
            Assert.AreEqual(0, memory.ObjectsCount<Writer>(), "Writer is alive"); 
            Assert.AreEqual(0, memory.ObjectsCount<Reader>(), "Reader is alive"); 
            Assert.AreEqual(0, memory.ObjectsCount<CloneOptions>(), "Body.CloneOptions is alive"); 
        });
    }

    //--------------------------------------------------------------------------------------------------

}