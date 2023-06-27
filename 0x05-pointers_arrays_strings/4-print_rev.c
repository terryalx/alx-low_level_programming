#include "main.h"

/**
 * print_rev -> prints a string, in reverse, followed by a new line.
 * @s: the character
 */

void print_rev(char *s)
{
	int i, length;

	i = 0;
	while (s[i])
	{
		i++;
	}

	length = i;
	while (length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
