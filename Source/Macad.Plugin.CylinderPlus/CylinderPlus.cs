using System;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Common.Serialization;

namespace CylinderPlus.Types
{
    [SerializeType]
    public class CylinderPlus : Shape
    {
        public static CylinderPlus Create(double radius, double height)
        {
            return new CylinderPlus()
            {
                Radius = radius,
                Height = height
            };
        }
        [SerializeMember(SortKey = 10)]
        public double Radius
        {
            get { return _Radius; }
            set
            {
                if (_Radius != value)
                {
                    SaveUndo();
                    _Radius = value;
                    Invalidate();
                    RaisePropertyChanged();
                }
            }
        }
        private double _Radius = 5.0;

        [SerializeMember(SortKey = 20)]
        public double Height
        {
            get { return _Height; }
            set
            {
                if (_Height != value)
                {
                    SaveUndo();
                    _Height = value;
                    Invalidate();
                    RaisePropertyChanged();
                }
            }
        }
        private double _Height = 10.0;

        public override ShapeType ShapeType => ShapeType.Solid;

        protected override bool MakeInternal(MakeFlags flags)
        {
            try
            {
                // Use OCCT to create cylinder
                var maker = new BRepPrimAPI_MakeCylinder(
                    new Ax2(new Pnt(), new Dir(0, 0, 1)),
                    Radius, Height
                );
                BRep = maker.Shape();
                return base.MakeInternal(flags);
            }
            catch (Exception ex)
            {
                Messages.Error($"Failed to create cylinder: {ex.Message}");
                return false;
            }
        }
    }
}
