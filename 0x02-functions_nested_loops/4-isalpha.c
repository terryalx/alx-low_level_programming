#include "main.h"

/**
* _isalpha - checks for alphabetical letters
* @c: checking character
* Return: returns 0 or 1 depending on condition
*/

int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
