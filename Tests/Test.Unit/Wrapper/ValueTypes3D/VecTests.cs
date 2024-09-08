using System;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper.ValueTypes3D;

[TestFixture]
public class VecTests
{
    [Test]
    public void IsEqual()
    {
        var p1 = new Vec(1, 0, 0);
        var p2 = new Vec(0, 1, 0);
        Assert.IsFalse(p1.IsEqual(p2, 0.99, 0.1));
        Assert.IsTrue(p1.IsEqual(p2, 1.01, 0.1));
        Assert.IsTrue(p1.IsEqual(p2, 0.99, Math.PI / 2));

    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsNormal()
    {
        var p1 = new Vec(1, 0, 0);
        var p2 = new Vec(0, 1, 0);
        Assert.IsTrue(p1.IsNormal(p2, 0.1));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsOpposite()
    {
        var p1 = new Vec(1, 0, 0);
        var p2 = new Vec(0, 1, 0);
        Assert.IsFalse(p1.IsOpposite(p2, 0.1));
        Assert.IsTrue(p1.IsOpposite(p2, Math.PI / 2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsParallel()
    {
        var p1 = new Vec(1, 0, 0);
        var p2 = new Vec(0, 1, 0);
        Assert.IsFalse(p1.IsParallel(p2, 0.1));
        Assert.IsTrue(p1.IsParallel(p2, Math.PI / 2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Magnitude()
    {
        var p1 = new Vec(1, 2, 3);
        Assert.AreEqual(14, p1.SquareMagnitude());
        Assert.AreEqual(Math.Sqrt(14), p1.Magnitude());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Add()
    {
        var p1 = new Vec(1, 2, 3);
        Assert.AreEqual(new Vec(2, 4, 6), p1.Added(new Vec(1, 2, 3)));
        p1.Add(new Vec(1, 2, 3));
        Assert.AreEqual(new Vec(2, 4, 6), p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Subtract()
    {
        var p1 = new Vec(1, 2, 3);
        Assert.AreEqual(new Vec(-2, 0, 2), p1.Subtracted(new Vec(3, 2, 1)));
        p1.Subtract(new Vec(3, 2, 1));
        Assert.AreEqual(new Vec(-2, 0, 2), p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Cross()
    {
        var p1 = new Vec(1, 2, 3);
        Assert.AreEqual(Math.Sqrt(96), p1.CrossMagnitude(new Vec(3, 2, 1)));
        Assert.AreEqual(96, p1.CrossSquareMagnitude(new Vec(3, 2, 1)));
        Assert.AreEqual(new Vec(-4, 8, -4), p1.Crossed(new Vec(3, 2, 1)));
        p1.Cross(new Vec(3, 2, 1));
        Assert.AreEqual(new Vec(-4, 8, -4), p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CrossCross()
    {
        var p1 = new Vec(1, 2, 3);
        Assert.AreEqual(new Vec(-24, -6, 12), p1.CrossCrossed(new Vec(1, 2, 3), new Vec(4, 5, 6)));
        p1.CrossCross(new Vec(1, 2, 3), new Vec(4, 5, 6));
        Assert.AreEqual(new Vec(-24, -6, 12), p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Dot()
    {
        var p1 = new Vec(1, 2, 3);
        Assert.AreEqual(14, p1.Dot(new Vec(1, 2, 3)));
        Assert.AreEqual(0, p1.DotCross(new Vec(4, 5, 6), new Vec(4, 5, 6)));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Divide()
    {
        var p1 = new Vec(1, 2, 3);
        Assert.AreEqual(new Vec(0.5, 1, 1.5), p1.Divided(2));
        p1.Divide(2);
        Assert.AreEqual(new Vec(0.5, 1, 1.5), p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Multiply()
    {
        var p1 = new Vec(1, 2, 3);
        Assert.AreEqual(new Vec(2, 4, 6), p1.Multiplied(2));
        p1.Multiply(2);
        Assert.AreEqual(new Vec(2, 4, 6), p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Scale()
    {
        var p1 = new Vec(1, 2, 3);
        Assert.AreEqual(new Vec(2, 4, 6), p1.Scaled(2));
        p1.Scale(2);
        Assert.AreEqual(new Vec(2, 4, 6), p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Normalize()
    {
        var p1 = new Vec(1, 2, 3);
        Assert.IsTrue(p1.Normalized().IsEqual(new Vec(0.26726, 0.53452, 0.80178), 0.00001, 0.00001));
        p1.Normalize();
        Assert.IsTrue(p1.IsEqual(new Vec(0.26726, 0.53452, 0.80178), 0.00001, 0.00001));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Reverse()
    {
        var p1 = new Vec(1, 2, 3);
        Assert.AreEqual(new Vec(-1, -2, -3), p1.Reversed());
        p1.Reverse();
        Assert.AreEqual(new Vec(-1, -2, -3), p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SetLinearForm()
    {
        var p2 = new Vec();
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
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorVec()
    {
        var p1 = new Vec(2, 0, 0);
        p1.Mirror(new Vec(0, 1, 0));
        Assert.AreEqual(new Vec(-2, 0, 0), p1);
        Assert.AreEqual(new Vec(2, 0, 0), p1.Mirrored(new Vec(0, 1, 0)));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorAx1()
    {
        var m2 = new Ax1(new Pnt(-1, 2, -3), new Dir(-1, 0, 0));
        var p2 = new Vec(2, 1, 3);
        Assert.AreEqual(new Vec(2, -1, -3), p2.Mirrored(m2));
        p2.Mirror(m2);
        Assert.AreEqual(new Vec(2, -1, -3), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorAx2()
    {
        var a2 = new Ax2(new Pnt(-1, 2, -3), new Dir(-1, 0, 0));
        var p2 = new Vec(2, 1, 3);
        Assert.That(new Vec(-2, 1, 3).IsEqual(p2.Mirrored(a2), 0.000001, 0.0001));
        p2.Mirror(a2);
        Assert.That(new Vec(-2, 1, 3).IsEqual(p2, 0.000001, 0.0001));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Rotate()
    {
        var m2 = new Ax1(new Pnt(-1, 2, -3), new Dir(-1, 0, 0));
        var p2 = new Vec(2, 1, 3);
        Assert.IsTrue(new Vec(2, 3, -1).IsEqual(p2.Rotated(m2, Math.PI / 2), 0.0001, 0.0001));
        p2.Rotate(m2, Math.PI / 2);
        Assert.IsTrue(new Vec(2, 3, -1).IsEqual(p2, 0.0001, 0.0001));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Transform()
    {
        Trsf t1 = new Trsf();
        t1.SetRotation(Ax1.OZ, Math.PI / 2);
        var p2 = new Vec(4, 5, 6);
        Assert.That(new Vec(-5, 4, 6).IsEqual(p2.Transformed(t1), 0.000001, 0.0001));
        p2.Transform(t1);
        Assert.That(new Vec(-5, 4, 6).IsEqual(p2, 0.000001, 0.0001));
    }

    //--------------------------------------------------------------------------------------------------

}