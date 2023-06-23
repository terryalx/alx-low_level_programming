#include "main.h"

/**
 * print_triangle - print a triangle
 * followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 0; b < (size - a); b++)
			{
				_putchar(' ');
			}
			for (c = 0; c < a; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
