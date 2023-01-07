namespace Macad.Occt.Generator;

public partial class Configuration
{
    public static Pass[] Passes = 
    {
        new ParsePass(),
        new ReplaceReservedPass(),
        new InstantiateTemplatesPass(),
        new BuildInheritancePass(),
        new MarkPreWrappedTypesPass(),
        new MarkIgnoredPass(),
        new DowncastMethodPass(),
        new ResolveTypesPass(),
        new MethodToPropertyPass(),
        new FieldToPropertyPass(),
        new EqualityMethodPass(),
        new IndexEnumerablePass(),
        new IteratorEnumerablePass(),
        new UnsealPass(),
        new FixDefaultValuesPass(),
        new ShortenEnumeratorsPass(),
        new GenerateSourceCodePass(),
        new GenerateForwardDeclarationsPass(),
        new GenerateNativeIncludesPass(),
        new GenerateVersionInfoPass(),
    };
}