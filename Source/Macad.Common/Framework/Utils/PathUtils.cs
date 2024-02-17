using System;
using System.Collections.Specialized;
using System.IO;
using System.Text;
using Macad.Common.Interop;

namespace Macad.Common;

public class PathUtils
{
    static readonly char[] _DirectorySeparators = { Path.DirectorySeparatorChar, Path.AltDirectorySeparatorChar };
    static readonly string _DirectorySeparator = Path.DirectorySeparatorChar.ToString();
    static readonly string _AltDirectorySeparator = Path.AltDirectorySeparatorChar.ToString();

    //--------------------------------------------------------------------------------------------------


    /// <summary>
    /// Creates a relative path from one file
    /// or folder to another.
    /// </summary>
    /// <param name="fromDirectory">
    /// Contains the directory that defines the 
    /// start of the relative path.
    /// </param>
    /// <param name="toPath">
    /// Contains the path that defines the
    /// endpoint of the relative path.
    /// </param>
    /// <returns>
    /// The relative path from the start
    /// directory to the end path.
    /// </returns>
    /// <exception cref="ArgumentNullException"></exception>
    // Code snippet by Paul Welter
    // Source: http://weblogs.asp.net/pwelter34/archive/2006/02/08/create-a-relative-path-code-snippet.aspx
    public static string MakePathRelative(string fromDirectory, string toPath)
    {
        if (fromDirectory == null)
            throw new ArgumentNullException("fromDirectory");

        if (toPath == null)
            throw new ArgumentNullException("toPath");

        bool isRooted = Path.IsPathRooted(fromDirectory)
                        && Path.IsPathRooted(toPath);

        if (isRooted)
        {
            bool isDifferentRoot = String.Compare(
                                       Path.GetPathRoot(fromDirectory),
                                       Path.GetPathRoot(toPath), StringComparison.OrdinalIgnoreCase) != 0;

            if (isDifferentRoot)
                return toPath;
        }

        StringCollection relativePath = new StringCollection();
        string[] fromDirectories = SplitPath(fromDirectory);

        string[] toDirectories = SplitPath(toPath);

        int length = Math.Min(
            fromDirectories.Length,
            toDirectories.Length);

        int lastCommonRoot = -1;

        // find common root
        for (int x = 0; x < length; x++)
        {
            if (string.Compare(fromDirectories[x],
                               toDirectories[x], true) != 0)
                break;

            lastCommonRoot = x;
        }
        if (lastCommonRoot == -1)
            return toPath;

        // add relative folders in from path
        for (int x = lastCommonRoot + 1; x < fromDirectories.Length; x++)
            if (fromDirectories[x].Length > 0)
                relativePath.Add("..");

        // add to folders to path
        for (int x = lastCommonRoot + 1; x < toDirectories.Length; x++)
            relativePath.Add(toDirectories[x]);

        // create relative path
        string[] relativeParts = new string[relativePath.Count];
        relativePath.CopyTo(relativeParts, 0);

        string newPath = string.Join(
            Path.DirectorySeparatorChar.ToString(),
            relativeParts);

        return newPath;
    }

    //--------------------------------------------------------------------------------------------------

    public static string MakePathAbsolute(string sRootDirectory, string sRelativePath)
    {
        if (Path.IsPathRooted(sRelativePath))
        {
            return sRelativePath;
        }
        StringBuilder sb = new StringBuilder(260); // MAX_PATH
        if (Win32Api.PathCanonicalize(sb, Path.Combine(sRootDirectory, sRelativePath)))
        {
            return sb.ToString();
        }
        else
        {
            return Path.Combine(sRootDirectory, sRelativePath); 
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static string GetAppExecutableDirectory()
    {
        return AppDomain.CurrentDomain.BaseDirectory;
    }

    //--------------------------------------------------------------------------------------------------

    public static string GetLocalAppDataDirectory()
    {
        return Environment.GetFolderPath(Environment.SpecialFolder.LocalApplicationData) + Path.DirectorySeparatorChar + "Macad" + Path.DirectorySeparatorChar;
    }

    //--------------------------------------------------------------------------------------------------

    public static string GetExtensionWithoutPoint(string sPath)
    {
        string ext = Path.GetExtension(sPath);
        if(!ext.IsNullOrEmpty())
        {
            if(ext[0]=='.')
            {
                return ext.Substring(1);
            }
        }
        return ext;
    }

    //--------------------------------------------------------------------------------------------------

    public static string GetFilenameWithoutExtensionAndPoint(string sPath, bool bFullPath)
    {
        string filename = Path.GetFileNameWithoutExtension(sPath);
        if (bFullPath)
        {
            filename = Path.GetDirectoryName(sPath) + @"\" + filename;
        }
        if (filename.Length > 0)
        {
            if(filename[filename.Length-1]=='.')
            {
                return filename.Substring(0, filename.Length-1);
            }
        }
        return filename;
    }

    //--------------------------------------------------------------------------------------------------

    public static String[] SplitPath(string path)
    {
        return path.Split(_DirectorySeparators, StringSplitOptions.RemoveEmptyEntries);
    }

    //--------------------------------------------------------------------------------------------------

    public static bool IsSubPathOf(string path, string baseDirPath)
    {
        string normalizedPath = WithTrailingDirectorySeparator(Path.GetFullPath(path.Replace(Path.DirectorySeparatorChar, Path.AltDirectorySeparatorChar)));

        string normalizedBaseDirPath = WithTrailingDirectorySeparator(Path.GetFullPath(baseDirPath.Replace(Path.DirectorySeparatorChar, Path.AltDirectorySeparatorChar)));

        return normalizedPath.StartsWith(normalizedBaseDirPath, StringComparison.OrdinalIgnoreCase);
    }

    //--------------------------------------------------------------------------------------------------

    public static string WithTrailingDirectorySeparator(string path)
    {
        if (path.IsNullOrEmpty())
            throw new ArgumentNullException("path");

        if (path[path.Length - 1] != Path.DirectorySeparatorChar)
        {
            return path + Path.DirectorySeparatorChar;
        }
        return path;
    }
}