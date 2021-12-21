using System.Collections.Generic;
using System.IO;
using System.Linq;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Primitives
{
    [TestFixture]
    public class ReferenceTests
    {
        const string _BasePath = @"Modeling\Primitives\Reference";

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void BodyReferenceSimple()
        {
            var body1 = TestGeomGenerator.CreateBox().Body;
            var body2 = Reference.Create(body1);
            body2.Position = new Pnt(20, 0, 0);

            Assert.IsTrue(body2.Shape.Make(Shape.MakeFlags.None));
            Assert.IsTrue(body1.Shape.IsValid);
            AssertHelper.IsSameModel(body2.Shape, Path.Combine(_BasePath, "BodyReferenceSimple01"));

            (body1.Shape as Box).DimensionX /= 2;
            AssertHelper.IsSameModel(body2.Shape, Path.Combine(_BasePath, "BodyReferenceSimple02"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void BodyReferenceSubshapeForwarding()
        {
            var body1 = TestGeomGenerator.CreateBox().Body;
            body1.Position = new Pnt(10, 0, 0);
            var body2 = Reference.Create(body1);
            body2.Position = new Pnt(20, 0, 0);

            Assume.That(body2.Shape.Make(Shape.MakeFlags.None));

            var subshaperef = body2.Shape.GetSubshapeReference(SubshapeType.Edge, 1);
            Assert.AreEqual(body1.Shape.Guid, subshaperef.ShapeId);

            var subshape = body2.Shape.FindSubshape(subshaperef, body2.GetCoordinateSystem());
            Assert.AreEqual(1, subshape.Count);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void DeleteReferencedBody()
        {
            var model = new Model();
            var body1 = TestGeomGenerator.CreateBox().Body;
            model.Add(body1);
            var body2 = Reference.Create(body1);
            body2.Position = new Pnt(20, 0, 0);
            model.Add(body2);

            Assert.IsTrue(body2.Shape.Make(Shape.MakeFlags.None));
            Assert.IsInstanceOf<Reference>(body2.Shape);

            model.SafeDelete(new[] {body1});
            Assert.IsTrue(body2.Shape.Make(Shape.MakeFlags.None));
            Assert.IsInstanceOf<Solid>(body2.Shape);
            AssertHelper.IsSameModel(body2.Shape, Path.Combine(_BasePath, "DeleteReferencedBody01"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        [TestCase(true, TestName = "CloneReferencedBody")]
        [TestCase(false, TestName = "ReuseReferencedBody")]
        public void CloneMultipleReferences(bool cloneReferencedBody)
        {
            var ctx = Context.InitWithDefault();
            var body1 = TestGeomGenerator.CreateBox().Body;
            ctx.Document.Add(body1);
            var refs = new List<InteractiveEntity> { Reference.Create(body1), Reference.Create(body1) };
            refs.ForEach(r => ctx.Document.Add(r));
            Assume.That(ctx.DocumentController.CanDuplicate(refs));

            var clones = ctx.DocumentController.Duplicate(refs, new CloneOptions(cloneReferencedBody)).Cast<Body>().ToList();
            Assert.AreEqual(2, clones.Count());
            Assert.IsTrue(clones[0].Shape.IsValid);
            Assert.IsTrue(clones[1].Shape.IsValid);
        }
    }
}