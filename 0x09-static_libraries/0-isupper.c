#include "main.h"

/**
 * _isupper - checking for uppercase character.
 * @c: arg character
 * Return: 1 (uppercase letter) or 0 (is not uppercase)
 */

int _isupper(int c)
{
	int i;

	if (c >= 65 && c <= 90)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}

	return (i);
}
