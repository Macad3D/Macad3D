namespace Macad.Occt.Generator;

public class Settings
{
    public string OutputPath = "";
    public string OcctIncludePath = "";
    public string ClPath = "";
    public string IncludePaths = "";
    public string CachePath = "";
    public string CastXmlPath = "";

    public string Namespace = "Macad::Occt";

    //--------------------------------------------------------------------------------------------------

    public bool AreSettingsMissing()
    {
        return string.IsNullOrEmpty(OutputPath) 
               || string.IsNullOrEmpty(OcctIncludePath) 
               || string.IsNullOrEmpty(ClPath)
               || string.IsNullOrEmpty(IncludePaths) 
               || string.IsNullOrEmpty(CachePath)
               || string.IsNullOrEmpty(CastXmlPath);
    }
}