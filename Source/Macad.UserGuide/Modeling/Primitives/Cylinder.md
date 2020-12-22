---
uid: 5da4906e-c86b-4f91-8b30-f5163e152d1e
title: Cylinder 
---
Create a cylinder shape, or a segment of it.

# Property Panel
Radius
:   The radius of the base face of the cylinder.

Height
:   The height of the cylinder measured from the pivot point in Z direction.

Segment
:   If this value is smaller than 360°, a segment of the cylinder is built using the given angle. 
    ![Cylinder with _Segment = 270°_](CylinderSegment270.png)

# Creating a Cylinder
The cylinder will be created with the base face on the working plane, so consider setting up the working plane before starting.
1. Select **Create Cylinder** from ribbon menu.
2. Select the center point of the base face of the cylinder on the working plane.
3. Select any rim point of the base face of the cylinder on the working plane. This will define the radius.
4. Select the height by picking a point on an axis running trough the last selected point.

> [!Note] The pivot point is always set in the center of the base face such that the height is positive in the local coordination system of the cylinder.
