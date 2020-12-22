using System.Linq;
using System.Windows;
using Microsoft.Win32;
using Macad.Common;
using Macad.Core.Exchange;

namespace Macad.Interaction.Dialogs
{
    public class ExportDialog
    {
        public static bool Execute<T>(out string fileName, out T exporter) where T: class, IExchanger
        {
            fileName = null;
            exporter = null;

            var exchangers = ExchangeRegistry.EnumerateExchanger<T>()?.ToArray();
            if (exchangers == null || exchangers.Length == 0)
                return false;

            // Create Filter
            var filter = string.Join("|",
                exchangers.Select(exchanger =>
                {
                    var extensions = string.Join(";", exchanger.Extensions.Select(s => "*." + s));
                    return string.Format("{0} ({1})|{1}", exchanger.Description, extensions);
                }));

            // Execute dialog
            var dlg = new SaveFileDialog()
            {
                Title = "Export...",
                CheckPathExists = true,
                OverwritePrompt = true,
                Filter = filter,
                FilterIndex = 1
            };
            var result = dlg.ShowDialog(Application.Current.MainWindow) ?? false;

            // Do export
            if (result)
            {
                fileName = dlg.FileName;
                exporter = exchangers[dlg.FilterIndex-1];
            }
            return result;
        }

        //--------------------------------------------------------------------------------------------------

    }
}