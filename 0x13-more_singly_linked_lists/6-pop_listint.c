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
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;

	new_node = (*head)->next;

	free(*head);

	*head = new_node;

	return (n);
}
