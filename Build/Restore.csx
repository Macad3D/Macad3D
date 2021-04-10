#load "_Common.csx"
#load "_Packages.csx"

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

return Packages.RestorePackages() ? 0 : -1;
