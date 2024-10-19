using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Drawing.Imaging;
using System.IO;
using System.Linq;
using System.Windows;
using System.Windows.Shell;
using Macad.Interaction.Dialogs;
using Microsoft.Win32;
using Macad.Common;
using Macad.Core;
using Macad.Common.Serialization;
using Macad.Core.Topology;
using Macad.Presentation;

namespace Macad.Interaction;

public sealed class ModelController : BaseObject, IDisposable
{
    #region Member variables

    const int _MaxMruCount = 12;

    public ObservableCollection<string> MruList { get; }

    #endregion

    #region n'tor

    public ModelController()
    {
        MruList = InteractiveContext.Current.LoadLocalSettings<ObservableCollection<string>>("MRU")
                  ?? new ObservableCollection<string>();
        while (MruList.Count >= _MaxMruCount)
        {
            MruList.RemoveAt(MruList.Count-1);
        }

        Model.AdditionalDataSaving += _Model_AdditionalDataSaving;
    }

    //--------------------------------------------------------------------------------------------------

    ~ModelController()
    {
        Dispose(false);
    }

    public void Dispose()
    {
        Dispose(true);
    }

    void Dispose(bool disposing)
    {
        Model.AdditionalDataSaving -= _Model_AdditionalDataSaving;
        GC.SuppressFinalize(this);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Model

    public Model NewModel()
    {
        Model newModel = new();
        InteractiveContext.Current.Document = newModel;
        newModel.ResetUnsavedChanges();
        return newModel;
    }

    //--------------------------------------------------------------------------------------------------

    public Model CreateModelAs(string baseDirectory = null)
    {
        var dlg = new SaveFileDialog()
        {
            Title = "Create Model...",
            CheckPathExists = true,
            Filter = "Macad3D Models|*." + Model.FileExtension,
            DefaultExt = Model.FileExtension,
        };
        if (!(baseDirectory is null))
        {
            dlg.InitialDirectory = baseDirectory;
        }

        var result = dlg.ShowDialog(Application.Current.MainWindow);
        if (!(result ?? false))
            return null;

        var relativeFilePath = dlg.FileName;
        var model = NewModel();
        if (model.SaveToFile(relativeFilePath))
        {
            return model;
        }
        else
        {
            ErrorDialogs.CannotSaveFile(dlg.FileName);
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public bool OpenModel(string filePath)
    {
        try
        {
            var stopwatch = new Stopwatch();
            stopwatch.Start();

            var context = new SerializationContext(SerializationScope.Storage);
            var model = Model.CreateFromFile(filePath, context);
            if (model == null)
            {
                switch (context.Result)
                {
                    case SerializationResult.VersionMismatch:
                        ErrorDialogs.FileVersionIsNewer(filePath);
                        break;
                    default:
                        ErrorDialogs.CannotLoadFile(filePath);
                        break;
                }

                return false;
            }

            if (context.HasErrors)
            {
                ErrorDialogs.FileLoadedWithErrors(filePath);
            }

            InteractiveContext.Current.Document = model;

            model.ResetUnsavedChanges();
            AddToMruList(filePath);

            stopwatch.Stop();
            Messages.Info(string.Format("Model " + model.Name + " loaded in {0}:{1} seconds.", stopwatch.Elapsed.Seconds, stopwatch.Elapsed.Milliseconds));
            return true;
        }
        catch (Exception e)
        {
            Messages.Exception($"Exception while loading model {filePath}.", e);
            ErrorDialogs.CannotLoadFile(filePath);
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool SaveModel()
    {
        var model = InteractiveContext.Current.Document;
        if (model.FilePath.IsNullOrEmpty())
        {
            return SaveModelAs();
        }
        else
        {
            if (model.Save())
            {
                AddToMruList(model.FilePath);
                return true;
            }
            ErrorDialogs.CannotSaveFile(model.FilePath);
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public bool SaveModelAs()
    {
        var dlg = new SaveFileDialog()
        {
            Title = "Saving Model...",
            InitialDirectory = Path.GetDirectoryName(InteractiveContext.Current.Document.FilePath),
            FileName = Path.GetFileName(InteractiveContext.Current.Document.FilePath),
            CheckPathExists = true,
            Filter = "Macad3D Models|*." + Model.FileExtension,
            DefaultExt = Model.FileExtension
        };
        var result = dlg.ShowDialog(Application.Current.MainWindow);
        if (result ?? false)
        {
            var filePath = dlg.FileName;
            if (PathUtils.GetExtensionWithoutPoint(filePath).ToLower() != Model.FileExtension)
            {
                filePath += "." + Model.FileExtension;
            }
            var model = InteractiveContext.Current.Document;
            if (model.SaveToFile(filePath))
            {
                AddToMruList(model.FilePath);
                return true;
            }
            else
            {
                ErrorDialogs.CannotSaveFile(dlg.FileName);
            }
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public bool OpenModelFrom(string initialDirectory)
    {
        var dlg = new OpenFileDialog()
        {
            Title = "Open Model...",
            CheckFileExists = true,
            Filter = "Macad3D Models|*." + Model.FileExtension,
            DefaultExt = Model.FileExtension,
            InitialDirectory = initialDirectory ?? String.Empty
        };
        var result = dlg.ShowDialog(Application.Current.MainWindow);
        if (!((bool) result))
        {
            return false;
        }

        return OpenModel(dlg.FileName);
    }

    //--------------------------------------------------------------------------------------------------

    internal bool AskForSavingModelChanges()
    {
        if (InteractiveContext.Current.Document == null)
            return true;

        if (InteractiveContext.Current.Document.HasUnsavedChanges)
        {
            switch (Dialogs.Dialogs.AskForSavingModelChanges())
            {
                case TaskDialogResults.Cancel:
                    return false;

                case TaskDialogResults.Yes:
                    if (!SaveModel())
                    {
                        return false;
                    }
                    break;

                case TaskDialogResults.No:
                    break;
            }
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Generic File I/O

    public void OpenFile(string filePath, bool mergeToCurrent)
    {
        var extension = PathUtils.GetExtensionWithoutPoint(filePath);
        if (extension != null && extension.Equals(Model.FileExtension))
        {
            // Load model
            if (AskForSavingModelChanges())
            {
                OpenModel(filePath);
            }
            return;
        }

        // Try importer
        var importer = ExchangeRegistry.FindExchanger<IBodyImporter>(extension);
        if (importer == null)
            return;

        if (!mergeToCurrent)
        {
            if (!AskForSavingModelChanges())
            {
                return;
            }
        }

        // Call for Settings
        if (!ExchangerSettings.Execute<IBodyImporter>(importer))
            return;

        // Do it
        using (new ProcessingScope(null, "Importing file..."))
        {
            if (!mergeToCurrent)
            {
                NewModel();
            }

            if (importer.DoImport(filePath, out var newBodies))
            {
                foreach (var newBody in newBodies)
                {
                    CoreContext.Current?.Document?.Add(newBody);
                }

                InteractiveContext.Current.ViewportController.ZoomFitAll();
                AddToMruList(filePath);
            }

            CoreContext.Current.UndoHandler.Commit();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void AddToMruList(string filePath)
    {
        var index = MruList.IndexOfFirst(s => s.CompareIgnoreCase(filePath) == 0);
        if (index >= 0)
        {
            // Move to top of list
            MruList.Move(index, 0);
            MruList[0] = filePath;
        }
        else
        {
            if(MruList.Count >= _MaxMruCount)
                MruList.RemoveAt(MruList.Count-1);

            MruList.Insert(0, filePath);
        }

        InteractiveContext.Current.SaveLocalSettings("MRU", MruList);

        try
        {
            JumpList.AddToRecentCategory(filePath);
        }
        catch
        {
            // ignored
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void RemoveFromMruList(string filePath)
    {
        var index = MruList.IndexOfFirst(s => s.CompareIgnoreCase(filePath) == 0);
        if (index >= 0)
        {
            MruList.RemoveAt(index);
        }

        InteractiveContext.Current.SaveLocalSettings("MRU", MruList);
    }
        
    //--------------------------------------------------------------------------------------------------

    void _Model_AdditionalDataSaving(Document<InteractiveEntity> sender, FileSystem fileSystem)
    {
        if (InteractiveContext.Current?.Document != sender)
            return; // This model is not active

        var bitmap = InteractiveContext.Current?.ViewportController.RenderToBitmap(500, 500);
        if (bitmap == null)
            return;

        using (var ms = new MemoryStream())
        {
            bitmap.Save(ms, ImageFormat.Png);
            fileSystem.Write("thumbnail.png", ms.GetBuffer());
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Delete, Duplicate, Clipboard
            
    const string ClipboardContentFormat = "Macad.ModelContent.1";
        
    [SerializeType]
    class ClipboardHeader
    {
        [SerializeMember]
        public Guid ModelGuid { get; set; }

        [SerializeMember]
        public Guid[] Entities { get; set; }
    }

    //--------------------------------------------------------------------------------------------------

    internal bool CanDelete(List<InteractiveEntity> entities)
    {
        return entities.Any() && entities.All(e => CoreContext.Current.Document.Contains(e));
    }

    //--------------------------------------------------------------------------------------------------
        
    internal void Delete(List<InteractiveEntity> entities)
    {
        if (!CanDelete(entities))
            return;

        // Delete all bodies. Use array copy, since the list will change.
        var entitiesToDelete = entities.ToArray();
        InteractiveContext.Current.WorkspaceController.Selection.ChangeEntitySelection(new InteractiveEntity[0], entitiesToDelete);
        InteractiveContext.Current.Document.SafeDelete(entitiesToDelete);
    }

    //--------------------------------------------------------------------------------------------------

    internal bool CanDuplicate(List<InteractiveEntity> entities)
    {
        return entities.Any() && entities.All(e => CoreContext.Current.Document.Contains(e));
    }

    //--------------------------------------------------------------------------------------------------

    internal IEnumerable<InteractiveEntity> Duplicate(List<InteractiveEntity> entities, CloneOptions cloneOptions = null)
    {
        if (!CanDuplicate(entities))
            return null;

        var context = new SerializationContext(SerializationScope.CopyPaste);
        context.SetInstance(InteractiveContext.Current.Document);
        context.SetInstance<IDocument>(InteractiveContext.Current.Document);
        var serialized = Serializer.Serialize(entities, context);

        context = new SerializationContext(SerializationScope.CopyPaste);
        context.SetInstance(InteractiveContext.Current.Document);
        context.SetInstance<IDocument>(InteractiveContext.Current.Document);
        context.SetInstance(ReadOptions.RecreateGuids);

        cloneOptions ??= new InteractiveCloneOptions();
        cloneOptions.AddEntitiesToClone(entities);
        context.SetInstance<CloneOptions>(cloneOptions);
        var cloned = Serializer.Deserialize<InteractiveEntity[]>(serialized, context);

        if ((cloneOptions as InteractiveCloneOptions)?.IsCanceled ?? false)
            return null;

        foreach (var entity in context.GetInstanceList<InteractiveEntity>())
        {
            InteractiveContext.Current.Document.Add(entity);
            entity.RaiseVisualChanged();
        }

        InteractiveContext.Current.WorkspaceController.Selection.SelectEntities(cloned);
        return cloned;
    }

    //--------------------------------------------------------------------------------------------------

    internal bool CanCopyToClipboard(List<InteractiveEntity> entities)
    {
        return entities.Any() && entities.All(e => e is InteractiveEntity && CoreContext.Current.Document.Contains(e));
    }

    //--------------------------------------------------------------------------------------------------

    internal void CopyToClipboard(List<InteractiveEntity> entities)
    {
        if (!CanCopyToClipboard(entities))
            return;

        var context = new SerializationContext(SerializationScope.CopyPaste);
        context.SetInstance(InteractiveContext.Current.Document);
        context.SetInstance<IDocument>(InteractiveContext.Current.Document);
        var document = new ClipboardHeader()
        {
            ModelGuid = CoreContext.Current.Document.Guid,
            Entities = entities.Select(entity => entity.Guid).ToArray()
        };
        var writer = new Writer();
        if (!Serializer.Serialize(writer, document, context)
            || !Serializer.Serialize(writer, entities, context))
            return;

        InteractiveContext.Current?.Clipboard.SetData(ClipboardContentFormat, writer.ToString());
    }

    //--------------------------------------------------------------------------------------------------

    internal bool CanPasteFromClipboard()
    {
        return InteractiveContext.Current?.Clipboard.ContainsData(ClipboardContentFormat) ?? false;
    }

    //--------------------------------------------------------------------------------------------------

    internal IEnumerable<InteractiveEntity> PasteFromClipboard(CloneOptions cloneOptions = null)
    {
        var serialized = InteractiveContext.Current?.Clipboard.GetDataAsString(ClipboardContentFormat);
        if (serialized == null)
            return null;

        var context = new SerializationContext(SerializationScope.CopyPaste);
        context.SetInstance(InteractiveContext.Current.Document);
        context.SetInstance<IDocument>(InteractiveContext.Current.Document);

        var reader = new Reader(serialized, ReadOptions.RecreateGuids);
        var header = Serializer.Deserialize<ClipboardHeader>(reader, context);
        if (header == null)
            return null;

        // Same Model -> Ask for cloning
        // Foreign Model -> Clone always
        cloneOptions ??= header.ModelGuid == CoreContext.Current.Document.Guid
                             ? new InteractiveCloneOptions()
                             : new CloneOptions(true);
        cloneOptions.AddEntitiesToClone(header.Entities);
        context.SetInstance<CloneOptions>(cloneOptions);

        var cloned = Serializer.Deserialize<InteractiveEntity[]>(reader, context);
        foreach (var entity in context.GetInstanceList<InteractiveEntity>())
        {
            InteractiveContext.Current.Document.Add(entity);
            entity.RaiseVisualChanged();
        }

        InteractiveContext.Current.WorkspaceController?.Selection?.SelectEntities(cloned);
        return cloned;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}