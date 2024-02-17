namespace Macad.Occt.Generator;

public class PropertyDecl
{
    public string Name;
    public TypeDecl Type;
    public bool IsStatic;
    public ClassDecl Class;
    public Comment Comment;

    //--------------------------------------------------------------------------------------------------

    public delegate void GenerateEventHandler(PropertyDecl property, SourceWriter writer);

    public GenerateEventHandler GetBodyGenerate;
    public GenerateEventHandler SetBodyGenerate;

    //--------------------------------------------------------------------------------------------------

}