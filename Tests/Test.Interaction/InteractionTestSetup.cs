using System.Threading;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Interaction;

[SetUpFixture, Apartment(ApartmentState.STA)]
public class InteractionTestSetup
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