using System;
using System.Collections.Generic;
using System.Linq;
using System.Xml.Linq;

namespace Macad.Build.Xaml
{
    public static class XamlProcessor
    {
        public static XNamespace PresentationNameSpace = "http://schemas.microsoft.com/winfx/2006/xaml/presentation";
        public static XNamespace XamlNameSpace = "http://schemas.microsoft.com/winfx/2006/xaml";
        public static XNamespace OptionsNameSpace = "http://schemas.microsoft.com/winfx/2006/xaml/presentation/options";

        //--------------------------------------------------------------------------------------------------

        public static XDocument CreateEmptyResourceDictionary()
        {
            return XDocument.Parse($"<ResourceDictionary xmlns=\"{PresentationNameSpace}\" xmlns:x=\"{XamlNameSpace}\" xmlns:options=\"{OptionsNameSpace}\" />");
        }

        //--------------------------------------------------------------------------------------------------

        public static bool RunPostProcessing(XElement root, Action<string> errorLog)
        {
            return _ExpandMacros(root) && _ResolveReferences(root, errorLog) && _Freeze(root);
        }

        //--------------------------------------------------------------------------------------------------

        static bool _ExpandMacros(XElement root)
        {
	        foreach(var element in root.Elements())
	        {
		        var key = element.Attribute(XamlNameSpace + "Key")?.Value?.Trim();
		        if(element.Name.LocalName == "ColorAndBrush")
		        {
			        element.Name = PresentationNameSpace + "Color";
			        element.SetAttributeValue(XamlNameSpace + "Key", "Macad.Colors." + key);

			        var copyElement = new XElement(PresentationNameSpace + "SolidColorBrush");
			        copyElement.SetAttributeValue(XamlNameSpace + "Key", "Macad.Brushes." + key);
			        if(element.Value.StartsWith("#"))
			        {
				        copyElement.SetAttributeValue("Color", element.Value);
			        } 
			        else 
			        {
				        copyElement.SetValue(element.Value);
			        }
			        element.AddAfterSelf(copyElement);
		        }
	        }
	        return true;
        }

        //--------------------------------------------------------------------------------------------------

        static bool _ResolveReferences(XElement root, Action<string> errorLog)
        {
	        bool success = true;
	        var dict = new Dictionary<string,XElement>();

	        foreach(var element in root.Elements())
	        {
		        var key = element.Attribute(XamlNameSpace + "Key")?.Value?.Trim();
		        var refKey = element.Value.Trim();
		        if(!string.IsNullOrEmpty(refKey) && refKey.StartsWith("Macad."))
		        {
			        if(!dict.TryGetValue(refKey, out var refElement))
			        {
				        element.Value = "KeyNotFound: "+refKey;
                        errorLog.Invoke( $"Key not found: {refKey} for element {key??"unknown"}." );
				        success = false;
				        continue;
			        }
			        if(element.Name.LocalName == "SolidColorBrush" && refElement.Name.LocalName == "Color" )
			        {
				        element.SetAttributeValue("Color", refElement.Value);
				        element.Value = "";
			        }
			        else if(element.Name.LocalName != refElement.Name.LocalName)
			        {
				        element.Value = "Referenced element is not the same type: "+element.Name;
                        errorLog.Invoke( $"Referenced element is not the same type: {refKey} for element {key??"unknown"}." );
				        success = false;
				        continue;
			        }
			        else
			        {
				        element.Value = refElement.Value;
			        }
			        foreach(var attribute in refElement.Attributes())
			        {
				        if(element.Attribute(attribute.Name)!=null)
					        continue;

				        element.SetAttributeValue(attribute.Name, attribute.Value);
			        }
		        } 

		        if(string.IsNullOrEmpty(key))
			        continue;
		        dict[key] = element;
	        }
	        return success;
        }
		
        //--------------------------------------------------------------------------------------------------

        static bool _Freeze(XElement root)
        {
            foreach(var element in root.Elements().Where(e => e.Name.LocalName.EndsWith("Brush")))
            {
                element.SetAttributeValue(OptionsNameSpace + "Freeze", "True");
            }

            return true;
        }

        //--------------------------------------------------------------------------------------------------

    }
}