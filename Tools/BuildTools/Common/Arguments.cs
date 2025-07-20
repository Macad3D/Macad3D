using System;
using System.Collections.Generic;

namespace Macad.Build;

public class Parameters
{
    readonly Dictionary<string, string> _Parameters;

    public Parameters(IEnumerable<string> args)
    {
        _Parameters = new(StringComparer.OrdinalIgnoreCase);

        foreach (var arg in args)
        {
            var splitIndex = arg.IndexOf('=');
            if (splitIndex <= 0 || splitIndex >= arg.Length - 1)
            {
                continue;
            }

            var key = arg.Substring(0, splitIndex);
            var value = arg.Substring(splitIndex + 1).Trim('"');
            _Parameters[key] = value;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool TryGetValue(string key, out string value)
    {
        return _Parameters.TryGetValue(key, out value);
    }

    //--------------------------------------------------------------------------------------------------

    public string GetValueOrDefault(string key, string defaultValue = null)
    {
        return _Parameters.GetValueOrDefault(key, defaultValue);
    }

    //--------------------------------------------------------------------------------------------------

}