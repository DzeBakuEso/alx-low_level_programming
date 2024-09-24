#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> /* For size_t */

/* Definition of the listint_t structure */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* Function prototypes */

/* Function to print all the elements of a listint_t list */
size_t print_listint(const listint_t *h);

/* Function to add a new node at the end of a listint_t list */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* Function to free a listint_t list */
void free_listint2(listint_t **head);

/* Function to delete the node at a specific index in a listint_t list */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/* Function to insert a new node at a specific index in a listint_t list */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/* Function to calculate the sum of all the elements of a listint_t list */
int sum_listint(listint_t *head);

/* Function to get the node at a specific index in a listint_t list */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* Function to find the last node in a listint_t list */
listint_t *find_last_node(listint_t *head);

#endif /* LISTS_H */

