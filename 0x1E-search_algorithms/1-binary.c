#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: -1 if not found || index of value
 */
int binary_search(int *array, size_t size, int value)
{
	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Initialize variables for binary search */
	size_t i, right, left;

	/* Binary search loop */
	for (left = 0, right = size - 1; right >= left;)
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

		/* If the middle element is greater, search the left sub-array */
		if (array[i] > value)
			right = i - 1;
		/* If the middle element is smaller, search the right sub-array */
		else
			left = i + 1;
	}

	/* If the value is not found, return -1 */
	return (-1);
}
