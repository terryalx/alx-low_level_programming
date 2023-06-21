#include "main.h"

/**
 * print_times_table - time table
 * @n: number of the times table
 */

void print_times_table(int n)
{
	int a;
    int b;
    int d;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				d = b * a;
				if (b == 0)
				{
					_putchar(d + '0');
				} else if (d < 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(d + '0');
				} else if (d >= 10 && d < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((d / 10) + '0');
					_putchar((d % 10) + '0');
				} else if (d >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((d / 100) + '0');
					_putchar(((d / 10) % 10) + '0');
					_putchar((d % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
