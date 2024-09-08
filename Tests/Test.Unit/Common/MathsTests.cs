using Macad.Common;
using NUnit.Framework;

namespace Macad.Test.Unit.Common;

[TestFixture]
public class MathsTests
{
    [Test]
    public void NormalizeAngleDegrees()
    {
        Assert.AreEqual(0, Maths.NormalizeAngleDegree(0));
        Assert.AreEqual(100, Maths.NormalizeAngleDegree(100));
        Assert.AreEqual(270, Maths.NormalizeAngleDegree(270));
        Assert.AreEqual(0, Maths.NormalizeAngleDegree(360));
        Assert.AreEqual(1, Maths.NormalizeAngleDegree(361));
        Assert.AreEqual(1, Maths.NormalizeAngleDegree(3601));
        Assert.AreEqual(180, Maths.NormalizeAngleDegree(-180));
        Assert.AreEqual(0, Maths.NormalizeAngleDegree(-360));
        Assert.AreEqual(260, Maths.NormalizeAngleDegree(-3700));
    }
}