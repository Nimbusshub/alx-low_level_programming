#include "main.h"

/**
 * print_square - draws a square
 * @size: is the length of the square
 * Description:  Program will print square
 * Return: 1 if lowercase (Success)
 */
void print_square(int size)
{
	int row;
	int column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
