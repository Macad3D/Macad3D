#load "_Common.csx"
#load "_BuildTools.csx"

using System;
using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using System.Linq;

if (Args.Count() != 0)
{
    Printer.Line("Usage: restore");
    return -1;
}

VisualStudio vs = new VisualStudio();
if(!vs.IsReady)
    return -1;

var solutionFile = Path.Combine(Common.GetRootFolder(), "Macad3D.sln");

if (!vs.Build(solutionFile, "Restore", "", "x64"))
    return -1;

Printer.Success($"\n Dependencies successfully restored.");
return 0;