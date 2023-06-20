#include "main.h"

/**
* print_sign -> prints a sign
* @s: argument passed
* Return: 1, 0 -1
*/

int print_sign(int s)
{
	if (s > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (s == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
