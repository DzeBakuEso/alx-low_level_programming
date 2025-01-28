# 0x1E. C - Search Algorithms

## Description
This project focuses on implementing and understanding search algorithms in C. The primary algorithms covered are **Linear Search** and **Binary Search**. The project also includes tasks related to analyzing the time and space complexity of these algorithms.

## Learning Objectives
By the end of this project, you should be able to explain the following concepts without the help of Google:
- What is a search algorithm?
- What is a linear search?
- What is a binary search?
- How to choose the best search algorithm depending on your needs.

## Resources
- [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
- [Space complexity](https://en.wikipedia.org/wiki/Space_complexity)
- [Search Algorithms video playlist](https://www.youtube.com/playlist?list=PL2_aWCzGMAwI9HK8YPVBjElbLbI3ufctn)

## Requirements
### General
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the following flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Code should use the Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- No global variables allowed
- No more than 5 functions per file
- Only the `printf` function from the standard library is allowed. Functions like `strdup`, `malloc`, etc., are forbidden.
- Prototypes of all functions should be included in a header file called `search_algos.h`
- Header files should be include guarded

## Tasks
### 0. Linear Search
Write a function that searches for a value in an array of integers using the Linear Search algorithm.

**Prototype:**
```c
int linear_search(int *array, size_t size, int value);

Author:Dzeble Kwame
