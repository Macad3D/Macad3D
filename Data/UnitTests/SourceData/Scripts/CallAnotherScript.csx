using System.IO;

var scriptfile = Path.Combine(Path.GetDirectoryName(ScriptInstance.Current.Path), "HelloWorld.csx");
var script = ScriptInstance.LoadScriptFromFile(scriptfile);
script.Run();
