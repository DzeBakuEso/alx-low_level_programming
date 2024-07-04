# ALX Low Level Programming - Pointers, Arrays, and Strings

This repository contains solutions to various tasks focusing on pointers, arrays, and strings in C programming language.

## Tasks Overview

### 0. strcat

Function `_strcat` appends the content of the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte. Returns a pointer to the resulting string `dest`.

### 1. strncat

Function `_strncat` is similar to `_strcat`, but appends at most `n` bytes from `src` to `dest`. `src` does not need to be null-terminated if it contains `n` or more bytes. Returns a pointer to the resulting string `dest`.

### 2. strncpy

Function `_strncpy` copies `n` bytes from `src` to `dest`. If `src` is less than `n` bytes long, the remainder of `dest` is filled with `\0` bytes. Returns a pointer to `dest`.

### 3. strcmp

Function `_strcmp` compares two strings `s1` and `s2`. It returns an integer less than, equal to, or greater than zero if `s1` is found, respectively, to be less than, to match, or be greater than `s2`.

### 4. reverse_array

Function `reverse_array` reverses the elements of an array of integers `a` with `n` elements.

### 5. string_toupper

Function `string_toupper` changes all lowercase letters in a string to uppercase.

### 6. cap_string

Function `cap_string` capitalizes all words of a string based on specified separators.

### 7. leet

Function `leet` encodes a string into "1337" text by replacing certain letters with numbers as follows:
- 'a' or 'A' -> '4'
- 'e' or 'E' -> '3'
- 'o' or 'O' -> '0'
- 't' or 'T' -> '7'
- 'l' or 'L' -> '1'

## Compilation

Each task has an associated main file to test the function. To compile, use the following format:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main.c FILENAME.c -o OUTPUT

