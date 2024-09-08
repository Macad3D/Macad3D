using System.IO;
using System.Linq;
using Macad.Test.Utils;
using Macad.Common.Serialization;
using Macad.Core;
using NUnit.Framework;

namespace Macad.Test.Unit.Infrastructure;

[TestFixture]
public class ScriptTests
{
    string GetScriptFilename(string name)
    {
        return Path.Combine(TestData.TestDataDirectory, @"SourceData\Scripts", name);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RunScript()
    {
        var script = ScriptInstance.LoadScriptFromFile(GetScriptFilename("HelloWorld.csx"));
        Assert.IsNotNull(script);

        using (var output = new ConsoleOutput())
        {
            Assert.IsTrue(script.Run());
            Assert.AreEqual("Hello World", output.GetOutput());
        }
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CompilerError()
    {
        var script = ScriptInstance.LoadScriptFromFile(GetScriptFilename("CompilerError.csx"));
        Assert.IsNull(script);

        Assert.That(Context.Current.MessageHandler.MessageItems.Any(m => m.Severity == MessageSeverity.Error 
                                                                         && m.Explanation != null
                                                                         && m.Explanation.Any(s => s.Contains("CompilerError.csx (3,9): Error CS0117"))));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CompilerWarning()
    {
        var script = ScriptInstance.LoadScriptFromFile(GetScriptFilename("CompilerWarning.csx"));
        Assert.IsNotNull(script);

        Assert.That(Context.Current.MessageHandler.MessageItems.Any(m => m.Severity == MessageSeverity.Warning 
                                                                         && m.Explanation.Any(s => s.Contains("CompilerWarning.csx (4,5): Warning CS0162"))));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ScriptCacheHit()
    {
        var script1 = ScriptInstance.LoadScriptFromFile(GetScriptFilename("HelloWorld.csx"));
        var script2 = ScriptInstance.LoadScriptFromFile(GetScriptFilename("HelloWorld.csx"));
        Assert.IsNotNull(script1);
        Assert.IsNotNull(script2);
        Assert.AreSame(script1, script2); // Cache hit
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ScriptCacheMiss()
    {
        var filename = GetScriptFilename("_temp_ScriptCacheMiss.csx");
        File.Copy(GetScriptFilename("HelloWorld.csx"), filename);
           
        var script1 = ScriptInstance.LoadScriptFromFile(filename);
        File.AppendAllText(filename, "// AppendedText");
        var script2 = ScriptInstance.LoadScriptFromFile(filename);
        File.Delete(filename);

        Assert.IsNotNull(script1);
        Assert.IsNotNull(script2);
        Assert.AreNotSame(script1, script2); // Cache miss
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ScriptCacheMultifileMiss()
    {
        var basefilename = GetScriptFilename("ImportSecondTempFile.csx");
        var tempfilename = GetScriptFilename("_temp_ScriptCacheMiss.csx");
        File.Copy(GetScriptFilename("SecondFile.csx"), tempfilename);

        var script1 = ScriptInstance.LoadScriptFromFile(basefilename);
        File.AppendAllText(tempfilename, "// AppendedText");
        var script2 = ScriptInstance.LoadScriptFromFile(basefilename);
        File.Delete(tempfilename);

        Assert.IsNotNull(script1);
        Assert.IsNotNull(script2);
        Assert.AreNotSame(script1, script2); // Cache miss
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CallAnotherScript()
    {
        var script = ScriptInstance.LoadScriptFromFile(GetScriptFilename("CallAnotherScript.csx"));
        Assert.IsNotNull(script);

        using (var output = new ConsoleOutput())
        {
            Assert.IsTrue(script.Run());
            Assert.AreEqual("Hello World", output.GetOutput());
        }
        Assert.IsNull(ScriptInstance.Current);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CustomReference()
    {
        var script = ScriptInstance.LoadScriptFromFile(GetScriptFilename("CustomReference.csx"));
        Assert.IsNotNull(script);
        Assert.IsTrue(script.Run());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void GacReference()
    {
        var script = ScriptInstance.LoadScriptFromFile(GetScriptFilename("GacReference.csx"));
        Assert.IsNotNull(script);
        Assert.IsTrue(script.Run());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PreProcessorComments()
    {
        var script = ScriptInstance.LoadScriptFromFile(GetScriptFilename("PreProcessorComments.csx"));
        Assert.IsNotNull(script);
        Assert.IsTrue(script.Run());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ImportSecondFile()
    {
        var script = ScriptInstance.LoadScriptFromFile(GetScriptFilename("ImportSecondFile.csx"));
        Assert.IsNotNull(script);

        using (var output = new ConsoleOutput())
        {
            Assert.IsTrue(script.Run());
            Assert.AreEqual("Hello World to the other file", output.GetOutput());
        }
        Assert.IsNull(ScriptInstance.Current);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Undo()
    {
        Context.InitWithDefault();

        var asm = Context.Current.Document;

        // Create one body -> State 1
        var body1 = TestGeomGenerator.CreateBox().Body;
        asm.Add(body1);
        Context.Current.UndoHandler.Commit();
        var state1 = Serializer.Serialize(asm, new SerializationContext());

        // Run Script -> State 2
        var script = ScriptInstance.LoadScriptFromFile(GetScriptFilename("CreateBoxBody.csx"));
        Assert.IsNotNull(script);
        Assert.IsTrue(script.Run());
        Assert.IsTrue(Context.Current.UndoHandler.CanUndo);
        Assert.IsFalse(Context.Current.UndoHandler.CanRedo);

        // Undo -> State 1
        Context.Current.UndoHandler.DoUndo(1);
        Assert.IsTrue(Context.Current.UndoHandler.CanUndo);
        Assert.IsTrue(Context.Current.UndoHandler.CanRedo);
        var state1a = Serializer.Serialize(asm, new SerializationContext());

        // LastNameSuffix has changed, this is intended. Decrement it to match again in serialization string.
        state1a = state1a.Replace("LastNameSuffices:{\"Box\":2}", "LastNameSuffices:{\"Box\":1}");
        Assert.AreEqual(state1, state1a);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void VersionDefines()
    {
        ScriptCompiler.OverrideVersion(2.1f);
        using (var output = new ConsoleOutput())
        {
            var script = ScriptInstance.LoadScriptFromFile(GetScriptFilename("VersionDefines.csx"), true);
            Assert.IsNotNull(script);
            Assert.IsTrue(script.Run());
            Assert.AreEqual("-Version >= 2.0-", output.GetOutput());
        }

        ScriptCompiler.OverrideVersion(2.1f);
        using (var output = new ConsoleOutput())
        {
            var script = ScriptInstance.LoadScriptFromFile(GetScriptFilename("VersionDefines.csx"), true);
            Assert.IsNotNull(script);
            Assert.IsTrue(script.Run());
            Assert.AreEqual("-Version >= 2.0-", output.GetOutput());
        }

        ScriptCompiler.OverrideVersion(1.0f);
        using (var output = new ConsoleOutput())
        {
            var script = ScriptInstance.LoadScriptFromFile(GetScriptFilename("VersionDefines.csx"), true);
            Assert.IsNotNull(script);
            Assert.IsTrue(script.Run());
            Assert.AreEqual("-Version < 1.1-", output.GetOutput());
        }

        ScriptCompiler.OverrideVersion(1.1f);
        using (var output = new ConsoleOutput())
        {
            var script = ScriptInstance.LoadScriptFromFile(GetScriptFilename("VersionDefines.csx"), true);
            Assert.IsNotNull(script);
            Assert.IsTrue(script.Run());
            Assert.AreEqual("-Version Else-", output.GetOutput());
        }
    }

    //--------------------------------------------------------------------------------------------------

}