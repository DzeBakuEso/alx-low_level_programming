#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n; /* Value of the node */
    struct listint_s *next; /* Pointer to the next node */
} listint_t;

size_t print_listint(const listint_t *h); /* Function prototype for printing the list */

size_t listint_len(const listint_t *h); /* Function prototype for getting the number of elements */

listint_t *add_nodeint(listint_t **head, const int n); /* Function prototype for adding a node */

listint_t *add_nodeint_end(listint_t **head, const int n); /* Function prototype for adding a node at the end */

#endif /* LISTS_H */

