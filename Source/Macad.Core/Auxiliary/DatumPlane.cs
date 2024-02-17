using System;
using System.Runtime.CompilerServices;
using Macad.Common.Serialization;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Core.Auxiliary;

[SerializeType]
public class DatumPlane : InteractiveEntity, ITransformable
{
    #region Properties

    [SerializeMember]
    public Pnt Position
    {
        get
        {
            return _Position;
        }
        set
        {
            if (!_Position.IsEqual(value, double.Epsilon))
            {
                SaveUndo();
                _Position = value;
                RaisePropertyChanged();
                RaiseVisualChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public Quaternion Rotation
    {
        get
        {
            return _Rotation;
        }
        set
        {
            if (!_Rotation.IsEqual(value))
            {
                SaveUndo();
                _Rotation = value;
                RaisePropertyChanged();
                RaiseVisualChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double SizeX
    {
        get { return _SizeX; }
        set
        {
            if (_SizeX != value)
            {
                SaveUndo();
                _SizeX = Math.Max(0.01, value);
                RaisePropertyChanged();

                if (!IsDeserializing)
                {
                    if (_KeepAspectRatio)
                    {
                        SizeY = _SizeX / _AspectRatio;
                    }
                    else
                    {
                        _AspectRatio = _SizeX / _SizeY;
                    }
                }

                RaiseVisualChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double SizeY
    {
        get { return _SizeY; }
        set
        {
            if (_SizeY != value)
            {
                SaveUndo();
                _SizeY = Math.Max(0.01, value);
                RaisePropertyChanged();

                if (!IsDeserializing)
                {
                    if (_KeepAspectRatio)
                    {
                        SizeX = _SizeY * _AspectRatio;
                    }
                    else
                    {
                        _AspectRatio = _SizeX / _SizeY;
                    }
                }

                RaiseVisualChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool KeepAspectRatio
    {
        get { return _KeepAspectRatio; }
        set
        {
            if (_KeepAspectRatio != value)
            {
                SaveUndo();
                _KeepAspectRatio = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    [SerializeMember]
    public string ImageFilePath
    {
        get { return _ImageFilePath; }
        set
        {
            if (_ImageFilePath != value)
            {
                SaveUndo();
                _ImageFilePath = value;
                RaisePropertyChanged();
                RaiseVisualChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    string _ImageFilePath;
    Pnt _Position = Pnt.Origin;
    Quaternion _Rotation = Quaternion.Identity;
    double _SizeX;
    double _SizeY;
    bool _KeepAspectRatio;
    double _AspectRatio;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Initialization

    public static DatumPlane Create()
    {
        var imagePlane = new DatumPlane()
        {
            Name = CoreContext.Current.Document?.AddNextNameSuffix(nameof(DatumPlane)) ?? nameof(DatumPlane),
            Layer = CoreContext.Current.Layers?.ActiveLayer,
            Document = CoreContext.Current.Document
        };
        imagePlane.RaiseVisualChanged();
        return imagePlane;
    }

    //--------------------------------------------------------------------------------------------------

    public DatumPlane()
    {
        _SizeX = 100;
        _SizeY = 100;
        _KeepAspectRatio = true;
        _AspectRatio = _SizeX / _SizeY;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Entity

    protected override void RaisePropertyChanged([CallerMemberName] string propertyName = "")
    {
        base.RaisePropertyChanged(propertyName);
        if (!IsDeserializing)
        {
            CoreContext.Current?.Document?.MarkAsUnsaved();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region ITransformable
        
    public Ax3 GetCoordinateSystem()
    {
        return Rotation.ToAx3(Position);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}