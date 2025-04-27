#load "_Common.csx"
#load "_Version.csx"

using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Runtime.InteropServices;
using System.Linq;

int _Major;
int _Minor;
int _Flags;
int _Revision;

if (!Version.ReadCurrentVersion(out _Major, out _Minor, out _Revision, out _Flags))
{
    Printer.Error("Cannot read current version");
    return -1;
}
else
{
    Printer.Line($"Current Version: {_Major}.{_Minor}.{_Revision} {Version.GetFlagsString(_Flags)} ({_Flags})");
}

if (Args.Count() < 1)
{
    Printer.Line("Usage: version <set, update>");
    return -1;
}

var config = Args[0].ToLower();

if (config == "set")
{
    if (Args.Count() != 2
        || !Version.Set(Args[1]))
    {
        Printer.Error("Cannot understand version. Please use the format '[major].[minor].[flags]'.");
        return -1;
    }
}
else if (config == "update")
{
    if (!Version.Update(_Major, _Minor, _Flags))
        return -1;
}
else
{
    Printer.Error("Invalid command.");
    return -1;
}

return 0;


