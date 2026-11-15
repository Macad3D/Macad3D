using System;
using System.Reflection;

namespace Macad.Window;

/// <summary>
/// Version information of the running application, derived from the assembly attributes.
/// The informational version has the form "major.minor.build[-suffix][+commithash]".
/// </summary>
internal static class AppVersion
{
    public const string DevelopSuffix = "develop";
    public const int CommitHashLength = 8;

    public const string UserGuideUrl = "https://macad3d.net/userguide";
    public const string UserGuideDevUrl = "https://macad3d.net/userguide-dev";

    //--------------------------------------------------------------------------------------------------

    public static Version Version { get; }
    public static string InformationalVersion { get; }
    public static bool IsDevelopVersion { get; }

    //--------------------------------------------------------------------------------------------------

    static AppVersion()
    {
        var assembly = Assembly.GetExecutingAssembly();
        Version = assembly.GetName().Version;
        InformationalVersion = assembly.GetCustomAttribute<AssemblyInformationalVersionAttribute>()?.InformationalVersion;
        IsDevelopVersion = IsDevelop(InformationalVersion);
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Returns true if the version suffix of the informational version marks a develop build.
    /// </summary>
    public static bool IsDevelop(string informationalVersion)
    {
        if (string.IsNullOrEmpty(informationalVersion))
            return false;

        var metadataIndex = informationalVersion.IndexOf('+');
        var version = metadataIndex >= 0 ? informationalVersion[..metadataIndex] : informationalVersion;

        var suffixIndex = version.IndexOf('-');
        if (suffixIndex < 0)
            return false;

        return string.Equals(version[(suffixIndex + 1)..], DevelopSuffix, StringComparison.OrdinalIgnoreCase);
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Shortens the commit hash appended to the informational version to the usual short form.
    /// </summary>
    public static string ShortenCommitHash(string informationalVersion)
    {
        if (string.IsNullOrEmpty(informationalVersion))
            return informationalVersion;

        var metadataIndex = informationalVersion.IndexOf('+');
        if (metadataIndex < 0 || informationalVersion.Length - metadataIndex - 1 <= CommitHashLength)
            return informationalVersion;

        return informationalVersion[..(metadataIndex + 1 + CommitHashLength)];
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Returns the URL to open a topic in the user guide matching the given version.
    /// </summary>
    public static string GetUserGuideUrl(Version version, bool isDevelop, string topicId)
    {
        var baseUrl = isDevelop ? UserGuideDevUrl : UserGuideUrl;
        return $"{baseUrl}/go/?version={version.Major}.{version.Minor}&guid={Uri.EscapeDataString(topicId ?? "")}";
    }

    //--------------------------------------------------------------------------------------------------

    public static string GetUserGuideUrl(string topicId)
    {
        return GetUserGuideUrl(Version, IsDevelopVersion, topicId);
    }
}
