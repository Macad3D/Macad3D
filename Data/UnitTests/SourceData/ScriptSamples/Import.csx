using System.Linq;
using System.Collections.Generic;
using Macad.Core;
using Macad.Exchange;

// Get importer
var importer = ExchangeRegistry.FindExchanger<IBodyImporter>("stl");
if (importer == null)
{
    Messages.Error("Importer not found.");
    return;
}

// Do import
IEnumerable<Body> newBodies;
if (!importer.DoImport("MyExportedShape.stl", out newBodies))
{
    Messages.Error("Import failed.");
    return;
}

// Add to model
foreach (var newBody in newBodies)
{
    Document.Add(newBody);
}
