#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: singly linked list
 * The function sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *fr;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		fr = *head;
		*head = (*head)->next;
		free(fr);
	}
}
