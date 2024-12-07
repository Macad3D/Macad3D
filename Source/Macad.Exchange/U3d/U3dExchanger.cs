using System;
using System.Collections.Generic;
using System.IO;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Exchange.U3d;

namespace Macad.Exchange;

public class U3dExchanger: IBodyExporter
{
    #region Exchanger

    public string Description { get; } =  "Universal 3D File (Mesh)";
    public string[] Extensions { get; } = {"u3d"};

    //--------------------------------------------------------------------------------------------------

    IExchangerSettings IExchanger.Settings
    {
        get { return Settings; }
        set
        {
            if (value is U3dSettings newSettings)
                Settings = newSettings;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool CanExportToClipboard()
    {
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public bool CanImportFromClipboard(Clipboard clipboard)
    {
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        ExchangeRegistry.Register(new U3dExchanger());
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Settings

    [SerializeType]
    public class U3dSettings : IExchangerSettings
    {
    }

    //--------------------------------------------------------------------------------------------------

    public U3dSettings Settings { get; private set; } = new U3dSettings();

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Helper

    bool _WriteToFile(string fileName, MemoryStream content)
    {
        if (content.Length > 0)
        {
            try
            {
                content.Position = 0;
                using (var output = new FileStream(fileName, FileMode.Create))
                {
                    content.CopyTo(output);
                }
                return true;
            }
            catch (Exception e)
            {
                Messages.Exception("Writing U3D to file " + fileName + " failed.", e);
            }
        }
        return false;
    }
        
    //--------------------------------------------------------------------------------------------------

    #endregion
        
    #region IBodyExporter
        
    bool IBodyExporter.DoExport(string fileName, IEnumerable<Body> bodies)
    {
        return ProcessingScope.ExecuteWithGuards(null, "Exporting to Universal 3D File", 
                                                 () => _WriteToFile(fileName, U3dBodyExporter.Export(bodies)));
    }

    #endregion
        
}