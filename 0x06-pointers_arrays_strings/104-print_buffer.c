#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 * Return: void
 */

void print_line(char *c, int s, int l)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= s)
		printf("%02x", c[l * 10 + j]);
		else
		printf("  ");
		if (j % 2)
		putchar(' ');
	}
	for (k = 0; k <= s; k++)
	{
		if (c[l * 10 + k] > 31 && c[l * 10 + k] < 127)
		putchar(c[l * 10 + k]);
		else
		putchar('.');
	}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int x;

	for (x = 0; x <= (size - 1) / 10 && size; x++)
	{
		printf("%08x: ", x * 10);
		if (x < size / 10)
		{
			print_line(b, 9, x);
		}
		else
		{
			print_line(b, size % 10 - 1, x);
		}
		putchar('\n');
	}
	if (size == 0)
	putchar('\n');
}