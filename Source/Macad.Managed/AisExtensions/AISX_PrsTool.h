#pragma once

class AISX_PrsTool
{
public:
	static Handle(Graphic3d_ArrayOfTriangles) CreateCylinder(const gp_Ax1 axis, double radius, double height, int segments);
};

