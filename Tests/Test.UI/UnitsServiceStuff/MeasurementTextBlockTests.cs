using Macad.Common;
using Macad.Interaction;
using Macad.Presentation;
using Macad.Test.Unit.Common;
using NUnit.Framework;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Media;

namespace Macad.Test.UI.UnitsServiceStuff;

[TestFixture]
public class MeasurementTextBlockTests
{
    Window _Window;
    LabelHudElement _Hud;
    MeasurementTextBlock _TextBlock;

    MeasurementDescriptor DescriptorLength;
    MeasurementDescriptor DescriptorAngle;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        TestEnvironment.EnsureUnits();

        _Hud = new LabelHudElement();

        DescriptorLength = new MeasurementDescriptor(UnitId.Millimeter, 1);
        DescriptorAngle = new MeasurementDescriptor(UnitId.Degree, 2);

        _Window = new Window
        {
            Content = _Hud,
            Width = 200,
            Height = 100,
            WindowStyle = WindowStyle.None,
            ShowInTaskbar = false,
            ShowActivated = false
        };

        _Window.Show();
        DoEvents();

        _Hud.ApplyTemplate();
        DoEvents();

        _TextBlock = FindTextBlock(_Hud);
        Assert.That(_TextBlock, Is.Not.Null, "MeasurementTextBlock not found.");
    }

    //--------------------------------------------------------------------------------------------------

    [TearDown]
    public void TearDown()
    {
        _Window.Close();
    }

    //--------------------------------------------------------------------------------------------------

    MeasurementTextBlock FindTextBlock(DependencyObject root)
    {
        if (root is MeasurementTextBlock mtb)
            return mtb;

        int count = VisualTreeHelper.GetChildrenCount(root);
        for (int i = 0; i < count; i++)
        {
            var child = VisualTreeHelper.GetChild(root, i);
            var result = FindTextBlock(child);
            if (result != null)
                return result;
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    void DoEvents()
    {
        var frame = new System.Windows.Threading.DispatcherFrame();
        System.Windows.Threading.Dispatcher.CurrentDispatcher.BeginInvoke(
            System.Windows.Threading.DispatcherPriority.Background,
            new System.Windows.Threading.DispatcherOperationCallback(delegate (object f)
            {
                ((System.Windows.Threading.DispatcherFrame)f).Continue = false;
                return null;
            }), frame);
        System.Windows.Threading.Dispatcher.PushFrame(frame);
    }

    //--------------------------------------------------------------------------------------------------
    // TESTS
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FormatsLengthValue()
    {
        _Hud.Measurement = DescriptorLength;
        _Hud.Value = 25.0;
        _Hud.Label = "L";

        DoEvents();

        Assert.That(_TextBlock.Text, Does.Contain("25"));
        Assert.That(_TextBlock.Text, Does.Contain("L"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FormatsAngleValue()
    {
        _Hud.Measurement = DescriptorAngle;
        _Hud.Value = 45.0;
        _Hud.Label = "A";

        DoEvents();

        Assert.That(_TextBlock.Text, Does.Contain("45"));
        Assert.That(_TextBlock.Text, Does.Contain("A"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FormatsTextValueOverridesNumeric()
    {
        _TextBlock.TextValue = "123.456";
        _TextBlock.Label = "T";

        DoEvents();

        Assert.That(_TextBlock.Text, Does.Contain("123.456"));
        Assert.That(_TextBlock.Text, Does.Contain("T"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FormatsWithoutMeasurementDescriptor()
    {
        _Hud.Measurement = null;
        _Hud.Value = 10.0;
        _Hud.Label = "X";

        DoEvents();

        Assert.That(_TextBlock.Text, Is.EqualTo("X 10"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void UpdatesWhenPropertiesChange()
    {
        _Hud.Measurement = DescriptorLength;
        _Hud.Value = 5.0;
        _Hud.Label = "L";

        DoEvents();
        var initial = _TextBlock.Text;

        _Hud.Value = 10.0;
        DoEvents();

        Assert.That(_TextBlock.Text, Is.Not.EqualTo(initial));
        Assert.That(_TextBlock.Text, Does.Contain("10"));
    }
}
