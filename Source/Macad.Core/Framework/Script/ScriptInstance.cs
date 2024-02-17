using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Microsoft.CodeAnalysis.Scripting;

namespace Macad.Core;

public sealed class ScriptInstance
{
    public static ScriptInstance LoadScriptFromFile(string filename, bool forceReload = false)
    {
        return LoadScriptFromFile(filename, ScriptContext.Default, forceReload);
    }

    //--------------------------------------------------------------------------------------------------

    public static ScriptInstance LoadScriptFromFile(string filename, ScriptContext contextInstance, bool forceReload=false)
    {
        if (!File.Exists(filename))
        {
            Messages.Error( "Script file does not exist: " + filename);
        }

        ScriptInstance scriptInstance;
        if (!forceReload)
        {
            scriptInstance = ScriptCache.Find(filename);
            if (scriptInstance != null)
                return scriptInstance;
        }

        scriptInstance = new ScriptInstance(filename, contextInstance);
        if(ScriptCompiler.Compile(scriptInstance))
        {
            return scriptInstance;
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public static ScriptInstance Current
    {
        get { return _RunningScripts.Any() ? _RunningScripts.Peek() : null; }
    }

    static readonly Stack<ScriptInstance> _RunningScripts = new Stack<ScriptInstance>();

    //--------------------------------------------------------------------------------------------------

    public string Name { get; }
    public string Path { get; }
    public ScriptContext ContextInstance { get; }

    //--------------------------------------------------------------------------------------------------

    ScriptRunner<object> _RunnerDelegate;

    //--------------------------------------------------------------------------------------------------

    ScriptInstance(string filename, ScriptContext contextInstance)
    {
        Name = System.IO.Path.GetFileName(filename);
        Path = System.IO.Path.GetFullPath(filename);
        ContextInstance = contextInstance;
        _Reset();
    }

    //--------------------------------------------------------------------------------------------------

    void _Reset()
    {
        _RunnerDelegate = null;
    }

    //--------------------------------------------------------------------------------------------------

    internal bool Init(ScriptRunner<object> runnerDelegate)
    {
        _Reset();

        _RunnerDelegate = runnerDelegate;

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public bool Run()
    {
        bool result = false;
        if (_RunnerDelegate == null)
            return false;

        _RunningScripts.Push(this);
        try
        {
            _RunnerDelegate(ContextInstance).Wait();
            result = true;
        }
        catch (Exception e)
        {
            Messages.Exception($"The executed script '{Name}' throwed an exception.", e);
        }
        finally
        {
        }
        _RunningScripts.Pop();

        // Only commit after the last script has ended.
        if(_RunningScripts.Count == 0)
            CoreContext.Current?.UndoHandler?.Commit();

        return result;
    }
}