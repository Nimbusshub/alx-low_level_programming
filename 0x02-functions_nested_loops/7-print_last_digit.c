#include "main.h"

/**
 * print_last_digit - returns the value of the last digit
 * @n: integer of last digit
 * Description: Program returns last digit value
 * Return: integer  (Success)
 *
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (n < 0)
	{
		l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}

