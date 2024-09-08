using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Xml.Serialization;

namespace Macad.Occt.Generator.CastXml;

public partial class CastXML
{
    [XmlIgnore]
    public List<Record> Classes = new();
    [XmlIgnore]
    public List<Method> Constructors = new();
    [XmlIgnore]
    public List<Method> Destructors = new();
    [XmlIgnore]
    public List<Method> Operators = new();
    [XmlIgnore]
    public List<ItemsEnumeration> Enumerations = new();
    [XmlIgnore]
    public Dictionary<string,string> Files = new();
    [XmlIgnore]
    public List<Method> Methods = new();
    [XmlIgnore]
    public List<ItemsField> Fields = new();
    [XmlIgnore]
    public List<Record> Structs = new();
    [XmlIgnore]
    public List<ItemsTypedef> Typedefs = new();
    [XmlIgnore]
    public Dictionary<string,ItemsComment> Comments = new();

    [XmlIgnore]
    Dictionary<string, int> _IdLookup = new();

    //--------------------------------------------------------------------------------------------------

    public static CastXML Load(string cacheFilePath)
    {
        using var fileStream = new FileStream(cacheFilePath, FileMode.Open);
        var serializer = new XmlSerializer(typeof(CastXML));
        var instance = (CastXML) serializer.Deserialize(fileStream);
        instance?._FillLists();
        return instance;
    }

    //--------------------------------------------------------------------------------------------------

    void _FillLists()
    {
        Debug.Assert(Items1.Length == Items1ElementName.Length);
        for (int i = 0; i < Items1.Length; i++)
        {
            switch (Items1ElementName[i])
            {
                case Items1ChoiceType.Class:
                    var @class = (Record) Items1[i];
                    _IdLookup.Add(@class.id, i);
                    Classes.Add(@class);
                    break;
                case Items1ChoiceType.Constructor:
                    var constructor = (Method) Items1[i];
                    _IdLookup.Add(constructor.id, i);
                    Constructors.Add(constructor);
                    break;
                case Items1ChoiceType.CvQualifiedType:
                    _IdLookup.Add(((ItemsCvQualifiedType)Items1[i]).id, i);
                    break;
                case Items1ChoiceType.Destructor:
                    var destructor = (Method) Items1[i];
                    _IdLookup.Add(destructor.id, i);
                    Destructors.Add(destructor);
                    break;
                case Items1ChoiceType.ElaboratedType:
                    _IdLookup.Add(((ItemsElaboratedType)Items1[i]).id, i);
                    break;
                case Items1ChoiceType.Enumeration:
                    var enumeration = (ItemsEnumeration) Items1[i];
                    _IdLookup.Add(enumeration.id, i);
                    Enumerations.Add(enumeration);
                    break;
                case Items1ChoiceType.File:
                    var file = (ItemsFile)Items1[i];
                    Files.Add(file.id, file.name.Replace('/', '\\'));
                    break;
                case Items1ChoiceType.FundamentalType:
                    _IdLookup.Add(((ItemsFundamentalType)Items1[i]).id, i);
                    break;
                case Items1ChoiceType.Method:
                    var method = (Method) Items1[i];
                    _IdLookup.Add(method.id, i);
                    Methods.Add(method);
                    break;
                case Items1ChoiceType.OperatorMethod:
                    var opmethod = (Method)Items1[i];
                    _IdLookup.Add(opmethod.id, i);
                    Operators.Add(opmethod);
                    break;
                case Items1ChoiceType.Field:
                    var field = (ItemsField)Items1[i];
                    _IdLookup.Add(field.id, i);
                    Fields.Add(field);
                    break;
                case Items1ChoiceType.PointerType:
                    _IdLookup.Add(((ItemsPointerType)Items1[i]).id, i);
                    break;
                case Items1ChoiceType.ReferenceType:
                    _IdLookup.Add(((ItemsReferenceType)Items1[i]).id, i);
                    break;
                case Items1ChoiceType.Struct:
                    var @struct = (Record) Items1[i];
                    _IdLookup.Add(@struct.id, i);
                    Structs.Add(@struct);
                    break;
                case Items1ChoiceType.Typedef:
                    var typedef = (ItemsTypedef) Items1[i];
                    _IdLookup.Add(typedef.id, i);
                    Typedefs.Add(typedef);
                    break;
                case Items1ChoiceType.Comment:
                    var comment = (ItemsComment) Items1[i];
                    Comments.Add(comment.id, comment);
                    break;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public (object obj, Items1ChoiceType type) FindById(string id)
    {
        if (_IdLookup.TryGetValue(id, out int index))
        {
            return (Items1[index], Items1ElementName[index]);
        }

        return (null, Items1ChoiceType.Unimplemented);
    }
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

public partial class Record
{
    public bool IsPublic => access == access.@public;
    public bool IsIncomplete => incompleteSpecified && incomplete == 1;
    public bool IsAbstract => abstractSpecified && @abstract == 1;
}

//--------------------------------------------------------------------------------------------------

public partial class Method
{
    public bool IsPublic => accessSpecified && access == access.@public;
    public bool IsStatic => staticSpecified && @static == 1;
    public bool IsPureVirtual => pure_virtualSpecified && pure_virtual == 1;
}

//--------------------------------------------------------------------------------------------------

public partial class ItemsField
{
    public bool IsPublic => accessSpecified && access == access.@public;
}