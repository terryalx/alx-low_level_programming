#include "main.h"

/**
 * print_numbers - print from 0 to 9
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}

	putchar('\n');
}
