#include "main.h"

/**
 * print_diagonal - program prints diagonal line
 * @n: n is the length of diagonal
 * Description:  Program will print diagonal line
 * Return: void (Success)
 *
 */
void print_diagonal(int n)
{
	int line = 0;
	int spaces;

	if (n > 0)
	{
		while (line < n)
		{
			for (spaces = 0; spaces < line; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			line++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
