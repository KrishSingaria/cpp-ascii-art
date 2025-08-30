# C++ ASCII Art Generator

A simple, cross-platform command-line tool that converts images into ASCII art directly in your terminal.

-----

## Dependencies

  * A C++ compiler (like `g++` or `clang++`).
  * The `stb_image.h` single-header library, which must be in the same directory as `main.cpp`.

-----

## How to Use

### 1\. Compilation

Navigate to the project directory in your terminal and compile the source code. The recommended command is:

```bash
g++ main.cpp -o ascii
```

This command creates an executable file.

  * On **Windows**, it will be named `ascii.exe`.
  * On **Linux and macOS**, it will be named `ascii`.

-----

### 2\. Running the Program

Run the program from your terminal, passing the path to an image as a command-line argument. Both **relative** (e.g., `../images/pic.png`) and **absolute/full** paths are supported.

#### On Windows

Use `ascii.exe` and Windows-style paths, which typically use backslashes `\`. If the path contains spaces, enclose it in double quotes.

```bash
# Using a relative path
.\ascii.exe images\my-photo.jpg

# Using an absolute path with spaces
.\ascii.exe "C:\Users\Your Name\Pictures\vacation.png"
```

#### On Linux and macOS

Use `./ascii` and Unix-style paths, which use forward slashes `/`.

```bash
# Using a relative path
./ascii images/my-photo.jpg

# Using an absolute path
./ascii /home/user/Pictures/vacation.png
```