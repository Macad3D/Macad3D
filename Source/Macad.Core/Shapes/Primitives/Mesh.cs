using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public sealed class Mesh : Shape
{
    [SerializeMember]
    public byte[] Data
    {
        get { return _Data; }
        set
        {
            if (_Data != value)
            {
                SaveUndo();
                _Data = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    byte[] _Data;
    TopoDS_Shape _CachedOcShape;

    //--------------------------------------------------------------------------------------------------
        
    public override ShapeType ShapeType
    {
        get { return ShapeType.Mesh; }
    }

    //--------------------------------------------------------------------------------------------------

    public static Mesh Create(TopoDS_Shape occShape)
    {
        var mesh = new Mesh
        {
            _Data = Occt.Helper.BRepExchange.WriteBinary(occShape, true),
            _CachedOcShape = occShape
        };
        return mesh;
    }

    //--------------------------------------------------------------------------------------------------

    public override void SaveShapeCache(FileSystem fileSystem)
    {
        // Don't save cache for solid, since they already serialize own BRep data
    }

    //--------------------------------------------------------------------------------------------------

    public override void LoadShapeCache(FileSystem fileSystem)
    {
        if (Data?.Length > 0)
        {
            _CachedOcShape = Occt.Helper.BRepExchange.ReadBinary(Data);
            BRep = _CachedOcShape;
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool MakeInternal(MakeFlags flags)
    {
        if (_CachedOcShape == null)
        {

            if (Data == null || Data.Length == 0)
            {
                Messages.Error("The data of this mesh is empty or invalid.");
                HasErrors = true;
                return false;
            }

            _CachedOcShape = Occt.Helper.BRepExchange.ReadBinary(Data);
            if (_CachedOcShape == null)
            {
                Messages.Error("The mesh could not be reconstructed.");
                HasErrors = true;
                return false;
            }
        }

        BRep = _CachedOcShape;

        return base.MakeInternal(flags);
    }

    //--------------------------------------------------------------------------------------------------
}