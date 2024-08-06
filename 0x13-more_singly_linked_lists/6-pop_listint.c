#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head of the list
 *
 * Return: the data (n) of the deleted node, or 0 if the list is empty
 *
 * Description: This function removes the head node from the list and returns
 * its data. If the list is empty, it returns 0. The head pointer is updated
 * to point to the next node in the list.
 */
int pop_listint(listint_t **head)
{
    listint_t *temp; /* Temporary pointer for the head node */
    int data; /* Data of the node to be deleted */

    if (head == NULL || *head == NULL) /* Check if the head pointer or the list is NULL */
        return (0);

    temp = *head; /* Store the current head node */
    data = temp->n; /* Get the data from the head node */
    *head = (*head)->next; /* Update head to the next node */
    free(temp); /* Free the memory of the old head node */

    return (data); /* Return the data of the deleted node */
}

