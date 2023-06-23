#include "main.h"

/**
 * print_diagonal - draw a diagonal line.
 * @n: length of diagonal
 */

void print_diagonal(int n)
{
	int l, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < n; l++)
		{
			j = 1;

			while (j <= l)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
