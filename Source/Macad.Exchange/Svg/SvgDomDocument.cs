using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Text;
using System.Xml;
using Macad.Common;
using Macad.Core;
using Macad.Occt;

namespace Macad.Exchange.Svg;
/*
 * Basic implementation of the SVG DOM
 * https://www.w3.org/TR/SVG11/
 */

internal sealed class SvgConverter
{
    public double DotsPerInch { get; set; }
    public double Scale { get; set; }

    //--------------------------------------------------------------------------------------------------
        
    public SvgConverter()
    {
        DotsPerInch = 96.0;
        Scale = 25.4 / DotsPerInch;
    }

    //--------------------------------------------------------------------------------------------------

    public string ToSvgValue(double value)
    {
        return ((float)value).ToString(CultureInfo.InvariantCulture);
    }

    public string ToSvgLength(double value)
    {
        return ((float)(value / Scale)).ToString(CultureInfo.InvariantCulture);
    }

    public string ToSvgColor(Color? color)
    {
        if (color == null)
            return "none";
        if (color.Value.Equals(Color.Black))
            return "black";
        if (color.Value.Equals(Color.White))
            return "white";

        return $"#{(int) color.Value.Red * 255:x2}{(int) color.Value.Green * 255:x2}{(int) color.Value.Blue * 255:x2}";
    }
        
    //--------------------------------------------------------------------------------------------------

    public double FromSvgAngle(string s)
    {
        TryConvertToDegree(s, out var value );
        return value;
    }

    public double FromSvgValue(string s)
    {
        double.TryParse(s, NumberStyles.Float, CultureInfo.InvariantCulture, out var value);
        return value;
    }

    public double FromSvgLength(string s)
    {
        TryConvertToMillimeter(s, out var value);
        return value;
    }

    //--------------------------------------------------------------------------------------------------
        
    public bool AreEqual(Pnt2d first, Pnt2d second)
    {
        return first.IsEqual(second, 0.0001);
    }

    public bool TryConvertToMillimeter(string input, out double value, bool applyScale=true)
    {
        value = 0;

        var firstUnit = input.Length - 1;
        if (firstUnit < 1 || !char.IsLetter(input[firstUnit]))
        {
            if (double.TryParse(input, NumberStyles.Float, CultureInfo.InvariantCulture, out value))
            {
                if (applyScale)
                    value *= Scale;
                return true;
            }

            return false;
        }

        if (input[firstUnit] == '%')
        {
            return false;
        }

        firstUnit--;
        if (!char.IsLetter(input[firstUnit]))
        {
            return false;
        }

        if(!double.TryParse(input.Substring(0, firstUnit), NumberStyles.Float, CultureInfo.InvariantCulture, out value))
        {
            return false;
        }

        // https://tex.stackexchange.com/questions/8260/what-are-the-various-units-ex-em-in-pt-bp-dd-pc-expressed-in-mm
        double? scale = null;
        switch (input.Substring(firstUnit).ToLower())
        {
            case "px":
                scale = 25.4 / DotsPerInch;
                break;
            case "em":
                scale = 3.51462;
                break;
            case "ex":
                scale = 1.51323;
                break;
            case "in":
                scale = 25.40013;
                break;
            case "cm":
                scale = 10.0;
                break;
            case "mm":
                scale = 1.0;
                break;
            case "pc":
                scale = 4.21754;
                break;
            case "pt":
                scale = 0.35146;
                break;
            default:
                if(applyScale)
                    scale = Scale;
                break;
        }

        if (scale.HasValue)
        {
            value *= scale.Value;
            return true;
        }

        return false;
    }

    public bool TryConvertToDegree(string input, out double value)
    {
        value = 0;

        var lowerInput = input;
        if (input.EndsWith("deg"))
        {
            return double.TryParse(input.Substring(0, input.Length - 3), NumberStyles.Float, CultureInfo.InvariantCulture, out value);
        }
        if (input.EndsWith("rad"))
        {
            if (double.TryParse(input.Substring(0, input.Length - 3), NumberStyles.Float, CultureInfo.InvariantCulture, out value))
            {
                value = value.ToDeg();
                return true;
            }
            return false;
        }
        if (input.EndsWith("grad"))
        {
            if (double.TryParse(input.Substring(0, input.Length - 4), NumberStyles.Float, CultureInfo.InvariantCulture, out value))
            {
                value = value * 0.9;
                return true;
            }
            return false;
        }

        return double.TryParse(input, NumberStyles.Float, CultureInfo.InvariantCulture, out value);
    }

    static readonly char[] _ValueSeparator = {' ', ','};

    public bool TrySplitParts(string s, out string[] parts)
    {
        parts = s.Split(_ValueSeparator, StringSplitOptions.RemoveEmptyEntries);
        if (parts.Length == 0)
        {
            parts = null;
            return false;
        }
        return true;
    }

    public bool TrySplitValues(string s, out double[] values, bool applyScale)
    {
        if (!TrySplitParts(s, out var parts))
        {
            values = null;
            return false;
        }

        values = new double[parts.Length];
        for (var index = 0; index < parts.Length; index++)
        {
            var token = parts[index];
            if (!double.TryParse(token, NumberStyles.Float, CultureInfo.InvariantCulture, out values[index]))
                return false;
            if (applyScale)
                values[index] *= Scale;
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #region Transformation

    readonly Stack<List<SvgTransform>> _TransformStack = new Stack<List<SvgTransform>>();
    gp_GTrsf2d _TransformMatrix = new gp_GTrsf2d();

    //--------------------------------------------------------------------------------------------------

    internal void PushTransform(List<SvgTransform> transforms)
    {
        _TransformStack.Push(transforms);
        _UpdateTransformMatrix();
    }

    //--------------------------------------------------------------------------------------------------

    internal void PopTransform()
    {
        _TransformStack.Pop();
        _UpdateTransformMatrix();
    }

    //--------------------------------------------------------------------------------------------------
        
    void _UpdateTransformMatrix()
    {
        _TransformMatrix = new gp_GTrsf2d();
        foreach (var transforms in _TransformStack)
        {
            if (transforms == null || transforms.Count == 0)
                continue;

            foreach (var transform in transforms)
            {
                _TransformMatrix.PreMultiply(transform.GetMatrix());
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    internal void Transform(ref Pnt2d p)
    {
        var p2 = _TransformMatrix.Transformed(p.ToXY());
        p = new Pnt2d(p2.X, -p2.Y);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}

//--------------------------------------------------------------------------------------------------

internal class SvgDocument : SvgDomElement
{
    internal const string XmlnsSvg = "http://www.w3.org/2000/svg";
    internal const string XmlnsSodipodi = "http://sodipodi.sourceforge.net/DTD/sodipodi-0.dtd";
    internal const string XmlnsInkscape = "http://www.inkscape.org/namespaces/inkscape";

    //--------------------------------------------------------------------------------------------------

    public double Width { get; set; }
    public double Height { get; set; }
    public double DotsPerInch { get; set; }

    //--------------------------------------------------------------------------------------------------

    public MemoryStream WriteToStream()
    {
        var conv = new SvgConverter()
        {
            DotsPerInch = DotsPerInch,
            Scale = 25.4 / DotsPerInch
        };

        var xmlWriterSettings = new XmlWriterSettings
        {
            Encoding = Encoding.UTF8,
            Indent = true,
            IndentChars = "  ",
        };

        var stream = new MemoryStream();
        var writer = XmlWriter.Create(stream, xmlWriterSettings);
        writer.WriteStartDocument();
        writer.WriteDocType("svg", "-//W3C//DTD SVG 1.1//EN", "http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd", null);

        writer.WriteStartElement("svg", XmlnsSvg);

        writer.WriteAttributeString("width", $"{conv.ToSvgValue(Width)}mm"); // Use AngleToSvg to get unscaled values
        writer.WriteAttributeString("height", $"{conv.ToSvgValue(Height)}mm");
        writer.WriteAttributeString("viewBox", $"0, 0, {conv.ToSvgLength(Width)}, {conv.ToSvgLength(Height)}");
        writer.WriteAttributeString("version", "1.1");

        writer.WriteAttributeString("xmlns", "xlink", null, "http://www.w3.org/1999/xlink");
        writer.WriteAttributeString("xmlns", "xml", null, "http://www.w3.org/XML/1998/namespace");
        writer.WriteAttributeString("xmlns", "sodipodi", null, XmlnsSodipodi);
        writer.WriteAttributeString("xmlns", "inkscape", null, XmlnsInkscape);

        writer.WriteStartElement("namedview", XmlnsSodipodi);
        writer.WriteAttributeString("document-units", XmlnsInkscape, "mm");
        writer.WriteEndElement();

        base.Write(writer, conv);
            
        writer.WriteEndElement();
        writer.Close();
        return stream;
    }

    //--------------------------------------------------------------------------------------------------

    void _CalculateScale(XmlReader reader, SvgConverter conv)
    {
        var viewBox = reader.GetAttribute("viewBox");
        if (viewBox.IsNullOrWhiteSpace() || !conv.TrySplitValues(viewBox, out var viewBoxValues, false))
        {
            Messages.Warning("SVG document has not defined a ViewBox. The scaling may be incorrect.");
            return;
        }

        double fScaleX = 1.0;
        double fScaleY = 1.0;
        if (conv.TryConvertToMillimeter(reader.GetAttribute("width"), out var width, false)
            && conv.TryConvertToMillimeter(reader.GetAttribute("height"), out var height, false))
        {
            fScaleX = width / viewBoxValues[2];
            fScaleY = height / viewBoxValues[3];
        }
        else
        {
            Messages.Warning("SVG document has defined it's size in units which cannot converted to millimeters. The scaling may be incorrect.");
        }

        conv.Scale = Math.Min(fScaleX, fScaleY);

        var aspectRatio = reader.GetAttribute("preserveAspectRatio");
        if (!aspectRatio.IsNullOrWhiteSpace() 
            && !conv.TrySplitParts(aspectRatio, out var aspectRatioParts))
        {
            if (aspectRatioParts[0].ToLower() == "none")
            {
                Messages.Warning("SVG document has set AspectRatio to None - scaling for X and Y can be different.");
                conv.Scale = (fScaleX + fScaleY) / 2;
            }
            else if(aspectRatioParts.Length == 2
                    && aspectRatioParts[1].ToLower() == "slice")
            {
                conv.Scale = Math.Max(fScaleX, fScaleY);
            }
        }

    }

    //--------------------------------------------------------------------------------------------------

    public bool ReadFromStream(Stream svgStream)
    {
        var settings = new XmlReaderSettings
        {
            CheckCharacters = false,
            IgnoreComments = true,
            IgnoreProcessingInstructions = true,
            IgnoreWhitespace = true,
            DtdProcessing = DtdProcessing.Ignore
        };

        var reader = XmlReader.Create(svgStream, settings);
        try
        {
            if (!reader.ReadToDescendant("svg"))
            {
                Messages.Error("The SVG file does not have an 'svg' root node.");
                return false;
            }

            var conv = new SvgConverter();
            _CalculateScale(reader, conv);

            Read(reader, conv);
        }
        catch (Exception e)
        {
            Messages.Exception("An exception occured while reading the svg document. Please check if the document is valid.", e);
            return false;
        }

        reader.Close();
        return true;
    }
}

//--------------------------------------------------------------------------------------------------