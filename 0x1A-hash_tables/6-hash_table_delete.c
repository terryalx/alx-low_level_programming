#include "hash_tables.h"

/**
 * free_list - Frees a linked list.
 * @head: Pointer to the hash_node_t list to be freed.
 */
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = temp;
	}
}

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Pointer to the hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int vall;

	if (!ht)
	{
		return;
	}

	for (vall = 0; vall < ht->size; vall++)
	{
		free_list(ht->array[vall]);
	}

	free(ht->array);
	free(ht);
}

