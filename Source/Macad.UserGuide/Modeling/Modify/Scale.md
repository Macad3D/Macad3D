---
uid: 5974B87B-8CE2-4454-B400-377B936650BB
title: Scale
---
Scales a sketch, a solid or a mesh uniformly or non-uniformly.

# Property Panel
Scale Factor
:   Defines the scaling relative to the original size. If the shape is scaled non-uniformly, the factor is specified separately for each axis.

Scale Ratio
:   Specifies the size ratio between the original size and the target size. This is merely an alternative way of displaying the scaling factor, which is more common in some areas.
    This parameter is only available if the shape is scaled uniformly.

Uniform Scale
:   Defines whether the shape is scaled equally across all axes.

# Remarks
The original geometry is only retained in the case of uniform scaling, i.e. a circle remains a circle, while the geometry is changed in the case of non-uniform scaling, i.e. a circle becomes an ellipse.

# Creating a Scale
A scale can be created on any shape of type sketch, solid or mesh.

1. Select the body to scale.
2. Select __Scale__ from ribbon menu.
3. Adjust the scale factor in the property panel or using the live tools.
