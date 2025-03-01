// Generated wrapper code for package TCollection

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  TCollection_ExtendedString
//---------------------------------------------------------------------
/// <summary>
/// A variable-length sequence of "extended" (UNICODE) characters (16-bit character type).
/// It provides editing operations with built-in memory management
/// to make ExtendedString objects easier to use than ordinary extended character arrays.
/// ExtendedString objects follow "value semantics", that is, they are the actual strings,
/// not handles to strings, and are copied through assignment.
/// You may use HExtendedString objects to get handles to strings.
/// 
/// Beware that class can transparently store UTF-16 string with surrogate pairs
/// (Unicode symbol represented by two 16-bit code units).
/// However, surrogate pairs are not considered by the following methods:
/// - Method ::Length() return the number of 16-bit code units, not the number of Unicode symbols.
/// - Methods taking/returning symbol index work with 16-bit code units, not true Unicode symbols,
/// including ::Remove(), ::SetValue(), ::Value(), ::Search(), ::Trunc() and others.
/// If application needs to process surrogate pairs, NCollection_Utf16Iter class can be used
/// for iterating through Unicode string (UTF-32 code unit will be returned for each position).
/// </summary>
public ref class TCollection_ExtendedString sealed
    : public Macad::Occt::BaseClass<::TCollection_ExtendedString>
{

#ifdef Include_TCollection_ExtendedString_h
public:
    Include_TCollection_ExtendedString_h
#endif

public:
    TCollection_ExtendedString(::TCollection_ExtendedString* nativeInstance)
        : Macad::Occt::BaseClass<::TCollection_ExtendedString>( nativeInstance, true )
    {}

    TCollection_ExtendedString(::TCollection_ExtendedString& nativeInstance)
        : Macad::Occt::BaseClass<::TCollection_ExtendedString>( &nativeInstance, false )
    {}

    property ::TCollection_ExtendedString* NativeInstance
    {
        ::TCollection_ExtendedString* get()
        {
            return static_cast<::TCollection_ExtendedString*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes a ExtendedString to an empty ExtendedString.
    /// </summary>
    TCollection_ExtendedString();
    /// <summary>
    /// Creation by converting a CString to an extended
    /// string.  If <isMultiByte> is true then the string is
    /// treated as having UTF-8 coding.  If it is not a UTF-8
    /// then <isMultiByte> is ignored and each character is
    /// copied to ExtCharacter.
    /// </summary>
    TCollection_ExtendedString(System::String^ astring, bool isMultiByte);
    /// <summary>
    /// Creation by converting an ExtString to an extended string.
    /// </summary>
    TCollection_ExtendedString(System::String^ astring);
    /* Method skipped due to unknown mapping: void TCollection_ExtendedString(wchar_t theStringUtf, ) */
    /// <summary>
    /// Initializes a AsciiString with a single character.
    /// </summary>
    TCollection_ExtendedString(char aChar);
    /* Method skipped due to unknown mapping: void TCollection_ExtendedString(int length, char16_t filler, ) */
    /// <summary>
    /// Initializes an ExtendedString with an integer value
    /// </summary>
    TCollection_ExtendedString(int value);
    /// <summary>
    /// Initializes an ExtendedString with a real value
    /// </summary>
    TCollection_ExtendedString(double value);
    /// <summary>
    /// Creation by converting an Ascii string to an extended
    /// string. The string is treated as having UTF-8 coding.
    /// If it is not a UTF-8 or multi byte then
    /// each character is copied to ExtCharacter.
    /// </summary>
    TCollection_ExtendedString(Macad::Occt::TCollection_AsciiString^ astring, bool isMultiByte);
    /// <summary>
    /// Creation by converting an Ascii string to an extended
    /// string. The string is treated as having UTF-8 coding.
    /// If it is not a UTF-8 or multi byte then
    /// each character is copied to ExtCharacter.
    /// </summary>
    TCollection_ExtendedString(Macad::Occt::TCollection_AsciiString^ astring);
    /// <summary>
    /// Appends the other extended string to this extended string.
    /// Note that this method is an alias of operator +=.
    /// Example: aString += anotherString
    /// </summary>
    void AssignCat(Macad::Occt::TCollection_ExtendedString^ other);
    /* Method skipped due to unknown mapping: void AssignCat(char16_t theChar, ) */
    /// <summary>
    /// Appends <other> to me.
    /// </summary>
    Macad::Occt::TCollection_ExtendedString^ Cat(Macad::Occt::TCollection_ExtendedString^ other);
    /* Method skipped due to unknown mapping: void ChangeAll(char16_t aChar, char16_t NewChar, ) */
    /// <summary>
    /// Removes all characters contained in <me>.
    /// This produces an empty ExtendedString.
    /// </summary>
    void Clear();
    /// <summary>
    /// Copy <fromwhere> to <me>.
    /// Used as operator =
    /// </summary>
    void Copy(Macad::Occt::TCollection_ExtendedString^ fromwhere);
    /// <summary>
    /// Exchange the data of two strings (without reallocating memory).
    /// </summary>
    void Swap(Macad::Occt::TCollection_ExtendedString^ theOther);
    /* Method skipped due to unknown mapping: void Insert(int where, char16_t what, ) */
    /// <summary>
    /// Insert a ExtendedString at position <where>.
    /// </summary>
    void Insert(int where, Macad::Occt::TCollection_ExtendedString^ what);
    /// <summary>
    /// Returns True if this string contains no characters.
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// Returns true if the characters in this extended
    /// string are identical to the characters in the other extended string.
    /// Note that this method is an alias of operator ==
    /// </summary>
    bool IsEqual(System::String^ other);
    /// <summary>
    /// Returns true if the characters in this extended
    /// string are identical to the characters in the other extended string.
    /// Note that this method is an alias of operator ==
    /// </summary>
    bool IsEqual(Macad::Occt::TCollection_ExtendedString^ other);
    /// <summary>
    /// Returns true if there are differences between the
    /// characters in this extended string and the other extended string.
    /// Note that this method is an alias of operator !=.
    /// </summary>
    bool IsDifferent(System::String^ other);
    /// <summary>
    /// Returns true if there are differences between the
    /// characters in this extended string and the other extended string.
    /// Note that this method is an alias of operator !=.
    /// </summary>
    bool IsDifferent(Macad::Occt::TCollection_ExtendedString^ other);
    /// <summary>
    /// Returns TRUE if <me> is less than <other>.
    /// </summary>
    bool IsLess(System::String^ other);
    /// <summary>
    /// Returns TRUE if <me> is less than <other>.
    /// </summary>
    bool IsLess(Macad::Occt::TCollection_ExtendedString^ other);
    /// <summary>
    /// Returns TRUE if <me> is greater than <other>.
    /// </summary>
    bool IsGreater(System::String^ other);
    /// <summary>
    /// Returns TRUE if <me> is greater than <other>.
    /// </summary>
    bool IsGreater(Macad::Occt::TCollection_ExtendedString^ other);
    /// <summary>
    /// Determines whether the beginning of this string instance matches the specified string.
    /// </summary>
    bool StartsWith(Macad::Occt::TCollection_ExtendedString^ theStartString);
    /// <summary>
    /// Determines whether the end of this string instance matches the specified string.
    /// </summary>
    bool EndsWith(Macad::Occt::TCollection_ExtendedString^ theEndString);
    /// <summary>
    /// Returns True if the ExtendedString contains only
    /// "Ascii Range" characters .
    /// </summary>
    bool IsAscii();
    /// <summary>
    /// Returns the number of 16-bit code units
    /// (might be greater than number of Unicode symbols if string contains surrogate pairs).
    /// </summary>
    int Length();
    /// <summary>
    /// Displays <me> .
    /// </summary>
    void Print(System::IO::TextWriter^ astream);
    /* Method skipped due to unknown mapping: void RemoveAll(char16_t what, ) */
    /// <summary>
    /// Erases <ahowmany> characters from position <where>,<where> included.
    /// </summary>
    void Remove(int where, int ahowmany);
    /// <summary>
    /// Erases <ahowmany> characters from position <where>,<where> included.
    /// </summary>
    void Remove(int where);
    /// <summary>
    /// Searches a ExtendedString in <me> from the beginning
    /// and returns position of first item <what> matching.
    /// it returns -1 if not found.
    /// </summary>
    int Search(Macad::Occt::TCollection_ExtendedString^ what);
    /// <summary>
    /// Searches a ExtendedString in another ExtendedString from the
    /// end and returns position of first item <what> matching.
    /// it returns -1 if not found.
    /// </summary>
    int SearchFromEnd(Macad::Occt::TCollection_ExtendedString^ what);
    /* Method skipped due to unknown mapping: void SetValue(int where, char16_t what, ) */
    /// <summary>
    /// Replaces a part of <me> by another ExtendedString see above.
    /// </summary>
    void SetValue(int where, Macad::Occt::TCollection_ExtendedString^ what);
    /// <summary>
    /// Splits this extended string into two sub-strings at position where.
    /// -   The second sub-string (from position
    /// where + 1 of this string to the end) is
    /// returned in a new extended string.
    /// -   this extended string is modified: its last
    /// characters are removed, it becomes equal to
    /// the first sub-string (from the first character to position where).
    /// Example:
    /// aString contains "abcdefg"
    /// aString.Split(3) gives <me> = "abc" and returns "defg"
    /// </summary>
    Macad::Occt::TCollection_ExtendedString^ Split(int where);
    /// <summary>
    /// Extracts <whichone> token from <me>.
    /// By default, the <separators> is set to space and tabulation.
    /// By default, the token extracted is the first one (whichone = 1).
    /// <separators> contains all separators you need.
    /// If no token indexed by <whichone> is found, it returns an empty AsciiString.
    /// Example:
    /// aString contains "This is a     message"
    /// aString.Token()  returns "This"
    /// aString.Token(" ",4) returns "message"
    /// aString.Token(" ",2) returns "is"
    /// aString.Token(" ",9) returns ""
    /// Other separators than space character and tabulation are allowed :
    /// aString contains "1234; test:message   , value"
    /// aString.Token("; :,",4) returns "value"
    /// aString.Token("; :,",2) returns "test"
    /// </summary>
    Macad::Occt::TCollection_ExtendedString^ Token(System::String^ separators, int whichone);
    /// <summary>
    /// Extracts <whichone> token from <me>.
    /// By default, the <separators> is set to space and tabulation.
    /// By default, the token extracted is the first one (whichone = 1).
    /// <separators> contains all separators you need.
    /// If no token indexed by <whichone> is found, it returns an empty AsciiString.
    /// Example:
    /// aString contains "This is a     message"
    /// aString.Token()  returns "This"
    /// aString.Token(" ",4) returns "message"
    /// aString.Token(" ",2) returns "is"
    /// aString.Token(" ",9) returns ""
    /// Other separators than space character and tabulation are allowed :
    /// aString contains "1234; test:message   , value"
    /// aString.Token("; :,",4) returns "value"
    /// aString.Token("; :,",2) returns "test"
    /// </summary>
    Macad::Occt::TCollection_ExtendedString^ Token(System::String^ separators);
    /// <summary>
    /// Returns pointer to ExtString
    /// </summary>
    System::String^ ToExtString();
    /* Method skipped due to unknown mapping: wchar_t ToWideString() */
    /// <summary>
    /// Truncates <me> to <ahowmany> characters.
    /// Example:  me = "Hello Dolly" -> Trunc(3) -> me = "Hel"
    /// Exceptions
    /// Standard_OutOfRange if ahowmany is greater
    /// than the length of this string.
    /// </summary>
    void Trunc(int ahowmany);
    /* Method skipped due to unknown mapping: char16_t Value(int where, ) */
    /// <summary>
    /// Returns a hashed value for the extended string.
    /// Note: if string is ASCII, the computed value is the same as the value computed with the
    /// HashCode function on a TCollection_AsciiString string composed with equivalent ASCII
    /// characters.
    /// </summary>
    /// <returns>
    /// a computed hash code
    /// </returns>
    long long unsigned int HashCode();
    /// <summary>
    /// Returns true if the characters in this extended
    /// string are identical to the characters in the other extended string.
    /// Note that this method is an alias of operator ==.
    /// </summary>
    static bool IsEqual(Macad::Occt::TCollection_ExtendedString^ theString1, Macad::Occt::TCollection_ExtendedString^ theString2);
    /// <summary>
    /// Converts the internal <mystring> to UTF8 coding and
    /// returns length of the out CString. A memory for the
    /// <theCString> should be allocated before call!
    /// </summary>
    int ToUTF8CString(char% theCString);
    /// <summary>
    /// Returns expected CString length in UTF8 coding.
    /// It can be used for  memory  calculation  before converting
    /// to CString containing symbols in UTF8 coding.
    /// </summary>
    int LengthOfCString();
    int GetHashCode() override;
}; // class TCollection_ExtendedString

//---------------------------------------------------------------------
//  Class  TCollection_AsciiString
//---------------------------------------------------------------------
/// <summary>
/// Class defines a variable-length sequence of 8-bit characters.
/// Despite class name (kept for historical reasons), it is intended to store UTF-8 string, not just
/// ASCII characters. However, multi-byte nature of UTF-8 is not considered by the following
/// methods:
/// - Method ::Length() return the number of bytes, not the number of Unicode symbols.
/// - Methods taking/returning symbol index work with 8-bit code units, not true Unicode symbols,
/// including ::Remove(), ::SetValue(), ::Value(), ::Search(), ::Trunc() and others.
/// If application needs to process multi-byte Unicode symbols explicitly, NCollection_Utf8Iter
/// class can be used for iterating through Unicode string (UTF-32 code unit will be returned for
/// each position).
/// 
/// Class provides editing operations with built-in memory management to make AsciiString objects
/// easier to use than ordinary character arrays. AsciiString objects follow value semantics; in
/// other words, they are the actual strings, not handles to strings, and are copied through
/// assignment. You may use HAsciiString objects to get handles to strings.
/// </summary>
public ref class TCollection_AsciiString sealed
    : public Macad::Occt::BaseClass<::TCollection_AsciiString>
{

#ifdef Include_TCollection_AsciiString_h
public:
    Include_TCollection_AsciiString_h
#endif

public:
    TCollection_AsciiString(::TCollection_AsciiString* nativeInstance)
        : Macad::Occt::BaseClass<::TCollection_AsciiString>( nativeInstance, true )
    {}

    TCollection_AsciiString(::TCollection_AsciiString& nativeInstance)
        : Macad::Occt::BaseClass<::TCollection_AsciiString>( &nativeInstance, false )
    {}

    property ::TCollection_AsciiString* NativeInstance
    {
        ::TCollection_AsciiString* get()
        {
            return static_cast<::TCollection_AsciiString*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes a AsciiString to an empty AsciiString.
    /// </summary>
    TCollection_AsciiString();
    /// <summary>
    /// Initializes a AsciiString with a CString.
    /// </summary>
    TCollection_AsciiString(System::String^ message);
    /// <summary>
    /// Initializes a AsciiString with a CString.
    /// </summary>
    TCollection_AsciiString(System::String^ message, int aLen);
    /// <summary>
    /// Initializes an AsciiString with <length> space allocated.
    /// and filled with <filler>. This is useful for buffers.
    /// </summary>
    TCollection_AsciiString(int length, char filler);
    /// <summary>
    /// Initializes an AsciiString with an integer value
    /// </summary>
    TCollection_AsciiString(int value);
    /// <summary>
    /// Initializes an AsciiString with a real value
    /// </summary>
    TCollection_AsciiString(double value);
    /// <summary>
    /// Initializes a AsciiString with copy of another AsciiString
    /// concatenated with the message character.
    /// </summary>
    TCollection_AsciiString(Macad::Occt::TCollection_AsciiString^ astring, char message);
    /// <summary>
    /// Initializes a AsciiString with copy of another AsciiString
    /// concatenated with the message string.
    /// </summary>
    TCollection_AsciiString(Macad::Occt::TCollection_AsciiString^ astring, Macad::Occt::TCollection_AsciiString^ message);
    /// <summary>
    /// Creation by converting an extended string to an ascii string.
    /// If replaceNonAscii is non-null character, it will be used
    /// in place of any non-ascii character found in the source string.
    /// Otherwise, creates UTF-8 unicode string.
    /// </summary>
    TCollection_AsciiString(Macad::Occt::TCollection_ExtendedString^ astring, char replaceNonAscii);
    /// <summary>
    /// Creation by converting an extended string to an ascii string.
    /// If replaceNonAscii is non-null character, it will be used
    /// in place of any non-ascii character found in the source string.
    /// Otherwise, creates UTF-8 unicode string.
    /// </summary>
    TCollection_AsciiString(Macad::Occt::TCollection_ExtendedString^ astring);
    /* Method skipped due to unknown mapping: void TCollection_AsciiString(wchar_t theStringUtf, ) */
    /// <summary>
    /// Appends <other>  to me. This is an unary operator.
    /// </summary>
    void AssignCat(char other);
    /// <summary>
    /// Appends <other>  to me. This is an unary operator.
    /// </summary>
    void AssignCat(int other);
    /// <summary>
    /// Appends <other>  to me. This is an unary operator.
    /// </summary>
    void AssignCat(double other);
    /// <summary>
    /// Appends <other> to me. This is an unary operator.
    /// Example: aString += anotherString
    /// </summary>
    void AssignCat(Macad::Occt::TCollection_AsciiString^ other);
    /// <summary>
    /// Converts the first character into its corresponding
    /// upper-case character and the other characters into lowercase
    /// Example: before
    /// me = "hellO "
    /// after
    /// me = "Hello "
    /// </summary>
    void Capitalize();
    /// <summary>
    /// Appends <other>  to me.
    /// Syntax:
    /// aString = aString + "Dummy"
    /// Example: aString contains "I say "
    /// aString = aString + "Hello " + "Dolly"
    /// gives "I say Hello Dolly"
    /// To catenate more than one CString, you must put a String before.
    /// So the following example is WRONG !
    /// aString = "Hello " + "Dolly"  THIS IS NOT ALLOWED
    /// This rule is applicable to AssignCat (operator +=) too.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ Cat(char other);
    /// <summary>
    /// Appends <other>  to me.
    /// Syntax:
    /// aString = aString + 15;
    /// Example: aString contains "I say "
    /// gives "I say 15"
    /// To catenate more than one CString, you must put a String before.
    /// So the following example is WRONG !
    /// aString = "Hello " + "Dolly"  THIS IS NOT ALLOWED
    /// This rule is applicable to AssignCat (operator +=) too.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ Cat(int other);
    /// <summary>
    /// Appends <other>  to me.
    /// Syntax:
    /// aString = aString + 15.15;
    /// Example: aString contains "I say "
    /// gives "I say 15.15"
    /// To catenate more than one CString, you must put a String before.
    /// So the following example is WRONG !
    /// aString = "Hello " + "Dolly"  THIS IS NOT ALLOWED
    /// This rule is applicable to AssignCat (operator +=) too.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ Cat(double other);
    /// <summary>
    /// Appends <other> to me.
    /// Example: aString = aString + anotherString
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ Cat(Macad::Occt::TCollection_AsciiString^ other);
    /// <summary>
    /// Modifies this ASCII string so that its length
    /// becomes equal to Width and the new characters
    /// are equal to Filler. New characters are added
    /// both at the beginning and at the end of this string.
    /// If Width is less than the length of this ASCII string, nothing happens.
    /// Example
    /// TCollection_AsciiString
    /// myAlphabet("abcdef");
    /// myAlphabet.Center(9,' ');
    /// assert ( myAlphabet == "
    /// abcdef " );
    /// </summary>
    void Center(int Width, char Filler);
    /// <summary>
    /// Substitutes all the characters equal to aChar by NewChar
    /// in the AsciiString <me>.
    /// The substitution can be case sensitive.
    /// If you don't use default case sensitive, no matter whether aChar
    /// is uppercase or not.
    /// Example: me = "Histake" -> ChangeAll('H','M',Standard_True)
    /// gives me = "Mistake"
    /// </summary>
    void ChangeAll(char aChar, char NewChar, bool CaseSensitive);
    /// <summary>
    /// Substitutes all the characters equal to aChar by NewChar
    /// in the AsciiString <me>.
    /// The substitution can be case sensitive.
    /// If you don't use default case sensitive, no matter whether aChar
    /// is uppercase or not.
    /// Example: me = "Histake" -> ChangeAll('H','M',Standard_True)
    /// gives me = "Mistake"
    /// </summary>
    void ChangeAll(char aChar, char NewChar);
    /// <summary>
    /// Removes all characters contained in <me>.
    /// This produces an empty AsciiString.
    /// </summary>
    void Clear();
    /// <summary>
    /// Copy <fromwhere> to <me>.
    /// Used as operator =
    /// Example: aString = anotherCString;
    /// </summary>
    void Copy(System::String^ fromwhere);
    /// <summary>
    /// Copy <fromwhere> to <me>.
    /// Used as operator =
    /// Example: aString = anotherString;
    /// </summary>
    void Copy(Macad::Occt::TCollection_AsciiString^ fromwhere);
    /// <summary>
    /// Exchange the data of two strings (without reallocating memory).
    /// </summary>
    void Swap(Macad::Occt::TCollection_AsciiString^ theOther);
    /// <summary>
    /// Returns the index of the first character of <me> that is
    /// present in <Set>.
    /// The search begins to the index FromIndex and ends to the
    /// the index ToIndex.
    /// Returns zero if failure.
    /// Raises an exception if FromIndex or ToIndex is out of range.
    /// Example: before
    /// me = "aabAcAa", S = "Aa", FromIndex = 1, Toindex = 7
    /// after
    /// me = "aabAcAa"
    /// returns
    /// 1
    /// </summary>
    int FirstLocationInSet(Macad::Occt::TCollection_AsciiString^ Set, int FromIndex, int ToIndex);
    /// <summary>
    /// Returns the index of the first character of <me>
    /// that is not present in the set <Set>.
    /// The search begins to the index FromIndex and ends to the
    /// the index ToIndex in <me>.
    /// Returns zero if failure.
    /// Raises an exception if FromIndex or ToIndex is out of range.
    /// Example: before
    /// me = "aabAcAa", S = "Aa", FromIndex = 1, Toindex = 7
    /// after
    /// me = "aabAcAa"
    /// returns
    /// 3
    /// </summary>
    int FirstLocationNotInSet(Macad::Occt::TCollection_AsciiString^ Set, int FromIndex, int ToIndex);
    /// <summary>
    /// Inserts a Character at position <where>.
    /// Example:
    /// aString contains "hy not ?"
    /// aString.Insert(1,'W'); gives "Why not ?"
    /// aString contains "Wh"
    /// aString.Insert(3,'y'); gives "Why"
    /// aString contains "Way"
    /// aString.Insert(2,'h'); gives "Why"
    /// </summary>
    void Insert(int where, char what);
    /// <summary>
    /// Inserts a AsciiString at position <where>.
    /// </summary>
    void Insert(int where, Macad::Occt::TCollection_AsciiString^ what);
    /// <summary>
    /// Pushing a string after a specific index in the string <me>.
    /// Raises an exception if Index is out of bounds.
    /// -   less than 0 (InsertAfter), or less than 1 (InsertBefore), or
    /// -   greater than the number of characters in this ASCII string.
    /// Example:
    /// before
    /// me = "cde" , Index = 0 , other = "ab"
    /// after
    /// me = "abcde" , other = "ab"
    /// </summary>
    void InsertAfter(int Index, Macad::Occt::TCollection_AsciiString^ other);
    /// <summary>
    /// Pushing a string before a specific index in the string <me>.
    /// Raises an exception if Index is out of bounds.
    /// -   less than 0 (InsertAfter), or less than 1 (InsertBefore), or
    /// -   greater than the number of characters in this ASCII string.
    /// Example:
    /// before
    /// me = "cde" , Index = 1 , other = "ab"
    /// after
    /// me = "abcde" , other = "ab"
    /// </summary>
    void InsertBefore(int Index, Macad::Occt::TCollection_AsciiString^ other);
    /// <summary>
    /// Returns True if the string <me> contains zero character.
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// Returns true if the characters in this ASCII string
    /// are identical to the characters in ASCII string other.
    /// Note that this method is an alias of operator ==.
    /// </summary>
    bool IsEqual(System::String^ other);
    /// <summary>
    /// Returns true if the characters in this ASCII string
    /// are identical to the characters in ASCII string other.
    /// Note that this method is an alias of operator ==.
    /// </summary>
    bool IsEqual(Macad::Occt::TCollection_AsciiString^ other);
    /// <summary>
    /// Returns true if there are differences between the
    /// characters in this ASCII string and ASCII string other.
    /// Note that this method is an alias of operator !=
    /// </summary>
    bool IsDifferent(System::String^ other);
    /// <summary>
    /// Returns true if there are differences between the
    /// characters in this ASCII string and ASCII string other.
    /// Note that this method is an alias of operator !=
    /// </summary>
    bool IsDifferent(Macad::Occt::TCollection_AsciiString^ other);
    /// <summary>
    /// Returns TRUE if <me> is 'ASCII' less than <other>.
    /// </summary>
    bool IsLess(System::String^ other);
    /// <summary>
    /// Returns TRUE if <me> is 'ASCII' less than <other>.
    /// </summary>
    bool IsLess(Macad::Occt::TCollection_AsciiString^ other);
    /// <summary>
    /// Returns TRUE if <me> is 'ASCII' greater than <other>.
    /// </summary>
    bool IsGreater(System::String^ other);
    /// <summary>
    /// Returns TRUE if <me> is 'ASCII' greater than <other>.
    /// </summary>
    bool IsGreater(Macad::Occt::TCollection_AsciiString^ other);
    /// <summary>
    /// Determines whether the beginning of this string instance matches the specified string.
    /// </summary>
    bool StartsWith(Macad::Occt::TCollection_AsciiString^ theStartString);
    /// <summary>
    /// Determines whether the end of this string instance matches the specified string.
    /// </summary>
    bool EndsWith(Macad::Occt::TCollection_AsciiString^ theEndString);
    /// <summary>
    /// Converts a AsciiString containing a numeric expression to
    /// an Integer.
    /// Example: "215" returns 215.
    /// </summary>
    int IntegerValue();
    /// <summary>
    /// Returns True if the AsciiString contains an integer value.
    /// Note: an integer value is considered to be a real value as well.
    /// </summary>
    bool IsIntegerValue();
    /// <summary>
    /// Returns True if the AsciiString starts with some characters that can be interpreted as integer
    /// or real value.
    /// </summary>
    /// <param name="in]">
    /// theToCheckFull  when TRUE, checks if entire string defines a real value;
    /// otherwise checks if string starts with a real value
    /// Note: an integer value is considered to be a real value as well.
    /// </param>
    bool IsRealValue(bool theToCheckFull);
    /// <summary>
    /// Returns True if the AsciiString starts with some characters that can be interpreted as integer
    /// or real value.
    /// </summary>
    /// <param name="in]">
    /// theToCheckFull  when TRUE, checks if entire string defines a real value;
    /// otherwise checks if string starts with a real value
    /// Note: an integer value is considered to be a real value as well.
    /// </param>
    bool IsRealValue();
    /// <summary>
    /// Returns True if the AsciiString contains only ASCII characters
    /// between ' ' and '~'.
    /// This means no control character and no extended ASCII code.
    /// </summary>
    bool IsAscii();
    /// <summary>
    /// Removes all space characters in the beginning of the string.
    /// </summary>
    void LeftAdjust();
    /// <summary>
    /// left justify
    /// Length becomes equal to Width and the new characters are
    /// equal to Filler.
    /// If Width < Length nothing happens.
    /// Raises an exception if Width is less than zero.
    /// Example:
    /// before
    /// me = "abcdef" , Width = 9 , Filler = ' '
    /// after
    /// me = "abcdef   "
    /// </summary>
    void LeftJustify(int Width, char Filler);
    /// <summary>
    /// Returns number of characters in <me>.
    /// This is the same functionality as 'strlen' in C.
    /// Example
    /// TCollection_AsciiString myAlphabet("abcdef");
    /// assert ( myAlphabet.Length() == 6 );
    /// -   1 is the position of the first character in this string.
    /// -   The length of this string gives the position of its last character.
    /// -   Positions less than or equal to zero, or
    /// greater than the length of this string are
    /// invalid in functions which identify a character
    /// of this string by its position.
    /// </summary>
    int Length();
    /// <summary>
    /// Returns an index in the string <me> of the first occurrence
    /// of the string S in the string <me> from the starting index
    /// FromIndex to the ending index ToIndex
    /// returns zero if failure
    /// Raises an exception if FromIndex or ToIndex is out of range.
    /// Example:
    /// before
    /// me = "aabAaAa", S = "Aa", FromIndex = 1, ToIndex = 7
    /// after
    /// me = "aabAaAa"
    /// returns
    /// 4
    /// </summary>
    int Location(Macad::Occt::TCollection_AsciiString^ other, int FromIndex, int ToIndex);
    /// <summary>
    /// Returns the index of the nth occurrence of the character C
    /// in the string <me> from the starting index FromIndex to the
    /// ending index ToIndex.
    /// Returns zero if failure.
    /// Raises an exception if FromIndex or ToIndex is out of range.
    /// Example:
    /// before
    /// me = "aabAa", N = 3, C = 'a', FromIndex = 1, ToIndex = 5
    /// after
    /// me = "aabAa"
    /// returns
    /// 5
    /// </summary>
    int Location(int N, char C, int FromIndex, int ToIndex);
    /// <summary>
    /// Converts <me> to its lower-case equivalent.
    /// Example
    /// TCollection_AsciiString myString("Hello Dolly");
    /// myString.UpperCase();
    /// assert ( myString == "HELLO DOLLY" );
    /// myString.LowerCase();
    /// assert ( myString == "hello dolly" );
    /// </summary>
    void LowerCase();
    /// <summary>
    /// Inserts the string other at the beginning of this ASCII string.
    /// Example
    /// TCollection_AsciiString myAlphabet("cde");
    /// TCollection_AsciiString myBegin("ab");
    /// myAlphabet.Prepend(myBegin);
    /// assert ( myAlphabet == "abcde" );
    /// </summary>
    void Prepend(Macad::Occt::TCollection_AsciiString^ other);
    /// <summary>
    /// Displays <me> on a stream.
    /// </summary>
    void Print(System::IO::TextWriter^ astream);
    /* Method skipped due to unknown mapping: void Read(istream astream, ) */
    /// <summary>
    /// Converts an AsciiString containing a numeric expression.
    /// to a Real.
    /// Example: ex: "215" returns 215.0.
    /// ex: "3.14159267" returns 3.14159267.
    /// </summary>
    double RealValue();
    /// <summary>
    /// Remove all the occurrences of the character C in the string.
    /// Example:
    /// before
    /// me = "HellLLo", C = 'L' , CaseSensitive = True
    /// after
    /// me = "Hello"
    /// </summary>
    void RemoveAll(char C, bool CaseSensitive);
    /// <summary>
    /// Removes every <what> characters from <me>.
    /// </summary>
    void RemoveAll(char what);
    /// <summary>
    /// Erases <ahowmany> characters from position <where>,
    /// <where> included.
    /// Example:
    /// aString contains "Hello"
    /// aString.Remove(2,2) erases 2 characters from position 2
    /// This gives "Hlo".
    /// </summary>
    void Remove(int where, int ahowmany);
    /// <summary>
    /// Erases <ahowmany> characters from position <where>,
    /// <where> included.
    /// Example:
    /// aString contains "Hello"
    /// aString.Remove(2,2) erases 2 characters from position 2
    /// This gives "Hlo".
    /// </summary>
    void Remove(int where);
    /// <summary>
    /// Removes all space characters at the end of the string.
    /// </summary>
    void RightAdjust();
    /// <summary>
    /// Right justify.
    /// Length becomes equal to Width and the new characters are
    /// equal to Filler.
    /// if Width < Length nothing happens.
    /// Raises an exception if Width is less than zero.
    /// Example:
    /// before
    /// me = "abcdef" , Width = 9 , Filler = ' '
    /// after
    /// me = "   abcdef"
    /// </summary>
    void RightJustify(int Width, char Filler);
    /// <summary>
    /// Searches a CString in <me> from the beginning
    /// and returns position of first item <what> matching.
    /// it returns -1 if not found.
    /// Example:
    /// aString contains "Sample single test"
    /// aString.Search("le") returns 5
    /// </summary>
    int Search(System::String^ what);
    /// <summary>
    /// Searches an AsciiString in <me> from the beginning
    /// and returns position of first item <what> matching.
    /// It returns -1 if not found.
    /// </summary>
    int Search(Macad::Occt::TCollection_AsciiString^ what);
    /// <summary>
    /// Searches a CString in a AsciiString from the end
    /// and returns position of first item <what> matching.
    /// It returns -1 if not found.
    /// Example:
    /// aString contains "Sample single test"
    /// aString.SearchFromEnd("le") returns 12
    /// </summary>
    int SearchFromEnd(System::String^ what);
    /// <summary>
    /// Searches a AsciiString in another AsciiString from the end
    /// and returns position of first item <what> matching.
    /// It returns -1 if not found.
    /// </summary>
    int SearchFromEnd(Macad::Occt::TCollection_AsciiString^ what);
    /// <summary>
    /// Replaces one character in the AsciiString at position <where>.
    /// If <where> is less than zero or greater than the length of <me>
    /// an exception is raised.
    /// Example:
    /// aString contains "Garbake"
    /// astring.Replace(6,'g')  gives <me> = "Garbage"
    /// </summary>
    void SetValue(int where, char what);
    /// <summary>
    /// Replaces a part of <me> by another AsciiString.
    /// </summary>
    void SetValue(int where, Macad::Occt::TCollection_AsciiString^ what);
    /// <summary>
    /// Splits a AsciiString into two sub-strings.
    /// Example:
    /// aString contains "abcdefg"
    /// aString.Split(3) gives <me> = "abc" and returns "defg"
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ Split(int where);
    /// <summary>
    /// Creation of a sub-string of the string <me>.
    /// The sub-string starts to the index Fromindex and ends
    /// to the index ToIndex.
    /// Raises an exception if ToIndex or FromIndex is out of bounds
    /// Example:
    /// before
    /// me = "abcdefg", ToIndex=3, FromIndex=6
    /// after
    /// me = "abcdefg"
    /// returns
    /// "cdef"
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ SubString(int FromIndex, int ToIndex);
    /// <summary>
    /// Returns pointer to AsciiString (char *).
    /// This is useful for some casual manipulations.
    /// Warning: Because this "char *" is 'const', you can't modify its contents.
    /// </summary>
    System::String^ ToCString();
    /// <summary>
    /// Extracts <whichone> token from <me>.
    /// By default, the <separators> is set to space and tabulation.
    /// By default, the token extracted is the first one (whichone = 1).
    /// <separators> contains all separators you need.
    /// If no token indexed by <whichone> is found, it returns empty AsciiString.
    /// Example:
    /// aString contains "This is a     message"
    /// aString.Token()  returns "This"
    /// aString.Token(" ",4) returns "message"
    /// aString.Token(" ",2) returns "is"
    /// aString.Token(" ",9) returns ""
    /// Other separators than space character and tabulation are allowed :
    /// aString contains "1234; test:message   , value"
    /// aString.Token("; :,",4) returns "value"
    /// aString.Token("; :,",2) returns "test"
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ Token(System::String^ separators, int whichone);
    /// <summary>
    /// Extracts <whichone> token from <me>.
    /// By default, the <separators> is set to space and tabulation.
    /// By default, the token extracted is the first one (whichone = 1).
    /// <separators> contains all separators you need.
    /// If no token indexed by <whichone> is found, it returns empty AsciiString.
    /// Example:
    /// aString contains "This is a     message"
    /// aString.Token()  returns "This"
    /// aString.Token(" ",4) returns "message"
    /// aString.Token(" ",2) returns "is"
    /// aString.Token(" ",9) returns ""
    /// Other separators than space character and tabulation are allowed :
    /// aString contains "1234; test:message   , value"
    /// aString.Token("; :,",4) returns "value"
    /// aString.Token("; :,",2) returns "test"
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ Token(System::String^ separators);
    /// <summary>
    /// Extracts <whichone> token from <me>.
    /// By default, the <separators> is set to space and tabulation.
    /// By default, the token extracted is the first one (whichone = 1).
    /// <separators> contains all separators you need.
    /// If no token indexed by <whichone> is found, it returns empty AsciiString.
    /// Example:
    /// aString contains "This is a     message"
    /// aString.Token()  returns "This"
    /// aString.Token(" ",4) returns "message"
    /// aString.Token(" ",2) returns "is"
    /// aString.Token(" ",9) returns ""
    /// Other separators than space character and tabulation are allowed :
    /// aString contains "1234; test:message   , value"
    /// aString.Token("; :,",4) returns "value"
    /// aString.Token("; :,",2) returns "test"
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ Token();
    /// <summary>
    /// Truncates <me> to <ahowmany> characters.
    /// Example:  me = "Hello Dolly" -> Trunc(3) -> me = "Hel"
    /// </summary>
    void Trunc(int ahowmany);
    /// <summary>
    /// Converts <me> to its upper-case equivalent.
    /// </summary>
    void UpperCase();
    /// <summary>
    /// Length of the string ignoring all spaces (' ') and the
    /// control character at the end.
    /// </summary>
    int UsefullLength();
    /// <summary>
    /// Returns character at position <where> in <me>.
    /// If <where> is less than zero or greater than the length of <me>,
    /// an exception is raised.
    /// Example:
    /// aString contains "Hello"
    /// aString.Value(2) returns 'e'
    /// </summary>
    char Value(int where);
    /// <summary>
    /// Computes a hash code for the given ASCII string
    /// Returns the same integer value as the hash function for TCollection_ExtendedString
    /// </summary>
    /// <returns>
    /// a computed hash code
    /// </returns>
    long long unsigned int HashCode();
    /// <summary>
    /// Returns True  when the two  strings are the same.
    /// (Just for HashCode for AsciiString)
    /// </summary>
    static bool IsEqual(Macad::Occt::TCollection_AsciiString^ string1, Macad::Occt::TCollection_AsciiString^ string2);
    /// <summary>
    /// Returns True  when the two  strings are the same.
    /// (Just for HashCode for AsciiString)
    /// </summary>
    static bool IsEqual(Macad::Occt::TCollection_AsciiString^ string1, System::String^ string2);
    /// <summary>
    /// Returns True if the strings contain same characters.
    /// </summary>
    static bool IsSameString(Macad::Occt::TCollection_AsciiString^ theString1, Macad::Occt::TCollection_AsciiString^ theString2, bool theIsCaseSensitive);
}; // class TCollection_AsciiString

//---------------------------------------------------------------------
//  Class  TCollection_HExtendedString
//---------------------------------------------------------------------
/// <summary>
/// A variable-length sequence of "extended"
/// (UNICODE) characters (16-bit character
/// type). It provides editing operations with
/// built-in memory management to make
/// ExtendedString objects easier to use than
/// ordinary extended character arrays.
/// HExtendedString objects are handles to strings.
/// - HExtendedString strings may be shared by several objects.
/// - You may use an ExtendedString object to get the actual string.
/// Note: HExtendedString objects use an
/// ExtendedString string as a field.
/// </summary>
public ref class TCollection_HExtendedString sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_TCollection_HExtendedString_h
public:
    Include_TCollection_HExtendedString_h
#endif

public:
    TCollection_HExtendedString(::TCollection_HExtendedString* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TCollection_HExtendedString(::TCollection_HExtendedString& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TCollection_HExtendedString* NativeInstance
    {
        ::TCollection_HExtendedString* get()
        {
            return static_cast<::TCollection_HExtendedString*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes a HExtendedString to an empty ExtendedString.
    /// </summary>
    TCollection_HExtendedString();
    /// <summary>
    /// Initializes a HExtendedString with an ExtString.
    /// </summary>
    TCollection_HExtendedString(System::String^ message);
    /* Method skipped due to unknown mapping: void TCollection_HExtendedString(int length, char16_t filler, ) */
    /// <summary>
    /// Initializes a HExtendedString with a ExtendedString.
    /// </summary>
    TCollection_HExtendedString(Macad::Occt::TCollection_ExtendedString^ aString);
    /// <summary>
    /// Initializes a HExtendedString with an HAsciiString.
    /// </summary>
    TCollection_HExtendedString(Macad::Occt::TCollection_HAsciiString^ aString);
    /// <summary>
    /// Appends <other>  to me.
    /// </summary>
    void AssignCat(Macad::Occt::TCollection_HExtendedString^ other);
    /// <summary>
    /// Returns a string appending <other>  to me.
    /// </summary>
    Macad::Occt::TCollection_HExtendedString^ Cat(Macad::Occt::TCollection_HExtendedString^ other);
    /* Method skipped due to unknown mapping: void ChangeAll(char16_t aChar, char16_t NewChar, ) */
    /// <summary>
    /// Removes all characters contained in <me>.
    /// This produces an empty ExtendedString.
    /// </summary>
    void Clear();
    /// <summary>
    /// Returns True if the string <me> contains zero character
    /// </summary>
    bool IsEmpty();
    /* Method skipped due to unknown mapping: void Insert(int where, char16_t what, ) */
    /// <summary>
    /// Insert a HExtendedString at position <where>.
    /// </summary>
    void Insert(int where, Macad::Occt::TCollection_HExtendedString^ what);
    /// <summary>
    /// Returns TRUE if <me> is less than <other>.
    /// </summary>
    bool IsLess(Macad::Occt::TCollection_HExtendedString^ other);
    /// <summary>
    /// Returns TRUE if <me> is greater than <other>.
    /// </summary>
    bool IsGreater(Macad::Occt::TCollection_HExtendedString^ other);
    /// <summary>
    /// Returns True if the string contains only "Ascii Range"  characters
    /// </summary>
    bool IsAscii();
    /// <summary>
    /// Returns number of characters in <me>.
    /// This is the same functionality as 'strlen' in C.
    /// </summary>
    int Length();
    /// <summary>
    /// Erases <ahowmany> characters from position <where>,
    /// <where> included.
    /// Example:
    /// aString contains "Hello"
    /// aString.Erase(2,2) erases 2 characters from position 1
    /// This gives "Hlo".
    /// </summary>
    void Remove(int where, int ahowmany);
    /// <summary>
    /// Erases <ahowmany> characters from position <where>,
    /// <where> included.
    /// Example:
    /// aString contains "Hello"
    /// aString.Erase(2,2) erases 2 characters from position 1
    /// This gives "Hlo".
    /// </summary>
    void Remove(int where);
    /* Method skipped due to unknown mapping: void RemoveAll(char16_t what, ) */
    /* Method skipped due to unknown mapping: void SetValue(int where, char16_t what, ) */
    /// <summary>
    /// Replaces a part of <me> by another string.
    /// </summary>
    void SetValue(int where, Macad::Occt::TCollection_HExtendedString^ what);
    /// <summary>
    /// Splits a ExtendedString into two sub-strings.
    /// Example:
    /// aString contains "abcdefg"
    /// aString.Split(3) gives <me> = "abc" and returns "defg"
    /// </summary>
    Macad::Occt::TCollection_HExtendedString^ Split(int where);
    /// <summary>
    /// Searches a String in <me> from the beginning
    /// and returns position of first item <what> matching.
    /// It returns -1 if not found.
    /// </summary>
    int Search(Macad::Occt::TCollection_HExtendedString^ what);
    /// <summary>
    /// Searches a ExtendedString in another ExtendedString from the end
    /// and returns position of first item <what> matching.
    /// It returns -1 if not found.
    /// </summary>
    int SearchFromEnd(Macad::Occt::TCollection_HExtendedString^ what);
    /// <summary>
    /// Returns pointer to ExtString
    /// </summary>
    System::String^ ToExtString();
    /// <summary>
    /// Extracts <whichone> token from <me>.
    /// By default, the <separators> is set to space and tabulation.
    /// By default, the token extracted is the first one (whichone = 1).
    /// <separators> contains all separators you need.
    /// If no token indexed by <whichone> is found, it returns an empty String.
    /// Example:
    /// aString contains "This is a     message"
    /// aString.Token()  returns "This"
    /// aString.Token(" ",4) returns "message"
    /// aString.Token(" ",2) returns "is"
    /// aString.Token(" ",9) returns ""
    /// Other separators than space character and tabulation are allowed
    /// aString contains "1234; test:message   , value"
    /// aString.Token("; :,",4) returns "value"
    /// aString.Token("; :,",2) returns "test"
    /// </summary>
    Macad::Occt::TCollection_HExtendedString^ Token(System::String^ separators, int whichone);
    /// <summary>
    /// Extracts <whichone> token from <me>.
    /// By default, the <separators> is set to space and tabulation.
    /// By default, the token extracted is the first one (whichone = 1).
    /// <separators> contains all separators you need.
    /// If no token indexed by <whichone> is found, it returns an empty String.
    /// Example:
    /// aString contains "This is a     message"
    /// aString.Token()  returns "This"
    /// aString.Token(" ",4) returns "message"
    /// aString.Token(" ",2) returns "is"
    /// aString.Token(" ",9) returns ""
    /// Other separators than space character and tabulation are allowed
    /// aString contains "1234; test:message   , value"
    /// aString.Token("; :,",4) returns "value"
    /// aString.Token("; :,",2) returns "test"
    /// </summary>
    Macad::Occt::TCollection_HExtendedString^ Token(System::String^ separators);
    /// <summary>
    /// Truncates <me> to <ahowmany> characters.
    /// Example:  me = "Hello Dolly" -> Trunc(3) -> me = "Hel"
    /// </summary>
    void Trunc(int ahowmany);
    /* Method skipped due to unknown mapping: char16_t Value(int where, ) */
    /// <summary>
    /// Returns the field myString
    /// </summary>
    Macad::Occt::TCollection_ExtendedString^ String();
    /// <summary>
    /// Displays <me> .
    /// </summary>
    void Print(System::IO::TextWriter^ astream);
    bool IsSameState(Macad::Occt::TCollection_HExtendedString^ other);
    static Macad::Occt::TCollection_HExtendedString^ CreateDowncasted(::TCollection_HExtendedString* instance);
}; // class TCollection_HExtendedString

//---------------------------------------------------------------------
//  Class  TCollection_HAsciiString
//---------------------------------------------------------------------
/// <summary>
/// A variable-length sequence of ASCII characters
/// (normal 8-bit character type). It provides editing
/// operations with built-in memory management to
/// make HAsciiString objects easier to use than ordinary character arrays.
/// HAsciiString objects are handles to strings.
/// -   HAsciiString strings may be shared by several objects.
/// -   You may use an AsciiString object to get the actual string.
/// Note: HAsciiString objects use an AsciiString string as a field.
/// </summary>
public ref class TCollection_HAsciiString sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_TCollection_HAsciiString_h
public:
    Include_TCollection_HAsciiString_h
#endif

public:
    TCollection_HAsciiString(::TCollection_HAsciiString* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TCollection_HAsciiString(::TCollection_HAsciiString& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TCollection_HAsciiString* NativeInstance
    {
        ::TCollection_HAsciiString* get()
        {
            return static_cast<::TCollection_HAsciiString*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes a HAsciiString to an empty AsciiString.
    /// </summary>
    TCollection_HAsciiString();
    /// <summary>
    /// Initializes a HAsciiString with a CString.
    /// </summary>
    TCollection_HAsciiString(System::String^ message);
    /// <summary>
    /// Initializes a HAsciiString with <length> space allocated.
    /// and filled with <filler>.This is useful for buffers.
    /// </summary>
    TCollection_HAsciiString(int length, char filler);
    /// <summary>
    /// Initializes a HAsciiString with an integer value
    /// </summary>
    TCollection_HAsciiString(int value);
    /// <summary>
    /// Initializes a HAsciiString with a real value
    /// </summary>
    TCollection_HAsciiString(double value);
    /// <summary>
    /// Initializes a HAsciiString with a AsciiString.
    /// </summary>
    TCollection_HAsciiString(Macad::Occt::TCollection_AsciiString^ aString);
    /// <summary>
    /// Initializes a HAsciiString with a HExtendedString.
    /// If replaceNonAscii is non-null character, it will be used
    /// in place of any non-ascii character found in the source string.
    /// Otherwise, creates UTF-8 unicode string.
    /// </summary>
    TCollection_HAsciiString(Macad::Occt::TCollection_HExtendedString^ aString, char replaceNonAscii);
    /// <summary>
    /// Appends <other>  to me.
    /// </summary>
    void AssignCat(System::String^ other);
    /// <summary>
    /// Appends <other>  to me.
    /// Example:  aString = aString + anotherString
    /// </summary>
    void AssignCat(Macad::Occt::TCollection_HAsciiString^ other);
    /// <summary>
    /// Converts the first character into its corresponding
    /// upper-case character and the other characters into lowercase.
    /// Example:
    /// before
    /// me = "hellO "
    /// after
    /// me = "Hello "
    /// </summary>
    void Capitalize();
    /// <summary>
    /// Creates a new string by concatenation of this
    /// ASCII string and the other ASCII string.
    /// Example:
    /// aString = aString + anotherString
    /// aString = aString + "Dummy"
    /// aString contains "I say "
    /// aString = aString + "Hello " + "Dolly"
    /// gives "I say Hello Dolly"
    /// Warning: To catenate more than one CString, you must put a String before.
    /// So the following example is WRONG !
    /// aString = "Hello " + "Dolly"  THIS IS NOT ALLOWED
    /// This rule is applicable to AssignCat (operator +=) too.
    /// </summary>
    Macad::Occt::TCollection_HAsciiString^ Cat(System::String^ other);
    /// <summary>
    /// Creates a new string by concatenation of this
    /// ASCII string and the other ASCII string.
    /// Example:  aString = aString + anotherString
    /// </summary>
    Macad::Occt::TCollection_HAsciiString^ Cat(Macad::Occt::TCollection_HAsciiString^ other);
    /// <summary>
    /// Modifies this ASCII string so that its length
    /// becomes equal to Width and the new characters
    /// are equal to Filler. New characters are added
    /// both at the beginning and at the end of this string.
    /// If Width is less than the length of this ASCII string, nothing happens.
    /// Example
    /// Handle(TCollection_HAsciiString)
    /// myAlphabet
    /// = new
    /// TCollection_HAsciiString
    /// ("abcdef");
    /// myAlphabet->Center(9,' ');
    /// assert ( !strcmp(
    /// myAlphabet->ToCString(),
    /// " abcdef ") );
    /// </summary>
    void Center(int Width, char Filler);
    /// <summary>
    /// Replaces all characters equal to aChar by
    /// NewChar in this ASCII string. The substitution is
    /// case sensitive if CaseSensitive is true (default value).
    /// If you do not use the default case sensitive
    /// option, it does not matter whether aChar is upper-case or not.
    /// Example
    /// Handle(TCollection_HAsciiString)
    /// myMistake = new
    /// TCollection_HAsciiString
    /// ("Hather");
    /// myMistake->ChangeAll('H','F');
    /// assert ( !strcmp(
    /// myMistake->ToCString(),
    /// "Father") );
    /// </summary>
    void ChangeAll(char aChar, char NewChar, bool CaseSensitive);
    /// <summary>
    /// Replaces all characters equal to aChar by
    /// NewChar in this ASCII string. The substitution is
    /// case sensitive if CaseSensitive is true (default value).
    /// If you do not use the default case sensitive
    /// option, it does not matter whether aChar is upper-case or not.
    /// Example
    /// Handle(TCollection_HAsciiString)
    /// myMistake = new
    /// TCollection_HAsciiString
    /// ("Hather");
    /// myMistake->ChangeAll('H','F');
    /// assert ( !strcmp(
    /// myMistake->ToCString(),
    /// "Father") );
    /// </summary>
    void ChangeAll(char aChar, char NewChar);
    /// <summary>
    /// Removes all characters contained in <me>.
    /// This produces an empty HAsciiString.
    /// </summary>
    void Clear();
    /// <summary>
    /// Returns the index of the first character of <me> that is
    /// present in <Set>.
    /// The search begins to the index FromIndex and ends to the
    /// the index ToIndex.
    /// Returns zero if failure.
    /// Raises an exception if FromIndex or ToIndex is out of range
    /// Example:
    /// before
    /// me = "aabAcAa", S = "Aa", FromIndex = 1, Toindex = 7
    /// after
    /// me = "aabAcAa"
    /// returns
    /// 1
    /// </summary>
    int FirstLocationInSet(Macad::Occt::TCollection_HAsciiString^ Set, int FromIndex, int ToIndex);
    /// <summary>
    /// Returns the index of the first character of <me>
    /// that is not present in the set <Set>.
    /// The search begins to the index FromIndex and ends to the
    /// the index ToIndex in <me>.
    /// Returns zero if failure.
    /// Raises an exception if FromIndex or ToIndex is out of range.
    /// Example:
    /// before
    /// me = "aabAcAa", S = "Aa", FromIndex = 1, Toindex = 7
    /// after
    /// me = "aabAcAa"
    /// returns
    /// 3
    /// </summary>
    int FirstLocationNotInSet(Macad::Occt::TCollection_HAsciiString^ Set, int FromIndex, int ToIndex);
    /// <summary>
    /// Insert a Character at position <where>.
    /// Example:
    /// aString contains "hy not ?"
    /// aString.Insert(1,'W'); gives "Why not ?"
    /// aString contains "Wh"
    /// aString.Insert(3,'y'); gives "Why"
    /// aString contains "Way"
    /// aString.Insert(2,'h'); gives "Why"
    /// </summary>
    void Insert(int where, char what);
    /// <summary>
    /// Insert a HAsciiString at position <where>.
    /// </summary>
    void Insert(int where, Macad::Occt::TCollection_HAsciiString^ what);
    /// <summary>
    /// Inserts the other ASCII string a after a specific index in the string <me>
    /// Example:
    /// before
    /// me = "cde" , Index = 0 , other = "ab"
    /// after
    /// me = "abcde" , other = "ab"
    /// </summary>
    void InsertAfter(int Index, Macad::Occt::TCollection_HAsciiString^ other);
    /// <summary>
    /// Inserts the other ASCII string a before a specific index in the string <me>
    /// Raises an exception if Index is out of bounds
    /// Example:
    /// before
    /// me = "cde" , Index = 1 , other = "ab"
    /// after
    /// me = "abcde" , other = "ab"
    /// </summary>
    void InsertBefore(int Index, Macad::Occt::TCollection_HAsciiString^ other);
    /// <summary>
    /// Returns True if the string <me> contains zero character
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// Returns TRUE if <me> is 'ASCII' less than <other>.
    /// </summary>
    bool IsLess(Macad::Occt::TCollection_HAsciiString^ other);
    /// <summary>
    /// Returns TRUE if <me> is 'ASCII' greater than <other>.
    /// </summary>
    bool IsGreater(Macad::Occt::TCollection_HAsciiString^ other);
    /// <summary>
    /// Converts a HAsciiString containing a numeric expression to
    /// an Integer.
    /// Example: "215" returns 215.
    /// </summary>
    int IntegerValue();
    /// <summary>
    /// Returns True if the string contains an integer value.
    /// </summary>
    bool IsIntegerValue();
    /// <summary>
    /// Returns True if the string contains a real value.
    /// </summary>
    bool IsRealValue();
    /// <summary>
    /// Returns True if the string contains only ASCII characters
    /// between ' ' and '~'.
    /// This means no control character and no extended ASCII code.
    /// </summary>
    bool IsAscii();
    /// <summary>
    /// Returns True if the string S not contains same characters than
    /// the string <me>.
    /// </summary>
    bool IsDifferent(Macad::Occt::TCollection_HAsciiString^ S);
    /// <summary>
    /// Returns True if the string S contains same characters than the
    /// string <me>.
    /// </summary>
    bool IsSameString(Macad::Occt::TCollection_HAsciiString^ S);
    /// <summary>
    /// Returns True if the string S contains same characters than the
    /// string <me>.
    /// </summary>
    bool IsSameString(Macad::Occt::TCollection_HAsciiString^ S, bool CaseSensitive);
    /// <summary>
    /// Removes all space characters in the beginning of the string
    /// </summary>
    void LeftAdjust();
    /// <summary>
    /// Left justify.
    /// Length becomes equal to Width and the new characters are
    /// equal to Filler
    /// if Width < Length nothing happens
    /// Raises an exception if Width is less than zero
    /// Example:
    /// before
    /// me = "abcdef" , Width = 9 , Filler = ' '
    /// after
    /// me = "abcdef   "
    /// </summary>
    void LeftJustify(int Width, char Filler);
    /// <summary>
    /// Returns number of characters in <me>.
    /// This is the same functionality as 'strlen' in C.
    /// </summary>
    int Length();
    /// <summary>
    /// returns an index in the string <me> of the first occurrence
    /// of the string S in the string <me> from the starting index
    /// FromIndex to the ending index ToIndex
    /// returns zero if failure
    /// Raises an exception if FromIndex or ToIndex is out of range.
    /// Example:
    /// before
    /// me = "aabAaAa", S = "Aa", FromIndex = 1, ToIndex = 7
    /// after
    /// me = "aabAaAa"
    /// returns
    /// 4
    /// </summary>
    int Location(Macad::Occt::TCollection_HAsciiString^ other, int FromIndex, int ToIndex);
    /// <summary>
    /// Returns the index of the nth occurrence of the character C
    /// in the string <me> from the starting index FromIndex to the
    /// ending index ToIndex.
    /// Returns zero if failure.
    /// Raises an exception if FromIndex or ToIndex is out of range
    /// Example:
    /// before
    /// me = "aabAa", N = 3, C = 'a', FromIndex = 1, ToIndex = 5
    /// after
    /// me = "aabAa"
    /// returns 5
    /// </summary>
    int Location(int N, char C, int FromIndex, int ToIndex);
    /// <summary>
    /// Converts <me> to its lower-case equivalent.
    /// </summary>
    void LowerCase();
    /// <summary>
    /// Inserts the other string at the beginning of the string <me>
    /// Example:
    /// before
    /// me = "cde" , S = "ab"
    /// after
    /// me = "abcde" , S = "ab"
    /// </summary>
    void Prepend(Macad::Occt::TCollection_HAsciiString^ other);
    /// <summary>
    /// Prints this string on the stream <astream>.
    /// </summary>
    void Print(System::IO::TextWriter^ astream);
    /// <summary>
    /// Converts a string containing a numeric expression to a Real.
    /// Example:
    /// "215" returns 215.0.
    /// "3.14159267" returns 3.14159267.
    /// </summary>
    double RealValue();
    /// <summary>
    /// Remove all the occurrences of the character C in the string
    /// Example:
    /// before
    /// me = "HellLLo", C = 'L' , CaseSensitive = True
    /// after
    /// me = "Hello"
    /// </summary>
    void RemoveAll(char C, bool CaseSensitive);
    /// <summary>
    /// Removes every <what> characters from <me>
    /// </summary>
    void RemoveAll(char what);
    /// <summary>
    /// Erases <ahowmany> characters from position <where>,
    /// <where> included.
    /// Example:
    /// aString contains "Hello"
    /// aString.Erase(2,2) erases 2 characters from position 1
    /// This gives "Hlo".
    /// </summary>
    void Remove(int where, int ahowmany);
    /// <summary>
    /// Erases <ahowmany> characters from position <where>,
    /// <where> included.
    /// Example:
    /// aString contains "Hello"
    /// aString.Erase(2,2) erases 2 characters from position 1
    /// This gives "Hlo".
    /// </summary>
    void Remove(int where);
    /// <summary>
    /// Removes all space characters at the end of the string.
    /// </summary>
    void RightAdjust();
    /// <summary>
    /// Right justify.
    /// Length becomes equal to Width and the new characters are
    /// equal to Filler
    /// if Width < Length nothing happens
    /// Raises an exception if Width is less than zero
    /// Example:
    /// before
    /// me = "abcdef" , Width = 9 , Filler = ' '
    /// after
    /// me = "   abcdef"
    /// </summary>
    void RightJustify(int Width, char Filler);
    /// <summary>
    /// Searches a CString in <me> from the beginning
    /// and returns position of first item <what> matching.
    /// It returns -1 if not found.
    /// Example:
    /// aString contains "Sample single test"
    /// aString.Search("le") returns 5
    /// </summary>
    int Search(System::String^ what);
    /// <summary>
    /// Searches a String in <me> from the beginning
    /// and returns position of first item <what> matching.
    /// it returns -1 if not found.
    /// </summary>
    int Search(Macad::Occt::TCollection_HAsciiString^ what);
    /// <summary>
    /// Searches a CString in a String from the end
    /// and returns position of first item <what> matching.
    /// It returns -1 if not found.
    /// Example:
    /// aString contains "Sample single test"
    /// aString.SearchFromEnd("le") returns 12
    /// </summary>
    int SearchFromEnd(System::String^ what);
    /// <summary>
    /// Searches a HAsciiString in another HAsciiString from the end
    /// and returns position of first item <what> matching.
    /// It returns -1 if not found.
    /// </summary>
    int SearchFromEnd(Macad::Occt::TCollection_HAsciiString^ what);
    /// <summary>
    /// Replaces one character in the string at position <where>.
    /// If <where> is less than zero or greater than the length of <me>
    /// an exception is raised.
    /// Example:
    /// aString contains "Garbake"
    /// astring.Replace(6,'g')  gives <me> = "Garbage"
    /// </summary>
    void SetValue(int where, char what);
    /// <summary>
    /// Replaces a part of <me> by another string.
    /// </summary>
    void SetValue(int where, Macad::Occt::TCollection_HAsciiString^ what);
    /// <summary>
    /// Splits a HAsciiString into two sub-strings.
    /// Example:
    /// aString contains "abcdefg"
    /// aString.Split(3) gives <me> = "abc" and returns "defg"
    /// </summary>
    Macad::Occt::TCollection_HAsciiString^ Split(int where);
    /// <summary>
    /// Creation of a sub-string of the string <me>.
    /// The sub-string starts to the index Fromindex and ends
    /// to the index ToIndex.
    /// Raises an exception if ToIndex or FromIndex is out of
    /// bounds
    /// Example:
    /// before
    /// me = "abcdefg", ToIndex=3, FromIndex=6
    /// after
    /// me = "abcdefg"
    /// returns
    /// "cdef"
    /// </summary>
    Macad::Occt::TCollection_HAsciiString^ SubString(int FromIndex, int ToIndex);
    /// <summary>
    /// Returns pointer to string (char *)
    /// This is useful for some casual manipulations
    /// Because this "char *" is 'const', you can't modify its contents.
    /// </summary>
    System::String^ ToCString();
    /// <summary>
    /// Extracts <whichone> token from <me>.
    /// By default, the <separators> is set to space and tabulation.
    /// By default, the token extracted is the first one (whichone = 1).
    /// <separators> contains all separators you need.
    /// If no token indexed by <whichone> is found, it returns an empty String.
    /// Example:
    /// aString contains "This is a     message"
    /// aString.Token()  returns "This"
    /// aString.Token(" ",4) returns "message"
    /// aString.Token(" ",2) returns "is"
    /// aString.Token(" ",9) returns ""
    /// Other separators than space character and tabulation are allowed
    /// aString contains "1234; test:message   , value"
    /// aString.Token("; :,",4) returns "value"
    /// aString.Token("; :,",2) returns "test"
    /// </summary>
    Macad::Occt::TCollection_HAsciiString^ Token(System::String^ separators, int whichone);
    /// <summary>
    /// Extracts <whichone> token from <me>.
    /// By default, the <separators> is set to space and tabulation.
    /// By default, the token extracted is the first one (whichone = 1).
    /// <separators> contains all separators you need.
    /// If no token indexed by <whichone> is found, it returns an empty String.
    /// Example:
    /// aString contains "This is a     message"
    /// aString.Token()  returns "This"
    /// aString.Token(" ",4) returns "message"
    /// aString.Token(" ",2) returns "is"
    /// aString.Token(" ",9) returns ""
    /// Other separators than space character and tabulation are allowed
    /// aString contains "1234; test:message   , value"
    /// aString.Token("; :,",4) returns "value"
    /// aString.Token("; :,",2) returns "test"
    /// </summary>
    Macad::Occt::TCollection_HAsciiString^ Token(System::String^ separators);
    /// <summary>
    /// Extracts <whichone> token from <me>.
    /// By default, the <separators> is set to space and tabulation.
    /// By default, the token extracted is the first one (whichone = 1).
    /// <separators> contains all separators you need.
    /// If no token indexed by <whichone> is found, it returns an empty String.
    /// Example:
    /// aString contains "This is a     message"
    /// aString.Token()  returns "This"
    /// aString.Token(" ",4) returns "message"
    /// aString.Token(" ",2) returns "is"
    /// aString.Token(" ",9) returns ""
    /// Other separators than space character and tabulation are allowed
    /// aString contains "1234; test:message   , value"
    /// aString.Token("; :,",4) returns "value"
    /// aString.Token("; :,",2) returns "test"
    /// </summary>
    Macad::Occt::TCollection_HAsciiString^ Token();
    /// <summary>
    /// Truncates <me> to <ahowmany> characters.
    /// Example:  me = "Hello Dolly" -> Trunc(3) -> me = "Hel"
    /// </summary>
    void Trunc(int ahowmany);
    /// <summary>
    /// Converts <me> to its upper-case equivalent.
    /// </summary>
    void UpperCase();
    /// <summary>
    /// Length of the string ignoring all spaces (' ') and the
    /// control character at the end.
    /// </summary>
    int UsefullLength();
    /// <summary>
    /// Returns character at position <where> in <me>.
    /// If <where> is less than zero or greater than the length of
    /// <me>, an exception is raised.
    /// Example:
    /// aString contains "Hello"
    /// aString.Value(2) returns 'e'
    /// </summary>
    char Value(int where);
    /// <summary>
    /// Returns the field myString.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ String();
    bool IsSameState(Macad::Occt::TCollection_HAsciiString^ other);
    static Macad::Occt::TCollection_HAsciiString^ CreateDowncasted(::TCollection_HAsciiString* instance);
}; // class TCollection_HAsciiString

//---------------------------------------------------------------------
//  Class  TCollection
//---------------------------------------------------------------------
/// <summary>
/// The package <TCollection> provides the services for the
/// transient basic data structures.
/// </summary>
public ref class TCollection sealed
    : public Macad::Occt::BaseClass<::TCollection>
{

#ifdef Include_TCollection_h
public:
    Include_TCollection_h
#endif

public:
    TCollection(::TCollection* nativeInstance)
        : Macad::Occt::BaseClass<::TCollection>( nativeInstance, true )
    {}

    TCollection(::TCollection& nativeInstance)
        : Macad::Occt::BaseClass<::TCollection>( &nativeInstance, false )
    {}

    property ::TCollection* NativeInstance
    {
        ::TCollection* get()
        {
            return static_cast<::TCollection*>(_NativeInstance);
        }
    }

public:
    TCollection();
    /// <summary>
    /// Returns a  prime number greater than  <I> suitable
    /// to dimension a Map.  When  <I> becomes great there
    /// is  a  limit on  the  result (today  the  limit is
    /// around 1 000 000). This is not a limit of the number of
    /// items but a limit in the number  of buckets.  i.e.
    /// there will be more collisions  in  the map.
    /// </summary>
    static int NextPrimeForMap(int I);
}; // class TCollection

}; // namespace Occt
}; // namespace Macad
