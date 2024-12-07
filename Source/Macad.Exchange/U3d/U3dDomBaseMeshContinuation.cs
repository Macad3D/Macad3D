using System.Diagnostics;
using Macad.Common;
using Macad.Occt;

namespace Macad.Exchange.U3d;

internal sealed class U3dDomBaseMeshContinuation : U3dDomContinuationBlock
{
    public Pnt[] Positions
    {
        get { return _Positions; }
        set
        {
            _Positions = value;
            _MeshDeclaration.PositionCount = (uint)_Positions.Length;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Dir[] Normals
    {
        get { return _Normals; }
        set
        {
            _Normals = value;
            _MeshDeclaration.NormalCount = (uint)_Normals.Length;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Color[] DiffuseColors
    {
        get { return _DiffuseColors; }
        set
        {
            _DiffuseColors = value;
            _MeshDeclaration.DiffuseColorCount = (uint)_DiffuseColors.Length;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public int[] Indices
    {
        get { return _Indices; }
        set
        {
            _Indices = value;
            _MeshDeclaration.FaceCount = (uint)_Indices.Length / 3;
        }
    }

    //--------------------------------------------------------------------------------------------------


    readonly U3dDomMeshDeclaration _MeshDeclaration;
    Pnt[] _Positions;
    Dir[] _Normals;
    Color[] _DiffuseColors;
    int[] _Indices;

    //--------------------------------------------------------------------------------------------------

    public U3dDomBaseMeshContinuation(U3dDomMeshDeclaration meshDecl) 
        : base(0xffffff3b)
    {
        _MeshDeclaration = meshDecl;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void WriteBlockData(U3dWriter writer)
    {
        Debug.Assert(DiffuseColors == null || DiffuseColors?.Length <= 1 || DiffuseColors?.Length == Positions?.Length);

        writer.Write(_MeshDeclaration.Name);
        writer.Write(_MeshDeclaration.ChainIndex);

        writer.Write((uint)Indices.Length / 3u);
        writer.Write((uint)Positions.Length);
        writer.Write((uint)(Normals?.Length ?? 0)); // Normal Count
        writer.Write((uint)(DiffuseColors?.Length ?? 0)); // Diffuse Color Count, currently not supported 
        writer.Write(0u); // Specular Color Count, currently not supported 
        writer.Write(0u); // Texture Coord Count, currently not supported 

        for (int i = 0; i < Positions.Length; i++)
        {
            var pos = Positions[i];
            writer.Write((float) pos.X);
            writer.Write((float) pos.Y);
            writer.Write((float) pos.Z);
        }

        for (int i = 0; i < Normals?.Length; i++)
        {
            var dir = Normals[i];
            writer.Write((float) dir.X);
            writer.Write((float) dir.Y);
            writer.Write((float) dir.Z);
        }

        for (int i = 0; i < DiffuseColors?.Length; i++)
        {
            var color = DiffuseColors[i];
            writer.Write((float) color.Red);
            writer.Write((float) color.Green);
            writer.Write((float) color.Blue);
            writer.Write((float) 1.0f);
        }

        for (int face = 0; face < Indices.Length / 3u; face++)
        {
            writer.Write((uint) 0);   // Shading ID
            for (int index = 0; index < 3; index++)
            {
                writer.Write((uint) Indices[face * 3 + index]);
                if (Normals?.Length > 0)
                {
                    writer.Write((uint) Indices[face * 3 + index]);
                }

                if (DiffuseColors?.Length > 0)
                {
                    writer.Write(DiffuseColors.Length == 1 ? 0u : (uint) Indices[face * 3 + index]);
                }
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

}