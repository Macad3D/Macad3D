using System;
using System.IO;
using System.Linq;
using System.Windows;
using Microsoft.Win32;
using Macad.Common;
using Macad.Core;
using Macad.Core.Exchange;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Interaction.Dialogs
{
    public static class ImportDialog
    {
        public static bool Execute<T>(out string fileName, out T importer) where T: class, IExchanger
        {
            fileName = null;
            importer = null;

            var exchangers = ExchangeRegistry.EnumerateExchanger<T>()?.ToArray();
            if (exchangers == null || exchangers.Length == 0)
                return false;

            // Create Filter
            var filter = 
                String.Format("All supported files|{0}|", string.Join(";", exchangers.SelectMany(exchanger => exchanger.Extensions.Select(s => "*." + s))))
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
                FilterIndex = 1
            };
            var result = dlg.ShowDialog(Application.Current.MainWindow) ?? false;

            if (result)
            {
                importer = dlg.FilterIndex == 1
                    ? ExchangeRegistry.FindExchanger<T>(PathUtils.GetExtensionWithoutPoint(dlg.FileName))
                    : exchangers[dlg.FilterIndex - 2];

                fileName = dlg.FileName;
            }

            return result;
        }

        //--------------------------------------------------------------------------------------------------
    }
}