# LibraryTestCoverageExample
All of this works for Visual Studio 2019 Enterprise
##References:
- How to build static library: https://docs.microsoft.com/en-us/cpp/build/walkthrough-creating-and-using-a-static-library-cpp?view=msvc-160
- How to build dynamic library: https://docs.microsoft.com/en-us/cpp/build/walkthrough-creating-and-using-a-dynamic-link-library-cpp?view=msvc-160
- How to add boost unit test: https://docs.microsoft.com/en-us/visualstudio/test/how-to-use-boost-test-for-cpp?view=vs-2019#add-include-directives

To run code coverage using vstest in command line, first need to navigate to the git root

Command line option to run static library code coverage
```
"C:\Program Files (x86)\Microsoft Visual Studio\2019\Enterprise\Common7\IDE\CommonExtensions\Microsoft\TestWindow\vstest.console.exe" .\StaticExample\StaticMath\Debug\MathLibraryUnitTest.exe /TestAdapterPath:"C:\Program Files (x86)\Microsoft Visual Studio\2019\Enterprise" /Parallel /Enablecodecoverage
```

This works. Specifically, we can see that Add function is covered. 

Command line option to run dynamic library code coverage
```
"C:\Program Files (x86)\Microsoft Visual Studio\2019\Enterprise\Common7\IDE\CommonExtensions\Microsoft\TestWindow\vstest.console.exe" .\DLLExample\MathClient\Debug\MathLibraryUnitTest.exe /TestAdapterPath:"C:\Program Files (x86)\Microsoft Visual Studio\2019\Enterprise" /Parallel /Enablecodecoverage
```

This does not work because we could not find code coverage here for the MathLibrary. 
In essense, we cannot use the current vstest for BOOST unit test unless the related library is associated with the project using static library. 
