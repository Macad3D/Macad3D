using System;

namespace Macad.Core;

public interface IUndoableDataBlob
{
    Guid Guid { get; }

    byte[] GetUndoDataBlob();
    void SetUndoDataBlob(byte[] dataBlob);
}