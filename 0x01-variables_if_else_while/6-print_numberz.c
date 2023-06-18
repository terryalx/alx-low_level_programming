#include <stdio.h>

/**
 *main -> Prints all single digit numbers of base 10 starting from 0
 *Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{

		putchar(ch);
	}

	putchar(10); /* ascii code for new line */

	return (0);
}
