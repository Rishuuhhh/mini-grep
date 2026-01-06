# Mini Grep (C++)

Mini Grep is a lightweight command-line text search utility inspired by the Unix `grep` tool.
It searches for a given keyword in a text file and prints matching lines along with their line numbers and total match count.

---

## Status
Completed

---

## Features
- Case-insensitive keyword search
- Displays line numbers for matched lines
- Prints total number of matches
- Graceful handling of file and input errors
- Simple command-line interface

---

## Tech Stack
- **Language:** C++
- **Concepts Used:**
  - File handling using `ifstream`
  - Command-line argument parsing
  - String manipulation
  - Case-insensitive text processing
  - Error handling
- **Tools:** Git, GitHub

---

## Project Structure
```
mini-grep/
├── src/
│   └── main.cpp
├── data/
│   └── sample.txt
└── README.md
```

---

## Usage

### Compile
```bash
clang++ src/main.cpp -o minigrep
```

### Run
```bash
./minigrep <keyword> <filename>
```

### Example
```bash
./minigrep error sample.txt
```

---

## Learning Outcomes
- Built a real-world command-line utility in C++
- Improved understanding of file I/O and string processing
- Gained experience with CLI-based program design
- Practiced debugging and edge-case handling

---

## Future Improvements
- Support searching across multiple files
- Add command-line flags (`-i`, `-n`, `-c`)
- Regex-based pattern matching
- Recursive directory search

---

## Author
Rakshit Sharma