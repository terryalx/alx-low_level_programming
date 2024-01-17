#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm.
 *
 * @array: Input array.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: Index of the number if found, -1 otherwise.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	double f;

	/* Check for NULL array */
	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		f = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = (size_t)(low + f);

		printf("Value checked array[%d]", (int)pos);

		/* Check if the calculated position is out of range */
		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		/* Check if the value is found at the calculated position */
		if (array[pos] == value)
			return ((int)pos);

		/* Adjust the search range based on the comparison with the value */
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

		/* Break out of the loop if the search range becomes a single element */
		if (low == high)
			break;
	}

	/* Return -1 if the value is not found in the array */
	return (-1);
}
