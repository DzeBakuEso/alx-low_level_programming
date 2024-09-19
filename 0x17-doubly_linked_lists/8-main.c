#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * test_deletions - Helper function to test deletion operations.
 * @head: Pointer to the head of the list.
 * @indexes: Array of indexes to delete.
 * @num: Number of indexes in the array.
 */
void test_deletions(dlistint_t **head, unsigned int indexes[], int num)
{
	int i;

	for (i = 0; i < num; i++)
	{
		delete_dnodeint_at_index(head, indexes[i]);
		print_dlistint(*head);
		printf("-----------------\n");
	}
}

/**
 * main - Check the code.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;
	unsigned int indexes_to_delete[] = {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	printf("-----------------\n");

	test_deletions(&head, indexes_to_delete,
		sizeof(indexes_to_delete) / sizeof(indexes_to_delete[0]));

	return (EXIT_SUCCESS);
}

