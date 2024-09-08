using System;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper.ValueTypes2D;

[TestFixture]
public class Ax22dTests
{
    [Test]
    public void Components()
    {
        var p1 = new Ax22d(new Pnt2d(1, 2), new Dir2d(1, 0));
        var p2 = new Ax22d(new Pnt2d(2, 3), new Dir2d(0, 1));

        Assert.AreEqual(new Pnt2d(1, 2), p1.Location);
        Assert.AreEqual(new Dir2d(1, 0), p1.XDirection);
        Assert.AreEqual(new Dir2d(0, 1), p1.YDirection);

        p2.Location = new Pnt2d(3, 2);
        Assert.AreEqual(new Pnt2d(3, 2), p2.Location);
        p2.XDirection = new Dir2d(0, -1);
        Assert.AreEqual(new Dir2d(0, -1), p2.XDirection);
        p2.YDirection = new Dir2d(1, 0);
        Assert.AreEqual(new Dir2d(1, 0), p2.YDirection);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorPnt2d()
    {
        var res = new Ax22d(new Pnt2d(-1, 0), new Dir2d(-1, 0));
        var p2 = new Ax22d(new Pnt2d(1, 2), new Dir2d(1, 0));
        Assert.AreEqual(res, p2.Mirrored(new Pnt2d(0, 1)));
        p2.Mirror(new Pnt2d(0, 1));
        Assert.AreEqual(res, p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorAx2d()
    {
        var res = new Ax22d(new Pnt2d(-1, 2), new Dir2d(-1, 0), new Dir2d(0, 1));
        var m2 = new Ax2d(new Pnt2d(0, 1), new Dir2d(0, 1));
        var p2 = new Ax22d(new Pnt2d(1, 2), new Dir2d(1, 0));
        Assert.AreEqual(res, p2.Mirrored(m2));
        p2.Mirror(m2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Rotate()
    {
        var p2 = new Ax22d(new Pnt2d(1, 2), new Dir2d(1, 0));
        var p3 = p2.Rotated(new Pnt2d(1, 2), Math.PI / 2);
        Assert.That(new Pnt2d(1,2).IsEqual(p3.Location, 0.000001));
        Assert.That(new Dir2d(0,1).IsEqual(p3.XDirection, 0.000001));
        Assert.That(new Dir2d(-1,0).IsEqual(p3.YDirection, 0.000001));

        p2.Rotate(new Pnt2d(1, 2), Math.PI / 2);
        Assert.That(new Pnt2d(1,2).IsEqual(p2.Location, 0.000001));
        Assert.That(new Dir2d(0,1).IsEqual(p2.XDirection, 0.000001));
        Assert.That(new Dir2d(-1,0).IsEqual(p2.YDirection, 0.000001));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Scale()
    {
        var res = new Ax22d(new Pnt2d(-1, 0), new Dir2d(1, 0));
        var p2 = new Ax22d(new Pnt2d(1, 2), new Dir2d(1, 0));
        Assert.AreEqual(res, p2.Scaled(new Pnt2d(2, 3), 3));
        p2.Scale(new Pnt2d(2, 3), 3);
        Assert.AreEqual(res, p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TranslatePnt2dPnt2d()
    {
        var res = new Ax22d(new Pnt2d(-1, -1), new Dir2d(1, 0));
        var p2 = new Ax22d(new Pnt2d(1, 2), new Dir2d(1, 0));
        Assert.AreEqual(res, p2.Translated(new Pnt2d(3, 5), new Pnt2d(1, 2)));
        p2.Translate(new Pnt2d(3, 5), new Pnt2d(1, 2));
        Assert.AreEqual(res, p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TranslateVec2d()
    {
        var res = new Ax22d(new Pnt2d(3, 5), new Dir2d(1, 0));
        var p2 = new Ax22d(new Pnt2d(1, 2), new Dir2d(1, 0));
        Assert.AreEqual(res, p2.Translated(new Vec2d(2, 3)));
        p2.Translate(new Vec2d(2, 3));
        Assert.AreEqual(res, p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Transform()
    {
        Trsf2d t1 = new Trsf2d();
        t1.SetRotation(new Pnt2d(1, 2), Math.PI / 2);
        var p2 = new Ax22d(new Pnt2d(1, 2), new Dir2d(1, 0));
        var p3 = p2.Transformed(t1);
        Assert.That(new Pnt2d(1,2).IsEqual(p3.Location, 0.000001));
        Assert.That(new Dir2d(0,1).IsEqual(p3.XDirection, 0.000001));
        Assert.That(new Dir2d(-1,0).IsEqual(p3.YDirection, 0.000001));
        p2.Transform(t1);
        Assert.That(new Pnt2d(1,2).IsEqual(p2.Location, 0.000001));
        Assert.That(new Dir2d(0,1).IsEqual(p2.XDirection, 0.000001));
        Assert.That(new Dir2d(-1,0).IsEqual(p2.YDirection, 0.000001));
    }
}