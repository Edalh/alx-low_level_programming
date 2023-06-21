#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int r, c;
	int mult = 0;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			mult = (r * c);
			if (mult < 10)
			{
				if (c != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mult + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			if (c != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
