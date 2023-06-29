#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: char value @dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	a++;
	return (dest);
}
