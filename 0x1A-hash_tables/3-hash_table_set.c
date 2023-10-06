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

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Double pointer to the hash_node_t list.
 * @key: The new key to add to the node.
 * @value: The value to add to the node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);

	if (*head == NULL)
	{
		new->next = NULL;
	}
	else
	{
		new->next = *head;
	}
	*head = new;

	return (*head);
}

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add the element to.
 * @key: The key of the element, which determines the index in the array.
 * @value: The value of the element to store in the array.
 *
 * Return: 1 on success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (check_key(ht->array[index], key))
	{
		replace_value(&ht->array[index], key, value);
	}
	else
	{
		if (!add_node(&ht->array[index], key, value))
			return (0);
	}

	return (1);
}

