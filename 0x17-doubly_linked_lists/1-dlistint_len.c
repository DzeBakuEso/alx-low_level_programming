#include "lists.h"  /** Include the header file with the prototype */

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;  /** Initialize the counter */

	/** Traverse the list and count the nodes */
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);  /** Return the number of nodes */
}

