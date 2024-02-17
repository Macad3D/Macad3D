using System.Linq;

namespace Macad.Common.Evaluator;

public delegate object FunctionDelegate(object[] parameters);

public abstract class Function
{

    /// <summary>
    /// define the arguments of the dynamic function
    /// </summary>
    public Variables Arguments { get; protected set; } 

    /// <summary>
    /// name of the function
    /// </summary>
    public string Name { get; protected set; }

    /// <summary>
    /// minimum number of allowed parameters (default = 0)
    /// </summary>
    public int MaxParameters { get; protected set; }

    /// <summary>
    /// maximum number of allowed parameters (default = 0)
    /// </summary>
    public int MinParameters { get; protected set; }

    public abstract object Eval(object[] parameters, ParseTreeEvaluator tree);

}

public class DynamicFunction : Function
{
    /// <summary>
    /// points to the RHS of the assignment of this function
    /// this branch will be evaluated each time this function is executed
    /// </summary>
    private ParseNode Node;

    /// <summary>
    /// the list of parameters must correspond the the required set of Arguments
    /// </summary>
    /// <param name="parameters"></param>
    /// <returns></returns>
    public override object Eval(object[] parameters, ParseTreeEvaluator tree)
    {

        // create a new scope for the arguments
        Variables pars = Arguments.Clone();
        // now push a copy of the function arguments on the stack
        tree.Context.PushScope(pars);

        // assign the parameters to the current function scope variables            
        int i = 0;
        string[] keys = pars.Keys.ToArray();

        foreach (string key in keys)
            pars[key] = parameters[i++];
            
        // execute the function here
            
        object result = Node.Eval(tree, null);

        // clean up the stack
        tree.Context.PopScope();

        return result;
    }

    public DynamicFunction(string name, ParseNode node, Variables args, int minParameters = 0, int maxParameters = 0)
    {
        Node = node;
        Arguments = args;
        MinParameters = minParameters;
        MaxParameters = maxParameters;
    }
}

public class StaticFunction : Function
{
    /// <summary>
    /// the actual function implementation
    /// </summary>
    public FunctionDelegate FunctionDelegate { get; private set; }

    public override object Eval(object[] parameters, ParseTreeEvaluator tree)
    {
        tree.Context.PushScope(null);
        object result = FunctionDelegate(parameters);
        tree.Context.PopScope();
        return result;
    }

    public StaticFunction(string name, FunctionDelegate function, int minParameters = 0, int maxParameters = 0)
    {
        Name = name;
        FunctionDelegate = function;
        MinParameters = minParameters;
        MaxParameters = maxParameters;
        Arguments = new Variables();            
    }
}
    
// <summary>
// this class demonstrates how to access application specific features
// e.g. access to the console through the Context object
// </summary>
//public class ClearFunction : Function
//{
//    public ClearFunction()
//    {
//        Name = "Clear";
//        MinParameters = 0;
//        MaxParameters = 0;
//    }

//    public override object Eval(object[] parameters, ParseTreeEvaluator tree)
//    {
//        CommandPrompt console = tree.Context.Console;
//        if (console != null)
//            console.Text = "";
//        return null;
//    }
//}