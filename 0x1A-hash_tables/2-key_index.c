#include "hash_tables.h"

/**
 * key_index - Computes the index for a given key in a hash table.
 * @key: The key for which to compute the index.
 * @size: The size of the array of indexes in the hash table.
 *
 * Return: The index at which the key/value pair should be stored
 *         in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	val = 0

		if (size == val)
		{
			return (val);
		}

	hash = hash_djb2(key);

	return (hash % size);
}

