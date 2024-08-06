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
    int n; /* Variable to store the data of the removed node */

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

    /* Remove the head node and print its data */
    n = pop_listint(&head);
    printf("- %d\n", n);
    /* Print the list after removal */
    print_listint(head);

    /* Remove the head node and print its data again */
    n = pop_listint(&head);
    printf("- %d\n", n);
    /* Print the list after the second removal */
    print_listint(head);

    /* Free the remaining nodes and set head to NULL */
    free_listint2(&head);
    printf("%p\n", (void *)head);

    return (0);
}

