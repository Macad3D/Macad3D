namespace Macad.Common
{
    public interface IUnitsSettingsProvider
    {
        UnitId GetUnitId(PhysicalQuantity quantity);
        int GetPrecision(PhysicalQuantity quantity);
        UnitsParameterSet GetUnitsParameterSet();
    }
}
