using Macad.Common;
using Macad.Core;
using Macad.Presentation;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Globalization;
using System.Linq;
using System.Text.RegularExpressions;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;

namespace Macad.Interaction.Dialogs;

public partial class PreferencesDialog : Dialog
{
    public static bool Execute(Window ownerWindow, ActionCommand restartApplicationCommand = null)
    {
        PreferencesDialog dlg = new()
        {
            Owner = ownerWindow,
            RestartCommand = restartApplicationCommand
        };
        return dlg.ShowDialog();
    }

    //--------------------------------------------------------------------------------------------------

    public List<ParameterSet> ParameterSets { get; }

    public ParameterSet SelectedParameterSet
    {
        get { return _SelectedParameterSet; }
        set
        {
            if (Equals(value, _SelectedParameterSet))
                return;

            _SelectedParameterSet = value;
            RaisePropertyChanged();
        }
    }

    ParameterSet _SelectedParameterSet;

    //--------------------------------------------------------------------------------------------------

    public bool IsRestartRequired
    {
        get { return _IsRestartRequired; }
        set
        {
            _IsRestartRequired = value; 
            RaisePropertyChanged();
        }
    }

    bool _IsRestartRequired;

    //--------------------------------------------------------------------------------------------------

    public PreferencesDialog()
    {
        SelectParameterSetCommand = new(_ExecuteSelectParameterSet);
        ResetToDefaultCommand = new(_ExecuteResetToDefault);

        // Find all non-abstract types that inherit from ParameterSet
        ParameterSets = AppDomain.CurrentDomain.GetAssemblies()
            .SelectMany(a => a.GetTypes())
            .Where(t => t.IsClass
                        && !t.IsAbstract
                        && typeof(ParameterSet).IsAssignableFrom(t))
            .Select(t => CoreContext.Current.Parameters.Get(t))
            .ToList();

        ParameterSets.Sort((a, b) => string.Compare(a.GetType().Name, b.GetType().Name, StringComparison.Ordinal));

        CoreContext.Current.Parameters.ParameterChanged += _Parameters_ParameterChanged;

        InitializeComponent();

        SelectedParameterSet = ParameterSets.FirstOrDefault();
    }

    //--------------------------------------------------------------------------------------------------

    void _Parameters_ParameterChanged(ParameterSet parameterSet, string parameterKey)
    {
        if (parameterSet == SelectedParameterSet)
        {
            var parameter = parameterSet[parameterKey];
            if ((parameter?.Flags.HasFlag(Parameter.ParameterFlags.NeedsRestart) ?? false)
                && RestartCommand != null)
            {
                IsRestartRequired = true;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ExecuteSelectParameterSet(ParameterSet paramSet)
    {
        SelectedParameterSet = paramSet;
    }

    //--------------------------------------------------------------------------------------------------

    void _ExecuteResetToDefault(Parameter paramDesc)
    {
        paramDesc.ResetToDefault();
    }

    //--------------------------------------------------------------------------------------------------

    public RelayCommand<ParameterSet> SelectParameterSetCommand { get; }
    public RelayCommand<Parameter> ResetToDefaultCommand { get; }
    public RelayCommand RestartCommand { get; init; }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    public class _ParameterSetDisplayNameConverter : IValueConverter
    {
        static readonly Regex _SplitNameRegex = new Regex("([a-z])([A-Z])", RegexOptions.Compiled);

        public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            if (value == null)
                return "";

            var type = value.GetType();
            if (type.GetCustomAttributes(typeof(DisplayNameAttribute), false).FirstOrDefault() is DisplayNameAttribute displayAttr)
            {
                return displayAttr.DisplayName;
            }

            // Convert type name to spaced format (e.g. "HelloWorld" -> "Hello World")
            var typeName = type.Name;
            if (typeName.EndsWith("ParameterSet"))
            {
                typeName = typeName[..^12];
            }
            var spacedName = _SplitNameRegex.Replace(typeName, "$1 $2");
            return spacedName;
        }

        //--------------------------------------------------------------------------------------------------

        public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
        {
            throw new NotImplementedException();
        }

        //--------------------------------------------------------------------------------------------------

    }

    public static _ParameterSetDisplayNameConverter ParameterSetDisplayNameConverter = new();

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    public class _ParameterTemplateSelector : DataTemplateSelector
    {
        public override DataTemplate SelectTemplate(object item, DependencyObject container)
        {
            var parameter = item as Parameter;
            if (parameter == null) return null;

            var element = container as FrameworkElement;
            if (element == null) return null;

            string templateName = "";
            if (parameter.EditorHints?.TryGetValue("Selector", out object selectorValue) ?? false)
            {
                templateName = selectorValue switch
                {
                    "FontFamily" => "FontFamilyTemplate",
                    _ => null
                };
            }
            else
            {
                templateName = parameter.ParameterType switch
                {
                    { } t when t == typeof(double) => "ValueTemplate",
                    { } t when t == typeof(float) => "ValueTemplate",
                    { } t when t == typeof(int) => "NumberTemplate",
                    { } t when t == typeof(uint) => "NumberTemplate",
                    { } t when t == typeof(bool) => "CheckboxTemplate",
                    { } t when t == typeof(string) => "TextboxTemplate",
                    { IsEnum: true } => "EnumTemplate",
                    _ => "UnknownTemplate"
                };
            }

            return templateName != null ? element.TryFindResource(templateName) as DataTemplate : null;
        }
    }

    public static DataTemplateSelector ParameterTemplateSelector { get; } = new _ParameterTemplateSelector();

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    public class _EditorHintConverter : IValueConverter
    {
        public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            var paramDesc = value as Parameter;
            if (parameter is not string stringParam
                || paramDesc == null)
            {
                return null;
            }

            var editorHints = paramDesc.EditorHints;
            if (editorHints?.TryGetValue(stringParam, out var objectValue) ?? false)
            {
                return objectValue;
            }

            if (stringParam == "EnumNames" && paramDesc.ParameterType.IsEnum)
            {
                return paramDesc.ParameterType.GetEnumNames();
            }

            return null;
        }

        //--------------------------------------------------------------------------------------------------

        public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
        {
            throw new NotImplementedException();
        }

        //--------------------------------------------------------------------------------------------------

    }

    public static _EditorHintConverter EditorHintConverter = new();

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

}