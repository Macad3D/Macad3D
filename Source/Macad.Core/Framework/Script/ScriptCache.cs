using System;
using System.Collections.Generic;
using System.IO;

namespace Macad.Core;

internal static class ScriptCache
{
    struct CachedScriptFileInfo
    {
        internal string FileName;
        internal long Length;
        internal DateTime LastWriteTime;
    }

    class CachedScript
    {
        internal ScriptInstance Instance;
        internal CachedScriptFileInfo[] FileInfos;
    }

    //--------------------------------------------------------------------------------------------------

    static readonly Dictionary<string, CachedScript> _CachedScripts = new Dictionary<string, CachedScript>();

    //--------------------------------------------------------------------------------------------------

    internal static void Add(ScriptInstance scriptInstance, List<string> fileList)
    {
        var entry = new CachedScript
        {
            Instance = scriptInstance,
            FileInfos = new CachedScriptFileInfo[fileList.Count],
        };

        for (var i = 0; i < fileList.Count; i++)
        {
            var fi = new FileInfo(fileList[i]);
            var info = new CachedScriptFileInfo()
            {
                FileName = fileList[i],
                Length = fi.Length,
                LastWriteTime = fi.LastWriteTimeUtc
            };
            entry.FileInfos[i] = info;
        }

        _CachedScripts[scriptInstance.Path] = entry;
    }

    //--------------------------------------------------------------------------------------------------

    internal static ScriptInstance Find(string filename)
    {
        try
        {
            filename = Path.GetFullPath(filename);
            if (!_CachedScripts.TryGetValue(filename, out CachedScript entry))
                return null;

            foreach (var info in entry.FileInfos)
            {
                var fi = new FileInfo(info.FileName);
                if (fi.Length != info.Length
                    || fi.LastWriteTimeUtc != info.LastWriteTime)
                {
                    // Cache miss
                    return null;
                }
            }

            // Cache hit
            return entry.Instance;
        }
        catch (Exception)
        {
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    internal static void Clear()
    {
        _CachedScripts.Clear();
    }

    //--------------------------------------------------------------------------------------------------

}