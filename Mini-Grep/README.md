# Mini Grep (C++)

A lightweight command-line tool inspired by Unix `grep`, built in C++.  
It searches for a keyword inside a text file and prints matching lines along with line numbers and total match count.

---

## Features
- Case-insensitive keyword search
- Displays line numbers of matching lines
- Prints total number of matches
- Handles file errors gracefully
- Simple and clean CLI interface

---

## Usage

### Compile
```bash
clang++ src/minigrep.cpp -o minigrep