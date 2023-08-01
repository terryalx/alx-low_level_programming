#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * @head: a pointer
 * Return: the head node's data (n)
 * 		if linked list is empty return(0)
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int i;

	if (*head == NULL)
		return (0);

	i = (*head)->i;

	new_node = (*head)->next;

	free(*head);

	*head = new_node;

	return (i);
}
