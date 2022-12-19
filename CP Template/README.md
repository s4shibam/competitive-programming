## Competitive Programming Template / Code Snippet / Macro

- What is Code Snippets?\
  Code snippets are templates that make it easier to enter repeating code patterns, such as loops or conditional-statements.

Here, 2 type of snippet file has been uploaded.

- [CP-Template.cpp](https://github.com/s4shibam/Competitive-Programming/blob/master/CP%20Template/CP-Template.cpp) --> Can be directly copy-pasted to a \*.cpp file
- [CP-Template.json](https://github.com/s4shibam/Competitive-Programming/blob/master/CP%20Template/CP-Template.json) --> Can be used as a code snippet

### How to create User Snippet/Startup Template in VS Code?

```
1. Open VS Code and go to:
    File > Preferences > Configure User Snippets
2. Click on New Snippets
3. Type cp.json ('cp' is the name of snippet)
4. Delete all the default code
5. Paste the given json code ["CP-Template.json" File]
```

### How to use User Snippet/Startup template in a C++ file?

```
1. Create (name).cpp file
2. Type the Snippet Trigger "!cp" (Look at "prefix" attribute in 4th line of the given json file)
3. Press tab or enter

** Note: The default prefix is set as "!cp", can be changed as per need.
```
