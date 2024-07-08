# Project: Custom Standard Library Functions

This project implements custom versions of standard library functions in C, adhering to specific coding standards and guidelines.

## Project Overview

This repository contains custom implementations of various standard C library functions. Each function is implemented in a separate C file and tested using a main file named after the function's name.

## Project Structure

The project is organized as follows:

- `README.md`: This file, providing an overview of the project and its contents.
- `0-main.c`, `1-main.c`, ..., `8-main.c`: Test files for each custom function implementation.
- `main.h`: Header file containing prototypes for all custom functions and any necessary definitions.
- Custom function files: `0-memset.c`, `1-memcpy.c`, ..., `8-strstr.c`: Files containing implementations of custom functions.

## Custom Functions Implemented

1. **memset**
   - Custom implementation of the `memset` function.
   - Prototype: `char *_memset(char *s, char b, unsigned int n);`

2. **memcpy**
   - Custom implementation of the `memcpy` function.
   - Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`

3. **strchr**
   - Custom implementation of the `strchr` function.
   - Prototype: `char *_strchr(char *s, char c);`

4. **strspn**
   - Custom implementation of the `strspn` function.
   - Prototype: `unsigned int _strspn(char *s, char *accept);`

5. **strpbrk**
   - Custom implementation of the `strpbrk` function.
   - Prototype: `char *_strpbrk(char *s, char *accept);`

6. **strstr**
   - Custom implementation of the `strstr` function.
   - Prototype: `char *_strstr(char *haystack, char *needle);`

7. **Chess is mental torture**
   - Custom implementation of a function related to chess (details specific to the function).

8. **The line of life is a ragged diagonal between duty and desire**
   - Custom implementation of a function related to life (details specific to the function).

9. **I'm like a prisoner of war; I have no information**
   - Custom implementation of a function related to war (details specific to the function).

## Compilation

All files should be compiled on Ubuntu 20.04 LTS using `gcc` with the following options: `-Wall -Werror -Wextra -pedantic -std=gnu89`.

## Coding Standards

- Adherence to the Betty style for code formatting and commenting.
- No global variables.
- Prototypes for all functions and `_putchar` should be included in `main.h`.
- Detailed comments for each line of code.
- Files should end with a newline.

## Usage

Each function can be tested by compiling its corresponding `main.c` file along with its implementation file. For example:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-memset.c -o 0-memset
./0-memset

