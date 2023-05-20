---
uid: 6578fa5e-7536-4df2-96fc-18a31a4cee9c
title: Mirror
---
Adds a mirrored copy of a sketch or a solid to the shape.

# Property Panel

Offset
:   Specifies the distance to offset the mirrored copy to the original. Only available if a edge or face of the shape is selected as reference.

Keep Original
:   If checked, the original shape will be included in the result. Otherwise, the result will only contain the mirrored copy.

Reselect Reference
:   Starts reselection of the mirror plane or the edge/face defining the mirror line/plane.

# Remarks
If working with a sketch, the modifier will use a reference edge to define the mirror line. If working with a solid, the modifier will use a reference face to define the mirror plane.

Depending on the shape the direction of the offset may be improper. Invert the offset value to correct this.

# Creating a Mirror

## Creating a Mirror on a sketch
1. Select a sketch.
2. Select __Mirror__ from ribbon menu.
3. Select the reference edge to define the mirror line.
4. Adjust the offset in the property panel.

## Creating a Mirror on a solid
1. Select a solid.
2. Select __Mirror__ from ribbon menu.
3. Select one of the default planes or the reference face to define the mirror plane.
4. Adjust the offset in the property panel.
