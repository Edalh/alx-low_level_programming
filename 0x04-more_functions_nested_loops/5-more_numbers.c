#include "main.h"
/**
 * more_numbers - entry point
 * Description: Prints numbers with _putchar
 * Return: void
 */
void more_numbers(void)
{
	int number, tens, ones, row;

	for (row = 1; row <= 10; row++)
	{
		for (number = 0; number <= 14; number++)
		{
			tens = number / 10;
			ones = number % 10;
			if (number > 9)
				_putchar(tens + '0');

			_putchar(ones + '0');
		}
		_putchar('\n');
	}
}
