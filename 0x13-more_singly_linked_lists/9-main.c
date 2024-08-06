#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point to test the insert_nodeint_at_index function
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head; /* Pointer to the head of the list */

    head = NULL; /* Initialize head to NULL */
    
    /* Add nodes to the end of the list */
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);

    /* Print the list before insertion */
    print_listint(head);
    printf("-----------------\n");

    /* Insert a new node at index 5 */
    insert_nodeint_at_index(&head, 5, 4096);

    /* Print the list after insertion */
    print_listint(head);

    /* Free the list */
    free_listint2(&head);

    return (0); /* Return success */
}

