namespace Macad.Occt.Generator;

public class FixDefaultValuesPass : Pass
{
    protected override bool ProcessParameter(ParameterDecl pd)
    {
        if (pd.HasDefault && (pd.Default == "0" || pd.Default.EndsWith("(0)")))
        {
            if (pd.Type.IsPointer || pd.Type.IsHandle)
            {
                pd.Default = "nullptr";
                return true;
            }

            switch (pd.Type.Name)
            {
                case "bool":
                    pd.Default = "false";
                    break;
                case "float": 
                    pd.Default = "0.0f";
                    break;
                case "double":
                    pd.Default = "0.0";
                    break;
                case "int":
                case "long long int":
                case "unsigned int":
                case "long long unsigned int":
                case "char":
                case "unsigned char":
                    pd.Default = "0";
                    break;
                default:
                    Logger.WriteLine(true, $"Do not know how to fix default value {pd.Default} of type {pd.Type.Name}.");
                    break;
            }
        }

        return true;
    }
}