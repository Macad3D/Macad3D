using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Xml.Linq;

namespace Macad.Build.Xaml
{
    /*
    based on RESMERGER by ERGOSIGN, released under the MIT license.

    The MIT License (MIT)

    Copyright (c) 2013 - ERGOSIGN http://www.ergosign.de

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
    THE SOFTWARE.
    */

    public static class XamlResMerger
    {
        /***************************************************************/

        /// <summary>
        /// <para>
        /// The class Data represents a container for Documents and their DependencyCount
        /// </para>
        /// </summary>
        class Data
        {
            public XDocument Document { get; set; }
            public int DependencyCount { get; set; }

            public Data(XDocument document, int dependencyCount)
            {
                Document = document;
                DependencyCount = dependencyCount;
            }
        }

        /***************************************************************/

        /// <summary>
        /// save all resources into one big resource dictionary respecting the dependencies to increase performance
        /// </summary>
        /// <param name="projectPath">project path (C:/..)</param>
        /// <param name="relativeSourceFilePath">relative source file path (/LookAndFeel.xaml)</param>
        /// <param name="dependencyFilePath"></param>
        public static XDocument MergeResources(string projectPath, string relativeSourceFilePath, string dependencyFilePath)
        {
	        var sourceFilePath = Path.Combine(projectPath, relativeSourceFilePath);

	        // load source doc
	        var sourceDoc = XDocument.Load(sourceFilePath);

	        // get default namespace for doc creation and filtering
	        var defaultNameSpace = sourceDoc.Root.GetDefaultNamespace();

	        // get res dict string
	        var resDictString = sourceDoc.Root.Name.LocalName;

	        // create output doc
	        var outputDoc = XamlProcessor.CreateEmptyResourceDictionary();

	        // create documents
	        var documents = new Dictionary<string, Data>();
	        
	        // add elements
	        if(!_PrepareDocuments(ref documents, projectPath, relativeSourceFilePath))
		        return null;

	        // add merged resource dictionaries
	        var merged = new XElement(defaultNameSpace + resDictString + ".MergedDictionaries");
	        foreach (var source in documents.Where(kvp => kvp.Value.Document == null))
	        {
		        merged.Add(new XElement(defaultNameSpace + resDictString, new XAttribute("Source", source.Key)));
	        }
	        outputDoc.Root.Add(merged);

	        // add elements (ordered by dependency count)
	        var dependencyList = new List<string>();
	        foreach (var item in documents.OrderByDescending(item => item.Value.DependencyCount))
	        {
		        if (item.Value.Document == null)
			        continue;

		        string relativeName = item.Key;
		        if(relativeName.StartsWith(projectPath))
		        {
			        relativeName = relativeName.Substring(projectPath.Length);
		        }

		        // add attributes
		        foreach (var attribute in item.Value.Document.Root.Attributes())
			        outputDoc.Root.SetAttributeValue(attribute.Name, attribute.Value);

		        // add elements
		        outputDoc.Root.Add(new XComment("region " + relativeName));
		        outputDoc.Root.Add(item.Value.Document.Root.Elements().Where(e => !e.Name.LocalName.StartsWith(resDictString)));
		        outputDoc.Root.Add(new XComment("endregion"));

		        // add to dependency list
		        dependencyList.Add(relativeName);
	        }
			
            // save dependency list
            var depsFilePath = Path.Combine(projectPath, dependencyFilePath);
            if(!string.IsNullOrEmpty(depsFilePath))
            {
                Directory.CreateDirectory(Path.GetDirectoryName(depsFilePath));
                File.WriteAllLines(depsFilePath, dependencyList);
            }

	        return outputDoc;
        }

        //--------------------------------------------------------------------------------------------------

                
        /// <summary>
        /// Get a collection of resource dictionary source paths respecting the dependencies 
        /// </summary>
        /// <param name="documents">output document collection</param>
        /// <param name="projectPath">project path</param>
        /// <param name="relativeSourceFilePath">relative source file path</param>
        /// <param name="firstTime">first time, is LookAndFeel?</param>
        /// <param name="parentDependencyCount">dependency count</param>
        static bool _PrepareDocuments(ref Dictionary<string, Data> documents, string projectPath, string relativeSourceFilePath, bool firstTime = true, int parentDependencyCount = 0)
        {
	        // Check if we have a absolute reference, maybe to another assembly
	        if (relativeSourceFilePath.StartsWith("pack://"))
	        {
		        documents.Add(relativeSourceFilePath, new Data(null, 1));
		        return true;
	        }

	        // load current doc
	        var absoluteSourceFilePath = Path.GetFullPath(Path.Combine(projectPath, relativeSourceFilePath));

	        // load the doc
	        var doc = XDocument.Load(absoluteSourceFilePath);

	        // get the corresponding res dict name
	        var resDictString = doc.Root.Name.LocalName;

	        // get default namespace
	        var defaultNameSpace = doc.Root.GetDefaultNamespace();

	        // if key already added increase dependency count else add item with dependency count set to 0
	        if (documents.ContainsKey(absoluteSourceFilePath))
		        documents[absoluteSourceFilePath].DependencyCount = Math.Max(documents[absoluteSourceFilePath].DependencyCount + 1, parentDependencyCount + 1);
	        else
		        documents.Add(absoluteSourceFilePath, new Data(doc, firstTime ? -1 : parentDependencyCount + 1));

	        // call PrepareDocuments() for each merged dictionary
	        foreach (var dict in doc.Root.Descendants(defaultNameSpace + resDictString))
	        {
		        if(!dict.HasAttributes)
			        continue;

		        if(!_PrepareDocuments(ref documents, Path.GetDirectoryName(absoluteSourceFilePath), dict.Attribute("Source").Value /*.Replace("/" + projectName + ";component/", string.Empty)*/, false, documents[absoluteSourceFilePath].DependencyCount))
			        return false;
	        }

	        return true;
        }
    }
}