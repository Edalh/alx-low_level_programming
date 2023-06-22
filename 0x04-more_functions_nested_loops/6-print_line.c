#include "main.h"
/**
 * print_line - entry point
 * Description: Prints lines ___ :)
 * @n: number of lines
 * Return: void
 */
void print_line(int n)
{
	int underscore;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (underscore = 1; underscore <= n; underscore++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
