#include "main.h"

/**
 *print_to_98 - prints all natural numbers from n to 98
 * @n: given number
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n; n < 98; n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (n; n > 98; n--)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	if (n == 98)
	{
		_putchar(n);
		_putchar('\n');
	}
}
