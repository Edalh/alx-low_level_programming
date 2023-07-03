#include "main.h"
/**
 * _memset - fill a block of memory
 * @s: starting address of memory
 * @b: the constant byte
 * @n: number of bytes to be changed pointed to
 * by s
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
