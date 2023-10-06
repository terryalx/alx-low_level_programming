#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array for the hash table.
 *
 * Return: A pointer to the newly created hash table, or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;

    if (size == 0)
        return (NULL);

    ht = malloc(sizeof(hash_table_t));
    if (!ht)
        return (NULL);

    ht->size = size;
    ht->array = calloc((size_t)size, sizeof(hash_node_t *));
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }

    return (ht);
}

