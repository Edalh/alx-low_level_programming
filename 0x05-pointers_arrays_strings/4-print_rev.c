#include "main.h"
/**
 * print_rev - prints a string, in reverse, + a new line.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int ileng = 0;
	int o;

	while (*s != '\0')
	{
		ileng++;
		s++;
	}
	s--;
	for (o = ileng; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
