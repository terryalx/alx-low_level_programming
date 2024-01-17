#include "search_algos.h"

/**
 * _binary_search - searches for the value to be sorted
 * @array: array of integers
 * @left: left index of the sub-array
 * @right: right index of the sub-array
 * @value: value to search for
 * Return: -1 if not found || index of value
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	/* Check for NULL array */
	if (array == NULL)
		return (-1);

	/* Binary search loop */
	while (right >= left)
	{
		/* Print the current sub-array being searched */
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		/* Calculate the middle index of the current sub-array */
		i = left + (right - left) / 2;

		/* Check if the middle element is the target value */
		if (array[i] == value)
			return (i);
		/* Adjust the search range based on the comparison with the value */
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	/* Return -1 if the value is not found in the sub-array */
	return (-1);
}


/**
 * exponential_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: index of the value || -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t right;

	/* Check for NULL array or empty size */
	if (array == NULL || size == 0)
		return (-1);

	/* Check if the value is not at the first index before exponential search */
	if (array[0] != value)
	{
		/* Exponential search loop */
		for (; i < size && array[i] <= value; i *= 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	/* Determine the right bound for binary search */
	right = (i < size) ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);

	/* Call _binary_search for the identified range */
	return (_binary_search(array, i / 2, right, value));
}
