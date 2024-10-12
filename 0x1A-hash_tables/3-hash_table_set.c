#include "hash_tables.h"
#include <string.h>

/**
 * create_node - Creates a new node for the hash table
 * @key: The key for the node, cannot be an empty string
 * @value: The value associated with the key, must be duplicated
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	return (new_node);
}

/**
 * update_value - Updates the value of an existing node
 * @node: The node to update
 * @value: The new value to assign, must be duplicated
 *
 * Return: 1 on success, 0 on failure
 */
int update_value(hash_node_t *node, const char *value)
{
	char *new_value = strdup(value);

	if (!new_value)
		return (0);

	free(node->value);
	node->value = new_value;
	return (1);
}

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table
 * @key: The key, cannot be an empty string
 * @value: The value associated with the key, must be duplicated
 *
 * Return: 1 on success, 0 on failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current_node;

/* Check if key or ht is NULL or key is an empty string */
	if (!ht || !key || strlen(key) == 0 || !value)
		return (0);

/* Compute the index where the key/value pair should be stored */
	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

/* Check if the key already exists in the hash table and update the value */
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
			return (update_value(current_node, value));
		current_node = current_node->next;
	}

/* If key doesn't exist, create a new node and add it to the hash table */
	current_node = create_node(key, value);
	if (!current_node)
		return (0);

	current_node->next = ht->array[index];
	ht->array[index] = current_node;

	return (1);
}
