#include "hash_tables.h"

/**
 * replace_value - Replaces the value associated with a pre-existing key.
 * @ht: Double pointer to the hash_node_t list.
 * @key: The new key to associate with the value.
 * @value: The value to store in the node.
 */
void replace_value(hash_node_t **ht, const char *key, const char *value)
{
	hash_node_t *temp = *ht;

	while (temp && strcmp(temp->key, key))
		temp = temp->next;

	if (temp)
	{
		free(temp->value);
		temp->value = strdup(value);
	}
}

/**
 * check_key - Checks if a key exists in a hash table.
 * @ht: Pointer to the hash_node_t list.
 * @key: The key to look for.
 *
 * Return: 1 if the key is found, 0 otherwise.
 */
int check_key(hash_node_t *ht, const char *key)
{
	while (ht)
	{
		if (!strcmp(ht->key, key))
			return (1);
		ht = ht->next;
	}
	return (0);
}

