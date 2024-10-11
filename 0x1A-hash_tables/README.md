# 0x1A. Hash Tables

## Description
This project involves creating and working with **hash tables**, a fundamental data structure used to store key-value pairs. Hash tables allow for efficient lookups, insertions, and deletions. In this project, you will learn how hash tables work and implement them in C. You will also learn how Python dictionaries, which use hash tables, function under the hood.

## Learning Objectives
By the end of this project, you should be able to explain the following concepts to anyone, without needing to look them up:
- What is a hash function
- What makes a good hash function
- What is a hash table, how it works, and how to use it
- What is a collision in the context of hash tables and how to handle collisions
- The advantages and drawbacks of using hash tables
- Common use cases of hash tables

## Resources
Here are some key resources you can read or watch to better understand hash tables:
- [What is a HashTable Data Structure - Introduction to Hash Tables, Part 0](https://example.com)
- [Hash function](https://example.com)
- [Hash table](https://example.com)
- [All about hash tables](https://example.com)
- [Why hash tables and not arrays](https://example.com)

## Requirements
### General
- All files must be compiled on **Ubuntu 20.04 LTS** using `gcc` with the flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Your code should follow the **Betty style**, which will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than **5 functions per file**
- You are allowed to use the C standard library
- The prototypes of all functions should be included in a header file called `hash_tables.h`
- All header files should be **include guarded**
- All tests must pass and should be developed collaboratively as part of the process

### Data Structures
You will be using the following data structures throughout this project:

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 *        The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 *        Each cell of this array is a pointer to the first node of a linked list,
 *        because we want our HashTable to use Chaining collision handling
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

