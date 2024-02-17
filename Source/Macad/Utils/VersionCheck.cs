using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Net.Http;
using System.Reflection;
using System.Threading;
using System.Windows;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Core;

namespace Macad.Window;

#region Model

[SerializeType]
internal class VersionCheckInfo
{
    [SerializeMember]
    public DateTime OnlineCheck { get; set; } = DateTime.MinValue;

    [SerializeMember]
    public string LocalVersion { get; set; } = "0.0.0.0";

    [SerializeMember]
    public bool UpdateAvailable { get; set; } = false;

    [SerializeMember]
    public string UpdateVersion { get; set; } = "0.0.0.0";

    [SerializeMember]
    public string UpdateUrl { get; set; } = "";
}

//--------------------------------------------------------------------------------------------------

public sealed class VersionCheckParameterSet : OverridableParameterSet
{
    public bool CheckForUpdate { get => GetValue<bool>(); set => SetValue(value); }
    public uint CheckIntervalDays { get => GetValue<uint>(); set => SetValue(value); }

    //--------------------------------------------------------------------------------------------------

    public VersionCheckParameterSet()
    {
        SetDefaultValue(nameof(CheckForUpdate), true);
        SetDefaultValue(nameof(CheckIntervalDays), (uint)7);
    }
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

#endregion

#region VersionCheckRequest

internal interface IVersionCheckRequest
{
    void BeginRequest(Action<Dictionary<string, string>> callback);
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

internal class VersionCheckWebRequest : IVersionCheckRequest
{
    readonly string _Url;
    readonly Version _UserAgentVersion;
    Action<Dictionary<string, string>> _Callback;

    //--------------------------------------------------------------------------------------------------

    public VersionCheckWebRequest(string url, Version userAgentVersion)
    {
        _Url = url;
        _UserAgentVersion = userAgentVersion;
    }

    //--------------------------------------------------------------------------------------------------

    public void BeginRequest(Action<Dictionary<string, string>> callback)
    {
        _Callback = callback;

        Thread t = new Thread(_ThreadEntry)
        {
            IsBackground = true,
        };
        t.Start();
    }

    //--------------------------------------------------------------------------------------------------

    void _ThreadEntry(object obj)
    {
        using HttpClient httpClient = new();
        httpClient.DefaultRequestHeaders.UserAgent.TryParseAdd($"Macad3D/{_UserAgentVersion.Major}.{_UserAgentVersion.Minor}");

        try
        {
            var task = httpClient.GetStringAsync(_Url);
            if (!task.Wait(new TimeSpan(0, 0, 30)))
            {
                Debug.Print("--- Version check failed: Timeout on server connection.");
            }

            string responseText = task.Result;
            if (responseText.Length >= 1)
            {
                var serializer = Serializer.GetSerializer(typeof(Dictionary<string, string>));
                var reader = new Reader(responseText);
                if (serializer.Read(reader, null, null) is Dictionary<string, string> dict)
                {
                    _Callback.Invoke(dict);
                }
            }
        }
        catch (Exception)
        {
            Debug.Print("--- Version check failed: Retrieving version information from server failed.");
        }
    }
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

#endregion

#region VersionCheck

internal class VersionCheck
{
    public const string GetVersionUrl = "https://macad3d.net/versioninfo";

    //--------------------------------------------------------------------------------------------------

    public static bool IsAutoCheckEnabled
    {
        get
        {
            var parameterSet = CoreContext.Current.Parameters.Get<VersionCheckParameterSet>();
            return parameterSet.CheckForUpdate;
        }
        set
        {
            var parameterSet = CoreContext.Current.Parameters.Get<VersionCheckParameterSet>();
            parameterSet.CheckForUpdate = value;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static void BeginCheckForUpdate()
    {
        var vc = new VersionCheck();
        if (vc._Info.UpdateAvailable)
        {
            Application.Current.Dispatcher.Invoke(() =>
            {
                vc.RaiseUpdateAvailable();
            });
            return;
        }

        vc.BeginCheckForUpdate(false, new VersionCheckWebRequest(GetVersionUrl, vc._LocalVersion));
    }
        
    //--------------------------------------------------------------------------------------------------
        
    public static void ResetAvailability()
    {
        var info = CoreContext.Current.LoadLocalSettings<VersionCheckInfo>("LastVersionCheck") ?? new VersionCheckInfo();
        info.UpdateAvailable = false;
        CoreContext.Current.SaveLocalSettings("LastVersionCheck", info);
    }

    //--------------------------------------------------------------------------------------------------

    public static event EventHandler<VersionCheckInfo> UpdateAvailable;

    void RaiseUpdateAvailable()
    {
        UpdateAvailable?.Invoke(this, _Info);
    }

    //--------------------------------------------------------------------------------------------------

    VersionCheckInfo _Info;
    readonly Version _LocalVersion;

    //--------------------------------------------------------------------------------------------------

    public VersionCheck()
    {
        _LocalVersion = Assembly.GetExecutingAssembly().GetName().Version;
        _Info = CoreContext.Current.LoadLocalSettings<VersionCheckInfo>("LastVersionCheck") ?? new VersionCheckInfo();
    }

    //--------------------------------------------------------------------------------------------------

    public bool BeginCheckForUpdate(bool force, IVersionCheckRequest request)
    {
        if (!force && !_IsUpdateCheckNeeded())
        {
            return false;
        }

        _Info.OnlineCheck = DateTime.Now;
        _Info.LocalVersion = _LocalVersion.ToString();
        CoreContext.Current.SaveLocalSettings("LastVersionCheck", _Info);

        request?.BeginRequest(_OnRequested);

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _OnRequested(Dictionary<string, string> dictionary)
    {
        if (dictionary.TryGetValue("Version", out string version)
            && dictionary.TryGetValue("Url", out string url))
        {
            // Check if new version has already been announced
            if (_Compare(new Version(version), new Version(_Info.UpdateVersion)) != 0)
            {
                _Info.UpdateAvailable = _Compare(new Version(version), new Version(_Info.LocalVersion)) == 1;
                _Info.UpdateVersion = version;
                _Info.UpdateUrl = url;
                CoreContext.Current.SaveLocalSettings("LastVersionCheck", _Info);
            }

            // Inform the user
            if (_Info.UpdateAvailable)
            {
                Application.Current?.Dispatcher.Invoke(() =>
                {
                    RaiseUpdateAvailable();
                });
            }
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    bool _IsUpdateCheckNeeded()
    {
        // if we have a new version, force update once
        var lastLocalVersion = new Version(_Info.LocalVersion);
        if (_Compare(lastLocalVersion, _LocalVersion) != 0)
        {
            return true;
        }

        var parameterSet = CoreContext.Current.Parameters.Get<VersionCheckParameterSet>();

        // skip if less then n days ago
        TimeSpan span = DateTime.Now - _Info.OnlineCheck;
        if (span.Days > (int)parameterSet.CheckIntervalDays)
        {
            return true;
        }

        return false;
    }

    //--------------------------------------------------------------------------------------------------

    int _Compare(Version v1, Version v2)
    {
        if (v1.Major != v2.Major)
            if (v1.Major > v2.Major)
                return 1;
            else
                return -1;
 
        if (v1.Minor != v2.Minor)
            if (v1.Minor > v2.Minor)
                return 1;
            else
                return -1;
 
        if (v1.Build != v2.Build)
            if (v1.Build > v2.Build)
                return 1;
            else
                return -1;
 
        if (v1.Revision != v2.Revision)
            if (v1.Revision < v2.Revision)
                return 1;
            else
                return -1;
 
        return 0;   
    }

}

#endregion