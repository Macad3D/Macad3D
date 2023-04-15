using System;
using System.Collections.Generic;
using System.Windows.Input;
using Macad.Interaction;

namespace Macad.Test.Utils;

public class TestHudManager : IHudManager
{
    public List<HudElement> HudElements { get; } = new();
    public object CursorOwner { get; private set; }
    public Cursor CurrentCursor { get; private set; }
    public string HintMessage { get; private set; }
    public object HintMessageOwner { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public void AddElement(HudElement element)
    {
        if(!HudElements.Contains(element))
            HudElements.Add(element);
    }

    //--------------------------------------------------------------------------------------------------

    public void RemoveElement(HudElement element)
    {
        HudElements.Remove(element);
    }

    //--------------------------------------------------------------------------------------------------

    public void RemoveElements(Func<HudElement, bool> predicate)
    {
        HudElements.RemoveAll((element) => predicate(element));
    }

    //--------------------------------------------------------------------------------------------------

    public void SetCursor(object owner, Cursor cursor)
    {
        if (CurrentCursor != null && owner != null)
        {
            if (owner != CursorOwner)
                return;
        }

        CurrentCursor = cursor;
        CursorOwner = cursor != null ? owner : null;
    }

    //--------------------------------------------------------------------------------------------------

    public void SetHintMessage(object owner, string message)
    {
        if (HintMessage != null && owner != null)
        {
            if (owner != HintMessageOwner)
                return;
        }

        HintMessage = message;
        HintMessageOwner = message != null ? owner : null;
    }
}