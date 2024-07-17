Project: Dynamic Memory Allocation in C
This project involves several tasks to practice and implement dynamic memory allocation in C using malloc and free. Each task focuses on different aspects of dynamic memory management, such as creating arrays, duplicating strings, concatenating strings, and working with 2D arrays. The project adheres to specific coding standards and requirements as outlined below.

General Requirements
Allowed editors: vi, vim, emacs
Compilation on Ubuntu 20.04 LTS using gcc with options: -Wall -Werror -Wextra -pedantic -std=gnu89
All files must end with a new line
A README.md file is mandatory at the root of the project folder
Code should use the Betty style (checked using betty-style.pl and betty-doc.pl)
No global variables allowed
No more than 5 functions per file
Allowed standard library functions: malloc and free (others like printf, puts, calloc, realloc are forbidden)
Use of _putchar is allowed
Do not push _putchar.c (it will not be taken into account)
Function prototypes and _putchar prototype must be included in main.h
Push the main.h header file
Tasks
Task 0: Float like a butterfly, sting like a bee
Objective: Write a function that creates an array of chars and initializes it with a specific char.
Prototype: char *create_array(unsigned int size, char c);
Details:
Returns NULL if size is 0
Returns a pointer to the array, or NULL if it fails
Task 1: The woman who has no imagination has no wings
Objective: Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
Prototype: char *_strdup(char *str);
Details:
Returns NULL if str is NULL
On success, returns a pointer to the duplicated string
Returns NULL if insufficient memory was available
Task 2: He who is not courageous enough to take risks will accomplish nothing in life
Objective: Write a function that concatenates two strings.
Prototype: char *str_concat(char *s1, char *s2);
Details:
Returns a pointer to a newly allocated space in memory containing the contents of s1, followed by s2, and null terminated
Treats NULL as an empty string
Returns NULL on failure
Task 3: If you even dream of beating me you'd better wake up and apologize
Objective: Write a function that returns a pointer to a 2D array of integers.
Prototype: int **alloc_grid(int width, int height);
Details:
Initializes each element of the grid to 0
Returns NULL on failure
Returns NULL if width or height is 0 or negative
Task 4: It's not bragging if you can back it up
Objective: Write a function that frees a 2D grid previously created by your alloc_grid function.
Prototype: `void free_grid(int **grid, int
