#include <stdio.h>

/**
 * main - Entry point
 * Initial alphabet aka "a"
 * Return: 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if ((a != 'e') || (a != 'q'))
			putchar(a);
	}
	putchar('\n');
	return (0);
}
