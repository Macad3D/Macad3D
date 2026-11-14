using System.Threading;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Mcp;

// Tests with a viewport (e.g. capture_view) need the Mesa3D software renderer, build agents have no OpenGL driver.
[SetUpFixture, Apartment(ApartmentState.STA)]
public class McpTestSetup
{
    [OneTimeSetUp]
    public void SetUp()
    {
        TestSetup.SetupWpf();
        TestSetup.SetupRendering();

        Context.InitWithDefault();
    }
}
