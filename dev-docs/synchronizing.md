Handling files

We keep track of every file + file data and assign a unique hash

{
  "files": {
    "fileID_1": { "path": "src/main.c", "hash": "abc123" },
    "fileID_2": { "path": "docs/requirements.md", "hash": "def456" }
  }
}


When user synchronized team member changes (sora start)

It pulls code from host url

You can specify if you want to work on the main source of truth (mainline code) or the stable version of the code. 

