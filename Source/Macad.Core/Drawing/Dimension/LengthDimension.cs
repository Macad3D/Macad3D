using System;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Drawing;

public class LengthDimension : DrawingElement
{
    #region Properties

    [SerializeMember]
    public Pnt2d FirstPoint
    {
        get { return _FirstPoint; }
        set
        {
            if (_FirstPoint != value)
            {
                SaveUndo();
                _FirstPoint = value;
                _Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public Pnt2d SecondPoint
    {
        get { return _SecondPoint; }
        set
        {
            if (_SecondPoint != value)
            {
                SaveUndo();
                _SecondPoint = value;
                _Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public string Text
    {
        get { return _Text; }
        set
        {
            if (_Text != value)
            {
                SaveUndo();
                _Text = value;
                _Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool AutoText
    {
        get { return _AutoText; }
        set
        {
            if (_AutoText != value)
            {
                SaveUndo();
                _AutoText = value;
                _Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool IsNotToScale
    {
        get { return _IsNotToScale; }
        set
        {
            if (_IsNotToScale != value)
            {
                SaveUndo();
                _IsNotToScale = value;
                _Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    Pnt2d _SecondPoint;
    Pnt2d _FirstPoint;
    string _Text;
    bool _AutoText = true;
    bool _IsNotToScale;

    const double _ExtensionOverlength = 2.0;

    static bool _Debug_DrawPoints = false;

    //--------------------------------------------------------------------------------------------------

    #endregion
        
    #region Rendering

    void _Invalidate()
    {
        Extents = null;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void CalculateExtents()
    {
        Bnd_Box2d bb = new();
        bb.Add(FirstPoint);
        bb.Add(SecondPoint);

        if (!ComputeParameters(out var parameters))
            return;

        bb.Add(_FirstPoint.Translated(parameters.ExtensionVector));
        bb.Add(SecondPoint.Translated(parameters.ExtensionVector));

        Extents = bb;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Render(IDrawingRenderer renderer)
    {
        if (!ComputeParameters(out var p))
            return false;

        if (renderer.RenderElement(this))
            return true;

        // Render each element separately
        renderer.SetStyle(new StrokeStyle(Color.Black, 0.1f, LineStyle.Solid), null, null);
        renderer.BeginGroup("Dimension");

        if (_Debug_DrawPoints)
        {
            DrawingRenderHelper.RenderCross(renderer, _FirstPoint);
            DrawingRenderHelper.RenderCross(renderer, _SecondPoint);
            DrawingRenderHelper.RenderCross(renderer, Position);
        }

        // Extension lines
        renderer.Line(_FirstPoint, _FirstPoint.Translated(p.ExtensionVector));
        renderer.Line(_SecondPoint, _SecondPoint.Translated(p.ExtensionVector));

        // Dimension line
        var arrowSize = DrawingRenderHelper.GetArrowSize();
        renderer.Line(_FirstPoint.Translated(p.DimensionOffset)
                                 .Translated(p.DimensionDirection.ToVec(arrowSize.Length * p.Scale)), 
                      _SecondPoint.Translated(p.DimensionOffset)
                                  .Translated(p.DimensionDirection.Reversed().ToVec(arrowSize.Length * p.Scale)));
        DrawingRenderHelper.RenderArrow(renderer, new Ax2d(_FirstPoint.Translated(p.DimensionOffset), p.DimensionDirection.Reversed()), p.Scale);
        DrawingRenderHelper.RenderArrow(renderer, new Ax2d(_SecondPoint.Translated(p.DimensionOffset), p.DimensionDirection), p.Scale);

        // Dimension text
        if (!Text.IsNullOrWhiteSpace())
        {
            var fontStyle = DrawingRenderHelper.GetDefaultFontStyle();
            renderer.SetStyle(null, new FillStyle(Color.Black),
                              new FontStyle(fontStyle.Family, (float)(fontStyle.Size * p.TextScale)));
            renderer.Text(Text, p.TextOrigin, p.DimensionRotation);
            if (_IsNotToScale)
            {
                var start = p.TextOrigin.Translated(p.ExtensionVector.Normalized().Scaled(-0.5));
                renderer.Line(start, start.Translated(p.DimensionDirection.ToVec(p.TextWidth)));
            }
        }

        renderer.EndGroup();

        return true;
    }

    //--------------------------------------------------------------------------------------------------
        
    #endregion

    #region Helper

    public struct Parameters
    {
        public Vec2d ExtensionVector;
        public Dir2d DimensionDirection;
        public Vec2d DimensionOffset;
        public double DimensionRotation;
        public Pnt2d TextOrigin;
        public double TextWidth;
        public double TextHeight;
        public double Scale;
        public double TextScale;
    }

    //--------------------------------------------------------------------------------------------------

    public bool ComputeParameters(out Parameters parameters)
    {
        if (FirstPoint.IsEqual(SecondPoint, 0.01))
        {
            parameters = new();
            return false;
        }

        double scale = 1.0;

        // Dimension line direction
        var dimDir = new Vec2d(_FirstPoint, _SecondPoint).ToDir();
        var dimMid = _FirstPoint.Lerped(_SecondPoint, 0.5);
        var dimWidth = _FirstPoint.Distance(_SecondPoint);
        scale = Math.Min(scale, dimWidth / (DrawingRenderHelper.GetArrowSize().Length * 3));
        if (_AutoText)
        {
            Text = dimWidth.ToInvariantString("F1");
        }

        var rotation = dimDir.Angle(Dir2d.DX);
        bool dimRightToLeft = false;
        if (rotation < -Maths.HalfPI)
        {
            rotation += Maths.PI;
            dimRightToLeft = true;
        }
        else if (rotation > Maths.HalfPI)
        {
            rotation -= Maths.PI;
            dimRightToLeft = true;
        }

        // Extension line
        var extDir = new Dir2d(dimDir.Y, -dimDir.X);
        if (dimDir.Angle(new Vec2d(dimMid, Position).ToDir()) > 0)
        {
            extDir.Reverse();
        }

        var dimToPos = new gp_Lin2d(_FirstPoint, dimDir).Distance(Position);
        var extVector = extDir.ToVec(dimToPos + _ExtensionOverlength);
        var dimOffset = extDir.ToVec(dimToPos);

        // Text
        var textOrigin = _FirstPoint.Lerped(_SecondPoint, 0.5)
                                    .Translated(dimOffset);
        var textWidth = 1.0;
        var textHeight = 1.0;
        var textScale = scale;
        if (!Text.IsNullOrWhiteSpace())
        {
            var fontStyle = DrawingRenderHelper.GetDefaultFontStyle();
            var textSize = DrawingRenderHelper.MeasureText(Text, fontStyle);
            textScale = Math.Min(1.0, dimWidth * 0.90 / textSize.X);
            scale = Math.Min(scale, textScale);
                
            // Exact positioning on above dim line
            var textOffset = dimDir.Angle(extDir) > 0 ? 1.0 : -1.0;
            if (dimRightToLeft)
            {
                textOffset *= -1;
            }
            textOrigin.Translate(extDir.ToVec(textOffset));

            // Center
            textOrigin.Translate(dimDir.ToVec((dimRightToLeft ? 1.0 : -1.0) * textSize.X / 2 * textScale));

            textWidth = textSize.X * textScale;
            textHeight = textSize.Y * textScale;
        }

        parameters = new Parameters()
        {
            ExtensionVector = extVector,
            DimensionDirection = dimDir,
            DimensionOffset = dimOffset,
            DimensionRotation = rotation,
            TextOrigin = textOrigin,
            TextWidth = textWidth,
            TextHeight = textHeight,
            Scale = scale,
            TextScale = textScale
        };

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}