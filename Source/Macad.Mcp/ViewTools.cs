using Macad.Core;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Occt;
using ModelContextProtocol;
using ModelContextProtocol.Protocol;
using ModelContextProtocol.Server;
using System;
using System.ComponentModel;
using System.Drawing.Imaging;
using System.IO;
using System.Threading.Tasks;

namespace Macad.Mcp;

public class ViewTools : ToolsBase
{
    const int _MinSize = 64;
    const int _MaxSize = 2048;

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "capture_view", ReadOnly = true)]
    [Description("Renders the 3D viewport to a PNG image to check the model visually. "
                 + "View: 'current' (the user's camera), 'iso' (default), 'front', 'back', 'left', 'right', 'top' (looking down along -Z), "
                 + "'bottom', or a custom viewing 'direction' [x, y, z] from the camera towards the model. Which horizontal axis the "
                 + "front faces is a setting of the user, the named views follow it. The text returned with the image states the "
                 + "front axis and the viewing direction used. "
                 + "The image is fitted to the given bodies, or to all visible bodies (except for 'current' without bodies). "
                 + "Hidden bodies are not shown. The user's camera is restored afterwards.")]
    public Task<CallToolResult> CaptureView(
        [Description("'current', 'iso', 'front', 'back', 'left', 'right', 'top' or 'bottom'. Default 'iso'. Ignored if 'direction' is given.")] string view = "iso",
        [Description("Custom viewing direction [x, y, z], from the camera towards the model. Optional.")] double[]? direction = null,
        [Description("Bodies (guids or unique names) to fit into the image. Optional.")] string[]? bodies = null,
        [Description($"Image width in pixels, 64 to 2048. Default 800.")] int width = 800,
        [Description($"Image height in pixels, 64 to 2048. Default 600.")] int height = 600)
        => Invoke(() =>
        {
            if (width < _MinSize || width > _MaxSize || height < _MinSize || height > _MaxSize)
            {
                throw new McpException($"'width' and 'height' must be between {_MinSize} and {_MaxSize} pixels (got {width} x {height}).");
            }

            var forward = _GetForwardDirection();
            var (eyeDirection, up) = _GetOrientation(view, ToDir(direction, nameof(direction)), forward);
            var fitBox = _GetFitBox(bodies);

            var context = InteractiveContext.Current;
            var viewportController = context?.ViewportController;
            var v3dView = viewportController?.V3dView;
            if (viewportController == null || v3dView == null || !viewportController.IsVisible)
            {
                throw new McpException("No 3D viewport is visible, the view cannot be captured.");
            }

            context!.WorkspaceController.VisualObjects.UpdateInvalidatedEntities();

            var savedCamera = new Graphic3d_Camera();
            savedCamera.Copy(v3dView.Camera());
            bool wasImmediateUpdate = v3dView.SetImmediateUpdate(false);
            try
            {
                if (eyeDirection != null)
                {
                    v3dView.SetProj(eyeDirection.Value.X, eyeDirection.Value.Y, eyeDirection.Value.Z);
                    v3dView.SetUp(up!.Value.X, up.Value.Y, up.Value.Z);
                }
                if (fitBox != null)
                {
                    v3dView.FitAll(fitBox, 0.1);
                }
                else if (eyeDirection != null)
                {
                    v3dView.FitAll(0.1, false);
                }
                v3dView.ZFitAll(1.0);

                using var bitmap = viewportController.RenderToBitmap((uint)width, (uint)height)
                                   ?? throw new McpException("The viewport could not be rendered.");
                using var stream = new MemoryStream();
                bitmap.Save(stream, ImageFormat.Png);

                var viewing = v3dView.Camera().Direction(); // From the camera towards the model
                return new CallToolResult
                {
                    Content =
                    [
                        ImageContentBlock.FromBytes(stream.ToArray(), "image/png"),
                        new TextContentBlock
                        {
                            Text = $"The front of the model faces {_FormatAxis(forward)} (user setting). "
                                   + FormattableString.Invariant($"The camera looks along [{_Round(viewing.X)}, {_Round(viewing.Y)}, {_Round(viewing.Z)}], Z is up.")
                        }
                    ]
                };
            }
            finally
            {
                v3dView.Camera().Copy(savedCamera);
                v3dView.SetImmediateUpdate(wasImmediateUpdate);
                savedCamera.Dispose();
                context.WorkspaceController.Invalidate();
            }
        });

    //--------------------------------------------------------------------------------------------------

    // Returns the direction from the model towards the eye, and the up direction, or null to keep the camera.
    // The named views follow the front direction configured by the user, like the view cube.
    static (Dir? eye, Dir? up) _GetOrientation(string view, Dir? direction, ViewUtils.ViewForwardDirection forward)
    {
        if (direction != null)
        {
            var eye = direction.Value.Reversed();
            if (!eye.IsParallel(Dir.DZ, 1e-3))
            {
                return (eye, Dir.DZ);
            }
            // Looking along Z: oriented like the top or bottom view
            var topOrBottom = _GetProjAxis(eye.Z > 0 ? ViewUtils.PredefinedView.Top : ViewUtils.PredefinedView.Bottom, forward);
            return (eye, topOrBottom.Up);
        }

        ViewUtils.PredefinedView predefinedView;
        switch (view?.Trim().ToLowerInvariant())
        {
            case "current":
                return (null, null);
            case "iso":
                // Between front and right, from above
                var front = _GetProjAxis(ViewUtils.PredefinedView.Front, forward).Proj;
                var right = _GetProjAxis(ViewUtils.PredefinedView.Right, forward).Proj;
                return (new Dir(front.X + right.X, front.Y + right.Y, 1), Dir.DZ);
            case "front": predefinedView = ViewUtils.PredefinedView.Front; break;
            case "back": predefinedView = ViewUtils.PredefinedView.Back; break;
            case "left": predefinedView = ViewUtils.PredefinedView.Left; break;
            case "right": predefinedView = ViewUtils.PredefinedView.Right; break;
            case "top": predefinedView = ViewUtils.PredefinedView.Top; break;
            case "bottom": predefinedView = ViewUtils.PredefinedView.Bottom; break;
            default:
                throw new McpException($"Unknown view '{view}'. Use 'current', 'iso', 'front', 'back', 'left', 'right', 'top', 'bottom' or give a 'direction'.");
        }

        var axes = _GetProjAxis(predefinedView, forward);
        return (axes.Proj, axes.Up);
    }

    //--------------------------------------------------------------------------------------------------

    static double _Round(double value)
    {
        return Math.Round(value, 3) + 0.0; // No negative zero
    }

    //--------------------------------------------------------------------------------------------------

    static ViewUtils.ViewForwardDirection _GetForwardDirection()
    {
        return InteractiveContext.Current?.Parameters.Get<ViewportParameterSet>().ForwardDirection
               ?? ViewUtils.ViewForwardDirection.XPos;
    }

    //--------------------------------------------------------------------------------------------------

    static string _FormatAxis(ViewUtils.ViewForwardDirection direction)
    {
        return direction switch
        {
            ViewUtils.ViewForwardDirection.XNeg => "-X",
            ViewUtils.ViewForwardDirection.YPos => "+Y",
            ViewUtils.ViewForwardDirection.YNeg => "-Y",
            _ => "+X"
        };
    }

    //--------------------------------------------------------------------------------------------------

    static (Dir Proj, Dir Up) _GetProjAxis(ViewUtils.PredefinedView view, ViewUtils.ViewForwardDirection forward)
    {
        return ViewUtils.GetProjAxis(view, forward)
               ?? throw new InvalidOperationException($"No axes known for view {view} with front direction {forward}.");
    }

    //--------------------------------------------------------------------------------------------------

    static Bnd_Box? _GetFitBox(string[]? bodies)
    {
        if (bodies == null || bodies.Length == 0)
        {
            return null;
        }

        var box = new Bnd_Box();
        foreach (var reference in bodies)
        {
            var body = ResolveBody(reference);
            var brep = body.Shape?.GetTransformedBRep()
                       ?? throw new McpException($"The body '{body.Name}' has no valid shape.");
            BRepBndLib.Add(brep, box);
        }
        if (box.IsVoid())
        {
            throw new McpException("The given bodies have no extent to fit.");
        }
        return box;
    }

    //--------------------------------------------------------------------------------------------------
}
