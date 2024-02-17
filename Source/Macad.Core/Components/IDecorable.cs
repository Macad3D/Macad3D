using System.Collections.Generic;
using Macad.Core.Topology;

namespace Macad.Core.Components;

public interface IDecorable
{
    Model GetOwnerModel();

    IEnumerable<Component> GetComponents(bool inherited = false);
    T FindComponent<T>(bool inherited = false) where T : Component;

    void AddComponent(Component component);
    void RemoveComponent(Component component);
}