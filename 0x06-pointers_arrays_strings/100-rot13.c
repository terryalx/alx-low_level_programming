#include "main.h"

/**
 * rot13 - encrypts code
 * @s: string to encrypt
 * Return: char value
 */

char *rot13(char *s)
{
	int a;
	int b;

	char encode1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char encode2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; encode1[b]; b++)
		{
			if (s[a] == encode1[b])
			{
				s[a] = encode2[b];
				break;
			}
		}
	}
	
	return (s);
}
