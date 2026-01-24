using NUnit.Framework;
using Macad.Occt;
using Macad.Test.Utils;

namespace Macad.Test.Memory.Core;

[TestFixture]
public class WrapperTests
{
    [Test]
    public void FinalizeNonTransient()
    {
        MemoryAssert.IsFreeingMemory(() =>
        {
            var obj = new BRep_Builder();
        }, 1000000, 10000);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FinalizeTransient()
    {
        MemoryAssert.IsFreeingMemory(() =>
        {
            var obj = new BRepTools_History();
        }, 1000000, 100000);
    }
}