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
	int round;

	for (round = 0; round <= 9; round++)
	{
		for (c = 0; c <=  14; c++)
		{
			if (ch >= 10)
			{
				_putchar((ch / 10) + 48);
				_putchar((ch % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
