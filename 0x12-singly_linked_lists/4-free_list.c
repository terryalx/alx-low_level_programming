#include "lists.h"

/**
 *free_list - free list_t
 *@head: points to head of list
 *Return: 0.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp->str);
		head = head->next;
		free(temp);
	}
}
