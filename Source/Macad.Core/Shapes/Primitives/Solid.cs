using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public sealed class Solid : Shape
{
    [SerializeMember]
    public byte[] Data
    {
        get { return _Data; }
        private set
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
    TopoDS_Shape _CachedBRep;

    //--------------------------------------------------------------------------------------------------
        
    public override ShapeType ShapeType
    {
        get { return ShapeType.Solid; }
    }

    //--------------------------------------------------------------------------------------------------

    public static Solid Create(TopoDS_Shape brep)
    {
        var solid = new Solid();
        solid.UpdateShape(brep);
        return solid;
    }

    //--------------------------------------------------------------------------------------------------

    public void UpdateShape(TopoDS_Shape brep)
    {
        _CachedBRep = brep;
        Data = Occt.Helper.BRepExchange.WriteBinary(brep, false);
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
            _CachedBRep = Occt.Helper.BRepExchange.ReadBinary(Data);
            BRep = _CachedBRep;
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool MakeInternal(MakeFlags flags)
    {
        if (_CachedBRep == null)
        {

            if (Data == null || Data.Length == 0)
            {
                Messages.Error("The data of this solid is empty or invalid.");
                HasErrors = true;
                return false;
            }

            _CachedBRep = Occt.Helper.BRepExchange.ReadBinary(Data);
            if (_CachedBRep == null)
            {
                Messages.Error("The solid could not be reconstructed.");
                HasErrors = true;
                return false;
            }
        }

        BRep = _CachedBRep;

        return base.MakeInternal(flags);
    }

    //--------------------------------------------------------------------------------------------------

}