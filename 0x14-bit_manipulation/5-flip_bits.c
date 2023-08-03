#include "main.h"

/**
 * flip_bits - convert one number to another number
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int rmf;
	int count;

	rmf = n ^ m;
	count = 0;

	while (rmf)
	{
		count++;
		rmf &= (rmf - 1);
	}

	return (count);
}
