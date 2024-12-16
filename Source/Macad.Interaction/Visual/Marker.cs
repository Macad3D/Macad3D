using System;
using System.Collections.Generic;
using System.IO;
using System.Windows.Media.Imaging;
using Macad.Common;
using Macad.Core;
using Macad.Occt;
using Macad.Occt.Ext;
using Macad.Occt.Helper;
using Macad.Resources;

namespace Macad.Interaction.Visual;

public class Marker : VisualObject
{
    [Flags]
    public enum Styles
    {
        Bitmap      = 1,
        Image       = 2,
        ModeMask    = 0x000f,

        NoClipPlane = 1 << 15,
        Topmost     = 1 << 16,
        Background  = 1 << 18,
    }

    //--------------------------------------------------------------------------------------------------

    public Color Color
    {
        get { return _Color; }
        set
        {
            if (_Color.Equals(value)) 
                return;

            _Color = value;
            if (_AisPoint != null)
                Update();
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    public Color BackgroundColor
    {
        get { return _ColorBg; }
        set
        {
            if (_ColorBg.Equals(value)) 
                return;

            _ColorBg = value;
            if (_AisPoint != null)
                Update();
        }
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
            if (_IsSelectable == value)
                return;

            _IsSelectable = value;
            if (_AisPoint != null)
                Update();
        }
    }

    //--------------------------------------------------------------------------------------------------

    readonly Styles _Styles;
    Image _Image;
    AIS_PointEx _AisPoint;
    Geom_Point _P;
    Color _Color = Colors.Marker;
    Color _ColorBg = Colors.AttributeMarkerBackground;
    bool _IsSelectable;

    //--------------------------------------------------------------------------------------------------

    public Marker(WorkspaceController workspaceController, Styles styles, Image image)
        : base(workspaceController, null)
    {
        _Styles = styles;
        _Image = image;
    }

    //--------------------------------------------------------------------------------------------------

    public Marker(WorkspaceController workspaceController, Styles styles, string imageName, int size)
        : base(workspaceController, null)
    {
        _Styles = styles;
        _Image = _GetMarkerImage(imageName, size);
    }
        
    //--------------------------------------------------------------------------------------------------

    public override AIS_InteractiveObject AisObject
    {
        get { return _AisPoint; }
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
        {
            _EnsureAisObject();
        }
        else
        {
            _UpdatePresentation();
            AisContext.Redisplay(_AisPoint, false);
        }

        if (_IsSelectable)
        {
            AisContext.Activate(_AisPoint);
        }
        else
        {
            AisContext.Deactivate(_AisPoint);
        }
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
        Update();
    }

    //--------------------------------------------------------------------------------------------------

    public void Set(Pnt2d p, Pln plane)
    {
        Pnt pnt = new Pnt();
        ElSLib.D0(p.X, p.Y, plane, ref pnt);

        Set(pnt);
    }
                
    //--------------------------------------------------------------------------------------------------

    public void SetImage(Image image)
    {
        if (ReferenceEquals(_Image, image))
            return;

        _Image = image;

        Remove();
        _EnsureAisObject();
    }
    //--------------------------------------------------------------------------------------------------

    void _UpdatePresentation()
    {
        if (_AisPoint == null)
            return;
            
        _AisPoint.SetMarker(Aspect_TypeOfMarker.USERDEFINED);

        Prs3d_PointAspect pointAspect = null;
        switch (_Styles & Styles.ModeMask)
        {
            case Styles.Bitmap:
                pointAspect = CreateBitmapPointAspect(_Image, _Color);
                break;

            case Styles.Image:
                pointAspect = CreateImagePointAspect(_Image);
                break;
        }

        if (pointAspect == null)
            return;

        _AisPoint.Attributes().SetPointAspect(pointAspect);
        _AisPoint.HilightAttributes().SetPointAspect(pointAspect);
        _AisPoint.HilightAttributes().SetColor(Colors.Highlight.ToQuantityColor());
        _AisPoint.DynamicHilightAttributes().SetPointAspect(pointAspect);
        _AisPoint.DynamicHilightAttributes().SetColor(Colors.Highlight.ToQuantityColor());

        if (_Styles.HasFlag(Styles.Background))
        {
            _AisPoint.EnableBackground(0.75);
            _AisPoint.SetBackgroundColor(_ColorBg.ToQuantityColor());
        }
    }

    //--------------------------------------------------------------------------------------------------

    bool _EnsureAisObject()
    {
        if (_AisPoint != null)
            return true;

        if (_P == null)
            return false;

        _AisPoint = new AIS_PointEx(_P);

        if(_Styles.HasFlag(Styles.NoClipPlane))
            AisHelper.DisableGlobalClipPlanes(_AisPoint);

        _UpdatePresentation();

        if (_Styles.HasFlag(Styles.Topmost))
        {
            _AisPoint.SetZLayer(-4); // TopOSD
            _AisPoint.HilightAttributes().SetZLayer(-4);
            _AisPoint.DynamicHilightAttributes().SetZLayer(-4);
        }

        AisContext.Display(_AisPoint, 0, 0, false);
        if (_Image != null)
        {
            AisContext.SetSelectionSensitivity(_AisPoint, 0, Math.Min(_Image.Height, _Image.Width));
        }

        return true;
    }
        
    //--------------------------------------------------------------------------------------------------

    #region Images

    public class Image
    {
        public Image_PixMap PixMap;
        public int Width;
        public int Height;
        public TColStd_HArray1OfByte Bytes;
    }

    //--------------------------------------------------------------------------------------------------

    static readonly Dictionary<string, Image> _ImageCache = new();

    //--------------------------------------------------------------------------------------------------

    public static readonly Image BallImage = _GetMarkerImage("Ball", 8);
    public static readonly Image RectImage = _GetMarkerImage("Rect", 8);
    public static readonly Image RingImage = _GetMarkerImage("Ring", 16);
    public static readonly Image PlusImage = _GetMarkerImage("Plus", 16);
    public static readonly Image XImage = _GetMarkerImage("X", 16);
    public static readonly Image ErrorImage = _GetMarkerImage("Error", 24);

    //--------------------------------------------------------------------------------------------------

    static Image _GetMarkerImage(string name, int size)
    {
        string cacheName = $"{name}@{size}";

        if (_ImageCache.TryGetValue(cacheName, out var image))
        {
            return image;
        }

        var pixmap = _TryGetMarkerFromXaml(name, size) ?? _TryGetMarkerFromImage(name);
        if (pixmap == null)
        {
            Messages.Error($"Could not load marker image {name} from resource.");
            _ImageCache.Add(cacheName, null);
            return null;
        }

        image = new Image()
        {
            PixMap = pixmap,
            Width = (int) pixmap.Width(),
            Height = (int) pixmap.Height(),
            Bytes = new Graphic3d_MarkerImage(pixmap).GetBitMapArray()
        };
        _ImageCache.Add(cacheName, image);
        return image;
    }

    //--------------------------------------------------------------------------------------------------

    static Image_PixMap _TryGetMarkerFromImage(string name)
    {
        var bitmap = ResourceUtils.ReadBitmapFromResource(Path.Combine("Marker", name) + ".png");
        if (bitmap == null)
        {
            return null;
        }

        var pixmap = PixMapHelper.ConvertFromBitmap(bitmap);
        if (pixmap == null)
        {
            Messages.Error($"Could not load marker image {name} into pixmap.");
            return null;
        }

        return pixmap;
    }
        
    //--------------------------------------------------------------------------------------------------

    static Image_PixMap _TryGetMarkerFromXaml(string name, int size)
    {
        try
        {
            double dpiScale = InteractiveContext.Current.WorkspaceController?.ActiveViewControlller?.DpiScale ?? 1.0;
            int finalSize = (int)(size * dpiScale);

            var drawing = ResourceUtils.GetDictionaryElement<System.Windows.Media.Drawing>(ResourceUtils.Category.Marker, "Marker_" + name);
            if (drawing == null)
                return null;

            var drawingImage = new System.Windows.Media.DrawingImage(drawing);
            drawingImage.Freeze();

            System.Windows.Media.DrawingVisual drawingVisual = new();
            using(var drawingContext = drawingVisual.RenderOpen())
            {
                drawingContext.PushTransform(new System.Windows.Media.ScaleTransform(finalSize / drawingImage.Width, finalSize / drawingImage.Height, 0, 0));
                drawingContext.DrawDrawing(drawing);
            }

            RenderTargetBitmap renderTarget = new RenderTargetBitmap(finalSize, finalSize, 96, 96, System.Windows.Media.PixelFormats.Pbgra32);
            renderTarget.Render(drawingVisual);

            int stride = renderTarget.PixelWidth * (renderTarget.Format.BitsPerPixel / 8);
            byte[] pixels = new byte[renderTarget.PixelHeight * stride];
            renderTarget.CopyPixels(pixels, stride, 0);
            var pixmap = PixMapHelper.CreateFromBytes(pixels, renderTarget.PixelHeight, renderTarget.PixelWidth, renderTarget.Format.BitsPerPixel / 8);
            if (pixmap == null)
            {
                Messages.Error($"Could not load marker image {name} into pixmap.");
                return null;
            }

            return pixmap;
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public static Prs3d_PointAspect CreateBitmapPointAspect(Image image, Color color)
    {
        if (image?.Bytes == null)
        {
            return new Prs3d_PointAspect(Aspect_TypeOfMarker.BALL, color.ToQuantityColor(), 1.0);
        }

        return new Prs3d_PointAspect(color.ToQuantityColor(), image.Width, image.Height, image.Bytes);
    }

    //--------------------------------------------------------------------------------------------------

    static Prs3d_PointAspect CreateImagePointAspect(Image image)
    {
        if (image?.PixMap == null)
        {
            return new Prs3d_PointAspect(Aspect_TypeOfMarker.BALL, Colors.Marker.ToQuantityColor(), 1.0);
        }

        var aspectMarker = new Graphic3d_AspectMarker3d(image.PixMap);
        var aspectPoint = new Prs3d_PointAspect(aspectMarker);

        return aspectPoint;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}