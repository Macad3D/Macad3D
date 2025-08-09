using System.Threading;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Memory;

[SetUpFixture, Apartment(ApartmentState.STA)]
public class MemoryTestSetup
{
    [OneTimeSetUp]
    public void SetUp()
    {
        TestSetup.SetupWpf();
        TestSetup.SetupRendering();
    }

    //--------------------------------------------------------------------------------------------------

    [OneTimeTearDown]
    public void TearDown()
    {
    }
}