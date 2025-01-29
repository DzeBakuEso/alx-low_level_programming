#include "search_algos.h"

/**
 * create_skiplist - Creates a skip list from an array of integers.
 * @array: Array of integers to be added to the skip list.
 * @size: Size of the array.
 * 
 * Return: Pointer to the head of the skip list, or NULL on failure.
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
    skiplist_t *head = NULL, *node = NULL, *express_node = NULL;
    size_t i;

    if (!array || size == 0)
        return (NULL);

    /* Create the head node */
    head = malloc(sizeof(skiplist_t));
    if (!head)
        return (NULL);
    head->n = array[0];
    head->index = 0;
    head->next = NULL;
    head->express = NULL;

    node = head;

    /* Create the rest of the skiplist nodes */
    for (i = 1; i < size; i++)
    {
        node->next = malloc(sizeof(skiplist_t));
        if (!node->next)
            return (NULL);
        node = node->next;
        node->n = array[i];
        node->index = i;
        node->next = NULL;
        node->express = NULL;
    }

    /* Add express lane to the list */
    node = head;
    express_node = head;

    while (express_node && express_node->next)
    {
        if (express_node->index % 2 == 0)
            express_node->express = express_node->next;
        express_node = express_node->next;
    }

    return (head);
}

/**
 * print_skiplist - Prints a skip list.
 * @list: Pointer to the head of the skip list.
 */
void print_skiplist(const skiplist_t *list)
{
    const skiplist_t *node = list;

    while (node)
    {
        printf("Value at index [%lu] = [%d]\n", node->index, node->n);
        if (node->express)
            printf("Express lane to index [%lu] = [%d]\n", node->express->index, node->express->n);
        node = node->next;
    }
}

/**
 * free_skiplist - Frees a skip list.
 * @list: Pointer to the head of the skip list.
 */
void free_skiplist(skiplist_t *list)
{
    skiplist_t *node;

    while (list)
    {
        node = list;
        list = list->next;
        free(node);
    }
}
