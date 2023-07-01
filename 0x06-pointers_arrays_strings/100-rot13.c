#include "main.h"

/**
 * rot13 - encrypts code
 * @s: encrypt string
 * Return: s
 */

char *rot13(char *s)
{
	int numa;
	int numb;
	char en1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char en2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (numa = 0; s[numa] != '\0'; numa++)
	{
		for (numb = 0; en1[numb]; numb++)
		{
			if (s[numa] == en1[numb])
			{
				s[numa] = en2[numb];
				break;
			}
		}
	}
	return (s);
}
