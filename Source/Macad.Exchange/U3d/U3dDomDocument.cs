using System.Collections.Generic;
using System.IO;

namespace Macad.Exchange.U3d;

internal sealed class U3dDomDocument : U3dDomBlock
{
    public List<U3dDomDeclarationBlock> DeclarationBlocks { get; } = new();
    public List<U3dDomContinuationBlock> ContinuationBlocks { get; } = new();

    //--------------------------------------------------------------------------------------------------

    public U3dDomDocument() 
        : base(0x00443355) // File header block
    {
    }

    //--------------------------------------------------------------------------------------------------
        
    public string GetUniqueName(string prefix)
    {
        int suffix = 0;
        string name = prefix;
        while (_UniqueNamesInUse.Contains(name))
        {
            suffix++;
            name = $"{prefix}_{suffix}";
        }
        _UniqueNamesInUse.Add(name);

        return name;
    }

    //--------------------------------------------------------------------------------------------------

    #region Writing

    uint _PosDeclarationSize;        
    uint _PosFileSize;
    readonly List<string> _UniqueNamesInUse = new();

    //--------------------------------------------------------------------------------------------------

    public MemoryStream WriteToStream()
    {
        U3dWriter writer = new ();

        // Write declaration blocks
        WriteBlock(writer);
        new U3dDomPriorityUpdate(0).WriteBlock(writer);
        DeclarationBlocks.ForEach(block => block.WriteBlock(writer));

        // Update size of decl blocks
        writer.WriteAt(_PosDeclarationSize, writer.Position);

        // Write continuation block
        new U3dDomPriorityUpdate(100).WriteBlock(writer);
        ContinuationBlocks.ForEach(block => block.WriteBlock(writer));

        // Update size of file (it's ok to update only the first 32bit)
        writer.WriteAt(_PosFileSize, writer.Position);

        var stream = writer.Finish();
        stream.Seek(0, SeekOrigin.Begin);
        return stream;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void WriteBlockData(U3dWriter writer)
    {
        // File header block
        writer.Write(0x00000000);   // Minor Version = 0, Major Version = 0
        writer.Write(0x4 | 0x8);    // Profile Identifier: No compression mode = 4, Defined units = 8
        _PosDeclarationSize = writer.Position;
        writer.Write(0);            // Declaration Size, will be updated later
        _PosFileSize = writer.Position;
        writer.Write((ulong)0);     // File Size, will be updated later
        writer.Write(106);          // Character Encoding: UTF-8 = 106
        writer.Write(0.001);        // Units Scaling Factor: Millimeter = 0.001 Metres
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}