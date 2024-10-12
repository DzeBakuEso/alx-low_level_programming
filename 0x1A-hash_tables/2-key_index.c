#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key to hash
 * @size: the size of the array of the hash table
 * Return: the index at which the key/value pair should be stored
 * in the array of the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
/* Use the hash function and compute the index */
unsigned long int hash = hash_djb2(key);
unsigned long int index = hash % size;
return (index);
}

