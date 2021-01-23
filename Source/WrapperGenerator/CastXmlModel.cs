using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Xml.Serialization;

namespace Macad.Occt.Generator.CastXml
{
    public partial class CastXML
    {
        public List<Record> Classes = new();
        public List<Method> Constructors = new();
        public List<Method> Destructors = new();
        public List<ItemsEnumeration> Enumerations = new();
        public List<ItemsFile> Files = new();
        public List<Method> Methods = new();
        public List<Record> Structs = new();
        public List<ItemsTypedef> Typedefs = new();

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
                        Files.Add((ItemsFile) Items1[i]);
                        break;
                    case Items1ChoiceType.FundamentalType:
                        _IdLookup.Add(((ItemsFundamentalType)Items1[i]).id, i);
                        break;
                    case Items1ChoiceType.Method:
                        var method = (Method) Items1[i];
                        _IdLookup.Add(method.id, i);
                        Methods.Add(method);
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
}