using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes
{
    [SerializeType]
    public sealed class Sphere : Shape
    {
        #region Construction Properties

        [SerializeMember]
        public double Radius
        {
            get
            {
                return _Radius;
            }
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

        [SerializeMember]
        public double SegmentAngle
        {
            get { return _SegmentAngle; }
            set
            {
                if (_SegmentAngle != value)
                {
                    SaveUndo();
                    _SegmentAngle = value;
                    Invalidate();
                    RaisePropertyChanged();
                }
            }
        }

        [SerializeMember]
        public double MaxLatitude
        {
            get { return _MaxLatitude; }
            set
            {
                if (_MaxLatitude != value)
                {
                    SaveUndo();
                    _MaxLatitude = value;
                    Invalidate();
                    RaisePropertyChanged();
                }
            }
        }

        [SerializeMember]
        public double MinLatitude
        {
            get { return _MinLatitude; }
            set
            {
                if (_MinLatitude != value)
                {
                    SaveUndo();
                    _MinLatitude = value;
                    Invalidate();
                    RaisePropertyChanged();
                }
            }
        }

        #endregion

        #region Members

        private double _Radius;
        private double _MaxLatitude;
        private double _MinLatitude;
        private double _SegmentAngle;

        #endregion

        #region Initialization
                
        public override ShapeType ShapeType
        {
            get { return ShapeType.Solid; }
        }

        //--------------------------------------------------------------------------------------------------

        public static Sphere Create(double radius)
        {
            return new Sphere()
            {
                _Radius = radius
            };
        }

        //--------------------------------------------------------------------------------------------------

        public Sphere()
        {
            _Radius = 1.0;
            _SegmentAngle = 360;
            _MaxLatitude = 90;
            _MinLatitude = -90;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Make

        protected override bool MakeInternal(MakeFlags flags)
        {
            double? segAngle = null;
            if (SegmentAngle > 0)
                segAngle = SegmentAngle.Clamp(0, 360);

            double? topAngle = null;
            if (MaxLatitude < 90)
                topAngle = MaxLatitude.Clamp(-90, 90);

            double? bottomAngle = null;
            if (MinLatitude > -90)
                bottomAngle = MinLatitude.Clamp(-90, 90);

            bool useLatitudeExtents = (topAngle.HasValue || bottomAngle.HasValue);
            if (useLatitudeExtents)
            {
                if (!topAngle.HasValue)
                    topAngle = 90;
                if (!bottomAngle.HasValue)
                    bottomAngle = -90;

                if (topAngle.Value <= bottomAngle.Value)
                {
                    return false;
                }
            }

            BRepPrimAPI_MakeSphere makeSphere;
            if (segAngle.HasValue)
            {
                if (useLatitudeExtents)
                {
                    makeSphere = new BRepPrimAPI_MakeSphere(Radius, bottomAngle.Value.ToRad(), topAngle.Value.ToRad(), segAngle.Value.ToRad());
                }
                else
                {
                    makeSphere = new BRepPrimAPI_MakeSphere(Radius, segAngle.Value.ToRad());
                }
            }
            else
            {
                if (useLatitudeExtents)
                {
                    makeSphere = new BRepPrimAPI_MakeSphere(Radius, bottomAngle.Value.ToRad(), topAngle.Value.ToRad());
                }
                else
                {
                    makeSphere = new BRepPrimAPI_MakeSphere(Radius);
                }
            }
            BRep = makeSphere.Solid();
            return base.MakeInternal(flags);
        }



        #endregion
    }
}