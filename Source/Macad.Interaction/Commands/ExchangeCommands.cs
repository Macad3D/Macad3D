using System.Linq;
using System.Windows;
using Macad.Interaction.Dialogs;
using Macad.Common;
using Macad.Core;
using Macad.Core.Exchange;
using Macad.Core.Topology;
using Macad.Presentation;

namespace Macad.Interaction
{
    public static class ExchangeCommands
    {
        #region Helper

        static WorkspaceController _WorkspaceController
        {
            get { return InteractiveContext.Current?.WorkspaceController; }
        }

        //--------------------------------------------------------------------------------------------------

        static UndoHandler _UndoHandler
        {
            get { return InteractiveContext.Current?.UndoHandler; }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

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
                        CoreContext.Current?.Document?.AddChild(newBody);
                    }
                    _UndoHandler?.Commit();
                    _WorkspaceController.Selection.SelectEntities(newBodies);
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
                        success = exporter.DoExport(filename, _WorkspaceController.VisualObjects.GetVisibleEntities().OfType<Body>());
                    }

                    if (!success)
                    {
                        ErrorDialogs.CannotExport(filename);
                    }
                }
            },
            () => _WorkspaceController.VisualObjects.GetVisibleEntities().Any(entity => entity is Body))
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
                        success = exporter.DoExport(filename, _WorkspaceController.Selection.SelectedEntities.OfType<Body>());
                    }

                    if (!success)
                    {
                        ErrorDialogs.CannotExport(filename);
                    }
                }
            },
            () => _WorkspaceController?.Selection.SelectedEntities.Count > 0 
                  && _WorkspaceController.Selection.SelectedEntities.TrueForAll(entity => entity is Body))
        {
            Header = () => "Export Selected...",
            Title = () => "Export Selected Bodies",
            Description = () => "Export geometry data of the selected entities to an other file format.",
            Icon = () => "App-Export"
        };

        //--------------------------------------------------------------------------------------------------

        static string _ExtractDropFile(DragEventArgs e)
        {
            if (e.Data.GetDataPresent(DataFormats.FileDrop))
            {
                // Note that you can have more than one file.
                var files = (string[]) e.Data.GetData(DataFormats.FileDrop);
                if (files != null)
                {
                    var filePath = files.First();
                }
            }
            return null;
        }

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

                var importer = ExchangeRegistry.FindExchanger<IBodyImporter>(extension);
                if (importer != null)
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

                    if (!ExchangerSettings.Execute<IBodyImporter>(importer))
                        return;

                    // Merge
                    using (new ProcessingScope(null, "Importing file..."))
                    {
                        if (!importer.DoImport(filePath, out var newBodies))
                        {
                            CoreContext.Current.MessageHandler.OnProcessingStopped();
                            ErrorDialogs.CannotImport(filePath);
                            return;
                        }

                        foreach (var newBody in newBodies)
                        {
                            CoreContext.Current?.Document?.AddChild(newBody);
                        }

                        InteractiveContext.Current.UndoHandler?.Commit();
                        InteractiveContext.Current.WorkspaceController.Selection.SelectEntities(newBodies);
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
                        || ExchangeRegistry.FindExchanger<IBodyImporter>(extension) != null))
                {
                    return true;
                }

                return false;
            }
        );

        //--------------------------------------------------------------------------------------------------

    }
}