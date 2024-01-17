#include "search_algos.h"

/**
 * recursive_search - searches for a value in an array of integers
 * using the Binary search algorithm recursively.
 *
 * @array: Input array.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: Index of the number if found, -1 otherwise.
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	/* Check for NULL array or empty size */
	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - calls recursive_search to return the index of the number.
 *
 * @array: Input array.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: Index of the number if found, -1 otherwise.
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	/* Call recursive_search to get the index */
	index = recursive_search(array, size, value);

	/* Check if the index is valid and if the value is found at that index */
	if (array[index] != value && index >= 0)
		return (-1);

	return (index);
}
