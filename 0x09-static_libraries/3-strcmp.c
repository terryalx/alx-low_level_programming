#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: string value
 */

int _strcmp(char *s1, char *s2)
{
	int num;

	num = 0;
	while (s1[num] != '\0' || s2[num] != '\0')
	{
		if (s1[num] != s2[num])
			return (s1[num] - s2[num]);
		num++;
	}

	return (0);
}
