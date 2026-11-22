using System;
using System.Collections.Generic;
using System.IO;
using System.Windows;
using System.Windows.Threading;
using Microsoft.Win32;
using Macad.Common;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Interaction.Dialogs;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Window;

public class WelcomeDialogModel : PanelBase
{
    public List<string> MruList { get; private set; }

    public string SamplesDirectory { get; private set; }

    public RelayCommand CreateNewCommand { get; }
    public RelayCommand OpenExistingCommand { get; }
    public RelayCommand OpenSampleCommand { get; }
    public RelayCommand<string> OpenRecentCommand { get; }
    public RelayCommand BackCommand { get; }
    public RelayCommand<SampleInfo> OpenSampleFileCommand { get; }

    /// <summary>
    /// Samples shown in the gallery, loaded when the gallery is shown the first time.
    /// </summary>
    public List<SampleInfo> Samples { get; private set; }

    /// <summary>
    /// True if the sample gallery is shown instead of the start page.
    /// </summary>
    public bool IsGalleryVisible
    {
        get { return _IsGalleryVisible; }
        private set
        {
            _IsGalleryVisible = value;
            RaisePropertyChanged();
        }
    }

    bool _IsGalleryVisible;
    bool _IsOpeningSample;

    // Thumbnails are shown with 96 DIP, decode with higher resolution for HiDPI screens
    const int _ThumbnailDecodeWidth = 192;

    //--------------------------------------------------------------------------------------------------

    internal WelcomeDialogModel()
    {
        OpenRecentCommand = new RelayCommand<string>(_OpenRecentCommandExecute);
        CreateNewCommand = new RelayCommand(_CreateNewCommandExecute);
        OpenExistingCommand = new RelayCommand(_OpenExistingCommandExecute);
        OpenSampleCommand = new RelayCommand(_OpenSampleCommandExecute, () => SamplesDirectory != null );
        BackCommand = new RelayCommand(_BackCommandExecute);
        OpenSampleFileCommand = new RelayCommand<SampleInfo>(_OpenSampleFileCommandExecute);
    }

    //--------------------------------------------------------------------------------------------------

    internal void DeferredInit()
    {
        MruList = _LoadMRU();
        RaisePropertyChanged(nameof(MruList));

        SamplesDirectory = Path.Combine(PathUtils.GetAppExecutableDirectory(), "Samples");
        if (!Directory.Exists(SamplesDirectory))
        {
            // Try repository structure
            SamplesDirectory = Path.GetFullPath(Path.Combine(PathUtils.GetAppExecutableDirectory(), @"..", "..", "Data", "Samples"));
            if (!Directory.Exists(SamplesDirectory))
            {
                SamplesDirectory = null; // Disable command
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void AppInitialized()
    {
    }

    //--------------------------------------------------------------------------------------------------

    List<string> _LoadMRU()
    {
        // Use the settings API, which respects the sandbox mode
        return AppContext.Current?.LoadLocalSettings<List<string>>("MRU") ?? new List<string>();
    }

    //--------------------------------------------------------------------------------------------------

    void _CreateNewCommandExecute()
    {
        // WelcomeWindow is running at startup, so there is already a new model in place
        //_BeginInvoke(() =>
        //{
        //    DocumentCommands.CreateNewModel.Execute();
        //});

        WelcomeDialog.Current?.Close();
    }

    //--------------------------------------------------------------------------------------------------

    void _OpenSampleCommandExecute()
    {
        if (Samples == null)
        {
            // Load on the dialog thread, the main thread may still be busy with initialization.
            // The message log belongs to the main thread, so problems are forwarded to it.
            _SetSamples(SampleCatalog.Load(SamplesDirectory, out var indexError));
            if (indexError != null)
            {
                _BeginInvoke(() => Core.Messages.Warning(indexError));
            }
        }

        IsGalleryVisible = true;
    }

    //--------------------------------------------------------------------------------------------------

    void _SetSamples(List<SampleInfo> samples)
    {
        Samples = samples;
        RaisePropertyChanged(nameof(Samples));

        // Decode thumbnails one by one with low priority, the list shows them as they arrive.
        // Queued operations are dropped when the dialog closes and its dispatcher shuts down.
        foreach (var sample in samples)
        {
            Dispatcher.InvokeAsync(() =>
            {
                if (!_IsOpeningSample)
                {
                    sample.LoadThumbnail(_ThumbnailDecodeWidth);
                }
            }, DispatcherPriority.Background);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _BackCommandExecute()
    {
        IsGalleryVisible = false;
    }

    //--------------------------------------------------------------------------------------------------

    void _OpenSampleFileCommandExecute(SampleInfo sample)
    {
        if (sample?.FilePath == null)
            return;

        _IsOpeningSample = true;
        var fileName = sample.FilePath;
        _BeginInvoke(() =>
        {
            InteractiveContext.Current?.DocumentController?.OpenModel(fileName);
        });
        WelcomeDialog.Current?.Close();
    }

    //--------------------------------------------------------------------------------------------------

    void _OpenExistingCommandExecute()
    {
        var fileName = _ShowOpenFileDialog(null);
        if (fileName != null)
        {
            _BeginInvoke(() =>
            {
                InteractiveContext.Current?.DocumentController?.OpenModel(fileName);
            });
            WelcomeDialog.Current?.Close();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _OpenRecentCommandExecute(string fileName)
    {
        if (!File.Exists(fileName))
        {
            bool remove = false;
            _BeginInvoke(() =>
            {
                remove = ErrorDialogs.RecentFileNotFound(fileName);
                if(remove)
                {
                    InteractiveContext.Current?.DocumentController?.RemoveFromMruList(fileName);
                        
                    MruList = _LoadMRU();
                    RaisePropertyChanged(nameof(MruList));
                }
            });


            return;
        }

        using (new WaitCursor())
        {
            WelcomeDialog.Current.Cursor = Cursors.Wait;
            _BeginInvoke(() => { InteractiveContext.Current?.DocumentController?.OpenFile(fileName, false); });
        }

        WelcomeDialog.Current?.Close();
    }

    //--------------------------------------------------------------------------------------------------

    string _ShowOpenFileDialog(string path)
    {
        var dlg = new OpenFileDialog()
        {
            Title = "Open Model...",
            CheckFileExists = true,
            Filter = "Macad3D Models|*." + Model.FileExtension,
            DefaultExt = Model.FileExtension,
            InitialDirectory = path ?? ""
        };
        var result = dlg.ShowDialog(WelcomeDialog.Current);
        return (bool) result ? dlg.FileName : null;
    }

    //--------------------------------------------------------------------------------------------------

    void _BeginInvoke(Action callback)
    {
        Application.Current.Dispatcher.BeginInvoke(callback);
    }

}