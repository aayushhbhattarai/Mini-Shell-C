# Simple C Shell (Windows)

A lightweight command-line interpreter built in C. This project demonstrates core systems programming concepts on Windows.

## 🚀 Features
- **Dynamic Prompt:** Displays the current working directory using `_getcwd`.
- **Command Tokenization:** Parses user input into executable arguments using `strtok`.
- **Internal Commands:** Handles `cd` (Change Directory) and `exit` manually.
- **External Execution:** Launches system programs (like `notepad`, `ipconfig`, or `dir`) using `_spawnvp`.

## 🛠️ Concepts Learned
- **Memory Buffers:** Managing `char` arrays for user input.
- **Pointer Arrays:** Creating a argument list for process spawning.
- **Process Management:** Distinguishing between shell-builtin commands and external binaries.

## 💻 How to Run
1. Open a terminal (CMD or PowerShell).
2. Compile using GCC: `gcc main.c -o 67.exe`
3. Run it: `./67.exe`
