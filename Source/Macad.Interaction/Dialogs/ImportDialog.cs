using System.Linq;
using System.Windows;
using Microsoft.Win32;
using Macad.Common;
using Macad.Core;

namespace Macad.Interaction.Dialogs;

public static class ImportDialog
{
    static int _LastFilterIndex = 1;

    //--------------------------------------------------------------------------------------------------

    public static bool Execute<T>(out string fileName, out T importer) where T: class, IExchanger
    {
        fileName = null;
        importer = null;

        var exchangers = ExchangeRegistry.EnumerateExchanger<T>()?.ToArray();
        if (exchangers == null || exchangers.Length == 0)
            return false;

        // Create Filter
        var filter =
            $"All supported files|{string.Join(";", exchangers.SelectMany(exchanger => exchanger.Extensions.Select(s => "*." + s)))}|"
            + string.Join("|",
                          exchangers.Select(exchanger =>
                          {
                              var extensions = string.Join(";", exchanger.Extensions.Select(s => "*." + s));
                              return string.Format("{0} ({1})|{1}", exchanger.Description, extensions);
                          }));

        // Execute dialog
        var dlg = new OpenFileDialog()
        {
            Title = "Import...",
            CheckFileExists = true,
            Filter = filter,
            FilterIndex = _LastFilterIndex
        };

        if (!dlg.ShowDialog(Application.Current.MainWindow) ?? false)
            return false;

        importer = dlg.FilterIndex == 1
                       ? ExchangeRegistry.FindExchanger<T>(PathUtils.GetExtensionWithoutPoint(dlg.FileName))
                       : exchangers[dlg.FilterIndex - 2];

        fileName = dlg.FileName;
        _LastFilterIndex = dlg.FilterIndex;

        return true;
    }

    //--------------------------------------------------------------------------------------------------
}