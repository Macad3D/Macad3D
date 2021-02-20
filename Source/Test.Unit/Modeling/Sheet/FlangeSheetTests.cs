using System.IO;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Sheet
{
    [TestFixture]
    public class FlangeSheetTests
    {
        const string _BasePath = @"Modeling\Sheet\FlangeSheet";

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void Simple()
        {
            var box = Box.Create(10.0, 10.0, 1.0);
            var body = Body.Create(box);
            var flangeSheet = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 45.0, 5.0);

            Assert.IsTrue(ModelCompare.CompareShape(flangeSheet, Path.Combine(_BasePath, "Simple")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void Reverse()
        {
            var box = Box.Create(10.0, 10.0, 1.0);
            var body = Body.Create(box);
            var flangeSheet = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 45.0, 5.0);
            flangeSheet.Reverse = true;

            Assert.IsTrue(ModelCompare.CompareShape(flangeSheet, Path.Combine(_BasePath, "Reverse")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void NoRadius()
        {
            var box = Box.Create(10.0, 10.0, 1.0);
            var body = Body.Create(box);
            var flangeSheet = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 45.0, 5.0, 0.0);

            Assert.IsTrue(ModelCompare.CompareShape(flangeSheet, Path.Combine(_BasePath, "NoRadius")));
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void Multiple()
        {
            var box = Box.Create(10.0, 10.0, 1.0);
            var body = Body.Create(box);
            var flangeSheet1 = FlangeSheet.Create(body, box.GetSubshapeReference(SubshapeType.Face, 1), 20.0, 5.0);
            var flangeSheet2 = FlangeSheet.Create(body, box.GetSubshapeReference(SubshapeType.Face, 3), 40.0, 5.0);
            var flangeSheet3 = FlangeSheet.Create(body, box.GetSubshapeReference(SubshapeType.Face, 0), 60.0, 5.0);
            var flangeSheet4 = FlangeSheet.Create(body, box.GetSubshapeReference(SubshapeType.Face, 2), 80.0, 5.0);
            var flangeSheet5 = FlangeSheet.Create(body, flangeSheet4.GetSubshapeReference(SubshapeType.Face, 7), 30.0, 5.0);

            Assert.IsTrue(ModelCompare.CompareShape(flangeSheet5, Path.Combine(_BasePath, "Multiple")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void NoLength()
        {
            var box = Box.Create(10.0, 10.0, 1.0);
            var body = Body.Create(box);
            var flangeSheet = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 45.0, 0);

            Assert.IsTrue(ModelCompare.CompareShape(flangeSheet, Path.Combine(_BasePath, "NoLength")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void NoBend()
        {
            var box = Box.Create(10.0, 10.0, 1.0);
            var body = Body.Create(box);
            var flangeSheet = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 0.0, 5);

            Assert.IsTrue(ModelCompare.CompareShape(flangeSheet, Path.Combine(_BasePath, "NoBend")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ReliefRectangular()
        {
            var box = Box.Create(10.0, 10.0, 1.0);
            var body = Body.Create(box);
            var flangeSheet = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 45.0, 5.0, 1.0);
            flangeSheet.Relief = FlangeSheet.ReliefFlags.Rectangular;

            Assert.IsTrue(ModelCompare.CompareShape(flangeSheet, Path.Combine(_BasePath, "ReliefRectangular")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ReliefRectangularReversed()
        {
            var box = Box.Create(10.0, 10.0, 1.0);
            var body = Body.Create(box);
            var flangeSheet = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 45.0, 5.0, 1.0);
            flangeSheet.Reverse = true;
            flangeSheet.Relief = FlangeSheet.ReliefFlags.Rectangular;

            Assert.IsTrue(ModelCompare.CompareShape(flangeSheet, Path.Combine(_BasePath, "ReliefRectangularReversed")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ReliefRectangularOutside()
        {
            var box = Box.Create(10.0, 10.0, 1.0);
            var body = Body.Create(box);
            var flangeSheet = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 45.0, 5.0, 1.0);
            flangeSheet.Relief = FlangeSheet.ReliefFlags.Rectangular | FlangeSheet.ReliefFlags.OppositeSide;

            Assert.IsTrue(ModelCompare.CompareShape(flangeSheet, Path.Combine(_BasePath, "ReliefRectangularOutside")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void GapStart()
        {
            var box = Box.Create(10.0, 10.0, 1.0);
            var body = Body.Create(box);
            var flangeSheet = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 45.0, 5.0);
            flangeSheet.StartGap = 2.5;

            Assert.IsTrue(ModelCompare.CompareShape(flangeSheet, Path.Combine(_BasePath, "GapStart")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void GapEnd()
        {
            var box = Box.Create(10.0, 10.0, 1.0);
            var body = Body.Create(box);
            var flangeSheet = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 45.0, 5.0);
            flangeSheet.EndGap = 2.5;

            Assert.IsTrue(ModelCompare.CompareShape(flangeSheet, Path.Combine(_BasePath, "GapEnd")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void GapStartEnd()
        {
            var box = Box.Create(10.0, 10.0, 1.0);
            var body = Body.Create(box);
            var flangeSheet = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 45.0, 5.0);
            flangeSheet.StartGap = 2.0;
            flangeSheet.EndGap = 5.0;

            Assert.IsTrue(ModelCompare.CompareShape(flangeSheet, Path.Combine(_BasePath, "GapStartEnd")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void GapToBig()
        {
            var box = Box.Create(10.0, 10.0, 1.0);
            var body = Body.Create(box);
            var flangeSheet = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 45.0, 5.0);
            flangeSheet.StartGap = 5.0;
            flangeSheet.EndGap = 5.0;

            Assert.IsFalse(flangeSheet.Make(Shape.MakeFlags.None));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void GapAndRelief()
        {
            var box = Box.Create(10.0, 10.0, 1.0);
            var body = Body.Create(box);
            var flangeSheet = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 45.0, 5.0);
            flangeSheet.StartGap = 2.0;
            flangeSheet.EndGap = 5.0;
            flangeSheet.Relief = FlangeSheet.ReliefFlags.Rectangular;

            Assert.IsTrue(ModelCompare.CompareShape(flangeSheet, Path.Combine(_BasePath, "GapAndRelief")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SwappedEdgeDirection()
        {
            var box = Box.Create(10.0, 10.0, 1.0);
            var body = Body.Create(box);
            var flangeSheet = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 2), 45.0, 5.0);
            flangeSheet.StartGap = 2.0;
            flangeSheet.EndGap = 5.0;
            flangeSheet.Relief = FlangeSheet.ReliefFlags.Rectangular;

            Assert.IsTrue(ModelCompare.CompareShape(flangeSheet, Path.Combine(_BasePath, "SwappedEdgeDirection")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void TwoFlangesOnSameFace()
        {
            var box = Box.Create(10.0, 10.0, 1.0);
            var body = Body.Create(box);
            var flangeSheet1 = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 45.0, 5.0);
            flangeSheet1.StartGap = 7.5;
            flangeSheet1.EndGap = 0.5;
            flangeSheet1.Relief = FlangeSheet.ReliefFlags.Rectangular;
            var flangeSheet2= FlangeSheet.Create(body, flangeSheet1.GetSubshapeReference(SubshapeType.Face, 7), 45.0, 5.0);
            flangeSheet2.StartGap = 5.0;
            flangeSheet2.EndGap = 0.5;
            flangeSheet2.Relief = FlangeSheet.ReliefFlags.Rectangular | FlangeSheet.ReliefFlags.OppositeSide;
            var flangeSheet3 = FlangeSheet.Create(body, flangeSheet2.GetSubshapeReference(SubshapeType.Face, 6), 45.0, 5.0);
            flangeSheet3.StartGap = 1.0;
            flangeSheet3.EndGap = 1.0;

            Assert.That(ModelCompare.CompareShape(flangeSheet3, Path.Combine(_BasePath, "TwoFlangesOnSameFace")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SecondFlangeOnFlangeSide()
        {
            var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "SecondFlangeOnFlangeSide_Source.brep"));
            Assume.That(source, Is.Not.Null);

            var flangeSheet = FlangeSheet.Create(source, new SubshapeReference(SubshapeType.Face, source.Shape.Guid, 2), 45.0, 5.0);

            Assert.IsTrue(ModelCompare.CompareShape(flangeSheet, Path.Combine(_BasePath, "SecondFlangeOnFlangeSide")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void GapFacesNamedSubshapes()
        {
            var box = Box.Create(10.0, 10.0, 1.0);
            var body = Body.Create(box);
            var flangeSheet = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 45.0, 5.0);
            flangeSheet.StartGap = 2.0;
            flangeSheet.EndGap = 5.0;
            Assume.That(flangeSheet.Make(Shape.MakeFlags.None));

            Assert.Multiple(() =>
            {
                var faceRef = flangeSheet.GetSubshapeReference(SubshapeType.Face, 7);
                Assert.That(faceRef, Is.EqualTo(new SubshapeReference(SubshapeType.Face, flangeSheet.Guid, "StartGap", 0)), "Test 1");
                faceRef = flangeSheet.GetSubshapeReference(SubshapeType.Face, 5);
                Assert.That(faceRef, Is.EqualTo(new SubshapeReference(SubshapeType.Face, flangeSheet.Guid, "EndGap", 0)), "Test 2");

                // Reversed
                flangeSheet.Reverse = true;
                Assert.That(flangeSheet.Make(Shape.MakeFlags.None));
                faceRef = flangeSheet.GetSubshapeReference(SubshapeType.Face, 5);
                Assert.That(faceRef, Is.EqualTo(new SubshapeReference(SubshapeType.Face, flangeSheet.Guid, "StartGap", 0)), "Test 3");
                faceRef = flangeSheet.GetSubshapeReference(SubshapeType.Face, 7);
                Assert.That(faceRef, Is.EqualTo(new SubshapeReference(SubshapeType.Face, flangeSheet.Guid, "EndGap", 0)), "Test 4");

                // With relief
                flangeSheet.Relief = FlangeSheet.ReliefFlags.Rectangular;
                Assert.That(flangeSheet.Make(Shape.MakeFlags.None));
                faceRef = flangeSheet.GetSubshapeReference(SubshapeType.Face, 5);
                Assert.That(faceRef, Is.EqualTo(new SubshapeReference(SubshapeType.Face, flangeSheet.Guid, "StartGap", 0)), "Test 5");
                faceRef = flangeSheet.GetSubshapeReference(SubshapeType.Face, 7);
                Assert.That(faceRef, Is.EqualTo(new SubshapeReference(SubshapeType.Face, flangeSheet.Guid, "EndGap", 0)), "Test 6");

                // Start only
                flangeSheet.EndGap = 0;
                Assert.That(flangeSheet.Make(Shape.MakeFlags.None));
                faceRef = flangeSheet.GetSubshapeReference(SubshapeType.Face, 5);
                Assert.That(faceRef, Is.EqualTo(new SubshapeReference(SubshapeType.Face, flangeSheet.Guid, "StartGap", 0)), "Test 7");
                Assert.That(flangeSheet.FindSubshape(faceRef, null), Is.EqualTo(flangeSheet.FindSubshape(new SubshapeReference(SubshapeType.Face, flangeSheet.Guid, "EndGap", 0), null)), "Test 8");

                // No gap
                flangeSheet.StartGap = 0;
                Assert.That(flangeSheet.Make(Shape.MakeFlags.None));
                Assert.That(flangeSheet.FindSubshape(new SubshapeReference(SubshapeType.Face, flangeSheet.Guid, "StartGap", 0), null), Is.Null, "Test 9");
                Assert.That(flangeSheet.FindSubshape(new SubshapeReference(SubshapeType.Face, flangeSheet.Guid, "EndGap", 0), null), Is.Null, "Test 10");

                // End only
                flangeSheet.EndGap = 5.0;
                Assert.That(flangeSheet.Make(Shape.MakeFlags.None));
                faceRef = flangeSheet.GetSubshapeReference(SubshapeType.Face, 8);
                Assert.That(faceRef, Is.EqualTo(new SubshapeReference(SubshapeType.Face, flangeSheet.Guid, "EndGap", 0)), "Test 11");
                Assert.That(flangeSheet.FindSubshape(faceRef, null), Is.EqualTo(flangeSheet.FindSubshape(new SubshapeReference(SubshapeType.Face, flangeSheet.Guid, "StartGap", 0), null)), "Test 12");

                // Skipped
                flangeSheet.IsSkipped = true;
                Assert.That(flangeSheet.FindSubshape(new SubshapeReference(SubshapeType.Face, flangeSheet.Guid, "StartGap", 0), null), Is.Not.Null, "Test 13");
                Assert.That(flangeSheet.FindSubshape(new SubshapeReference(SubshapeType.Face, flangeSheet.Guid, "EndGap", 0), null), Is.Not.Null, "Test 14");
            });
        }


        //--------------------------------------------------------------------------------------------------

        [Test]
        [Explicit("ToDo")]
        public void FlangesOnSameFaceWithNoGaps()
        {
            /* The Flange modifier shouldn't allow this:
             * 1. The Unfold modifier will proberly have problems to find bend section, since faces are shared between bend sections.
             * 2. It cannot be produces, to have seperate flanges there must be a minimum gap between them (by cutting, edging, etc)
             */
            var box = Box.Create(10.0, 10.0, 1.0);
            var body = Body.Create(box);
            var flangeSheet1 = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 45.0, 5.0);
            flangeSheet1.StartGap = 7.5;
            flangeSheet1.EndGap = 0.0;
            flangeSheet1.Relief = FlangeSheet.ReliefFlags.Rectangular;
            var flangeSheet2 = FlangeSheet.Create(body, flangeSheet1.GetSubshapeReference(SubshapeType.Face, 7), 45.0, 5.0);
            flangeSheet2.StartGap = 5.0;
            flangeSheet2.EndGap = 0.0;
            flangeSheet2.Relief = FlangeSheet.ReliefFlags.Rectangular | FlangeSheet.ReliefFlags.OppositeSide;
            var flangeSheet3 = FlangeSheet.Create(body, flangeSheet2.GetSubshapeReference(SubshapeType.Face, 12), 45.0, 5.0);
            flangeSheet3.StartGap = 0.0;
            flangeSheet3.EndGap = 0.0;
            Assume.That(flangeSheet3.Make(Shape.MakeFlags.None));

            Assert.That(flangeSheet3.Make(Shape.MakeFlags.DebugOutput));
            Assert.That(ModelCompare.CompareShape(flangeSheet3, Path.Combine(_BasePath, "FlangesOnSameFaceWithNoGaps")));
        }

        //--------------------------------------------------------------------------------------------------

    }
}