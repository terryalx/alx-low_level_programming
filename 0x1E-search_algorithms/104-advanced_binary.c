#include "search_algos.h"

/**
 * advanced_binary_recursive - performs recursive binary search
 * @array: pointer to the first element
 * @left: starting index
 * @right: ending index
 * @value: value to search for
 * Return: -1 if not found, index where value is located otherwise
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	/* Check if the search range is invalid */
	if (right < left)
		return (-1);

	/* Print the current sub-array being searched */
	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	/* Calculate the middle index of the current sub-array */
	i = left + (right - left) / 2;

	/* Check if the middle element is the target value and is the first occurrence */
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);

	/* Recursively search the left or right sub-array based on the comparison with the value */
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	else
		return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: -1 if not found, index where the value is located otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	/* Check for NULL array or empty size */
	if (array == NULL || size == 0)
		return (-1);

	/* Call the recursive binary search function with the initial search range */
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
