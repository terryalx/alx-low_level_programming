#include "main.h"

/**
 * more_numbers - 10 * 0 - 14,
 */

void more_numbers(void)
{
	int a, b, f;

	for (b = 1; b <= 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			f = a % 10;

			if (a >= 10)
			{
				_putchar(48 + a / 10);
			}
			_putchar(48 + f);
		}
		_putchar('\n');
	}
}
