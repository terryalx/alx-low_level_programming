#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: stores amount of places to copy
 * Return: value of @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int num;

	for (num = 0; num < n && src[num] != '\0'; num++)
	{
		dest[num] = src[num];
	}
	for (; num < n; num++)
	{
		dest[num] = '\0';
	}

	return (dest);
}
