using System.Collections.Generic;
using System.Linq;

namespace Macad.Occt.Generator;

public class ShortenEnumeratorsPass : Pass
{
    static readonly Dictionary<string, string> _Replace = new()
    {
        {"IN", "INSIDE"},
        {"OUT", "OUTSIDE"},
    };

    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessEnum(EnumDecl ed)
    {
        if (ed.Package == null)
            return true;

        var nameParts = ed.Name.Split("_");
        if (nameParts.Length == 0)
            return true;

        Dictionary<string, string> newEnumerators = new(ed.Enumerators.Count);
        foreach (var (key, value) in ed.Enumerators)
        {
            var current = key;
            foreach (var namePart in nameParts)
            {
                if (!_TryShortenName(current, namePart, out var shortened))
                {
                    break;
                }

                if (char.IsDigit(shortened[0]))
                {
                    break;
                }

                if (_Replace.TryGetValue(shortened, out var replacement))
                {
                    shortened = replacement;
                }

                current = shortened;
            }
            newEnumerators[current] = value;
        }
        ed.Enumerators = newEnumerators;

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _TryShortenName(string original, string reference, out string shortened)
    {
        shortened = original;

        int index = original.IndexOf('_');
        if (index == -1)
            return false;

        string part = original.Substring(0, index);
        if (part == reference)
        {
            shortened = original.Substring(index + 1);
            return true;
        }
        
        // Try MyLongName = MLN
        if (part.ToUpper() == new string(reference.Where(c => char.IsUpper(c)).ToArray()))
        {
            shortened = original.Substring(part.Length + 1);
            return true;
        }

        return false;
    }
}