#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a specific index in a linked list
 * @head: Pointer to the head of the linked list
 * @index: The index of the node to retrieve, starting at 0
 *
 * Return: The node at the specified index, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int current_index = 0; /* Initialize current index to 0 */
    listint_t *current_node = head; /* Initialize current node to head of the list */

    /* Traverse the list until the specified index is reached or end of list */
    while (current_node != NULL)
    {
        if (current_index == index)
        {
            return current_node; /* Return the node if index matches */
        }
        current_node = current_node->next; /* Move to the next node */
        current_index++; /* Increment the index */
    }

    return NULL; /* Return NULL if the index is out of bounds */
}

