#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head; /* Pointer to the head of the list */
    listint_t *node; /* Pointer to the node at a specific index */

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

    /* Print the list */
    print_listint(head);

    /* Get the node at index 5 */
    node = get_nodeint_at_index(head, 5);
    
    /* Print the data of the node at index 5 */
    printf("%d\n", node->n);

    /* Print the list again */
    print_listint(head);

    /* Free the list and set head to NULL */
    free_listint2(&head);

    return (0); /* Return 0 to indicate successful execution */
}

