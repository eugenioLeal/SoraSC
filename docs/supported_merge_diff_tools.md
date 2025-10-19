

- Supported diff/mmerge tools
  - [x] Vim 
  - [x] Neovim
  - [x] Meld
  - [x] Beyond Compare
  - [x] Visual Studio
  - [ ] Visual studio code
  - [ ] Intellij



Example using meld (merge & diff tool)
Take into account that this command is just a convenience command and is not necessary. Just use 

sora incorporate-changes-from main_john_doe.c --with-tool meld


## Visual Studio

You can invoke it directly from Visual Studio Command Prompt:

devenv /diff file1.txt file2.txt

This opens the built-in diff viewer.

For merges (3-way):
devenv /merge base.txt theirs.txt mine.txt output.txt

Works with any plain files — no Git required!

Or through the GUI:
	•	File → Compare Files…
	•	Select any two local files.
	•	Then click “Merge” if both files have edits.


## Vim Neovim
nvim -d base.txt ours.txt theirs.txt

You’ll get three splits; you can choose what to copy where using the same do / dp commands.

⸻

🪄 Quality of Life Tips
	•	:set diffopt+=iwhite → ignore whitespace changes.
	•	:set diffopt+=vertical → vertical side-by-side diff.
	•	:set scrollbind → scroll all panes together.
	•	Use :windo diffupdate after edits to recompute all panes.

+----------------------------+------------------------+
| You want to…               | Command                |
+----------------------------+------------------------+
| Compare 2 files            | nvim -d file1 file2    |
| Jump to next difference    | ]c                     |
| Jump to previous difference| [c                     |
| Copy change from other     | do                     |
| Copy change to other       | dp                     |
| Update diff highlighting   | :diffupdate            |
| Turn off diff mode         | :diffoff               |
+----------------------------+------------------------+
