#include "main.h"
/**
 * print_most_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number == '4' || number == '2')
			;
		else
			_putchar(number);
	}
	_putchar('\n');
}
