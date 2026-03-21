using System;
using System.Collections.Generic;
using System.Globalization;

namespace Macad.Common;

public static class ExpressionEvaluator
{
    public static double EvaluateKernelTokens(List<Token> tokens)
    {
        if (tokens == null || tokens.Count == 0)
            throw new FormatException("Empty expression.");

        var normalized = NormalizeUnaryMinus(tokens);
        var rpn = ToRpn(normalized);

        return EvaluateRpn(rpn);
    }

    //--------------------------------------------------------------------------------------------------

    static List<Token> NormalizeUnaryMinus(List<Token> tokens)
    {
        var result = new List<Token>();
        Token prev = null;

        for (int i = 0; i < tokens.Count; i++)
        {
            var t = tokens[i];

            if (t.Type == TokenType.Operator && t.Text == "-")
            {
                bool isUnary =
                    prev == null ||
                    prev.Type == TokenType.Operator ||
                    prev.Type == TokenType.ParenOpen;

                if (isUnary)
                {
                    result.Add(new Token(TokenType.Number, "0"));
                }
            }

            result.Add(t);
            prev = t;
        }

        return result;
    }

    //--------------------------------------------------------------------------------------------------

    static List<Token> ToRpn(List<Token> tokens)
    {
        var output = new List<Token>();
        var ops = new Stack<Token>();

        foreach (var t in tokens)
        {
            switch (t.Type)
            {
                case TokenType.Number:
                    output.Add(t);
                    break;

                case TokenType.Operator:
                    while (ops.Count > 0 &&
                           ops.Peek().Type == TokenType.Operator &&
                           Precedence(ops.Peek().Text) >= Precedence(t.Text))
                    {
                        output.Add(ops.Pop());
                    }
                    ops.Push(t);
                    break;

                case TokenType.ParenOpen:
                    ops.Push(t);
                    break;

                case TokenType.ParenClose:
                    while (ops.Count > 0 && ops.Peek().Type != TokenType.ParenOpen)
                    {
                        output.Add(ops.Pop());
                    }
                    if (ops.Count == 0 || ops.Peek().Type != TokenType.ParenOpen)
                        throw new FormatException("Mismatched parentheses.");
                    ops.Pop(); // discard '('
                    break;

                default:
                    throw new FormatException($"Unexpected token '{t.Text}' in expression.");
            }
        }

        while (ops.Count > 0)
        {
            var op = ops.Pop();
            if (op.Type == TokenType.ParenOpen || op.Type == TokenType.ParenClose)
                throw new FormatException("Mismatched parentheses.");
            output.Add(op);
        }

        return output;
    }

    //--------------------------------------------------------------------------------------------------

    static int Precedence(string op)
    {
        return op switch
        {
            "+" => 1,
            "-" => 1,
            "*" => 2,
            "/" => 2,
            _ => throw new FormatException($"Unknown operator '{op}'.")
        };
    }

    //--------------------------------------------------------------------------------------------------

    static double EvaluateRpn(List<Token> rpn)
    {
        var stack = new Stack<double>();

        foreach (var t in rpn)
        {
            if (t.Type == TokenType.Number)
            {
                double v = double.Parse(t.Text, CultureInfo.InvariantCulture);
                stack.Push(v);
            }
            else if (t.Type == TokenType.Operator)
            {
                if (stack.Count < 2)
                    throw new FormatException("Insufficient values for operator.");

                double b = stack.Pop();
                double a = stack.Pop();

                double r = t.Text switch
                {
                    "+" => a + b,
                    "-" => a - b,
                    "*" => a * b,
                    "/" => b == 0.0
                        ? throw new DivideByZeroException("Division by zero.")
                        : a / b,
                    _ => throw new FormatException($"Unknown operator '{t.Text}'.")
                };

                stack.Push(r);
            }
            else
            {
                throw new FormatException($"Unexpected token '{t.Text}' in RPN evaluation.");
            }
        }

        if (stack.Count != 1)
            throw new FormatException("Invalid expression.");

        return stack.Pop();
    }
}
