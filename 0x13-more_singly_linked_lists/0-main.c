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
    listint_t *new;  /* Declare a pointer to a new node */
    listint_t hello = {8, NULL}; /* Initialize a node with value 8 and no next node */
    size_t n; /* Variable to store the number of nodes */

    head = &hello; /* Point head to the hello node */
    new = malloc(sizeof(listint_t)); /* Allocate memory for the new node */
    if (new == NULL) /* Check if memory allocation failed */
    {
        printf("Error\n"); /* Print error message */
        return (1); /* Return error code */
    }
    new->n = 9; /* Assign value 9 to the new node */
    new->next = head; /* Link the new node to the list */
    head = new; /* Update the head to point to the new node */
    n = print_listint(head); /* Call the function to print the list and get the number of nodes */
    printf("-> %lu elements\n", n); /* Print the number of nodes */
    free(new); /* Free the allocated memory */
    return (0); /* Return success code */
}

