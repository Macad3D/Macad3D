using System.Collections.Generic;
using System.Text;
using System.Xml;
using Macad.Common;
using Macad.Occt;

namespace Macad.Core.Exchange.Svg
{
    public enum SvgDashTypes
    {
        Solid,
        Point,
        Short,
        Long
    }

    //--------------------------------------------------------------------------------------------------

    public class SvgStyle
    {
        public Color? StrokeColor;
        public float? StrokeWidth;
        public SvgDashTypes DashType;
        public Color? FillColor;

        internal void Write(XmlWriter writer, SvgConverter conv)
        {
            if(StrokeWidth.HasValue)
                writer.WriteAttributeString("stroke-width", conv.ToSvgLength(StrokeWidth.Value));

            switch (DashType)
            {
                case SvgDashTypes.Point:
                    writer.WriteAttributeString("stroke-dasharray", "0.5 0.5");
                    break;
                case SvgDashTypes.Short:
                    writer.WriteAttributeString("stroke-dasharray", "1 0.5");
                    break;
                case SvgDashTypes.Long:
                    writer.WriteAttributeString("stroke-dasharray", "2 0.5");
                    break;
            }

            var sb = new StringBuilder();
            sb.Append($"stroke:{conv.ToSvgColor(StrokeColor)};");
            sb.Append($"fill:{conv.ToSvgColor(FillColor)};");
            if(sb.Length > 0)
                writer.WriteAttributeString("style", sb.ToString());
        }
    }

    //--------------------------------------------------------------------------------------------------

    public abstract class SvgElement
    {
        public List<SvgElement> Children { get; } = new List<SvgElement>();
        public string ID;
        public List<SvgTransform> Transforms { get; } = new List<SvgTransform>();
        public SvgStyle Style;

        internal virtual void Write(XmlWriter writer, SvgConverter conv)
        {
            if (!ID.IsNullOrEmpty())
                writer.WriteAttributeString("id", ID);

            Style?.Write(writer, conv);

            if (Transforms.Count > 0)
            {
                var sb = new StringBuilder();
                foreach (var transform in Transforms)
                {
                    transform.Write(sb, conv);
                }
                writer.WriteAttributeString("transform", sb.ToString().Trim());
            }

            foreach (var child in Children)
            {
                child.Write(writer, conv);
            }
        }

        internal virtual bool Read(XmlReader reader, SvgConverter conv)
        {
            var transformString = reader.GetAttribute("transform");
            if (!transformString.IsNullOrEmpty())
            {
                Transforms.AddRange(SvgTransform.Create(transformString, conv));
            }

            conv.PushTransform(Transforms);
            var depth = reader.Depth;

            reader.Read();
            while (!reader.EOF && reader.Depth > depth)
            {
                if (reader.NodeType != XmlNodeType.Element)
                {
                    reader.Read();
                    continue;
                }

                SvgElement newElement = null;
                switch (reader.LocalName.ToLower())
                {
                    case "g":
                        newElement = new SvgGroupElement();
                        break;
                    case "circle":
                        newElement = new SvgCircleElement();
                        break;
                    case "ellipse":
                        newElement = new SvgEllipseElement();
                        break;
                    case "path":
                        newElement = new SvgPathElement();
                        break;
                    case "line":
                        newElement = new SvgLineElement();
                        break;
                    case "rect":
                        newElement = new SvgRectElement();
                        break;
                }

                if (newElement != null)
                {
                    if(newElement.Read(reader, conv))
                        Children.Add(newElement);
                }
                else
                {
                    reader.Skip();
                }
            }

            return true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public class SvgGroupElement : SvgElement
    {
        public bool IsLayer;

        internal override void Write(XmlWriter writer, SvgConverter conv)
        {
            writer.WriteStartElement("g");
            if (IsLayer)
            {
                writer.WriteAttributeString("groupmode", SvgDocument.XmlnsInkscape, "layer");
                writer.WriteAttributeString("label", SvgDocument.XmlnsInkscape, ID);
            }

            base.Write(writer, conv);

            writer.WriteEndElement();
        }

        internal override bool Read(XmlReader reader, SvgConverter conv)
        {
            if (!base.Read(reader, conv))
                return false;

            conv.PopTransform();
            return true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public class SvgLineElement : SvgElement
    {
        public Pnt2d Start;
        public Pnt2d End;

        public SvgLineElement(Pnt2d start, Pnt2d end)
        {
            Start = start;
            End = end;
        }

        internal SvgLineElement()
        {}

        internal override void Write(XmlWriter writer, SvgConverter conv)
        {
            writer.WriteStartElement("line");

            writer.WriteAttributeString("x1", conv.ToSvgLength(Start.X));
            writer.WriteAttributeString("y2", conv.ToSvgLength(-Start.Y));
            writer.WriteAttributeString("x1", conv.ToSvgLength(End.X));
            writer.WriteAttributeString("y2", conv.ToSvgLength(-End.Y));

            base.Write(writer, conv);
            writer.WriteEndElement();
        }
        
        internal override bool Read(XmlReader reader, SvgConverter conv)
        {
            bool res = false;
            string sx1 = reader.GetAttribute("x1") ?? "0";
            string sy1 = reader.GetAttribute("y1") ?? "0";
            string sx2 = reader.GetAttribute("x2") ?? "0";
            string sy2 = reader.GetAttribute("y2") ?? "0";

            if (!base.Read(reader, conv))
                return false;
            
            if(!(sx1.IsNullOrEmpty() && sy1.IsNullOrEmpty() && sx2.IsNullOrEmpty() && sy2.IsNullOrEmpty()))
            {
                Start = new Pnt2d(conv.FromSvgLength(sx1), conv.FromSvgLength(sy1));
                conv.Transform(ref Start);
                End = new Pnt2d(conv.FromSvgLength(sx1), conv.FromSvgLength(sy1));
                conv.Transform(ref End);
                res = true;
            }

            conv.PopTransform();
            return res;
        }
    }
    
    //--------------------------------------------------------------------------------------------------

    public class SvgRectElement : SvgElement
    {
        public Pnt2d Start;
        public double Width;
        public double Height;
        public double CornerRadiusX;
        public double CornerRadiusY;

        public SvgRectElement(Pnt2d start, double width, double height)
        {
            Start = start;
            Width = width;
            Height = height;
        }

        internal SvgRectElement()
        {}

        internal override void Write(XmlWriter writer, SvgConverter conv)
        {
            writer.WriteStartElement("line");

            writer.WriteAttributeString("x", conv.ToSvgLength(Start.X));
            writer.WriteAttributeString("y", conv.ToSvgLength(-Start.Y));
            writer.WriteAttributeString("width", conv.ToSvgLength(Width));
            writer.WriteAttributeString("height", conv.ToSvgLength(-Height));

            base.Write(writer, conv);
            writer.WriteEndElement();
        }
                
        internal override bool Read(XmlReader reader, SvgConverter conv)
        {
            bool res = false;
            string sx = reader.GetAttribute("x") ?? "0";
            string sy = reader.GetAttribute("y") ?? "0";
            string sw = reader.GetAttribute("width") ?? "0";
            string sh = reader.GetAttribute("height") ?? "0";
            string srx = reader.GetAttribute("rx") ?? "0";
            string sry = reader.GetAttribute("ry") ?? "0";

            if (!base.Read(reader, conv))
                return false;
            
            if(!(sx.IsNullOrEmpty() && sy.IsNullOrEmpty() && sw.IsNullOrEmpty() && sh.IsNullOrEmpty()))
            {
                Start = new Pnt2d(conv.FromSvgLength(sx), conv.FromSvgLength(sy));
                conv.Transform(ref Start);
                Width = conv.FromSvgLength(sw);
                Height = -conv.FromSvgLength(sh);
                CornerRadiusX = conv.FromSvgLength(srx);
                CornerRadiusY = -conv.FromSvgLength(sry);
                res = true;
            }

            conv.PopTransform();
            return res;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public class SvgCircleElement : SvgElement
    {
        public Pnt2d Center;
        public double Radius;

        public SvgCircleElement(Pnt2d center, double radius)
        {
            Center = center;
            Radius = radius;
        }

        internal SvgCircleElement()
        { }

        internal override void Write(XmlWriter writer, SvgConverter conv)
        {
            writer.WriteStartElement("circle");

            writer.WriteAttributeString("cx", conv.ToSvgLength(Center.X));
            writer.WriteAttributeString("cy", conv.ToSvgLength(-Center.Y));
            writer.WriteAttributeString("r", conv.ToSvgLength(Radius));

            base.Write(writer, conv);
            writer.WriteEndElement();
        }

        internal override bool Read(XmlReader reader, SvgConverter conv)
        {
            bool res = false;
            string sx = reader.GetAttribute("cx") ?? "0";
            string sy = reader.GetAttribute("cy") ?? "0";
            string sr = reader.GetAttribute("r");

            if (!base.Read(reader, conv))
                return false;
            
            if(!sx.IsNullOrEmpty() && !sy.IsNullOrEmpty() && !sr.IsNullOrEmpty())
            {
                Center = new Pnt2d(conv.FromSvgLength(sx), conv.FromSvgLength(sy));
                conv.Transform(ref Center);
                Radius = conv.FromSvgLength(sr);
                res = true;
            }

            conv.PopTransform();
            return res;
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    public class SvgEllipseElement : SvgElement
    {
        public Pnt2d Center;
        public double RadiusX;
        public double RadiusY;
        public Pnt2d RimPointX;
        public Pnt2d RimPointY;

        public SvgEllipseElement(Pnt2d center, double radiusX, double radiusY)
        {
            Center = center;
            RadiusX = radiusX;
            RadiusY = radiusY;
        }

        internal SvgEllipseElement()
        { }

        internal override void Write(XmlWriter writer, SvgConverter conv)
        {
            writer.WriteStartElement("ellipse");

            writer.WriteAttributeString("cx", conv.ToSvgLength(Center.X));
            writer.WriteAttributeString("cy", conv.ToSvgLength(-Center.Y));
            writer.WriteAttributeString("rx", conv.ToSvgLength(RadiusX));
            writer.WriteAttributeString("ry", conv.ToSvgLength(RadiusY));

            base.Write(writer, conv);
            writer.WriteEndElement();
        }

        internal override bool Read(XmlReader reader, SvgConverter conv)
        {
            bool res = false;
            string sx = reader.GetAttribute("cx") ?? "0";
            string sy = reader.GetAttribute("cy") ?? "0";
            string srx = reader.GetAttribute("rx");
            string sry = reader.GetAttribute("ry");

            if (!base.Read(reader, conv))
                return false;
            
            if(!sx.IsNullOrEmpty() && !sy.IsNullOrEmpty() && !srx.IsNullOrEmpty() && !sry.IsNullOrEmpty())
            {
                var localCenter = new Pnt2d(conv.FromSvgLength(sx), conv.FromSvgLength(sy));
                Center = localCenter;
                RadiusX = conv.FromSvgLength(srx);
                RadiusY = conv.FromSvgLength(sry);
                RimPointX = (localCenter + new Pnt2d(RadiusX, 0));
                RimPointY = (localCenter + new Pnt2d(0, RadiusY));

                conv.Transform(ref Center);
                conv.Transform(ref RimPointX);
                conv.Transform(ref RimPointY);
                res = true;
            }

            conv.PopTransform();
            return res;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public class SvgPathElement : SvgElement
    {
        public List<SvgPathSegment> Segments { get; } = new List<SvgPathSegment>();

        internal override void Write(XmlWriter writer, SvgConverter conv)
        {
            writer.WriteStartElement("path");

            var sb = new StringBuilder();
            Pnt2d? lastPnt = null;
            foreach (var segment in Segments)
            {
                lastPnt = segment.Write(sb, lastPnt, conv);
            }
            writer.WriteAttributeString("d", sb.ToString().Trim());

            base.Write(writer, conv);
            writer.WriteEndElement();
        }
        
        internal override bool Read(XmlReader reader, SvgConverter conv)
        {
            var data = reader.GetAttribute("d");

            if (!base.Read(reader, conv))
                return false;

            if (!data.IsNullOrEmpty())
            {
                Segments.AddRange(SvgPathSegment.Create(data, conv));
            }

            Segments.ForEach(seg => seg.Transform(conv));

            conv.PopTransform();
            return Segments.Count > 0;
        }
    }
}