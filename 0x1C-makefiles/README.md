# 0x1C. C - Makefiles

## Description
This project focuses on understanding **Makefiles**, a tool used for managing and automating the build process of software projects. You will learn the basics of `make`, how to create rules, use variables, and employ common Makefile techniques for efficient compilation and project management.

---

## Learning Objectives
By the end of this project, you should be able to explain the following without external resources:

### General
- What are `make` and Makefiles?
- When, why, and how to use Makefiles.
- The concept of rules and how to set and use them.
- The difference between explicit and implicit rules.
- Common and useful rules in Makefiles.
- What variables are and how to set and use them in Makefiles.

---

## Resources
### Read or Watch:
- [What is a Makefile and how does it work](https://www.makefileexample.com)
- [Installing the make utility](https://www.gnu.org/software/make/)
- [GNU Make Official Documentation](https://www.gnu.org/software/make/manual/make.html)
- [More about Makefile](https://makefileguide.com)

---

## Requirements
- **Editors**: `vi`, `vim`, or `emacs`.
- **Operating System**: Ubuntu 20.04 LTS.
- **GCC Version**: 9.3.0.
- **Make Version**: GNU Make 4.2.1.
- All files must end with a new line.
- Include a `README.md` file at the root of the project folder.

---

## Tasks
### Task 0: `make -f 0-Makefile`
Create your first Makefile:
- **Executable name**: `school`.
- **Rules**: `all` (builds the executable).
- **Variables**: None.

### Task 1: `make -f 1-Makefile`
Enhance the Makefile with variables:
- **Executable name**: `school`.
- **Rules**: `all`.
- **Variables**: 
  - `CC`: Compiler to use.
  - `SRC`: Source `.c` files.

### Task 2: `make -f 2-Makefile`
Add flexibility and optimization:
- **Executable name**: `school`.
- **Rules**: `all`.
- **Variables**:
  - `CC`: Compiler to use.
  - `SRC`: Source `.c` files.
  - `OBJ`: Object `.o` files.
  - `NAME`: Name of the executable.
- Only updated source files should be recompiled.

### Task 3: `make -f 3-Makefile`
Introduce cleaning rules:
- **Executable name**: `school`.
- **Rules**: 
  - `all`: Builds the executable.
  - `clean`: Removes Emacs/Vim temporary files and the executable.
  - `oclean`: Removes object files.
  - `fclean`: Removes all temporary, executable, and object files.
  - `re`: Forces a full recompilation.
- **Variables**:
  - `CC`, `SRC`, `OBJ`, `NAME`, `RM`.

### Task 4: A Complete Makefile
Add compiler flags for better code quality:
- **Executable name**: `school`.
- **Rules**: `all`, `clean`, `fclean`, `oclean`, `re`.
- **Variables**: 
  - `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS` (`-Wall -Werror -Wextra -pedantic`).
- Only updated files should be recompiled.
- Cleaning rules should never fail.

### Task 5: Island Perimeter (Python)
Write a function `def island_perimeter(grid):` that calculates the perimeter of an island in a grid:
- **Input**: A list of lists representing a rectangular grid.
- **Output**: The perimeter of the island (integer).
- **Constraints**:
  - `0`: Water zone.
  - `1`: Land zone.
  - Grid is completely surrounded by water, and there are no lakes.
- **Requirements**:
  - First line of the script: `#!/usr/bin/python3`.
  - No external modules allowed.
  - Function and module must be documented.

---

## Usage
### Compilation
To compile the program using Makefiles:
```bash
make -f <Makefile>

