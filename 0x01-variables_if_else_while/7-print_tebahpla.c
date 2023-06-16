#include <stdio.h>

/**
 *main - Entry point func
 *Return: 0 (success)
 */
int main(void)
{
	char z;

	for (z = 'z'; z >= 'a'; z--)
		putchar(z);
	putchar('\n');
	return (0);
}
