#include "main.h"

/**
 * print_numbers - prints number 0 to 9
 * Description:  Program will print number 1 to 9 when called upon
 * Return: void (Success)
 *
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c < '10'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
