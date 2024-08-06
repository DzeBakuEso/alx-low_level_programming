#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
    size_t count = 0; /* Variable to count the number of elements */

    while (h != NULL) /* Loop through the list */
    {
        count++; /* Increment the count */
        h = h->next; /* Move to the next node */
    }
    return (count); /* Return the total number of elements */
}

