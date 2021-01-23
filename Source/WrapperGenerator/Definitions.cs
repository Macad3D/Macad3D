using System;
using System.Collections.Generic;
using System.Linq;

namespace Macad.Occt.Generator
{
    public static class Definitions
    {
        public static List<EnumDefinition> EnumItems = new List<EnumDefinition>();
        public static List<ClassDefinition> ClassItems = new List<ClassDefinition>();
        public static List<string> IncludeList = new List<string>();
        public static Dictionary<string, TypeDefinition> TypeDefinitions = new();

        //--------------------------------------------------------------------------------------------------

        public enum KnownTypes
        {
            None,
            Void,
            VoidPtr,
            Boolean,
            Integer,
            Double,
            Character,
            Standard_ExtCharacter,
            Standard_CString,
            Standard_ExtString,
            WrappedClass,
            Enum,
            WrappedStruct
        }

        //--------------------------------------------------------------------------------------------------

        public class KnownTypeDefinition
        {
            public KnownTypes Type;
            public string Fqn;
            public string NativeFqn;
            public bool IsValueType;

            public KnownTypeDefinition(string native, string fqn, bool isValueType, KnownTypes type = KnownTypes.None)
            {
                Fqn = fqn;
                NativeFqn = native;
                IsValueType = isValueType;
                Type = type;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public class ClassDefinition
        {
            public string Name;
            public string BaseClassName;
            public string Package;

            public bool IsStruct;
            public bool IsBase;
            public bool IsAbstract;
            public bool IsTransient;

            public ClassDefinition BaseClass;
            public ClassDefinition OuterClass;
            public List<ClassDefinition> DerivedClasses = new List<ClassDefinition>();
            public List<FunctionDefintion> Functions = new List<FunctionDefintion>();
            public List<EnumDefinition> InnerEnums = new List<EnumDefinition>();
            public List<ClassDefinition> InnerClasses = new List<ClassDefinition>();

            public bool HasUnaccessibleConstructor
            {
                get
                {
                    return !Functions.Any(fd => fd.IsPublic && fd.IsConstructor);
                }
            }

            public bool HasUnaccessibleDestructor
            {
                get
                {
                    return !Functions.Any(fd => fd.IsPublic && fd.IsDestructor);
                }
            }

            public string Fqn
            {
                get
                {
                    if (OuterClass != null)
                        return OuterClass.Fqn + "::" + Name;
                    else
                        return Configuration.Namespace + "::" + Name;
                }
            }

            public string Native
            {
                get
                {
                    if (OuterClass != null)
                        return OuterClass.Native + "::" + Name;
                    else
                        return "::" + Name;
                }
            }

            public string SuperClassFqn
            {
                get
                {
                    return BaseClass?.Fqn ?? (IsTransient ? "Macad::Occt::Standard_Transient" : $"BaseClass<{Native}>");
                }
            }

            public string NativeHandle
            {
                get { return "Handle(::" + Name + ")"; }
            }

            public bool IsStatic
            {
                get { return !(IsBase || IsAbstract || HasConstructor || BaseClass != null || Functions.Any(fd => !fd.IsStatic)); }
            }

            public bool IsTemplate
            {
                get { return Name.Contains("<"); }
            }

            public bool HasAbstractFunctions
            {
                get { return GetAbstractFunctions().Any(); }
            }

            public bool HasConstructor
            {
                get { return Functions.Any(fd => fd.IsConstructor); }
            }

            public bool HasDestructor
            {
                get { return Functions.Any(fd => fd.IsDestructor); }
            }

            public bool HasDefaultConstructor
            {
                get { return HasConstructor && Functions.Any(fd => fd.IsConstructor && ((fd.Parameters.Count - fd.DefaultParameterCount) == 0)); }
            }

            public string GetHighestBaseClassName()
            {
                string baseClassName = Fqn;
                var cd = this;
                while (cd.BaseClass != null)
                {
                    baseClassName = cd.BaseClass.Fqn;
                    cd = cd.BaseClass;
                }
                return baseClassName;
            }

            public bool HasInnerEnum(string name)
            {
                return InnerEnum(name) != null;
            }

            public EnumDefinition InnerEnum(string name)
            {
                if (name.Contains("::"))
                {
                    if (name.StartsWith(Name + "::"))
                    {
                        name = name.Remove(0, name.LastIndexOf(":", StringComparison.Ordinal));
                    }
                    else
                        return null;
                }
                return InnerEnums.FirstOrDefault(ed => ed.Name.Equals(name));
            }

            private IEnumerable<FunctionDefintion> GetAbstractFunctions()
            {
                var af = Functions.Where(fd => fd.IsAbstract).ToArray();
                if ((BaseClass == null) || af.Any())
                {
                    return af;
                }
                else
                {
                    var ba = BaseClass.GetAbstractFunctions();
                    return ba.Where(bfd => !Functions.Any(fd => fd.IsEqual(bfd))).ToArray();
                }
            }

            public ClassDefinition DeepCopy(string newClassName, string newPackage, Dictionary<string, string> replacementTypes)
            {
                var c = new ClassDefinition
                {
                    Name = newClassName,
                    Package = newPackage,
                    BaseClassName = BaseClassName,
                    IsTransient = IsTransient
                };

                foreach (var function in Functions)
                {
                    c.Functions.Add(function.DeepCopy(c, replacementTypes));
                }

                return c;
            }
        }

        public class EnumDefinition
        {
            public string Name;
            public string Package;
            public ClassDefinition OuterClass;

            public Dictionary<string, string> Enumerators = new Dictionary<string, string>();

            public string Fqn
            {
                get { return (OuterClass == null ? Configuration.Namespace : OuterClass.Fqn) + "::" + Name; }
            }

            public string Native
            {
                get { return (OuterClass == null ? "" : OuterClass.Native) + "::" + Name; }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public class FunctionDefintion
        {
            public string Name;

            public TypeDefinition Type;
            public bool IsStatic;
            public bool IsConstructor;
            public bool IsDestructor;
            public bool IsOperator;
            public bool IsAbstract;
            public bool IsPublic;

            public bool IsTemplate;
            public string TemplateName;

            public int DefaultParameterCount
            {
                get { return Parameters.Count(p => p.HasDefault); }
            }

            public ClassDefinition Class;
            public List<ParameterDefinition> Parameters = new List<ParameterDefinition>();

            public bool IsEqual(FunctionDefintion other, int maxParameters = 255)
            {
                if (maxParameters == 255)
                    maxParameters = other.Parameters.Count;

                if (Name.Equals(other.Name) && (IsStatic == other.IsStatic) && (Parameters.Count == maxParameters))
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

            public bool HasReferenceParameters
            {
                get
                {
                    return Parameters.Any(
                        pd => pd.Type.IsValueType(Class)
                              && (pd.Type.IsReference || pd.Type.IsPointer)
                              && (!pd.Type.IsKnownType || pd.Type.KnownTypeDef.Type != KnownTypes.Void));
                }
            }

            public FunctionDefintion DeepCopy(ClassDefinition cd, Dictionary<string, string> replacementTypes)
            {
                var fd = new FunctionDefintion()
                {
                    Name = Name,
                    Type = Type.DeepCopy(replacementTypes),
                    IsStatic = IsStatic,
                    IsConstructor = IsConstructor,
                    IsDestructor = IsDestructor,
                    IsOperator = IsOperator,
                    IsAbstract = IsAbstract,
                    IsPublic = IsPublic,
                    IsTemplate = IsTemplate,
                    TemplateName = TemplateName,
                    Class = cd
                };

                if (replacementTypes.ContainsKey(Name))
                {
                    fd.Name = replacementTypes[Name];
                    fd.IsTemplate = fd.Name.Contains("<");
                }

                foreach (var parameter in Parameters)
                {
                    fd.Parameters.Add(parameter.DeepCopy(replacementTypes));
                }

                return fd;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public class ParameterDefinition
        {
            public string Name;
            public TypeDefinition Type;

            public bool HasDefault;
            public string Default;

            public string NativeDefault
            {
                get
                {
                    if ((Default.Contains("::") || Default.Contains("("))
                        && !Default.StartsWith("::"))
                        return "::" + Default; //  Seems to be an enum or object initializer, needs to be declared as explicit native type
                    return Default;
                }
            }

            public bool IsEqual(ParameterDefinition other, bool ignoreName)
            {
                return (ignoreName || Name.Equals(other.Name)) && Type.IsEqual(other.Type);
            }

            public ParameterDefinition DeepCopy(Dictionary<string, string> replacementTypes)
            {
                var pd = new ParameterDefinition()
                {
                    Name = Name,
                    Type = Type.DeepCopy(replacementTypes),
                    HasDefault = HasDefault,
                    Default = Default
                };

                if (replacementTypes.ContainsKey(Name))
                {
                    pd.Name = replacementTypes[Name];
                }

                return pd;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public class TypeDefinition
        {
            public string Name;

            public bool IsReference;
            public bool IsPointer;
            public bool IsConst;
            public bool IsConstructor;
            public bool IsDestructor;
            public bool IsUnknown;
            public bool IsHandle;
            public bool IsTemplate;

            public bool IsEqual(TypeDefinition other)
            {
                var myName = Configuration.KnownTypes.Any(kt => kt.NativeFqn == Name) ? Configuration.KnownTypes.First(kt => kt.NativeFqn == Name).Fqn : Name;
                var otherName = Configuration.KnownTypes.Any(kt => kt.NativeFqn == other.Name) ? Configuration.KnownTypes.First(kt => kt.NativeFqn == other.Name).Fqn : other.Name;
                return myName.Equals(otherName);
            }

            public bool IsVoid
            {
                get { return IsKnownType && KnownTypeDef.Type == KnownTypes.Void; }
            }

            public bool IsVoidPointer
            {
                get { return IsKnownType && ((IsPointer && KnownTypeDef.Type == KnownTypes.Void) || (KnownTypeDef.Type == KnownTypes.VoidPtr)); }
            }

            public bool IsBool
            {
                get { return Name.Equals("Standard_Boolean"); }
            }

            public bool IsEnum(ClassDefinition klass)
            {
                if (klass != null)
                {
                    if (klass.HasInnerEnum(Name))
                        return true;
                }
                return EnumItems.Any(ed => ed.Name.Equals(Name));
            }

            public bool IsValueType(ClassDefinition klass)
            {
                return (Configuration.KnownTypes.Any(kt => kt.NativeFqn == Name) && Configuration.KnownTypes.First(ktd => ktd.NativeFqn == Name).IsValueType) || IsEnum(klass);
            }

            public bool IsKnownType
            {
                get { return Configuration.KnownTypes.Any(kt => kt.NativeFqn == Name); }
            }

            public KnownTypeDefinition KnownTypeDef
            {
                get { return Configuration.KnownTypes.First(ktd => ktd.NativeFqn == Name); }
            }

            public string Native(ClassDefinition klass)
            {
                if (IsEnum(klass))
                {
                    if (klass != null)
                    {
                        if (klass.HasInnerEnum(Name))
                            return klass.InnerEnum(Name).Native;
                    }
                    var enumName = EnumItems.First(ed => ed.Name.Equals(Name)).Native;
                    if (!enumName.StartsWith("::"))
                        enumName = "::" + enumName;
                    return enumName;
                }
                return "::" + Name;
            }

            public string NativeHandle
            {
                get { return "Handle(::" + Name + ")"; }
            }

            public string Fqn(ClassDefinition klass)
            {
                if (IsEnum(klass))
                {
                    if (klass != null)
                    {
                        if (klass.HasInnerEnum(Name))
                            return klass.InnerEnum(Name).Fqn;
                    }
                    return EnumItems.First(ed => ed.Name.Equals(Name)).Fqn;
                }
                return IsKnownType ? KnownTypeDef.Fqn : Configuration.Namespace + "::" + Name;
            }

            public string GetInitValue()
            {
                if (Configuration.KnownTypes.Any(kt => kt.NativeFqn == Name))
                {
                    var kt = Configuration.KnownTypes.First(ktd => ktd.NativeFqn == Name);
                    switch (kt.Type)
                    {
                        case KnownTypes.Boolean:
                            return "false";
                        case KnownTypes.Integer:
                            return "0";
                        case KnownTypes.Double:
                            return "0.0";
                    }
                }
                return null;
            }

            public string Package
            {
                get { return Name.Contains("_") ? Name.Substring(0, Name.IndexOf('_')) : ""; }
            }

            public TypeDefinition DeepCopy(Dictionary<string, string> replacementTypes)
            {
                var td = new TypeDefinition()
                {
                    Name = Name,
                    IsReference = IsReference,
                    IsPointer = IsPointer,
                    IsConst = IsConst,
                    IsConstructor = IsConstructor,
                    IsDestructor = IsDestructor,
                    IsUnknown = IsUnknown,
                    IsHandle = IsHandle,
                    IsTemplate = IsTemplate
                };

                if (replacementTypes.ContainsKey(Name))
                {
                    td.Name = replacementTypes[Name];
                    if (td.Name.StartsWith("opencascade::handle<"))
                    {
                        td.Name = td.Name.Substring(20, td.Name.Length - 21).Trim();
                        td.IsHandle = true;
                    }
                    td.IsTemplate = td.Name.Contains("<");
                }

                return td;
            }
        }
    }
}