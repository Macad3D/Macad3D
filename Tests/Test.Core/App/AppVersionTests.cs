using System;
using Macad.Window;
using NUnit.Framework;

namespace Macad.Test.Core.App;

[TestFixture]
public class AppVersionTests
{
    [TestCase("5.0.4097-develop+7b0a95cb9fa6e7946aa172536ab3c00cbaebf6bd", ExpectedResult = true)]
    [TestCase("5.0.4097-develop", ExpectedResult = true)]
    [TestCase("5.0.4097-Develop", ExpectedResult = true)]
    [TestCase("5.0.4097+7b0a95cb9fa6e7946aa172536ab3c00cbaebf6bd", ExpectedResult = false)]
    [TestCase("5.0.4097", ExpectedResult = false)]
    [TestCase("5.0.4097-rc1", ExpectedResult = false)]
    [TestCase("", ExpectedResult = false)]
    [TestCase(null, ExpectedResult = false)]
    public bool IsDevelop(string informationalVersion)
    {
        return AppVersion.IsDevelop(informationalVersion);
    }

    //--------------------------------------------------------------------------------------------------

    [TestCase("5.0.4097-develop+7b0a95cb9fa6e7946aa172536ab3c00cbaebf6bd", ExpectedResult = "5.0.4097-develop+7b0a95cb")]
    [TestCase("5.0.4097+7b0a95cb9fa6e7946aa172536ab3c00cbaebf6bd", ExpectedResult = "5.0.4097+7b0a95cb")]
    [TestCase("5.0.4097-develop+7b0a95cb", ExpectedResult = "5.0.4097-develop+7b0a95cb")]
    [TestCase("5.0.4097-develop", ExpectedResult = "5.0.4097-develop")]
    [TestCase(null, ExpectedResult = null)]
    public string ShortenCommitHash(string informationalVersion)
    {
        return AppVersion.ShortenCommitHash(informationalVersion);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void UserGuideUrl_Release()
    {
        Assert.AreEqual("https://macad3d.net/userguide/go/?version=5.0&guid=6d66b830-344b-4400-a50c-ba31459287d9",
                        AppVersion.GetUserGuideUrl(new Version(5, 0, 4097), false, "6d66b830-344b-4400-a50c-ba31459287d9"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void UserGuideUrl_Develop()
    {
        Assert.AreEqual("https://macad3d.net/userguide-dev/go/?version=5.0&guid=6d66b830-344b-4400-a50c-ba31459287d9",
                        AppVersion.GetUserGuideUrl(new Version(5, 0, 4097), true, "6d66b830-344b-4400-a50c-ba31459287d9"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void UserGuideUrl_NoTopic()
    {
        Assert.AreEqual("https://macad3d.net/userguide/go/?version=5.0&guid=",
                        AppVersion.GetUserGuideUrl(new Version(5, 0, 4097), false, null));
    }
}
