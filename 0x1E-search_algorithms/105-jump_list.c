#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list using Jump search.
 * @list: Pointer to the head of the list.
 * @size: Number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where the value is located, or NULL if
 * the value is not found or if the list is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	/* Check for NULL list or empty size */
	if (list == NULL || size == 0)
		return (NULL);

	/* Initialize variables for jump search */
	step = 0;
	step_size = sqrt(size);

	/* Jump search loop */
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
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
