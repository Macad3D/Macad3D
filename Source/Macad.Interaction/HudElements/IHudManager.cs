using System;
using Macad.Common;
using System.Windows.Input;

namespace Macad.Interaction
{
    public interface IHudManager
    {
        T CreateElement<T>(object owner, BaseObject instance = null) where T : HudElement;
        void RemoveElement(HudElement element);
        void RemoveElements(Func<HudElement, bool> predicate);

        void SetCursor(Cursor cursor);
    }
}