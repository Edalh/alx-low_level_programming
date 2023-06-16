#include <stdio.h>

/**
 * main - Entry point
 * print nums between 0 and 99 no similar two digits
 * Return: 0 (success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 9 ; a++)
	{
		for (b = a; b <= 9; b++)
		{
			if (a == b)
			{
				continue;

			}
			putchar(48 + a);
			putchar(48 + b);

			if (a == 8 && b == 9)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
