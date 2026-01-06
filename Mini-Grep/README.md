# Mini Grep (C++)

Mini Grep is a lightweight command-line text search utility inspired by the Unix `grep` command.  
It searches for a given keyword in a text file and prints all matching lines along with their line numbers and the total number of matches.

---

## Features
- Case-insensitive keyword search
- Displays line numbers of matching lines
- Prints total number of matches
- Handles file opening errors gracefully
- Simple and clean CLI-based interface

---

## Tech Stack
- **Language:** C++
- **Concepts Used:**
  - File handling using `ifstream`
  - Command-line argument parsing
  - String manipulation
  - Case-insensitive text processing
  - Error handling

---

## Project Structure

mini-grep/
│── src/
│   └── minigrep.cpp
|── sample.txt
│── README.md
---

## Usage

### Compile
```bash
clang++ src/minigrep.cpp -o minigrep
./minigrep <keyword> <filename>
```
## Example
``` bash
./minigrep error sample.txt
```
# Output
```bash
sample.txt:2: this is an error
sample.txt:4: error occurred again
Total matches: 2
```




