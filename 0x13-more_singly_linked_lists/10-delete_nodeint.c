#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * @head: Pointer to the pointer to the head of the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *temp;
    unsigned int i;

    /* Check if the list is empty or head is NULL */
    if (*head == NULL)
        return (-1); /* Return -1 if the list is empty */

    /* If deleting the head node */
    if (index == 0)
    {
        temp = *head; /* Store current head node in temp */
        *head = (*head)->next; /* Update head to next node */
        free(temp); /* Free memory of the old head node */
        return (1); /* Return 1 to indicate success */
    }

    /* Traverse the list to find the node just before the index */
    current = *head;
    for (i = 0; i < index - 1; i++)
    {
        if (current == NULL || current->next == NULL)
            return (-1); /* Return -1 if index is out of range */
        current = current->next; /* Move to the next node */
    }

    /* Delete the node at the given index */
    temp = current->next; /* Store the node to be deleted in temp */
    current->next = temp->next; /* Bypass the node to be deleted */
    free(temp); /* Free memory of the deleted node */

    return (1); /* Return 1 to indicate success */
}

