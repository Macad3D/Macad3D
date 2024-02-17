using System.Collections.Generic;
using System.Linq;

namespace Macad.Occt.Generator;

public enum MethodType
{
    Function = 0,
    Operator = 1,
    Constructor = 2,
    Destructor = 3,
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------


public class MethodDecl : ElementDecl
{
    public TypeDecl Type;
    public bool IsStatic;
    public MethodType MethodType;
    public bool IsConstructor => MethodType == MethodType.Constructor;
    public bool IsDestructor => MethodType == MethodType.Destructor;
    public bool IsOperator => MethodType == MethodType.Operator;
    public bool IsAbstract;
    public bool IsPublic = true;
    public bool IsTemplate => Name.Contains("<");
    public bool IsVirtual;
    public bool IsOverride;
    public string TemplateName;
    public string MangledName;
    public string ExplicitImplements;
    public ClassDecl Class;
    public List<ParameterDecl> Parameters = new();

    //--------------------------------------------------------------------------------------------------

    public delegate void GenerateEventHandler(MethodDecl method, SourceWriter writer);

    public GenerateEventHandler BodyGenerate;

    //--------------------------------------------------------------------------------------------------

    public string FullName
    {
        get { return $"{Class.Name}::{Name}"; }
    }

    //--------------------------------------------------------------------------------------------------

    public int DefaultParameterCount
    {
        get { return Parameters.Count(p => p.HasDefault); }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsEqual(MethodDecl other, int maxParameters = 255)
    {
        if (maxParameters == 255)
            maxParameters = other.Parameters.Count;

        if (Name.Equals(other.Name) 
            && MethodType == other.MethodType
            && IsStatic == other.IsStatic
            && Parameters.Count == maxParameters)
        {
            for (int h = 0; h < Parameters.Count; h++)
            {
                if (h >= maxParameters)
                    break;

                if (!Parameters[h].IsEqual(other.Parameters[h], true))
                {
                    return false;
                }
            }
            return true;
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public MethodDecl()
    {
    }

    //--------------------------------------------------------------------------------------------------

    public MethodDecl(MethodDecl other)
    {
        Name = other.Name;
        NativeName = other.NativeName;
        Type = new(other.Type);
        IsStatic = other.IsStatic;
        MethodType = other.MethodType;
        IsAbstract = other.IsAbstract;
        IsPublic = other.IsPublic;
        IsOverride = other.IsOverride;
        TemplateName = other.TemplateName;
        Class = other.Class;

        foreach (var parameter in other.Parameters)
        {
            Parameters.Add(new ParameterDecl(parameter));
        }
    }

}