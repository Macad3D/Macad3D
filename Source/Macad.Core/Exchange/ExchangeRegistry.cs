using System;
using System.Collections.Generic;
using System.Linq;

namespace Macad.Core;

public static class ExchangeRegistry
{
    #region Member

    static readonly Dictionary<Type, List<IExchanger>> _Exchangers = new Dictionary<Type, List<IExchanger>>();

    static readonly Dictionary<Type, IExchangerSettingsPanelCreator> _ExchangerSettingPanels = new Dictionary<Type, IExchangerSettingsPanelCreator>();

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Enumeration and Creation

    public static IEnumerable<T> EnumerateExchanger<T>() where T: IExchanger
    {
        if (_Exchangers.TryGetValue(typeof(T), out var list))
            return list.Cast<T>();
        return new List<T>();
    }

    //--------------------------------------------------------------------------------------------------

    public static T FindExchanger<T>(string extension) where T: class, IExchanger
    {
        if (!_Exchangers.TryGetValue(typeof(T), out var list))
            return null;

        var lowerExtension = extension.ToLower();
        return list.FirstOrDefault(exchanger => exchanger.Extensions.Contains(lowerExtension)) as T;
    }
        
    //--------------------------------------------------------------------------------------------------

    public static bool CanExportToClipboard<T>() where T: IExchanger
    {
        if (!_Exchangers.TryGetValue(typeof(T), out var list))
            return false;
        return list.Any(exchanger => exchanger.CanExportToClipboard());
    }

    //--------------------------------------------------------------------------------------------------

    public static bool CanImportFromClipboard<T>(Clipboard clipboard) where T: IExchanger
    {
        if (!_Exchangers.TryGetValue(typeof(T), out var list))
            return false;
        return list.Any(exchanger => exchanger.CanImportFromClipboard(clipboard));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Registration

    static void _AddExchanger(IExchanger exchanger, Type interfaceType)
    {
        if (!_Exchangers.TryGetValue(interfaceType, out var list))
        {
            list = new List<IExchanger>();
            _Exchangers.Add(interfaceType, list);
        }

        if (list.Exists(ex => ex.GetType() == exchanger.GetType()))
        {
            Messages.Warning($"Exchanger {exchanger.GetType().FullName} already registered for type {interfaceType.Name}");
            return;
        }

        list.Add(exchanger);
    }

    //--------------------------------------------------------------------------------------------------

    public static void Register(IExchanger exchanger)
    {
        var interfaces = exchanger.GetType().GetInterfaces();

        foreach (var interfaceType in interfaces)
        {
            _AddExchanger(exchanger, interfaceType);
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    public static void Register(IExchangerSettingsPanelCreator panelCreator)
    {
        if (_ExchangerSettingPanels.TryGetValue(panelCreator.ExchangerType, out var firstPanel))
        {
            Messages.Error($"Multiple setting panels registered for exchanger {panelCreator.ExchangerType.FullName}: {firstPanel.GetType().FullName} / {panelCreator.GetType().FullName}.");
            return;
        }

        _ExchangerSettingPanels.Add(panelCreator.ExchangerType, panelCreator);
    }

    //--------------------------------------------------------------------------------------------------
        
    public static IExchangerSettingsPanelCreator FindExchangerSettingsPanel(IExchanger exchanger)
    {
        if (_ExchangerSettingPanels.TryGetValue(exchanger.GetType(), out var panelCreator))
        {
            return panelCreator;
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Settings

    public static void SaveSettings()
    {
        try
        {
            var settingsList = new Dictionary<string, IExchangerSettings>();
            var exchangers = _Exchangers.Values.SelectMany(list => list).Distinct();
            foreach (var exchanger in exchangers)
            {
                if(exchanger.Settings != null)
                    settingsList.Add(exchanger.GetType().Name, exchanger.Settings);
            }

            CoreContext.Current.SaveLocalSettings("ExchangerSettings", settingsList);
        }
        catch (Exception)
        {
            return;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static void LoadSettings()
    {
        try
        {
            var settingsList = CoreContext.Current.LoadLocalSettings<Dictionary<string, IExchangerSettings>>("ExchangerSettings");
            if (settingsList == null || settingsList.Count == 0)
                return;

            var exchangers = _Exchangers.Values.SelectMany(list => list).Distinct();
            foreach (var exchanger in exchangers)
            {
                if (settingsList.TryGetValue(exchanger.GetType().Name, out var settingObj))
                    exchanger.Settings = settingObj;
            }
        }
        catch (Exception)
        {
            return;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}