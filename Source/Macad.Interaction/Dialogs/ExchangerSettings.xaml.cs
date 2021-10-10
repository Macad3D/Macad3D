using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using Macad.Common;
using Macad.Core;
using Macad.Presentation;

namespace Macad.Interaction.Dialogs
{
    /// <summary>
    /// Interaction logic for ExchangerSettings.xaml
    /// </summary>
    public partial class ExchangerSettings : Dialog
    {
        public static bool Execute<T>(IExchanger exchanger) where T : IExchanger
        {
            ExchangeRegistry.LoadSettings();

            var panel = ExchangeRegistry.FindExchangerSettingsPanel(exchanger)?.CreatePanel<T>(exchanger);
            if (panel == null)
                return true; // No settings available

            var exchangerSettings = new ExchangerSettings(exchanger, panel);
            if (!exchangerSettings.ShowDialog())
            {
                return false;
            }

            ExchangeRegistry.SaveSettings();

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        public object SettingsPanel { get; private set; }
        public RelayCommand DoItCommand { get; private set; }

        //--------------------------------------------------------------------------------------------------
        
        public ExchangerSettings(IExchanger exchanger, object panel)
        {
            SettingsPanel = panel;
            DoItCommand = new RelayCommand(DoIt);

            InitializeComponent();

            Title = exchanger.Description + " Settings";
        }

        //--------------------------------------------------------------------------------------------------

        void DoIt()
        {
            DialogResult = true;
        }

        //--------------------------------------------------------------------------------------------------

    }
}
