#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc:
 * malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		n_ptr =  malloc(new_size);
		if (n_ptr == NULL)
			free(n_ptr);
		return (n_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size || ptr != NULL)
	{
		n_ptr = malloc(new_size);
		if (n_ptr == NULL)
			return (NULL);

		/* Copy the values in ptr to n_ptr */
		i = 0;
		while (i < old_size)
		{
			*((char *)n_ptr + i) = *((char *)ptr + i);
			i++;
		}
	}

	free(ptr);
	return (n_ptr);
}
