#include <stdlib.h>  /** For malloc */
#include "lists.h"  /** Include the header file with the prototype */

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A double pointer to the head of the list.
 * @n: The value to be added in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;  /** Pointer to the new node */

	/** Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);  /** Return NULL if malloc fails */

	new_node->n = n;  /** Set the value of the new node */
	new_node->prev = NULL;  /** New node will be the new head, so prev is NULL */
	new_node->next = *head;  /** Set next to the current head */

	/** If the list is not empty, update the previous head node */
	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;  /** Update the head to the new node */

	return (new_node);  /** Return the new node */
}

