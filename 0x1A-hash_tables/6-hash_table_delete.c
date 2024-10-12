#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 *
 * Description: Frees all nodes and the array in the hash table.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current_node;
	hash_node_t *temp;

	if (ht == NULL)
		return;

/* Free each linked list in the array */
	for (index = 0; index < ht->size; index++)
	{
		current_node = ht->array[index];
		while (current_node != NULL)
		{
			temp = current_node;
			current_node = current_node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

/* Free the array and the hash table itself */
	free(ht->array);
	free(ht);
}
