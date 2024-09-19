#include "lists.h"
#include <stdlib.h>  /** Added for free() **/

/**
 * delete_dnodeint_at_index - Deletes a node at a given index.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;  /** Pointer to traverse the list **/
	dlistint_t *node_to_delete = NULL;  /** Node to delete **/
	unsigned int i;

	if (!head || !*head)  /** Check for empty list **/
		return (-1);

	for (i = 0; current && i < index; i++)
	{
		current = current->next;  /** Traverse to the node to delete **/
	}

	if (!current)  /** Index out of range **/
		return (-1);

	node_to_delete = current;
	if (node_to_delete->prev)
		node_to_delete->prev->next = node_to_delete->next;  /** Update prev link **/
	if (node_to_delete->next)
		node_to_delete->next->prev = node_to_delete->prev;  /** Update next link **/
	if (node_to_delete == *head)
		*head = node_to_delete->next;  /** Update head if necessary **/

	free(node_to_delete);  /** Free the memory of the node **/
	return (1);
}

