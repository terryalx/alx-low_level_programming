#include "main.h"

/**
* print_alphabet -> prints the lowercase alphabets
*/

void print_alphabet(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
