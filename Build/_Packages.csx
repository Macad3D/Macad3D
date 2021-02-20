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
    struct WebPackage
    {
        public string Name;
        public string Version;
        public string Source;
        public string FullName;
        public string Method;
    }
    static List<WebPackage> _WebPackages = new List<WebPackage>();

    //--------------------------------------------------------------------------------------------------

    public static string FindPackageFile(string packageName, string packageFile)
    {
        var packagePath = Path.Combine(Common.GetRootFolder(), "Packages");
        Directory.CreateDirectory(packagePath);
        var dirs = Directory.EnumerateDirectories(packagePath, packageName).ToList();
        if(dirs.Count == 0)
        {
            Printer.Error("Package directory not found: " + packageName);
            Printer.Error("Try restoring packages.");
            return "";
        }
        dirs.Sort();
        var filePath = Path.Combine(dirs.Last(), packageFile);
        if(!File.Exists(filePath))
        {
            Printer.Error("Package not complete: " + packageName);
            Printer.Error("Try restoring packages.");
            return "";
        }
        return filePath;
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

    static bool _NugetRestore(string configFile)
    {
        var nugetPath = FindPackageFile("NuGet", "NuGet.exe");
        if(string.IsNullOrEmpty(nugetPath))
            return false;

        var commandLine = $"restore {configFile} -PackagesDirectory {Common.GetRootFolder()}\\Packages";

        if (Common.Run(nugetPath, commandLine) != 0)
        {
            Printer.Error("Restoring packages failed for " + configFile);
            return false;
        }
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
        
        // Nuget
        if(!_NugetRestore(Path.Combine(Common.GetRootFolder(), "Build\\Packages.config")))
            return false;
        if(!_NugetRestore(Path.Combine(Common.GetRootFolder(), "Macad3D.sln")))
            return false;

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    static bool _DownloadPackage(WebPackage package)
    {
        try
        {
            var localPath = Path.Combine(Common.GetRootFolder(), "Packages", package.FullName);
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
                if(Path.GetExtension(targetFileName).ToLower() == ".zip")
                {
                    System.IO.Compression.ZipFile.ExtractToDirectory(targetFileName, localPath);
                } 
                else 
                {
                    var args = $"x -aoa -y \"{targetFileName}\"";
                    if(Common.Run(Path.Combine(Common.GetRootFolder(), "Packages", "7Zip", "7za.exe"), args, localPath) != 0)
                        throw new Exception("Execution of 7-Zip failed.");
                }
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