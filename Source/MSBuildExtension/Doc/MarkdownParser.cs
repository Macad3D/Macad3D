using Markdig.Helpers;
using Markdig.Parsers;
using Markdig.Syntax;
using Markdig.Syntax.Inlines;

namespace Macad.Build
{
    internal class AlertInline : ContainerInline
    {
        public string AlertClass { get; set; }
    }

    //--------------------------------------------------------------------------------------------------

    internal class AlertInlineParser : InlineParser
    {
        public AlertInlineParser()
        {
            OpeningCharacters = new[] {'['};
        }

        public override bool Match(InlineProcessor processor, ref StringSlice slice)
        {
            var startPosition = processor.GetSourcePosition(slice.Start, out int line, out int column);
            var saved = slice;

            if (LinkHelper.TryParseLabel(ref slice, out string label, out SourceSpan labelSpan))
            {
                string alertClass;
                switch (label.ToLower())
                {
                    case "!note":
                        alertClass = "note";
                        break;
                    case "!warning":
                        alertClass = "warning";
                        break;
                    case "!tip":
                        alertClass = "tip";
                        break;
                    case "!important":
                        alertClass = "important";
                        break;
                    case "!caution":
                        alertClass = "caution";
                        break;
                    default:
                        slice = saved;
                        return false;
                }

                processor.Inline = new AlertInline()
                {
                    AlertClass = alertClass,
                    Span = new SourceSpan(startPosition, processor.GetSourcePosition(slice.Start - 1)),
                    Line = line,
                    Column = column
                };
                return true;
            }

            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    internal class CodeSnippetBlock : Block
    {
        public string FileName { get; set; }

        public CodeSnippetBlock()
            : base(null)
        {
        }

        public CodeSnippetBlock(BlockParser parser)
            : base(parser)
        {
            IsBreakable = false;
        }
    }

    internal class CodeSnippetBlockParser : BlockParser
    {
        public CodeSnippetBlockParser()
        {
            OpeningCharacters = new[] { '[' };
        }

        public override BlockState TryOpen(BlockProcessor processor)
        {
            if (processor.IsCodeIndent)
                return BlockState.None;

            var line = processor.Line.ToString();
            if (!line.ToLower().StartsWith("[!code"))
                return BlockState.None;

            if (!line.EndsWith(")]"))
                return BlockState.None;

            var linkStart = line.IndexOf("(");
            if (linkStart == -1)
                return BlockState.None;

            var fileName = line.Substring(linkStart + 1, line.Length - linkStart - 3);

            processor.NewBlocks.Push(new CodeSnippetBlock(this) { FileName = fileName });

            return BlockState.BreakDiscard;
        }
    }

}