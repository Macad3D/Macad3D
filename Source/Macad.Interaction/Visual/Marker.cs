using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using Macad.Common;
using Macad.Core;
using Macad.Occt;
using Macad.Occt.Ext;
using Macad.Occt.Helper;
using Macad.Resources;

namespace Macad.Interaction.Visual
{
    public class Marker : VisualObject
    {
        [Flags]
        public enum Styles
        {
            Bitmap     = 1,
            Image      = 2,
            ModeMask   = 0x000f,

            Topmost    = 1 << 16,
            Selectable = 1 << 17,
            Background = 1 << 18,
        }

        //--------------------------------------------------------------------------------------------------

        public override bool IsSelectable
        {
            get
            {
                return _IsSelectable;
            }
            set
            {
                if (value != _IsSelectable && _Styles.HasFlag(Styles.Selectable))
                {
                    _IsSelectable = value;
                    _UpdateActivation();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        readonly Styles _Styles;
        Image _Image;
        AIS_PointEx _AisPoint;
        Geom_Point _P;
        Quantity_Color _Color = Colors.BallMarker;
        Quantity_Color _ColorBg = Colors.AttributeMarkerBackground;
        bool _IsSelectable;

        //--------------------------------------------------------------------------------------------------

        public Marker(WorkspaceController workspaceController, Styles styles, Image image)
            : base(workspaceController, null)
        {
            _Styles = styles;
            _Image = image;
        }
        
        //--------------------------------------------------------------------------------------------------

        public Marker(WorkspaceController workspaceController, Styles styles, string imageName)
            : base(workspaceController, null)
        {
            _Styles = styles;
            _Image = _GetMarkerImage(imageName);
        }
        
        //--------------------------------------------------------------------------------------------------

        public override AIS_InteractiveObject AisObject
        {
            get
            {
                _EnsureAisObject();
                return _AisPoint;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override void Remove()
        {
            if (_AisPoint != null)
            {
                AisContext.Erase(_AisPoint, false);
                _AisPoint = null;
            }
        }
        
        //--------------------------------------------------------------------------------------------------

        public override void Update()
        {
            if (_AisPoint == null)
                _EnsureAisObject();
            else
                AisContext.Redisplay(_AisPoint, false);
        }

        //--------------------------------------------------------------------------------------------------

        public void Set(Pnt p)
        {
            Set(new Geom_CartesianPoint(p));
        }

        //--------------------------------------------------------------------------------------------------
        
        public void Set(Geom_CartesianPoint p)
        {
            _P = p;

            if (!_EnsureAisObject())
                return;

            _AisPoint.SetComponent(_P);
            AisContext.Redisplay(_AisPoint, false);
        }

        //--------------------------------------------------------------------------------------------------

        public void Set(Pnt2d p, Pln plane)
        {
            Pnt pnt = new Pnt();
            ElSLib.D0(p.X, p.Y, plane, ref pnt);

            Set(pnt);
        }
        
        //--------------------------------------------------------------------------------------------------

        public void SetColor(Quantity_Color color)
        {
            _Color = color ?? Colors.BallMarker;

            if (!_EnsureAisObject())
                return;

            _AisPoint.SetColor(_Color);
            AisContext.RecomputePrsOnly(_AisPoint, false);
        }

        //--------------------------------------------------------------------------------------------------

        public void SetBackgroundColor(Quantity_Color color)
        {
            _ColorBg = color ?? Colors.AttributeMarkerBackground;

            if (!_EnsureAisObject())
                return;

            _AisPoint.SetBackgroundColor(_ColorBg);
        }
                
        //--------------------------------------------------------------------------------------------------

        public void SetImage(Image image)
        {
            if (_Image.Equals(image))
                return;

            _Image = image;

            Remove();
            _EnsureAisObject();
        }

        //--------------------------------------------------------------------------------------------------

        bool _EnsureAisObject()
        {
            if (_AisPoint != null)
            {
                return true;
            }

            if (_P == null)
                return false;

            Prs3d_PointAspect pointAspect;
            _AisPoint = new AIS_PointEx(_P);

            switch (_Styles & Styles.ModeMask)
            {
                case Styles.Bitmap:
                    _AisPoint.SetMarker(Aspect_TypeOfMarker.Aspect_TOM_USERDEFINED);
                    _AisPoint.SetColor(_Color);

                    pointAspect = CreateBitmapPointAspect(_Image, Colors.BallMarker);
                    _AisPoint.Attributes().SetPointAspect(pointAspect);
                    _AisPoint.HilightAttributes().SetPointAspect(pointAspect);
                    _AisPoint.HilightAttributes().SetColor(Colors.Highlight);
                    _AisPoint.DynamicHilightAttributes().SetPointAspect(pointAspect);
                    _AisPoint.DynamicHilightAttributes().SetColor(Colors.Highlight);
                    break;

                case Styles.Image:
                    _AisPoint.SetMarker(Aspect_TypeOfMarker.Aspect_TOM_USERDEFINED);

                    pointAspect = CreateImagePointAspect(_Image);
                    _AisPoint.Attributes().SetPointAspect(pointAspect);
                    _AisPoint.HilightAttributes().SetPointAspect(pointAspect);
                    _AisPoint.HilightAttributes().SetColor(Colors.Highlight);
                    _AisPoint.DynamicHilightAttributes().SetPointAspect(pointAspect);
                    _AisPoint.DynamicHilightAttributes().SetColor(Colors.Highlight);

                    if (_Styles.HasFlag(Styles.Background))
                    {
                        _AisPoint.EnableBackground(0.75);
                    }
                    break;
            }

            if (_Styles.HasFlag(Styles.Topmost))
            {
                _AisPoint.SetZLayer(-4); // TopOSD
                _AisPoint.HilightAttributes().SetZLayer(-4);
                _AisPoint.DynamicHilightAttributes().SetZLayer(-4);
            }

            AisContext.Display(_AisPoint, 0, _Styles.HasFlag(Styles.Selectable) ? 0 : -1, false);
            AisContext.SetSelectionSensitivity(_AisPoint, 0, Math.Min(_Image.Height, _Image.Width));

            _UpdateActivation();

            return true;
        }
        
        //--------------------------------------------------------------------------------------------------

        #region Selection

        void _UpdateActivation()
        {
            if (_AisPoint == null)
                return;

            if (_IsSelectable)
            {
                AisContext.Activate(_AisPoint, 0, false);
            }
            else
            {
                AisContext.Deactivate(_AisPoint);
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Images

        public struct Image
        {
            public Image_PixMap PixMap;
            public int Width;
            public int Height;
            public TColStd_HArray1OfByte Bytes;
        }

        //--------------------------------------------------------------------------------------------------

        static readonly Dictionary<string, Image> _ImageCache = new Dictionary<string, Image>();

        //--------------------------------------------------------------------------------------------------

        public static Image BallImage = _GetMarkerImage("Marker_Ball");
        public static Image RectImage = _GetMarkerImage("Marker_Rect");
        public static Image RingImage = _GetMarkerImage("Marker_Ring");
        public static Image XImage = _GetMarkerImage("Marker_X");
        public static Image ErrorImage = _GetMarkerImage("Marker_Error");

        //--------------------------------------------------------------------------------------------------

        static Image _GetMarkerImage(string name)
        {
            if (_ImageCache.TryGetValue(name, out var image))
            {
                return image;
            }

            var bitmap = ResourceUtils.ReadBitmapFromResource(Path.Combine("Marker", name) + ".png");
            if (bitmap == null)
            {
                Messages.Error($"Could not load marker image {name} from resource.");
            }
            else
            {
                var pixmap = PixMapHelper.ConvertFromBitmap(bitmap);
                if (pixmap == null)
                {
                    Messages.Error($"Could not load marker image {name} into pixmap.");
                }
                else
                {
                    image = new Image()
                    {
                        PixMap = pixmap,
                        Width = (int) pixmap.Width(),
                        Height = (int) pixmap.Height(),
                        Bytes = new Graphic3d_MarkerImage(pixmap).GetBitMapArray()
                    };
                }
            }
            _ImageCache.Add(name, image);
            return image;
        }

        //--------------------------------------------------------------------------------------------------

        public static Prs3d_PointAspect CreateBitmapPointAspect(Image image, Quantity_Color color)
        {
            Debug.Assert(image.Bytes!=null);
            return new Prs3d_PointAspect(color, image.Width, image.Height, image.Bytes);
        }

        //--------------------------------------------------------------------------------------------------

        static Prs3d_PointAspect CreateImagePointAspect(Image image)
        {
            Debug.Assert(image.PixMap!=null);
            var aspectMarker = new Graphic3d_AspectMarker3d(image.PixMap);
            var aspectPoint = new Prs3d_PointAspect(aspectMarker);

            return aspectPoint;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}