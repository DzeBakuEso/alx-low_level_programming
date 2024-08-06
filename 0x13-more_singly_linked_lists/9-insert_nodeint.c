#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to the pointer to the head of the list
 * @idx: Index of the list where the new node should be added
 * @n: Integer data for the new node
 *
 * Return: Address of the new node, or NULL if it failed or if the index is out of range
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *current;
    unsigned int i;

    /* Allocate memory for the new node and set its data */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL); /* Return NULL if memory allocation fails */
    new_node->n = n;

    /* If inserting at the head of the list */
    if (idx == 0)
    {
        new_node->next = *head; /* Set new node's next to current head */
        *head = new_node; /* Update head to new node */
        return (new_node); /* Return the new node */
    }

    /* Traverse the list to find the position just before the index */
    current = *head;
    for (i = 0; i < idx - 1; i++)
    {
        if (current == NULL)
        {
            free(new_node); /* Free the allocated memory if index is out of range */
            return (NULL); /* Return NULL if index is out of range */
        }
        current = current->next; /* Move to the next node */
    }

    /* Insert the new node at the given index */
    new_node->next = current->next; /* Set new node's next to the next node of current */
    current->next = new_node; /* Set current node's next to the new node */

    return (new_node); /* Return the new node */
}

