# Function Pointers Project

## Description
This project covers the implementation and usage of function pointers in C. Function pointers allow for dynamic function calls and can be passed as arguments to other functions, providing greater flexibility in your code.

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Code should use the Betty style, checked with `betty-style.pl` and `betty-doc.pl`
- No global variables allowed
- No more than 5 functions per file
- Only allowed C standard library functions are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc. is forbidden
- Allowed to use `_putchar`
- `_putchar.c` should not be pushed, it will be provided during evaluation
- Main.c files provided for testing are not to be pushed, as custom main.c files will be used during evaluation
- Prototypes of all functions and the prototype of the function `_putchar` should be included in a header file called `function_pointers.h`
- All header files should be include guarded

## Tasks

### 0. What's my name
Write a function that prints a name.

- **Prototype**: `void print_name(char *name, void (*f)(char *));`
- **Directory**: `0x0F-function_pointers`
- **File**: `0-print_name.c`

### 1. If you spend too much time thinking about a thing, you'll never get it done
Write a function that executes a function given as a parameter on each element of an array.

- **Prototype**: `void array_iterator(int *array, size_t size, void (*action)(int));`
- **Directory**: `0x0F-function_pointers`
- **File**: `1-array_iterator.c`

### 2. To hell with circumstances; I create opportunities
Write a function that searches for an integer.

- **Prototype**: `int int_index(int *array, int size, int (*cmp)(int));`
- **Directory**: `0x0F-function_pointers`
- **File**: `2-int_index.c`

### 3. A goal is not always meant to be reached, it often serves simply as something to aim at
Write a program that performs simple operations.

- **Directory**: `0x0F-function_pointers`
- **Files**: `3-main.c`, `3-op_functions.c`, `3-get_op_func.c`, `3-calc.h`

