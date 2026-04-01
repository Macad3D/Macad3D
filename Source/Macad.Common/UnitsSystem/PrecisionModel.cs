using System;
using System.Collections.Generic;
using System.Text;

namespace Macad.Common;

public abstract class PrecisionModel : IPrecisionModel
{
    public int Precision { get; }

    protected PrecisionModel(int precision)
    {
        Precision = precision;
    }

    public abstract double Round(double value);
    public abstract string Format(double value);
    public abstract double Parse(string text);
}

