#include "main.h"

/**
 * leet -  encode a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: string
 * Return: (s)
 */

char *leet(char *s)
{
	int a, b;
	char char_[] = "aAeEoOtTlL";
	char rep[] = "4433007711";

	for (a = 0; s[a] != '\0'; a++)
	{
		b = 0;
		while (char_[b] != '\0')
		{
			if (s[a] == char_[b])
			{
				s[a] = rep[b];
			}
			b++;
		}
	}

	return (s);
}
