using System.Threading;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Exchange;

[SetUpFixture, Apartment(ApartmentState.STA)]
public class ExchangeTestSetup
{
    [OneTimeSetUp]
    public void SetUp()
    {
        TestSetup.SetupWpf();
        TestSetup.SetupRendering();

        Context.InitWithDefault();
    }

    //--------------------------------------------------------------------------------------------------

    [OneTimeTearDown]
    public void TearDown()
    {
    }
}