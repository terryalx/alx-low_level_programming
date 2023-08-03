#include "main.h"

/**
 * binary_to_uint - convert a binary number -> unsigned int
 * @b: string
 * Return: 0 if there is an unconvertable char
 * or converted decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int al;
	unsigned int power;
	int n;

	if (b == NULL)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
	}

	for (power = 1, al = 0, n--; n >= 0; n--, power *= 2)
	{
		if (b[n] == '1')
			al += power;
	}

	return (al);
}
