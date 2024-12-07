using Macad.Occt;

namespace Macad.Exchange.Stl;

internal interface IStlWriter
{
    void Init(string headLine, int sumTriangleCount);
    void AddFacet(Vec normal, Pnt vertex1, Pnt vertex2, Pnt vertex3);
    bool WriteToFile(string fileName);
}