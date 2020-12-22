using System;
using System.Linq;
using System.Windows;
using System.Windows.Input;
using Microsoft.Win32;
using Macad.Common;
using Macad.Core;
using Macad.Core.Exchange;
using Macad.Common.Serialization;
using Macad.Occt;
using Macad.Occt.Helper;
using Macad.Presentation;

namespace Macad.Interaction.Dialogs
{
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

        #region Logic

        public ICommand ExportCommand { get; private set; }

        void ExecuteExport()
        {
            InteractiveContext.Current.SaveLocalSettings("ExportViewportHlr", Settings);

            var exchangers = ExchangeRegistry.EnumerateExchanger<IVectorExporter>()?.ToArray();
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
                FilterIndex = 1
            };
            var result = dlg.ShowDialog(Application.Current.MainWindow) ?? false;
            DialogResult = true;
            if (result)
            {
                var exporter = exchangers[dlg.FilterIndex - 1];

                if (!ExchangerSettings.Execute<ISketchImporter>(exporter))
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

        bool DoExport(string filename, IVectorExporter exporter)
        {
            try
            {
                var projection = new Ax3(_Viewport.EyePoint, _Viewport.GetViewDirection().Reversed(), _Viewport.GetRightDirection());
                var exportHelper = new DrawingExportHelper(Settings.UseTriangulation, projection);

                if (Settings.VisibleOutline)
                {
                    exportHelper.IncludeEdgeType(HlrEdgeType.VisibleSharp);
                    exportHelper.IncludeEdgeType(HlrEdgeType.VisibleOutline);
                }
                if (Settings.VisibleSmooth)
                    exportHelper.IncludeEdgeType(HlrEdgeType.VisibleSmooth);
                if (Settings.VisibleSewn)
                    exportHelper.IncludeEdgeType(HlrEdgeType.VisibleSewn);
                if (Settings.HiddenOutline)
                {
                    exportHelper.IncludeEdgeType(HlrEdgeType.HiddenSharp);
                    exportHelper.IncludeEdgeType(HlrEdgeType.HiddenOutline);
                }
                if (Settings.HiddenSmooth)
                    exportHelper.IncludeEdgeType(HlrEdgeType.HiddenSmooth);
                if (Settings.HiddenSewn)
                    exportHelper.IncludeEdgeType(HlrEdgeType.HiddenSewn);

                return exportHelper.Export(filename, exporter, InteractiveContext.Current.WorkspaceController.VisualShapes.GetVisibleBReps());
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
}
