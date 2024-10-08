# 0x18. C - Dynamic Libraries

## Overview

In this project, we explore dynamic libraries in the C programming language. Dynamic libraries allow us to create shared libraries, which can be loaded at runtime, offering more flexibility and reducing memory footprint. This project will cover the creation and usage of dynamic libraries, including the steps required to compile, link, and run programs with dynamic libraries.

## Learning Objectives

- What are dynamic libraries, and how to create one.
- The differences between dynamic and static libraries.
- How to use `nm`, `ldd`, and `ldconfig` commands.
- How to create and use dynamic libraries in C programs.
- Best practices when working with dynamic libraries in a UNIX environment.

## Requirements

- Editors: `vi`, `vim`, `emacs`
- OS: Ubuntu 20.04 LTS
- Language: C
- Compilers: GCC 4.8+
- Code style: Betty-style compliant
- Files should end with a new line.
- All dynamic libraries should be executable.
- Prototypes of all your functions and the `_putchar` function should be included in your `main.h` file.

---

## Tasks

### 0. A library is not a luxury but one of the necessities of life

**Description:**
Create a dynamic library called `libdynamic.so` that contains all the following functions:

```c
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

