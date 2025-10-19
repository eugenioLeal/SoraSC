


Example file conflict/collision of simple project:

project/
├── README.md
├── build.sh
├── main.txt
└── lib.h


If conflicts ocurr then files will be appended with team member name.
Your own files should not change name

John Doe and Jane smith modified the main.txt file

project/
├── README.md
├── build.sh
├── main___john_doe.txt
├── main___jane_smith.txt
├── main.txt
└── lib.h

You can keep working/running/debugging on you main.txt file without issues.

You incorporate you team member changes with your preferred merge/diff tool or by hand.

(Optional) For ease of use we privided commands/documentation for opening merges with your [favorite merge/diff tool](supported_merge_diff_tools.md)

This workflow will also apply to any file type unless specified in .sora_ignore file

## Directory changes

Example directory moving and renaming

project/
├── README.md
├── docs/
│   └── requirements.md
├── src/
│   └── main.c
└── assets/
    ├── logo.png
    └── font.woff


John Doe modifies the folders to a more nested structure (add logos and fonts folder)
John Doe modifies the main.c file to use the new paths and also change how their loaded.

project/
├── README.md
├── docs/
│   └── requirements.md
├── src/
│   └── main.c
└── assets/
    ├── logos/
    │   └── logo.png
    └── fonts/
        └── font.woff


When you synchronize sora automatically updates your path names in your working main.c file.
All of John Doe's other changes to main will collide as usual

project/
├── README.md
├── docs/
│   └── requirements.md
├── src/
│   ├── main___john_doe.c/
│   └── main.c
└── assets/
    ├── logos/
    │   └── logo.png
    └── fonts/
        └── font.woff


