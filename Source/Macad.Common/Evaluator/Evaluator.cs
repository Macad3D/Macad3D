using System;

namespace Macad.Common.Evaluator;

public static class Evaluator
{
    public static double? EvaluateExpression(string expression, out string errorDescription)
    {
        try
        {
            var evalExp = new Expression(expression);
            if (evalExp.Errors.Count > 0)
            {
                errorDescription = "The expression cannot be parsed:\n" + evalExp.Errors[0].Message;
                return null;
            }
            
            var value = evalExp.Eval();

            if(evalExp.Errors.Count > 0)
            {
                errorDescription = "The expression cannot be interpreted:\n" + evalExp.Errors[0].Message;
                return null;
            }

            if (!(value is double))
            {
                errorDescription = "The expression does not evaluate to a valid value.";
                return null;
            }

            errorDescription = "Finished.";

            return (double) value;
        }
        catch (Exception e)
        {
            errorDescription = "The expression cannot be evaluated:\n" + e.Message;
            return null;
        }
    }
}