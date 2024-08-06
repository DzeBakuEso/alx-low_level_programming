#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point to test the sum_listint function
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head; /* Pointer to the head of the list */
    int sum; /* Variable to store the sum of the list data */

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

    /* Calculate the sum of the list data */
    sum = sum_listint(head);
    
    /* Print the sum */
    printf("sum = %d\n", sum);
    
    /* Free the list */
    free_listint2(&head);

    return 0; /* Return success */
}

