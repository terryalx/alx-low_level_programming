#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list_t list
 * @head: first element in the list
 * @str: added
 * Return: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t count;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	for (count = 0; str[count] != '\0'; count++)
		;
	new_node->len = count;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
