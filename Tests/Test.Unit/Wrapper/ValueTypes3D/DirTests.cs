using System;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper.ValueTypes3D;

[TestFixture]
public class DirTests
{
    [Test]
    public void Origins()
    {
        Assert.AreEqual(new Dir(1, 0, 0), Dir.DX);
        Assert.AreEqual(new Dir(0, 1, 0), Dir.DY);
        Assert.AreEqual(new Dir(0, 0, 1), Dir.DZ);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsEqual()
    {
        var p1 = new Dir(1, 0, 0);
        var p2 = new Dir(0, 1, 0);
        Assert.IsFalse(p1.IsEqual(p2, 0.1));
        Assert.IsTrue(p1.IsEqual(p2, Math.PI / 2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsNormal()
    {
        var p1 = new Dir(1, 0, 0);
        var p2 = new Dir(0, 1, 0);
        Assert.IsTrue(p1.IsNormal(p2, 0.1));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsOpposite()
    {
        var p1 = new Dir(1, 0, 0);
        var p2 = new Dir(0, 1, 0);
        Assert.IsFalse(p1.IsOpposite(p2, 0.1));
        Assert.IsTrue(p1.IsOpposite(p2, Math.PI / 2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsParallel()
    {
        var p1 = new Dir(1, 0, 0);
        var p2 = new Dir(0, 1, 0);
        Assert.IsFalse(p1.IsParallel(p2, 0.1));
        Assert.IsTrue(p1.IsParallel(p2, Math.PI / 2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Angle()
    {
        var p1 = new Dir(1, 0, 0);
        var p2 = new Dir(0, 1, 0);
        Assert.AreEqual(Math.PI / 2, p1.Angle(p2));
        Assert.AreEqual(Math.PI / 2, p1.AngleWithRef(p2, new Dir(0, 0, 1)));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Cross()
    {
        var p1 = new Dir(1, 0, 0);
        Assert.AreEqual(new Dir(0, 0, 1), p1.Crossed(new Dir(0, 1, 0)));
        p1.Cross(new Dir(0, 1, 0));
        Assert.AreEqual(new Dir(0, 0, 1), p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CrossCross()
    {
        var p1 = new Dir(1, 0, 0);
        Assert.AreEqual(new Dir(0, 1, 0), p1.CrossCrossed(new Dir(0, 1, 0), new Dir(1, 0, 1)));
        p1.CrossCross(new Dir(0, 1, 0), new Dir(1, 0, 1));
        Assert.AreEqual(new Dir(0, 1, 0), p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Dot()
    {
        var p1 = new Dir(1, 0, 0);
        Assert.AreEqual(Math.Sqrt(2) / 2, p1.Dot(new Dir(1, 1, 0)), 0.0000001);
        Assert.AreEqual(Math.Sqrt(2) / 2, p1.DotCross(new Dir(0, 1, 0), new Dir(1, 0, 1)), 0.0000001);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Reverse()
    {
        var p1 = new Dir(1, 0, 0);
        Assert.AreEqual(new Dir(-1, 0, 0), p1.Reversed());
        p1.Reverse();
        Assert.AreEqual(new Dir(-1, 0, 0), p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorDir()
    {
        var p1 = new Dir(1, 0, 0);
        Assert.AreEqual(new Dir(-1, 0, 0), p1.Mirrored(new Dir(0, 1, 0)));
        p1.Mirror(new Dir(0, 1, 0));
        Assert.AreEqual(new Dir(-1, 0, 0), p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorAx1()
    {
        var m2 = new Ax1(new Pnt(-1, 2, -3), new Dir(-1, 0, 0));
        var p1 = new Dir(1, 0, 0);
        Assert.AreEqual(new Dir(1, 0, 0), p1.Mirrored(m2));
        p1.Mirror(m2);
        Assert.AreEqual(new Dir(1, 0, 0), p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorAx2()
    {
        var a2 = new Ax2(new Pnt(-1, 2, -3), new Dir(-1, 0, 0));
        var p1 = new Dir(1, 0, 0);
        Assert.AreEqual(new Dir(-1, 0, 0), p1.Mirrored(a2));
        p1.Mirror(a2);
        Assert.AreEqual(new Dir(-1, 0, 0), p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Rotate()
    {
        var p1 = new Dir(1, 0, 0);
        var m2 = new Ax1(new Pnt(-1, 2, -3), new Dir(-1, 0, 0));
        Assert.AreEqual(new Dir(1, 0, 0), p1.Rotated(m2, Math.PI / 2));
        p1.Rotate(m2, Math.PI / 2);
        Assert.AreEqual(new Dir(1, 0, 0), p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Transform()
    {
        Trsf t1 = new Trsf();
        t1.SetRotation(Ax1.OZ, Math.PI / 2);
        var p2 = new Dir(0, 1, 0);
        Assert.That(new Dir(-1, 0, 0).IsEqual(p2.Transformed(t1), 0.0001));
        p2.Transform(t1);
        Assert.That(new Dir(-1, 0, 0).IsEqual(p2, 0.0001));
    }
}