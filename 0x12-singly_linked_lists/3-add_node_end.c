#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and added to the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node;  /* Pointer to the new node */
    list_t *temp = *head;  /* Temporary pointer to traverse the list */

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
        free(new_node);  /* Free the allocated memory for the node if string duplication fails */
        return (NULL);
    }

    new_node->len = strlen(str);  /* Set the length of the string */
    new_node->next = NULL;  /* New node will be the last node, so next is NULL */

    /* Check if the list is empty */
    if (*head == NULL)
    {
        *head = new_node;  /* Set the new node as the head of the list */
    }
    else
    {
        /* Traverse to the end of the list */
        while (temp->next != NULL)
        {
            temp = temp->next;  /* Move to the next node */
        }
        temp->next = new_node;  /* Set the new node as the next node of the last node */
    }

    return (new_node);  /* Return the address of the new node */
}

