using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using ModelContextProtocol.Server;
using System.ComponentModel;
using System.Threading.Tasks;

namespace Macad.Mcp;

public class PrimitiveTools : ToolsBase
{
    const string _NameDescription = "Optional name. If omitted or already taken, a unique name is generated. The actual name is returned.";

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "create_box")]
    [Description("Creates a body with a box shape. All lengths in millimeters. Position is the corner of the box.")]
    public Task<BodyInfo> CreateBox(
        [Description("Size along the X axis (mm). Must be > 0.")] double width,
        [Description("Size along the Y axis (mm). Must be > 0.")] double depth,
        [Description("Size along the Z axis (mm). Must be > 0.")] double height,
        [Description("Corner X (mm). Default 0.")] double x = 0,
        [Description("Corner Y (mm). Default 0.")] double y = 0,
        [Description("Corner Z (mm). Default 0.")] double z = 0,
        [Description(_NameDescription)] string? name = null)
        => Invoke(() =>
        { 
            RequirePositive(width, nameof(width));
            RequirePositive(depth, nameof(depth));
            RequirePositive(height, nameof(height));

            Body body = Body.Create(Box.Create(width, depth, height));
            body.Position = new Pnt(x, y, z);
            return _Add(body, name);
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "create_cylinder")]
    [Description("Creates a body with a cylinder shape, its axis along Z. Lengths in millimeters. Position is the center of the base circle.")]
    public Task<BodyInfo> CreateCylinder(
        [Description("Radius (mm). Must be > 0.")] double radius,
        [Description("Height along +Z (mm). Must be > 0.")] double height,
        [Description("Base center X (mm). Default 0.")] double x = 0,
        [Description("Base center Y (mm). Default 0.")] double y = 0,
        [Description("Base center Z (mm). Default 0.")] double z = 0,
        [Description(_NameDescription)] string? name = null)
        => Invoke(() =>
        {
            RequirePositive(radius, nameof(radius));
            RequirePositive(height, nameof(height));

            Body body = Body.Create(Cylinder.Create(radius, height));
            body.Position = new Pnt(x, y, z);
            return _Add(body, name);
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "create_sphere")]
    [Description("Creates a body with a sphere shape. Lengths in millimeters. Position is the center of the sphere.")]
    public Task<BodyInfo> CreateSphere(
        [Description("Radius (mm). Must be > 0.")] double radius,
        [Description("Center X (mm). Default 0.")] double x = 0,
        [Description("Center Y (mm). Default 0.")] double y = 0,
        [Description("Center Z (mm). Default 0.")] double z = 0,
        [Description(_NameDescription)] string? name = null)
        => Invoke(() =>
        {
            RequirePositive(radius, nameof(radius));

            Body body = Body.Create(Sphere.Create(radius));
            body.Position = new Pnt(x, y, z);
            return _Add(body, name);
        });

    //--------------------------------------------------------------------------------------------------

    static BodyInfo _Add(Body body, string? name)
    {
        AddBody(body, name);
        EnsureValid(body);
        Commit();
        return BodyInfo.From(body);
    }

    //--------------------------------------------------------------------------------------------------

}
