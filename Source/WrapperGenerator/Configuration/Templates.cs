using System.Collections.Generic;

namespace Macad.Occt.Generator;

public partial class Configuration
{
    /*
     * Template based collections must be declared in a special way when
     * compiling with CastXML, so they need to be declared here.
     */

    public struct TemplateDefinition
    {
        public string Name { get; init; }
        public int TemplateParameterCount { get; init; }
        public bool IncludeIterator { get; init; }

        public TemplateDefinition(string name, int paramCount, bool includeIterator)
        {
            Name = name;
            TemplateParameterCount = paramCount;
            IncludeIterator = includeIterator;
        }
    }

    public static List<TemplateDefinition> Templates = new()
    {
        new ("NCollection_Array1",         1, true),
        new ("NCollection_Array2",         1, true),
        new ("NCollection_TListIterator",  1, false),
        new ("NCollection_List",           1, true),
        new ("NCollection_Map",            2, true),
        new ("NCollection_IndexedMap",     2, true),
        new ("NCollection_DataMap",        3, true),
        new ("NCollection_IndexedDataMap", 3, true),
        new ("NCollection_Sequence",       1, true),
        new ("NCollection_Vec2",           1, false),
        new ("NCollection_DefaultHasher",  1, false),
        new ("NCollection_Lerp",           1, false),
        new ("NCollection_Vector",         1, true)
    };
}