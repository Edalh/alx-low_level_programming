#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
* lastDigit - calculating the last digit of n
* @n: Assigning a random number to the variable n each time it is excuted
* Return: lastDigit
 */
/* betty style doc for function main goes there */
int lastDigit(int n)
{
	int lastDigit = n % 10;

	return (lastDigit);
}
/**
* main - Entry point
* Assigning a random number to the variable n each time it is executed
* Return: Always 0 (Success)
 */
int main(void)
{
	int n, last_digit;
	char l_d_o[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = lastDigit(n);
	if (last_digit > 5)
		printf("%s %d is %d and is greater than 5\n", l_d_o, n, last_digit);
	else if (last_digit == 0)
		printf("%s %d is %d and is 0\n", l_d_o, n, last_digit);
	else
		printf("%s %d is %d and is less than 6 and not 0\n", l_d_o, n, last_digit);
	/* your code goes there */
	return (0);
}
