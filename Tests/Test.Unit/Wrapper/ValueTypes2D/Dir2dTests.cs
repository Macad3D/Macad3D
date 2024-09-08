using System;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper.ValueTypes2D;

[TestFixture]
public class Dir2dTests
{
    [Test]
    public void Origins()
    {
        Assert.AreEqual(new Dir2d(1, 0), Dir2d.DX);
        Assert.AreEqual(new Dir2d(0, 1), Dir2d.DY);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsEqual()
    {
        var p1 = new Dir2d(1, 0);
        var p2 = new Dir2d(0, 1);
        Assert.IsFalse(p1.IsEqual(p2, 0.1));
        Assert.IsTrue(p1.IsEqual(p2, Math.PI / 2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsNormal()
    {
        var p1 = new Dir2d(1, 0);
        var p2 = new Dir2d(0, 1);
        Assert.IsTrue(p1.IsNormal(p2, 0.1));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsOpposite()
    {
        var p1 = new Dir2d(1, 0);
        var p2 = new Dir2d(0, 1);
        Assert.IsFalse(p1.IsOpposite(p2, 0.1));
        Assert.IsTrue(p1.IsOpposite(p2, Math.PI / 2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsParallel()
    {
        var p1 = new Dir2d(1, 0);
        var p2 = new Dir2d(0, 1);
        Assert.IsFalse(p1.IsParallel(p2, 0.1));
        Assert.IsTrue(p1.IsParallel(p2, Math.PI / 2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Angle()
    {
        var p1 = new Dir2d(1, 0);
        var p2 = new Dir2d(0, 1);
        Assert.AreEqual(Math.PI / 2, p1.Angle(p2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Cross()
    {
        var p1 = new Dir2d(1, 0);
        Assert.AreEqual(1, p1.Crossed(new Dir2d(0, 1)));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Dot()
    {
        var p1 = new Dir2d(1, 0);
        Assert.AreEqual(Math.Sqrt(2) / 2, p1.Dot(new Dir2d(1, 1)), 0.0000001);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Reverse()
    {
        var p2 = new Dir2d(1, 0);
        Assert.AreEqual(new Dir2d(-1, 0), p2.Reversed());
        p2.Reverse();
        Assert.AreEqual(new Dir2d(-1, 0), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorDir2d()
    {
        var p2 = new Dir2d(1, 0);
        Assert.AreEqual(new Dir2d(-1, 0), p2.Mirrored(new Dir2d(0, 1)));
        p2.Mirror(new Dir2d(0, 1));
        Assert.AreEqual(new Dir2d(-1, 0), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorAx2d()
    {
        var m2 = new Ax2d(new Pnt2d(-1, 2), new Dir2d(-1, 0));
        var p2 = new Dir2d(1, 0);
        Assert.AreEqual(new Dir2d(1, 0), p2.Mirrored(m2));
        p2.Mirror(m2);
        Assert.AreEqual(new Dir2d(1, 0), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Rotate()
    {
        var p2 = new Dir2d(1, 0);
        Assert.IsTrue(new Dir2d(0, 1).IsEqual(p2.Rotated(Math.PI / 2), 0.00001));
        p2.Rotate(Math.PI / 2);
        Assert.IsTrue(new Dir2d(0, 1).IsEqual(p2, 0.0001));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Transform()
    {
        Trsf2d t1 = new Trsf2d();
        t1.SetRotation(new Pnt2d(1, 2), Math.PI / 2);
        var p2 = new Dir2d(0, 1);
        Assert.IsTrue(new Dir2d(-1, 0).IsEqual(p2.Transformed(t1), 0.0001));
        p2.Transform(t1);
        Assert.IsTrue(new Dir2d(-1, 0).IsEqual(p2, 0.0001));
    }
}