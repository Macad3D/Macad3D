using System.Threading;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Core;

[SetUpFixture, Apartment(ApartmentState.STA)]
public class CoreTestSetup
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