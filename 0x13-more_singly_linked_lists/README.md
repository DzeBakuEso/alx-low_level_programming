0x13. More Singly Linked Lists
This project covers advanced topics in singly linked lists, with a series of tasks designed to enhance your understanding and skills in managing linked lists in C.

Tasks
0. Print list
Description: Write a function that prints all the elements of a listint_t list.
Prototype: size_t print_listint(const listint_t *h);
Return: The number of nodes.
Note: You are allowed to use printf.
File: 0-print_listint.c
1. List length
Description: Write a function that returns the number of elements in a listint_t list.
Prototype: size_t listint_len(const listint_t *h);
File: 1-listint_len.c
2. Add node
Description: Write a function that adds a new node at the beginning of a listint_t list.
Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: The address of the new element, or NULL if it failed.
File: 2-add_nodeint.c
3. Add node at the end
Description: Write a function that adds a new node at the end of a listint_t list.
Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: The address of the new element, or NULL if it failed.
File: 3-add_nodeint_end.c
4. Free list
Description: Write a function that frees a listint_t list.
Prototype: void free_listint(listint_t *head);
File: 4-free_listint.c
5. Free
Description: Write a function that frees a listint_t list and sets the head to NULL.
Prototype: void free_listint2(listint_t **head);
File: 5-free_listint2.c
6. Pop
Description: Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
Prototype: int pop_listint(listint_t **head);
Return: The head node’s data (n). If the linked list is empty, return 0.
File: 6-pop_listint.c
