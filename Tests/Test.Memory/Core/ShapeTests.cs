using JetBrains.dotMemoryUnit;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Memory.Core;

[TestFixture]
public class ShapeTests
{
    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BoxJointReference()
    {
        void __BuildAndRemove()
        {
            var model = CoreContext.Current.Document;
            var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 10), new Pnt(-5, -5, -5));
            model.Add(body1);
            var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(-5, -5, -5));
            model.Add(body2);

            var (first, second) = BoxJoint.Create(body1, body2);
            Assert.IsTrue(first.Make(Shape.MakeFlags.None));
            Assert.IsTrue(second.Make(Shape.MakeFlags.None));

            model.SafeDelete(new[] {body1, body2});
        }

        __BuildAndRemove();
            
        dotMemory.Check(memory =>
        {
            Assert.AreEqual(0, memory.ObjectsCount<Body>(), "a Body is alive");
            Assert.AreEqual(0, memory.ObjectsCount<BoxJoint>(), "a BoxJoint is alive");
        });
    }
}