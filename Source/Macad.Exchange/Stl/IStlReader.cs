using System.IO;
using Macad.Occt;

namespace Macad.Exchange.Stl
{
    interface IStlReader
    {
        Vec CurrentNormal { get; }
        Pnt[] CurrentVertices { get; }

        int Init(FileStream fs);
        bool MoveNext();
    }
}