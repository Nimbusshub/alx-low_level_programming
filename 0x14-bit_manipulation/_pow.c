#include "main.h"
/**
 * _pow_recursion - it prints the power of x to y
 * @x: the base number
 * @y: the exponent
 * Return: the power of x to y
 */
int _pow(int x, int y)
{
	int power;

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y >= 1)
	{
		power = x * _pow(x, y - 1);
		return (power);
	}
	return (0);
}
