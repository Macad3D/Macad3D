using System;
using System.Linq;
using System.Windows;
using System.Windows.Input;
using Microsoft.Win32;
using Macad.Common;
using Macad.Core;
using Macad.Common.Serialization;
using Macad.Core.Drawing;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Occt.Helper;
using Macad.Presentation;

namespace Macad.Interaction.Dialogs;

[SerializeType]
public class ExportViewportHlrSettings : BaseObject
{
    #region Properties

    [SerializeMember]
    public bool VisibleOutline
    {
        get { return _VisibleOutline; }
        set
        {
            _VisibleOutline = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool VisibleSmooth
    {
        get { return _VisibleSmooth; }
        set
        {
            _VisibleSmooth = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool VisibleSewn
    {
        get { return _VisibleSewn; }
        set
        {
            _VisibleSewn = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool HiddenOutline
    {
        get { return _HiddenOutline; }
        set
        {
            _HiddenOutline = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool HiddenSmooth
    {
        get { return _HiddenSmooth; }
        set
        {
            _HiddenSmooth = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool HiddenSewn
    {
        get { return _HiddenSewn; }
        set
        {
            _HiddenSewn = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool UseTriangulation
    {
        get { return _UseTriangulation; }
        set
        {
            _UseTriangulation = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    bool _VisibleOutline;
    bool _VisibleSmooth;
    bool _VisibleSewn;
    bool _HiddenOutline;
    bool _HiddenSmooth;
    bool _HiddenSewn;
    bool _UseTriangulation;

    //--------------------------------------------------------------------------------------------------
        
    #endregion

    #region Constructor

    public ExportViewportHlrSettings()
    {
        _VisibleOutline = true;
        _HiddenOutline = true;
    }

    #endregion
}

//--------------------------------------------------------------------------------------------------

public partial class ExportViewportHlr : Dialog
{
    public static readonly DependencyProperty SettingsProperty = DependencyProperty.Register("Settings", typeof(ExportViewportHlrSettings), typeof(ExportViewportHlr), new PropertyMetadata(default(ExportViewportHlrSettings)));

    public ExportViewportHlrSettings Settings
    {
        get { return (ExportViewportHlrSettings) GetValue(SettingsProperty); }
        set { SetValue(SettingsProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public bool SelectedElementsOptionAvailable { get; set; }
    public bool IncludeSelectedElementsOnly { get; set; }

    //--------------------------------------------------------------------------------------------------

    #region Logic

    static int _LastFilterIndex = 1;

    public ICommand ExportCommand { get; private set; }

    void ExecuteExport()
    {
        InteractiveContext.Current.SaveLocalSettings("ExportViewportHlr", Settings);

        var exchangers = ExchangeRegistry.EnumerateExchanger<IDrawingExporter>()?.ToArray();
        if (exchangers == null || exchangers.Length == 0)
            return;

        // Create Filter
        var filter = string.Join("|",
                                 exchangers.Select(exchanger =>
                                 {
                                     var extensions = string.Join(";", exchanger.Extensions.Select(s => "*." + s));
                                     return string.Format("{0} ({1})|{1}", exchanger.Description, extensions);
                                 }));

        // Execute Dialog
        var dlg = new SaveFileDialog()
        {
            CheckPathExists = true,
            OverwritePrompt = true,
            Filter = filter,
            FilterIndex = _LastFilterIndex
        };
        var result = dlg.ShowDialog(Application.Current.MainWindow) ?? false;
        DialogResult = true;
        if (result)
        {
            var exporter = exchangers[dlg.FilterIndex - 1];
            _LastFilterIndex = dlg.FilterIndex;

            if (!ExchangerSettings.Execute<IDrawingExporter>(exporter))
                return;

            using (new ProcessingScope(null, "Exporting Line Drawing"))
            {
                if (!DoExport(dlg.FileName, exporter))
                {
                    MessageBox.Show(Application.Current.MainWindow, "The export was not successfull. Please see message log for further information about the error.", "Error", MessageBoxButton.OK, MessageBoxImage.Error);
                }
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    bool DoExport(string filename, IDrawingExporter exporter)
    {
        try
        {
            var projection = new Ax3(_Viewport.EyePoint, _Viewport.GetViewDirection().Reversed(), _Viewport.GetRightDirection());
            var hlrEdgeTypes = HlrEdgeTypes.None;

            if (Settings.VisibleOutline)
            {
                hlrEdgeTypes |= HlrEdgeTypes.VisibleSharp;
                hlrEdgeTypes |= HlrEdgeTypes.VisibleOutline;
            }
            if (Settings.VisibleSmooth)
                hlrEdgeTypes |= HlrEdgeTypes.VisibleSmooth;
            if (Settings.VisibleSewn)
                hlrEdgeTypes |= HlrEdgeTypes.VisibleSewn;
            if (Settings.HiddenOutline)
            {
                hlrEdgeTypes |= HlrEdgeTypes.HiddenSharp;
                hlrEdgeTypes |= HlrEdgeTypes.HiddenOutline;
            }
            if (Settings.HiddenSmooth)
                hlrEdgeTypes |= HlrEdgeTypes.HiddenSmooth;
            if (Settings.HiddenSewn)
                hlrEdgeTypes |= HlrEdgeTypes.HiddenSewn;

            var breps = (SelectedElementsOptionAvailable && IncludeSelectedElementsOnly
                             ? InteractiveContext.Current.WorkspaceController.Selection.SelectedEntities
                             : InteractiveContext.Current.WorkspaceController.VisualObjects.GetVisibleEntities())
                        .OfType<Body>()
                        .Select(body => body.GetTransformedBRep())
                        .Where(shape => shape != null);
            var source = new TopoDSBrepSource(breps.ToArray());
            var hlrBrepDrawing = HlrDrawing.Create(projection, hlrEdgeTypes, source);
            hlrBrepDrawing.UseTriangulation = Settings.UseTriangulation;

            var drawing = new Drawing();
            drawing.Add(hlrBrepDrawing);

            return exporter.DoExport(filename, drawing);
        }
        catch (Exception e)
        {
            Messages.Exception("Exception while exporting line drawing from viewport.", e);
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Dialog

    readonly Viewport _Viewport;

    public ExportViewportHlr(Viewport viewport)
    {
        _Viewport = viewport;

        Settings = InteractiveContext.Current.LoadLocalSettings<ExportViewportHlrSettings>("ExportViewportHlr") ?? new ExportViewportHlrSettings();
        SelectedElementsOptionAvailable = InteractiveContext.Current.WorkspaceController.Selection.SelectedEntities.Count > 0;
        IncludeSelectedElementsOnly = SelectedElementsOptionAvailable;

        ExportCommand = new RelayCommand(ExecuteExport);

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public static bool Execute(Window ownerWindow, Viewport viewport)
    {
        var dlg = new ExportViewportHlr(viewport)
        {
            Owner = ownerWindow
        };
        return dlg.ShowDialog();
    }
        

    #endregion    
}