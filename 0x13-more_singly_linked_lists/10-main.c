#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point to test the delete_nodeint_at_index function
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

    /* Print the list before deletion */
    print_listint(head);
    printf("-----------------\n");

    /* Delete the node at index 5 */
    delete_nodeint_at_index(&head, 5);
    print_listint(head);
    printf("-----------------\n");

    /* Delete the node at index 0 */
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");

    /* Delete the node at index 0 again */
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");

    /* Continue deleting nodes at index 0 */
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");

    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");

    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");

    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");

    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");

    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");

    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");

    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("-----------------\n");

    delete_nodeint_at_index(&head, 0);
    print_listint(head);

    return (0); /* Return success */
}

