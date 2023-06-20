#include "main.h"

/**
* jack_bauer -> prints 24 hours
*/

void jack_bauer(void)
{
	int h, s;

	for (h = 0; h < 24; h++)
	{
		for (s = 0; s < 60; s++)
		{
			if (h < 10)
			{
				_putchar('0');
				_putchar(h + '0');
			}
			else if (h >= 10)
			{
				_putchar((h / 10) + '0');
				_putchar((h % 10) + '0');
			}
			if (s < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(s + '0');
			}
			else if (s >= 10)
			{
				_putchar(':');
				_putchar((s / 10) + '0');
				_putchar((s % 10) + '0');
			}
			_putchar('\n');
		}

	}
}


