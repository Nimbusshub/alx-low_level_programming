#include "main.h"
/**
 * factorial - print the factors of n
 * @n: number the factor will start from
 * Return: the factors (success)
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n >= 1)
	{
		n = n * factorial(n - 1);
		return (n);
	}
	return (0);
}
