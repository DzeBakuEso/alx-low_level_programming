#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to the head of the list
 * @n: integer to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node; /* Declare a pointer for the new node */

    new_node = malloc(sizeof(listint_t)); /* Allocate memory for the new node */
    if (new_node == NULL) /* Check if memory allocation failed */
        return (NULL); /* Return NULL if allocation failed */

    new_node->n = n; /* Assign the value to the new node */
    new_node->next = *head; /* Link the new node to the head of the list */
    *head = new_node; /* Update the head to point to the new node */

    return (new_node); /* Return the address of the new node */
}

