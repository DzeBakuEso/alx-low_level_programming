#include <stdlib.h>
#include "search_algos.h"

/**
 * create_list - Creates a singly linked list from an array
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 *
 * Return: Pointer to the head of the linked list
 */
listint_t *create_list(int *array, size_t size)
{
    listint_t *head = NULL, *temp = NULL, *new_node;
    size_t i;

    for (i = 0; i < size; i++)
    {
        new_node = malloc(sizeof(listint_t));
        if (!new_node)
            return (NULL);

        new_node->n = array[i];
        new_node->index = i;
        new_node->next = NULL;

        if (!head)
            head = new_node;
        else
            temp->next = new_node;

        temp = new_node;
    }
    return (head);
}
