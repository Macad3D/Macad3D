using System.Collections.Generic;
using Macad.Core;
using Macad.Occt;
using Macad.Occt.Helper;
using Macad.Resources;

namespace Macad.Interaction.Visual;

public class ClipPlane
{
    static Graphic3d_TextureMap _HatchTexture = null;

    //--------------------------------------------------------------------------------------------------

    readonly Graphic3d_ClipPlane _OcClipPlane;
    readonly List<V3d_View> _Views = new List<V3d_View>();

    //--------------------------------------------------------------------------------------------------

    public ClipPlane(Pln plane)
    {
        _OcClipPlane = new Graphic3d_ClipPlane(plane);

        _UpdateAspects();
        _OcClipPlane.SetOn(true);
    }

    //--------------------------------------------------------------------------------------------------

    ~ClipPlane()
    {
        _OcClipPlane.Dispose();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateAspects()
    {
        if (_HatchTexture == null)
        {
            var bitmap = ResourceUtils.ReadBitmapFromResource(@"Visual\Hatch45.png");
            if (bitmap == null)
            {
                Messages.Error($"Could not load hatch texture from resource.");
                return;
            }

            var pixmap = PixMapHelper.ConvertFromBitmap(bitmap);
            if (pixmap == null)
            {
                Messages.Error($"Could not load hatch texture into pixmap.");
                return;
            }
            _HatchTexture = new Graphic3d_Texture2D(pixmap);
            _HatchTexture.EnableModulate();
            _HatchTexture.EnableRepeat();
            _HatchTexture.GetParams().SetScale(new Graphic3d_Vec2(0.05f));
        }

        _OcClipPlane.SetCapping(true);
        _OcClipPlane.SetUseObjectMaterial(true);
        _OcClipPlane.SetUseObjectTexture(false);
        _OcClipPlane.SetCappingTexture(_HatchTexture);
    }

    //--------------------------------------------------------------------------------------------------

    public void Remove()
    {
        _Views.ForEach(view => view.RemoveClipPlane(_OcClipPlane));
        _Views.Clear();
    }

    //--------------------------------------------------------------------------------------------------

    public void AddViewport(ViewportController vcViewport)
    {
        var ocView = vcViewport.V3dView;
        if (_Views.Contains(ocView)) 
            return;

        _Views.Add(ocView);
        ocView.AddClipPlane(_OcClipPlane);
        ocView.Update();
    }

    //--------------------------------------------------------------------------------------------------

}