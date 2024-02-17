using System.Linq;
using Macad.Interaction.Dialogs;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Presentation;

using static Macad.Interaction.CommandHelper;

namespace Macad.Interaction;

public static class ExchangeCommands
{
    public static ActionCommand ImportFileToModel { get; } = new(
        () =>
        {
            if (ImportDialog.Execute<IBodyImporter>(out var filename, out var importer))
            {
                if (!ExchangerSettings.Execute<IBodyImporter>(importer))
                    return;

                if (!importer.DoImport(filename, out var newBodies))
                {
                    ErrorDialogs.CannotImport(filename);
                    return;
                }
                foreach (var newBody in newBodies)
                {
                    CoreContext.Current?.Document?.Add(newBody);
                }
                Commit();
                Selection.SelectEntities(newBodies);
            }
        },
        () => !(InteractiveContext.Current?.Document is null))
    {
        Header = () => "Import...",
        Title = () => "Import into Model",
        Description = () => "Import geometry data from other file formats into current model.",
        Icon = () => "App-Import"
    };
                
    //--------------------------------------------------------------------------------------------------

    public static ActionCommand ExportVisibleBrep { get; } = new(
        () =>
        {
            if (ExportDialog.Execute<IBodyExporter>(out var filename, out var exporter))
            {
                if (!ExchangerSettings.Execute<IBodyExporter>(exporter))
                    return;

                bool success;
                using (new ProcessingScope(null, "Exporting geometry..."))
                {
                    success = exporter.DoExport(filename, InteractiveContext.Current.WorkspaceController.VisualObjects.GetVisibleEntities().OfType<Body>());
                }

                if (!success)
                {
                    ErrorDialogs.CannotExport(filename);
                }
            }
        },
        () => InteractiveContext.Current.WorkspaceController.VisualObjects.GetVisibleEntities().Any(entity => entity is Body))
    {
        Header = () => "Export Visible...",
        Title = () => "Export Visible Bodies",
        Description = () => "Export geometry data of the visible entities to an other file format.",
        Icon = () => "App-Export"
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand ExportSelectedBrep { get; } = new(
        () =>
        {
            if (ExportDialog.Execute<IBodyExporter>(out var filename, out var exporter))
            {
                if (!ExchangerSettings.Execute<IBodyExporter>(exporter))
                    return;

                bool success;
                using (new ProcessingScope(null, "Exporting geometry..."))
                {
                    success = exporter.DoExport(filename, Selection.SelectedEntities.OfType<Body>());
                }

                if (!success)
                {
                    ErrorDialogs.CannotExport(filename);
                }
            }
        },
        () => Selection.SelectedEntities.Count > 0 
              && Selection.SelectedEntities.TrueForAll(entity => entity is Body))
    {
        Header = () => "Export Selected...",
        Title = () => "Export Selected Bodies",
        Description = () => "Export geometry data of the selected entities to an other file format.",
        Icon = () => "App-Export"
    };
        
    //--------------------------------------------------------------------------------------------------

    public static RelayCommand<string> ImportDroppedFile { get; } = new(
        (filePath) =>
        {
            if (filePath.IsNullOrEmpty())
                return;

            var extension = PathUtils.GetExtensionWithoutPoint(filePath);
            if (extension != null && extension.Equals(Model.FileExtension))
            {
                // We have a model file
                InteractiveContext.Current.DocumentController?.OpenFile(filePath, false);
            }

            var bodyImporter = ExchangeRegistry.FindExchanger<IBodyImporter>(extension);
            if (bodyImporter != null)
            {
                var mergeIntoCurrent = Dialogs.Dialogs.AskDropImportBehaviour();
                if (!mergeIntoCurrent.HasValue)
                    return;

                if (mergeIntoCurrent.Value == false)
                {
                    // Replace model
                    InteractiveContext.Current.DocumentController?.OpenFile(filePath, false);
                    return;
                }

                if (!ExchangerSettings.Execute<IBodyImporter>(bodyImporter))
                    return;

                // Merge
                using (new ProcessingScope(null, "Importing file..."))
                {
                    if (!bodyImporter.DoImport(filePath, out var newBodies))
                    {
                        CoreContext.Current.MessageHandler.OnProcessingStopped();
                        ErrorDialogs.CannotImport(filePath);
                        return;
                    }

                    foreach (var newBody in newBodies)
                    {
                        CoreContext.Current?.Document?.Add(newBody);
                    }

                    Commit();
                    Selection.SelectEntities(newBodies);
                }
            }
                
            var sketchImporter = ExchangeRegistry.FindExchanger<ISketchImporter>(extension);
            if (sketchImporter != null)
            {
                if (!ExchangerSettings.Execute<ISketchImporter>(sketchImporter))
                    return;

                // Merge
                using (new ProcessingScope(null, "Importing to sketch..."))
                {
                    if (!sketchImporter.DoImport(filePath, out var points, out var segments, out var constraints)
                        || segments.Count == 0)
                    {
                        ErrorDialogs.CannotImport(filePath);
                        return;
                    }

                    var sketch = Sketch.Create();
                    sketch.AddElements(points, null, segments, constraints);
                    var newBody = Body.Create(sketch);
                    CoreContext.Current?.Document?.Add(newBody);

                    Commit();
                    Selection.SelectEntity(newBody);
                }
            }

            InteractiveContext.Current.WorkspaceController.Invalidate();
        },

        (filePath) =>
        {
            if (filePath.IsNullOrEmpty())
            {
                return false;
            }

            var extension = PathUtils.GetExtensionWithoutPoint(filePath);
            if (extension != null
                && (extension.Equals(Model.FileExtension)
                    || ExchangeRegistry.FindExchanger<IBodyImporter>(extension) != null
                    || ExchangeRegistry.FindExchanger<ISketchImporter>(extension) != null))
            {
                return true;
            }

            return false;
        }
    );

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand ImportFileToSketch { get; } = new(
        () =>
        {
            if (ImportDialog.Execute<ISketchImporter>(out var filePath, out var importer))
            {
                if (!ExchangerSettings.Execute<ISketchImporter>(importer))
                    return;

                if (!importer.DoImport(filePath, out var points, out var segments, out var constraints)
                    || segments.Count == 0)
                {
                    ErrorDialogs.CannotImport(filePath);
                    return;
                }

                var sketch = Sketch.Create();
                sketch.AddElements(points, null, segments, constraints);
                var newBody = Body.Create(sketch);
                CoreContext.Current?.Document?.Add(newBody);
                Commit();
                Selection.SelectEntity(newBody);
            }
        },
        () => !(InteractiveContext.Current?.Document is null))
    {
        Header = () => "Import...",
        Title = () => "Import into Sketch",
        Description = () => "Import vector data from other file formats into new sketch.",
        Icon = () => "App-Import"
    };
                
    //--------------------------------------------------------------------------------------------------

}