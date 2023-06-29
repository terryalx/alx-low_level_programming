#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @s: string
 * Return: output
 */

char *cap_string(char *s)
{
	int itt = 0;

	if (s[itt] >= 97 && s[itt] <= 122)
	{
		s[itt] -= 32;
	}
	while (s[itt] != '\0')
	{
		if (s[itt] == ' ' || s[itt] == '\n' || s[itt] == '\t'
		    || s[itt] == ',' || s[itt] == ';' || s[itt] == '.'
		    || s[itt] == '!' || s[itt] == '?' || s[itt] == '"'
		    || s[itt] == '(' || s[itt] == ')' || s[itt] == '{'
		    || s[itt] == '}')
		{
			if (s[itt + 1] >= 97 && s[itt + 1] <= 122)
			{
				s[itt + 1] -= 32;
			}
		}
		itt++;
	}

	return (s);
}
