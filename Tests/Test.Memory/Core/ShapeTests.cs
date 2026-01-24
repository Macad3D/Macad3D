using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
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
        MemoryAssert.IsCollected(() =>
        {
            var model = CoreContext.Current.Document;
            var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 10), new Pnt(-5, -5, -5));
            model.Add(body1);
            var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(-5, -5, -5));
            model.Add(body2);

            var (first, second) = BoxJoint.Create(body1, body2);
            Assume.That(first.Make(Shape.MakeFlags.None));
            Assume.That(second.Make(Shape.MakeFlags.None));

            model.SafeDelete([body1, body2]);
            return [body1, body2, first, second];
        });
    }
}