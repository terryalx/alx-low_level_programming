#include "main.h"

/**
 * print_number - print an integer.
 * @n: the number
 */

void print_number(int n)
{
	unsigned int _a;

	if (n < 0)
	{
		_a = -n;
		_putchar('-');
	}

	else
	{
		_a = n;
	}

	if (_a >= 10)
	{
		print_number(_a / 10);
	}

	_putchar('0' + (_a % 10));
}
