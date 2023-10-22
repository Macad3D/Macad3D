---
uid: 28fda54f-4380-45f4-b55e-23093b6dc6de
title: Chamfer
---
Chamfers edges of a solid.

# Property Panel
Mode
:   Defines the mode of how the distances and angles are defined. The following modes can be selected:
    * __Symmetric:__ The given distance to chamfer is identical for both sizes.
    * __Asymmetric:__ The distance to chamfer is defined or each side separately.
    * __Angle:__ The distance to chamfer is defined for one side and calculated for the other side to match a defined angle.

Distance
:   The distance to chamfer. If _Asymmetric_ mode is selected two distances can be defined.

Angle
:   The angle of the resulting edge. This defines the distance of the other side. To change the definition of the sides, click the button _Swap Side_.
    This parameter is only available if mode is _Angle_.

# Remarks
To select the edges to chamfer click the editor button in the property panel. Unselected edges will be shown in blue, selected edges are shown in red. Re-click the editor button or press __ESC__ to close the editor. To select all possible edges, click __Select All__, to clear the selection click __Select None__.

The chamfer modifier works on continous edges. When an edge is selected, additional edges may be automatically included.

> [!Note] The distance cannot be greater that the thickness of the face. If you want to chamfer the complete face, use [](xref:ef7f7484-88f2-45d7-8062-771c8c0ad04e) instead.

# Creating a Chamfer

1. Select the solid to chamfer.
2. Select __Chamfer__ from ribbon menu.
3. Select the edges you want to chamfer.
4. Edit distance parameters in the property panel.

# See Also
[](xref:9b151212-b7f3-43ab-ad5a-bb03c8c8b083)
