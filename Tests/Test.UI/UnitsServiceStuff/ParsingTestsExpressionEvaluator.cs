using Macad.Common;
using NUnit.Framework;
using System;
using System.Collections.Generic;

namespace Macad.Test.Unit.Units;

[TestFixture]
public class ExpressionEvaluatorTests
{
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Evaluate_Precedence()
    {
        var tokens = new List<Token>
        {
            new Token(TokenType.Number, "1"),
            new Token(TokenType.Operator, "+"),
            new Token(TokenType.Number, "2"),
            new Token(TokenType.Operator, "*"),
            new Token(TokenType.Number, "3")
        };

        var result = ExpressionEvaluator.EvaluateKernelTokens(tokens);
        Assert.That(result, Is.EqualTo(7.0).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Evaluate_Parentheses()
    {
        var tokens = new List<Token>
        {
            new Token(TokenType.ParenOpen, "("),
            new Token(TokenType.Number, "1"),
            new Token(TokenType.Operator, "+"),
            new Token(TokenType.Number, "2"),
            new Token(TokenType.ParenClose, ")"),
            new Token(TokenType.Operator, "*"),
            new Token(TokenType.Number, "3")
        };

        var result = ExpressionEvaluator.EvaluateKernelTokens(tokens);
        Assert.That(result, Is.EqualTo(9.0).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Evaluate_UnaryMinus()
    {
        var tokens = new List<Token>
        {
            new Token(TokenType.Operator, "-"),
            new Token(TokenType.Number, "5"),
            new Token(TokenType.Operator, "+"),
            new Token(TokenType.Number, "2")
        };

        var result = ExpressionEvaluator.EvaluateKernelTokens(tokens);
        Assert.That(result, Is.EqualTo(-3.0).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Evaluate_DivisionByZero_Throws()
    {
        var tokens = new List<Token>
        {
            new Token(TokenType.Number, "1"),
            new Token(TokenType.Operator, "/"),
            new Token(TokenType.Number, "0")
        };

        Assert.Throws<DivideByZeroException>(() => ExpressionEvaluator.EvaluateKernelTokens(tokens));
    }

    //--------------------------------------------------------------------------------------------------
}
