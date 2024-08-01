#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
    size_t count = 0;  /* Initialize the counter to zero */

    /* Traverse the linked list */
    while (h != NULL)  /* Continue looping while the current node is not NULL */
    {
        count++;  /* Increment the counter for each node */
        h = h->next;  /* Move to the next node in the list */
    }

    return count;  /* Return the total count of nodes */
}

