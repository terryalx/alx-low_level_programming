#include <stdio.h>

/**
 *main -> Prints the lowercase alphabet in reverse
 *Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{

		putchar(ch);
	}

	putchar(10); /* this is an ascii code for new line*/

	return (0);
}
