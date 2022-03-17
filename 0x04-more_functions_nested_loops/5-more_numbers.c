#include "main.h"

/**
 * more_numbers - prints number 1 to 14 10 times
 * Description:  Program will print number 1 to 14 10 times
 * when called upon
 * Return: void (Success)
 *
 */
void more_numbers(void)
{
	int c;
	int round = 0;

	while (round <= 9)
	{
		c = 0;
		while (c <= 14)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		round++;
}
