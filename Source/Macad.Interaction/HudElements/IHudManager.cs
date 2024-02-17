using System;
using System.Windows.Input;

namespace Macad.Interaction;

public interface IHudManager
{
    void AddElement(HudElement element);
    void RemoveElement(HudElement element);
    void RemoveElements(Func<HudElement, bool> predicate);

    void SetCursor(object owner, Cursor cursor);
    void SetHintMessage(object owner, string message);
}