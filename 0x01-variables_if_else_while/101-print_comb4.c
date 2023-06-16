#include <stdio.h>

/**
 * main - prints out all possible combos of 3 digits
 * no similar three digits
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = a; b <= 9 ; b++)
		{
			for (c = b; c <= 9; c++)
			{
				if (a == b || a == c || b == c)
				{
					continue;
				}
				putchar(48 + a);
				putchar(48 + b);
				putchar(48 + c);

				if (a == 7 && b == 8 && c == 9)
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
	}
	putchar('\n');
	return (0);
}
