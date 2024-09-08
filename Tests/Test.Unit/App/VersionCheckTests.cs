using System;
using System.Collections.Generic;
using System.Reflection;
using Macad.Test.Utils;
using NUnit.Framework;
using Macad.Window;

namespace Macad.Test.Unit.App;

[TestFixture]
public class VersionCheckTests
{
    [Test]
    public void NoLastCheckInfo()
    {
        Assert.IsTrue(new VersionCheck().BeginCheckForUpdate(true, null));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LastCheckNotLongTimeAgo()
    {
        var info = new VersionCheckInfo
        {
            OnlineCheck = DateTime.Today.AddDays(-2),
            LocalVersion = LocalVersion,
        };

        Context.Current.SaveLocalSettings("LastVersionCheck", info);

        Assert.IsFalse(new VersionCheck().BeginCheckForUpdate(false, null));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LastCheckLongTimeAgo()
    {
        var info = new VersionCheckInfo
        {
            OnlineCheck = DateTime.Today.AddDays(-8),
            LocalVersion = LocalVersion,
        };

        Context.Current.SaveLocalSettings("LastVersionCheck", info);

        Assert.IsTrue(new VersionCheck().BeginCheckForUpdate(false, null));

        // The second time, it should not check again
        Assert.IsFalse(new VersionCheck().BeginCheckForUpdate(false, null));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ForceCheck()
    {
        var info = new VersionCheckInfo
        {
            OnlineCheck = DateTime.Today.AddDays(-2),
            LocalVersion = LocalVersion,
        };

        Context.Current.SaveLocalSettings("LastVersionCheck", info);

        Assert.IsTrue(new VersionCheck().BeginCheckForUpdate(true, null));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void NotTheSameVersion()
    {
        var info = new VersionCheckInfo
        {
            OnlineCheck = DateTime.Today.AddDays(-2),
            LocalVersion = "1.0.0.5",
        };

        Context.Current.SaveLocalSettings("LastVersionCheck", info);

        Assert.IsTrue(new VersionCheck().BeginCheckForUpdate(true, null));

        info = Context.Current.LoadLocalSettings<VersionCheckInfo>("LastVersionCheck");
        Assert.AreEqual(LocalVersion, info.LocalVersion);

        // The second time, it should not check again
        Assert.IsFalse(new VersionCheck().BeginCheckForUpdate(false, null));
    }

    //--------------------------------------------------------------------------------------------------
                
    [Test]
    public void UpdateAvailable()
    {
        var info = new VersionCheckInfo();

        Context.Current.SaveLocalSettings("LastVersionCheck", info);
        var request = new VersionCheckTestRequest("100.1.0.0");

        Assert.IsTrue(new VersionCheck().BeginCheckForUpdate(true, request));

        info = Context.Current.LoadLocalSettings<VersionCheckInfo>("LastVersionCheck");
        Assert.IsTrue(info.UpdateAvailable);
        Assert.AreEqual("100.1.0.0", info.UpdateVersion);

        // The second time, it should not check again
        Assert.IsFalse(new VersionCheck().BeginCheckForUpdate(false, request));
    }

    //--------------------------------------------------------------------------------------------------
                        
    [Test]
    public void NoUpdateAvailable()
    {
        var info = new VersionCheckInfo();

        Context.Current.SaveLocalSettings("LastVersionCheck", info);
        var request = new VersionCheckTestRequest("0.0.1.0");

        Assert.IsTrue(new VersionCheck().BeginCheckForUpdate(true, request));

        info = Context.Current.LoadLocalSettings<VersionCheckInfo>("LastVersionCheck");
        Assert.IsFalse(info.UpdateAvailable);
        Assert.AreEqual("0.0.1.0", info.UpdateVersion);

        // The second time, it should not check again
        Assert.IsFalse(new VersionCheck().BeginCheckForUpdate(false, request));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void UpdateAlreadyDismissed()
    {
        var info = new VersionCheckInfo()
        {
            OnlineCheck = DateTime.Today.AddDays(-100),
            LocalVersion = "1.0.0.4",
            UpdateVersion = "100.1.0.0",
            UpdateAvailable = false
        };
        Context.Current.SaveLocalSettings("LastVersionCheck", info);

        var request = new VersionCheckTestRequest("100.1.0.0");

        Assert.IsTrue(new VersionCheck().BeginCheckForUpdate(true, request));

        info = Context.Current.LoadLocalSettings<VersionCheckInfo>("LastVersionCheck");
        Assert.IsFalse(info.UpdateAvailable);

        // The second time, it should not check again
        Assert.IsFalse(new VersionCheck().BeginCheckForUpdate(false, request));
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    #region Utils

    string LocalVersion => Assembly.GetAssembly(typeof(VersionCheck)).GetName().Version.ToString();

    //--------------------------------------------------------------------------------------------------

    public class VersionCheckTestRequest : IVersionCheckRequest
    {
        readonly Dictionary<string, string> _Dict = new Dictionary<string, string>();

        public VersionCheckTestRequest(string version)
        {
            _Dict["Version"] = version;
            _Dict["Url"] = "http://nowhere";
        }

        public void BeginRequest(Action<Dictionary<string,string>> callback)
        {
            callback.Invoke(_Dict);
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}