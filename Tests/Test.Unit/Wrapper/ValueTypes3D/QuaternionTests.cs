using System;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper.ValueTypes3D;

[TestFixture]
public class QuaternionTests
{
    [Test]
    public void Components()
    {
        Quaternion q1 = new Quaternion(new Vec(1, 0, 0), Math.PI);
        Assert.AreEqual(1.0, q1.X, 0.000001);
        Assert.AreEqual(0.0, q1.Y, 0.000001);
        Assert.AreEqual(0.0, q1.Z, 0.000001);
        Assert.AreEqual(0.0, q1.W, 0.000001);

        q1 = new Quaternion(new Vec(1, 0, 0), new Vec(1, 2, 0));
        Assert.AreEqual(0.0, q1.X, 0.000001);
        Assert.AreEqual(0.0, q1.Y, 0.000001);
        Assert.AreEqual(0.525731112, q1.Z, 0.000001);
        Assert.AreEqual(0.8506508083, q1.W, 0.000001);

        q1.Set(1, 2, 3, 4);
        Assert.AreEqual(1.0, q1.X, 0.000001);
        Assert.AreEqual(2.0, q1.Y, 0.000001);
        Assert.AreEqual(3.0, q1.Z, 0.000001);
        Assert.AreEqual(4.0, q1.W, 0.000001);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Identity()
    {
        var q1 = new Quaternion();
        q1.SetIdent();
        Assert.AreEqual(0.0, q1.X, 0.000001);
        Assert.AreEqual(0.0, q1.Y, 0.000001);
        Assert.AreEqual(0.0, q1.Z, 0.000001);
        Assert.AreEqual(1.0, q1.W, 0.000001);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FromMat()
    {
        var mat = new Mat();
        mat.SetIdentity();
        var q1 = new Quaternion(mat);
        Assert.AreEqual(0.0, q1.X, 0.000001);
        Assert.AreEqual(0.0, q1.Y, 0.000001);
        Assert.AreEqual(0.0, q1.Z, 0.000001);
        Assert.AreEqual(1.0, q1.W, 0.000001);
        Assert.IsTrue(q1.IsEqual(new Quaternion(0, 0, 0, 1)));
        Assert.AreEqual(mat, q1.GetMatrix());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FromVecAngle()
    {
        var q1 = new Quaternion(new Vec(1, 0, 0), Math.PI);
        Vec vec = new Vec();
        double angle = 0;
        q1.GetVectorAndAngle(ref vec, ref angle);
        Assert.AreEqual(Math.PI, angle);
        Assert.AreEqual(new Vec(1, 0, 0), vec);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EulerAngles()
    {
        var q1 = new Quaternion();
        q1.SetEulerAngles(EulerSequence.EulerAngles, 1.0, 2.0, 3.0);
        double a = 0;
        double b = 0;
        double c = 0;
        q1.GetEulerAngles(EulerSequence.EulerAngles, ref a, ref b, ref c);
        Assert.AreEqual(1.0, a, 0.0000001);
        Assert.AreEqual(2.0, b, 0.0000001);
        Assert.AreEqual(3.0, c, 0.0000001);
    }


    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Reverse()
    {
        var q1 = new Quaternion();
        q1.Set(1, 2, 3, 4);
        var q2 = q1.Reversed();
        Assert.AreEqual(-1.0, q2.X, 0.000001);
        Assert.AreEqual(-2.0, q2.Y, 0.000001);
        Assert.AreEqual(-3.0, q2.Z, 0.000001);
        Assert.AreEqual(4.0, q2.W, 0.000001);
        q1.Reverse();
        Assert.AreEqual(-1.0, q1.X, 0.000001);
        Assert.AreEqual(-2.0, q1.Y, 0.000001);
        Assert.AreEqual(-3.0, q1.Z, 0.000001);
        Assert.AreEqual(4.0, q1.W, 0.000001);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Invert()
    {
        var q1 = new Quaternion();
        q1.Set(1, 2, 3, 4);
        var q2 = q1.Inverted();
        Assert.AreEqual(-0.03333333, q2.X, 0.000001);
        Assert.AreEqual(-0.06666666, q2.Y, 0.000001);
        Assert.AreEqual(-0.1, q2.Z, 0.000001);
        Assert.AreEqual(0.13333333, q2.W, 0.000001);
        q1.Invert();
        Assert.AreEqual(-0.03333333, q1.X, 0.000001);
        Assert.AreEqual(-0.06666666, q1.Y, 0.000001);
        Assert.AreEqual(-0.1, q1.Z, 0.000001);
        Assert.AreEqual(0.13333333, q1.W, 0.000001);
        Assert.AreEqual(0.0333333333333333, q1.SquareNorm(), 0.000000000001);
        Assert.AreEqual(0.182574185835055, q1.Norm(), 0.000000000001);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Scale()
    {
        var q1 = new Quaternion();
        q1.Set(1, 2, 3, 4);
        var q2 = q1.Scaled(2);
        Assert.AreEqual(2, q2.X, 0.000001);
        Assert.AreEqual(4, q2.Y, 0.000001);
        Assert.AreEqual(6, q2.Z, 0.000001);
        Assert.AreEqual(8, q2.W, 0.000001);
        q1.Scale(2);
        Assert.AreEqual(2, q1.X, 0.000001);
        Assert.AreEqual(4, q1.Y, 0.000001);
        Assert.AreEqual(6, q1.Z, 0.000001);
        Assert.AreEqual(8, q1.W, 0.000001);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void StabilizeLength()
    {
        var q1 = new Quaternion();
        q1.Set(2,2,0,1);
        q1.StabilizeLength();
        Assert.AreEqual(0.4, q1.X, 0.000001);
        Assert.AreEqual(0.4, q1.Y, 0.000001);
        Assert.AreEqual(0, q1.Z, 0.000001);
        Assert.AreEqual(0.2, q1.W, 0.000001);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Normalize()
    {
        var q1 = new Quaternion();
        q1.Set(2,2,0,1);
        var q2 = q1.Normalized();
        Assert.AreEqual(0.66666666, q2.X, 0.000001);
        Assert.AreEqual(0.66666666, q2.Y, 0.000001);
        Assert.AreEqual(0, q2.Z, 0.000001);
        Assert.AreEqual(0.33333333, q2.W, 0.000001);
        q1.Normalize();
        Assert.AreEqual(0.66666666, q1.X, 0.000001);
        Assert.AreEqual(0.66666666, q1.Y, 0.000001);
        Assert.AreEqual(0, q1.Z, 0.000001);
        Assert.AreEqual(0.33333333, q1.W, 0.000001);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Negate()
    {
        var q1 = new Quaternion();
        q1.Set(2, 2, 0, 1);
        var q2 = q1.Negated();
        Assert.AreEqual(-2, q2.X, 0.000001);
        Assert.AreEqual(-2, q2.Y, 0.000001);
        Assert.AreEqual(0, q2.Z, 0.000001);
        Assert.AreEqual(-1, q2.W, 0.000001);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Add()
    {
        var q1 = new Quaternion();
        q1.Set(1, 2, 3, 4);
        var q2 = q1.Added(new Quaternion(2,3,4,5));
        Assert.AreEqual(3, q2.X, 0.000001);
        Assert.AreEqual(5, q2.Y, 0.000001);
        Assert.AreEqual(7, q2.Z, 0.000001);
        Assert.AreEqual(9, q2.W, 0.000001);
        q1.Add(new Quaternion(2,3,4,5));
        Assert.AreEqual(3, q1.X, 0.000001);
        Assert.AreEqual(5, q1.Y, 0.000001);
        Assert.AreEqual(7, q1.Z, 0.000001);
        Assert.AreEqual(9, q1.W, 0.000001);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Subtract()
    {
        var q1 = new Quaternion();
        q1.Set(1, 2, 3, 4);
        var q2 = q1.Subtracted(new Quaternion(-2, -3, -4, -5));
        Assert.AreEqual(3, q2.X, 0.000001);
        Assert.AreEqual(5, q2.Y, 0.000001);
        Assert.AreEqual(7, q2.Z, 0.000001);
        Assert.AreEqual(9, q2.W, 0.000001);
        q1.Subtract(new Quaternion(-2, -3, -4, -5));
        Assert.AreEqual(3, q1.X, 0.000001);
        Assert.AreEqual(5, q1.Y, 0.000001);
        Assert.AreEqual(7, q1.Z, 0.000001);
        Assert.AreEqual(9, q1.W, 0.000001);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultiplyQuaternion()
    {
        var q1 = new Quaternion();
        q1.Set(1, 2, 3, 4);
        var q2 = q1.Multiplied(new Quaternion(2, 3, 4, 5));
        Assert.AreEqual(12, q2.X, 0.000001);
        Assert.AreEqual(24, q2.Y, 0.000001);
        Assert.AreEqual(30, q2.Z, 0.000001);
        Assert.AreEqual(0, q2.W, 0.000001);
        q1.Multiply(new Quaternion(2, 3, 4, 5));
        Assert.AreEqual(12, q1.X, 0.000001);
        Assert.AreEqual(24, q1.Y, 0.000001);
        Assert.AreEqual(30, q1.Z, 0.000001);
        Assert.AreEqual(0, q1.W, 0.000001);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultiplyVec()
    {
        var q1 = new Quaternion(new Vec(1, 0, 0), Math.PI);
        var v1 = q1.Multiply(new Vec(1, 2, 3));
        Assert.AreEqual(1, v1.X, 0.000001);
        Assert.AreEqual(-2, v1.Y, 0.000001);
        Assert.AreEqual(-3, v1.Z, 0.000001);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Dot()
    {
        var q1 = new Quaternion();
        q1.Set(1, 2, 3, 1);
        Assert.AreEqual(12, q1.Dot(new Quaternion(2, 2, 1, 3)));
        Assert.AreEqual(2.6192778317837444, q1.GetRotationAngle(), 0.00000000000001);
    }

    //--------------------------------------------------------------------------------------------------

}