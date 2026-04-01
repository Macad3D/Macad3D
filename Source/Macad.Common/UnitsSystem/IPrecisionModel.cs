namespace Macad.Common;

public interface IPrecisionModel
{
    double Round(double value);
    string Format(double value);
    double Parse(string text);
}
