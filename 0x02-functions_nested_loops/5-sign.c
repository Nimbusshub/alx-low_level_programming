#include "main.h"

/**
 * print_sign - Function will print sign '+' '-' or '0' depending
 * on the value of n
 * @n: n is an integer
 * Return: 1 , 0 or -1 (Success)
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
