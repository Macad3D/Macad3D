using System;
using System.Collections.Generic;
using System.Globalization;
using System.Windows;
using System.Windows.Media;
using Macad.Common;
using FontStyle = Macad.Core.Drawing.FontStyle;

namespace Macad.Exchange.Pdf;

internal sealed class PdfDomFont : PdfDomObject
{
    public string Name
    {
        get { return _Name; }
    }

    //--------------------------------------------------------------------------------------------------

    public FontStyle Style
    {
        get { return _Style; }
    }

    //--------------------------------------------------------------------------------------------------

    readonly string _Name;
    readonly FontStyle _Style;
    readonly PdfDomFontDescriptor _Descriptor;
    bool _Completed;
    int _FirstChar = char.MaxValue;
    int _LastChar = char.MinValue;
    readonly HashSet<int> _Characters = new();

    //--------------------------------------------------------------------------------------------------

    public PdfDomFont(PdfDomDocument document, string name, FontStyle style) 
        : base(document, "Font")
    {
        _Name = name;
        _Style = style;
        _Descriptor = new PdfDomFontDescriptor(document);
    }

    //--------------------------------------------------------------------------------------------------

    internal void AddCharacter(int character)
    {
        _Characters.Add(character);
        _FirstChar = Math.Min(_FirstChar, character);
        _LastChar = Math.Max(_LastChar, character);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Write(PdfWriter writer)
    {
        if (!_Completed)
        {
            Attributes["Subtype"] = "/TrueType";
            Attributes["Encoding"] = "/WinAnsiEncoding";
            Attributes["Name"] = $"/{_Name}";
            string finalFontName = $"{_Style.Family.Replace(" ", "")}";
                
            var typeface = new Typeface(new FontFamily(_Style.Family), FontStyles.Normal, FontWeights.Normal, FontStretches.Normal);
            if (typeface.TryGetGlyphTypeface(out var glyphTypeface))
            {
                var ciEnUs = CultureInfo.GetCultureInfo("en-us");
                finalFontName = (glyphTypeface.FamilyNames[ciEnUs] + glyphTypeface.FaceNames[ciEnUs]).Replace(" ", "");
                Attributes["FirstChar"] = _FirstChar;
                Attributes["LastChar"] = _LastChar;
                Attributes["FontDescriptor"] = _Descriptor;

                // Create list of glyphs and widths
                int[] widths = new int[_LastChar - _FirstChar + 1];
                List<ushort> glyphs = new();
                for (int i = _FirstChar; i <= _LastChar; i++)
                {
                    if (!_Characters.Contains(i) || !glyphTypeface.CharacterToGlyphMap.ContainsKey(i))
                        continue;

                    ushort glyph = glyphTypeface.CharacterToGlyphMap[i];
                    widths[i - _FirstChar] = (glyphTypeface.AdvanceWidths[glyph] * 1000.0).ToRoundedInt();
                    glyphs.Add(glyph);
                }
                Attributes["Widths"] = widths;

                _Descriptor.Update(glyphTypeface, glyphs, ref finalFontName);
            }

            Attributes["BaseFont"] = $"/{finalFontName}";

            _Completed = true;
        }

        return _Descriptor.Write(writer) && base.Write(writer);
    }
}