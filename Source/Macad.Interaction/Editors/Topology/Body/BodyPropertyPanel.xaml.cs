using System.Diagnostics;
using System.Windows;
using Macad.Common;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Interaction.Panels;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Topology
{
    public partial class BodyPropertyPanel : PropertyPanel
    {
        public Body Body
        {
            get { return _Body; }
            set
            {
                if (_Body != value)
                {
                    _Body = value;
                    RaisePropertyChanged();
                }
            }
        }

        Body _Body;

        //--------------------------------------------------------------------------------------------------

        public double PositionX
        {
            get { return _PositionX; }
            set
            {
                if (_PositionX != value)
                {
                    _PositionX = value;
                    Body.Position = new Pnt(_PositionX, Body.Position.Y, Body.Position.Z);
                    RaisePropertyChanged();
                }
            }
        }

        double _PositionX;

        //--------------------------------------------------------------------------------------------------

        public double PositionY
        {
            get { return _PositionY; }
            set
            {
                if (_PositionY != value)
                {
                    _PositionY = value;
                    Body.Position = new Pnt(Body.Position.X, _PositionY, Body.Position.Z);
                    RaisePropertyChanged();
                }
            }
        }

        double _PositionY;

        //--------------------------------------------------------------------------------------------------

        public double PositionZ
        {
            get { return _PositionZ; }
            set
            {
                if (_PositionZ != value)
                {
                    _PositionZ = value;
                    Body.Position = new Pnt(Body.Position.X, Body.Position.Y, _PositionZ);
                    RaisePropertyChanged();
                }
            }
        }

        double _PositionZ;

        //--------------------------------------------------------------------------------------------------

        public double RotationYaw
        {
            get { return _RotationYaw; }
            set
            {
                if (_RotationYaw != value)
                {
                    _RotationYaw = value;
                    Body.Rotation = ConstructRotationQuaternion(0, _RotationYaw);
                    RaisePropertyChanged();
                }
            }
        }

        double _RotationYaw;

        //--------------------------------------------------------------------------------------------------

        public double RotationPitch
        {
            get { return _RotationPitch; }
            set
            {
                if (_RotationPitch != value)
                {
                    _RotationPitch = value;
                    Body.Rotation = ConstructRotationQuaternion(1, _RotationPitch);
                    RaisePropertyChanged();
                }
            }
        }

        double _RotationPitch;

        //--------------------------------------------------------------------------------------------------

        public double RotationRoll
        {
            get { return _RotationRoll; }
            set
            {
                if (_RotationRoll != value)
                {
                    _RotationRoll = value;
                    Body.Rotation = ConstructRotationQuaternion(2, _RotationRoll);
                    RaisePropertyChanged();
                }
            }
        }

        double _RotationRoll;

        //--------------------------------------------------------------------------------------------------

        Quaternion ConstructRotationQuaternion(int newpart, double value)
        {
            var euler = Body.Rotation.ToEuler();
            var q = new Quaternion( 
                newpart == 0 ? value.ToRad() : euler.yaw,
                newpart == 1 ? value.ToRad() : euler.pitch,
                newpart == 2 ? value.ToRad() : euler.roll);
            return q;
        }
        
        //--------------------------------------------------------------------------------------------------

        void UpdatePositionFromBody()
        {
            _PositionX = Body.Position.X;
            _PositionY = Body.Position.Y;
            _PositionZ = Body.Position.Z;

            RaisePropertyChanged(nameof(PositionX));
            RaisePropertyChanged(nameof(PositionY));
            RaisePropertyChanged(nameof(PositionZ));
        }

        //--------------------------------------------------------------------------------------------------

        void UpdateRotationFromBody()
        {
            var euler = Body.Rotation.ToEuler();
            _RotationYaw = euler.yaw.ToDeg();
            _RotationPitch = euler.pitch.ToDeg();
            _RotationRoll = euler.roll.ToDeg();

            RaisePropertyChanged(nameof(RotationYaw));
            RaisePropertyChanged(nameof(RotationPitch));
            RaisePropertyChanged(nameof(RotationRoll));
        }

        //--------------------------------------------------------------------------------------------------

        void Body_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
        {
            if (sender == Body)
            {
                if (e.PropertyName == "Position")
                {
                    UpdatePositionFromBody();
                } 
                else if (e.PropertyName == "Rotation")
                {
                    UpdateRotationFromBody();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override void Initialize(BaseObject instance)
        {
            Body = instance as Body;
            Debug.Assert(Body != null);

            ToggleVisibilityCommand = new RelayCommand<Body>(ExecuteToggleVisibility);
           
            UpdatePositionFromBody();
            UpdateRotationFromBody();

            Body.PropertyChanged += Body_PropertyChanged;

            if(Application.Current != null)
                InitializeComponent();
        }

        //--------------------------------------------------------------------------------------------------

        public override void Cleanup()
        {
            Body.PropertyChanged -= Body_PropertyChanged;
        }

        //--------------------------------------------------------------------------------------------------

        public RelayCommand<Body> ToggleVisibilityCommand { get; private set; }

        void ExecuteToggleVisibility(Body body)
        {
            body.IsVisible = !body.IsVisible;
            CommmitChange();
        }

        //--------------------------------------------------------------------------------------------------

    }
}
