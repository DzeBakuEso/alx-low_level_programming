#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int first = 1;

/* If the hash table is NULL, do nothing */
	if (ht == NULL)
		return;

	printf("{");

/* Traverse through the array in the hash table */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
/* Add a comma before the next key-value pair */
			if (first == 0)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}

	printf("}\n");
}
