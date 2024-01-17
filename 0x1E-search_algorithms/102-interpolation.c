#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: the first index where the value is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	/* Check for NULL array */
	if (array == NULL)
		return (-1);

	/* Initialize variables for interpolation search */
	size_t i, l, r;

	/* Interpolation search loop */
	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));

		/* Check if the calculated index is within the array bounds */
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		/* Check if the value is found at the calculated index */
		if (array[i] == value)
			return (i);
		/* Adjust the search range based on the comparison with the value */
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	/* Return -1 if the value is not found in the array */
	return (-1);
}
