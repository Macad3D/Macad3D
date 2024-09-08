namespace Macad.Occt.Generator;

public class FieldToPropertyPass : Pass
{
    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessField(FieldDecl fd)
    {
        if (!fd.Ignore
            && !fd.Type.IsConst
            && !fd.Type.IsPointer
            && fd.Type.Wrapper is FundamentalTypeWrapper or EnumWrapper)
        {
            PropertyDecl property = new PropertyDecl
            {
                Class = fd.Class,
                Name = fd.Name,
                Type = new TypeDecl
                {
                    Name = fd.Type.Name,
                    Element = fd.Type.Element,
                    Wrapper = fd.Type.Wrapper
                },
                Comment = fd.Comment,
                GetBodyGenerate = _GetBodyGenerate,
            };
            if (!fd.Type.IsConst)
            {
                property.SetBodyGenerate = _SetBodyGenerate;
            }
            fd.Class.Properties.Add(property);
            fd.Ignore = true;
        }

        return base.ProcessField(fd);
    }
    
    //--------------------------------------------------------------------------------------------------

    void _GetBodyGenerate(PropertyDecl pd, SourceWriter writer)
    {
        // This works only for fundamental or enum types!
        if(pd.Type.Wrapper is EnumWrapper wrapper)
            writer.WriteLine($"return {wrapper.ToManaged(pd.Type)}(((::{pd.Class.FullNativeName}*)_NativeInstance)->{pd.Name});");
        else
            writer.WriteLine($"return ((::{pd.Class.FullNativeName}*)_NativeInstance)->{pd.Name};");
    }

    //--------------------------------------------------------------------------------------------------

    void _SetBodyGenerate(PropertyDecl pd, SourceWriter writer)
    {
        // This works only for fundamental or enum types!
        if (pd.Type.Wrapper is EnumWrapper wrapper)
            writer.WriteLine($"((::{pd.Class.FullNativeName}*)_NativeInstance)->{pd.Name} = {wrapper.ToNative(pd.Type)}value;");
        else
            writer.WriteLine($"((::{pd.Class.FullNativeName}*)_NativeInstance)->{pd.Name} = value;");
    }
}