using System;
using System.Collections.Generic;
using System.Linq;
using System.Xml.Linq;

namespace Macad.Build.Xaml;

internal static class XamlUtils
{
    internal static XNamespace PresentationNameSpace = "http://schemas.microsoft.com/winfx/2006/xaml/presentation";
    internal static XNamespace XamlNameSpace = "http://schemas.microsoft.com/winfx/2006/xaml";
    internal static XNamespace OptionsNameSpace = "http://schemas.microsoft.com/winfx/2006/xaml/presentation/options";

    //--------------------------------------------------------------------------------------------------

    internal static XDocument CreateEmptyResourceDictionary()
    {
        return XDocument.Parse($"<ResourceDictionary xmlns=\"{PresentationNameSpace}\" xmlns:x=\"{XamlNameSpace}\" xmlns:options=\"{OptionsNameSpace}\" />");
    }

    //--------------------------------------------------------------------------------------------------

    internal static void FreezeElements(XElement root)
    {
        foreach(var element in root.Elements().Where(e => e.Name.LocalName.EndsWith("Brush")))
        {
            element.SetAttributeValue(OptionsNameSpace + "Freeze", "True");
        }
    }

    //--------------------------------------------------------------------------------------------------

}