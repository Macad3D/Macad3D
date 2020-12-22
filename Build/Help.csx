#load "_Common.csx"

using System;
using System.IO;

Printer.Success("\nAvailable commands:");

foreach (var filePath in Directory.EnumerateFiles(".", "*.csx"))
{
    var fileName = Path.GetFileNameWithoutExtension(filePath);
    if(fileName.StartsWith("_"))
        continue;

    Printer.Line("  " + fileName);
}

Printer.Line("  Exit|Quit\n");
