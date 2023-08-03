#include "main.h"

/**
 * get_bit - get the value of a bit at a given index[]
 * @n: bit int
 * @index: index value at 0
 * Return: If error -1 or value -> bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int h = 8;

	if (index >= sizeof(n) * h)
		return (-1);

	return ((n >> index) & 1);
}
