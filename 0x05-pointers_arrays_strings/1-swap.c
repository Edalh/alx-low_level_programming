#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer to be swaped
 * @b: integer to be swaped
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
