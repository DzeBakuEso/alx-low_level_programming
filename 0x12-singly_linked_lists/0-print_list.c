#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    /* Iterate through the linked list */
    while (h != NULL)
    {
        /* Check if the string is NULL */
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%u] %s\n", h->len, h->str);
        }
        /* Move to the next node */
        h = h->next;
        /* Increment the node count */
        count++;
    }

    /* Return the number of nodes */
    return count;
}

