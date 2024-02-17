using System;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper.ValueTypes3D;

[TestFixture]
public class TrsfTests
{
    [Test]
    public void FromTrsf2d()
    {
        Trsf2d m2d = new Trsf2d();
        m2d.SetRotation(Pnt2d.Origin, Math.PI / 2);
        var m1 = new Trsf(m2d);
        Assert.AreEqual(TrsfForm.Rotation, m1.Form);
        Assert.AreEqual(Math.PI/2, m1.GetRotation().GetRotationAngle());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Transform()
    {
        Trsf m1 = new Trsf();
        m1.SetRotation(Ax1.OZ, Math.PI/2);
        var c1 = new XYZ(10, 5, 2);
        m1.Transforms(ref c1);
        Assert.AreEqual(-5, c1.X, 0.000001);
        Assert.AreEqual(10, c1.Y, 0.000001);
        Assert.AreEqual(2, c1.Z, 0.000001);
    }
}