using System;
using System.Diagnostics;
using Macad.Core.Topology;

namespace Macad.Core;

public class DataBlobUndoAction : UndoAction
{
    byte[] _StoredData;

    //--------------------------------------------------------------------------------------------------

    public DataBlobUndoAction(Guid instanceGuid)
    {
        InstanceGuid = instanceGuid;
    }

    //--------------------------------------------------------------------------------------------------

    public bool Set(IUndoableDataBlob dataBlobOwner)
    {
        InstanceGuid = dataBlobOwner.Guid;

        var data = dataBlobOwner.GetUndoDataBlob();
        if (data != null)
        {
            _StoredData = data;
            //Debug.WriteLine(_StoredData);
            return true;
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public override void Restore(Entity instance, UndoHandler undoHandler)
    {
        var dataBlobOwner = instance as IUndoableDataBlob;
        Debug.Assert(dataBlobOwner != null);

        dataBlobOwner.SetUndoDataBlob(_StoredData);
    }
}