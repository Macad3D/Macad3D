using System;
using System.Collections.Generic;
using System.Drawing;
using System.IO;
using System.Reflection;
using System.Windows;

namespace Macad.Resources;

public class ResourceUtils
{
    public enum Category
    {
        Marker
    }

    //--------------------------------------------------------------------------------------------------

    static readonly string _AssemblyName;
    static readonly Dictionary<Category, ResourceDictionary> _Resources = new();

    static ResourceUtils()
    {
        _AssemblyName = Assembly.GetExecutingAssembly().GetName().Name;
    }

    //--------------------------------------------------------------------------------------------------

    public static String ReadTextFromResource(string filename)
    {
        var stream = GetResourceStream(filename);
        if (stream == null)
            return null;

        var sr = new StreamReader(stream);
        return sr.ReadToEnd();
    }

    //--------------------------------------------------------------------------------------------------

    public static Stream GetResourceStream(string filename)
    {
        try
        {
            var uri = GetResourceUri(filename);
            var sri = Application.GetResourceStream(uri);
            return sri?.Stream;
        }
        catch (IOException e)
        {
            Console.WriteLine(e);
            return null;
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    public static T GetDictionaryElement<T>(Category category, string name) where T : class
    {
        try
        {
            if (!_Resources.TryGetValue(category, out var dict))
            {
                dict = new()
                {
                    Source = GetResourceUri($"{category}.xaml")
                };
                _Resources[category] = dict;
            }

            return dict[name] as T;
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static bool ResourceExists(string filename)
    {
        return GetResourceStream(filename) != null;
    }

    //--------------------------------------------------------------------------------------------------

    public static Uri GetResourceUri(string filename)
    {
        return new Uri($"/{_AssemblyName};component/{filename}", UriKind.Relative);
    }

    //--------------------------------------------------------------------------------------------------

    public static Uri GetPackUri(string filename)
    {
        return new Uri($"pack://application:,,,/{_AssemblyName};component/{filename}");
    }

    //--------------------------------------------------------------------------------------------------

    public static Bitmap ReadBitmapFromResource(string filename)
    {
        var stream = GetResourceStream(filename);
        if (stream == null)
            return null;

        return new Bitmap(stream);
    }

    //--------------------------------------------------------------------------------------------------
        
}