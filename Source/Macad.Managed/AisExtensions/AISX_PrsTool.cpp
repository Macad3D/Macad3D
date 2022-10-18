#include "ManagedPCH.h"

#include "AISX_PrsTool.h"

Handle(Graphic3d_ArrayOfTriangles) AISX_PrsTool::CreateCylinder(const gp_Ax1 axis, double radius, double height, int segments)
{
    Prs3d_ToolCylinder toolCyl(radius, radius, height, segments, 2);
    Prs3d_ToolDisk toolDisc(0.0, radius, segments, 1);
    int numVert = toolCyl.VerticesNb() + toolDisc.VerticesNb() * 2;
    int numTris = toolCyl.TrianglesNb() + toolDisc.TrianglesNb() * 2;
    Handle(Graphic3d_ArrayOfTriangles) triArray = new Graphic3d_ArrayOfTriangles (numVert, numTris * 3, Graphic3d_ArrayFlags_VertexNormal);

    gp_Trsf trsf;
    trsf.SetTransformation(gp_Ax3(axis.Location(), axis.Direction()), gp_Ax3());
    toolCyl.FillArray(triArray, trsf);
    toolDisc.FillArray(triArray, trsf);
    gp_Pnt newLocation = axis.Location().Translated(gp_Vec(axis.Direction()).Multiplied(height));
    trsf.SetTransformation(gp_Ax3(newLocation, axis.Direction()), gp_Ax3());
    toolDisc.FillArray(triArray, trsf);

    return triArray;
}


