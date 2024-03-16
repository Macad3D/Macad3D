using System;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Drawing;

public class AngleDimension : DrawingElement
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
    public Pnt2d CenterPoint
    {
        get { return _CenterPoint; }
        set
        {
            if (_CenterPoint != value)
            {
                SaveUndo();
                _CenterPoint = value;
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
    Pnt2d _CenterPoint;
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

        bb.Add(_FirstPoint.Translated(parameters.FirstExtensionVector));
        bb.Add(SecondPoint.Translated(parameters.SecondExtensionVector));

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
            DrawingRenderHelper.RenderCross(renderer, _CenterPoint);
            DrawingRenderHelper.RenderCross(renderer, Position);
        }

        // Extension lines
        renderer.Line(_FirstPoint, _FirstPoint.Translated(p.FirstExtensionVector));
        renderer.Line(_SecondPoint, _SecondPoint.Translated(p.SecondExtensionVector));

        // Dimension line
        BrepRenderHelper.RenderCircle(renderer, new Geom2d_Circle(new Ax2d(_CenterPoint, Dir2d.DX), p.Radius), p.StartAngle, p.EndAngle, false);
        DrawingRenderHelper.RenderArrow(renderer, new Ax2d(p.FirstArrowPoint, p.FirstArrowTangent), p.Scale);
        DrawingRenderHelper.RenderArrow(renderer, new Ax2d(p.SecondArrowPoint, p.SecondArrowTangent), p.Scale);

        // Dimension text
        if (!Text.IsNullOrWhiteSpace())
        {
            var fontStyle = DrawingRenderHelper.GetDefaultFontStyle();
            renderer.SetStyle(null, new FillStyle(Color.Black),
                              new FontStyle(fontStyle.Family, (float)(fontStyle.Size * p.TextScale)));
            renderer.Text(Text, p.TextOrigin, p.TextRotation);
            if (_IsNotToScale)
            {
                var start = p.TextOrigin.Translated(Dir2d.DX.Rotated(-p.TextRotation + Maths.HalfPI).ToVec(-0.5));
                renderer.Line(start, start.Translated(Dir2d.DX.Rotated(-p.TextRotation).ToVec(p.TextWidth)));
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
        public Vec2d FirstExtensionVector;
        public Pnt2d FirstArrowPoint;
        public Dir2d FirstArrowTangent;
        public Vec2d SecondExtensionVector;
        public Pnt2d SecondArrowPoint;
        public Dir2d SecondArrowTangent;
        public double Radius;
        public double StartAngle;
        public double EndAngle;
        public Pnt2d TextOrigin;
        public double TextRotation;
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

        var arrowSize = DrawingRenderHelper.GetArrowSize();
        double scale = 1.0;

        // Dimension line
        var radius = _CenterPoint.Distance(Position);

        // Extension line
        var extDir1 = new Vec2d(_CenterPoint, _FirstPoint).ToDir();
        var angle1 = Maths.NormalizeAngleRad(-extDir1.Angle(Dir2d.DX));
        var extVector1 = extDir1.ToVec(radius - _CenterPoint.Distance(_FirstPoint) + _ExtensionOverlength);

        var extDir2 = new Vec2d(_CenterPoint, _SecondPoint).ToDir();
        var angle2 = Maths.NormalizeAngleRad(-extDir2.Angle(Dir2d.DX));
        var extVector2 = extDir2.ToVec(radius - _CenterPoint.Distance(_SecondPoint) + _ExtensionOverlength);

        // Check sense
        var posAngle = Maths.NormalizeAngleRad(-new Vec2d(_CenterPoint, Position).ToDir().Angle(Dir2d.DX));
        if (posAngle < angle1 || posAngle > angle2)
        {
            angle1.Swap(ref angle2);
            if (angle2 < angle1)
                angle1 -= Maths.DoublePI;
        }
        var angle = Maths.NormalizeAngleRad(angle2 - angle1);

        if (_AutoText)
        {
            Text = angle.Abs().ToDeg().ToInvariantString("F0") + "°";
        }

        Geom2d_Circle circle = new(new Ax2d(_CenterPoint, Dir2d.DX), radius);
        var dimWidth = circle.Circ2d().Length() / circle.Period() * angle;
        scale = Math.Min(scale, dimWidth / (arrowSize.Length * 3));

        // Text
        Pnt2d textOrigin = new();
        Vec2d textTangent = new();
        circle.D1(angle1.Lerp(angle2, 0.5), ref textOrigin, ref textTangent);
        if (textTangent.X < 0.0)
        {
            textTangent.Reverse();
        }
        var textDirection = textTangent.ToDir();
        var textNormal = new Vec2d(_CenterPoint, textOrigin).ToDir();
        var textWidth = 1.0;
        var textHeight = 1.0;
        var textRotation = textDirection.Angle(Dir2d.DX);
        var textScale = scale;

        if (!Text.IsNullOrWhiteSpace())
        {
            var fontStyle = DrawingRenderHelper.GetDefaultFontStyle();
            var textSize = DrawingRenderHelper.MeasureText(Text, fontStyle);
            textScale = Math.Min(1.0, dimWidth * 0.90 / textSize.X);
            scale = Math.Min(scale, textScale);
            var textOffset = textNormal.Y < 0 ? -1.0 : 1.0; // Exact positioning on above dim line
            textOrigin.Translate(textNormal.ToVec(textOffset));
            textOrigin.Translate(textDirection.ToVec(-textSize.X / 2 * textScale));
            textWidth = textSize.X * textScale;
            textHeight = textSize.Y * textScale;
        }

        // Arrows
        bool reverse = angle1 < angle2;
        double arrowAngle = circle.Period() / circle.Circ2d().Length() * arrowSize.Length * scale * (reverse ? 0.5 : -0.5);
        angle1 += arrowAngle;
        angle2 -= arrowAngle;

        Pnt2d arrowP1 = new(), arrowP2 = new();
        Vec2d arrowT1 = new(), arrowT2 = new();
        circle.D1(angle1, ref arrowP1, ref arrowT1);
        circle.D1(angle2, ref arrowP2, ref arrowT2);
        if(reverse)
            arrowT1.Reverse();
        else
            arrowT2.Reverse();

        arrowP1.Translate(arrowT1.ToDir().ToVec(arrowSize.Length * scale * 0.5));
        arrowP2.Translate(arrowT2.ToDir().ToVec(arrowSize.Length * scale * 0.5)); 

        // Move arrows slightly towards center, to compensate that the tangent is taken from the middle of the arrow
        double arrowOffset = _CenterPoint.Distance(circle.Value(angle1)) - _CenterPoint.Distance(arrowP1);
        arrowP1.Translate(extDir1.ToVec(arrowOffset)); 
        arrowP2.Translate(extDir2.ToVec(arrowOffset)); 

        parameters = new ()
        {
            FirstExtensionVector = extVector1,
            FirstArrowPoint = arrowP1,
            FirstArrowTangent = arrowT1.ToDir(),
            SecondExtensionVector = extVector2,
            SecondArrowPoint = arrowP2,
            SecondArrowTangent = arrowT2.ToDir(),
            Radius = radius,
            StartAngle = angle1 + arrowAngle,
            EndAngle = angle2 - arrowAngle,
            TextOrigin = textOrigin,
            TextRotation = textRotation,
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