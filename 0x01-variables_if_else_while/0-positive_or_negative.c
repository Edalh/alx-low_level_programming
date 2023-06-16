#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
* main - Entry point
* Assigning a random number to the variable n each time it is executed'
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	if (n == 0)
	{
/* Executes when the boolean expression 1 is true */
		printf("%d is zero\n", n)
	} else if (n > 0)
	{
/* Executes when the boolean expression 2 is true */
	printf("%d is positive\n", n)
	}
	else
	{
/* executes when the none of the above condition is true */
	printf("%d is negative\n", n)
	}
	return (0);
}
