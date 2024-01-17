#include "search_algos.h"

/**
 * rec_search - searches for a value in an array of integers
 * using a modified Binary search algorithm.
 *
 * @array: Input array.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: Index of the number if found, -1 otherwise.
 */
int rec_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	/* Check for NULL array or empty size */
	if (array == NULL || size == 0)
		return (-1);

	/* Print the current state of the array being searched */
	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	/* Adjust the middle index for even-sized arrays */
	if (half && size % 2 == 0)
		half--;

	/* If the value is found at the middle index, continue searching in the right half */
	if (value == array[half])
	{
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half);
	}

	/* If the value is smaller than the middle element, search in the right half */
	if (value < array[half])
		return (rec_search(array, half + 1, value));

	/* If the value is larger than the middle element, search in the right half */
	half++;
	return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - calls rec_search to return the index of the number.
 *
 * @array: Input array.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: Index of the number if found, -1 otherwise.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	/* Call rec_search to get the index */
	index = rec_search(array, size, value);

	/* Check if the index is valid and if the value is found at that index */
	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
