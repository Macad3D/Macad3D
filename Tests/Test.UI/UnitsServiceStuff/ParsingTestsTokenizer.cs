using Macad.Common;
using NUnit.Framework;
using System.Linq;

namespace Macad.Test.Unit.Units;

[TestFixture]
public class TokenizerTests
{
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Tokenize_MixedFraction()
    {
        var tokens = Tokenizer.Tokenize("4 3/16\"");
        Assert.That(tokens.Select(t => t.Text),
                    Is.EquivalentTo(new[] { "4", "3/16", "\"" }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Tokenize_Units()
    {
        var tokens = Tokenizer.Tokenize("1cm + 2mm");
        Assert.That(tokens.Select(t => t.Text),
                    Is.EquivalentTo(new[] { "1", "cm", "+", "2", "mm" }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Tokenize_Parentheses()
    {
        var tokens = Tokenizer.Tokenize("-(1+2)");
        Assert.That(tokens.Select(t => t.Text),
                    Is.EquivalentTo(new[] { "-", "(", "1", "+", "2", ")" }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Tokenize_ScientificNotation()
    {
        var tokens = Tokenizer.Tokenize("1.23e-4");
        Assert.That(tokens.Select(t => t.Text),
                    Is.EquivalentTo(new[] { "1.23e-4" }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Tokenize_ArchitecturalFeetInches()
    {
        var tokens = Tokenizer.Tokenize("1'-6\"");
        Assert.That(tokens.Select(t => t.Text),
                    Is.EquivalentTo(new[] { "1", "'", "-", "6", "\"" }));
    }

    //--------------------------------------------------------------------------------------------------
}
