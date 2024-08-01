#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and added as the new node's data
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;  /* Pointer to the new node */

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        return (NULL);  /* Return NULL if memory allocation fails */
    }

    /* Duplicate the string and assign it to the new node */
    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);  /* Free allocated memory if string duplication fails */
        return (NULL);  /* Return NULL if string duplication fails */
    }

    /* Set the length of the string */
    new_node->len = strlen(new_node->str);

    /* Point the new node to the current head of the list */
    new_node->next = *head;

    /* Update the head to point to the new node */
    *head = new_node;

    return (new_node);  /* Return the address of the new node */
}

