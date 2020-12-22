using System;
using System.Globalization;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper
{
    [TestFixture]
    public class ValueTypes2D
    {
        [Test]
        public void ValueType_XY()
        {
            var p1 = new XY(1, 2);
            var p2 = new XY(4, 5);

            Assert.AreEqual(5, p1.SquareModulus());
            Assert.AreEqual(Math.Sqrt(5), p1.Modulus());

            Assert.IsTrue(p1.IsEqual(p2, 3));
            Assert.IsFalse(p1.IsEqual(p2, 2.99));

            p2 = p1;
            p2.Add(new XY(1, 2));
            Assert.AreEqual(new XY(2, 4), p2);
            Assert.AreEqual(new XY(2, 4), p1.Added(new XY(1, 2)));
            p2 += new XY(1, 2);
            Assert.AreEqual(new XY(3, 6), p2);

            Assert.AreEqual(-4, p1.Crossed(new XY(3, 2)));

            Assert.AreEqual(Math.Sqrt(16), p1.CrossMagnitude(new XY(3, 2)));
            Assert.AreEqual(16, p1.CrossSquareMagnitude(new XY(3, 2)));

            p2 = new XY(1, 2);
            p2.Divide(2);
            Assert.AreEqual(new XY(0.5, 1), p2);
            Assert.AreEqual(new XY(0.5, 1), p1.Divided(2));

            Assert.AreEqual(5, p1.Dot(new XY(1, 2)));

            p2 = new XY(1, 2);
            p2.Multiply(2);
            Assert.AreEqual(new XY(2, 4), p2);
            Assert.AreEqual(new XY(2, 4), p1.Multiplied(2));
            Assert.AreEqual(new XY(2, 4), p1 * 2);

            p2 = new XY(1, 2);
            p2.Multiply(new XY(1, 2));
            Assert.AreEqual(new XY(1, 4), p2);
            Assert.AreEqual(new XY(1, 4), p1.Multiplied(new XY(1, 2)));
            Assert.AreEqual(new XY(1, 4), p1 * new XY(1, 2));

            Mat2d m1 = new Mat2d();
            m1.SetRotation(Math.PI / 2);
            p2 = new XY(4, 5);
            Assert.AreEqual("-5,4", p2.Multiplied(m1).ToString());
            Assert.AreEqual("-5,4", (p2 * m1).ToString());
            p2.Multiply(m1);
            Assert.AreEqual("-5,4", p2.ToString());

            p2 = new XY(1, 23);
            Assert.AreEqual("0.0434372242763069,0.99905615835506", p2.Normalized().ToString());
            p2.Normalize();
            Assert.AreEqual("0.0434372242763069,0.99905615835506", p2.ToString());

            p2 = new XY(1, 2);
            p2.Reverse();
            Assert.AreEqual(new XY(-1, -2), p2);
            Assert.AreEqual(new XY(-1, -2), p1.Reversed());

            p2 = new XY(1, 2);
            p2.Subtract(new XY(3, 2));
            Assert.AreEqual(new XY(-2, 0), p2);
            Assert.AreEqual(new XY(-2, 0), p1.Subtracted(new XY(3, 2)));
            Assert.AreEqual(new XY(-2, 0), p1 - new XY(3, 2));

            p2.SetLinearForm(new XY(1, 2), new XY(4, 5));
            Assert.AreEqual(new XY(5, 7), p2);
            p2.SetLinearForm(2, new XY(1, 2), new XY(4, 5));
            Assert.AreEqual(new XY(6, 9), p2);
            p2.SetLinearForm(2, new XY(1, 2), 3, new XY(4, 5));
            Assert.AreEqual(new XY(14, 19), p2);
            p2.SetLinearForm(2, new XY(1, 2), 3, new XY(4, 5), new XY(7, 8));
            Assert.AreEqual(new XY(21, 27), p2);
            //TestContext.WriteLine(string.Format(CultureInfo.InvariantCulture, "{0},{1}", gp2.x, gp2.y));
            //TestContext.WriteLine(string.Format(CultureInfo.InvariantCulture, "{0},{1}", new gp_XY(1, 23).Normalized().X(), new gp_XY(1, 23).Normalized().Y()));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ValueType_Pnt2d()
        {
            var p1 = new Pnt2d(1, 2);
            var p2 = new Pnt2d(4, 5);

            Assert.AreEqual(new Pnt2d(0, 0), Pnt2d.Origin);

            Assert.AreEqual(18, p1.SquareDistance(p2));
            Assert.AreEqual(Math.Sqrt(18), p1.Distance(p2));

            Assert.IsTrue(p1.IsEqual(p2, 4.3));
            Assert.IsFalse(p1.IsEqual(p2, 4.2));

            p2 = new Pnt2d(1, 2);
            p2.Mirror(new Pnt2d(2, 2));
            Assert.AreEqual(new Pnt2d(3, 2), p2);
            Assert.AreEqual(new Pnt2d(3, 2), p1.Mirrored(new Pnt2d(2, 2)));

            p2 = new Pnt2d(1, 2);
            p2.Translate(new Pnt2d(2, 2), new Pnt2d(1, 2));
            Assert.AreEqual(new Pnt2d(0, 2), p2);
            Assert.AreEqual(new Pnt2d(0, 2), p1.Translated(new Pnt2d(2, 2), new Pnt2d(1, 2)));

            Assert.AreEqual(new XY(1, 2), p1.ToXY());

            p2 = new Pnt2d(1, 2);
            p2.Scale(new Pnt2d(2, 2), 2);
            Assert.AreEqual(new Pnt2d(0, 2), p2);
            Assert.AreEqual(new Pnt2d(0, 2), p1.Scaled(new Pnt2d(2, 2), 2));

            p2 = new Pnt2d(1, 2);
            p2.Translate(new Vec2d(2, 2));
            Assert.AreEqual(new Pnt2d(3, 4), p2);
            Assert.AreEqual(new Pnt2d(3, 4), p1.Translated(new Vec2d(2, 2)));

            p2 = new Pnt2d(2, 1);
            Assert.AreEqual(new Pnt2d(4, 4), p2.Translated(new Vec2d(2, 3)));
            p2.Translate(new Vec2d(2, 3));
            Assert.AreEqual(new Pnt2d(4, 4), p2);

            var m2 = new Ax2d(new Pnt2d(-1, 2), new Dir2d(-1, 0));
            p2 = new Pnt2d(2, 1);
            Assert.AreEqual(new Pnt2d(2, 3), p2.Mirrored(m2));
            p2.Mirror(m2);
            Assert.AreEqual(new Pnt2d(2, 3), p2);

            p2 = new Pnt2d(2, 1);
            Assert.AreEqual("2,3", p2.Rotated(new Pnt2d(1, 2), Math.PI / 2).ToString());
            p2.Rotate(new Pnt2d(1, 2), Math.PI / 2);
            Assert.AreEqual("2,3", p2.ToString());

            //TestContext.WriteLine(string.Format(CultureInfo.InvariantCulture, "{0},{1},{2}", gp2.x, gp2.y, gp2.z));

            Trsf2d t1 = new Trsf2d();
            t1.SetRotation(new Pnt2d(1,2), Math.PI / 2);
            p2 = new Pnt2d(2, 1);
            Assert.AreEqual("2,3", p2.Transformed(t1).ToString());
            p2.Transform(t1);
            Assert.AreEqual("2,3", p2.ToString());
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ValueType_Vec2d()
        {
            var p1 = new Vec2d(1, 0);
            var p2 = new Vec2d(0, 1);

            Assert.IsFalse(p1.IsEqual(p2, 0.99, 0.1));
            Assert.IsTrue(p1.IsEqual(p2, 1.01, 0.1));
            Assert.IsTrue(p1.IsEqual(p2, 0.99, Math.PI / 2));
            Assert.IsTrue(p1.IsNormal(p2, 0.1));
            Assert.IsFalse(p1.IsOpposite(p2, 0.1));
            Assert.IsTrue(p1.IsOpposite(p2, Math.PI / 2));
            Assert.IsFalse(p1.IsParallel(p2, 0.1));
            Assert.IsTrue(p1.IsParallel(p2, Math.PI / 2));

            p1 = new Vec2d(1, 2);
            p2 = new Vec2d(4, 5);

            Assert.AreEqual(5, p1.SquareMagnitude());
            Assert.AreEqual(Math.Sqrt(5), p1.Magnitude());

            p2 = p1;
            p2.Add(new Vec2d(1, 2));
            Assert.AreEqual(new Vec2d(2, 4), p2);
            Assert.AreEqual(new Vec2d(2, 4), p1.Added(new Vec2d(1, 2)));

            p2 = new Vec2d(1, 2);
            p2.Subtract(new Vec2d(3, 2));
            Assert.AreEqual(new Vec2d(-2, 0), p2);
            Assert.AreEqual(new Vec2d(-2, 0), p1.Subtracted(new Vec2d(3, 2)));

            p2 = new Vec2d(1, 2);
            Assert.AreEqual(-4, p1.Crossed(new Vec2d(3, 2)));

            Assert.AreEqual(Math.Sqrt(16), p1.CrossMagnitude(new Vec2d(3, 2)));
            Assert.AreEqual(16, p1.CrossSquareMagnitude(new Vec2d(3, 2)));

            p2 = new Vec2d(1, 2);
            p2.Divide(2);
            Assert.AreEqual(new Vec2d(0.5, 1), p2);
            Assert.AreEqual(new Vec2d(0.5, 1), p1.Divided(2));

            Assert.AreEqual(5, p1.Dot(new Vec2d(1, 2)));

            p2 = new Vec2d(1, 2);
            p2.Multiply(2);
            Assert.AreEqual(new Vec2d(2, 4), p2);
            Assert.AreEqual(new Vec2d(2, 4), p1.Multiplied(2));

            p2 = new Vec2d(1, 2);
            p2.Scale(2);
            Assert.AreEqual(new Vec2d(2, 4), p2);
            Assert.AreEqual(new Vec2d(2, 4), p1.Scaled(2));

            p2 = new Vec2d(1, 23);
            Assert.AreEqual("0.0434372242763069,0.99905615835506", p2.Normalized().ToString());
            p2.Normalize();
            Assert.AreEqual("0.0434372242763069,0.99905615835506", p2.ToString());

            p2 = new Vec2d(1, 2);
            p2.Reverse();
            Assert.AreEqual(new Vec2d(-1, -2), p2);
            Assert.AreEqual(new Vec2d(-1, -2), p1.Reversed());

            p2.SetLinearForm(new Vec2d(1, 2), new Vec2d(4, 5));
            Assert.AreEqual(new Vec2d(5, 7), p2);
            p2.SetLinearForm(2, new Vec2d(1, 2), new Vec2d(4, 5));
            Assert.AreEqual(new Vec2d(6, 9), p2);
            p2.SetLinearForm(2, new Vec2d(1, 2), 3, new Vec2d(4, 5));
            Assert.AreEqual(new Vec2d(14, 19), p2);
            p2.SetLinearForm(2, new Vec2d(1, 2), 3, new Vec2d(4, 5), new Vec2d(7, 8));
            Assert.AreEqual(new Vec2d(21, 27), p2);

            p2 = new Vec2d(2, 1);
            Assert.AreEqual(new Vec2d(1,0), p2.Mirrored(new Vec2d(1, 0)));
            p2.Mirror(new Vec2d(1, 0));
            Assert.AreEqual(new Vec2d(1, 0), p2);

            var m2 = new Ax2d(new Pnt2d(-1, 2), new Dir2d(-1, 0));
            p2 = new Vec2d(2, 1);
            Assert.AreEqual(new Vec2d(2, -1), p2.Mirrored(m2));
            p2.Mirror(m2);
            Assert.AreEqual(new Vec2d(2, -1), p2);

            p2 = new Vec2d(2, 1);
            Assert.AreEqual("-1,2", p2.Rotated(Math.PI / 2).ToString());
            p2.Rotate(Math.PI / 2);
            Assert.AreEqual("-1,2", p2.ToString());

            //TestContext.WriteLine(string.Format(CultureInfo.InvariantCulture, "{0},{1},{2}", gp2.x, gp2.y, gp2.z));

            Trsf2d t1 = new Trsf2d();
            t1.SetRotation(new Pnt2d(1, 2), Math.PI / 2);
            p2 = new Vec2d(2,1);
            Assert.AreEqual("-1,2", p2.Transformed(t1).ToString());
            p2.Transform(t1);
            Assert.AreEqual("-1,2", p2.ToString());
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ValueType_Dir2d()
        {
            Assert.AreEqual(new Dir2d(1, 0), Dir2d.DX);
            Assert.AreEqual(new Dir2d(0, 1), Dir2d.DY);

            var p1 = new Dir2d(1, 0);
            var p2 = new Dir2d(0, 1);

            Assert.IsFalse(p1.IsEqual(p2, 0.1));
            Assert.IsTrue(p1.IsEqual(p2, Math.PI / 2));
            Assert.IsTrue(p1.IsNormal(p2, 0.1));
            Assert.IsFalse(p1.IsOpposite(p2, 0.1));
            Assert.IsTrue(p1.IsOpposite(p2, Math.PI / 2));
            Assert.IsFalse(p1.IsParallel(p2, 0.1));
            Assert.IsTrue(p1.IsParallel(p2, Math.PI / 2));

            Assert.AreEqual(Math.PI / 2, p1.Angle(p2));

            p2 = new Dir2d(1, 0);
            Assert.AreEqual(1, p1.Crossed(new Dir2d(0, 1)));

            Assert.AreEqual(Math.Sqrt(2) / 2, p1.Dot(new Dir2d(1, 1)), 0.0000001);

            p2 = new Dir2d(1, 0);
            p2.Reverse();
            Assert.AreEqual(new Dir2d(-1, 0), p2);
            Assert.AreEqual(new Dir2d(-1, 0), p1.Reversed());

            p2 = new Dir2d(1, 0);
            p2.Mirror(new Dir2d(0, 1));
            Assert.AreEqual(new Dir2d(-1, 0), p2);
            Assert.AreEqual(new Dir2d(-1, 0), p1.Mirrored(new Dir2d(0, 1)));

            var m2 = new Ax2d(new Pnt2d(-1, 2), new Dir2d(-1, 0));
            p2 = new Dir2d(1, 0);
            p2.Mirror(m2);
            Assert.AreEqual(new Dir2d(1, 0), p2);
            Assert.AreEqual(new Dir2d(1, 0), p1.Mirrored(m2));

            p2 = new Dir2d(1, 0);
            Assert.IsTrue(new Dir2d(0, 1).IsEqual(p2.Rotated(Math.PI / 2), 0.00001));
            p2.Rotate(Math.PI / 2);
            Assert.IsTrue(new Dir2d(0, 1).IsEqual(p2, 0.0001));

            //TestContext.WriteLine(string.Format(CultureInfo.InvariantCulture, "{0},{1},{2}", gp2.x, gp2.y, gp2.z));

            Trsf2d t1 = new Trsf2d();
            t1.SetRotation(new Pnt2d(1, 2), Math.PI / 2);
            p2 = new Dir2d(0, 1);
            Assert.IsTrue(new Dir2d(-1, 0).IsEqual(p2.Transformed(t1), 0.0001));
            p2.Transform(t1);
            Assert.IsTrue(new Dir2d(-1, 0).IsEqual(p2, 0.0001));

        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ValueType_Ax2d()
        {
            Assert.AreEqual(new Ax2d(Pnt2d.Origin, Dir2d.DX), Ax2d.OX);
            Assert.AreEqual(new Ax2d(Pnt2d.Origin, Dir2d.DY), Ax2d.OY);

            var s1 = new Ax2d(new Pnt2d(1, 2), new Dir2d(1, 0));
            var s2 = new Ax2d(new Pnt2d(2, 3), new Dir2d(0, 1));
            var p1 = s1;
            var p2 = s2;

            Assert.IsFalse(p1.IsCoaxial(p2, 0.1, 0.1));
            Assert.IsFalse(p1.IsCoaxial(p2, Math.PI / 2, 0.1));
            Assert.IsTrue(p1.IsCoaxial(p2, Math.PI / 2, 2.0));
            Assert.IsTrue(p1.IsNormal(p2, 0.1));
            Assert.IsFalse(p1.IsOpposite(p2, 0.1));
            Assert.IsTrue(p1.IsOpposite(p2, Math.PI / 2));
            Assert.IsFalse(p1.IsParallel(p2, 0.1));
            Assert.IsTrue(p1.IsParallel(p2, Math.PI / 2));

            Assert.AreEqual(Math.PI / 2, p1.Angle(p2));

            var m1 = new Ax2d(new Pnt2d(1, 2), new Dir2d(-1, 0));
            p2 = s1;
            p2.Reverse();
            Assert.AreEqual(m1, p2);
            Assert.AreEqual(m1, p1.Reversed());

            m1 = new Ax2d(new Pnt2d(-1, 0), new Dir2d(-1, 0));
            p2 = s1;
            p2.Mirror(new Pnt2d(0, 1));
            Assert.AreEqual(m1, p2);
            Assert.AreEqual(m1, p1.Mirrored(new Pnt2d(0, 1)));

            m1 = new Ax2d(new Pnt2d(-1, 2), new Dir2d(-1, 0));
            var m2 = new Ax2d(new Pnt2d(0, 1), new Dir2d(0, 1));
            p2 = s1;
            p2.Mirror(m2);
            Assert.AreEqual(m1, p2);
            Assert.AreEqual(m1, p1.Mirrored(m2));

            p2 = s1;
#if DEBUG
            Assert.AreEqual("(1,2),(6.12323399573677E-17,1)", p2.Rotated(new Pnt2d(1, 2), Math.PI / 2).ToString());
            p2.Rotate(new Pnt2d(1, 2), Math.PI / 2);
            Assert.AreEqual("(1,2),(6.12323399573677E-17,1)", p2.ToString());

#else
            Assert.AreEqual("(1,2),(6.12303176911189E-17,1)", p2.Rotated(new Pnt2d(1, 2), Math.PI / 2).ToString());
            p2.Rotate(new Pnt2d(1, 2), Math.PI / 2);
            Assert.AreEqual("(1,2),(6.12303176911189E-17,1)", p2.ToString());
#endif

            m1 = new Ax2d(new Pnt2d(-1, 0), new Dir2d(1, 0));
            p2 = s1;
            p2.Scale(new Pnt2d(2, 3), 3);
            Assert.AreEqual(m1, p2);
            Assert.AreEqual(m1, p1.Scaled(new Pnt2d(2, 3), 3));

            m1 = new Ax2d(new Pnt2d(-1, -1), new Dir2d(1, 0));
            p2 = s1;
            p2.Translate(new Pnt2d(3, 5), new Pnt2d(1, 2));
            Assert.AreEqual(m1, p2);
            Assert.AreEqual(m1, p1.Translated(new Pnt2d(3, 5), new Pnt2d(1, 2)));

            m1 = new Ax2d(new Pnt2d(3, 5), new Dir2d(1, 0));
            p2 = s1;
            p2.Translate(new Vec2d(2, 3));
            Assert.AreEqual(m1, p2);
            Assert.AreEqual(m1, p1.Translated(new Vec2d(2, 3)));

            //            TestContext.WriteLine(string.Format(CultureInfo.InvariantCulture, $"{gp2.Location().x},{gp2.Location().y},{gp2.Location().z} - {gp2.Direction().x},{gp2.Direction().y},{gp2.Direction().z}"));

            Trsf2d t1 = new Trsf2d();
            t1.SetRotation(new Pnt2d(1, 2), Math.PI / 2);
            p2 = s1;
#if DEBUG
            Assert.AreEqual("(1,2),(6.12323399573677E-17,1)", p2.Transformed(t1).ToString());
            p2.Transform(t1);
            Assert.AreEqual("(1,2),(6.12323399573677E-17,1)", p2.ToString());
#else
            Assert.AreEqual("(1,2),(6.12303176911189E-17,1)", p2.Transformed(t1).ToString());
            p2.Transform(t1);
            Assert.AreEqual("(1,2),(6.12303176911189E-17,1)", p2.ToString());
#endif
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ValueType_Ax22d()
        {
            var s1 = new Ax22d(new Pnt2d(1, 2), new Dir2d(1, 0));
            var s2 = new Ax22d(new Pnt2d(2, 3), new Dir2d(0, 1));

            Assert.AreEqual(new Pnt2d(1, 2), s1.Location);
            Assert.AreEqual(new Dir2d(1, 0), s1.XDirection);
            Assert.AreEqual(new Dir2d(0, 1), s1.YDirection);

            var p2 = s2;
            p2.Location = new Pnt2d(3, 2);
            Assert.AreEqual(new Pnt2d(3, 2), p2.Location);
            p2.XDirection = new Dir2d(0, -1);
            Assert.AreEqual(new Dir2d(0, -1), p2.XDirection);
            p2.YDirection = new Dir2d(1, 0);
            Assert.AreEqual(new Dir2d(1, 0), p2.YDirection);

            var res = new Ax22d(new Pnt2d(-1, 0), new Dir2d(-1, 0));
            p2 = s1;
            Assert.AreEqual(res, p2.Mirrored(new Pnt2d(0, 1)));
            p2.Mirror(new Pnt2d(0, 1));
            Assert.AreEqual(res, p2);

            res = new Ax22d(new Pnt2d(-1, 0), new Dir2d(-1, 0));
            p2 = s1;
            Assert.AreEqual(res, p2.Mirrored(new Pnt2d(0, 1)));
            p2.Mirror(new Pnt2d(0, 1));
            Assert.AreEqual(res, p2);

            res = new Ax22d(new Pnt2d(-1, 2), new Dir2d(-1, 0), new Dir2d(0, 1));
            var m2 = new Ax2d(new Pnt2d(0, 1), new Dir2d(0, 1));
            p2 = s1;
            Assert.AreEqual(res, p2.Mirrored(m2));
            p2.Mirror(m2);

            p2 = s1;
#if DEBUG
            Assert.AreEqual("(1,2),(6.12323399573677E-17,1),(-1,6.12323399573677E-17)", p2.Rotated(new Pnt2d(1, 2), Math.PI / 2).ToString());
            p2.Rotate(new Pnt2d(1, 2), Math.PI / 2);
            Assert.AreEqual("(1,2),(6.12323399573677E-17,1),(-1,6.12323399573677E-17)", p2.ToString());
#else
            Assert.AreEqual("(1,2),(6.12303176911189E-17,1),(-1,6.12303176911189E-17)", p2.Rotated(new Pnt2d(1, 2), Math.PI / 2).ToString());
            p2.Rotate(new Pnt2d(1, 2), Math.PI / 2);
            Assert.AreEqual("(1,2),(6.12303176911189E-17,1),(-1,6.12303176911189E-17)", p2.ToString());
#endif

            res = new Ax22d(new Pnt2d(-1, 0), new Dir2d(1, 0));
            p2 = s1;
            Assert.AreEqual(res, p2.Scaled(new Pnt2d(2, 3), 3));
            p2.Scale(new Pnt2d(2, 3), 3);
            Assert.AreEqual(res, p2);

            res = new Ax22d(new Pnt2d(-1, -1), new Dir2d(1, 0));
            p2 = s1;
            Assert.AreEqual(res, p2.Translated(new Pnt2d(3, 5), new Pnt2d(1, 2)));
            p2.Translate(new Pnt2d(3, 5), new Pnt2d(1, 2));
            Assert.AreEqual(res, p2);

            res = new Ax22d(new Pnt2d(3, 5), new Dir2d(1, 0));
            p2 = s1;
            Assert.AreEqual(res, p2.Translated(new Vec2d(2, 3)));
            p2.Translate(new Vec2d(2, 3));
            Assert.AreEqual(res, p2);

            //gp2.Scaled(new gp_Pnt2d(2, 3, 2), 3);
            //TestContext.WriteLine(string.Format(CultureInfo.InvariantCulture, $"({gp2.Location().x},{gp2.Location().y},{gp2.Location().z}), ({gp2.XDir2dection().x},{gp2.XDir2dection().y},{gp2.XDir2dection().z}), ({gp2.YDir2dection().x},{gp2.YDir2dection().y},{gp2.YDir2dection().z}), ({gp2.Dir2dection().x},{gp2.Dir2dection().y},{gp2.Dir2dection().z})"));

            //gp_Trsf gt1 = new gp_Trsf();
            //gt1.SetRotation(gp.OZ(), Math.PI / 2);
            //gp2.Transform(gt1);
            //TestContext.WriteLine(string.Format(CultureInfo.InvariantCulture, $"({gp2.Location().x},{gp2.Location().y},{gp2.Location().z}), ({gp2.XDir2dection().x},{gp2.XDir2dection().y},{gp2.XDir2dection().z}), ({gp2.YDir2dection().x},{gp2.YDir2dection().y},{gp2.YDir2dection().z}), ({gp2.Dir2dection().x},{gp2.Dir2dection().y},{gp2.Dir2dection().z})"));

            Trsf2d t1 = new Trsf2d();
            t1.SetRotation(new Pnt2d(1, 2), Math.PI / 2);
            p2 = s1;
#if DEBUG
            Assert.AreEqual("(1,2),(6.12323399573677E-17,1),(-1,6.12323399573677E-17)", p2.Transformed(t1).ToString());
            p2.Transform(t1);
            Assert.AreEqual("(1,2),(6.12323399573677E-17,1),(-1,6.12323399573677E-17)", p2.ToString());
#else
            Assert.AreEqual("(1,2),(6.12303176911189E-17,1),(-1,6.12303176911189E-17)", p2.Transformed(t1).ToString());
            p2.Transform(t1);
            Assert.AreEqual("(1,2),(6.12303176911189E-17,1),(-1,6.12303176911189E-17)", p2.ToString());
#endif
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ValueType_Mat()
        {
            Mat2d m1 = new Mat2d();
            m1.SetIdentity();
            Mat2d m2 = new Mat2d(new XY(0, 2), new XY(3, 0));
            Mat2d res = new Mat2d(new XY(1, 2), new XY(3, 1));
            Assert.AreEqual(res, m1.Added(m2));
            Assert.AreEqual(-6, m2.Determinant());
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ValueType_Trsf()
        {
            Trsf2d m1 = new Trsf2d();
            m1.SetRotation(new Pnt2d(1, 2), Math.PI / 2);
            var c1 = new XY(2, 1);
            m1.Transforms(ref c1);
            Assert.AreEqual("2,3", c1.ToString());
        }

        //--------------------------------------------------------------------------------------------------

    }
}