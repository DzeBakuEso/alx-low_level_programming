#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
 *
 * Description: This function frees all nodes in a singly linked list,
 * releasing the memory allocated for each node.
 */
void free_listint(listint_t *head)
{
    listint_t *temp; /* Temporary pointer for traversing and freeing nodes */

    while (head != NULL) /* Iterate through the list */
    {
        temp = head->next; /* Store the next node */
        free(head); /* Free the current node */
        head = temp; /* Move to the next node */
    }
}

