using System;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper.ValueTypes3D;

[TestFixture]
public class XYZTests
{
    [Test]
    public void IsEqual()
    {
        var p1 = new XYZ(1, 2, 3);
        var p2 = new XYZ(4, 5, 6);
        Assert.IsTrue(p1.IsEqual(p2, 3));
        Assert.IsFalse(p1.IsEqual(p2, 2.99));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Modulus()
    {
        var p1 = new XYZ(1, 2, 3);
        Assert.AreEqual(14, p1.SquareModulus());
        Assert.AreEqual(Math.Sqrt(14), p1.Modulus());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Add()
    {
        var p1 = new XYZ(1, 2, 3);
        Assert.AreEqual(new XYZ(2, 4, 6), p1.Added(new XYZ(1, 2, 3)));
        Assert.AreEqual(new XYZ(2, 4, 6), p1 + new XYZ(1, 2, 3));
        p1.Add(new XYZ(1, 2, 3));
        Assert.AreEqual(new XYZ(2, 4, 6), p1);
        p1 += new XYZ(1, 2, 3);
        Assert.AreEqual(new XYZ(3, 6, 9), p1);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Cross()
    {
        var p1 = new XYZ(1, 2, 3);
        Assert.AreEqual(new XYZ(-4, 8, -4), p1.Crossed(new XYZ(3, 2, 1)));
        p1.Cross(new XYZ(3, 2, 1));
        Assert.AreEqual(new XYZ(-4, 8, -4), p1);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CrossMagnitude()
    {
        var p1 = new XYZ(1, 2, 3);
        Assert.AreEqual(Math.Sqrt(96), p1.CrossMagnitude(new XYZ(3, 2, 1)));
        Assert.AreEqual(96, p1.CrossSquareMagnitude(new XYZ(3, 2, 1)));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CrossCross()
    {
        var p1 = new XYZ(1, 2, 3);
        Assert.AreEqual(new XYZ(-24, -6, 12), p1.CrossCrossed(new XYZ(1, 2, 3), new XYZ(4, 5, 6)));
        p1.CrossCross(new XYZ(1, 2, 3), new XYZ(4, 5, 6));
        Assert.AreEqual(new XYZ(-24, -6, 12), p1);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DivideScalar()
    {
        var p1 = new XYZ(1, 2, 3);
        Assert.AreEqual(new XYZ(0.5, 1, 1.5), p1.Divided(2));
        p1.Divide(2);
        Assert.AreEqual(new XYZ(0.5, 1, 1.5), p1);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Dot()
    {
        var p1 = new XYZ(1, 2, 3);
        Assert.AreEqual(14, p1.Dot(new XYZ(1, 2, 3)));
        Assert.AreEqual(0, p1.DotCross(new XYZ(4, 5, 6), new XYZ(4, 5, 6)));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultiplyScalar()
    {
        var p1 = new XYZ(1, 2, 3);
        Assert.AreEqual(new XYZ(2, 4, 6), p1.Multiplied(2));
        Assert.AreEqual(new XYZ(2, 4, 6), p1 * 2);
        p1.Multiply(2);
        Assert.AreEqual(new XYZ(2, 4, 6), p1);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultiplyXYZ()
    {
        var p1 = new XYZ(1, 2, 3);
        Assert.AreEqual(new XYZ(1, 4, 9), p1.Multiplied(new XYZ(1, 2, 3)));
        Assert.AreEqual(new XYZ(1, 4, 9), p1 * new XYZ(1, 2, 3));
        p1.Multiply(new XYZ(1, 2, 3));
        Assert.AreEqual(new XYZ(1, 4, 9), p1);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultiplyMat()
    {
        var m1 = new Mat();
        m1.SetRotation(Dir.DZ.Coord, Math.PI / 2);
        var p1 = new XYZ(4, 5, 6);
        var p3 = p1.Multiplied(m1);
        Assert.AreEqual(-5.0, p3.X, 0.0000001);
        Assert.AreEqual(4.0, p3.Y, 0.0000001);
        Assert.AreEqual(6.0, p3.Z, 0.0000001);
        p3 = p1 * m1;
        Assert.AreEqual(-5.0, p3.X, 0.0000001);
        Assert.AreEqual(4.0, p3.Y, 0.0000001);
        Assert.AreEqual(6.0, p3.Z, 0.0000001);
        p1.Multiply(m1);
        Assert.AreEqual(-5.0, p1.X, 0.0000001);
        Assert.AreEqual(4.0, p1.Y, 0.0000001);
        Assert.AreEqual(6.0, p1.Z, 0.0000001);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Normalize()
    {
        var p1 = new XYZ(1, 2, 3);
        Assert.IsTrue(p1.Normalized().IsEqual(new XYZ(0.26726, 0.53452, 0.80178), 0.00001));
        p1.Normalize();
        Assert.IsTrue(p1.IsEqual(new XYZ(0.26726, 0.53452, 0.80178), 0.00001));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Reverse()
    {
        var p1 = new XYZ(1, 2, 3);
        Assert.AreEqual(new XYZ(-1, -2, -3), p1.Reversed());
        p1.Reverse();
        Assert.AreEqual(new XYZ(-1, -2, -3), p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Subtract()
    {
        var p1 = new XYZ(1, 2, 3);
        Assert.AreEqual(new XYZ(-2, 0, 2), p1.Subtracted(new XYZ(3, 2, 1)));
        Assert.AreEqual(new XYZ(-2, 0, 2), p1 - new XYZ(3, 2, 1));
        p1.Subtract(new XYZ(3, 2, 1));
        Assert.AreEqual(new XYZ(-2, 0, 2), p1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SetLinearForm()
    {
        XYZ p2 = new XYZ();
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
}