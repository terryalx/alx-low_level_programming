#include "main.h"

/**
 * _strcpy -  copies string pointed to by src
 * @dest: string
 * @src: string
 * Return: Return value: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		dest[i] = src[i];
		if (*(src + i) == '\0')
		{
			break;
		}
	}

	return (dest);
}
