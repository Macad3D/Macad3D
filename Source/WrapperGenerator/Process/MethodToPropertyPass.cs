namespace Macad.Occt.Generator;

public class MethodToPropertyPass : Pass
{
    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessMethod(MethodDecl md)
    {
        if (!md.Ignore
            && md.Type.IsReference
            && !md.Type.IsConst
            && md.Parameters.Count == 0
            && md.Type.Wrapper is FundamentalTypeWrapper)
        {
            PropertyDecl property = new PropertyDecl
            {
                Class = md.Class,
                Name = md.Name,
                Type = new TypeDecl
                {
                    Name =  md.Type.Name,
                    Element = md.Type.Element,
                    Wrapper = md.Type.Wrapper
                },
                Comment = md.Comment,
                GetBodyGenerate = _GetBodyGenerate,
                SetBodyGenerate = _SetBodyGenerate
            };
            md.Class.Properties.Add(property);
            md.Ignore = true;
        }

        return base.ProcessMethod(md);
    }

    //--------------------------------------------------------------------------------------------------

    void _GetBodyGenerate(PropertyDecl pd, SourceWriter writer)
    {
        // This works only for fundamental types!
        writer.WriteLine($"return ((::{pd.Class.FullNativeName}*)_NativeInstance)->{pd.Name}();");
    }

    //--------------------------------------------------------------------------------------------------

    void _SetBodyGenerate(PropertyDecl pd, SourceWriter writer)
    {
        // This works only for fundamental types!
        writer.WriteLine($"((::{pd.Class.FullNativeName}*)_NativeInstance)->{pd.Name}() = value;");
    }
}