using Macad.Presentation;
using System;
using Macad.Core;

namespace Macad.Exchange.Gltf;

public sealed class GltfSettingsPanelCreator : IExchangerSettingsPanelCreator
{
    public Type ExchangerType => typeof(GltfExchanger);

    //--------------------------------------------------------------------------------------------------

    public object CreatePanel<T>(IExchanger exchanger)
    {
        if (typeof(T) == typeof(IBodyExporter))
        {
            return new GltfSettingsPanel((exchanger as GltfExchanger)?.Settings);
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        ExchangeRegistry.Register(new GltfSettingsPanelCreator());
    }

    //--------------------------------------------------------------------------------------------------

}

public sealed partial class GltfSettingsPanel : SettingsPanelBase
{
    public bool ExportBinary
    {
        get => _GltfSettings.ExportBinary;
        set
        {
            _GltfSettings.ExportBinary = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool EmbedBuffer
    {
        get => _GltfSettings.EmbedBuffer;
        set
        {
            _GltfSettings.EmbedBuffer = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    GltfExchanger.GltfSettings _GltfSettings;

    //--------------------------------------------------------------------------------------------------

    public RelayCommand<bool> SetExportBinaryCommand { get; }
    public RelayCommand<bool> SetEmbedBufferCommand { get; }

    //--------------------------------------------------------------------------------------------------

    public GltfSettingsPanel(GltfExchanger.GltfSettings gltfSettings)
    {
        _GltfSettings = gltfSettings;
        ExportBinary = _GltfSettings.ExportBinary;
        EmbedBuffer = _GltfSettings.EmbedBuffer;

        SetExportBinaryCommand = new(b => { ExportBinary = b; });
        SetEmbedBufferCommand = new(b => { EmbedBuffer = b; });

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

}