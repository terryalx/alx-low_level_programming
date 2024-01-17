#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array using jump search
 * @array: pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: value to search for
 * Return: the first index of the value in the array, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	/* Check for NULL array or empty size */
	if (array == NULL || size == 0)
		return (-1);

	/* Initialize variables for jump search */
	size_t i, jump_step, prev_index;

	/* Handle invalid input */
	jump_step = sqrt(size);
	for (i = prev_index = 0; prev_index < size && array[prev_index] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", prev_index, array[prev_index]);
		i = prev_index;
		prev_index += jump_step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, prev_index);

	/* Adjust the last index if it exceeds the array size */
	prev_index = prev_index < size - 1 ? prev_index : size - 1;

	/* Linear search within the identified range */
	for (; i < prev_index && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	/* Check if the value is found and return the index or -1 if not found */
	return (array[i] == value ? (int)i : -1);
}
