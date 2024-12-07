using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Windows;
using System.Windows.Media;
using Macad.Common;

namespace Macad.Exchange.Pdf;

internal sealed class PdfDomFontDescriptor : PdfDomObject
{
    [Flags]
    enum Flags
    {
        FixedPitch  = 1 << 0,
        Serif       = 1 << 1,
        Symbolic    = 1 << 2,
        Script      = 1 << 3,
        Nonsymbolic = 1 << 5,
        Italic      = 1 << 6,
        AllCap      = 1 << 16,
        SmallCap    = 1 << 17,
        ForceBold   = 1 << 18
    }

    //--------------------------------------------------------------------------------------------------

    readonly PdfDomStream _FontStream;
    bool _HasFontFile;

    //--------------------------------------------------------------------------------------------------

    public PdfDomFontDescriptor(PdfDomDocument document) 
        : base(document, "FontDescriptor")
    {
        _FontStream = new PdfDomStream(document, "");
    }

    //--------------------------------------------------------------------------------------------------

    internal bool Update(GlyphTypeface glyphTypeface, ICollection<ushort> glyphs, ref string finalFontName)
    {
        // Write font file to embed
        var bytes = glyphTypeface.ComputeSubset(glyphs);
        if(bytes?.Length > 0)
        {
            _FontStream.Add(bytes);
            _FontStream.Attributes["Length1"] = bytes.Length;
            Attributes["FontFile2"] = _FontStream;
            finalFontName = $"AAAAAA+{finalFontName}";
            _HasFontFile = true;
        }
            
        Attributes["FontName"] = $"/{finalFontName}";
        Attributes["FontFamily"] = $"({glyphTypeface.FamilyNames[CultureInfo.GetCultureInfo("en-us")]})";
        Attributes["FontWeight"] = $"{glyphTypeface.Weight.ToOpenTypeWeight()}";
        Attributes["FontStretch"] = $"/{glyphTypeface.Stretch}";

        // Set attributes
        var flags = glyphTypeface.Symbol ? Flags.Symbolic : Flags.Nonsymbolic;
        if (glyphTypeface.Style == FontStyles.Italic)
            flags = flags.Added(Flags.Italic);
        Attributes["Flags"] = (int)flags;

        Attributes["FontBBox"] = new[]
        {
            // Left
            -(glyphs.Max(glyph => glyphTypeface.LeftSideBearings[glyph]) * 1000.0).ToRoundedInt(),
            // Bottom
            -(glyphs.Max(glyph => glyphTypeface.DistancesFromHorizontalBaselineToBlackBoxBottom[glyph]) * 1000.0).ToRoundedInt(),
            // Right
            (glyphs.Max(glyph => (glyphTypeface.AdvanceWidths[glyph] + glyphTypeface.RightSideBearings[glyph]) * 1000.0)).ToRoundedInt(),
            // Top
            (glyphTypeface.Baseline * 1000.0).ToRoundedInt() // Top
        };

        Attributes["ItalicAngle"] = glyphTypeface.Style == FontStyles.Italic ? -75 : 0;
        Attributes["Ascent"] = (glyphTypeface.Baseline * 1000.0).ToRoundedInt();
        Attributes["Descent"] = ((glyphTypeface.Baseline - glyphTypeface.Height) * 1000.0).ToRoundedInt();
        Attributes["CapHeight"] = (glyphTypeface.CapsHeight * 1000.0).ToRoundedInt();
        Attributes["XHeight"] = (glyphTypeface.XHeight * 1000.0).ToRoundedInt();

        // StemV seems to be not used.
        // https://stackoverflow.com/questions/35485179/stemv-value-of-the-truetype-font
        Attributes["StemV"] = 80;
        Attributes["StemH"] = 80;

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Write(PdfWriter writer)
    {
        if (_HasFontFile)
        {
            _FontStream.Write(writer);
        }

        return base.Write(writer);
    }
}