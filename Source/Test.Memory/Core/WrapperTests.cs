using NUnit.Framework;
using Macad.Occt;

namespace Macad.Test.Memory.Core;

[TestFixture]
public class WrapperTests
{
    [Test]
    public void FinalizeNonTransient()
    {
        AssertHelper.IsFreeingMemory(() =>
        {
            var obj = new BRep_Builder();
        }, 1000000, 10000);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FinalizeTransient()
    {
        AssertHelper.IsFreeingMemory(() =>
        {
            var obj = new BRepTools_History();
        }, 1000000, 100000);
    }
}