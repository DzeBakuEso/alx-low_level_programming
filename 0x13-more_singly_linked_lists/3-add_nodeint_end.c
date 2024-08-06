#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to the head of the list
 * @n: integer to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node; /* Declare a pointer for the new node */
    listint_t *temp; /* Temporary pointer for traversing the list */

    new_node = malloc(sizeof(listint_t)); /* Allocate memory for the new node */
    if (new_node == NULL) /* Check if memory allocation failed */
        return (NULL); /* Return NULL if allocation failed */

    new_node->n = n; /* Assign the value to the new node */
    new_node->next = NULL; /* Set the next pointer of the new node to NULL */

    if (*head == NULL) /* Check if the list is empty */
    {
        *head = new_node; /* Set the head to the new node if the list is empty */
    }
    else
    {
        temp = *head; /* Start from the head of the list */
        while (temp->next != NULL) /* Traverse the list until the end */
            temp = temp->next; /* Move to the next node */
        temp->next = new_node; /* Set the next pointer of the last node to the new node */
    }

    return (new_node); /* Return the address of the new node */
}

