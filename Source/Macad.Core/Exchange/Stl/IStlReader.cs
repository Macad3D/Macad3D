using System.IO;
using Macad.Occt;

namespace Macad.Core.Exchange.Stl
{
    interface IStlReader
    {
        Vec CurrentNormal { get; }
        Pnt[] CurrentVertices { get; }

        int Init(FileStream fs);
        bool MoveNext();
    }
}