#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;  /* Initialize node count to 0 */

    /* Iterate through the linked list */
    while (h != NULL)
    {
        /* Check if the string is NULL */
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");  /* Print (nil) if the string is NULL */
        }
        else
        {
            printf("[%u] %s\n", h->len, h->str);  /* Print the length and string */
        }

        h = h->next;  /* Move to the next node */
        count++;  /* Increment the node count */
    }

    return count;  /* Return the number of nodes */
}

