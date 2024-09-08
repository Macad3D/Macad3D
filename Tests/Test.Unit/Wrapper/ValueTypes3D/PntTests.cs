using System;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper.ValueTypes3D;

[TestFixture]
public class PntTests
{
    [Test]
    public void Origins()
    {
        Assert.AreEqual(new Pnt(0, 0, 0), Pnt.Origin);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsEqual()
    {
        var p1 = new Pnt(1, 2, 3);
        var p2 = new Pnt(4, 5, 6);

        Assert.IsTrue(p1.IsEqual(p2, 5.2));
        Assert.IsFalse(p1.IsEqual(p2, 5.18));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Conversion()
    {
        var p1 = new Pnt(1, 2, 3);
        Assert.AreEqual(new XYZ(1, 2, 3), p1.ToXYZ());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Distance()
    {
        var p1 = new Pnt(1, 2, 3);
        var p2 = new Pnt(4, 5, 6);

        Assert.AreEqual(27, p1.SquareDistance(p2));
        Assert.AreEqual(Math.Sqrt(27), p1.Distance(p2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorPnt()
    {
        var p1 = new Pnt(1, 2, 3);
        Assert.AreEqual(new Pnt(3, 2, 1), p1.Mirrored(new Pnt(2, 2, 2)));
        p1.Mirror(new Pnt(2, 2, 2));
        Assert.AreEqual(new Pnt(3, 2, 1), p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorAx1()
    {
        var m2 = new Ax1(new Pnt(-1, 2, -3), new Dir(-1, 0, 0));
        var p2 = new Pnt(2, 1, 3);
        Assert.AreEqual(new Pnt(2, 3, -9), p2.Mirrored(m2));
        p2.Mirror(m2);
        Assert.AreEqual(new Pnt(2, 3, -9), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorAx2()
    {
        var a2 = new Ax2(new Pnt(-1, 2, -3), new Dir(-1, 0, 0));
        var p2 = new Pnt(2, 1, 3);
        Assert.AreEqual(new Pnt(-4, 1, 3), p2.Mirrored(a2));
        p2.Mirror(a2);
        Assert.AreEqual(new Pnt(-4, 1, 3), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TranslatePntPnt()
    {
        var p1 = new Pnt(1, 2, 3);
        Assert.AreEqual(new Pnt(0, 2, 4), p1.Translated(new Pnt(2, 2, 2), new Pnt(1, 2, 3)));
        p1.Translate(new Pnt(2, 2, 2), new Pnt(1, 2, 3));
        Assert.AreEqual(new Pnt(0, 2, 4), p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TranslateVec()
    {
        var p1 = new Pnt(1, 2, 3);
        Assert.AreEqual(new Pnt(3, 4, 5), p1.Translated(new Vec(2, 2, 2)));
        p1.Translate(new Vec(2, 2, 2));
        Assert.AreEqual(new Pnt(3, 4, 5), p1);
        p1 = new Pnt(2, 1, 3);
        Assert.AreEqual(new Pnt(4, 4, 7), p1.Translated(new Vec(2, 3, 4)));
        p1.Translate(new Vec(2, 3, 4));
        Assert.AreEqual(new Pnt(4, 4, 7), p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Scale()
    {
        var p1 = new Pnt(1, 2, 3);
        Assert.AreEqual(new Pnt(0, 2, 4), p1.Scaled(new Pnt(2, 2, 2), 2));
        p1.Scale(new Pnt(2, 2, 2), 2);
        Assert.AreEqual(new Pnt(0, 2, 4), p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BaryCenter()
    {
        var p1 = new Pnt(0, 2, 4);
        p1.BaryCenter(2, new Pnt(1, 2, 3), 5);
        Assert.IsTrue(p1.IsEqual(new Pnt(0.71428, 2, 3.28571), 0.00001));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Rotate()
    {
        var p2 = new Pnt(2, 1, 3);
        var m2 = new Ax1(new Pnt(-1, 2, -3), new Dir(-1, 0, 0));
        Assert.IsTrue(new Pnt(2, 8, -2).IsEqual(p2.Rotated(m2, Math.PI / 2), 0.0001));
        p2.Rotate(m2, Math.PI / 2);
        Assert.IsTrue(new Pnt(2, 8, -2).IsEqual(p2, 0.0001));
    }

    [Test]
    public void Transform()
    {
        Trsf t1 = new Trsf();
        t1.SetRotation(Ax1.OZ, Math.PI / 2);
        var p2 = new Pnt(4, 5, 6);
        Assert.That(new Pnt(-5, 4, 6).IsEqual(p2.Transformed(t1), 0.000001));
        p2.Transform(t1);
        Assert.That(new Pnt(-5, 4, 6).IsEqual(p2, 0.000001));
    }

    //--------------------------------------------------------------------------------------------------

}