# 0x17. C - Doubly Linked Lists

This project focuses on implementing and working with **doubly linked lists** in C. The following are the tasks implemented along with descriptions of what each function does.

## Function List

### 0. Print List

- **Function Name:** `print_dlistint`
- **Description:** This function prints all the elements of a `dlistint_t` list.
- **Prototype:** `size_t print_dlistint(const dlistint_t *h);`
- **Return:** The number of nodes in the list.

### 1. List Length

- **Function Name:** `dlistint_len`
- **Description:** This function returns the number of elements in a `dlistint_t` list.
- **Prototype:** `size_t dlistint_len(const dlistint_t *h);`
- **Return:** The number of nodes.

### 2. Add Node at Beginning

- **Function Name:** `add_dnodeint`
- **Description:** This function adds a new node at the beginning of a `dlistint_t` list.
- **Prototype:** `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
- **Return:** The address of the new element or `NULL` if it fails.

### 3. Add Node at End

- **Function Name:** `add_dnodeint_end`
- **Description:** This function adds a new node at the end of a `dlistint_t` list.
- **Prototype:** `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
- **Return:** The address of the new element or `NULL` if it fails.

### 4. Free List

- **Function Name:** `free_dlistint`
- **Description:** This function frees a `dlistint_t` list.
- **Prototype:** `void free_dlistint(dlistint_t *head);`

### 5. Get Node at Index

- **Function Name:** `get_dnodeint_at_index`
- **Description:** This function returns the nth node of a `dlistint_t` list.
- **Prototype:** `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
- **Return:** The nth node of the list or `NULL` if the node does not exist.

### 6. Sum List

- **Function Name:** `sum_dlistint`
- **Description:** This function returns the sum of all the data (`n`) in a `dlistint_t` list.
- **Prototype:** `int sum_dlistint(dlistint_t *head);`
- **Return:** The sum of all the data (`n`).

### 7. Insert Node at Index

- **Function Name:** `insert_dnodeint_at_index`
- **Description:** This function inserts a new node at a given position.
- **Prototype:** `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
- **Return:** The address of the new node or `NULL` if it fails.

### 8. Delete Node at Index

- **Function Name:** `delete_dnodeint_at_index`
- **Description:** This function deletes the node at a given position in a `dlistint_t` list.
- **Prototype:** `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
- **Return:** `1` if it succeeds, `-1` if it fails.

