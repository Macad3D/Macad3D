using System;
using System.IO;
using System.Linq;
using System.Text;
using System.Xml;
using Markdig.Extensions.DefinitionLists;
using Markdig.Extensions.Tables;
using Markdig.Extensions.Yaml;
using Markdig.Helpers;
using Markdig.Renderers;
using Markdig.Syntax;
using Markdig.Syntax.Inlines;

namespace Macad.Build.Doc
{

    internal class MamlRenderer : RendererBase
    {
        public XmlWriter XmlWriter { get; }
        public int SectionLevel { get; set; }
        public string RelativeDirectory { get; set; }

        public MamlRenderer(Stream stream, string relativeDirectory) : base()
        {
            RelativeDirectory = relativeDirectory;

            ObjectRenderers.Add(new LiteralInlineRenderer());
            ObjectRenderers.Add(new LineBreakInlineRenderer());
            ObjectRenderers.Add(new LinkInlineRenderer());
            ObjectRenderers.Add(new EmphasisInlineRenderer());
            ObjectRenderers.Add(new CodeInlineRenderer());
            ObjectRenderers.Add(new YamlFrontMatterRenderer());
            ObjectRenderers.Add(new ParagraphBlockRenderer());
            ObjectRenderers.Add(new HeadingRenderer());
            ObjectRenderers.Add(new TableRenderer());
            ObjectRenderers.Add(new TableRowRenderer());
            ObjectRenderers.Add(new TableCellRenderer());
            ObjectRenderers.Add(new ListBlockRenderer());
            ObjectRenderers.Add(new ListItemBlockRenderer());
            ObjectRenderers.Add(new QuoteBlockRenderer());
            ObjectRenderers.Add(new FencedCodeBlockRenderer());
            ObjectRenderers.Add(new DefinitionListRenderer());
            ObjectRenderers.Add(new DefinitionItemRenderer());
                ObjectRenderers.Add(new CodeSnippetRenderer());

            var settings = new XmlWriterSettings()
            {
                Encoding = Encoding.UTF8,
                Indent = true,
                IndentChars = "  ",
            };
            XmlWriter = XmlWriter.Create(stream, settings);
            XmlWriter.WriteStartDocument();
        }

        public override object Render(MarkdownObject markdownObject)
        {
            if (markdownObject is MarkdownDocument document)
            {
                document.SetLinkReferenceDefinition("!Note", new LinkReferenceDefinition("!Note", "", ""));
                Write(markdownObject);
                XmlWriter.Close();
            }
            return null;
        }

        public void Write(ref StringSlice slice)
        {
        }

        public void WriteLeafInline(LeafBlock leafBlock)
        {
            var inline = (Inline)leafBlock.Inline;
            if (inline != null)
            {
                while (inline != null)
                {
                    Write(inline);
                    inline = inline.NextSibling;
                }
            }
        }
        
        public void WriteLeafRawLines(LeafBlock leafBlock, bool writeEndOfLines)
        {
            StringBuilder sb = new StringBuilder();
            if (leafBlock == null) throw new ArgumentNullException(nameof(leafBlock));
            if (leafBlock.Lines.Lines != null)
            {
                var lines = leafBlock.Lines;
                var slices = lines.Lines;
                for (int i = 0; i < lines.Count; i++)
                {
                    if (!writeEndOfLines && i > 0)
                    {
                        sb.AppendLine();
                    }
                    var slice = slices[i].Slice;
                    if (slice.Start <= slice.End)
                    {
                        sb.Append(slice.Text.Substring(slice.Start, slice.Length));
                    }
                    if (writeEndOfLines)
                    {
                        sb.AppendLine();
                    }
                }
            }
            XmlWriter.WriteRaw(sb.ToString());
        }
    }

    //--------------------------------------------------------------------------------------------------

    internal class LiteralInlineRenderer : MarkdownObjectRenderer<MamlRenderer, LiteralInline>
    {
        protected override void Write(MamlRenderer renderer, LiteralInline obj)
        {
            renderer.XmlWriter.WriteString(obj.Content.ToString());
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    internal class LineBreakInlineRenderer : MarkdownObjectRenderer<MamlRenderer, LineBreakInline>
    {
        protected override void Write(MamlRenderer renderer, LineBreakInline obj)
        {
            renderer.XmlWriter.WriteElementString("lineBreak", "");
        }
    }
            
    //--------------------------------------------------------------------------------------------------

    internal class LinkInlineRenderer : MarkdownObjectRenderer<MamlRenderer, LinkInline>
    {
        protected override void Write(MamlRenderer renderer, LinkInline obj)
        {
            if (obj.IsImage)
            {
                renderer.XmlWriter.WriteStartElement("mediaLink");

                renderer.XmlWriter.WriteStartElement("caption");
                renderer.WriteChildren(obj);
                renderer.XmlWriter.WriteEndElement();

                renderer.XmlWriter.WriteStartElement("image");
                renderer.XmlWriter.WriteAttributeString("xlink", "href", null, Path.GetFileNameWithoutExtension(obj.Url));
                renderer.XmlWriter.WriteEndElement();

                renderer.XmlWriter.WriteEndElement();
            }
            else if (obj.Url.StartsWith("xref:"))
            {
                renderer.XmlWriter.WriteStartElement("link");
                renderer.XmlWriter.WriteAttributeString("xlink", "href", null, Path.GetFileNameWithoutExtension(obj.Url));
                renderer.WriteChildren(obj);
                renderer.XmlWriter.WriteEndElement();
            }
            else if (obj.Url.StartsWith("http"))
            {
                renderer.XmlWriter.WriteStartElement("externalLink");

                renderer.XmlWriter.WriteStartElement("linkText");
                renderer.WriteChildren(obj);
                renderer.XmlWriter.WriteEndElement();

                renderer.XmlWriter.WriteElementString("linkUri", obj.Url);

                renderer.XmlWriter.WriteEndElement();
            }
            else
            {
                renderer.XmlWriter.WriteStartElement("codeEntityReference");
                if(obj.Url.Contains('#'))
                    renderer.XmlWriter.WriteString("M:");
                else
                    renderer.XmlWriter.WriteString("T:");
                renderer.XmlWriter.WriteString(obj.Url.Replace("#", "."));
                renderer.XmlWriter.WriteEndElement();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    internal class EmphasisInlineRenderer : MarkdownObjectRenderer<MamlRenderer, EmphasisInline>
    {
        protected override void Write(MamlRenderer renderer, EmphasisInline obj)
        {
            if(obj.DelimiterCount > 1)
                renderer.XmlWriter.WriteStartElement("legacyBold");
            else
                renderer.XmlWriter.WriteStartElement("legacyItalic");

            renderer.WriteChildren(obj);
            renderer.XmlWriter.WriteEndElement();
        }
    }

    //--------------------------------------------------------------------------------------------------

    internal class CodeInlineRenderer : MarkdownObjectRenderer<MamlRenderer, CodeInline>
    {
        protected override void Write(MamlRenderer renderer, CodeInline obj)
        {
            renderer.XmlWriter.WriteElementString("codeInline", obj.Content.ToString());
        }
    }

    //--------------------------------------------------------------------------------------------------

    internal class YamlFrontMatterRenderer : MarkdownObjectRenderer<MamlRenderer, YamlFrontMatterBlock>
    {
        protected override void Write(MamlRenderer renderer, YamlFrontMatterBlock obj)
        {
            renderer.XmlWriter.WriteStartElement("topic");
            renderer.XmlWriter.WriteAttributeString("revisionNumber", "1");

            foreach (var lineGroup in obj.Lines)
            {
                var line = lineGroup.ToString();
                var sep = line.IndexOf(':');
                if (sep == -1)
                    continue;

                var name = line.Substring(0, sep).ToLower().Trim();
                var value = line.Substring(sep + 1).Trim();
                switch (name)
                {
                    case "uid":
                        renderer.XmlWriter.WriteAttributeString("id", value);
                        break;
                }
            }

            renderer.XmlWriter.WriteStartElement("developerConceptualDocument", @"http://ddue.schemas.microsoft.com/authoring/2003/5");
            renderer.XmlWriter.WriteAttributeString("xmlns", "xlink", null, "http://www.w3.org/1999/xlink");
        }
    }

    //--------------------------------------------------------------------------------------------------

    internal class ParagraphBlockRenderer : MarkdownObjectRenderer<MamlRenderer, ParagraphBlock>
    {
        protected override void Write(MamlRenderer renderer, ParagraphBlock obj)
        {
            if(renderer.SectionLevel == 0)
            {
                renderer.XmlWriter.WriteStartElement("introduction");
                renderer.SectionLevel = 1;
            }

            bool openParagraph = !(obj.Inline is LinkInline) && !((obj.Inline as ContainerInline)?.FirstChild is LinkInline);

            if(openParagraph)
                renderer.XmlWriter.WriteStartElement("para");

            renderer.WriteLeafInline(obj);

            if(openParagraph)
                renderer.XmlWriter.WriteEndElement();
        }
    }

    //--------------------------------------------------------------------------------------------------

    internal class HeadingRenderer : MarkdownObjectRenderer<MamlRenderer, HeadingBlock>
    {
        protected override void Write(MamlRenderer renderer, HeadingBlock obj)
        {
            while (renderer.SectionLevel >= (obj.Level*2-1))
            {
                renderer.XmlWriter.WriteEndElement();
                renderer.SectionLevel--;
            }

            if (obj.Inline.FirstChild.ToString().ToLower() == "see also")
            {
                renderer.XmlWriter.WriteStartElement("relatedTopics");
                renderer.XmlWriter.WriteAttributeString("address", "see-also");
                renderer.SectionLevel += 1;
            }
            else
            {
                renderer.XmlWriter.WriteStartElement("section");
                renderer.XmlWriter.WriteAttributeString("address", obj.Inline.FirstChild.ToString().ToLower().Replace(" ", "-"));
                renderer.XmlWriter.WriteStartElement("title");
                renderer.WriteLeafInline(obj);
                renderer.XmlWriter.WriteEndElement();

                renderer.XmlWriter.WriteStartElement("content");
                renderer.SectionLevel += 2;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    internal class TableRenderer : MarkdownObjectRenderer<MamlRenderer, Table>
    {
        protected override void Write(MamlRenderer renderer, Table obj)
        {
            renderer.XmlWriter.WriteStartElement("table");
            renderer.WriteChildren(obj);
            renderer.XmlWriter.WriteEndElement();
        }
    }

    //--------------------------------------------------------------------------------------------------

    internal class TableRowRenderer : MarkdownObjectRenderer<MamlRenderer, TableRow>
    {
        protected override void Write(MamlRenderer renderer, TableRow obj)
        {
            if(obj.IsHeader)
                renderer.XmlWriter.WriteStartElement("tableHeader");

            renderer.XmlWriter.WriteStartElement("row");
            renderer.WriteChildren(obj);
            renderer.XmlWriter.WriteEndElement();

            if(obj.IsHeader)
                renderer.XmlWriter.WriteEndElement();
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    internal class TableCellRenderer : MarkdownObjectRenderer<MamlRenderer, TableCell>
    {
        protected override void Write(MamlRenderer renderer, TableCell obj)
        {
            renderer.XmlWriter.WriteStartElement("entry");
            renderer.WriteChildren(obj);
            renderer.XmlWriter.WriteEndElement();
        }
    }
            
    //--------------------------------------------------------------------------------------------------

    internal class ListBlockRenderer : MarkdownObjectRenderer<MamlRenderer, ListBlock>
    {
        protected override void Write(MamlRenderer renderer, ListBlock obj)
        {
            renderer.XmlWriter.WriteStartElement("list");
            if(obj.IsOrdered)
                renderer.XmlWriter.WriteAttributeString("class", "ordered");
            else
                renderer.XmlWriter.WriteAttributeString("class", "bullet");
            renderer.WriteChildren(obj);
            renderer.XmlWriter.WriteEndElement();
        }
    }
            
    //--------------------------------------------------------------------------------------------------

    internal class ListItemBlockRenderer : MarkdownObjectRenderer<MamlRenderer, ListItemBlock>
    {
        protected override void Write(MamlRenderer renderer, ListItemBlock obj)
        {
            renderer.XmlWriter.WriteStartElement("listItem");
            renderer.WriteChildren(obj);
            renderer.XmlWriter.WriteEndElement();
        }
    }
            
    //--------------------------------------------------------------------------------------------------

    internal class QuoteBlockRenderer : MarkdownObjectRenderer<MamlRenderer, QuoteBlock>
    {
        protected override void Write(MamlRenderer renderer, QuoteBlock obj)
        {
            bool closeElement = false;
            if (obj[0] is ParagraphBlock pblock)
            {
                if (pblock.Inline.FirstChild is AlertInline alert)
                {
                    renderer.XmlWriter.WriteStartElement("alert");
                    renderer.XmlWriter.WriteAttributeString("class", alert.AlertClass);
                    closeElement = true;
                }
            }
            renderer.WriteChildren(obj);
            if(closeElement)
                renderer.XmlWriter.WriteEndElement();
        }
    }
            
    //--------------------------------------------------------------------------------------------------

    internal class FencedCodeBlockRenderer : MarkdownObjectRenderer<MamlRenderer, FencedCodeBlock>
    {
        protected override void Write(MamlRenderer renderer, FencedCodeBlock obj)
        {
            renderer.XmlWriter.WriteStartElement("code");
            renderer.WriteLeafRawLines(obj, true);
            renderer.XmlWriter.WriteEndElement();
        }
    }
          
    //--------------------------------------------------------------------------------------------------

    internal class DefinitionListRenderer : MarkdownObjectRenderer<MamlRenderer, DefinitionList>
    {
        protected override void Write(MamlRenderer renderer, DefinitionList obj)
        {
            //renderer.XmlWriter.WriteStartElement("definitionTable");
            renderer.XmlWriter.WriteStartElement("table");
            renderer.WriteChildren(obj);
            renderer.XmlWriter.WriteEndElement();
        }
    }
                
    //--------------------------------------------------------------------------------------------------

    internal class DefinitionItemRenderer : MarkdownObjectRenderer<MamlRenderer, DefinitionItem>
    {
        protected override void Write(MamlRenderer renderer, DefinitionItem obj)
        {
            if (obj.Count == 0)
                return;

            renderer.XmlWriter.WriteStartElement("row");

            if ( obj[0] is DefinitionTerm term)
            {
                renderer.XmlWriter.WriteStartElement("entry");
                renderer.XmlWriter.WriteStartElement("para");
                renderer.XmlWriter.WriteStartElement("ui");
                renderer.WriteLeafInline(term);
                renderer.XmlWriter.WriteEndElement();
                renderer.XmlWriter.WriteEndElement();
                renderer.XmlWriter.WriteEndElement();
            }

            renderer.XmlWriter.WriteStartElement("entry");
            renderer.XmlWriter.WriteStartElement("para");
            renderer.WriteChildren(obj);
            renderer.XmlWriter.WriteEndElement();
            renderer.XmlWriter.WriteEndElement();

            renderer.XmlWriter.WriteEndElement();
        }
    }

    //--------------------------------------------------------------------------------------------------

    internal class CodeSnippetRenderer : MarkdownObjectRenderer<MamlRenderer, CodeSnippetBlock>
    {
        protected override void Write(MamlRenderer renderer, CodeSnippetBlock obj)
        {
            renderer.XmlWriter.WriteStartElement("code");
            if (Path.GetExtension(obj.FileName) == ".txt")
            {
                renderer.XmlWriter.WriteAttributeString("language", "none");
            }

            renderer.XmlWriter.WriteAttributeString("source", Path.Combine(renderer.RelativeDirectory, obj.FileName));
            renderer.XmlWriter.WriteEndElement();
        }
    }
    //--------------------------------------------------------------------------------------------------

}