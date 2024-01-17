#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list
 * @value: value to search for
 * Return: pointer to the first node where the value is located, or NULL if
 * the value is not found or if the list is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	/* Check for NULL list */
	if (list == NULL)
		return (NULL);

	/* Linear skip list search loop */
	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		node = jump;

		/* Check if express lane is available */
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index, jump->n);
		}
		else
		{
			/* Traverse to the end of the list if express lane is not available */
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	/* Linear search within the identified range */
	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	/* Check if the value is found and return the node or NULL if not found */
	return (node->n == value ? node : NULL);
}
