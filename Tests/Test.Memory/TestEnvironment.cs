using System;
using System.IO.Packaging;
using System.Threading;
using System.Windows;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Memory;

[SetUpFixture, Apartment(ApartmentState.STA)]
public class TestEnvironment
{
    [OneTimeSetUp]
    public void SetUp()
    {
        // Initialize WPF correctly without having an Application
        PackUriHelper.Create(new Uri("reliable://0"));
        new FrameworkElement();
            
        // Init context
        Context.InitEmpty();
    }

    //--------------------------------------------------------------------------------------------------

    [OneTimeTearDown]
    public void TearDown()
    {
            
    }
}