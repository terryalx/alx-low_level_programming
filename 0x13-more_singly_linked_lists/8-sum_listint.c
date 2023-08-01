#include "lists.h"

/**
  * sum_listint - the sum of all the data of listint list
  * @head: pointer
  *
  * Return: sum or (0) if failed
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
