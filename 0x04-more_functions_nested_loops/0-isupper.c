#include "main.h"

/**
 * _isupper - check if a given character is uppercase
 * @c: a given character
 * Return: 1 if c is uppercase or 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
