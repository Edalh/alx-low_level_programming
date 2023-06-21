#include "main.h"

/**
  * _islower - Checks for lowercase letters
  * @l: The letter to be checked
  *
  * Return: 1 for lowercase letters otherwise 0 for anything else
  */
int _islower(int l)
{
	if (l >= 97 && l <= 122)
	{
		return (1);
	}

	return (0);
}
