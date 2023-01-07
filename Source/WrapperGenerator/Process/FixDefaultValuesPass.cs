namespace Macad.Occt.Generator;

public class FixDefaultValuesPass : Pass
{
    protected override bool ProcessParameter(ParameterDecl pd)
    {
        if (pd.HasDefault && pd.Default.EndsWith("(0)"))
        {
            var oldDefault = pd.Default;
            switch (pd.Type.Name)
            {
                case "float": 
                    pd.Default = "0.0f";
                    break;
                case "double":
                    pd.Default = "0.0";
                    break;
                case "int":
                case "unsigned int":
                case "char":
                case "unsigned char":
                    pd.Default = "0";
                    break;
                default:
                    Logger.WriteLine(true, $"Do not know how to fix default value {oldDefault}.");
                    break;
            }
        }

        return true;
    }
}