#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
    size_t count = 0; /* Variable to count the number of nodes */

    while (h != NULL) /* Loop through the list */
    {
        printf("%d\n", h->n); /* Print the value of the current node */
        h = h->next; /* Move to the next node */
        count++; /* Increment the node count */
    }
    return (count); /* Return the total number of nodes */
}

