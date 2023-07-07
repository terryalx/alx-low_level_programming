#include "main.h"

/**
 * _strncat - concats two arrays
 * @dest: destination
 * @src: source array
 * @n: appended
 * Return: char value
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b;

	while (dest[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}

	return (dest);
}
