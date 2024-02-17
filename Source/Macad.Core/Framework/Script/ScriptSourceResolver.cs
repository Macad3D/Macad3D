using System;
using System.Collections.Immutable;
using System.IO;
using Microsoft.CodeAnalysis;

namespace Macad.Core;

public sealed class ScriptSourceResolver : SourceFileResolver
{
    Func<string, Stream> _ReadFunc;

    //--------------------------------------------------------------------------------------------------

    public ScriptSourceResolver(string baseDirectory, Func<string, Stream> readFunc)
        : base(ImmutableArray<string>.Empty, baseDirectory)
    {
        _ReadFunc = readFunc;
    }

    //--------------------------------------------------------------------------------------------------

    public override Stream OpenRead(string resolvedPath)
    {
        return _ReadFunc(Path.GetFullPath(resolvedPath));
    }
}