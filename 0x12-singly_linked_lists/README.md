# Singly Linked Lists

This repository contains tasks related to singly linked lists in C. Each task involves creating and manipulating singly linked lists with various functions.

## 0. Print List

**Objective:**  
Write a function that prints all the elements of a `list_t` list.

**Function Prototype:**  
`size_t print_list(const list_t *h);`

**Description:**  
- The function should return the number of nodes in the list.
- If the string (`str`) in a node is `NULL`, print `[0] (nil)`.
- For other nodes, print `[len] str`, where `len` is the length of the string.

**File:** `0-print_list.c`

**Test File:** `0-main.c`

## 1. List Length

**Objective:**  
Write a function that returns the number of elements in a `list_t` list.

**Function Prototype:**  
`size_t list_len(const list_t *h);`

**Description:**  
- The function should count and return the number of nodes in the list.

**File:** `1-list_len.c`

**Test File:** `1-main.c`

## 2. Add Node

**Objective:**  
Write a function that adds a new node at the beginning of a `list_t` list.

**Function Prototype:**  
`list_t *add_node(list_t **head, const char *str);`

**Description:**  
- The function should return the address of the new element, or `NULL` if it fails.
- The string (`str`) needs to be duplicated in the new node.

**File:** `2-add_node.c`

**Test File:** `2-main.c`

## 3. Add Node at the End

**Objective:**  
Write a function that adds a new node at the end of a `list_t` list.

**Function Prototype:**  
`list_t *add_node_end(list_t **head, const char *str);`

**Description:**  
- The function should return the address of the new element, or `NULL` if it fails.
- The string (`str`) needs to be duplicated in the new node.

**File:** `3-add_node_end.c`

**Test File:** `3-main.c`

## 4. Free List

**Objective:**  
Write a function that frees a `list_t` list.

**Function Prototype:**  
`void free_list(list_t *head);`

**Description:**  
- The function should deallocate all the memory used by the list nodes.

**File:** `4-free_list.c`

**Test File:** `4-main.c`

## Repository

- **GitHub Repository:** [alx-low_level_programming](https://github.com/your-repo/alx-low_level_programming)
- **Directory:** `0x12-singly_linked_lists`

## Requirements

- **Allowed Editors:** vi, vim, emacs
- **Compiling:** Use `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Files should end with a newline.**
- **Follow Betty style.**

---

Feel free to adjust the repository URL or directory name as needed.

