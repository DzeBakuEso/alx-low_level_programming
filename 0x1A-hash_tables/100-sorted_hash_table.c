#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * sorted_hash_table_create - Creates a sorted hash table.
 * @size: The size of the new hash table.
 *
 * Return: A pointer to the new hash table, or NULL on failure.
*/
sorted_hash_table_t *sorted_hash_table_create(unsigned long int size)
{
	sorted_hash_table_t *new_table;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(sorted_hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = calloc(size, sizeof(sorted_list_t *));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

/**
 * sorted_hash_table_set - Adds an element to the sorted hash table.
 * @ht: The hash table to add or update the key/value.
 * @key: The key, a string that cannot be empty.
 * @value: The value associated with the key.
 *
 * Return: 1 on success, 0 on failure.
*/
int sorted_hash_table_set(sorted_hash_table_t *ht, const char *key,
			  const char *value)
{
	unsigned long int index;
	sorted_list_t *new_node, *current;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	new_node = malloc(sizeof(sorted_list_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

/* Code to insert into sorted order goes here */
/* Update the sorted linked list */

	return (1);
}

/**
 * sorted_hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to search.
 * @key: The key to look for.
 *
 * Return: The value associated with the key, or NULL if not found.
*/
char *sorted_hash_table_get(const sorted_hash_table_t *ht, const char *key)
{
	unsigned long int index;
	sorted_list_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}

/**
 * sorted_hash_table_print - Prints the sorted hash table.
 * @ht: The hash table to print.
*/
void sorted_hash_table_print(const sorted_hash_table_t *ht)
{
	sorted_list_t *current;

	if (ht == NULL)
		return;

	current = ht->shead;
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->next;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * sorted_hash_table_delete - Deletes a sorted hash table.
 * @ht: The hash table to delete.
*/
void sorted_hash_table_delete(sorted_hash_table_t *ht)
{
	sorted_list_t *current, *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
