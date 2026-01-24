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
        MemoryAssert.IsCollected(() =>
        {
            var body = TestGeomGenerator.CreateImprint().Body;
            var imprint = body.Shape as Imprint;
            var box = imprint.Predecessor;
            var sketch = imprint.Sketch;
            body.Remove();
            return [body, imprint, box, sketch];
        });
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void RemoveReferencedBody()
    {
        MemoryAssert.IsCollected(() =>
        {
            Context.InitWithDefault();
            var model = CoreContext.Current.Document;
            var boxBody = Body.Create(Box.Create(20, 20, 10));
            boxBody.Position = new Pnt(-10, -10, 0);
            model.Add(boxBody);

            var sphere = Sphere.Create(20);
            var sphereBody = Body.Create(sphere);
            sphereBody.Position = new Pnt(-15, 0, 0);
            model.Add(sphereBody);

            BooleanCut.Create(boxBody, new BodyShapeOperand(sphereBody));

            model.SafeDelete(new[] { sphereBody });

            return [sphereBody, sphere];
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializerCleanupAfterClone()
    {
        MemoryAssert.IsCollected(() =>
        {
            var imprint = TestGeomGenerator.CreateImprint();
            imprint.Depth = 2.5;
            imprint.Mode = Imprint.ImprintMode.Raise;
            var body = imprint.Body;
            Assume.That(body.Shape.Make(Shape.MakeFlags.None));

            var writer = new Writer();
            Assume.That(Serializer.Serialize(writer, body, new SerializationContext()));
            var serialized = writer.ToString(); 

            var context = new SerializationContext(SerializationScope.CopyPaste);
            context.SetInstance(ReadOptions.None);
            CloneOptions cloneOptions = new CloneOptions(true);
            context.SetInstance(cloneOptions);
            var reader = new Reader(serialized, ReadOptions.None);
            var clonedBody = Serializer.Deserialize<Entity>(reader, context) as Body;
            Assume.That(clonedBody, Is.Not.Null);
            Assume.That(clonedBody.Shape.Make(Shape.MakeFlags.None));

            return [context, cloneOptions, reader, writer];
        });
    }

    //--------------------------------------------------------------------------------------------------

}