using System.IO;
using Macad.Occt;

namespace Macad.Exchange.Stl;

internal interface IStlReader
{
    Vec CurrentNormal { get; }
    Pnt[] CurrentVertices { get; }

    int Init(FileStream fs);
    bool MoveNext();
}