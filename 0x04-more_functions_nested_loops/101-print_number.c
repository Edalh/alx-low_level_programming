#include "main.h"
/**
 * print_number - print an int numbers using _putchar
 * @n: the given number
 * Return: 0 (success)
 */
void print_number(int n)
{
	int a, b, dig, digs, power;
	unsigned int temp, numchar, num;

	dig = 0;
	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
	{
		temp = n;
	}

	num = temp;

	while (num >= 10)
	{
		num = num / 10;
		dig++;
	}
	digs = dig + 1;
	power = 1;
	a = 1;

	while (a < digs)
	{
		power = power * 10;
		a++;
	}
	b = power;
	while (b >= 1)
	{
		numchar = (temp / b) % 10;
		_putchar(numchar + '0');
		b = b / 10;
	}
}
