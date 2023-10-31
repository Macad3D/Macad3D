---
uid: 0c834add-faf4-48f0-a8c3-e6dce411774c
title: Export (and Import)
---
This page explains import and export capabilities.

# Import and Export Formats

Macad\|3D supports the following file formats for importing and exporting data:

File Format | Supported Data 
------------|----------------|----------------
SVG         | Sketch Import and Export, Drawing Export
DXF         | Sketch Import and Export, Drawing Export
IGES        | Solid Import and Export
STEP        | Solid Import and Export
BREP        | Solid Import and Export
OBJ         | Mesh Import and Export
STL         | Mesh Import and Export
U3D         | Mesh Export
PDF         | Drawing Export, Mesh Export (as 3D-PDF)

Imported meshes can be displayed, but not modified or be part of another modeling operation.

# Drawings

Drawings are easily generated from a viewport and exported as 2D vector file. They contain every shape currently visible, with hidden lines removed (or rather exported with different style).

Some drawings depend on the modeling path used, for example the [Pipe Drawing](xref:69425fd0-ff1a-4dc3-9014-12860684e057). These are described on the pages of the respective modeling tools.

![Example of a drawing exported as SVG](ImportExportDrawingSample.png)

## Exporting a Viewport Drawing

1. Select your desired perspective in the viewport.
2. Make all bodies visible which should be seen in the drawing. Hide the others. 
3. Click __Create From View__ on the ribbon tab __Toolbox__.
4. On the following dialog box, select all line types you want to see in the drawing.
5. Check __Use Triangulation__ if you want to get polylines generated from the triangulation of the solids instead of true curves. Since curves are smoother, more accurate and also smaller in size, you should consider this option only if you get problems with using curves.
6. Click __Export__ and save your file.

# Cut Plan (Slice Contour)

Cut plans are line drawings from a single body to serve as pattern for laser cutting, engraving or milling. They are created by slicing the body by planes and determining the contours of the intersected solid on this planes.

## Exporting Slice Contours

1. Select the body. Optionally, set the shape to current you want to use (see 4.).
2. Click __Slice Contour__ on the ribbon tab __Toolbox__.
3. The settings for the slice contour exporter will be shown in the property pane, and the viewport will show a preview of the contours as red lines and the reconstructed shape with straight walls. The reconstruction can be switched off in the property panel.
4. The tool tries to guess the correct direction of slicing. If it is not correct, click __Reselect Base Face__ and select a face parallel to the desired slice planes.
5. Select the desired layer count. When the Layer interval is set to __Auto__, all layers will have equal thickness, and the slice planes will always be positioned in the middle of each layer. To adjust the layer intervals yourself set them to __Custom__ and enter the desired distances, or move the layers interactively in the viewport.
6. If you do not want to use the top shape - e.g. because of other process steps like taper coming after production of the part so far - you can lock the export to the current shape.
7. Click on __Export Vector File__ and save your file.

All settings will be saved with the body and be restored the next time you call this exporter. If you want to remove this settings, click the black round _x_ on the right side of the property panel header.

For an example how this exporter can be used, take a look into the Tutorial [](xref:cb109114-b7bd-40be-bb3a-ce7e0fbe0974).

# Etching Mask

Etching masks are single or double layer vector drawings with filled areas to serve as mask film for photo etching. Like slice contours, they are created by slicing the body by planes and determining the areas of the intersected solid on this planes.

## Exporting Etching Masks

1. Select the body. Optionally, set the shape to current you want to use (see 4.).
2. Click __Etching Mask__ on the ribbon tab __Toolbox__.
3. The settings for the etching mask exporter will be shown in the property pane, and the viewport will show a preview of the reconstructed shape as it would be etched based on the generated mask.
4. The tool tries to guess the correct direction of slicing. If it is not correct, click __Reselect Base Face__ and select a face parallel to the desired slice planes.
5. Select the desired layer count. All layers will have equal thickness, and the slice planes will always be positioned in the middle of each layer. Etching masks can have up to two planes.
6. If you do not want to use the top shape - e.g. because of other process steps like taper coming after production of the part so far - you can lock the export to the current shape.
7. Click on __Export Vector File__ and save your file.

All settings will be saved with the body and be restored the next time you call this exporter. If you want to remove this settings, click the black round _x_ on the right side of the property panel header.

For an example how this exporter can be used, take a look into the Tutorial [](xref:cb109114-b7bd-40be-bb3a-ce7e0fbe0974).

