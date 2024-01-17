#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in an array
 * @value: value to search for
 *
 * Return: index of value || -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate through the array */
	for (i = 0; i < size; i++)
	{
		/* Print the comparison being made */
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		/* If the value is found, return the index */
		if (array[i] == value)
			return (i);
	}

	/* Value not found in the array, return -1 */
	return (-1);
}

