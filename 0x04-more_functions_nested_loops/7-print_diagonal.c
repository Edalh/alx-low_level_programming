#include "main.h"
/**
 * print_diagonal - entry point
 * Description: Prints diagonals
 * @n: number of spaces
 * Return: void
 */
void print_diagonal(int n)
{
	int row, diagonal;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < n; row++)
		{
			if (row > 0)
			{
				for (diagonal = 0; diagonal < row ; diagonal++)
				{
				_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
