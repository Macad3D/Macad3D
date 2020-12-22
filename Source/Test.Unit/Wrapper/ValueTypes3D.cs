using System;
using System.Diagnostics;
using System.Globalization;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper
{
    [TestFixture]
    public class ValueTypes3D
    {
        [Test]
        public void ValueType_XYZ()
        {
            var p1 = new XYZ(1, 2, 3);
            var p2 = new XYZ(4, 5, 6);

            Assert.AreEqual(14, p1.SquareModulus());
            Assert.AreEqual(Math.Sqrt(14), p1.Modulus());

            Assert.IsTrue(p1.IsEqual(p2, 3));
            Assert.IsFalse(p1.IsEqual(p2, 2.99));

            p2 = p1;
            p2.Add(new XYZ(1, 2, 3));
            Assert.AreEqual(new XYZ(2, 4, 6), p2);
            Assert.AreEqual(new XYZ(2, 4, 6), p1.Added(new XYZ(1, 2, 3)));
            p2 += new XYZ(1, 2, 3);
            Assert.AreEqual(new XYZ(3, 6, 9), p2);

            p2 = new XYZ(1, 2, 3);
            p2.Cross(new XYZ(3, 2, 1));
            Assert.AreEqual(new XYZ(-4, 8, -4), p2);
            Assert.AreEqual(new XYZ(-4, 8, -4), p1.Crossed(new XYZ(3, 2, 1)));

            Assert.AreEqual(Math.Sqrt(96), p1.CrossMagnitude(new XYZ(3, 2, 1)));
            Assert.AreEqual(96, p1.CrossSquareMagnitude(new XYZ(3, 2, 1)));

            p2 = new XYZ(1, 2, 3);
            p2.CrossCross(new XYZ(1, 2, 3), new XYZ(4, 5, 6));
            Assert.AreEqual(new XYZ(-24, -6, 12), p2);
            Assert.AreEqual(new XYZ(-24, -6, 12), p1.CrossCrossed(new XYZ(1, 2, 3), new XYZ(4, 5, 6)));

            p2 = new XYZ(1, 2, 3);
            p2.Divide(2);
            Assert.AreEqual(new XYZ(0.5, 1, 1.5), p2);
            Assert.AreEqual(new XYZ(0.5, 1, 1.5), p1.Divided(2));

            Assert.AreEqual(14, p1.Dot(new XYZ(1, 2, 3)));
            Assert.AreEqual(0, p1.DotCross(new XYZ(4, 5, 6), new XYZ(4, 5, 6)));

            p2 = new XYZ(1, 2, 3);
            p2.Multiply(2);
            Assert.AreEqual(new XYZ(2, 4, 6), p2);
            Assert.AreEqual(new XYZ(2, 4, 6), p1.Multiplied(2));
            Assert.AreEqual(new XYZ(2, 4, 6), p1 * 2);

            p2 = new XYZ(1, 2, 3);
            p2.Multiply(new XYZ(1, 2, 3));
            Assert.AreEqual(new XYZ(1, 4, 9), p2);
            Assert.AreEqual(new XYZ(1, 4, 9), p1.Multiplied(new XYZ(1, 2, 3)));
            Assert.AreEqual(new XYZ(1, 4, 9), p1 * new XYZ(1, 2, 3));

            Mat m1 = new Mat();
            m1.SetRotation(Dir.DZ.Coord, Math.PI / 2);
            p2 = new XYZ(4, 5, 6);
            Assert.AreEqual("-5,4,6", p2.Multiplied(m1).ToString());
            Assert.AreEqual("-5,4,6", (p2 * m1).ToString());
            p2.Multiply(m1);
            Assert.AreEqual("-5,4,6", p2.ToString());

            p2 = new XYZ(1, 2, 3);
            p2.Normalize();
            Assert.IsTrue(p2.IsEqual(new XYZ(0.26726, 0.53452, 0.80178), 0.00001));
            Assert.IsTrue(p1.Normalized().IsEqual(new XYZ(0.26726, 0.53452, 0.80178), 0.00001));

            p2 = new XYZ(1, 2, 3);
            p2.Reverse();
            Assert.AreEqual(new XYZ(-1, -2, -3), p2);
            Assert.AreEqual(new XYZ(-1, -2, -3), p1.Reversed());

            p2 = new XYZ(1, 2, 3);
            p2.Subtract(new XYZ(3, 2, 1));
            Assert.AreEqual(new XYZ(-2, 0, 2), p2);
            Assert.AreEqual(new XYZ(-2, 0, 2), p1.Subtracted(new XYZ(3, 2, 1)));
            Assert.AreEqual(new XYZ(-2, 0, 2), p1 - new XYZ(3, 2, 1));

            p2.SetLinearForm(new XYZ(1, 2, 3), new XYZ(4, 5, 6));
            Assert.AreEqual(new XYZ(5, 7, 9), p2);
            p2.SetLinearForm(2, new XYZ(1, 2, 3), new XYZ(4, 5, 6));
            Assert.AreEqual(new XYZ(6, 9, 12), p2);
            p2.SetLinearForm(2, new XYZ(1, 2, 3), 3, new XYZ(4, 5, 6));
            Assert.AreEqual(new XYZ(14, 19, 24), p2);
            p2.SetLinearForm(2, new XYZ(1, 2, 3), 3, new XYZ(4, 5, 6), new XYZ(7, 8, 9));
            Assert.AreEqual(new XYZ(21, 27, 33), p2);
            p2.SetLinearForm(2, new XYZ(1, 2, 3), 3, new XYZ(4, 5, 6), 4, new XYZ(7, 8, 9));
            Assert.AreEqual(new XYZ(42, 51, 60), p2);
            p2.SetLinearForm(2, new XYZ(1, 2, 3), 3, new XYZ(4, 5, 6), 4, new XYZ(7, 8, 9), new XYZ(10, 11, 12));
            Assert.AreEqual(new XYZ(52, 62, 72), p2);
            //TestContext.WriteLine(string.Format(CultureInfo.InvariantCulture, "{0},{1},{2}", gp2.x, gp2.y, gp2.z));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ValueType_Pnt()
        {
            var p1 = new Pnt(1, 2, 3);
            var p2 = new Pnt(4, 5, 6);

            Assert.AreEqual(new Pnt(0, 0, 0), Pnt.Origin);

            Assert.AreEqual(27, p1.SquareDistance(p2));
            Assert.AreEqual(Math.Sqrt(27), p1.Distance(p2));

            Assert.IsTrue(p1.IsEqual(p2, 5.2));
            Assert.IsFalse(p1.IsEqual(p2, 5.18));

            p2 = new Pnt(1, 2, 3);
            p2.Mirror(new Pnt(2, 2, 2));
            Assert.AreEqual(new Pnt(3, 2, 1), p2);
            Assert.AreEqual(new Pnt(3, 2, 1), p1.Mirrored(new Pnt(2, 2, 2)));

            p2 = new Pnt(1, 2, 3);
            p2.Translate(new Pnt(2, 2, 2), new Pnt(1, 2, 3));
            Assert.AreEqual(new Pnt(0, 2, 4), p2);
            Assert.AreEqual(new Pnt(0, 2, 4), p1.Translated(new Pnt(2, 2, 2), new Pnt(1, 2, 3)));

            Assert.AreEqual(new XYZ(1, 2, 3), p1.ToXYZ());

            p2 = new Pnt(1, 2, 3);
            p2.Scale(new Pnt(2, 2, 2), 2);
            Assert.AreEqual(new Pnt(0, 2, 4), p2);
            Assert.AreEqual(new Pnt(0, 2, 4), p1.Scaled(new Pnt(2, 2, 2), 2));

            p2.BaryCenter(2, p1, 5);
            Assert.IsTrue(p2.IsEqual(new Pnt(0.71428, 2, 3.28571), 0.00001));

            p2 = new Pnt(1, 2, 3);
            p2.Translate(new Vec(2, 2, 2));
            Assert.AreEqual(new Pnt(3, 4, 5), p2);
            Assert.AreEqual(new Pnt(3, 4, 5), p1.Translated(new Vec(2, 2, 2)));

            p2 = new Pnt(2, 1, 3);
            Assert.AreEqual(new Pnt(4, 4, 7), p2.Translated(new Vec(2, 3, 4)));
            p2.Translate(new Vec(2, 3, 4));
            Assert.AreEqual(new Pnt(4, 4, 7), p2);

            var m2 = new Ax1(new Pnt(-1, 2, -3), new Dir(-1, 0, 0));
            p2 = new Pnt(2, 1, 3);
            Assert.AreEqual(new Pnt(2, 3, -9), p2.Mirrored(m2));
            p2.Mirror(m2);
            Assert.AreEqual(new Pnt(2, 3, -9), p2);

            var a2 = new Ax2(new Pnt(-1, 2, -3), new Dir(-1, 0, 0));
            p2 = new Pnt(2, 1, 3);
            Assert.AreEqual(new Pnt(-4, 1, 3), p2.Mirrored(a2));
            p2.Mirror(a2);
            Assert.AreEqual(new Pnt(-4, 1, 3), p2);

            p2 = new Pnt(2, 1, 3);
            Assert.IsTrue(new Pnt(2, 8, -2).IsEqual(p2.Rotated(m2, Math.PI / 2), 0.0001));
            p2.Rotate(m2, Math.PI / 2);
            Assert.IsTrue(new Pnt(2, 8, -2).IsEqual(p2, 0.0001));

            //TestContext.WriteLine(string.Format(CultureInfo.InvariantCulture, "{0},{1},{2}", gp2.x, gp2.y, gp2.z));

            Trsf t1 = new Trsf();
            t1.SetRotation(Ax1.OZ, Math.PI / 2);
            p2 = new Pnt(4, 5, 6);
            Assert.AreEqual("-5,4,6", p2.Transformed(t1).ToString());
            p2.Transform(t1);
            Assert.AreEqual("-5,4,6", p2.ToString());
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ValueType_Vec()
        {
            var p1 = new Vec(1, 0, 0);
            var p2 = new Vec(0, 1, 0);

            Assert.IsFalse(p1.IsEqual(p2, 0.99, 0.1));
            Assert.IsTrue(p1.IsEqual(p2, 1.01, 0.1));
            Assert.IsTrue(p1.IsEqual(p2, 0.99, Math.PI / 2));
            Assert.IsTrue(p1.IsNormal(p2, 0.1));
            Assert.IsFalse(p1.IsOpposite(p2, 0.1));
            Assert.IsTrue(p1.IsOpposite(p2, Math.PI / 2));
            Assert.IsFalse(p1.IsParallel(p2, 0.1));
            Assert.IsTrue(p1.IsParallel(p2, Math.PI / 2));

            p1 = new Vec(1, 2, 3);
            p2 = new Vec(4, 5, 6);

            Assert.AreEqual(14, p1.SquareMagnitude());
            Assert.AreEqual(Math.Sqrt(14), p1.Magnitude());

            p2 = p1;
            p2.Add(new Vec(1, 2, 3));
            Assert.AreEqual(new Vec(2, 4, 6), p2);
            Assert.AreEqual(new Vec(2, 4, 6), p1.Added(new Vec(1, 2, 3)));

            p2 = new Vec(1, 2, 3);
            p2.Subtract(new Vec(3, 2, 1));
            Assert.AreEqual(new Vec(-2, 0, 2), p2);
            Assert.AreEqual(new Vec(-2, 0, 2), p1.Subtracted(new Vec(3, 2, 1)));

            p2 = new Vec(1, 2, 3);
            p2.Cross(new Vec(3, 2, 1));
            Assert.AreEqual(new Vec(-4, 8, -4), p2);
            Assert.AreEqual(new Vec(-4, 8, -4), p1.Crossed(new Vec(3, 2, 1)));

            Assert.AreEqual(Math.Sqrt(96), p1.CrossMagnitude(new Vec(3, 2, 1)));
            Assert.AreEqual(96, p1.CrossSquareMagnitude(new Vec(3, 2, 1)));

            p2 = new Vec(1, 2, 3);
            p2.CrossCross(new Vec(1, 2, 3), new Vec(4, 5, 6));
            Assert.AreEqual(new Vec(-24, -6, 12), p2);
            Assert.AreEqual(new Vec(-24, -6, 12), p1.CrossCrossed(new Vec(1, 2, 3), new Vec(4, 5, 6)));

            p2 = new Vec(1, 2, 3);
            p2.Divide(2);
            Assert.AreEqual(new Vec(0.5, 1, 1.5), p2);
            Assert.AreEqual(new Vec(0.5, 1, 1.5), p1.Divided(2));

            Assert.AreEqual(14, p1.Dot(new Vec(1, 2, 3)));
            Assert.AreEqual(0, p1.DotCross(new Vec(4, 5, 6), new Vec(4, 5, 6)));

            p2 = new Vec(1, 2, 3);
            p2.Multiply(2);
            Assert.AreEqual(new Vec(2, 4, 6), p2);
            Assert.AreEqual(new Vec(2, 4, 6), p1.Multiplied(2));

            p2 = new Vec(1, 2, 3);
            p2.Scale(2);
            Assert.AreEqual(new Vec(2, 4, 6), p2);
            Assert.AreEqual(new Vec(2, 4, 6), p1.Scaled(2));

            p2 = new Vec(1, 2, 3);
            p2.Normalize();
            Assert.IsTrue(p2.IsEqual(new Vec(0.26726, 0.53452, 0.80178), 0.00001, 0.00001));
            Assert.IsTrue(p1.Normalized().IsEqual(new Vec(0.26726, 0.53452, 0.80178), 0.00001, 0.00001));

            p2 = new Vec(1, 2, 3);
            p2.Reverse();
            Assert.AreEqual(new Vec(-1, -2, -3), p2);
            Assert.AreEqual(new Vec(-1, -2, -3), p1.Reversed());

            p2.SetLinearForm(new Vec(1, 2, 3), new Vec(4, 5, 6));
            Assert.AreEqual(new Vec(5, 7, 9), p2);
            p2.SetLinearForm(2, new Vec(1, 2, 3), new Vec(4, 5, 6));
            Assert.AreEqual(new Vec(6, 9, 12), p2);
            p2.SetLinearForm(2, new Vec(1, 2, 3), 3, new Vec(4, 5, 6));
            Assert.AreEqual(new Vec(14, 19, 24), p2);
            p2.SetLinearForm(2, new Vec(1, 2, 3), 3, new Vec(4, 5, 6), new Vec(7, 8, 9));
            Assert.AreEqual(new Vec(21, 27, 33), p2);
            p2.SetLinearForm(2, new Vec(1, 2, 3), 3, new Vec(4, 5, 6), 4, new Vec(7, 8, 9));
            Assert.AreEqual(new Vec(42, 51, 60), p2);
            p2.SetLinearForm(2, new Vec(1, 2, 3), 3, new Vec(4, 5, 6), 4, new Vec(7, 8, 9), new Vec(10, 11, 12));
            Assert.AreEqual(new Vec(52, 62, 72), p2);

            p2 = new Vec(2, 0, 0);
            p2.Mirror(new Vec(0, 1, 0));
            Assert.AreEqual(new Vec(-2, 0, 0), p2);
            Assert.AreEqual(new Vec(2, 0, 0), p2.Mirrored(new Vec(0, 1, 0)));

            var m2 = new Ax1(new Pnt(-1, 2, -3), new Dir(-1, 0, 0));
            p2 = new Vec(2, 1, 3);
            Assert.AreEqual(new Vec(2, -1, -3), p2.Mirrored(m2));
            p2.Mirror(m2);
            Assert.AreEqual(new Vec(2, -1, -3), p2);

            var a2 = new Ax2(new Pnt(-1, 2, -3), new Dir(-1, 0, 0));
            p2 = new Vec(2, 1, 3);
            Assert.AreEqual("-2,1,3", p2.Mirrored(a2).ToString());
            p2.Mirror(a2);
            Assert.AreEqual("-2,1,3", p2.ToString());

            p2 = new Vec(2, 1, 3);
            Assert.IsTrue(new Vec(2, 3, -1).IsEqual(p2.Rotated(m2, Math.PI / 2), 0.0001, 0.0001));
            p2.Rotate(m2, Math.PI / 2);
            Assert.IsTrue(new Vec(2, 3, -1).IsEqual(p2, 0.0001, 0.0001));

            //TestContext.WriteLine(string.Format(CultureInfo.InvariantCulture, "{0},{1},{2}", gp2.x, gp2.y, gp2.z));

            Trsf t1 = new Trsf();
            t1.SetRotation(Ax1.OZ, Math.PI / 2);
            p2 = new Vec(4, 5, 6);
            Assert.AreEqual("-5,4,6", p2.Transformed(t1).ToString());
            p2.Transform(t1);
            Assert.AreEqual("-5,4,6", p2.ToString());
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ValueType_Dir()
        {
            Assert.AreEqual(new Dir(1, 0, 0), Dir.DX);
            Assert.AreEqual(new Dir(0, 1, 0), Dir.DY);
            Assert.AreEqual(new Dir(0, 0, 1), Dir.DZ);

            var p1 = new Dir(1, 0, 0);
            var p2 = new Dir(0, 1, 0);

            Assert.IsFalse(p1.IsEqual(p2, 0.1));
            Assert.IsTrue(p1.IsEqual(p2, Math.PI / 2));
            Assert.IsTrue(p1.IsNormal(p2, 0.1));
            Assert.IsFalse(p1.IsOpposite(p2, 0.1));
            Assert.IsTrue(p1.IsOpposite(p2, Math.PI / 2));
            Assert.IsFalse(p1.IsParallel(p2, 0.1));
            Assert.IsTrue(p1.IsParallel(p2, Math.PI / 2));

            Assert.AreEqual(Math.PI / 2, p1.Angle(p2));
            Assert.AreEqual(Math.PI / 2, p1.AngleWithRef(p2, new Dir(0, 0, 1)));

            p2 = new Dir(1, 0, 0);
            p2.Cross(new Dir(0, 1, 0));
            Assert.AreEqual(new Dir(0, 0, 1), p2);
            Assert.AreEqual(new Dir(0, 0, 1), p1.Crossed(new Dir(0, 1, 0)));

            p2 = new Dir(1, 0, 0);
            p2.CrossCross(new Dir(0, 1, 0), new Dir(1, 0, 1));
            Assert.AreEqual(new Dir(0, 1, 0), p2);
            Assert.AreEqual(new Dir(0, 1, 0), p1.CrossCrossed(new Dir(0, 1, 0), new Dir(1, 0, 1)));

            Assert.AreEqual(Math.Sqrt(2) / 2, p1.Dot(new Dir(1, 1, 0)), 0.0000001);
            Assert.AreEqual(Math.Sqrt(2) / 2, p1.DotCross(new Dir(0, 1, 0), new Dir(1, 0, 1)), 0.0000001);

            p2 = new Dir(1, 0, 0);
            p2.Reverse();
            Assert.AreEqual(new Dir(-1, 0, 0), p2);
            Assert.AreEqual(new Dir(-1, 0, 0), p1.Reversed());

            p2 = new Dir(1, 0, 0);
            p2.Mirror(new Dir(0, 1, 0));
            Assert.AreEqual(new Dir(-1, 0, 0), p2);
            Assert.AreEqual(new Dir(-1, 0, 0), p1.Mirrored(new Dir(0, 1, 0)));

            var m2 = new Ax1(new Pnt(-1, 2, -3), new Dir(-1, 0, 0));
            p2 = new Dir(1, 0, 0);
            p2.Mirror(m2);
            Assert.AreEqual(new Dir(1, 0, 0), p2);
            Assert.AreEqual(new Dir(1, 0, 0), p1.Mirrored(m2));

            var a2 = new Ax2(new Pnt(-1, 2, -3), new Dir(-1, 0, 0));
            p2 = new Dir(1, 0, 0);
            Assert.AreEqual(new Dir(-1, 0, 0), p2.Mirrored(a2));
            p2.Mirror(a2);
            Assert.AreEqual(new Dir(-1, 0, 0), p2);

            p2 = new Dir(1, 0, 0);
            p2.Rotate(m2, Math.PI / 2);
            Assert.AreEqual(new Dir(1, 0, 0), p2);
            Assert.AreEqual(new Dir(1, 0, 0), p1.Rotated(m2, Math.PI / 2));

            //TestContext.WriteLine(string.Format(CultureInfo.InvariantCulture, "{0},{1},{2}", gp2.x, gp2.y, gp2.z));

            Trsf t1 = new Trsf();
            t1.SetRotation(Ax1.OZ, Math.PI / 2);
            p2 = new Dir(0, 1, 0);
            Assert.AreEqual("-1,1.11022302462516E-16,0", p2.Transformed(t1).ToString());
            p2.Transform(t1);
            Assert.AreEqual("-1,1.11022302462516E-16,0", p2.ToString());

        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ValueType_Ax1()
        {
            Assert.AreEqual(new Ax1(Pnt.Origin, Dir.DX), Ax1.OX);
            Assert.AreEqual(new Ax1(Pnt.Origin, Dir.DY), Ax1.OY);
            Assert.AreEqual(new Ax1(Pnt.Origin, Dir.DZ), Ax1.OZ);

            var s1 = new Ax1(new Pnt(1, 2, 3), new Dir(1, 0, 0));
            var s2 = new Ax1(new Pnt(2, 3, 4), new Dir(0, 1, 0));
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

            var m1 = new Ax1(new Pnt(1, 2, 3), new Dir(-1, 0, 0));
            p2 = s1;
            p2.Reverse();
            Assert.AreEqual(m1, p2);
            Assert.AreEqual(m1, p1.Reversed());

            m1 = new Ax1(new Pnt(-1, 0, -3), new Dir(-1, 0, 0));
            p2 = s1;
            p2.Mirror(new Pnt(0, 1, 0));
            Assert.AreEqual(m1, p2);
            Assert.AreEqual(m1, p1.Mirrored(new Pnt(0, 1, 0)));

            m1 = new Ax1(new Pnt(-1, 2, -3), new Dir(-1, 0, 0));
            var m2 = new Ax1(new Pnt(0, 1, 0), new Dir(0, 1, 0));
            p2 = s1;
            p2.Mirror(m2);
            Assert.AreEqual(m1, p2);
            Assert.AreEqual(m1, p1.Mirrored(m2));

            m1 = new Ax1(new Pnt(3, 2, -1), new Dir(0, 0, -1));
            p2 = s1;
            p2.Rotate(m2, Math.PI / 2);
            Assert.IsTrue(m1.IsCoaxial(p2, 0.0001, 0.001));
            Assert.IsTrue(m1.IsCoaxial(p1.Rotated(m2, Math.PI / 2), 0.0001, 0.001));

            m1 = new Ax1(new Pnt(-1, 0, 5), new Dir(1, 0, 0));
            p2 = s1;
            p2.Scale(new Pnt(2, 3, 2), 3);
            Assert.AreEqual(m1, p2);
            Assert.AreEqual(m1, p1.Scaled(new Pnt(2, 3, 2), 3));

            m1 = new Ax1(new Pnt(-1, -1, 2), new Dir(1, 0, 0));
            p2 = s1;
            p2.Translate(new Pnt(3, 5, 4), new Pnt(1, 2, 3));
            Assert.AreEqual(m1, p2);
            Assert.AreEqual(m1, p1.Translated(new Pnt(3, 5, 4), new Pnt(1, 2, 3)));

            m1 = new Ax1(new Pnt(3, 5, 4), new Dir(1, 0, 0));
            p2 = s1;
            p2.Translate(new Vec(2, 3, 1));
            Assert.AreEqual(m1, p2);
            Assert.AreEqual(m1, p1.Translated(new Vec(2, 3, 1)));

            //            TestContext.WriteLine(string.Format(CultureInfo.InvariantCulture, $"{gp2.Location().x},{gp2.Location().y},{gp2.Location().z} - {gp2.Direction().x},{gp2.Direction().y},{gp2.Direction().z}"));

            Trsf t1 = new Trsf();
            t1.SetRotation(Ax1.OZ, Math.PI / 2);
            p2 = s1;
            Assert.AreEqual("(-2,1,3),(1.11022302462516E-16,1,0)", p2.Transformed(t1).ToString());
            p2.Transform(t1);
            Assert.AreEqual("(-2,1,3),(1.11022302462516E-16,1,0)", p2.ToString());

            var a2 = new Ax2(new Pnt(-1, 2, -3), new Dir(-1, 0, 0));
            p2 = new Ax1(new Pnt(1, 2, 3), new Dir(1, 0, 0));
            Assert.AreEqual("(-3,2,3),(-1,0,0)", p2.Mirrored(a2).ToString());
            p2.Mirror(a2);
            Assert.AreEqual("(-3,2,3),(-1,0,0)", p2.ToString());

       }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ValueType_Ax2()
        {
            Assert.AreEqual(new Ax2(Pnt.Origin, Dir.DZ, Dir.DX), Ax2.XOY);
            Assert.AreEqual(new Ax2(Pnt.Origin, Dir.DX, Dir.DY), Ax2.YOZ);
            Assert.AreEqual(new Ax2(Pnt.Origin, Dir.DY, Dir.DZ), Ax2.ZOX);

            var s1 = new Ax2(new Pnt(1, 2, 3), new Dir(1, 0, 0));
            var s2 = new Ax2(new Pnt(2, 3, 4), new Dir(0, 1, 0));

            Assert.AreEqual(new Pnt(1, 2, 3), s1.Location);
            Assert.AreEqual(new Dir(1, 0, 0), s1.Direction);
            Assert.AreEqual(new Dir(0, 0, 1), s1.XDirection);
            Assert.AreEqual(new Dir(0, -1, 0), s1.YDirection);

            var p2 = s2;
            Assert.IsFalse(s1.IsCoplanar(p2, 0.1, 0.1));
            Assert.IsFalse(s1.IsCoplanar(p2, 0.1, 2.0));
            Assert.IsFalse(s1.IsCoplanar(p2, 0.1, Math.PI / 2));
            Assert.IsTrue(s1.IsCoplanar(p2, 1.0, Math.PI / 2));
            Assert.AreEqual(Math.PI / 2, s1.Angle(p2));

            p2.Location = new Pnt(3, 2, 1);
            Assert.AreEqual(new Pnt(3, 2, 1), p2.Location);
            p2.Direction = new Dir(0, 1, 0);
            Assert.AreEqual(new Dir(0, 1, 0), p2.Direction);
            p2.XDirection = new Dir(0, 0, -1);
            Assert.AreEqual(new Dir(0, 0, -1), p2.XDirection);
            p2.YDirection = new Dir(1, 0, 0);
            Assert.AreEqual(new Dir(1, 0, 0), p2.YDirection);

            var res = new Ax2(new Pnt(1, -2, -3), new Dir(1, 0, 0), new Dir(0, 0, -1));
            p2 = s1;
            Assert.AreEqual(res, p2.Mirrored(new Pnt(1, 0, 0)));
            p2.Mirror(new Pnt(1, 0, 0));
            Assert.AreEqual(res, p2);

            res = new Ax2(new Pnt(1, -2, 3), new Dir(-1, 0, 0), new Dir(0, 0, 1));
            var a2 = new Ax2(new Pnt(1, 0, 0), new Dir(0, 1, 0));
            p2 = s1;
            Assert.AreEqual(res, p2.Mirrored(a2));
            p2.Mirror(a2);
            Assert.AreEqual(res, p2);

            res = new Ax2(new Pnt(1, -2, -3), new Dir(1, 0, 0), new Dir(0, 0, -10));
            var a1 = new Ax1(new Pnt(1, 0, 0), new Dir(1, 0, 0));
            p2 = s1;
            Assert.AreEqual(res, p2.Mirrored(a1));
            p2.Mirror(a1);
            Assert.AreEqual(res, p2);

            res = new Ax2(new Pnt(1, 1, 2), new Dir(1, 0, 0), new Dir(0, -1, 0));
            a1 = new Ax1(new Pnt(2, 2, 2), new Dir(1, 0, 0));
            Assert.IsTrue(res.IsCoplanar(s1.Rotated(a1, Math.PI / 2), 0, 0));
            p2 = s1;
            p2.Rotate(a1, Math.PI / 2);
            Assert.IsTrue(res.IsCoplanar(p2, 0, 0));

            res = new Ax2(new Pnt(-1, 0, 5), new Dir(1, 0, 0));
            p2 = s1;
            Assert.AreEqual(res, p2.Scaled(new Pnt(2, 3, 2), 3));
            p2.Scale(new Pnt(2, 3, 2), 3);
            Assert.AreEqual(res, p2);

            res = new Ax2(new Pnt(-1, -1, 2), new Dir(1, 0, 0));
            p2 = s1;
            Assert.AreEqual(res, p2.Translated(new Pnt(3, 5, 4), new Pnt(1, 2, 3)));
            p2.Translate(new Pnt(3, 5, 4), new Pnt(1, 2, 3));
            Assert.AreEqual(res, p2);

            res = new Ax2(new Pnt(3, 5, 4), new Dir(1, 0, 0));
            p2 = s1;
            Assert.AreEqual(res, p2.Translated(new Vec(2, 3, 1)));
            p2.Translate(new Vec(2, 3, 1));
            Assert.AreEqual(res, p2);

            //gp2.Scaled(new gp_Pnt(2, 3, 2), 3);
            //TestContext.WriteLine(string.Format(CultureInfo.InvariantCulture, $"({gp2.Location().x},{gp2.Location().y},{gp2.Location().z}), ({gp2.XDirection().x},{gp2.XDirection().y},{gp2.XDirection().z}), ({gp2.YDirection().x},{gp2.YDirection().y},{gp2.YDirection().z}), ({gp2.Direction().x},{gp2.Direction().y},{gp2.Direction().z})"));

            //gp_Trsf gt1 = new gp_Trsf();
            //gt1.SetRotation(gp.OZ(), Math.PI / 2);
            //gp2.Transform(gt1);
            //TestContext.WriteLine(string.Format(CultureInfo.InvariantCulture, $"({gp2.Location().x},{gp2.Location().y},{gp2.Location().z}), ({gp2.XDirection().x},{gp2.XDirection().y},{gp2.XDirection().z}), ({gp2.YDirection().x},{gp2.YDirection().y},{gp2.YDirection().z}), ({gp2.Direction().x},{gp2.Direction().y},{gp2.Direction().z})"));

            Trsf t1 = new Trsf();
            t1.SetRotation(Ax1.OZ, Math.PI / 2);
            p2 = s1;
            Assert.AreEqual("(-2,1,3),(0,0,1),(1,-1.11022302462516E-16,0),(1.11022302462516E-16,1,0)", p2.Transformed(t1).ToString());
            p2.Transform(t1);
            Assert.AreEqual("(-2,1,3),(0,0,1),(1,-1.11022302462516E-16,0),(1.11022302462516E-16,1,0)", p2.ToString());
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ValueType_Ax3()
        {
            var s1 = new Ax3(new Pnt(1, 2, 3), new Dir(1, 0, 0));
            var s2 = new Ax3(new Pnt(2, 3, 4), new Dir(0, 1, 0));

            Assert.AreEqual(new Pnt(1, 2, 3), s1.Location);
            Assert.AreEqual(new Dir(1, 0, 0), s1.Direction);
            Assert.AreEqual(new Dir(0, 0, 1), s1.XDirection);
            Assert.AreEqual(new Dir(0, -1, 0), s1.YDirection);

            var p2 = s2;
            Assert.IsFalse(s1.IsCoplanar(p2, 0.1, 0.1));
            Assert.IsFalse(s1.IsCoplanar(p2, 0.1, 2.0));
            Assert.IsFalse(s1.IsCoplanar(p2, 0.1, Math.PI / 2));
            Assert.IsTrue(s1.IsCoplanar(p2, 1.0, Math.PI / 2));
            Assert.AreEqual(Math.PI / 2, s1.Angle(p2));

            p2.Location = new Pnt(3, 2, 1);
            Assert.AreEqual(new Pnt(3, 2, 1), p2.Location);
            p2.Direction = new Dir(0, 1, 0);
            Assert.AreEqual(new Dir(0, 1, 0), p2.Direction);
            p2.XDirection = new Dir(0, 0, -1);
            Assert.AreEqual(new Dir(0, 0, -1), p2.XDirection);
            p2.YDirection = new Dir(1, 0, 0);
            Assert.AreEqual(new Dir(1, 0, 0), p2.YDirection);

            p2.XReverse();
            Assert.AreEqual(new Dir(0, 0, -1), p2.XDirection);
            p2.YReverse();
            Assert.AreEqual(new Dir(-1, 0, 0), p2.YDirection);
            p2.ZReverse();
            Assert.AreEqual(new Dir(0, -1, 0), p2.Direction);

            Assert.IsFalse(p2.Direct());

            var res = new Ax3(new Pnt(1, -2, -3), new Dir(-1, 0, 0), new Dir(0, 0, -1));
            res.YReverse();
            p2 = s1;
            Assert.AreEqual(res, p2.Mirrored(new Pnt(1, 0, 0)));
            p2.Mirror(new Pnt(1, 0, 0));
            Assert.AreEqual(res, p2);

            res = new Ax3(new Pnt(1, -2, 3), new Dir(1, 0, 0), new Dir(0, 0, 1));
            res.YReverse();
            var a2 = new Ax2(new Pnt(1, 0, 0), new Dir(0, 1, 0));
            p2 = s1;
            Assert.AreEqual(res, p2.Mirrored(a2));
            p2.Mirror(a2);
            Assert.AreEqual(res, p2);

            res = new Ax3(new Pnt(1, -2, -3), new Dir(1, 0, 0), new Dir(0, 0, -10));
            var a1 = new Ax1(new Pnt(1, 0, 0), new Dir(1, 0, 0));
            p2 = s1;
            Assert.AreEqual(res, p2.Mirrored(a1));
            p2.Mirror(a1);
            Assert.AreEqual(res, p2);

            res = new Ax3(new Pnt(1, 1, 2), new Dir(1, 0, 0), new Dir(0, -1, 0));
            a1 = new Ax1(new Pnt(2, 2, 2), new Dir(1, 0, 0));
            Assert.IsTrue(res.IsCoplanar(s1.Rotated(a1, Math.PI / 2), 0, 0));
            p2 = s1;
            p2.Rotate(a1, Math.PI / 2);
            Assert.IsTrue(res.IsCoplanar(p2, 0, 0));

            res = new Ax3(new Pnt(-1, 0, 5), new Dir(1, 0, 0));
            p2 = s1;
            Assert.AreEqual(res, p2.Scaled(new Pnt(2, 3, 2), 3));
            p2.Scale(new Pnt(2, 3, 2), 3);
            Assert.AreEqual(res, p2);

            res = new Ax3(new Pnt(-1, -1, 2), new Dir(1, 0, 0));
            p2 = s1;
            Assert.AreEqual(res, p2.Translated(new Pnt(3, 5, 4), new Pnt(1, 2, 3)));
            p2.Translate(new Pnt(3, 5, 4), new Pnt(1, 2, 3));
            Assert.AreEqual(res, p2);

            res = new Ax3(new Pnt(3, 5, 4), new Dir(1, 0, 0));
            p2 = s1;
            Assert.AreEqual(res, p2.Translated(new Vec(2, 3, 1)));
            p2.Translate(new Vec(2, 3, 1));
            Assert.AreEqual(res, p2);

            //gp_Trsf gt1 = new gp_Trsf();
            //gt1.SetRotation(gp.OZ(), Math.PI / 2);
            //gp2.Transform(gt1);
            //TestContext.WriteLine(string.Format(CultureInfo.InvariantCulture, $"({gp2.Location().x},{gp2.Location().y},{gp2.Location().z}),({gp2.XDirection().x},{gp2.XDirection().y},{gp2.XDirection().z}),({gp2.YDirection().x},{gp2.YDirection().y},{gp2.YDirection().z}),({gp2.Direction().x},{gp2.Direction().y},{gp2.Direction().z})"));

            Trsf t1 = new Trsf();
            t1.SetRotation(Ax1.OZ, Math.PI / 2);
            p2 = s1;
            Assert.AreEqual("(-2,1,3),(0,0,1),(1,-1.11022302462516E-16,0),(1.11022302462516E-16,1,0)", p2.Transformed(t1).ToString());
            p2.Transform(t1);
            Assert.AreEqual("(-2,1,3),(0,0,1),(1,-1.11022302462516E-16,0),(1.11022302462516E-16,1,0)", p2.ToString());
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ValueType_Mat()
        {
            Mat m1 = new Mat();
            m1.SetIdentity();
            Mat m2 = new Mat(0, 2, 1, 3, 0, 4, 1, 5, 0);
            Mat res = new Mat(1, 2, 1, 3, 1, 4, 1, 5, 1);
            Assert.AreEqual(res, m1.Added(m2));
            Assert.AreEqual(23, m2.Determinant());
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ValueType_Quaternion()
        {
            Quaternion q1 = new Quaternion(new Vec(1, 0, 0), Math.PI);
            Assert.AreEqual("1,0,0,6.12323399573677E-17", q1.ToString());

            q1 = new Quaternion(new Vec(1, 0, 0), new Vec(1, 2, 0));
            Assert.AreEqual("0,0,0.525731112119134,0.85065080835204", q1.ToString());

            var mat = new Mat();
            mat.SetIdentity();
            q1 = new Quaternion(mat);
            Assert.AreEqual("0,0,0,1", q1.ToString());
            Assert.IsTrue(q1.IsEqual(new Quaternion(0, 0, 0, 1)));
            Assert.AreEqual(mat, q1.GetMatrix());

            q1 = new Quaternion(new Vec(1, 0, 0), Math.PI);
            Vec vec = new Vec();
            double angle = 0;
            q1.GetVectorAndAngle(ref vec, ref angle);
            Assert.AreEqual(Math.PI, angle);
            Assert.AreEqual(new Vec(1, 0, 0), vec);

            q1.SetEulerAngles(EulerSequence.EulerAngles, 1.0, 2.0, 3.0);
            double a = 0;
            double b = 0;
            double c = 0;
            q1.GetEulerAngles(EulerSequence.EulerAngles, ref a, ref b, ref c);
            Assert.AreEqual(1.0, a, 0.0000001);
            Assert.AreEqual(2.0, b, 0.0000001);
            Assert.AreEqual(3.0, c, 0.0000001);

            q1.SetIdent();
            Assert.AreEqual("0,0,0,1", q1.ToString());

            q1.Set(1, 2, 3, 4);
            Assert.AreEqual("1,2,3,4", q1.ToString());

            q1.Set(1, 2, 3, 4);
            Assert.AreEqual("-1,-2,-3,4", q1.Reversed().ToString());
            q1.Reverse();
            Assert.AreEqual("-1,-2,-3,4", q1.ToString());

            q1.Set(1, 2, 3, 4);
            Assert.AreEqual("-0.0333333333333333,-0.0666666666666667,-0.1,0.133333333333333", q1.Inverted().ToString());
            q1.Invert();
            Assert.AreEqual("-0.0333333333333333,-0.0666666666666667,-0.1,0.133333333333333", q1.ToString());
            Assert.AreEqual(0.0333333333333333, q1.SquareNorm(), 0.000000000001);
            Assert.AreEqual(0.182574185835055, q1.Norm(), 0.000000000001);

            q1.Set(1, 2, 3, 4);
            Assert.AreEqual("2,4,6,8", q1.Scaled(2).ToString());
            q1.Scale(2);
            Assert.AreEqual("2,4,6,8", q1.ToString());

            q1.Set(2,2,0,1);
            q1.StabilizeLength();
            Assert.AreEqual("0.4,0.4,0,0.2", q1.ToString());

            q1.Set(2, 2, 0, 1);
            Assert.AreEqual("0.666666666666667,0.666666666666667,0,0.333333333333333", q1.Normalized().ToString());
            q1.Normalize();
            Assert.AreEqual("0.666666666666667,0.666666666666667,0,0.333333333333333", q1.ToString());

            q1.Set(2, 2, 0, 1);
            Assert.AreEqual("-2,-2,0,-1", q1.Negated().ToString());

            q1.Set(1, 2, 3, 4);
            Assert.AreEqual("3,5,7,9", q1.Added(new Quaternion(2,3,4,5)).ToString());
            q1.Add(new Quaternion(2, 3, 4, 5));
            Assert.AreEqual("3,5,7,9", q1.ToString());

            q1.Set(1, 2, 3, 4);
            Assert.AreEqual("3,5,7,9", q1.Subtracted(new Quaternion(-2, -3, -4, -5)).ToString());
            q1.Subtract(new Quaternion(-2, -3, -4, -5));
            Assert.AreEqual("3,5,7,9", q1.ToString());

            q1.Set(1, 2, 3, 4);
            Assert.AreEqual("12,24,30,0", q1.Multiplied(new Quaternion(2, 3, 4, 5)).ToString());
            q1.Multiply(new Quaternion(2, 3, 4, 5));
            Assert.AreEqual("12,24,30,0", q1.ToString());

            q1.Set(1, 2, 3, 1);
            Assert.AreEqual(12, q1.Dot(new Quaternion(2, 2, 1, 3)));
            Assert.AreEqual(2.6192778317837444, q1.GetRotationAngle(), 0.00000000000001);

            q1 = new Quaternion(new Vec(1, 0, 0), Math.PI);
            Assert.AreEqual("1,-2,-3", q1.Multiply(new Vec(1, 2, 3)).ToString());

            //gp_Quaternion gq1 = new gp_Quaternion(new gp_Vec(1, 0, 0), Math.PI);
            //TestContext.WriteLine(string.Format(CultureInfo.InvariantCulture, "{0},{1},{2},{3}", gq1.X(), gq1.Y(), gq1.Z(), gq1.W()));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ValueType_Trsf()
        {
            Trsf m1 = new Trsf();
            m1.SetRotation(Ax1.OZ, Math.PI/2);
            var c1 = new XYZ(10, 5, 2);
            m1.Transforms(ref c1);
            Assert.AreEqual("-5,10,2", c1.ToString());

            Trsf2d m2d = new Trsf2d();
            m2d.SetRotation(Pnt2d.Origin, Math.PI / 2);
            m1 = new Trsf(m2d);
            Assert.AreEqual(TrsfForm.Rotation, m1.Form);
            Assert.AreEqual(Math.PI/2, m1.GetRotation().GetRotationAngle());
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ValueType_Pln()
        {
            Pln p1 = Pln.XOY;
            double a = 0, b = 0, c = 0, d = 0;
            p1.Coefficients(ref a, ref b, ref c, ref d);
            Assert.AreEqual("0,0,1,0", $"{a},{b},{c},{d}");

            p1.Rotate(Ax1.OZ, Math.PI / 2);
            Assert.AreEqual("(0,0,0),(1.11022302462516E-16,1,0)", p1.XAxis.ToString());
        }

        //--------------------------------------------------------------------------------------------------

    }
}
