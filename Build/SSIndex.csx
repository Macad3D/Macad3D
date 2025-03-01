#load "_Common.csx"
#load "_SSIndex.csx"

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

if (Args.Count() < 1)
{
    Printer.Line("Usage: ssindex <PathToPdbs> <PathToSource>");
    return -1;
}

var pathToPdbs = Args[0].ToLower();
var pathToSource = Args[1].ToLower();
if(!(Directory.Exists(pathToPdbs) && Directory.Exists(pathToSource)))
{
    Printer.Error("Paths are not valid.");
    return -1;
}

SSIndex ssindex = new SSIndex();
if(!ssindex.Init(pathToSource))
    return -1;

Printer.Line("Starting source indexing of pdb files...");
foreach (var file in Directory.GetFiles(pathToPdbs, "*.pdb"))
{
    if (!ssindex.ProcessPdb(file))
    {
        Printer.Error("Source indexing failed.");
        return -1;
    }
}

Printer.Success("Source indexing finished.");
return 0;

