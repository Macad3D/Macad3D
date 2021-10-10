using System.Linq;
using Macad.Core;
using Macad.Exchange;
using Macad.Interaction;

// Get selected body
var bodies = Selection.SelectedEntities.OfType<Body>();
if (!bodies.Any())
{
    Messages.Error("Please select some bodies to export.");
    return;
}

// Get exchanger
var exchanger = new StlExchanger();
exchanger.Settings.ExportBinaryFormat = true;

// Do export
var exporter = exchanger as IBodyExporter;
if (!exporter.DoExport("MyExportedShape.stl", bodies))
{
    Messages.Error("Export failed.");
    return;
}

