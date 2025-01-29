#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list
 *             using Jump search algorithm.
 * @list: Pointer to the head of the list
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step, prev;
    listint_t *node, *jump;

    if (!list || size == 0)
        return (NULL);

    step = sqrt(size);
    prev = 0;
    node = list;
    jump = list;

    while (jump->next && jump->index < size && jump->n < value)
    {
        node = jump;
        for (prev = 0; prev < step && jump->next; prev++)
            jump = jump->next;
        printf("Value checked at index [%lu] = [%d]\n", jump->index, jump->n);
    }
    printf("Value found between indexes [%lu] and [%lu]\n",
           node->index, jump->index);
    while (node && node->index <= jump->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
        if (node->n == value)
            return (node);
        node = node->next;
    }
    return (NULL);
}
