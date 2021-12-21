---
uid: 84820e79-6eee-4be0-88a7-9ee920b99815
title: Script Example - Export and Import
---
Export and Import are key features of every application dealing with 3D content. We will show in this example how to automatically handle exporting and importing tasks.

# About the Exchanger
The support for a specific file format is implemented in a class implementing a couple of interfaces. The basic interface which must always be implemented is [](Macad.Core.Exchange.IExchanger). Using this interface we can get information about the file format, a list of extensions an access to the settings.

Furthermore the class must implement a special interface per im-/export operation it supports:

Interface | Description
----------|------------
[](IBodyExporter) | Export of solid shapes from selected bodies.
[](IBodyImporter) | Import of solid shapes to bodies.
[](ISketchExporter) | Export of a sketch, that means of it's points and segments.
[](ISketchImporter) | Import of a 2D drawing into segments of a sketch.
[](IVectorExporter) | Export of generated vector informations. This can be a drawing of the viewport, or template exports.

# Export Shapes from Bodies
At first, we need to get the selected bodies to be exported. We use the globally available context singleton to access the current selection.

```cs
var bodies = Selection.SelectedEntities.OfType&lt;Body&gt;();
if (!bodies.Any())
{
  Messages.Error("Please select some bodies to export.");
  return;
}
```

We need the exchanger for our desired file format. This can be requested from the registry (see import section), but also instantiated directly when the export format is already know. This way we can also directly access the specific export settings.

```cs
var exchanger = new StlExchanger();
exchanger.Settings.ExportBinaryFormat = true;
```

Now we can do the export. For this we need to cast the exchanger instance to the interface of the desired export operation. The export itself is then started by using the function [](Macad.Core.IBodyExporter.DoExport).

```cs
var exporter = exchanger as IBodyExporter;
if (!exporter.DoExport("MyExportedShape.stl", bodies))
{
  Messages.Error("Export failed.");
  return;
}
```

# Import Shapes to Bodies
When importing, we also need to get an instance to the proper exchanger. This can be requested by the static class [](Macad.Core.ExchangeRegistry). This class holds all registered exchanger together with information about their file formats.

```cs
var importer = ExchangeRegistry.FindExchanger&lt;IBodyImporter&gt;("stl");
if (importer == null)
{
  Messages.Error("Importer not found.");
  return;
}
```
The import can now be started by calling [](Macad.Core.Exchange.IBodyImporter.DoImport). If the operation succeeds, the function returns an [](System.Collections.Generic.IEnumerable) of bodies.

```cs
IEnumerable&lt;Body&gt; newBodies;
if (!importer.DoImport("MyExportedShape.stl", out newBodies))
{
  Messages.Error("Import failed.");
  return;
}
```

Finally the new bodies must be added to the model.

```cs
foreach (var newBody in newBodies)
{
  Document.Add(newBody);
}
```

# Complete Script
## Export
[!code-cs[Main](Samples/Export.csx)]

## Import
[!code-cs[Main](Samples/Import.csx)]

# See Also
[](xref:dbef1051-1ced-4b54-89a5-64c02de1722d)
