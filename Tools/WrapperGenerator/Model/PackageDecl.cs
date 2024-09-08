using System.Collections.Generic;

namespace Macad.Occt.Generator;

public class PackageDecl : ElementDecl
{
    public List<EnumDecl> Enums { get; } = new();
    public List<ClassDecl> Classes { get; } = new();
}