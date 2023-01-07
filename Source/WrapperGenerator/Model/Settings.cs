namespace Macad.Occt.Generator;

public class Settings
{
    public string OutputPath = "";
    public string OcctIncludePath = "";
    public string CastXmlPath = "";
    public string VisualCppPath = "";
    public string UcrtPath = "";
    public string WinSDKPath = "";
    public string CachePath = "";

    public string Namespace = "Macad::Occt";

    //--------------------------------------------------------------------------------------------------

    public bool AreSettingsMissing()
    {
        return string.IsNullOrEmpty(OutputPath) 
               || string.IsNullOrEmpty(OcctIncludePath) 
               || string.IsNullOrEmpty(CastXmlPath) 
               || string.IsNullOrEmpty(VisualCppPath) 
               || string.IsNullOrEmpty(UcrtPath)
               || string.IsNullOrEmpty(WinSDKPath)
               || string.IsNullOrEmpty(CachePath);
    }
}