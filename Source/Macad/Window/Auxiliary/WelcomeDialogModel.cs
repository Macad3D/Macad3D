using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Windows;
using Microsoft.Win32;
using Macad.Common;
using Macad.Common.Serialization;
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

    //--------------------------------------------------------------------------------------------------

    internal WelcomeDialogModel()
    {
        OpenRecentCommand = new RelayCommand<string>(_OpenRecentCommandExecute);
        CreateNewCommand = new RelayCommand(_CreateNewCommandExecute);
        OpenExistingCommand = new RelayCommand(_OpenExistingCommandExecute);
        OpenSampleCommand = new RelayCommand(_OpenSampleCommandExecute, () => SamplesDirectory != null );
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
        var path = Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData, Environment.SpecialFolderOption.Create), "Macad", "Settings", "MRU");
        if (!File.Exists(path))
        {
            return new List<string>();
        }

        var data = File.ReadAllText(path, Encoding.UTF8);
        if (data.IsNullOrEmpty())
        {
            return new List<string>();
        }

        return Serializer.Deserialize<List<string>>(data, new SerializationContext(SerializationScope.Storage));
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
        var fileName = _ShowOpenFileDialog(SamplesDirectory);
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