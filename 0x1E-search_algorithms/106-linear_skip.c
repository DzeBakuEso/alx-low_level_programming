#include "search_algos.h"
#include <math.h> /* sqrt() */

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 *
 * @list: Pointer to the head of the skip list to search in
 * @value: The value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *node = list, *prev = NULL;
    size_t step = 0;

    /* Check if the list is empty */
    if (!list)
        return (NULL);

    /* Traverse the express lane to find the block containing the value */
    while (node && node->express)
    {
        prev = node;
        node = node->express;

        printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);

        if (node->n >= value)
            break;

        step++;
    }

    /* If node is NULL or the value is not within range */
    if (!node)
        return (NULL);

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, node->index);

    /* Now do a linear search within the range */
    node = prev;
    while (node && node->next && node->n <= value)
    {
        printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
        if (node->n == value)
            return (node);
        node = node->next;
    }

    return (NULL);
}
