using System;
using System.Diagnostics;
using System.Threading;
using NUnit.Framework;
using Macad.Occt;

namespace Macad.Test.Memory.Core
{
    [TestFixture]
    public class WrapperTests
    {
        [Test]
        public void FinalizeNonTransient()
        {
            void __CreateMassiveObjects(int count)
            {
                for (int i = 0; i < count; i++)
                {
                    var obj = new BRep_Builder();
                }
            }

            __CreateMassiveObjects(1000000);
            GC.WaitForPendingFinalizers();
            GC.Collect();
            var memBefore = Process.GetCurrentProcess().PrivateMemorySize64;

            __CreateMassiveObjects(10000);
            GC.WaitForPendingFinalizers();
            GC.Collect();
            var memAfter = Process.GetCurrentProcess().PrivateMemorySize64;

            TestContext.WriteLine($"MemBefore: {memBefore}");
            TestContext.WriteLine($"MemAfter:  {memAfter}");
            Assert.IsTrue( memAfter <= memBefore );
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void FinalizeTransient()
        {
            void __CreateMassiveObjects(int count)
            {
                for (int i = 0; i < count; i++)
                {
                    var obj = new BRepTools_History();
                }
            }

            __CreateMassiveObjects(1000000);
            GC.WaitForPendingFinalizers();
            GC.Collect();
            var memBefore = Process.GetCurrentProcess().PrivateMemorySize64;

            __CreateMassiveObjects(100000);
            GC.WaitForPendingFinalizers();
            GC.Collect();
            var memAfter = Process.GetCurrentProcess().PrivateMemorySize64;

            TestContext.WriteLine($"MemBefore: {memBefore}");
            TestContext.WriteLine($"MemAfter:  {memAfter}");
            Assert.IsTrue( memAfter <= memBefore );
        }
    }
}