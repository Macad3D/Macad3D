using Macad.Occt;
using Macad.Occt.Helper;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Memory.Core;

[TestFixture]
public class ManagedHelperTests
{
    [Test]
    public void CleanUpStepReader()
    {
        MemoryAssert.IsFreeingMemory(() =>
        {
            var obj = new StepReader();
        }, 100, 10);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CleanUpStepWriter()
    {
        MemoryAssert.IsFreeingMemory(() =>
        {
            var obj = new StepWriter();
        }, 100, 10);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CleanUpIgesReader()
    {
        MemoryAssert.IsFreeingMemory(() =>
        {
            var obj = new IgesReader();
        }, 100, 10);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CleanUpIgesWriter()
    {
        MemoryAssert.IsFreeingMemory(() =>
        {
            var obj = new IgesWriter();
        }, 100, 10);
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void CleanUpHlrBRepAlgo()
    {
        TopoDS_Shape[] shapes = {};
        MemoryAssert.IsFreeingMemory(() =>
        {
            var obj = new HlrBRepAlgo(shapes);
        }, 10000, 1000);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CleanUpHlrBRepAlgoPoly()
    {
        TopoDS_Shape[] shapes = {};
        MemoryAssert.IsFreeingMemory(() =>
        {
            var obj = new HlrBRepAlgoPoly(shapes);
        }, 10000, 1000);
    }

    //--------------------------------------------------------------------------------------------------

}