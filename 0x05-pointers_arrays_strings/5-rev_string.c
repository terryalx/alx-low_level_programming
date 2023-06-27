#include "main.h"

/**
 * rev_string -  a function that reverses a string.
 * @s:  the character
 */

void rev_string(char *s)
{
	int a, b, len;
	char temp;

	a = 0;
	while (*(s + a) != '\0')
	{
		a++;
	}

	len = a - 1;
	for (b = 0; b < len; b++)
	{
		temp = s[b];

		s[b] = s[len];
		s[len] = temp;

		len--;
	}
}
