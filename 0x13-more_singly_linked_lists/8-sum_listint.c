#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) in a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all the data (n) in the list. If the list is empty, returns 0.
 */
int sum_listint(listint_t *head)
{
    int sum = 0; /* Initialize sum to 0 */
    listint_t *current = head; /* Pointer to traverse the list */

    /* Traverse the list and accumulate the sum */
    while (current != NULL)
    {
        sum += current->n; /* Add the current node's data to sum */
        current = current->next; /* Move to the next node */
    }

    return sum; /* Return the total sum */
}

