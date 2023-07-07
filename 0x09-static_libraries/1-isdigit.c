#include "main.h"

/**
 * _isdigit - checking for a digit (0 through 9)
 * @c: arg
 * Return: 1 (uppercase letter) or 0 (not)
 */

int _isdigit(int c)
{
	int i;

	if (c >= 48 && c <= 57)
	{
		i = 1;
	}
	else
	{
		i =  0;
	}

	return (i);
}
