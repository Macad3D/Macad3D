using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Net;
using System.Reflection;
using System.Text;
using System.Threading;
using System.Windows;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Core;

namespace Macad.Window
{
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
        class RequestContext
        {
            public WebRequest WebRequest;
            public Action<Dictionary<string, string>> Callback;
        }

        //--------------------------------------------------------------------------------------------------

        readonly string _Url;

        //--------------------------------------------------------------------------------------------------

        public VersionCheckWebRequest(string url)
        {
            _Url = url;
        }

        //--------------------------------------------------------------------------------------------------

        public void BeginRequest(Action<Dictionary<string, string>> callback)
        {
            var context = new RequestContext()
            {
                Callback = callback
            };

            Thread t = new Thread(new ParameterizedThreadStart(_ThreadEntry))
            {
                IsBackground = true,
            };
            t.Start(context);

        }

        //--------------------------------------------------------------------------------------------------

        void _ThreadEntry(object obj)
        {
            try
            {
                var context = obj as RequestContext;
                Debug.Assert(context != null);

                string url = _Url;
                context.WebRequest = WebRequest.Create(url);
                var result = context.WebRequest.BeginGetResponse(_OnResponsed, context);

                ThreadPool.RegisterWaitForSingleObject( result.AsyncWaitHandle, 
                                                        (context, timedOut) =>
                                                        {
                                                            if (timedOut)
                                                            {
                                                                ((RequestContext)context).WebRequest.Abort();
                                                            }
                                                        }, 
                                                        null, 30* 1000,  true );
            }
            catch (Exception)
            {
                Debug.Print("--- Version check failed: Retrieving version information from server failed.");
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _OnResponsed(IAsyncResult result)
        {
            var context = result.AsyncState as RequestContext;
            Debug.Assert(context != null);

            var response = context.WebRequest.EndGetResponse(result);
            string responseText;
            using (var sr = new StreamReader(response.GetResponseStream(), Encoding.UTF8))
            {
                responseText = sr.ReadToEnd();
            }

            if (responseText.Length >= 1)
            {
                var serializer = Serializer.GetSerializer(typeof(Dictionary<string, string>));
                var reader = new Reader(responseText);
                var dict = serializer.Read(reader, null, null) as Dictionary<string, string>;
                if (dict != null)
                {
                    context.Callback.Invoke(dict);
                }
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

            vc.BeginCheckForUpdate(false, new VersionCheckWebRequest(GetVersionUrl));
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
}
