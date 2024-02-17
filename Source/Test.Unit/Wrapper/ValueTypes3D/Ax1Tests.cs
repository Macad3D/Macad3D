using System;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper.ValueTypes3D;

[TestFixture]
public class Ax1Tests
{
    [Test]
    public void Origins()
    {
        Assert.AreEqual(new Ax1(Pnt.Origin, Dir.DX), Ax1.OX);
        Assert.AreEqual(new Ax1(Pnt.Origin, Dir.DY), Ax1.OY);
        Assert.AreEqual(new Ax1(Pnt.Origin, Dir.DZ), Ax1.OZ);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsCoaxial()
    {
        var p1 = new Ax1(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        var p2 = new Ax1(new Pnt(2, 3, 4), new Dir(0, 1, 0));
        Assert.IsFalse(p1.IsCoaxial(p2, 0.1, 0.1));
        Assert.IsFalse(p1.IsCoaxial(p2, Math.PI / 2, 0.1));
        Assert.IsTrue(p1.IsCoaxial(p2, Math.PI / 2, 2.0));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsNormal()
    {
        var p1 = new Ax1(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        var p2 = new Ax1(new Pnt(2, 3, 4), new Dir(0, 1, 0));
        Assert.IsTrue(p1.IsNormal(p2, 0.1));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsOpposite()
    {
        var p1 = new Ax1(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        var p2 = new Ax1(new Pnt(2, 3, 4), new Dir(0, 1, 0));
        Assert.IsFalse(p1.IsOpposite(p2, 0.1));
        Assert.IsTrue(p1.IsOpposite(p2, Math.PI / 2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsParallel()
    {
        var p1 = new Ax1(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        var p2 = new Ax1(new Pnt(2, 3, 4), new Dir(0, 1, 0));
        Assert.IsFalse(p1.IsParallel(p2, 0.1));
        Assert.IsTrue(p1.IsParallel(p2, Math.PI / 2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Angle()
    {
        var p1 = new Ax1(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        var p2 = new Ax1(new Pnt(2, 3, 4), new Dir(0, 1, 0)); 
        Assert.AreEqual(Math.PI / 2, p1.Angle(p2)); 
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Reverse()
    {
        var m1 = new Ax1(new Pnt(1, 2, 3), new Dir(-1, 0, 0));
        var p1 = new Ax1(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        Assert.AreEqual(m1, p1.Reversed());
        p1.Reverse();
        Assert.AreEqual(m1, p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorPnt()
    {
        var m1 = new Ax1(new Pnt(-1, 0, -3), new Dir(-1, 0, 0));
        var p1 = new Ax1(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        Assert.AreEqual(m1, p1.Mirrored(new Pnt(0, 1, 0)));
        p1.Mirror(new Pnt(0, 1, 0));
        Assert.AreEqual(m1, p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorAx1()
    {
        var m1 = new Ax1(new Pnt(-1, 2, -3), new Dir(-1, 0, 0));
        var m2 = new Ax1(new Pnt(0, 1, 0), new Dir(0, 1, 0));
        var p1 = new Ax1(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        Assert.AreEqual(m1, p1.Mirrored(m2));
        Assert.AreEqual(m1, p1.Mirrored(m2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorAx2()
    {
        var a2 = new Ax2(new Pnt(-1, 2, -3), new Dir(-1, 0, 0));
        var p2 = new Ax1(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        Assert.That(new Pnt(-3, 2, 3).IsEqual(p2.Mirrored(a2).Location, 0.0000001));
        Assert.That(new Dir(-1, 0, 0).IsEqual(p2.Mirrored(a2).Direction, 0.0000001));
        p2.Mirror(a2);
        Assert.That(new Pnt(-3, 2, 3).IsEqual(p2.Location, 0.0000001));
        Assert.That(new Dir(-1, 0, 0).IsEqual(p2.Direction, 0.0000001));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Rotate()
    {
        var m1 = new Ax1(new Pnt(3, 2, -1), new Dir(0, 0, -1));
        var m2 = new Ax1(new Pnt(0, 1, 0), new Dir(0, 1, 0));
        var p1 = new Ax1(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        Assert.IsTrue(m1.IsCoaxial(p1.Rotated(m2, Math.PI / 2), 0.0001, 0.001));
        p1.Rotate(m2, Math.PI / 2);
        Assert.IsTrue(m1.IsCoaxial(p1, 0.0001, 0.001));

    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void Scale()
    {
        var m1 = new Ax1(new Pnt(-1, 0, 5), new Dir(1, 0, 0));
        var p1 = new Ax1(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        Assert.AreEqual(m1, p1.Scaled(new Pnt(2, 3, 2), 3));
        p1.Scale(new Pnt(2, 3, 2), 3);
        Assert.AreEqual(m1, p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TranslatePntPnt()
    {
        var m1 = new Ax1(new Pnt(-1, -1, 2), new Dir(1, 0, 0));
        var p1 = new Ax1(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        Assert.AreEqual(m1, p1.Translated(new Pnt(3, 5, 4), new Pnt(1, 2, 3)));
        p1.Translate(new Pnt(3, 5, 4), new Pnt(1, 2, 3));
        Assert.AreEqual(m1, p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TranslateVec()
    {
        var m1 = new Ax1(new Pnt(3, 5, 4), new Dir(1, 0, 0));
        var p1 = new Ax1(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        Assert.AreEqual(m1, p1.Translated(new Vec(2, 3, 1)));
        p1.Translate(new Vec(2, 3, 1));
        Assert.AreEqual(m1, p1);

    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Transform()
    {
        Trsf t1 = new Trsf();
        t1.SetRotation(Ax1.OZ, Math.PI / 2);
        var p1 = new Ax1(new Pnt(1, 2, 3), new Dir(1, 0, 0));
        Assert.That(new Pnt(-2, 1, 3).IsEqual(p1.Transformed(t1).Location, 0.0000001));
        Assert.That(new Dir(0, 1, 0).IsEqual(p1.Transformed(t1).Direction, 0.0000001));
        p1.Transform(t1);
        Assert.That(new Pnt(-2, 1, 3).IsEqual(p1.Location, 0.0000001));
        Assert.That(new Dir(0, 1, 0).IsEqual(p1.Direction, 0.0000001));

    }
}