#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from the second string
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int nlen, l1 = 0, l2 = 0, i, j, k = 0;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;

	if (n > l2)
		nlen = l1 + l2;
	else
		nlen = l1 + n;

	string = malloc((nlen + 1) * sizeof(char));
	if (string == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		string[k] = s1[i];
		k++;
	}

	for (j = 0; k < nlen; j++)
	{
		string[k] = s2[j];
		k++;
	}
	string[nlen] = '\0';

	return (string);
}
