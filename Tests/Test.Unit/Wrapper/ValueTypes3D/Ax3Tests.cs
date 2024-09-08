using System;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper.ValueTypes3D;

[TestFixture]
public class Ax3Tests
{
    [Test]
    public void Components()
    {
        var p1 = new Ax3(new Pnt(1, 2, 3), new Dir(1, 0, 0));

        Assert.AreEqual(new Pnt(1, 2, 3), p1.Location);
        Assert.AreEqual(new Dir(1, 0, 0), p1.Direction);
        Assert.AreEqual(new Dir(0, 0, 1), p1.XDirection);
        Assert.AreEqual(new Dir(0, -1, 0), p1.YDirection);
            
        p1.Location = new Pnt(3, 2, 1);
        Assert.AreEqual(new Pnt(3, 2, 1), p1.Location);
        p1.Direction = new Dir(0, 1, 0);
        Assert.AreEqual(new Dir(0, 1, 0), p1.Direction);
        p1.XDirection = new Dir(0, 0, -1);
        Assert.AreEqual(new Dir(0, 0, -1), p1.XDirection);
        p1.YDirection = new Dir(1, 0, 0);
        Assert.AreEqual(new Dir(1, 0, 0), p1.YDirection);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsCoplanar()
    {
        var p1 = new Ax3(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        var p2 = new Ax3(new Pnt(2, 3, 4), new Dir(0, 1, 0));
        Assert.IsFalse(p1.IsCoplanar(p2, 0.1, 0.1));
        Assert.IsFalse(p1.IsCoplanar(p2, 0.1, 2.0));
        Assert.IsFalse(p1.IsCoplanar(p2, 0.1, Math.PI / 2));
        Assert.IsTrue(p1.IsCoplanar(p2, 1.0, Math.PI / 2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Direct()
    {
        var p2 = new Ax3(new Pnt(2, 3, 4), new Dir(0, 1, 0));
        p2.XReverse();
        p2.YReverse();
        p2.ZReverse();
        Assert.IsFalse(p2.Direct());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Angle()
    {
        var p1 = new Ax3(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        var p2 = new Ax3(new Pnt(2, 3, 4), new Dir(0, 1, 0));
        Assert.AreEqual(Math.PI / 2, p1.Angle(p2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Reverse()
    {
        var p2 = new Ax3(new Pnt(2, 3, 4), new Dir(0, 1, 0));
        p2.XReverse();
        Assert.AreEqual(new Dir(0, 0, -1), p2.XDirection);
        p2.YReverse();
        Assert.AreEqual(new Dir(-1, 0, 0), p2.YDirection);
        p2.ZReverse();
        Assert.AreEqual(new Dir(0, -1, 0), p2.Direction);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorPnt()
    {
        var res = new Ax3(new Pnt(1, -2, -3), new Dir(-1, 0, 0), new Dir(0, 0, -1));
        res.YReverse();
        var p2 = new Ax3(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        Assert.AreEqual(res, p2.Mirrored(new Pnt(1, 0, 0)));
        p2.Mirror(new Pnt(1, 0, 0));
        Assert.AreEqual(res, p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorAx1()
    {
        var res = new Ax3(new Pnt(1, -2, -3), new Dir(1, 0, 0), new Dir(0, 0, -10));
        var a1 = new Ax1(new Pnt(1, 0, 0), new Dir(1, 0, 0));
        var p2 = new Ax3(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        Assert.AreEqual(res, p2.Mirrored(a1));
        p2.Mirror(a1);
        Assert.AreEqual(res, p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorAx2()
    {
        var res = new Ax3(new Pnt(1, -2, 3), new Dir(1, 0, 0), new Dir(0, 0, 1));
        res.YReverse();
        var a2 = new Ax2(new Pnt(1, 0, 0), new Dir(0, 1, 0));
        var p2 = new Ax3(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        Assert.AreEqual(res, p2.Mirrored(a2));
        p2.Mirror(a2);
        Assert.AreEqual(res, p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Rotate()
    {
        var res = new Ax3(new Pnt(1, 1, 2), new Dir(1, 0, 0), new Dir(0, -1, 0));
        var a1 = new Ax1(new Pnt(2, 2, 2), new Dir(1, 0, 0));
        var p2 = new Ax3(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        Assert.IsTrue(res.IsCoplanar(p2.Rotated(a1, Math.PI / 2), 0, 0));
        p2.Rotate(a1, Math.PI / 2);
        Assert.IsTrue(res.IsCoplanar(p2, 0, 0));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Scale()
    {
        var res = new Ax3(new Pnt(-1, 0, 5), new Dir(1, 0, 0));
        var p2 = new Ax3(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        Assert.AreEqual(res, p2.Scaled(new Pnt(2, 3, 2), 3));
        p2.Scale(new Pnt(2, 3, 2), 3);
        Assert.AreEqual(res, p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TranslatePnt()
    {
        var res = new Ax3(new Pnt(-1, -1, 2), new Dir(1, 0, 0));
        var p2 = new Ax3(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        Assert.AreEqual(res, p2.Translated(new Pnt(3, 5, 4), new Pnt(1, 2, 3)));
        p2.Translate(new Pnt(3, 5, 4), new Pnt(1, 2, 3));
        Assert.AreEqual(res, p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TranslateVec()
    {
        var res = new Ax3(new Pnt(3, 5, 4), new Dir(1, 0, 0));
        var p2 = new Ax3(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        Assert.AreEqual(res, p2.Translated(new Vec(2, 3, 1)));
        p2.Translate(new Vec(2, 3, 1));
        Assert.AreEqual(res, p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Transform()
    {
        Trsf t1 = new Trsf();
        t1.SetRotation(Ax1.OZ, Math.PI / 2);
        var p2 = new Ax3(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        var p3 = p2.Transformed(t1);
        Assert.That(new Pnt(-2, 1, 3).IsEqual(p3.Location, 0.0000001));
        Assert.That(new Dir(0, 0, 1).IsEqual(p3.XDirection, 0.0000001));
        Assert.That(new Dir(1, 0, 0).IsEqual(p3.YDirection, 0.0000001));
        Assert.That(new Dir(0, 1, 0).IsEqual(p3.Direction, 0.0000001));
        p2.Transform(t1);
        Assert.That(new Pnt(-2, 1, 3).IsEqual(p2.Location, 0.0000001));
        Assert.That(new Dir(0, 0, 1).IsEqual(p2.XDirection, 0.0000001));
        Assert.That(new Dir(1, 0, 0).IsEqual(p2.YDirection, 0.0000001));
        Assert.That(new Dir(0, 1, 0).IsEqual(p2.Direction, 0.0000001));
    }
}