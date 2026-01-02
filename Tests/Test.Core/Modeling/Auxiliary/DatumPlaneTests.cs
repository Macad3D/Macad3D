using Macad.Core;
using Macad.Core.Auxiliary;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Core.Modeling.Auxiliary;

[TestFixture]
public class DatumPlaneTests
{
    const string _BasePath = @"Modeling\Auxiliary\DatumPlane";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void KeepAspectRatio()
    {
        var datumPlane = DatumPlane.Create();
        datumPlane.KeepAspectRatio = false;
        datumPlane.SizeX = 100;
        datumPlane.SizeY = 200;
        Assert.That(datumPlane.SizeX, Is.EqualTo(100));
        Assert.That(datumPlane.SizeY, Is.EqualTo(200));
        Assert.That(datumPlane.AspectRatio, Is.EqualTo(0.5));

        datumPlane.KeepAspectRatio = true;
        datumPlane.SizeX = 200;
        Assert.That(datumPlane.SizeX, Is.EqualTo(200));
        Assert.That(datumPlane.SizeY, Is.EqualTo(400));
        Assert.That(datumPlane.AspectRatio, Is.EqualTo(0.5));

        datumPlane.SizeY = 150;
        Assert.That(datumPlane.SizeX, Is.EqualTo(75));
        Assert.That(datumPlane.SizeY, Is.EqualTo(150));
        Assert.That(datumPlane.AspectRatio, Is.EqualTo(0.5));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AspectRatioUndo()
    {
        UndoHandler undoHandler = Context.Current.UndoHandler;
        var datumPlane = DatumPlane.Create();
        Context.Current.Document.Add(datumPlane);
        undoHandler.Commit();

        datumPlane.KeepAspectRatio = false;
        datumPlane.SizeX = 100;
        datumPlane.SizeY = 200;
        undoHandler.Commit();
        undoHandler.DoUndo(1);
        Assert.That(datumPlane.SizeX, Is.EqualTo(100));
        Assert.That(datumPlane.SizeY, Is.EqualTo(100));
        Assert.That(datumPlane.AspectRatio, Is.EqualTo(1.0));

        datumPlane.KeepAspectRatio = true;
        datumPlane.SizeX = 200;
        datumPlane.SizeY = 150;
        undoHandler.Commit();
        undoHandler.DoUndo(1);
        Assert.That(datumPlane.SizeX, Is.EqualTo(100));
        Assert.That(datumPlane.SizeY, Is.EqualTo(100));
        Assert.That(datumPlane.AspectRatio, Is.EqualTo(1.0));

        datumPlane.SizeX = 400;
        undoHandler.Commit();
        undoHandler.DoUndo(1);
        Assert.That(datumPlane.SizeX, Is.EqualTo(100));
        Assert.That(datumPlane.SizeY, Is.EqualTo(100));
        Assert.That(datumPlane.AspectRatio, Is.EqualTo(1.0));

        datumPlane.SizeY = 500;
        undoHandler.Commit();
        undoHandler.DoUndo(1);
        Assert.That(datumPlane.SizeX, Is.EqualTo(100));
        Assert.That(datumPlane.SizeY, Is.EqualTo(100));
        Assert.That(datumPlane.AspectRatio, Is.EqualTo(1.0));

        datumPlane.KeepAspectRatio = false;
        datumPlane.SizeX = 50;
        datumPlane.SizeY = 75;
        datumPlane.KeepAspectRatio = true;
        undoHandler.Commit();
        undoHandler.DoUndo(1);
        Assert.That(datumPlane.SizeX, Is.EqualTo(100));
        Assert.That(datumPlane.SizeY, Is.EqualTo(100));
        Assert.That(datumPlane.AspectRatio, Is.EqualTo(1.0));
    }
}