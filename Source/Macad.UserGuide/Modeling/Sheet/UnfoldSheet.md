---
uid: 87d3ecca-434c-474d-befd-47f1bb83370e
title: Unfold Sheet
---
Unfolds a sheet with bend flanges with respect to the material compression.

# Property Panel
This modifier does currently not have any editable parameters.

# Remarks
The unfolding algorithm searches for bend parts created by former modifiers. This bend parts are replaced with straight parts.
The length of the straight parts is calculated by taking the material compression into account. This is done by applying the _k-Factor_, which is calculated based on the bend radius and the material thickness.

> [!Important] If the bend parts can not be discovered correctly, make sure that they are not modified in a way which destroys it's topology or geometry.

# Unfolding a bended sheetbody
1. Select the solid to be unfolded.
2. Select __Unfold Sheet__ from ribbon menu.
3. Select the base face to which the sheet will be flattened. If the base face can be detected automatically, this step is being skipped.

# See Also
[](xref:5f9b1a87-60f9-448a-860a-567eb18473c8)
