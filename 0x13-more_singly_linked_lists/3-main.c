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
    listint_t *head; /* Declare a pointer to the head of the list */

    head = NULL; /* Initialize head to NULL */
    add_nodeint_end(&head, 0); /* Add node with value 0 at the end */
    add_nodeint_end(&head, 1); /* Add node with value 1 at the end */
    add_nodeint_end(&head, 2); /* Add node with value 2 at the end */
    add_nodeint_end(&head, 3); /* Add node with value 3 at the end */
    add_nodeint_end(&head, 4); /* Add node with value 4 at the end */
    add_nodeint_end(&head, 98); /* Add node with value 98 at the end */
    add_nodeint_end(&head, 402); /* Add node with value 402 at the end */
    add_nodeint_end(&head, 1024); /* Add node with value 1024 at the end */
    print_listint(head); /* Print all elements in the list */
    return (0); /* Return success code */
}

