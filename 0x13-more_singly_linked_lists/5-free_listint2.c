#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: double pointer to the head of the list
 *
 * Description: This function iterates through the list, freeing each node
 * and sets the head pointer to NULL after freeing all nodes.
 */
void free_listint2(listint_t **head)
{
    listint_t *temp; /* Temporary pointer for traversing and freeing nodes */

    if (head == NULL) /* Check if the head pointer is NULL */
        return;

    while (*head != NULL) /* Iterate through the list */
    {
        temp = (*head)->next; /* Store the next node */
        free(*head); /* Free the current node */
        *head = temp; /* Move to the next node */
    }

    *head = NULL; /* Set the head pointer to NULL */
}

