using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper;

[TestFixture]
public class ValueTypeTests
{
    [Test]
    public void BaseFunctionality()
    {
        // Verify value type
        var p1 = new Pnt(1, 2, 3);
        var p2 = p1;
        p1.X = 4;
        Assert.AreNotEqual(p1, p2);

        // Test general function
        Assert.AreEqual(3, p1.Distance(p2));

        // Test bridge to native
        Assert.AreEqual(new Pnt(-2, 2, 3), p1.Mirrored(p2));

        // Test bridge to native as reference

        // Test operator overloading
        Assert.AreEqual(p1.Translated(p2.ToVec()), p1 + p2);
    }

    //--------------------------------------------------------------------------------------------------

}