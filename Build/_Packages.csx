#load "_Common.csx"
#load "_BuildTools.csx"
#r "System.Xml"
#r "System.Xml.Linq"
#r "System.IO.Compression.ZipFile.dll"

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Xml.Linq;
using System.Net;

public class Packages
{
    class WebPackage
    {
        public string Name;
        public string Version;
        public string Source;
        public string FullName;
        public string Method;
    }
    
    static List<WebPackage> _WebPackages = new List<WebPackage>();

    const string _PackageBasePath = @".intermediate\Build";

    //--------------------------------------------------------------------------------------------------

    public static string FindPackageFile(string packageName, string packageFile, string forceVersion="")
    {
        var package = _WebPackages.FirstOrDefault(pkg => pkg.Name == packageName && (forceVersion=="" || pkg.Version == forceVersion || pkg.Version=="*"));
        if(package == null)
        {
            Printer.Error($"Package not found in package list: {packageName} {forceVersion}");
            return "";
        }

        if(package.Version == "*")
        {
            if(forceVersion == "")
            {
                Printer.Error($"Package version unspecified.");
                return "";
            }

            package = new WebPackage() 
            {
                Name = package.Name,
                Version = forceVersion,
                Source = string.Format(package.Source, forceVersion),
                FullName = $"{package.Name}.{forceVersion}",
                Method = package.Method
            };
        }

        var packagePath = Path.Combine(Common.GetRootFolder(), _PackageBasePath, package.FullName);
        if(!Directory.Exists(packagePath))
        {
            if(!_DownloadPackage(package))
            {
                return "";
            }
        }

        var filePath = Path.Combine(packagePath, packageFile);
        if(!File.Exists(filePath))
        {
            Printer.Error($"Package not complete: {packageName} in {packagePath}.");
            return "";
        }
        return filePath;
    }

    //--------------------------------------------------------------------------------------------------

    public static string FindPackageVersion(string packageName)
    {
        var webPackage = _WebPackages.FirstOrDefault(pkg => pkg.Name == packageName);
        return webPackage.Version;
    }

    //--------------------------------------------------------------------------------------------------

    static bool _PackageExists(string packageName)
    {
        var packagePath = Path.Combine(Common.GetRootFolder(), "Packages");
        Directory.CreateDirectory(packagePath);
        var dirs = Directory.EnumerateDirectories(packagePath, packageName).ToList();
        if(dirs.Count==0 || (Directory.EnumerateDirectories(dirs[0]).Count()==0 && Directory.EnumerateFiles(dirs[0]).Count()==0))
            return false;

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool RestorePackages()
    {
        Printer.Line("Restoring packages...");
        foreach (var webPackage in _WebPackages)
        {
            if(!_PackageExists(webPackage.FullName))
            {
                _DownloadPackage(webPackage);
            }
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    static bool _DownloadPackage(WebPackage package)
    {
        try
        {
            var localPath = Path.Combine(Common.GetRootFolder(), _PackageBasePath, package.FullName);
            Directory.CreateDirectory(localPath);

            var fileName = Path.GetFileName(package.Source);
            if(string.IsNullOrEmpty(fileName) || !fileName.Contains("."))
            {
                Printer.Error($"Source URL of web package {package.Name} is not a file.");
                return false;
            }
 
            Console.Write($"Downloading web package {package.Name}... ");
            var targetFileName = Path.Combine(localPath, fileName);
            var webClient = new WebClient();
            webClient.DownloadProgressChanged += (sender, args) => 
            {
                Console.Write($"\rDownloading web package {package.Name}... {args.ProgressPercentage}%");
            };
            webClient.DownloadFileTaskAsync(package.Source, targetFileName).Wait();
            Console.Write("\n");

            // Post process
            if(package.Method=="unzip")
            {
                Printer.Line($"Extracting web package {package.Name}... ");
                System.IO.Compression.ZipFile.ExtractToDirectory(targetFileName, localPath);
                File.Delete(targetFileName);
            }
            else if(package.Method.StartsWith("execute "))
            {
                var args = package.Method.Substring(7);
                args = args.Replace("{folder}", localPath);
                if(Common.Run(targetFileName, args, useShell: true) != 0)
                    throw new Exception("Execution failed.");
            }
            return true;
        }
        catch (Exception e)
        {
            Printer.Error($"Failed downloading web package {package.Name}. Message: {e.Message}");
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    static Packages()
    {
        // Read in web packages
        var filePath = Path.Combine(Common.GetRootFolder(), "Build\\WebPackages.config");
        if(!File.Exists(filePath))
        {
            Printer.Error("WebPackages.config not found.");
            return;
        }

        var doc = XDocument.Load(filePath);
        if (doc.Root.Name.LocalName != "packages")
        {
            Printer.Error("WebPackages.config is not valid. Root element must be 'packages'.");
            return;
        }

        foreach (var element in doc.Root.Elements("package"))
        {
            var webPackage = new WebPackage 
            {
                Name = element.Attribute("id").Value,
                Version = element.Attribute("version").Value,
                Source = element.Attribute("source").Value,
                Method = element.Attribute("method").Value.ToLower(),
            };
            webPackage.FullName = string.IsNullOrEmpty(webPackage.Version) ? webPackage.Name : $"{webPackage.Name}.{webPackage.Version}";
            _WebPackages.Add(webPackage);
        }
    }
}