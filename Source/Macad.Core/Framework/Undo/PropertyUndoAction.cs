using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using Macad.Core.Topology;

namespace Macad.Core;

public class PropertyUndoAction : UndoAction
{
    class PropertyValueChange
    {
        readonly PropertyInfo _PropertyInfo;
        object _Value;
        bool _IsEntityReference;

        //--------------------------------------------------------------------------------------------------

        public PropertyValueChange(PropertyInfo propertyInfo)
        {
            _PropertyInfo = propertyInfo;
            _IsEntityReference = typeof(Entity).IsAssignableFrom(_PropertyInfo.DeclaringType)
                                 && typeof(Entity).IsAssignableFrom(_PropertyInfo.PropertyType);
        }

        //--------------------------------------------------------------------------------------------------

        public bool IsEqual(PropertyInfo propInfo)
        {
            return _PropertyInfo.Equals(propInfo);
        }

        //--------------------------------------------------------------------------------------------------

        public void Update(object instance, object value = null)
        {
            if (value != null)
            {
                _Value = value;
            }
            else
            {
                if (_IsEntityReference)
                {
                    // Save only reference
                    var entity = _PropertyInfo.GetValue(instance) as Entity;
                    _Value = entity?.Guid;
                }
                else
                {
                    _Value = _PropertyInfo.GetValue(instance);
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public void RestoreValue(object instance)
        {
            if (_IsEntityReference)
            {
                // Restore via reference
                var document = (instance as Entity)?.Document;
                if (document != null && _Value != null && _Value is Guid guid)
                {
                    _PropertyInfo.SetValue(instance, document.FindInstance(guid));
                }
                else
                {
                    _PropertyInfo.SetValue(instance, null);
                }
            }
            else
            {
                _PropertyInfo.SetValue(instance, _Value);
            }
        }

        //--------------------------------------------------------------------------------------------------
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    readonly List<PropertyValueChange> _ChangeList = new List<PropertyValueChange>();

    //--------------------------------------------------------------------------------------------------

    public PropertyUndoAction(Guid instanceGuid)
    {
        InstanceGuid = instanceGuid;
    }

    //--------------------------------------------------------------------------------------------------

    public void Set(PropertyInfo propertyInfo, Entity instance, object value = null)
    {
        // Note: Only the first value change should be saved, or the original state will be lost. 
        var change = _ChangeList.FirstOrDefault(pvc => pvc.IsEqual(propertyInfo));
                
        if(change != null)
            return;

        change = new PropertyValueChange(propertyInfo);
        change.Update(instance, value);
        _ChangeList.Add(change);
    }

    //--------------------------------------------------------------------------------------------------

    public override void Restore(Entity instance, UndoHandler undoHandler)
    {
        _ChangeList.ForEach( change => change.RestoreValue(instance));

        var shape = instance as Shapes.Shape;
        shape?.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

}