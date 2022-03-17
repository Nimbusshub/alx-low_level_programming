#include "main.h"

/**
 * print_most_numbers - prints number 0 to 9 but leave out 2 and 4
 * Description:  Program will print number 1 to 9 when called upon
 * but wont print 2 and 4
 * Return: void (Success)
 *
 */
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
