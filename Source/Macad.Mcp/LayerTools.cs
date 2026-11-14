using Macad.Common;
using Macad.Core;
using Macad.Core.Topology;
using ModelContextProtocol;
using ModelContextProtocol.Server;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Globalization;
using System.Linq;
using System.Threading.Tasks;

namespace Macad.Mcp;

public class LayerTools : ToolsBase
{
    const string _LayerDescription = "The layer, referenced by its guid or its unique name.";

    static readonly NameMap<PresentationMode> _PresentationNames = NameMap<PresentationMode>.FromEnum();
    static readonly NameMap<LineStyle> _LineStyleNames = NameMap<LineStyle>.FromEnum();
    static readonly NameMap<LineThickness> _LineThicknessNames = NameMap<LineThickness>.FromEnum();

    //--------------------------------------------------------------------------------------------------

    #region Result structures

    public sealed record LayerInfo(string Guid, string Name, int Index, bool IsDefault, bool IsActive, bool Visible, bool Locked,
                                   string Color, double Transparency, string Presentation, string LineStyle, string LineThickness,
                                   string[] Bodies)
    {
        public static LayerInfo From(Layer layer)
        {
            var layers = CoreContext.Current.Layers;
            return new(layer.Guid.ToString(), layer.Name, layers.ToList().IndexOf(layer), layer == layers.Default, layer.IsActive,
                       layer.IsVisible, layer.IsLocked, layer.Color.ToHexString(), Math.Round(layer.Transparency, 6),
                       _PresentationNames.Format(layer.PresentationMode), _LineStyleNames.Format(layer.LineStyle),
                       _LineThicknessNames.Format(layer.LineThickness),
                       CoreContext.Current.Document.OfType<Body>().Where(b => b.Layer == layer).Select(b => b.Name).ToArray());
        }
    }

    //--------------------------------------------------------------------------------------------------

    public sealed record LayersResult(LayerInfo[] Layers, bool IsolateActiveLayer);

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region Tools

    [McpServerTool(Name = "list_layers", ReadOnly = true)]
    [Description("Lists the layers of the document in their order, with their visual style and the bodies on them. "
                 + "Layers sort bodies into groups which can be shown, hidden or locked together; every body is on exactly one layer. "
                 + "The first layer is the default layer, it cannot be deleted. New bodies are put on the active layer.")]
    public Task<LayersResult> ListLayers()
        => Invoke(_ListLayers);

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "create_layer")]
    [Description("Creates a new layer at the end of the layer list. By default it becomes the active layer, "
                 + "so the bodies created next are put on it. Use move_bodies_to_layer for existing bodies.")]
    public Task<LayerInfo> CreateLayer(
        [Description("Name of the layer. If it is already taken, a unique name is generated.")] string name,
        [Description("Color of the bodies on the layer, as '#rrggbb'. Optional.")] string? color = null,
        [Description("True to make the new layer the active one. Default true.")] bool activate = true)
        => Invoke(() =>
        {
            if (string.IsNullOrWhiteSpace(name))
            {
                throw new McpException("'name' must not be empty.");
            }

            var layers = CoreContext.Current.Layers;
            var layer = new Layer { Name = _MakeUniqueLayerName(name.Trim(), null) };
            if (color != null)
            {
                layer.Color = _ParseColor(color, nameof(color));
            }
            layers.Add(layer);
            if (activate)
            {
                layers.ActiveLayer = layer;
            }
            return _Commit(layer);
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "update_layer")]
    [Description("Changes a layer: its name, whether its bodies are visible or locked (not selectable in the viewport), "
                 + "and the visual style of its bodies. Give only what should change. Returns the changed layer.")]
    public Task<LayerInfo> UpdateLayer(
        [Description(_LayerDescription)] string layer,
        [Description("New name. If it is already taken, a unique name is generated. Optional.")] string? name = null,
        [Description("True to show, false to hide the bodies of the layer. Optional.")] bool? visible = null,
        [Description("True to lock the bodies of the layer against selection in the viewport. Optional.")] bool? locked = null,
        [Description("Color as '#rrggbb'. Optional.")] string? color = null,
        [Description("Transparency from 0 (opaque) to 1 (invisible). Optional.")] double? transparency = null,
        [Description("'wireframe', 'solid' or 'solid_with_boundary'. Optional.")] string? presentation = null,
        [Description("Line style of edges: 'solid', 'dash', 'short_dash', 'dot' or 'dot_dash'. Optional.")] string? lineStyle = null,
        [Description("Line thickness of edges: 'thin', 'normal' or 'thick'. Optional.")] string? lineThickness = null)
        => Invoke(() =>
        {
            var target = _ResolveLayer(layer);
            if (name == null && visible == null && locked == null && color == null && transparency == null
                && presentation == null && lineStyle == null && lineThickness == null)
            {
                throw new McpException("Give at least one property to change.");
            }
            if (name != null && string.IsNullOrWhiteSpace(name))
            {
                throw new McpException("'name' must not be empty.");
            }
            if (transparency != null && (!double.IsFinite(transparency.Value) || transparency < 0 || transparency > 1))
            {
                throw new McpException($"'transparency' must be between 0 and 1 (got {transparency}).");
            }
            var newColor = color == null ? (Color?)null : _ParseColor(color, nameof(color));
            var newPresentation = presentation == null ? (PresentationMode?)null : _PresentationNames.Parse(presentation, nameof(presentation));
            var newLineStyle = lineStyle == null ? (LineStyle?)null : _LineStyleNames.Parse(lineStyle, nameof(lineStyle));
            var newLineThickness = lineThickness == null ? (LineThickness?)null : _LineThicknessNames.Parse(lineThickness, nameof(lineThickness));

            if (name != null) target.Name = _MakeUniqueLayerName(name.Trim(), target);
            if (visible != null) target.IsVisible = visible.Value;
            if (locked != null) target.IsLocked = locked.Value;
            if (newColor != null) target.Color = newColor.Value;
            if (transparency != null) target.Transparency = (float)transparency.Value;
            if (newPresentation != null) target.PresentationMode = newPresentation.Value;
            if (newLineStyle != null) target.LineStyle = newLineStyle.Value;
            if (newLineThickness != null) target.LineThickness = newLineThickness.Value;
            return _Commit(target);
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "delete_layer", Destructive = true)]
    [Description("Deletes a layer. Its bodies are not deleted, they are moved to the default layer. "
                 + "The default layer cannot be deleted. Can be reverted with undo.")]
    public Task<LayersResult> DeleteLayer(
        [Description(_LayerDescription)] string layer)
        => Invoke(() =>
        {
            var target = _ResolveLayer(layer);
            var layers = CoreContext.Current.Layers;
            if (target == layers.Default)
            {
                throw new McpException($"The default layer '{target.Name}' cannot be deleted.");
            }

            layers.Remove(target);
            _MarkChanged();
            return _ListLayers();
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "set_active_layer")]
    [Description("Makes a layer the active one: bodies created afterwards are put on it. "
                 + "'isolate' additionally makes only the bodies of the active layer selectable in the viewport.")]
    public Task<LayersResult> SetActiveLayer(
        [Description(_LayerDescription)] string layer,
        [Description("True to isolate the active layer, false to end the isolation. Optional, unchanged by default.")] bool? isolate = null)
        => Invoke(() =>
        {
            var target = _ResolveLayer(layer);
            var layers = CoreContext.Current.Layers;
            layers.ActiveLayer = target;
            if (isolate != null)
            {
                layers.IsolateActiveLayer = isolate.Value;
            }
            _MarkChanged();
            return _ListLayers();
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "move_bodies_to_layer")]
    [Description("Sorts bodies into a layer, e.g. to group the parts of an assembly. A body is on one layer only, "
                 + "so it leaves its former layer. Returns the layer with all its bodies.")]
    public Task<LayerInfo> MoveBodiesToLayer(
        [Description("The bodies (guids or unique names). At least one.")] string[] bodies,
        [Description(_LayerDescription)] string layer)
        => Invoke(() =>
        {
            if (bodies == null || bodies.Length == 0)
            {
                throw new McpException("Give at least one body.");
            }
            var target = _ResolveLayer(layer);
            var targets = bodies.Select(ResolveBody).Distinct().ToList();

            foreach (var body in targets)
            {
                body.Layer = target;
            }
            return _Commit(target);
        });

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Helper

    static LayersResult _ListLayers()
    {
        var layers = CoreContext.Current.Layers;
        return new LayersResult(layers.Select(LayerInfo.From).ToArray(), layers.IsolateActiveLayer);
    }

    //--------------------------------------------------------------------------------------------------

    // Finds a layer by its guid or, if the reference is not a guid, by its name.
    static Layer _ResolveLayer(string reference)
    {
        if (string.IsNullOrWhiteSpace(reference))
        {
            throw new McpException("A layer reference (guid or name) is required.");
        }

        var layers = CoreContext.Current.Layers;
        reference = reference.Trim();
        if (Guid.TryParse(reference, out var guid))
        {
            return layers.FirstOrDefault(l => l.Guid == guid)
                   ?? throw new McpException($"No layer with the guid '{reference}' exists.");
        }

        var matches = layers.Where(l => l.Name == reference).ToList();
        return matches.Count switch
        {
            1 => matches[0],
            0 => throw new McpException($"No layer named '{reference}' exists. Layers: {string.Join(", ", layers.Select(l => $"'{l.Name}'"))}."),
            _ => throw new McpException($"The name '{reference}' is used by {matches.Count} layers "
                                        + $"({string.Join(", ", matches.Select(l => l.Guid))}). Use the guid instead.")
        };
    }

    //--------------------------------------------------------------------------------------------------

    static string _MakeUniqueLayerName(string name, Layer? except)
    {
        var usedNames = CoreContext.Current.Layers.Where(l => l != except).Select(l => l.Name).ToHashSet();
        var uniqueName = name;
        for (int i = 2; usedNames.Contains(uniqueName); i++)
        {
            uniqueName = $"{name} {i}";
        }
        return uniqueName;
    }

    //--------------------------------------------------------------------------------------------------

    static Color _ParseColor(string value, string parameter)
    {
        var hex = value.Trim().TrimStart('#');
        if (hex.Length != 6 || !int.TryParse(hex, NumberStyles.HexNumber, CultureInfo.InvariantCulture, out var rgb))
        {
            throw new McpException($"'{parameter}' must be a color like '#ff8000' (got '{value}').");
        }
        return new Color(((rgb >> 16) & 0xff) / 255f, ((rgb >> 8) & 0xff) / 255f, (rgb & 0xff) / 255f);
    }

    //--------------------------------------------------------------------------------------------------

    // Layers are not tracked by the document's change detection, like in the UI they are marked explicitly.
    static void _MarkChanged()
    {
        Commit();
        CoreContext.Current.Document?.MarkAsUnsaved();
    }

    //--------------------------------------------------------------------------------------------------

    static LayerInfo _Commit(Layer layer)
    {
        _MarkChanged();
        return LayerInfo.From(layer);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
