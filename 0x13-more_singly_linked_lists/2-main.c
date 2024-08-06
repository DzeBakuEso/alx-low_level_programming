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
    add_nodeint(&head, 0); /* Add node with value 0 */
    add_nodeint(&head, 1); /* Add node with value 1 */
    add_nodeint(&head, 2); /* Add node with value 2 */
    add_nodeint(&head, 3); /* Add node with value 3 */
    add_nodeint(&head, 4); /* Add node with value 4 */
    add_nodeint(&head, 98); /* Add node with value 98 */
    add_nodeint(&head, 402); /* Add node with value 402 */
    add_nodeint(&head, 1024); /* Add node with value 1024 */
    print_listint(head); /* Print all elements in the list */
    return (0); /* Return success code */
}

