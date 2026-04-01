using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Macad.Common;

public enum TokenType
{
    Number,
    Fraction,
    Unit,
    ArchitecturalSeparator,
    Operator,
    ParenOpen,
    ParenClose
}

public record Token(TokenType Type, string Text);

public static class Tokenizer
{
    public static List<Token> Tokenize(string text)
    {
        var tokens = new List<Token>();
        int i = 0;

        while (i < text.Length)
        {
            char c = text[i];

            if (char.IsWhiteSpace(c))
            {
                i++;
                continue;
            }

            if (TryMatchArchitectural(text, ref i, tokens))
                continue;

            if (TryMatchFraction(text, ref i, tokens))
                continue;

            if (TryMatchNumber(text, ref i, tokens))
                continue;

            if (TryMatchUnit(text, ref i, tokens))
                continue;

            if (c == '(')
            {
                tokens.Add(new Token(TokenType.ParenOpen, "("));
                i++;
                continue;
            }
            if (c == ')')
            {
                tokens.Add(new Token(TokenType.ParenClose, ")"));
                i++;
                continue;
            }

            if (TryMatchOperator(text, ref i, tokens))
                continue;

            throw new FormatException($"Unexpected character '{c}' at position {i}.");
        }

        return tokens;
    }

    //--------------------------------------------------------------------------------------------------

    static bool TryMatchArchitectural(string text, ref int i, List<Token> tokens)
    {
        int start = i;

        // Try to match the feet number
        int numberStart = i;
        if (!TryMatchNumber(text, ref i, tokens))
        {
            i = start;
            return false;
        }

        // Must have a foot symbol
        if (i >= text.Length || text[i] != '\'')
        {
            // Not architectural → rollback number token
            tokens.RemoveAt(tokens.Count - 1);
            i = start;
            return false;
        }

        tokens.Add(new Token(TokenType.Unit, "'"));
        i++;

        // Optional architectural separator '-'
        if (i < text.Length && text[i] == '-')
        {
            tokens.Add(new Token(TokenType.ArchitecturalSeparator, "-"));
            i++;

            // Allow whitespace before inches
            while (i < text.Length && char.IsWhiteSpace(text[i]))
                i++;

            // Try whole inches
            bool hasWhole = TryMatchNumber(text, ref i, tokens);

            // Allow whitespace before fraction
            while (i < text.Length && char.IsWhiteSpace(text[i]))
                i++;

            // Try fraction (may be the only inches component)
            bool hasFraction = TryMatchFraction(text, ref i, tokens);

            // If neither matched, it's invalid
            if (!hasWhole && !hasFraction)
                throw new FormatException("Expected inches or fraction after architectural '-'.");

            // Must end with a double-quote
            if (i < text.Length && text[i] == '"')
            {
                tokens.Add(new Token(TokenType.Unit, "\""));
                i++;
                return true;
            }

            throw new FormatException("Architectural inches must end with a double-quote (\").");
        }

        // Feet-only form (e.g., 3')
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    static bool TryMatchFraction(string text, ref int i, List<Token> tokens)
    {
        int start = i;

        if (!char.IsDigit(text[i]))
            return false;

        int j = i;
        while (j < text.Length && char.IsDigit(text[j])) j++;

        if (j < text.Length && text[j] == '/')
        {
            j++;
            int denomStart = j;

            while (j < text.Length && char.IsDigit(text[j])) j++;

            if (j > denomStart)
            {
                if (j < text.Length && text[j] == '.') 
                { 
                    i = start; 
                    return false; 
                }

                string frac = text.Substring(i, j - i);
                tokens.Add(new Token(TokenType.Fraction, frac));
                i = j;
                return true;
            }
        }

        return false;
    }

    //--------------------------------------------------------------------------------------------------

    static bool TryMatchNumber(string text, ref int i, List<Token> tokens)
    {
        int start = i;
        int len = text.Length;

        // Integer or decimal part
        bool hasDigits = false;

        while (i < len && char.IsDigit(text[i]))
        {
            hasDigits = true;
            i++;
        }

        // Decimal point + fractional digits
        if (i < len && text[i] == '.')
        {
            i++;
            while (i < len && char.IsDigit(text[i]))
            {
                hasDigits = true;
                i++;
            }
        }

        if (!hasDigits)
        {
            i = start;
            return false;
        }

        // Exponent part: e[+/-]digits
        if (i < len && (text[i] == 'e' || text[i] == 'E'))
        {
            int expStart = i;
            i++;

            // Optional sign
            if (i < len && (text[i] == '+' || text[i] == '-'))
                i++;

            int expDigitsStart = i;

            while (i < len && char.IsDigit(text[i]))
                i++;

            // Must have at least one digit after exponent
            if (i == expDigitsStart)
            {
                // Invalid exponent → roll back exponent parsing
                i = expStart;
            }
        }

        string numberText = text.Substring(start, i - start);
        tokens.Add(new Token(TokenType.Number, numberText));
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    static readonly string[] Units =
    {
            "mm", "cm", "m",
            "in", "ft",
            "rad", "°",
            "s", "d",
            "%"
        };

    //--------------------------------------------------------------------------------------------------

    static bool TryMatchUnit(string text, ref int i, List<Token> tokens)
    {
        // Multi-character units first
        foreach (var u in Units)
        {
            if (text.AsSpan(i).StartsWith(u, StringComparison.Ordinal))
            {
                tokens.Add(new Token(TokenType.Unit, u));
                i += u.Length;
                return true;
            }
        }

        // Single-character units
        if (text[i] == '"' || text[i] == '\'')
        {
            tokens.Add(new Token(TokenType.Unit, text[i].ToString()));
            i++;
            return true;
        }

        return false;
    }

    //--------------------------------------------------------------------------------------------------

    static bool TryMatchOperator(string text, ref int i, List<Token> tokens)
    {
        char c = text[i];

        if (c == '+' || c == '*' || c == '/')
        {
            tokens.Add(new Token(TokenType.Operator, c.ToString()));
            i++;
            return true;
        }

        if (c == '-')
        {
            // Architectural hyphen is handled in TryMatchArchitectural
            tokens.Add(new Token(TokenType.Operator, "-"));
            i++;
            return true;
        }

        return false;
    }
}

