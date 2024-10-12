#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table.
 * @ht: The hash table to look into.
 * @key: The key you are looking for.
 *
 * Return: The value assod with the element, or NULL if key couldn't be found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

/* Check if the hash table or key is NULL or if the key is empty */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

/* Get the index in the hash table using the key_index function */
	index = key_index((const unsigned char *)key, ht->size);

/* Traverse the linked list at that index to find the key */
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);  /* Return value if the key is found */
		node = node->next;
	}

	return (NULL);  /* Return NULL if key was not found */
}
