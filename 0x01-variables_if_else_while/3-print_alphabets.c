#include <stdio.h>

/**
 * main - Entry point
 * Initial alphabet aka "a"
 * Return: 0 (Success)
 */
int main(void)
{
	char a, A;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (A = 'A'; A <= 'Z'; A++)
		putchar(A);
	putchar('\n');
	return (0);
}
