#include <stdlib.h>
#include "search_algos.h"

/**
 * free_list - Frees a singly linked list
 * @list: Pointer to the head of the list
 */
void free_list(listint_t *list)
{
    listint_t *temp;

    while (list)
    {
        temp = list;
        list = list->next;
        free(temp);
    }
}
