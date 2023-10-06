#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key from a hash table.
 * @ht: The hash table to look into.
 * @key: The key of the value to retrieve.
 *
 * Return: The value associated with the element if found, or NULL if the key
 * couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (!ht || !key || !strcmp(key, ""))
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (!strcmp(node->key, key))
		{
			return (node->value);
		}
		node = node->next;
	}

	return (NULL);
}

