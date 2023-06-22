#include "main.h"
/**
 * _isdigit - input
 * Description: define if a character is a digit
 * @c: charater
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
